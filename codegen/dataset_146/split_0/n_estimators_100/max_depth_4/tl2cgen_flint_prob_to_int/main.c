
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 463485;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41868206;
          result[5] += 617980;
        } else {
          result[0] += 5482936;
          result[1] += 4569114;
          result[2] += 0;
          result[3] += 4569114;
          result[4] += 14621165;
          result[5] += 13707342;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 30896602;
          result[1] += 1188330;
          result[2] += 0;
          result[3] += 848807;
          result[4] += 9336885;
          result[5] += 679046;
        } else {
          result[0] += 761294;
          result[1] += 380647;
          result[2] += 190323;
          result[3] += 6788205;
          result[4] += 3076896;
          result[5] += 31752306;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34825162;
          result[1] += 2082160;
          result[2] += 1265627;
          result[3] += 1143147;
          result[4] += 2817041;
          result[5] += 816533;
        } else {
          result[0] += 7233629;
          result[1] += 226050;
          result[2] += 13450029;
          result[3] += 11980698;
          result[4] += 3955890;
          result[5] += 6103374;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1215556;
          result[1] += 0;
          result[2] += 8914083;
          result[3] += 18233351;
          result[4] += 405185;
          result[5] += 14181495;
        } else {
          result[0] += 0;
          result[1] += 3681400;
          result[2] += 30678337;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 38177487;
        } else {
          result[0] += 4090445;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8180890;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35943697;
          result[3] += 6396759;
          result[4] += 0;
          result[5] += 609215;
        } else {
          result[0] += 258343;
          result[1] += 0;
          result[2] += 40689163;
          result[3] += 2002165;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 2147483;
          result[1] += 238609;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40324970;
          result[5] += 238609;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2221534;
          result[3] += 740511;
          result[4] += 17772278;
          result[5] += 22215348;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1867377;
          result[1] += 2489836;
          result[2] += 0;
          result[3] += 4357213;
          result[4] += 30500492;
          result[5] += 3734754;
        } else {
          result[0] += 31764862;
          result[1] += 1342177;
          result[2] += 894784;
          result[3] += 2460658;
          result[4] += 4473924;
          result[5] += 2013265;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60407;
          result[3] += 906111;
          result[4] += 1147740;
          result[5] += 40835413;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 582368;
          result[1] += 1019144;
          result[2] += 0;
          result[3] += 6551645;
          result[4] += 7861974;
          result[5] += 26934540;
        } else {
          result[0] += 286331;
          result[1] += 0;
          result[2] += 3054198;
          result[3] += 24338148;
          result[4] += 190887;
          result[5] += 15080107;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 32815480;
          result[1] += 999631;
          result[2] += 1309861;
          result[3] += 1309861;
          result[4] += 5342856;
          result[5] += 1171981;
        } else {
          result[0] += 1533916;
          result[1] += 39881839;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1533916;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 1255838;
          result[1] += 753503;
          result[2] += 18084072;
          result[3] += 14316557;
          result[4] += 1758173;
          result[5] += 6781527;
        } else {
          result[0] += 4432528;
          result[1] += 458537;
          result[2] += 33167541;
          result[3] += 3821145;
          result[4] += 764229;
          result[5] += 305691;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 16519104;
          result[2] += 6607641;
          result[3] += 0;
          result[4] += 16519104;
          result[5] += 3303820;
        } else {
          result[0] += 63818;
          result[1] += 0;
          result[2] += 40843671;
          result[3] += 1786910;
          result[4] += 0;
          result[5] += 255272;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 436037;
          result[1] += 654055;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39897411;
          result[5] += 1962167;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 39159995;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3789677;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1513835;
          result[1] += 216262;
          result[2] += 0;
          result[3] += 2854661;
          result[4] += 2335631;
          result[5] += 36029282;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 637866;
          result[3] += 27003012;
          result[4] += 425244;
          result[5] += 14883550;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 15584169;
          result[1] += 894784;
          result[2] += 3430008;
          result[3] += 10886549;
          result[4] += 4026531;
          result[5] += 8127629;
        } else {
          result[0] += 34445171;
          result[1] += 699000;
          result[2] += 3456167;
          result[3] += 893166;
          result[4] += 2990167;
          result[5] += 466000;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5726623;
          result[3] += 2863311;
          result[4] += 2863311;
          result[5] += 31496426;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 641039;
          result[2] += 10897678;
          result[3] += 21795356;
          result[4] += 0;
          result[5] += 9615598;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36442146;
          result[3] += 6507526;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 353980;
          result[1] += 0;
          result[2] += 35398082;
          result[3] += 6725635;
          result[4] += 0;
          result[5] += 471974;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30064771;
          result[3] += 0;
          result[4] += 0;
          result[5] += 12884901;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41989903;
          result[3] += 959769;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 169761;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41931103;
          result[5] += 848807;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1743943;
          result[1] += 243340;
          result[2] += 81113;
          result[3] += 2190068;
          result[4] += 2392852;
          result[5] += 36298354;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 572662;
          result[3] += 26533353;
          result[4] += 381774;
          result[5] += 15461882;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32220029;
          result[1] += 3141141;
          result[2] += 0;
          result[3] += 590907;
          result[4] += 6562187;
          result[5] += 435405;
        } else {
          result[0] += 7858876;
          result[1] += 365529;
          result[2] += 10965873;
          result[3] += 12062461;
          result[4] += 1736263;
          result[5] += 9960668;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 6442450;
          result[5] += 15032385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1590728;
          result[4] += 1590728;
          result[5] += 39768215;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 2202547;
          result[1] += 2202547;
          result[2] += 9911462;
          result[3] += 15417831;
          result[4] += 3303820;
          result[5] += 9911462;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28447185;
          result[3] += 12829123;
          result[4] += 557787;
          result[5] += 1115575;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 16106127;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29179548;
          result[3] += 12130823;
          result[4] += 0;
          result[5] += 1639300;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 381774;
          result[1] += 0;
          result[2] += 35505062;
          result[3] += 6681060;
          result[4] += 0;
          result[5] += 381774;
        } else {
          result[0] += 171114;
          result[1] += 0;
          result[2] += 41751873;
          result[3] += 1026685;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 993694;
          result[1] += 2760261;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36877097;
          result[5] += 2318619;
        } else {
          result[0] += 35188746;
          result[1] += 793731;
          result[2] += 0;
          result[3] += 176384;
          result[4] += 5115156;
          result[5] += 1675654;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 100232;
          result[1] += 50116;
          result[2] += 0;
          result[3] += 2054768;
          result[4] += 3307676;
          result[5] += 37436879;
        } else {
          result[0] += 5280356;
          result[1] += 1247328;
          result[2] += 3409364;
          result[3] += 14469008;
          result[4] += 5987176;
          result[5] += 12556438;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 7809031;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 7809031;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 42143450;
          result[1] += 0;
          result[2] += 439757;
          result[3] += 0;
          result[4] += 366464;
          result[5] += 0;
        } else {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 18790481;
          result[3] += 0;
          result[4] += 2684354;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11713547;
          result[4] += 0;
          result[5] += 31236125;
        } else {
          result[0] += 11302545;
          result[1] += 0;
          result[2] += 22605091;
          result[3] += 4521018;
          result[4] += 0;
          result[5] += 4521018;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 1077590;
          result[1] += 0;
          result[2] += 33559242;
          result[3] += 7081308;
          result[4] += 0;
          result[5] += 1231531;
        } else {
          result[0] += 812730;
          result[1] += 0;
          result[2] += 41074141;
          result[3] += 1000283;
          result[4] += 0;
          result[5] += 62517;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 34359738;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9761289;
          result[4] += 7809031;
          result[5] += 25379352;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2863311;
          result[3] += 0;
          result[4] += 40086361;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 4294967;
          result[1] += 4831838;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23085449;
          result[5] += 10737418;
        } else {
          result[0] += 1725876;
          result[1] += 394486;
          result[2] += 49310;
          result[3] += 936904;
          result[4] += 1972430;
          result[5] += 37870664;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23933787;
          result[4] += 491790;
          result[5] += 18524095;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24970740;
          result[3] += 8989466;
          result[4] += 0;
          result[5] += 8989466;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 526989;
          result[1] += 11857271;
          result[2] += 2107959;
          result[3] += 1317474;
          result[4] += 26876482;
          result[5] += 263494;
        } else {
          result[0] += 0;
          result[1] += 42644343;
          result[2] += 0;
          result[3] += 101776;
          result[4] += 203552;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36267007;
          result[1] += 1806125;
          result[2] += 108367;
          result[3] += 650205;
          result[4] += 3503884;
          result[5] += 614082;
        } else {
          result[0] += 8538955;
          result[1] += 509788;
          result[2] += 4588095;
          result[3] += 12489815;
          result[4] += 2294047;
          result[5] += 14528969;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 820694;
          result[1] += 1914953;
          result[2] += 9574767;
          result[3] += 23800137;
          result[4] += 820694;
          result[5] += 6018425;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 20173331;
          result[1] += 1952257;
          result[2] += 15618062;
          result[3] += 2603010;
          result[4] += 650752;
          result[5] += 1952257;
        } else {
          result[0] += 257955;
          result[1] += 0;
          result[2] += 39338289;
          result[3] += 2794523;
          result[4] += 42992;
          result[5] += 515911;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 380085;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42189501;
          result[5] += 380085;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19522578;
          result[5] += 23427094;
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          result[0] += 59404;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1069286;
          result[4] += 1485120;
          result[5] += 40335861;
        } else {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 8053063;
          result[3] += 8053063;
          result[4] += 16106127;
          result[5] += 8053063;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 10052051;
          result[1] += 3502987;
          result[2] += 0;
          result[3] += 1827645;
          result[4] += 5482936;
          result[5] += 22084051;
        } else {
          result[0] += 227246;
          result[1] += 113623;
          result[2] += 2613339;
          result[3] += 23633682;
          result[4] += 568117;
          result[5] += 15793662;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 354955;
          result[1] += 13488327;
          result[2] += 0;
          result[3] += 1419823;
          result[4] += 25556830;
          result[5] += 2129735;
        } else {
          result[0] += 0;
          result[1] += 42843361;
          result[2] += 0;
          result[3] += 0;
          result[4] += 106311;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36047685;
          result[1] += 965563;
          result[2] += 500662;
          result[3] += 1537748;
          result[4] += 3433112;
          result[5] += 464900;
        } else {
          result[0] += 12234149;
          result[1] += 1561806;
          result[2] += 4425117;
          result[3] += 8589934;
          result[4] += 9110536;
          result[5] += 7028128;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 1073741;
          result[2] += 4294967;
          result[3] += 4294967;
          result[4] += 9663676;
          result[5] += 23622320;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15258436;
          result[3] += 21757400;
          result[4] += 0;
          result[5] += 5933836;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 2863311;
          result[1] += 1431655;
          result[2] += 11453246;
          result[3] += 10021590;
          result[4] += 10021590;
          result[5] += 7158278;
        } else {
          result[0] += 625480;
          result[1] += 0;
          result[2] += 38904897;
          result[3] += 2752114;
          result[4] += 0;
          result[5] += 667179;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 332943;
          result[2] += 0;
          result[3] += 332943;
          result[4] += 41118485;
          result[5] += 1165301;
        } else {
          result[0] += 0;
          result[1] += 19822925;
          result[2] += 0;
          result[3] += 8259552;
          result[4] += 3303820;
          result[5] += 11563373;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1239391;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1525404;
          result[4] += 2621789;
          result[5] += 37563087;
        } else {
          result[0] += 2879307;
          result[1] += 599855;
          result[2] += 1079740;
          result[3] += 21354865;
          result[4] += 479884;
          result[5] += 16556019;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          result[0] += 29654423;
          result[1] += 1750814;
          result[2] += 492416;
          result[3] += 1832884;
          result[4] += 6182564;
          result[5] += 3036569;
        } else {
          result[0] += 6073691;
          result[1] += 578446;
          result[2] += 13304275;
          result[3] += 15184227;
          result[4] += 433835;
          result[5] += 7375196;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 42523373;
          result[2] += 0;
          result[3] += 0;
          result[4] += 426299;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 25264513;
          result[2] += 0;
          result[3] += 17685159;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6507526;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 16919568;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 8589934;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 14316557;
          result[5] += 8589934;
        } else {
          result[0] += 3435973;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5153960;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29163358;
          result[3] += 11135100;
          result[4] += 0;
          result[5] += 2651214;
        } else {
          result[0] += 111124;
          result[1] += 55562;
          result[2] += 40504930;
          result[3] += 2055805;
          result[4] += 0;
          result[5] += 222249;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 326613;
          result[4] += 40500071;
          result[5] += 2122987;
        } else {
          result[0] += 0;
          result[1] += 39370533;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 846762;
          result[1] += 47042;
          result[2] += 188169;
          result[3] += 1928736;
          result[4] += 2869583;
          result[5] += 37069378;
        } else {
          result[0] += 2909869;
          result[1] += 2211500;
          result[2] += 2909869;
          result[3] += 17692006;
          result[4] += 931158;
          result[5] += 16295268;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 13146454;
          result[1] += 1032444;
          result[2] += 2477865;
          result[3] += 10049122;
          result[4] += 6263493;
          result[5] += 9980292;
        } else {
          result[0] += 31695677;
          result[1] += 1881815;
          result[2] += 3247054;
          result[3] += 885560;
          result[4] += 4870581;
          result[5] += 368983;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 30678337;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 40086361;
          result[2] += 0;
          result[3] += 2863311;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20069940;
          result[3] += 15253154;
          result[4] += 401398;
          result[5] += 7225178;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 11930464;
          result[4] += 14316557;
          result[5] += 11930464;
        } else {
          result[0] += 1620742;
          result[1] += 0;
          result[2] += 28362991;
          result[3] += 6482969;
          result[4] += 0;
          result[5] += 6482969;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42990000))) ) ) {
          result[0] += 32212254;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 213946;
          result[1] += 0;
          result[2] += 39580022;
          result[3] += 3155704;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 204522;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42745150;
          result[5] += 0;
        } else {
          result[0] += 3579139;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 1789569;
          result[4] += 18790481;
          result[5] += 15211342;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 54435;
          result[1] += 0;
          result[2] += 272177;
          result[3] += 1524196;
          result[4] += 2177423;
          result[5] += 38921439;
        } else {
          result[0] += 2580309;
          result[1] += 249707;
          result[2] += 332943;
          result[3] += 15981273;
          result[4] += 4411497;
          result[5] += 19393941;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 9042036;
          result[2] += 0;
          result[3] += 1507006;
          result[4] += 32400630;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41564199;
          result[2] += 0;
          result[3] += 98962;
          result[4] += 1286510;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34877924;
          result[1] += 1727287;
          result[2] += 132868;
          result[3] += 963295;
          result[4] += 4417870;
          result[5] += 830426;
        } else {
          result[0] += 7141972;
          result[1] += 1174022;
          result[2] += 12033735;
          result[3] += 10957547;
          result[4] += 1565363;
          result[5] += 10077030;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 4294967;
          result[2] += 2863311;
          result[3] += 1431655;
          result[4] += 1431655;
          result[5] += 32928082;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11083786;
          result[3] += 24014870;
          result[4] += 0;
          result[5] += 7851015;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36814005;
          result[5] += 6135667;
        } else {
          result[0] += 1533916;
          result[1] += 0;
          result[2] += 39881839;
          result[3] += 1533916;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18649200;
          result[3] += 23170218;
          result[4] += 0;
          result[5] += 1130254;
        } else {
          result[0] += 676372;
          result[1] += 0;
          result[2] += 34664106;
          result[3] += 5749168;
          result[4] += 169093;
          result[5] += 1690932;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 25769803;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41457819;
          result[3] += 1491853;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 2538896;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39776051;
          result[5] += 634724;
        } else {
          result[0] += 22241794;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 9970459;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1583162;
          result[4] += 3064185;
          result[5] += 38302324;
        } else {
          result[0] += 0;
          result[1] += 983580;
          result[2] += 983580;
          result[3] += 23605927;
          result[4] += 1147510;
          result[5] += 16229074;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 4521018;
          result[2] += 0;
          result[3] += 3767515;
          result[4] += 32400630;
          result[5] += 2260509;
        } else {
          result[0] += 101296;
          result[1] += 42747080;
          result[2] += 0;
          result[3] += 0;
          result[4] += 101296;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33996318;
          result[1] += 726840;
          result[2] += 0;
          result[3] += 1156337;
          result[4] += 5186998;
          result[5] += 1883177;
        } else {
          result[0] += 9291153;
          result[1] += 1490090;
          result[2] += 10255330;
          result[3] += 9028196;
          result[4] += 4119662;
          result[5] += 8765239;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 33405301;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1930322;
          result[3] += 12547095;
          result[4] += 0;
          result[5] += 28472255;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2801065;
          result[3] += 34546476;
          result[4] += 0;
          result[5] += 5602131;
        } else {
          result[0] += 0;
          result[1] += 954437;
          result[2] += 23542783;
          result[3] += 13362120;
          result[4] += 318145;
          result[5] += 4772185;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 21474836;
          result[1] += 7579354;
          result[2] += 10105805;
          result[3] += 1263225;
          result[4] += 2526451;
          result[5] += 0;
        } else {
          result[0] += 1101273;
          result[1] += 0;
          result[2] += 31464961;
          result[3] += 8652864;
          result[4] += 0;
          result[5] += 1730572;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41821397;
          result[3] += 1128275;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1455921;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40947781;
          result[5] += 545970;
        } else {
          result[0] += 0;
          result[1] += 7279605;
          result[2] += 0;
          result[3] += 7279605;
          result[4] += 15287171;
          result[5] += 13103290;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 42444382;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 505290;
          result[5] += 0;
        } else {
          result[0] += 780903;
          result[1] += 2342709;
          result[2] += 0;
          result[3] += 3123612;
          result[4] += 16398966;
          result[5] += 20303481;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 394758;
          result[4] += 710564;
          result[5] += 41844350;
        } else {
          result[0] += 743073;
          result[1] += 0;
          result[2] += 594459;
          result[3] += 4904287;
          result[4] += 8322427;
          result[5] += 28385423;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 561433;
          result[1] += 280716;
          result[2] += 280716;
          result[3] += 7860070;
          result[4] += 1403584;
          result[5] += 32563150;
        } else {
          result[0] += 1130254;
          result[1] += 1695381;
          result[2] += 1412818;
          result[3] += 26137136;
          result[4] += 1130254;
          result[5] += 11443827;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 2213900;
          result[1] += 15497304;
          result[2] += 0;
          result[3] += 664170;
          result[4] += 24352907;
          result[5] += 221390;
        } else {
          result[0] += 34660553;
          result[1] += 434510;
          result[2] += 1604345;
          result[3] += 2272823;
          result[4] += 2640485;
          result[5] += 1336954;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 42743184;
          result[2] += 0;
          result[3] += 103244;
          result[4] += 103244;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 3014012;
          result[2] += 3014012;
          result[3] += 1507006;
          result[4] += 9042036;
          result[5] += 26372606;
        } else {
          result[0] += 197924;
          result[1] += 1187548;
          result[2] += 19396626;
          result[3] += 15438131;
          result[4] += 1781322;
          result[5] += 4948119;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 27331610;
          result[1] += 7809031;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 0;
        } else {
          result[0] += 1170928;
          result[1] += 0;
          result[2] += 38406468;
          result[3] += 2857066;
          result[4] += 46837;
          result[5] += 468371;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 629760;
          result[1] += 251904;
          result[2] += 503808;
          result[3] += 0;
          result[4] += 38163492;
          result[5] += 3400707;
        } else {
          result[0] += 0;
          result[1] += 36814005;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 229064;
          result[1] += 57266;
          result[2] += 286331;
          result[3] += 1088058;
          result[4] += 1488921;
          result[5] += 39800030;
        } else {
          result[0] += 6113557;
          result[1] += 77386;
          result[2] += 1238188;
          result[3] += 15090425;
          result[4] += 3869339;
          result[5] += 16560774;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 33048502;
          result[1] += 2207693;
          result[2] += 0;
          result[3] += 1639045;
          result[4] += 5017485;
          result[5] += 1036946;
        } else {
          result[0] += 9633571;
          result[1] += 1605595;
          result[2] += 10034970;
          result[3] += 10570168;
          result[4] += 2675992;
          result[5] += 8429375;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 14316557;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2321603;
          result[3] += 2321603;
          result[4] += 5804009;
          result[5] += 32502455;
        } else {
          result[0] += 0;
          result[1] += 2684354;
          result[2] += 2684354;
          result[3] += 20803747;
          result[4] += 0;
          result[5] += 16777215;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26430567;
          result[3] += 12554519;
          result[4] += 660764;
          result[5] += 3303820;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 30064771;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 676372;
          result[1] += 0;
          result[2] += 33987733;
          result[3] += 7440100;
          result[4] += 0;
          result[5] += 845466;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37260974;
          result[3] += 4550958;
          result[4] += 0;
          result[5] += 1137739;
        } else {
          result[0] += 235125;
          result[1] += 0;
          result[2] += 41852418;
          result[3] += 783753;
          result[4] += 0;
          result[5] += 78375;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 423149;
          result[1] += 211574;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42103373;
          result[5] += 211574;
        } else {
          result[0] += 23264406;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8351325;
          result[5] += 11333941;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 44926;
          result[1] += 1482572;
          result[2] += 0;
          result[3] += 2336174;
          result[4] += 2740512;
          result[5] += 36345486;
        } else {
          result[0] += 260301;
          result[1] += 0;
          result[2] += 1041204;
          result[3] += 30715523;
          result[4] += 0;
          result[5] += 10932644;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 23622320;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19327352;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42748031;
          result[2] += 0;
          result[3] += 0;
          result[4] += 201641;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33466025;
          result[1] += 1093030;
          result[2] += 64295;
          result[3] += 1510954;
          result[4] += 5979520;
          result[5] += 835846;
        } else {
          result[0] += 5075870;
          result[1] += 858993;
          result[2] += 9839379;
          result[3] += 9683198;
          result[4] += 4138786;
          result[5] += 13353443;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9911462;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1753047;
          result[2] += 3506095;
          result[3] += 5259143;
          result[4] += 876523;
          result[5] += 31554861;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 1130254;
          result[2] += 3390763;
          result[3] += 32777381;
          result[4] += 1130254;
          result[5] += 4521018;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30422685;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 7158278;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 19733633;
          result[1] += 3482405;
          result[2] += 9286415;
          result[3] += 8125613;
          result[4] += 0;
          result[5] += 2321603;
        } else {
          result[0] += 2526451;
          result[1] += 0;
          result[2] += 35370318;
          result[3] += 5052902;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 981706;
          result[1] += 0;
          result[2] += 33991598;
          result[3] += 6749234;
          result[4] += 0;
          result[5] += 1227133;
        } else {
          result[0] += 979553;
          result[1] += 0;
          result[2] += 40463112;
          result[3] += 1431655;
          result[4] += 0;
          result[5] += 75350;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 454493;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42040685;
          result[5] += 454493;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32641751;
          result[5] += 10307921;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1080494;
          result[4] += 810371;
          result[5] += 41058806;
        } else {
          result[0] += 4043379;
          result[1] += 1707204;
          result[2] += 988381;
          result[3] += 12040284;
          result[4] += 3594114;
          result[5] += 20576307;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 403283;
          result[1] += 17542824;
          result[2] += 0;
          result[3] += 201641;
          result[4] += 24196998;
          result[5] += 604924;
        } else {
          result[0] += 31407492;
          result[1] += 580009;
          result[2] += 1363021;
          result[3] += 3219050;
          result[4] += 2987046;
          result[5] += 3393053;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 42521247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 428425;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 1533916;
          result[1] += 1533916;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 33746171;
        } else {
          result[0] += 0;
          result[1] += 1561806;
          result[2] += 5986924;
          result[3] += 27331610;
          result[4] += 780903;
          result[5] += 7288429;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 715827;
          result[2] += 7874106;
          result[3] += 0;
          result[4] += 12169074;
          result[5] += 22190664;
        } else {
          result[0] += 2312674;
          result[1] += 991146;
          result[2] += 25769803;
          result[3] += 8259552;
          result[4] += 991146;
          result[5] += 4625349;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17448304;
          result[3] += 20132659;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 401398;
          result[1] += 0;
          result[2] += 35323095;
          result[3] += 7024479;
          result[4] += 0;
          result[5] += 200699;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 3221225;
          result[1] += 0;
          result[2] += 31138512;
          result[3] += 1073741;
          result[4] += 0;
          result[5] += 7516192;
        } else {
          result[0] += 315342;
          result[1] += 0;
          result[2] += 41183753;
          result[3] += 1450576;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 583027;
          result[1] += 971712;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40228879;
          result[5] += 1166054;
        } else {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13665805;
          result[5] += 27331610;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1629786;
          result[1] += 0;
          result[2] += 95869;
          result[3] += 1342177;
          result[4] += 3163703;
          result[5] += 36718135;
        } else {
          result[0] += 2199578;
          result[1] += 1389207;
          result[2] += 231534;
          result[3] += 18407002;
          result[4] += 1504975;
          result[5] += 19217373;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 526989;
          result[1] += 13174746;
          result[2] += 790484;
          result[3] += 790484;
          result[4] += 27139977;
          result[5] += 526989;
        } else {
          result[0] += 0;
          result[1] += 42835748;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 113924;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 10412041;
          result[1] += 488064;
          result[2] += 2114946;
          result[3] += 13503116;
          result[4] += 5368709;
          result[5] += 11062794;
        } else {
          result[0] += 34333923;
          result[1] += 1516630;
          result[2] += 1516630;
          result[3] += 1645704;
          result[4] += 2581497;
          result[5] += 1355286;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5183581;
          result[3] += 29250208;
          result[4] += 0;
          result[5] += 8515883;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23696371;
          result[3] += 10367162;
          result[4] += 0;
          result[5] += 8886139;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 6135667;
          result[4] += 4090445;
          result[5] += 14316557;
        } else {
          result[0] += 2321603;
          result[1] += 0;
          result[2] += 39467267;
          result[3] += 1160801;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 1446491;
          result[1] += 0;
          result[2] += 35049603;
          result[3] += 6119772;
          result[4] += 0;
          result[5] += 333805;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42005724;
          result[3] += 865286;
          result[4] += 0;
          result[5] += 78662;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 845466;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39060529;
          result[5] += 3043677;
        } else {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 7809031;
          result[4] += 1952257;
          result[5] += 11713547;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1029294;
          result[1] += 46786;
          result[2] += 0;
          result[3] += 1497156;
          result[4] += 2760382;
          result[5] += 37616053;
        } else {
          result[0] += 0;
          result[1] += 350609;
          result[2] += 2278962;
          result[3] += 24367365;
          result[4] += 2103657;
          result[5] += 13849078;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 1533916;
          result[4] += 19940919;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42843361;
          result[2] += 0;
          result[3] += 106311;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 7261275;
          result[1] += 8188247;
          result[2] += 308990;
          result[3] += 308990;
          result[4] += 24719236;
          result[5] += 2162933;
        } else {
          result[0] += 32148531;
          result[1] += 191170;
          result[2] += 1306332;
          result[3] += 3058730;
          result[4] += 2294047;
          result[5] += 3950860;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4569114;
          result[4] += 1827645;
          result[5] += 36552913;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2651214;
          result[3] += 18028257;
          result[4] += 0;
          result[5] += 22270200;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 2069863;
          result[2] += 3104795;
          result[3] += 28460626;
          result[4] += 0;
          result[5] += 9314386;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28867812;
          result[3] += 12321627;
          result[4] += 0;
          result[5] += 1760232;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 2353406;
          result[2] += 11767033;
          result[3] += 17062198;
          result[4] += 0;
          result[5] += 11767033;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 18546449;
          result[1] += 2928386;
          result[2] += 19034514;
          result[3] += 0;
          result[4] += 1464193;
          result[5] += 976128;
        } else {
          result[0] += 207988;
          result[1] += 51997;
          result[2] += 39933836;
          result[3] += 2599859;
          result[4] += 103994;
          result[5] += 51997;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 344977;
          result[1] += 0;
          result[2] += 0;
          result[3] += 172488;
          result[4] += 41742252;
          result[5] += 689954;
        } else {
          result[0] += 0;
          result[1] += 39045157;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1127674;
          result[1] += 196117;
          result[2] += 0;
          result[3] += 2059230;
          result[4] += 2353406;
          result[5] += 37213244;
        } else {
          result[0] += 2617431;
          result[1] += 1903586;
          result[2] += 1784612;
          result[3] += 19154840;
          result[4] += 1189741;
          result[5] += 16299460;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 9019431;
          result[2] += 0;
          result[3] += 429496;
          result[4] += 29635274;
          result[5] += 3865470;
        } else {
          result[0] += 0;
          result[1] += 41126337;
          result[2] += 0;
          result[3] += 101296;
          result[4] += 1722038;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 35062260;
          result[1] += 1373112;
          result[2] += 31932;
          result[3] += 1788239;
          result[4] += 3640344;
          result[5] += 1053783;
        } else {
          result[0] += 7012191;
          result[1] += 584349;
          result[2] += 12125247;
          result[3] += 11979160;
          result[4] += 1314785;
          result[5] += 9933937;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 588351;
          result[1] += 0;
          result[2] += 9413626;
          result[3] += 0;
          result[4] += 8825275;
          result[5] += 24122419;
        } else {
          result[0] += 9544371;
          result[1] += 31019208;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6198921;
          result[3] += 28337928;
          result[4] += 0;
          result[5] += 8412822;
        } else {
          result[0] += 3112295;
          result[1] += 0;
          result[2] += 21163606;
          result[3] += 9959344;
          result[4] += 1244918;
          result[5] += 7469508;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4190211;
          result[1] += 0;
          result[2] += 28982299;
          result[3] += 9427976;
          result[4] += 0;
          result[5] += 349184;
        } else {
          result[0] += 407105;
          result[1] += 0;
          result[2] += 37657296;
          result[3] += 4071059;
          result[4] += 0;
          result[5] += 814211;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39237972;
          result[3] += 3711700;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42833905;
          result[3] += 115767;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42300000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 34896609;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8053063;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 876523;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40495405;
          result[5] += 1577743;
        } else {
          result[0] += 2454267;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1227133;
          result[4] += 22088403;
          result[5] += 17179869;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 2684354;
          result[1] += 5368709;
          result[2] += 0;
          result[3] += 2684354;
          result[4] += 30422685;
          result[5] += 1789569;
        } else {
          result[0] += 1109401;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1584858;
          result[4] += 2799917;
          result[5] += 37455495;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2526451;
          result[4] += 0;
          result[5] += 40423221;
        } else {
          result[0] += 165191;
          result[1] += 165191;
          result[2] += 5120922;
          result[3] += 23787511;
          result[4] += 0;
          result[5] += 13710857;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1047552;
          result[1] += 8380423;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33521695;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42485853;
          result[2] += 0;
          result[3] += 0;
          result[4] += 463819;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36243020;
          result[1] += 643567;
          result[2] += 33871;
          result[3] += 1287135;
          result[4] += 2879118;
          result[5] += 1862959;
        } else {
          result[0] += 10813570;
          result[1] += 1370734;
          result[2] += 4264506;
          result[3] += 11879696;
          result[4] += 2589164;
          result[5] += 12032000;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3221225;
          result[3] += 7516192;
          result[4] += 2147483;
          result[5] += 30064771;
        } else {
          result[0] += 0;
          result[1] += 1394469;
          result[2] += 11992441;
          result[3] += 23148200;
          result[4] += 836681;
          result[5] += 5577879;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 9735259;
          result[1] += 572662;
          result[2] += 18325193;
          result[3] += 2290649;
          result[4] += 3435973;
          result[5] += 8589934;
        } else {
          result[0] += 469628;
          result[1] += 128080;
          result[2] += 38424160;
          result[3] += 3415480;
          result[4] += 42693;
          result[5] += 469628;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1391887;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40961262;
          result[5] += 596523;
        } else {
          result[0] += 4979672;
          result[1] += 622459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21163606;
          result[5] += 16183934;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1334594;
          result[4] += 1091940;
          result[5] += 40523137;
        } else {
          result[0] += 3805667;
          result[1] += 906111;
          result[2] += 181222;
          result[3] += 11598223;
          result[4] += 2627722;
          result[5] += 23830725;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 2321603;
          result[1] += 12381887;
          result[2] += 0;
          result[3] += 580400;
          result[4] += 27472313;
          result[5] += 193466;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 37993941;
          result[1] += 550636;
          result[2] += 39331;
          result[3] += 1061942;
          result[4] += 2595859;
          result[5] += 707961;
        } else {
          result[0] += 13377766;
          result[1] += 1408185;
          result[2] += 7921046;
          result[3] += 7216953;
          result[4] += 7040929;
          result[5] += 5984790;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 766958;
          result[1] += 1533916;
          result[2] += 2684354;
          result[3] += 8820022;
          result[4] += 4985229;
          result[5] += 24159191;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3049680;
          result[3] += 31767509;
          result[4] += 254140;
          result[5] += 7878342;
        } else {
          result[0] += 1717986;
          result[1] += 858993;
          result[2] += 27487790;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 4294967;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 40628069;
          result[1] += 0;
          result[2] += 2321603;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16519104;
          result[3] += 16519104;
          result[4] += 0;
          result[5] += 9911462;
        } else {
          result[0] += 903750;
          result[1] += 0;
          result[2] += 38387884;
          result[3] += 3141609;
          result[4] += 43035;
          result[5] += 473393;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 727960;
          result[1] += 291184;
          result[2] += 0;
          result[3] += 291184;
          result[4] += 41056975;
          result[5] += 582368;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 30893624;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10925793;
          result[5] += 1130254;
        } else {
          result[0] += 278893;
          result[1] += 159367;
          result[2] += 39841;
          result[3] += 4342777;
          result[4] += 3067833;
          result[5] += 35060957;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 20679472;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22270200;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42567047;
          result[2] += 0;
          result[3] += 0;
          result[4] += 382625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35897705;
          result[1] += 850488;
          result[2] += 496118;
          result[3] += 1984473;
          result[4] += 2338843;
          result[5] += 1382043;
        } else {
          result[0] += 7886239;
          result[1] += 242653;
          result[2] += 4731743;
          result[3] += 17956360;
          result[4] += 1941228;
          result[5] += 10191447;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 1408185;
          result[2] += 2816371;
          result[3] += 6336836;
          result[4] += 2816371;
          result[5] += 29571905;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6422381;
          result[3] += 24083928;
          result[4] += 2006994;
          result[5] += 10436369;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34768782;
          result[3] += 2556528;
          result[4] += 1533916;
          result[5] += 4090445;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1651910;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 19822925;
        } else {
          result[0] += 2147483;
          result[1] += 2147483;
          result[2] += 26843545;
          result[3] += 3221225;
          result[4] += 0;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24778657;
          result[3] += 14867194;
          result[4] += 0;
          result[5] += 3303820;
        } else {
          result[0] += 753503;
          result[1] += 0;
          result[2] += 39558909;
          result[3] += 2543072;
          result[4] += 0;
          result[5] += 94187;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 318145;
          result[1] += 318145;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39927288;
          result[5] += 2386092;
        } else {
          result[0] += 0;
          result[1] += 36168145;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6781527;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 59818;
          result[1] += 0;
          result[2] += 0;
          result[3] += 897277;
          result[4] += 1316006;
          result[5] += 40676570;
        } else {
          result[0] += 3398215;
          result[1] += 1038343;
          result[2] += 849553;
          result[3] += 16141525;
          result[4] += 2548661;
          result[5] += 18973372;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 2852126;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 1174405;
          result[4] += 26172456;
          result[5] += 2013265;
        } else {
          result[0] += 28448555;
          result[1] += 764604;
          result[2] += 2399275;
          result[3] += 4403066;
          result[4] += 2478372;
          result[5] += 4455797;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
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
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 1385473;
          result[2] += 8312839;
          result[3] += 4156419;
          result[4] += 8312839;
          result[5] += 20782099;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7346654;
          result[3] += 29386618;
          result[4] += 0;
          result[5] += 6216400;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36342030;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 3303820;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 8589934;
          result[1] += 6442450;
          result[2] += 6442450;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1952257;
          result[1] += 114838;
          result[2] += 34221931;
          result[3] += 5971612;
          result[4] += 0;
          result[5] += 689032;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41844037;
          result[3] += 1105635;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 294175;
          result[1] += 147087;
          result[2] += 294175;
          result[3] += 441263;
          result[4] += 38242859;
          result[5] += 3530110;
        } else {
          result[0] += 0;
          result[1] += 39881839;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3067833;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 563778;
          result[1] += 0;
          result[2] += 51252;
          result[3] += 1588830;
          result[4] += 2306366;
          result[5] += 38439444;
        } else {
          result[0] += 1209849;
          result[1] += 0;
          result[2] += 2016416;
          result[3] += 18551032;
          result[4] += 604924;
          result[5] += 20567449;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25053975;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 18595528;
          result[1] += 2359432;
          result[2] += 1199711;
          result[3] += 7238259;
          result[4] += 7798124;
          result[5] += 5758615;
        } else {
          result[0] += 40172754;
          result[1] += 0;
          result[2] += 678802;
          result[3] += 0;
          result[4] += 2098116;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 20615843;
          result[4] += 3435973;
          result[5] += 18897856;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2321603;
          result[3] += 5804009;
          result[4] += 0;
          result[5] += 34824059;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 1314785;
          result[2] += 5697405;
          result[3] += 28925289;
          result[4] += 0;
          result[5] += 7012191;
        } else {
          result[0] += 0;
          result[1] += 2526451;
          result[2] += 21895911;
          result[3] += 8421504;
          result[4] += 3368601;
          result[5] += 6737203;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 419021;
          result[1] += 0;
          result[2] += 28074420;
          result[3] += 11942104;
          result[4] += 0;
          result[5] += 2514127;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39214918;
          result[3] += 1867377;
          result[4] += 0;
          result[5] += 1867377;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 15240206;
          result[1] += 0;
          result[2] += 26323993;
          result[3] += 0;
          result[4] += 1385473;
          result[5] += 0;
        } else {
          result[0] += 365529;
          result[1] += 0;
          result[2] += 40269125;
          result[3] += 1949488;
          result[4] += 0;
          result[5] += 365529;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 650752;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41160103;
          result[5] += 1138817;
        } else {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 1789569;
          result[4] += 5368709;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 41927061;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1022611;
          result[5] += 0;
        } else {
          result[0] += 358729;
          result[1] += 65223;
          result[2] += 65223;
          result[3] += 7370255;
          result[4] += 2739386;
          result[5] += 32350854;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 11135100;
          result[2] += 1590728;
          result[3] += 0;
          result[4] += 30223843;
          result[5] += 0;
        } else {
          result[0] += 98734;
          result[1] += 41863589;
          result[2] += 0;
          result[3] += 394939;
          result[4] += 592409;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 34009922;
          result[1] += 1846252;
          result[2] += 97171;
          result[3] += 1133664;
          result[4] += 5085293;
          result[5] += 777369;
        } else {
          result[0] += 6202118;
          result[1] += 0;
          result[2] += 14885085;
          result[3] += 9613284;
          result[4] += 930317;
          result[5] += 11318866;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5506368;
          result[3] += 19822925;
          result[4] += 0;
          result[5] += 17620378;
        } else {
          result[0] += 2788939;
          result[1] += 0;
          result[2] += 16175850;
          result[3] += 21753730;
          result[4] += 557787;
          result[5] += 1673363;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23427094;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 718822;
          result[1] += 0;
          result[2] += 36480266;
          result[3] += 5031760;
          result[4] += 0;
          result[5] += 718822;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cc0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38296791;
          result[3] += 4473924;
          result[4] += 0;
          result[5] += 178956;
        } else {
          result[0] += 197469;
          result[1] += 0;
          result[2] += 42258528;
          result[3] += 394939;
          result[4] += 0;
          result[5] += 98734;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 156750;
          result[1] += 3448513;
          result[2] += 0;
          result[3] += 627002;
          result[4] += 36836398;
          result[5] += 1881007;
        } else {
          result[0] += 29205777;
          result[1] += 429496;
          result[2] += 0;
          result[3] += 1288490;
          result[4] += 5153960;
          result[5] += 6871947;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 95232;
          result[2] += 0;
          result[3] += 2904578;
          result[4] += 2095105;
          result[5] += 37854756;
        } else {
          result[0] += 922232;
          result[1] += 131747;
          result[2] += 790484;
          result[3] += 22528816;
          result[4] += 1976211;
          result[5] += 16600180;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34607922;
          result[1] += 861751;
          result[2] += 0;
          result[3] += 965161;
          result[4] += 5928847;
          result[5] += 585990;
        } else {
          result[0] += 7513873;
          result[1] += 927638;
          result[2] += 12244831;
          result[3] += 9183623;
          result[4] += 3896082;
          result[5] += 9183623;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2386092;
          result[3] += 0;
          result[4] += 2386092;
          result[5] += 38177487;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8017272;
          result[3] += 23479154;
          result[4] += 0;
          result[5] += 11453246;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11713547;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 11713547;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 5113056;
          result[4] += 0;
          result[5] += 2045222;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 1047552;
          result[2] += 26188824;
          result[3] += 13618188;
          result[4] += 0;
          result[5] += 2095105;
        } else {
          result[0] += 954437;
          result[1] += 0;
          result[2] += 37604824;
          result[3] += 3435973;
          result[4] += 763549;
          result[5] += 190887;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29934620;
          result[3] += 13015052;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 244495;
          result[1] += 0;
          result[2] += 41890193;
          result[3] += 733485;
          result[4] += 0;
          result[5] += 81498;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42239761;
          result[5] += 709911;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 4772185;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 19088743;
          result[5] += 16702650;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56661;
          result[3] += 1529869;
          result[4] += 1076574;
          result[5] += 40286566;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3322754;
          result[1] += 984519;
          result[2] += 246129;
          result[3] += 5168728;
          result[4] += 5784053;
          result[5] += 27443487;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1992510;
          result[3] += 29002098;
          result[4] += 221390;
          result[5] += 11733673;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 976128;
          result[1] += 8785160;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33188383;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42676108;
          result[2] += 0;
          result[3] += 0;
          result[4] += 273564;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36854504;
          result[1] += 1133984;
          result[2] += 35437;
          result[3] += 850488;
          result[4] += 3543702;
          result[5] += 531555;
        } else {
          result[0] += 10383437;
          result[1] += 471974;
          result[2] += 6922291;
          result[3] += 13057959;
          result[4] += 2989171;
          result[5] += 9124838;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 580400;
          result[2] += 6964811;
          result[3] += 24086640;
          result[4] += 2031403;
          result[5] += 9286415;
        } else {
          result[0] += 429496;
          result[1] += 0;
          result[2] += 26199300;
          result[3] += 5153960;
          result[4] += 5583457;
          result[5] += 5583457;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 1561806;
          result[1] += 0;
          result[2] += 24988900;
          result[3] += 12494450;
          result[4] += 0;
          result[5] += 3904515;
        } else {
          result[0] += 924753;
          result[1] += 102750;
          result[2] += 39353408;
          result[3] += 2106383;
          result[4] += 102750;
          result[5] += 359626;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 3019898;
          result[2] += 0;
          result[3] += 1006632;
          result[4] += 37413191;
          result[5] += 1509949;
        } else {
          result[0] += 571490;
          result[1] += 0;
          result[2] += 703372;
          result[3] += 2154077;
          result[4] += 2989332;
          result[5] += 36531400;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 650752;
          result[1] += 8459784;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33513759;
          result[5] += 325376;
        } else {
          result[0] += 13007116;
          result[1] += 523776;
          result[2] += 1047552;
          result[3] += 11086602;
          result[4] += 5325061;
          result[5] += 11959563;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 18253611;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24696061;
          result[5] += 0;
        } else {
          result[0] += 108733;
          result[1] += 42297272;
          result[2] += 0;
          result[3] += 0;
          result[4] += 434933;
          result[5] += 108733;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36148621;
          result[1] += 2060924;
          result[2] += 0;
          result[3] += 577058;
          result[4] += 3050168;
          result[5] += 1112899;
        } else {
          result[0] += 9866816;
          result[1] += 290200;
          result[2] += 10302117;
          result[3] += 12188420;
          result[4] += 2176503;
          result[5] += 8125613;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1717986;
          result[3] += 5153960;
          result[4] += 3435973;
          result[5] += 32641751;
        } else {
          result[0] += 0;
          result[1] += 753503;
          result[2] += 3014012;
          result[3] += 32400630;
          result[4] += 753503;
          result[5] += 6028024;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 4294967;
          result[1] += 1717986;
          result[2] += 16320875;
          result[3] += 12025908;
          result[4] += 3865470;
          result[5] += 4724464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40904450;
          result[3] += 2045222;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 24696061;
          result[3] += 2147483;
          result[4] += 1073741;
          result[5] += 12348030;
        } else {
          result[0] += 39159995;
          result[1] += 0;
          result[2] += 3789677;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 405185;
          result[1] += 0;
          result[2] += 32009661;
          result[3] += 9116675;
          result[4] += 0;
          result[5] += 1418149;
        } else {
          result[0] += 207486;
          result[1] += 0;
          result[2] += 41220620;
          result[3] += 1521566;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 422455;
          result[1] += 2253097;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38021021;
          result[5] += 2253097;
        } else {
          result[0] += 26716725;
          result[1] += 1183652;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9131032;
          result[5] += 5918262;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 62426;
          result[1] += 0;
          result[2] += 312134;
          result[3] += 1248537;
          result[4] += 1310963;
          result[5] += 40015610;
        } else {
          result[0] += 1617967;
          result[1] += 661895;
          result[2] += 220631;
          result[3] += 12649561;
          result[4] += 5809972;
          result[5] += 21989644;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 0;
          result[4] += 27331610;
          result[5] += 0;
        } else {
          result[0] += 97612;
          result[1] += 42266382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 585677;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35292273;
          result[1] += 1554224;
          result[2] += 189539;
          result[3] += 1326777;
          result[4] += 3601252;
          result[5] += 985605;
        } else {
          result[0] += 7823546;
          result[1] += 159664;
          result[2] += 7344553;
          result[3] += 13252129;
          result[4] += 5907575;
          result[5] += 8462203;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1301505;
          result[3] += 37743651;
          result[4] += 0;
          result[5] += 3904515;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3181457;
          result[3] += 20679472;
          result[4] += 0;
          result[5] += 19088743;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25681247;
          result[3] += 14168964;
          result[4] += 0;
          result[5] += 3099460;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18512790;
          result[3] += 17031766;
          result[4] += 0;
          result[5] += 7405116;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33510184;
          result[3] += 8967514;
          result[4] += 0;
          result[5] += 471974;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 716746;
          result[1] += 0;
          result[2] += 39586476;
          result[3] += 2315643;
          result[4] += 110268;
          result[5] += 220537;
        } else {
          result[0] += 11135100;
          result[1] += 0;
          result[2] += 31019208;
          result[3] += 795364;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 200699;
          result[1] += 401398;
          result[2] += 401398;
          result[3] += 0;
          result[4] += 41344077;
          result[5] += 602098;
        } else {
          result[0] += 1314785;
          result[1] += 0;
          result[2] += 1753047;
          result[3] += 2191309;
          result[4] += 22789622;
          result[5] += 14900906;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1543942;
          result[1] += 795364;
          result[2] += 0;
          result[3] += 2011803;
          result[4] += 2105376;
          result[5] += 36493186;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1569589;
          result[3] += 24257290;
          result[4] += 998829;
          result[5] += 16123963;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 42727710;
          result[2] += 0;
          result[3] += 0;
          result[4] += 221962;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 19034514;
          result[2] += 0;
          result[3] += 3416451;
          result[4] += 20498707;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34590796;
          result[1] += 1529062;
          result[2] += 305812;
          result[3] += 679583;
          result[4] += 4689125;
          result[5] += 1155291;
        } else {
          result[0] += 6233059;
          result[1] += 876523;
          result[2] += 6720016;
          result[3] += 11881768;
          result[4] += 3993053;
          result[5] += 13245250;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 12271335;
          result[4] += 12271335;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1263225;
          result[3] += 36633544;
          result[4] += 0;
          result[5] += 5052902;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 842150;
          result[1] += 0;
          result[2] += 22738062;
          result[3] += 11790106;
          result[4] += 0;
          result[5] += 7579354;
        } else {
          result[0] += 530242;
          result[1] += 0;
          result[2] += 33582048;
          result[3] += 8307138;
          result[4] += 0;
          result[5] += 530242;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27610504;
          result[3] += 9203501;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 188651;
          result[1] += 0;
          result[2] += 41063157;
          result[3] += 1509212;
          result[4] += 0;
          result[5] += 188651;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 4090445;
          result[1] += 0;
          result[2] += 38859227;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42542567;
          result[5] += 407105;
        } else {
          result[0] += 0;
          result[1] += 2045222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25565281;
          result[5] += 15339168;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64488;
          result[3] += 967334;
          result[4] += 515911;
          result[5] += 41401936;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          result[0] += 35218731;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7730941;
          result[5] += 0;
        } else {
          result[0] += 149130;
          result[1] += 820219;
          result[2] += 1789569;
          result[3] += 14987646;
          result[4] += 2609789;
          result[5] += 22593317;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 867670;
          result[1] += 5639856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35140641;
          result[5] += 1301505;
        } else {
          result[0] += 92166;
          result[1] += 40922005;
          result[2] += 0;
          result[3] += 737333;
          result[4] += 737333;
          result[5] += 460833;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 37030558;
          result[1] += 721843;
          result[2] += 0;
          result[3] += 902304;
          result[4] += 3500939;
          result[5] += 794027;
        } else {
          result[0] += 10186781;
          result[1] += 2064888;
          result[2] += 3579139;
          result[3] += 8534870;
          result[4] += 6332323;
          result[5] += 12251669;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3506095;
          result[3] += 14900906;
          result[4] += 0;
          result[5] += 24542670;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21332619;
          result[3] += 17634965;
          result[4] += 0;
          result[5] += 3982088;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 10160137;
          result[1] += 0;
          result[2] += 17087504;
          result[3] += 6927366;
          result[4] += 2770946;
          result[5] += 6003717;
        } else {
          result[0] += 427596;
          result[1] += 0;
          result[2] += 38531177;
          result[3] += 3278238;
          result[4] += 95021;
          result[5] += 617639;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 478992;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41672359;
          result[5] += 798321;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1753047;
          result[4] += 24542670;
          result[5] += 16653954;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 61181;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1468364;
          result[4] += 1651910;
          result[5] += 39768215;
        } else {
          result[0] += 5700592;
          result[1] += 2420799;
          result[2] += 937083;
          result[3] += 12728721;
          result[4] += 2655070;
          result[5] += 18507404;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1651910;
          result[1] += 13215283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28082478;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34380223;
          result[1] += 955954;
          result[2] += 375553;
          result[3] += 1570496;
          result[4] += 3721394;
          result[5] += 1946050;
        } else {
          result[0] += 10151740;
          result[1] += 892460;
          result[2] += 10932644;
          result[3] += 12048219;
          result[4] += 1561806;
          result[5] += 7362801;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13015052;
          result[4] += 1301505;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9761289;
          result[3] += 31236125;
          result[4] += 0;
          result[5] += 1952257;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 3579139;
          result[4] += 3579139;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38654705;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4294967;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 144126;
          result[2] += 33293202;
          result[3] += 7638700;
          result[4] += 288252;
          result[5] += 1585390;
        } else {
          result[0] += 0;
          result[1] += 140588;
          result[2] += 41051733;
          result[3] += 1687057;
          result[4] += 0;
          result[5] += 70294;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 40086361;
          result[1] += 0;
          result[2] += 2863311;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 471974;
          result[2] += 0;
          result[3] += 786624;
          result[4] += 39488527;
          result[5] += 2202547;
        } else {
          result[0] += 0;
          result[1] += 41468649;
          result[2] += 0;
          result[3] += 1481023;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1936255;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1892249;
          result[4] += 4004528;
          result[5] += 35116638;
        } else {
          result[0] += 562659;
          result[1] += 0;
          result[2] += 1687978;
          result[3] += 23631697;
          result[4] += 750212;
          result[5] += 16317124;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 2547861;
          result[1] += 12921299;
          result[2] += 1455921;
          result[3] += 1819901;
          result[4] += 20746875;
          result[5] += 3457812;
        } else {
          result[0] += 31304670;
          result[1] += 698141;
          result[2] += 1591762;
          result[3] += 3183525;
          result[4] += 2597086;
          result[5] += 3574485;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3976821;
          result[3] += 24656293;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 6710886;
          result[2] += 18790481;
          result[3] += 5368709;
          result[4] += 1342177;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 4908534;
          result[1] += 1227133;
          result[2] += 12271335;
          result[3] += 7362801;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 2863311;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1167815;
          result[1] += 0;
          result[2] += 34126175;
          result[3] += 6487866;
          result[4] += 0;
          result[5] += 1167815;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41954150;
          result[3] += 995522;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 445074;
          result[1] += 667611;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41614449;
          result[5] += 222537;
        } else {
          result[0] += 14063167;
          result[1] += 0;
          result[2] += 2660599;
          result[3] += 0;
          result[4] += 12922910;
          result[5] += 13302996;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 1353456;
          result[2] += 45115;
          result[3] += 2481336;
          result[4] += 1985068;
          result[5] += 37084696;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 252645;
          result[3] += 30822706;
          result[4] += 0;
          result[5] += 11874321;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 18407002;
          result[2] += 0;
          result[3] += 7012191;
          result[4] += 17530478;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31594109;
          result[1] += 1739965;
          result[2] += 61051;
          result[3] += 1373656;
          result[4] += 6135667;
          result[5] += 2045222;
        } else {
          result[0] += 8394708;
          result[1] += 1073741;
          result[2] += 9370837;
          result[3] += 11225482;
          result[4] += 2830773;
          result[5] += 10054127;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10412041;
          result[3] += 27331610;
          result[4] += 0;
          result[5] += 5206020;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3067833;
          result[3] += 33746171;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30409622;
          result[3] += 8151032;
          result[4] += 0;
          result[5] += 4389017;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 8589934;
          result[1] += 0;
          result[2] += 29587552;
          result[3] += 954437;
          result[4] += 954437;
          result[5] += 2863311;
        } else {
          result[0] += 620959;
          result[1] += 0;
          result[2] += 40000117;
          result[3] += 2173356;
          result[4] += 0;
          result[5] += 155239;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 169761;
          result[1] += 339523;
          result[2] += 1188330;
          result[3] += 0;
          result[4] += 39384680;
          result[5] += 1867377;
        } else {
          result[0] += 0;
          result[1] += 39370533;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 855391;
          result[1] += 180082;
          result[2] += 0;
          result[3] += 1935886;
          result[4] += 3151443;
          result[5] += 36826868;
        } else {
          result[0] += 2993810;
          result[1] += 345439;
          result[2] += 2072638;
          result[3] += 20380944;
          result[4] += 1957491;
          result[5] += 15199348;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 4928650;
          result[2] += 0;
          result[3] += 4224557;
          result[4] += 33796463;
          result[5] += 0;
        } else {
          result[0] += 100584;
          result[1] += 41541486;
          result[2] += 100584;
          result[3] += 0;
          result[4] += 1207016;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34216459;
          result[1] += 1091651;
          result[2] += 272912;
          result[3] += 1432792;
          result[4] += 4161922;
          result[5] += 1773934;
        } else {
          result[0] += 10665355;
          result[1] += 1729517;
          result[2] += 9512343;
          result[3] += 11241860;
          result[4] += 2306022;
          result[5] += 7494573;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1827645;
          result[3] += 11879696;
          result[4] += 3655291;
          result[5] += 25587039;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 2321603;
          result[1] += 9286415;
          result[2] += 25537643;
          result[3] += 3482405;
          result[4] += 1160801;
          result[5] += 1160801;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28944344;
          result[3] += 10270573;
          result[4] += 0;
          result[5] += 3734754;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 780903;
          result[1] += 0;
          result[2] += 36442146;
          result[3] += 5466322;
          result[4] += 0;
          result[5] += 260301;
        } else {
          result[0] += 77807;
          result[1] += 0;
          result[2] += 41704754;
          result[3] += 1089303;
          result[4] += 0;
          result[5] += 77807;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 687194;
          result[1] += 1259857;
          result[2] += 114532;
          result[3] += 1259857;
          result[4] += 35848660;
          result[5] += 3779571;
        } else {
          result[0] += 36085569;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3530110;
          result[5] += 3333992;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 398913;
          result[2] += 66485;
          result[3] += 2061052;
          result[4] += 797826;
          result[5] += 39625394;
        } else {
          result[0] += 1250247;
          result[1] += 367719;
          result[2] += 73543;
          result[3] += 13237912;
          result[4] += 6471868;
          result[5] += 21548380;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 22369621;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19685266;
          result[5] += 894784;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 37255420;
          result[1] += 1368386;
          result[2] += 264848;
          result[3] += 1280103;
          result[4] += 2162933;
          result[5] += 617980;
        } else {
          result[0] += 7243294;
          result[1] += 1122200;
          result[2] += 11119986;
          result[3] += 11324023;
          result[4] += 2958528;
          result[5] += 9181640;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17530478;
          result[3] += 1753047;
          result[4] += 1753047;
          result[5] += 21913098;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9349588;
          result[3] += 25711368;
          result[4] += 584349;
          result[5] += 7304366;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 7158278;
          result[1] += 10737418;
          result[2] += 17895697;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34626092;
          result[3] += 7990636;
          result[4] += 0;
          result[5] += 332943;
        } else {
          result[0] += 856708;
          result[1] += 0;
          result[2] += 40722229;
          result[3] += 1313620;
          result[4] += 0;
          result[5] += 57113;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 194342;
          result[1] += 0;
          result[2] += 194342;
          result[3] += 194342;
          result[4] += 41589276;
          result[5] += 777369;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 808576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2473292;
          result[4] += 1997659;
          result[5] += 37670145;
        } else {
          result[0] += 1067072;
          result[1] += 1733993;
          result[2] += 1867377;
          result[3] += 19073923;
          result[4] += 1867377;
          result[5] += 17339930;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 7088780;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33358969;
          result[5] += 2501922;
        } else {
          result[0] += 0;
          result[1] += 42467092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 482580;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 11988379;
          result[1] += 1876442;
          result[2] += 833974;
          result[3] += 11050158;
          result[4] += 5108092;
          result[5] += 12092626;
        } else {
          result[0] += 32802045;
          result[1] += 710980;
          result[2] += 3490266;
          result[3] += 1551229;
          result[4] += 2940873;
          result[5] += 1454277;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 18084072;
          result[2] += 13563054;
          result[3] += 1130254;
          result[4] += 10172290;
          result[5] += 0;
        } else {
          result[0] += 3267909;
          result[1] += 466844;
          result[2] += 4668442;
          result[3] += 13071639;
          result[4] += 1867377;
          result[5] += 19607459;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42990000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 380085;
          result[1] += 0;
          result[2] += 30786933;
          result[3] += 8741968;
          result[4] += 0;
          result[5] += 3040684;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16291255;
          result[3] += 23696371;
          result[4] += 0;
          result[5] += 2962046;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39513699;
          result[3] += 1717986;
          result[4] += 0;
          result[5] += 1717986;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 319328;
          result[1] += 0;
          result[2] += 38000082;
          result[3] += 4310933;
          result[4] += 0;
          result[5] += 319328;
        } else {
          result[0] += 167772;
          result[1] += 0;
          result[2] += 41523609;
          result[3] += 1258291;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 193466;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42562738;
          result[5] += 193466;
        } else {
          result[0] += 2078209;
          result[1] += 1385473;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29787676;
          result[5] += 9698313;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 59735;
          result[2] += 0;
          result[3] += 896029;
          result[4] += 896029;
          result[5] += 41097878;
        } else {
          result[0] += 2906368;
          result[1] += 565127;
          result[2] += 726592;
          result[3] += 13885984;
          result[4] += 2906368;
          result[5] += 21959231;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 12375329;
          result[2] += 0;
          result[3] += 2911842;
          result[4] += 27662501;
          result[5] += 0;
        } else {
          result[0] += 93572;
          result[1] += 42294667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 561433;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35277695;
          result[1] += 1306581;
          result[2] += 301518;
          result[3] += 1206075;
          result[4] += 4254764;
          result[5] += 603037;
        } else {
          result[0] += 11751702;
          result[1] += 0;
          result[2] += 9653183;
          result[3] += 10492591;
          result[4] += 2238419;
          result[5] += 8813776;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 35791394;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1789569;
          result[3] += 1789569;
          result[4] += 0;
          result[5] += 39370533;
        } else {
          result[0] += 0;
          result[1] += 753503;
          result[2] += 7535030;
          result[3] += 24865600;
          result[4] += 376751;
          result[5] += 9418787;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15561475;
          result[3] += 23030984;
          result[4] += 0;
          result[5] += 4357213;
        } else {
          result[0] += 0;
          result[1] += 2202547;
          result[2] += 28633115;
          result[3] += 7708915;
          result[4] += 0;
          result[5] += 4405094;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 15748213;
          result[1] += 0;
          result[2] += 11453246;
          result[3] += 4294967;
          result[4] += 8589934;
          result[5] += 2863311;
        } else {
          result[0] += 293505;
          result[1] += 146752;
          result[2] += 38987345;
          result[3] += 3032892;
          result[4] += 195670;
          result[5] += 293505;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40323928;
          result[5] += 2625744;
        } else {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 977610;
          result[4] += 1303480;
          result[5] += 40668582;
        } else {
          result[0] += 3178275;
          result[1] += 1460288;
          result[2] += 85899;
          result[3] += 14001593;
          result[4] += 3521873;
          result[5] += 20701742;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 3067833;
          result[2] += 0;
          result[3] += 3067833;
          result[4] += 35280088;
          result[5] += 1533916;
        } else {
          result[0] += 0;
          result[1] += 42367961;
          result[2] += 0;
          result[3] += 581711;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 3544390;
          result[1] += 8756729;
          result[2] += 625480;
          result[3] += 2710416;
          result[4] += 24602239;
          result[5] += 2710416;
        } else {
          result[0] += 30059214;
          result[1] += 611185;
          result[2] += 1944681;
          result[3] += 3333739;
          result[4] += 3055927;
          result[5] += 3944924;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4473924;
          result[3] += 27738330;
          result[4] += 0;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40802189;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2147483;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28355123;
          result[3] += 9799197;
          result[4] += 0;
          result[5] += 4795351;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42940000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 597214;
          result[1] += 0;
          result[2] += 39117546;
          result[3] += 2836768;
          result[4] += 0;
          result[5] += 398142;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 301401;
          result[1] += 602802;
          result[2] += 0;
          result[3] += 150700;
          result[4] += 40839864;
          result[5] += 1054904;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 28300172;
          result[1] += 3329432;
          result[2] += 0;
          result[3] += 332943;
          result[4] += 9322409;
          result[5] += 1664716;
        } else {
          result[0] += 1016800;
          result[1] += 0;
          result[2] += 284704;
          result[3] += 3457123;
          result[4] += 3457123;
          result[5] += 34733921;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 207486;
          result[1] += 41808498;
          result[2] += 0;
          result[3] += 311229;
          result[4] += 622459;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33925764;
          result[1] += 1963216;
          result[2] += 68884;
          result[3] += 1687677;
          result[4] += 3650894;
          result[5] += 1653235;
        } else {
          result[0] += 7024137;
          result[1] += 658512;
          result[2] += 5853447;
          result[3] += 15365300;
          result[4] += 2048706;
          result[5] += 11999567;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 34896609;
          result[4] += 0;
          result[5] += 2684354;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12079595;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 14763950;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 0;
          result[4] += 0;
          result[5] += 30064771;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 563644;
          result[1] += 0;
          result[2] += 33931368;
          result[3] += 7101914;
          result[4] += 0;
          result[5] += 1352745;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1030792;
          result[1] += 0;
          result[2] += 36421322;
          result[3] += 5497558;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 92166;
          result[1] += 0;
          result[2] += 42212339;
          result[3] += 645166;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 470251;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39657909;
          result[5] += 2821511;
        } else {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 529425;
          result[4] += 1323564;
          result[5] += 41096682;
        } else {
          result[0] += 3067833;
          result[1] += 451152;
          result[2] += 180460;
          result[3] += 13715021;
          result[4] += 3158064;
          result[5] += 22377140;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42843624;
          result[2] += 0;
          result[3] += 0;
          result[4] += 106048;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
          result[0] += 8920316;
          result[1] += 991146;
          result[2] += 440509;
          result[3] += 7488660;
          result[4] += 10792481;
          result[5] += 14316557;
        } else {
          result[0] += 32965899;
          result[1] += 1199349;
          result[2] += 1361423;
          result[3] += 1458668;
          result[4] += 4570493;
          result[5] += 1393838;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 543666;
          result[1] += 2718333;
          result[2] += 5980334;
          result[3] += 7611334;
          result[4] += 3805667;
          result[5] += 22290336;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 29269406;
          result[4] += 0;
          result[5] += 5090331;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 2684354;
          result[5] += 26843545;
        } else {
          result[0] += 1970168;
          result[1] += 0;
          result[2] += 28370426;
          result[3] += 9850842;
          result[4] += 0;
          result[5] += 2758235;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 142217;
          result[1] += 568869;
          result[2] += 34416625;
          result[3] += 6542003;
          result[4] += 0;
          result[5] += 1279957;
        } else {
          result[0] += 29527900;
          result[1] += 0;
          result[2] += 12079595;
          result[3] += 1342177;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42890000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 513927;
          result[1] += 0;
          result[2] += 41407889;
          result[3] += 807600;
          result[4] += 0;
          result[5] += 220254;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 720632;
          result[1] += 144126;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39346512;
          result[5] += 2738401;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1722292;
          result[1] += 107643;
          result[2] += 107643;
          result[3] += 1829935;
          result[4] += 1399362;
          result[5] += 37782795;
        } else {
          result[0] += 2669844;
          result[1] += 580400;
          result[2] += 0;
          result[3] += 19965793;
          result[4] += 1044721;
          result[5] += 18688911;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 17570320;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25379352;
          result[5] += 0;
        } else {
          result[0] += 196566;
          result[1] += 42458257;
          result[2] += 0;
          result[3] += 196566;
          result[4] += 98283;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 4511520;
          result[1] += 11008109;
          result[2] += 1443686;
          result[3] += 541382;
          result[4] += 23820827;
          result[5] += 1624147;
        } else {
          result[0] += 29669361;
          result[1] += 272696;
          result[2] += 3408704;
          result[3] += 3872287;
          result[4] += 2645154;
          result[5] += 3081468;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4062806;
          result[3] += 15090425;
          result[4] += 2902004;
          result[5] += 20894435;
        } else {
          result[0] += 1590728;
          result[1] += 12725829;
          result[2] += 20679472;
          result[3] += 6362914;
          result[4] += 1590728;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 543666;
          result[1] += 0;
          result[2] += 36969338;
          result[3] += 4349333;
          result[4] += 0;
          result[5] += 1087333;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 31236125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 565127;
          result[1] += 0;
          result[2] += 40021286;
          result[3] += 1952257;
          result[4] += 0;
          result[5] += 411001;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 189205;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42571261;
          result[5] += 189205;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 3067833;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19940919;
          result[5] += 19940919;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1260003;
          result[4] += 986089;
          result[5] += 40703580;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 983580;
          result[1] += 0;
          result[2] += 983580;
          result[3] += 10163663;
          result[4] += 1311440;
          result[5] += 29507408;
        } else {
          result[0] += 493674;
          result[1] += 3455720;
          result[2] += 2715209;
          result[3] += 23202696;
          result[4] += 493674;
          result[5] += 12588697;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 42094480;
          result[2] += 0;
          result[3] += 0;
          result[4] += 855192;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 16400243;
          result[1] += 2774345;
          result[2] += 1510086;
          result[3] += 6707594;
          result[4] += 8990283;
          result[5] += 6567120;
        } else {
          result[0] += 38549630;
          result[1] += 0;
          result[2] += 2298529;
          result[3] += 853739;
          result[4] += 328361;
          result[5] += 919411;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1022611;
          result[1] += 2556528;
          result[2] += 3579139;
          result[3] += 26587892;
          result[4] += 511305;
          result[5] += 8692195;
        } else {
          result[0] += 367091;
          result[1] += 550636;
          result[2] += 25696385;
          result[3] += 13765920;
          result[4] += 0;
          result[5] += 2569638;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 22738062;
          result[1] += 0;
          result[2] += 18948385;
          result[3] += 1263225;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 380566;
          result[1] += 0;
          result[2] += 40285705;
          result[3] += 2283400;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 1675341;
          result[1] += 1218430;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34725267;
          result[5] += 5330633;
        } else {
          result[0] += 27035285;
          result[1] += 3643052;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 97502;
          result[1] += 97502;
          result[2] += 0;
          result[3] += 1803788;
          result[4] += 1608784;
          result[5] += 39342095;
        } else {
          result[0] += 1560313;
          result[1] += 739095;
          result[2] += 1067582;
          result[3] += 20284071;
          result[4] += 3284869;
          result[5] += 16013740;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1571329;
          result[1] += 9427976;
          result[2] += 1047552;
          result[3] += 523776;
          result[4] += 28807707;
          result[5] += 1571329;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 35381617;
          result[1] += 2074492;
          result[2] += 537831;
          result[3] += 1190912;
          result[4] += 2573907;
          result[5] += 1190912;
        } else {
          result[0] += 8053063;
          result[1] += 766958;
          result[2] += 18215263;
          result[3] += 6902626;
          result[4] += 2300875;
          result[5] += 6710886;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 5368709;
        } else {
          result[0] += 976128;
          result[1] += 976128;
          result[2] += 976128;
          result[3] += 4880644;
          result[4] += 6832902;
          result[5] += 28307738;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 773867;
          result[2] += 14316557;
          result[3] += 19733633;
          result[4] += 0;
          result[5] += 8125613;
        } else {
          result[0] += 2770946;
          result[1] += 0;
          result[2] += 31865886;
          result[3] += 6003717;
          result[4] += 923648;
          result[5] += 1385473;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 36814005;
          result[1] += 6135667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 471974;
          result[1] += 314649;
          result[2] += 34611458;
          result[3] += 6607641;
          result[4] += 157324;
          result[5] += 786624;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 397682;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 3976821;
          result[4] += 0;
          result[5] += 397682;
        } else {
          result[0] += 102261;
          result[1] += 0;
          result[2] += 42438367;
          result[3] += 409044;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 256415;
          result[1] += 128207;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41667593;
          result[5] += 897455;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 23666146;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19283526;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42390675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 558997;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1711944;
          result[1] += 151053;
          result[2] += 0;
          result[3] += 1963701;
          result[4] += 1560890;
          result[5] += 37562082;
        } else {
          result[0] += 1856614;
          result[1] += 1361517;
          result[2] += 618871;
          result[3] += 22155594;
          result[4] += 1856614;
          result[5] += 15100461;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36065144;
          result[1] += 454308;
          result[2] += 0;
          result[3] += 1502714;
          result[4] += 4158674;
          result[5] += 768830;
        } else {
          result[0] += 6776040;
          result[1] += 1355208;
          result[2] += 9486456;
          result[3] += 10528924;
          result[4] += 3544390;
          result[5] += 11258652;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2221534;
          result[3] += 5924092;
          result[4] += 1481023;
          result[5] += 33323022;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6535819;
          result[3] += 28010656;
          result[4] += 933688;
          result[5] += 7469508;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31905471;
          result[3] += 2454267;
          result[4] += 1227133;
          result[5] += 7362801;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 1717986;
          result[2] += 20615843;
          result[3] += 16034544;
          result[4] += 1145324;
          result[5] += 3435973;
        } else {
          result[0] += 1495083;
          result[1] += 0;
          result[2] += 34251005;
          result[3] += 6659917;
          result[4] += 0;
          result[5] += 543666;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26323993;
          result[3] += 11083786;
          result[4] += 0;
          result[5] += 5541893;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41862339;
          result[3] += 1087333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 507279;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39567808;
          result[5] += 2874584;
        } else {
          result[0] += 0;
          result[1] += 12526987;
          result[2] += 0;
          result[3] += 26843545;
          result[4] += 3579139;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 113473;
          result[1] += 0;
          result[2] += 56736;
          result[3] += 1191470;
          result[4] += 1304943;
          result[5] += 40283048;
        } else {
          result[0] += 5548867;
          result[1] += 792695;
          result[2] += 216189;
          result[3] += 13331693;
          result[4] += 3603160;
          result[5] += 19457066;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36814005;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33375544;
          result[1] += 1975082;
          result[2] += 167379;
          result[3] += 636043;
          result[4] += 6226530;
          result[5] += 569091;
        } else {
          result[0] += 8053063;
          result[1] += 111848;
          result[2] += 9730785;
          result[3] += 11632203;
          result[4] += 1677721;
          result[5] += 11744051;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 41082295;
          result[4] += 0;
          result[5] += 1867377;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18153985;
          result[3] += 18153985;
          result[4] += 0;
          result[5] += 6641702;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 922232;
          result[1] += 0;
          result[2] += 34649582;
          result[3] += 5665140;
          result[4] += 0;
          result[5] += 1712717;
        } else {
          result[0] += 16519104;
          result[1] += 0;
          result[2] += 18171015;
          result[3] += 6607641;
          result[4] += 1651910;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41289052;
          result[3] += 1509654;
          result[4] += 0;
          result[5] += 150965;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 165828;
          result[1] += 829144;
          result[2] += 0;
          result[3] += 497486;
          result[4] += 38472293;
          result[5] += 2984919;
        } else {
          result[0] += 24066627;
          result[1] += 0;
          result[2] += 0;
          result[3] += 370255;
          result[4] += 5553837;
          result[5] += 12958953;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1789569;
          result[3] += 1789569;
          result[4] += 37580963;
          result[5] += 1789569;
        } else {
          result[0] += 142374;
          result[1] += 47458;
          result[2] += 0;
          result[3] += 2183077;
          result[4] += 1281371;
          result[5] += 39295391;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 18977762;
          result[2] += 1997659;
          result[3] += 0;
          result[4] += 21974251;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42764545;
          result[2] += 0;
          result[3] += 185127;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32556043;
          result[1] += 1343176;
          result[2] += 511686;
          result[3] += 2430510;
          result[4] += 4157451;
          result[5] += 1950804;
        } else {
          result[0] += 5658040;
          result[1] += 257183;
          result[2] += 7286870;
          result[3] += 16202571;
          result[4] += 3086204;
          result[5] += 10458802;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 588351;
          result[2] += 1176703;
          result[3] += 14708792;
          result[4] += 2353406;
          result[5] += 24122419;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7238708;
          result[3] += 27989674;
          result[4] += 0;
          result[5] += 7721289;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 2962046;
          result[2] += 13329208;
          result[3] += 17772278;
          result[4] += 0;
          result[5] += 8886139;
        } else {
          result[0] += 2312674;
          result[1] += 0;
          result[2] += 32707827;
          result[3] += 6938024;
          result[4] += 0;
          result[5] += 991146;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 2863311;
          result[5] += 0;
        } else {
          result[0] += 368440;
          result[1] += 263172;
          result[2] += 39265264;
          result[3] += 2789623;
          result[4] += 0;
          result[5] += 263172;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          result[0] += 845466;
          result[1] += 676372;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40582368;
          result[5] += 845466;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 810371;
          result[1] += 1001046;
          result[2] += 0;
          result[3] += 2288106;
          result[4] += 2049762;
          result[5] += 36800385;
        } else {
          result[0] += 5212338;
          result[1] += 416987;
          result[2] += 416987;
          result[3] += 16679484;
          result[4] += 2814663;
          result[5] += 17409212;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 10329668;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32620004;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42266382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 683290;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36222216;
          result[1] += 1126766;
          result[2] += 132560;
          result[3] += 1292467;
          result[4] += 3645419;
          result[5] += 530242;
        } else {
          result[0] += 6812706;
          result[1] += 888613;
          result[2] += 7849422;
          result[3] += 9774753;
          result[4] += 5924092;
          result[5] += 11700083;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12725829;
          result[3] += 22724694;
          result[4] += 0;
          result[5] += 7499149;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37347541;
          result[3] += 0;
          result[4] += 1867377;
          result[5] += 3734754;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29283867;
          result[3] += 13665805;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26247022;
          result[3] += 0;
          result[4] += 0;
          result[5] += 16702650;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2369637;
          result[1] += 0;
          result[2] += 34063533;
          result[3] += 5627888;
          result[4] += 0;
          result[5] += 888613;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41554726;
          result[3] += 1248110;
          result[4] += 0;
          result[5] += 146836;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38581909;
          result[5] += 4367763;
        } else {
          result[0] += 189205;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42571261;
          result[5] += 189205;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 117509;
          result[1] += 117509;
          result[2] += 0;
          result[3] += 646301;
          result[4] += 1527621;
          result[5] += 40540730;
        } else {
          result[0] += 3642674;
          result[1] += 254140;
          result[2] += 592993;
          result[3] += 13808277;
          result[4] += 4150954;
          result[5] += 20500632;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 7433597;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35516075;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42472454;
          result[2] += 0;
          result[3] += 190887;
          result[4] += 286331;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35137427;
          result[1] += 1343281;
          result[2] += 35349;
          result[3] += 1378631;
          result[4] += 4489389;
          result[5] += 565592;
        } else {
          result[0] += 6961917;
          result[1] += 1178170;
          result[2] += 9318258;
          result[3] += 10496428;
          result[4] += 5997959;
          result[5] += 8996938;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1717986;
          result[3] += 3435973;
          result[4] += 0;
          result[5] += 37795712;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 1867377;
          result[2] += 8589934;
          result[3] += 25769803;
          result[4] += 373475;
          result[5] += 6349082;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30064771;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 8589934;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 1160801;
          result[1] += 0;
          result[2] += 24376841;
          result[3] += 5804009;
          result[4] += 2321603;
          result[5] += 9286415;
        } else {
          result[0] += 32537631;
          result[1] += 1301505;
          result[2] += 9110536;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1123683;
          result[1] += 0;
          result[2] += 34459621;
          result[3] += 5868123;
          result[4] += 0;
          result[5] += 1498244;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41292219;
          result[3] += 1513327;
          result[4] += 0;
          result[5] += 144126;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 449734;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42499938;
          result[5] += 0;
        } else {
          result[0] += 842150;
          result[1] += 842150;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 12632256;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 27331610;
          result[4] += 11713547;
          result[5] += 3904515;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 36984440;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5965232;
          result[5] += 0;
        } else {
          result[0] += 139145;
          result[1] += 139145;
          result[2] += 278291;
          result[3] += 1808895;
          result[4] += 2272714;
          result[5] += 38311479;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3355443;
          result[1] += 1342177;
          result[2] += 0;
          result[3] += 9059696;
          result[4] += 2684354;
          result[5] += 26508001;
        } else {
          result[0] += 0;
          result[1] += 616502;
          result[2] += 1027504;
          result[3] += 29797619;
          result[4] += 205500;
          result[5] += 11302545;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
          result[0] += 3303820;
          result[1] += 15234285;
          result[2] += 2019001;
          result[3] += 3670912;
          result[4] += 17253287;
          result[5] += 1468364;
        } else {
          result[0] += 33824834;
          result[1] += 534904;
          result[2] += 881018;
          result[3] += 2989171;
          result[4] += 2957706;
          result[5] += 1762037;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 42743184;
          result[2] += 0;
          result[3] += 206488;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 3904515;
          result[2] += 1673363;
          result[3] += 10597971;
          result[4] += 2231151;
          result[5] += 24542670;
        } else {
          result[0] += 1160801;
          result[1] += 0;
          result[2] += 12768821;
          result[3] += 20662275;
          result[4] += 1160801;
          result[5] += 7196972;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2231151;
          result[1] += 0;
          result[2] += 32797932;
          result[3] += 6470340;
          result[4] += 0;
          result[5] += 1450248;
        } else {
          result[0] += 423845;
          result[1] += 0;
          result[2] += 40618522;
          result[3] += 1907304;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 848807;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41082295;
          result[5] += 1018569;
        } else {
          result[0] += 5368709;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16106127;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1583619;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1295688;
          result[4] += 3311203;
          result[5] += 36759161;
        } else {
          result[0] += 4322558;
          result[1] += 1195601;
          result[2] += 367877;
          result[3] += 17474171;
          result[4] += 1839386;
          result[5] += 17750078;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36814005;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 2446500;
          result[1] += 5980334;
          result[2] += 543666;
          result[3] += 1902833;
          result[4] += 30717171;
          result[5] += 1359166;
        } else {
          result[0] += 30499629;
          result[1] += 714835;
          result[2] += 3484820;
          result[3] += 3246542;
          result[4] += 2918909;
          result[5] += 2084935;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 11135100;
          result[2] += 3181457;
          result[3] += 0;
          result[4] += 19088743;
          result[5] += 9544371;
        } else {
          result[0] += 1301505;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5206020;
          result[4] += 3904515;
          result[5] += 32537631;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2809791;
          result[1] += 0;
          result[2] += 13647559;
          result[3] += 20872738;
          result[4] += 0;
          result[5] += 5619583;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30198988;
          result[3] += 12079595;
          result[4] += 0;
          result[5] += 671088;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 845163;
          result[1] += 0;
          result[2] += 38416523;
          result[3] += 3457487;
          result[4] += 0;
          result[5] += 230499;
        } else {
          result[0] += 293171;
          result[1] += 0;
          result[2] += 42216743;
          result[3] += 439757;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 245426;
          result[1] += 736280;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39881839;
          result[5] += 2086126;
        } else {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2684354;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 17498014;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25451658;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1893572;
          result[1] += 215178;
          result[2] += 0;
          result[3] += 2582144;
          result[4] += 2194822;
          result[5] += 36063953;
        } else {
          result[0] += 378411;
          result[1] += 0;
          result[2] += 5486962;
          result[3] += 24596729;
          result[4] += 378411;
          result[5] += 12109158;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36021221;
          result[1] += 840831;
          result[2] += 403599;
          result[3] += 1345330;
          result[4] += 3531492;
          result[5] += 807198;
        } else {
          result[0] += 9607163;
          result[1] += 141281;
          result[2] += 9324600;
          result[3] += 9183318;
          result[4] += 2966918;
          result[5] += 11726390;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 810371;
          result[4] += 11345196;
          result[5] += 30794105;
        } else {
          result[0] += 0;
          result[1] += 1952257;
          result[2] += 0;
          result[3] += 31236125;
          result[4] += 0;
          result[5] += 9761289;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 7158278;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 6039797;
          result[4] += 0;
          result[5] += 4697620;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1867377;
          result[1] += 3734754;
          result[2] += 13071639;
          result[3] += 1867377;
          result[4] += 1867377;
          result[5] += 20541147;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31661617;
          result[3] += 8810189;
          result[4] += 1101273;
          result[5] += 1376592;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 169093;
          result[1] += 0;
          result[2] += 39962359;
          result[3] += 2480033;
          result[4] += 0;
          result[5] += 338186;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 800304;
          result[1] += 3734754;
          result[2] += 0;
          result[3] += 1333840;
          result[4] += 34813244;
          result[5] += 2267529;
        } else {
          result[0] += 32212254;
          result[1] += 0;
          result[2] += 0;
          result[3] += 429496;
          result[4] += 3221225;
          result[5] += 7086696;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 286713;
          result[2] += 172028;
          result[3] += 974825;
          result[4] += 2064336;
          result[5] += 39451769;
        } else {
          result[0] += 2281956;
          result[1] += 488990;
          result[2] += 81498;
          result[3] += 12713755;
          result[4] += 6356877;
          result[5] += 21026595;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24542670;
          result[3] += 0;
          result[4] += 18407002;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42468174;
          result[2] += 0;
          result[3] += 0;
          result[4] += 481498;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36950882;
          result[1] += 1166431;
          result[2] += 0;
          result[3] += 999798;
          result[4] += 3291003;
          result[5] += 541557;
        } else {
          result[0] += 11358591;
          result[1] += 887389;
          result[2] += 4969383;
          result[3] += 12068503;
          result[4] += 3372081;
          result[5] += 10293723;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3702558;
          result[3] += 29250208;
          result[4] += 370255;
          result[5] += 9626650;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27559373;
          result[3] += 12526987;
          result[4] += 0;
          result[5] += 2863311;
        } else {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 17179869;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2386092;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 33405301;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 11453246;
          result[4] += 0;
          result[5] += 5726623;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2142614;
          result[1] += 0;
          result[2] += 33405301;
          result[3] += 6330450;
          result[4] += 389566;
          result[5] += 681740;
        } else {
          result[0] += 525607;
          result[1] += 0;
          result[2] += 41147588;
          result[3] += 1201389;
          result[4] += 0;
          result[5] += 75086;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 211574;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42314948;
          result[5] += 423149;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1003070;
          result[1] += 45594;
          result[2] += 0;
          result[3] += 1641388;
          result[4] += 2188518;
          result[5] += 38071100;
        } else {
          result[0] += 1109401;
          result[1] += 475457;
          result[2] += 0;
          result[3] += 19652248;
          result[4] += 3645175;
          result[5] += 18067390;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 4294967;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38654705;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42852721;
          result[2] += 0;
          result[3] += 96951;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 5425221;
          result[1] += 11302545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26221905;
          result[5] += 0;
        } else {
          result[0] += 31492509;
          result[1] += 587546;
          result[2] += 1263225;
          result[3] += 3584035;
          result[4] += 2673338;
          result[5] += 3349016;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3067833;
          result[3] += 1533916;
          result[4] += 1533916;
          result[5] += 36814005;
        } else {
          result[0] += 0;
          result[1] += 2025927;
          result[2] += 3646670;
          result[3] += 26337063;
          result[4] += 810371;
          result[5] += 10129639;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 867670;
          result[2] += 13015052;
          result[3] += 16919568;
          result[4] += 0;
          result[5] += 12147382;
        } else {
          result[0] += 2174666;
          result[1] += 1631000;
          result[2] += 29358004;
          result[3] += 7611334;
          result[4] += 1087333;
          result[5] += 1087333;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 471456;
          result[1] += 0;
          result[2] += 38989439;
          result[3] += 2970174;
          result[4] += 0;
          result[5] += 518601;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 41607495;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1342177;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 421075;
          result[1] += 0;
          result[2] += 140358;
          result[3] += 140358;
          result[4] += 41125013;
          result[5] += 1122867;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 5726623;
          result[1] += 1431655;
          result[2] += 0;
          result[3] += 2863311;
          result[4] += 27201459;
          result[5] += 5726623;
        } else {
          result[0] += 41485479;
          result[1] += 488064;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 976128;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 273855;
          result[1] += 273855;
          result[2] += 0;
          result[3] += 1551847;
          result[4] += 2419057;
          result[5] += 38431056;
        } else {
          result[0] += 308251;
          result[1] += 0;
          result[2] += 411001;
          result[3] += 21577586;
          result[4] += 0;
          result[5] += 20652833;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 42852281;
          result[2] += 0;
          result[3] += 0;
          result[4] += 97391;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 25419194;
          result[2] += 0;
          result[3] += 876523;
          result[4] += 16653954;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          result[0] += 4917901;
          result[1] += 11147243;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26884528;
          result[5] += 0;
        } else {
          result[0] += 35662942;
          result[1] += 315291;
          result[2] += 1191100;
          result[3] += 2417232;
          result[4] += 1786650;
          result[5] += 1576456;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1930322;
          result[1] += 1930322;
          result[2] += 3860644;
          result[3] += 13029676;
          result[4] += 9169031;
          result[5] += 13029676;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 24542670;
          result[3] += 10481765;
          result[4] += 0;
          result[5] += 4346097;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26430567;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 3303820;
        } else {
          result[0] += 393132;
          result[1] += 0;
          result[2] += 39460626;
          result[3] += 2899348;
          result[4] += 0;
          result[5] += 196566;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
          result[0] += 431655;
          result[1] += 215827;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41223052;
          result[5] += 1079137;
        } else {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 25053975;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37223049;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 596523;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22071359;
          result[5] += 20281790;
        } else {
          result[0] += 0;
          result[1] += 51252;
          result[2] += 0;
          result[3] += 2511377;
          result[4] += 1896345;
          result[5] += 38490697;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9203501;
          result[4] += 1753047;
          result[5] += 31993123;
        } else {
          result[0] += 610658;
          result[1] += 203552;
          result[2] += 407105;
          result[3] += 28090307;
          result[4] += 0;
          result[5] += 13638047;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 24159191;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 5225815;
          result[1] += 6532269;
          result[2] += 2939521;
          result[3] += 2122987;
          result[4] += 23026250;
          result[5] += 3102828;
        } else {
          result[0] += 32537631;
          result[1] += 681740;
          result[2] += 1270517;
          result[3] += 2819928;
          result[4] += 3222774;
          result[5] += 2417081;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 913822;
          result[2] += 6396759;
          result[3] += 21322532;
          result[4] += 4569114;
          result[5] += 9747443;
        } else {
          result[0] += 493674;
          result[1] += 0;
          result[2] += 30607812;
          result[3] += 6911441;
          result[4] += 0;
          result[5] += 4936744;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 2464325;
          result[1] += 2464325;
          result[2] += 26403487;
          result[3] += 7392976;
          result[4] += 2112278;
          result[5] += 2112278;
        } else {
          result[0] += 442780;
          result[1] += 0;
          result[2] += 39702618;
          result[3] += 2361494;
          result[4] += 0;
          result[5] += 442780;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42566193;
          result[5] += 383479;
        } else {
          result[0] += 4955731;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 0;
          result[4] += 31386299;
          result[5] += 3303820;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1698106;
          result[1] += 248503;
          result[2] += 0;
          result[3] += 2319365;
          result[4] += 2857789;
          result[5] += 35825908;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1335222;
          result[3] += 29374905;
          result[4] += 0;
          result[5] += 12239544;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33179442;
          result[1] += 2262234;
          result[2] += 327860;
          result[3] += 885222;
          result[4] += 5639193;
          result[5] += 655720;
        } else {
          result[0] += 6268330;
          result[1] += 812561;
          result[2] += 11491939;
          result[3] += 13000982;
          result[4] += 4643207;
          result[5] += 6732651;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 42740672;
          result[2] += 0;
          result[3] += 209000;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 15618062;
          result[2] += 0;
          result[3] += 7809031;
          result[4] += 19522578;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2684354;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 32212254;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14627787;
          result[3] += 23653443;
          result[4] += 311229;
          result[5] += 4357213;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31101487;
          result[3] += 2962046;
          result[4] += 0;
          result[5] += 8886139;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 5368709;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 13147859;
          result[1] += 0;
          result[2] += 14024383;
          result[3] += 9641763;
          result[4] += 2629571;
          result[5] += 3506095;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2526451;
          result[1] += 0;
          result[2] += 34439521;
          result[3] += 4653989;
          result[4] += 0;
          result[5] += 1329711;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41311459;
          result[3] += 1282079;
          result[4] += 0;
          result[5] += 356133;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39513699;
          result[5] += 3435973;
        } else {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1815398;
          result[1] += 575614;
          result[2] += 0;
          result[3] += 1948232;
          result[4] += 2258178;
          result[5] += 36352248;
        } else {
          result[0] += 482580;
          result[1] += 0;
          result[2] += 1286881;
          result[3] += 27507093;
          result[4] += 482580;
          result[5] += 13190536;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42765339;
          result[2] += 0;
          result[3] += 0;
          result[4] += 184333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32589293;
          result[1] += 1278654;
          result[2] += 98358;
          result[3] += 1377012;
          result[4] += 6294913;
          result[5] += 1311440;
        } else {
          result[0] += 9860410;
          result[1] += 1516986;
          result[2] += 9007105;
          result[3] += 11187773;
          result[4] += 2370291;
          result[5] += 9007105;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 25053975;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25419194;
          result[3] += 14900906;
          result[4] += 0;
          result[5] += 2629571;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 833974;
          result[1] += 0;
          result[2] += 33775956;
          result[3] += 7088780;
          result[4] += 0;
          result[5] += 1250961;
        } else {
          result[0] += 13498468;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 9817068;
          result[4] += 0;
          result[5] += 1227133;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39826060;
          result[3] += 2863311;
          result[4] += 0;
          result[5] += 260301;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41487556;
          result[3] += 1462116;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 380085;
          result[1] += 570128;
          result[2] += 0;
          result[3] += 190042;
          result[4] += 40859202;
          result[5] += 950214;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 205500;
          result[1] += 51375;
          result[2] += 102750;
          result[3] += 2209133;
          result[4] += 3031137;
          result[5] += 37349775;
        } else {
          result[0] += 4619586;
          result[1] += 249707;
          result[2] += 249707;
          result[3] += 15856419;
          result[4] += 3995318;
          result[5] += 17978932;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31214128;
          result[1] += 3327087;
          result[2] += 241969;
          result[3] += 816648;
          result[4] += 6623928;
          result[5] += 725909;
        } else {
          result[0] += 9927539;
          result[1] += 418001;
          result[2] += 10554542;
          result[3] += 10868043;
          result[4] += 1567506;
          result[5] += 9614038;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 650752;
          result[1] += 5206020;
          result[2] += 1952257;
          result[3] += 3253763;
          result[4] += 7158278;
          result[5] += 24728599;
        } else {
          result[0] += 0;
          result[1] += 795364;
          result[2] += 5567550;
          result[3] += 31019208;
          result[4] += 0;
          result[5] += 5567550;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 5368709;
          result[1] += 0;
          result[2] += 20707878;
          result[3] += 5368709;
          result[4] += 766958;
          result[5] += 10737418;
        } else {
          result[0] += 2260509;
          result[1] += 0;
          result[2] += 33907636;
          result[3] += 6028024;
          result[4] += 0;
          result[5] += 753503;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23098983;
          result[3] += 16241472;
          result[4] += 0;
          result[5] += 3609216;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35204649;
          result[3] += 3520464;
          result[4] += 0;
          result[5] += 4224557;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 508280;
          result[1] += 0;
          result[2] += 34817190;
          result[3] += 6861782;
          result[4] += 0;
          result[5] += 762420;
        } else {
          result[0] += 229268;
          result[1] += 0;
          result[2] += 41115523;
          result[3] += 1452035;
          result[4] += 0;
          result[5] += 152845;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 163306;
          result[1] += 0;
          result[2] += 0;
          result[3] += 653226;
          result[4] += 40500071;
          result[5] += 1633067;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 58197;
          result[1] += 0;
          result[2] += 232789;
          result[3] += 872960;
          result[4] += 1745921;
          result[5] += 40039803;
        } else {
          result[0] += 3557447;
          result[1] += 1822107;
          result[2] += 260301;
          result[3] += 15097460;
          result[4] += 3557447;
          result[5] += 18654908;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 613566;
          result[1] += 4294967;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38041138;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41756626;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1193046;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34300768;
          result[1] += 950069;
          result[2] += 655220;
          result[3] += 1408723;
          result[4] += 3046773;
          result[5] += 2588119;
        } else {
          result[0] += 9106807;
          result[1] += 1230649;
          result[2] += 8122287;
          result[3] += 10583587;
          result[4] += 2953559;
          result[5] += 10952781;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 5368709;
          result[2] += 16106127;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2684354;
          result[3] += 0;
          result[4] += 0;
          result[5] += 40265318;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 2982616;
          result[3] += 30422685;
          result[4] += 0;
          result[5] += 7754802;
        } else {
          result[0] += 1282079;
          result[1] += 641039;
          result[2] += 19231196;
          result[3] += 14743917;
          result[4] += 2564159;
          result[5] += 4487279;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8053063;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 261888;
          result[1] += 0;
          result[2] += 36271522;
          result[3] += 5892485;
          result[4] += 0;
          result[5] += 523776;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 1003832;
          result[1] += 0;
          result[2] += 40153283;
          result[3] += 1577450;
          result[4] += 0;
          result[5] += 215106;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 184333;
          result[1] += 2396333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37972672;
          result[5] += 2396333;
        } else {
          result[0] += 21203003;
          result[1] += 1631000;
          result[2] += 0;
          result[3] += 2718333;
          result[4] += 5980334;
          result[5] += 11417001;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 93065;
          result[1] += 511859;
          result[2] += 46532;
          result[3] += 2233569;
          result[4] += 3350353;
          result[5] += 36714292;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 991146;
          result[3] += 30395153;
          result[4] += 0;
          result[5] += 11563373;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 11632203;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30422685;
          result[5] += 894784;
        } else {
          result[0] += 0;
          result[1] += 41297762;
          result[2] += 0;
          result[3] += 777369;
          result[4] += 680198;
          result[5] += 194342;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 18634867;
          result[1] += 1711762;
          result[2] += 2412028;
          result[3] += 6302397;
          result[4] += 7430604;
          result[5] += 6458012;
        } else {
          result[0] += 40595394;
          result[1] += 0;
          result[2] += 2036132;
          result[3] += 0;
          result[4] += 318145;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 7499149;
          result[4] += 0;
          result[5] += 30678337;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 3639802;
          result[2] += 2183881;
          result[3] += 21110856;
          result[4] += 0;
          result[5] += 16015132;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21691754;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 1735340;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 9544371;
          result[1] += 9544371;
          result[2] += 19088743;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 38428654;
          result[1] += 2260509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2260509;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 349184;
          result[1] += 0;
          result[2] += 29855260;
          result[3] += 10300937;
          result[4] += 523776;
          result[5] += 1920513;
        } else {
          result[0] += 379525;
          result[1] += 0;
          result[2] += 39976720;
          result[3] += 2150646;
          result[4] += 0;
          result[5] += 442780;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 152845;
          result[1] += 305691;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42185443;
          result[5] += 305691;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1674767;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1242569;
          result[4] += 1944890;
          result[5] += 38087445;
        } else {
          result[0] += 3532309;
          result[1] += 1364755;
          result[2] += 481678;
          result[3] += 15333434;
          result[4] += 2167553;
          result[5] += 20069940;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31019208;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42851389;
          result[2] += 0;
          result[3] += 0;
          result[4] += 98283;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 21012301;
          result[1] += 2070394;
          result[2] += 2378751;
          result[3] += 4625349;
          result[4] += 8149425;
          result[5] += 4713451;
        } else {
          result[0] += 40839625;
          result[1] += 680660;
          result[2] += 204198;
          result[3] += 0;
          result[4] += 1225188;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16361780;
          result[4] += 0;
          result[5] += 26587892;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13048001;
          result[3] += 24465003;
          result[4] += 0;
          result[5] += 5436667;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 8180890;
          result[4] += 0;
          result[5] += 22497447;
        } else {
          result[0] += 1990350;
          result[1] += 0;
          result[2] += 34569248;
          result[3] += 5342520;
          result[4] += 0;
          result[5] += 1047552;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 357913;
          result[1] += 0;
          result[2] += 40802189;
          result[3] += 1574821;
          result[4] += 0;
          result[5] += 214748;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1659000;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40369005;
          result[5] += 921666;
        } else {
          result[0] += 21727481;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8084644;
          result[5] += 13137547;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 332943;
          result[2] += 47563;
          result[3] += 1569589;
          result[4] += 2187912;
          result[5] += 38811664;
        } else {
          result[0] += 136782;
          result[1] += 957476;
          result[2] += 683911;
          result[3] += 21885183;
          result[4] += 683911;
          result[5] += 18602406;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 4443069;
          result[2] += 740511;
          result[3] += 0;
          result[4] += 37766091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42564474;
          result[2] += 0;
          result[3] += 0;
          result[4] += 385198;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 33487827;
          result[1] += 1517770;
          result[2] += 290636;
          result[3] += 2099044;
          result[4] += 4068916;
          result[5] += 1485477;
        } else {
          result[0] += 5326212;
          result[1] += 793265;
          result[2] += 13032222;
          result[3] += 10539101;
          result[4] += 5099565;
          result[5] += 8159304;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 416987;
          result[2] += 6671793;
          result[3] += 20432368;
          result[4] += 1667948;
          result[5] += 13760574;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 746950;
          result[1] += 746950;
          result[2] += 36227115;
          result[3] += 746950;
          result[4] += 0;
          result[5] += 4481705;
        } else {
          result[0] += 21036574;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 2629571;
          result[4] += 876523;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 7158278;
        } else {
          result[0] += 429496;
          result[1] += 0;
          result[2] += 36936718;
          result[3] += 5153960;
          result[4] += 0;
          result[5] += 429496;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 32212254;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41996864;
          result[3] += 879515;
          result[4] += 0;
          result[5] += 73292;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1215556;
          result[1] += 2296051;
          result[2] += 135061;
          result[3] += 405185;
          result[4] += 36331641;
          result[5] += 2566175;
        } else {
          result[0] += 31580641;
          result[1] += 0;
          result[2] += 180460;
          result[3] += 1624147;
          result[4] += 5594285;
          result[5] += 3970137;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 228455;
          result[3] += 1085164;
          result[4] += 1884759;
          result[5] += 39751293;
        } else {
          result[0] += 969350;
          result[1] += 894784;
          result[2] += 1043915;
          result[3] += 14018296;
          result[4] += 6487190;
          result[5] += 19536135;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 206986;
          result[1] += 42639193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 103493;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 17412029;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22635638;
          result[5] += 2902004;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39085080;
          result[1] += 658737;
          result[2] += 175663;
          result[3] += 263494;
          result[4] += 2327538;
          result[5] += 439158;
        } else {
          result[0] += 8647585;
          result[1] += 864758;
          result[2] += 8071079;
          result[3] += 13067462;
          result[4] += 1921685;
          result[5] += 10377102;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7611334;
          result[3] += 30445337;
          result[4] += 0;
          result[5] += 4893000;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33907636;
          result[3] += 6781527;
          result[4] += 1130254;
          result[5] += 1130254;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 570128;
          result[1] += 0;
          result[2] += 35538003;
          result[3] += 5511241;
          result[4] += 0;
          result[5] += 1330299;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 260301;
          result[1] += 0;
          result[2] += 41192640;
          result[3] += 1496731;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 199765;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41751077;
          result[5] += 998829;
        } else {
          result[0] += 12750684;
          result[1] += 335544;
          result[2] += 335544;
          result[3] += 4026531;
          result[4] += 12079595;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1135527;
          result[4] += 1135527;
          result[5] += 40678617;
        } else {
          result[0] += 0;
          result[1] += 256671;
          result[2] += 513342;
          result[3] += 17111423;
          result[4] += 3251170;
          result[5] += 21817064;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42088766;
          result[2] += 0;
          result[3] += 0;
          result[4] += 860906;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 9780618;
          result[2] += 1275732;
          result[3] += 850488;
          result[4] += 31042832;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35820803;
          result[1] += 1305782;
          result[2] += 70582;
          result[3] += 670537;
          result[4] += 4411429;
          result[5] += 670537;
        } else {
          result[0] += 8163220;
          result[1] += 463819;
          result[2] += 10853373;
          result[3] += 12523122;
          result[4] += 1205930;
          result[5] += 9740206;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 1533916;
          result[2] += 1533916;
          result[3] += 3834792;
          result[4] += 3067833;
          result[5] += 32979213;
        } else {
          result[0] += 19522578;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16760847;
          result[3] += 23569942;
          result[4] += 0;
          result[5] += 2618882;
        } else {
          result[0] += 7158278;
          result[1] += 6362914;
          result[2] += 26247022;
          result[3] += 1590728;
          result[4] += 0;
          result[5] += 1590728;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 16106127;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35013320;
          result[3] += 4668442;
          result[4] += 0;
          result[5] += 3267909;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 109705;
          result[1] += 0;
          result[2] += 40536153;
          result[3] += 2303813;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 370255;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39802498;
          result[5] += 2776918;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 889905;
          result[1] += 0;
          result[2] += 187348;
          result[3] += 1405114;
          result[4] += 2716555;
          result[5] += 37750748;
        } else {
          result[0] += 2632013;
          result[1] += 119636;
          result[2] += 2871287;
          result[3] += 17586634;
          result[4] += 2153465;
          result[5] += 17586634;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 8125613;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34824059;
          result[5] += 0;
        } else {
          result[0] += 398604;
          result[1] += 41853509;
          result[2] += 0;
          result[3] += 199302;
          result[4] += 498256;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 11069503;
          result[1] += 5756141;
          result[2] += 0;
          result[3] += 221390;
          result[4] += 23467347;
          result[5] += 2435290;
        } else {
          result[0] += 33446979;
          result[1] += 812730;
          result[2] += 1375389;
          result[3] += 2406932;
          result[4] += 2313155;
          result[5] += 2594485;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5804009;
          result[3] += 3482405;
          result[4] += 4643207;
          result[5] += 29020049;
        } else {
          result[0] += 0;
          result[1] += 2863311;
          result[2] += 3272356;
          result[3] += 24542670;
          result[4] += 1636178;
          result[5] += 10635157;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 2684354;
          result[1] += 5368709;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 29527900;
        } else {
          result[0] += 3789677;
          result[1] += 0;
          result[2] += 32843867;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6316128;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 766958;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 18407002;
          result[4] += 2300875;
          result[5] += 9203501;
        } else {
          result[0] += 2484691;
          result[1] += 0;
          result[2] += 30644532;
          result[3] += 8282306;
          result[4] += 354955;
          result[5] += 1183186;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35901521;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 440509;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41821891;
          result[3] += 1127781;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 1145324;
          result[2] += 0;
          result[3] += 143165;
          result[4] += 40659023;
          result[5] += 1002159;
        } else {
          result[0] += 0;
          result[1] += 19822925;
          result[2] += 0;
          result[3] += 6607641;
          result[4] += 3303820;
          result[5] += 13215283;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 545392;
          result[1] += 90898;
          result[2] += 136348;
          result[3] += 2181570;
          result[4] += 2136121;
          result[5] += 37859341;
        } else {
          result[0] += 15274988;
          result[1] += 179705;
          result[2] += 0;
          result[3] += 7907052;
          result[4] += 8266464;
          result[5] += 11321461;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33466385;
          result[1] += 2542620;
          result[2] += 68719;
          result[3] += 1580547;
          result[4] += 4191888;
          result[5] += 1099511;
        } else {
          result[0] += 7074904;
          result[1] += 1071955;
          result[2] += 6431731;
          result[3] += 13935418;
          result[4] += 2787083;
          result[5] += 11648580;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4685418;
          result[3] += 27331610;
          result[4] += 0;
          result[5] += 10932644;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25379352;
          result[3] += 15618062;
          result[4] += 0;
          result[5] += 1952257;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 10737418;
          result[5] += 21474836;
        } else {
          result[0] += 1908874;
          result[1] += 0;
          result[2] += 36268612;
          result[3] += 3817748;
          result[4] += 0;
          result[5] += 954437;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28542504;
          result[3] += 11960668;
          result[4] += 0;
          result[5] += 2446500;
        } else {
          result[0] += 1282079;
          result[1] += 0;
          result[2] += 40385513;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1282079;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 657728;
          result[1] += 0;
          result[2] += 40121440;
          result[3] += 2104731;
          result[4] += 0;
          result[5] += 65772;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 30064771;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 181990;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42585692;
          result[5] += 181990;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2684354;
          result[4] += 24159191;
          result[5] += 16106127;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 16183934;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21163606;
          result[5] += 5602131;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 92067;
          result[3] += 2946172;
          result[4] += 1196882;
          result[5] += 38714549;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 4908534;
          result[1] += 613566;
          result[2] += 613566;
          result[3] += 4908534;
          result[4] += 5522100;
          result[5] += 26383370;
        } else {
          result[0] += 753503;
          result[1] += 0;
          result[2] += 1004670;
          result[3] += 30391289;
          result[4] += 1507006;
          result[5] += 9293204;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 27016729;
          result[1] += 3117314;
          result[2] += 288640;
          result[3] += 981376;
          result[4] += 10910602;
          result[5] += 635008;
        } else {
          result[0] += 1879635;
          result[1] += 1315744;
          result[2] += 10995868;
          result[3] += 16070884;
          result[4] += 2913435;
          result[5] += 9774105;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 40301648;
          result[1] += 0;
          result[2] += 1485477;
          result[3] += 258343;
          result[4] += 258343;
          result[5] += 645859;
        } else {
          result[0] += 725654;
          result[1] += 90706;
          result[2] += 36055955;
          result[3] += 5124934;
          result[4] += 45353;
          result[5] += 907068;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 173885;
          result[1] += 1738853;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41036934;
          result[5] += 0;
        } else {
          result[0] += 14316557;
          result[1] += 2526451;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12211181;
          result[5] += 13895482;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 171569;
          result[2] += 114379;
          result[3] += 1772889;
          result[4] += 2230409;
          result[5] += 38660424;
        } else {
          result[0] += 446230;
          result[1] += 1004018;
          result[2] += 2231151;
          result[3] += 18741675;
          result[4] += 3235170;
          result[5] += 17291426;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32500813;
          result[1] += 1184609;
          result[2] += 607491;
          result[3] += 1579478;
          result[4] += 4252442;
          result[5] += 2824837;
        } else {
          result[0] += 5761541;
          result[1] += 1361818;
          result[2] += 7228115;
          result[3] += 11942104;
          result[4] += 5656786;
          result[5] += 10999306;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4026531;
          result[3] += 29527900;
          result[4] += 0;
          result[5] += 9395240;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 15618062;
          result[4] += 7809031;
          result[5] += 15618062;
        } else {
          result[0] += 1590728;
          result[1] += 0;
          result[2] += 33087155;
          result[3] += 6362914;
          result[4] += 0;
          result[5] += 1908874;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 109009;
          result[1] += 0;
          result[2] += 36736141;
          result[3] += 5450466;
          result[4] += 0;
          result[5] += 654055;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 503316;
          result[1] += 0;
          result[2] += 41607495;
          result[3] += 838860;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 403283;
          result[3] += 0;
          result[4] += 40529973;
          result[5] += 2016416;
        } else {
          result[0] += 0;
          result[1] += 3181457;
          result[2] += 0;
          result[3] += 1590728;
          result[4] += 25451658;
          result[5] += 12725829;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1813430;
          result[1] += 524940;
          result[2] += 0;
          result[3] += 1145324;
          result[4] += 2576980;
          result[5] += 36888996;
        } else {
          result[0] += 155052;
          result[1] += 155052;
          result[2] += 1395476;
          result[3] += 23412998;
          result[4] += 465158;
          result[5] += 17365932;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 4294967;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38654705;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42658159;
          result[2] += 0;
          result[3] += 0;
          result[4] += 291513;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 4452100;
          result[1] += 7070982;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30640925;
          result[5] += 785664;
        } else {
          result[0] += 30795133;
          result[1] += 763065;
          result[2] += 2834242;
          result[3] += 3324784;
          result[4] += 2534466;
          result[5] += 2697980;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40320101;
          result[4] += 0;
          result[5] += 2629571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2564159;
          result[3] += 17308077;
          result[4] += 3205199;
          result[5] += 19872236;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2801065;
          result[3] += 4668442;
          result[4] += 4668442;
          result[5] += 30811721;
        } else {
          result[0] += 0;
          result[1] += 2526451;
          result[2] += 27790964;
          result[3] += 12632256;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e40000))) ) ) {
          result[0] += 780903;
          result[1] += 1561806;
          result[2] += 14837159;
          result[3] += 7809031;
          result[4] += 7028128;
          result[5] += 10932644;
        } else {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 5726623;
          result[3] += 0;
          result[4] += 2863311;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32622079;
          result[3] += 8688292;
          result[4] += 163930;
          result[5] += 1475370;
        } else {
          result[0] += 243340;
          result[1] += 0;
          result[2] += 40151252;
          result[3] += 2250903;
          result[4] += 0;
          result[5] += 304176;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 35370318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7579354;
          result[5] += 0;
        } else {
          result[0] += 322929;
          result[1] += 968789;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37459865;
          result[5] += 4198088;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 841180;
          result[1] += 98962;
          result[2] += 0;
          result[3] += 1880285;
          result[4] += 1039104;
          result[5] += 39090140;
        } else {
          result[0] += 3767515;
          result[1] += 645859;
          result[2] += 1937579;
          result[3] += 18729932;
          result[4] += 2260509;
          result[5] += 15608277;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1309441;
          result[1] += 13356300;
          result[2] += 523776;
          result[3] += 523776;
          result[4] += 27236377;
          result[5] += 0;
        } else {
          result[0] += 28777090;
          result[1] += 296949;
          result[2] += 2618553;
          result[3] += 4400249;
          result[4] += 3428415;
          result[5] += 3428415;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 42845929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 103743;
          result[5] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5651272;
          result[3] += 5651272;
          result[4] += 3390763;
          result[5] += 28256363;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14665741;
          result[3] += 25665048;
          result[4] += 0;
          result[5] += 2618882;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35370318;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7579354;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32758225;
          result[3] += 8978180;
          result[4] += 0;
          result[5] += 1213267;
        } else {
          result[0] += 568869;
          result[1] += 0;
          result[2] += 40787967;
          result[3] += 1479061;
          result[4] += 0;
          result[5] += 113773;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 175304;
          result[1] += 1051828;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40670710;
          result[5] += 1051828;
        } else {
          result[0] += 21277819;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1182101;
          result[4] += 7486640;
          result[5] += 13003111;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1217975;
          result[4] += 961559;
          result[5] += 40770137;
        } else {
          result[0] += 0;
          result[1] += 991909;
          result[2] += 0;
          result[3] += 18251131;
          result[4] += 4066828;
          result[5] += 19639804;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 6329425;
          result[2] += 452101;
          result[3] += 2260509;
          result[4] += 33907636;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42432207;
          result[2] += 0;
          result[3] += 0;
          result[4] += 517465;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 21140039;
          result[1] += 2343579;
          result[2] += 1578328;
          result[3] += 4161048;
          result[4] += 7030737;
          result[5] += 6695940;
        } else {
          result[0] += 40201405;
          result[1] += 0;
          result[2] += 703045;
          result[3] += 830871;
          result[4] += 1086524;
          result[5] += 127826;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 421075;
          result[1] += 421075;
          result[2] += 5052902;
          result[3] += 21053761;
          result[4] += 842150;
          result[5] += 15158708;
        } else {
          result[0] += 13215283;
          result[1] += 825955;
          result[2] += 18171015;
          result[3] += 7433597;
          result[4] += 825955;
          result[5] += 2477865;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 11453246;
          result[1] += 0;
          result[2] += 31496426;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22930757;
          result[3] += 14559211;
          result[4] += 0;
          result[5] += 5459704;
        } else {
          result[0] += 355375;
          result[1] += 0;
          result[2] += 39345149;
          result[3] += 3147611;
          result[4] += 0;
          result[5] += 101535;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 858993;
          result[2] += 0;
          result[3] += 858993;
          result[4] += 40029095;
          result[5] += 1202590;
        } else {
          result[0] += 0;
          result[1] += 32641751;
          result[2] += 0;
          result[3] += 3435973;
          result[4] += 0;
          result[5] += 6871947;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1677376;
          result[1] += 132424;
          result[2] += 88282;
          result[3] += 2471923;
          result[4] += 2648489;
          result[5] += 35931175;
        } else {
          result[0] += 644245;
          result[1] += 0;
          result[2] += 5583457;
          result[3] += 25984552;
          result[4] += 214748;
          result[5] += 10522669;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 9780618;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31893321;
          result[5] += 1275732;
        } else {
          result[0] += 0;
          result[1] += 42348978;
          result[2] += 0;
          result[3] += 0;
          result[4] += 600694;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35260930;
          result[1] += 536423;
          result[2] += 286092;
          result[3] += 1752318;
          result[4] += 3325828;
          result[5] += 1788079;
        } else {
          result[0] += 16429543;
          result[1] += 1811130;
          result[2] += 9055653;
          result[3] += 7761989;
          result[4] += 3363528;
          result[5] += 4527826;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3435973;
          result[4] += 37795712;
          result[5] += 1717986;
        } else {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 1130254;
          result[1] += 565127;
          result[2] += 1130254;
          result[3] += 6216400;
          result[4] += 3955890;
          result[5] += 29951745;
        } else {
          result[0] += 0;
          result[1] += 449734;
          result[2] += 11243369;
          result[3] += 23161341;
          result[4] += 0;
          result[5] += 8095226;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 18407002;
          result[4] += 3067833;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 193032;
          result[1] += 0;
          result[2] += 35710964;
          result[3] += 5790967;
          result[4] += 0;
          result[5] += 1254709;
        } else {
          result[0] += 392592;
          result[1] += 0;
          result[2] += 41379300;
          result[3] += 1177778;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40679205;
          result[5] += 2270467;
        } else {
          result[0] += 0;
          result[1] += 26587892;
          result[2] += 0;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 10226112;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 23216039;
          result[1] += 580400;
          result[2] += 1160801;
          result[3] += 1741202;
          result[4] += 13929623;
          result[5] += 2321603;
        } else {
          result[0] += 113224;
          result[1] += 37741;
          result[2] += 226448;
          result[3] += 5887652;
          result[4] += 2075775;
          result[5] += 34608831;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42350375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 599297;
          result[5] += 0;
        } else {
          result[0] += 1291719;
          result[1] += 10010826;
          result[2] += 322929;
          result[3] += 1614649;
          result[4] += 29386618;
          result[5] += 322929;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 15808837;
          result[1] += 279802;
          result[2] += 3077826;
          result[3] += 13010812;
          result[4] += 2798024;
          result[5] += 7974369;
        } else {
          result[0] += 36192352;
          result[1] += 1167495;
          result[2] += 1096737;
          result[3] += 955223;
          result[4] += 2618019;
          result[5] += 919844;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 1923119;
          result[2] += 2564159;
          result[3] += 7051438;
          result[4] += 1282079;
          result[5] += 30128875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2147483;
          result[3] += 25769803;
          result[4] += 715827;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8706014;
          result[3] += 30761252;
          result[4] += 0;
          result[5] += 3482405;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33334074;
          result[3] += 7051438;
          result[4] += 0;
          result[5] += 2564159;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 4405094;
          result[2] += 3303820;
          result[3] += 6607641;
          result[4] += 8810189;
          result[5] += 19822925;
        } else {
          result[0] += 1789569;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 511305;
          result[1] += 0;
          result[2] += 39602945;
          result[3] += 2463563;
          result[4] += 46482;
          result[5] += 325376;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 401398;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41745476;
          result[5] += 802797;
        } else {
          result[0] += 0;
          result[1] += 36814005;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 6442450;
          result[2] += 715827;
          result[3] += 3579139;
          result[4] += 27917287;
          result[5] += 4294967;
        } else {
          result[0] += 750405;
          result[1] += 0;
          result[2] += 264848;
          result[3] += 3663743;
          result[4] += 1280103;
          result[5] += 36990571;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42039722;
          result[2] += 0;
          result[3] += 363980;
          result[4] += 454975;
          result[5] += 90995;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31028829;
          result[1] += 1731841;
          result[2] += 0;
          result[3] += 1270017;
          result[4] += 5888261;
          result[5] += 3030722;
        } else {
          result[0] += 6417767;
          result[1] += 164558;
          result[2] += 9215255;
          result[3] += 16208976;
          result[4] += 740511;
          result[5] += 10202604;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2863311;
          result[3] += 2863311;
          result[4] += 2863311;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9698313;
          result[3] += 31865886;
          result[4] += 0;
          result[5] += 1385473;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19822925;
          result[3] += 4955731;
          result[4] += 0;
          result[5] += 18171015;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 24542670;
          result[2] += 0;
          result[3] += 18407002;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33203401;
          result[3] += 8755125;
          result[4] += 0;
          result[5] += 991146;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 63068;
          result[1] += 0;
          result[2] += 40300794;
          result[3] += 2207398;
          result[4] += 0;
          result[5] += 378411;
        } else {
          result[0] += 11713547;
          result[1] += 0;
          result[2] += 31236125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 427359;
          result[1] += 213679;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42094953;
          result[5] += 213679;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1275227;
          result[1] += 306054;
          result[2] += 102018;
          result[3] += 2244400;
          result[4] += 2550455;
          result[5] += 36471515;
        } else {
          result[0] += 1509413;
          result[1] += 3018826;
          result[2] += 548877;
          result[3] += 21680665;
          result[4] += 1509413;
          result[5] += 14682476;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42846676;
          result[2] += 0;
          result[3] += 0;
          result[4] += 102996;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34152373;
          result[1] += 1131081;
          result[2] += 62837;
          result[3] += 1382432;
          result[4] += 5435474;
          result[5] += 785473;
        } else {
          result[0] += 5108092;
          result[1] += 1250961;
          result[2] += 5629326;
          result[3] += 11258652;
          result[4] += 5525079;
          result[5] += 14177561;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 1006632;
          result[1] += 0;
          result[2] += 5033164;
          result[3] += 25501368;
          result[4] += 671088;
          result[5] += 10737418;
        } else {
          result[0] += 3904515;
          result[1] += 0;
          result[2] += 30585373;
          result[3] += 2603010;
          result[4] += 0;
          result[5] += 5856773;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1642193;
          result[1] += 0;
          result[2] += 32717544;
          result[3] += 7074063;
          result[4] += 505290;
          result[5] += 1010580;
        } else {
          result[0] += 35370318;
          result[1] += 0;
          result[2] += 7579354;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37795712;
          result[3] += 2576980;
          result[4] += 0;
          result[5] += 2576980;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38753440;
          result[3] += 4196232;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42846922;
          result[3] += 102750;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 591050;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41767571;
          result[5] += 591050;
        } else {
          result[0] += 536870;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30601641;
          result[5] += 11811160;
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 37347541;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5602131;
          result[5] += 0;
        } else {
          result[0] += 268771;
          result[1] += 53754;
          result[2] += 0;
          result[3] += 1666382;
          result[4] += 1612628;
          result[5] += 39348135;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 31814572;
          result[1] += 1590728;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 0;
        } else {
          result[0] += 407105;
          result[1] += 610658;
          result[2] += 2442635;
          result[3] += 20355295;
          result[4] += 1119541;
          result[5] += 18014436;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 18948385;
          result[2] += 1263225;
          result[3] += 6316128;
          result[4] += 16421933;
          result[5] += 0;
        } else {
          result[0] += 321319;
          result[1] += 42307034;
          result[2] += 0;
          result[3] += 107106;
          result[4] += 214212;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1193046;
          result[1] += 17597435;
          result[2] += 0;
          result[3] += 596523;
          result[4] += 21176574;
          result[5] += 2386092;
        } else {
          result[0] += 32511123;
          result[1] += 145789;
          result[2] += 554001;
          result[3] += 2828321;
          result[4] += 4227903;
          result[5] += 2682532;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 692736;
          result[1] += 0;
          result[2] += 4156419;
          result[3] += 8312839;
          result[4] += 3463683;
          result[5] += 26323993;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13991181;
          result[3] += 22125589;
          result[4] += 0;
          result[5] += 6832902;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 1445421;
          result[2] += 25811101;
          result[3] += 13628261;
          result[4] += 0;
          result[5] += 2064888;
        } else {
          result[0] += 1482917;
          result[1] += 109845;
          result[2] += 38555844;
          result[3] += 2306759;
          result[4] += 219691;
          result[5] += 274614;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 136782;
          result[1] += 2462083;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39530113;
          result[5] += 820694;
        } else {
          result[0] += 29013874;
          result[1] += 456911;
          result[2] += 0;
          result[3] += 913822;
          result[4] += 6625215;
          result[5] += 5939848;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 425244;
          result[2] += 182247;
          result[3] += 1214983;
          result[4] += 1822475;
          result[5] += 39304721;
        } else {
          result[0] += 766958;
          result[1] += 766958;
          result[2] += 1457221;
          result[3] += 10890809;
          result[4] += 5752188;
          result[5] += 23315536;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 16291255;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26658417;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42852281;
          result[2] += 0;
          result[3] += 0;
          result[4] += 97391;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35784369;
          result[1] += 674381;
          result[2] += 42148;
          result[3] += 1180167;
          result[4] += 4257033;
          result[5] += 1011572;
        } else {
          result[0] += 10303290;
          result[1] += 231534;
          result[2] += 7524875;
          result[3] += 16438958;
          result[4] += 1389207;
          result[5] += 7061806;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3142658;
          result[4] += 2095105;
          result[5] += 37711907;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 2300875;
          result[2] += 3834792;
          result[3] += 18790481;
          result[4] += 4601750;
          result[5] += 13421772;
        } else {
          result[0] += 3629549;
          result[1] += 3024624;
          result[2] += 26616698;
          result[3] += 4839399;
          result[4] += 1814774;
          result[5] += 3024624;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 20679472;
          result[4] += 3181457;
          result[5] += 4772185;
        } else {
          result[0] += 822790;
          result[1] += 0;
          result[2] += 34721766;
          result[3] += 6417767;
          result[4] += 0;
          result[5] += 987348;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 129171;
          result[1] += 0;
          result[2] += 40882921;
          result[3] += 1808407;
          result[4] += 0;
          result[5] += 129171;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 180460;
          result[1] += 360921;
          result[2] += 721843;
          result[3] += 902304;
          result[4] += 36994466;
          result[5] += 3789677;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1037649;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1939953;
          result[4] += 2706912;
          result[5] += 37265157;
        } else {
          result[0] += 3734754;
          result[1] += 1244918;
          result[2] += 414972;
          result[3] += 26143279;
          result[4] += 414972;
          result[5] += 10996776;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32860404;
          result[1] += 1155736;
          result[2] += 218652;
          result[3] += 1124500;
          result[4] += 5591266;
          result[5] += 1999112;
        } else {
          result[0] += 5658596;
          result[1] += 742110;
          result[2] += 11317192;
          result[3] += 10946136;
          result[4] += 2504624;
          result[5] += 11781011;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2770946;
          result[4] += 3463683;
          result[5] += 36715043;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 4772185;
          result[4] += 19088743;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2918909;
          result[1] += 1250961;
          result[2] += 12092626;
          result[3] += 20015381;
          result[4] += 1250961;
          result[5] += 5420832;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30893624;
          result[3] += 8665284;
          result[4] += 0;
          result[5] += 3390763;
        } else {
          result[0] += 386436;
          result[1] += 0;
          result[2] += 40631053;
          result[3] += 1932183;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 334238;
          result[1] += 0;
          result[2] += 0;
          result[3] += 334238;
          result[4] += 41278479;
          result[5] += 1002716;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1517493;
          result[1] += 0;
          result[2] += 45984;
          result[3] += 2989002;
          result[4] += 2069309;
          result[5] += 36327881;
        } else {
          result[0] += 2943591;
          result[1] += 0;
          result[2] += 133799;
          result[3] += 18999543;
          result[4] += 1739394;
          result[5] += 19133343;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 39513699;
          result[1] += 3435973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 354955;
          result[1] += 42239761;
          result[2] += 0;
          result[3] += 0;
          result[4] += 354955;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 3395231;
          result[1] += 17145916;
          result[2] += 339523;
          result[3] += 679046;
          result[4] += 20710909;
          result[5] += 679046;
        } else {
          result[0] += 31041688;
          result[1] += 1040503;
          result[2] += 1705269;
          result[3] += 3497247;
          result[4] += 2745773;
          result[5] += 2919190;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7527262;
          result[3] += 26124027;
          result[4] += 0;
          result[5] += 9298382;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20782099;
          result[3] += 6927366;
          result[4] += 0;
          result[5] += 15240206;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 15618062;
          result[4] += 0;
          result[5] += 23427094;
        } else {
          result[0] += 1431655;
          result[1] += 0;
          result[2] += 33882519;
          result[3] += 6203841;
          result[4] += 0;
          result[5] += 1431655;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36209395;
          result[3] += 6583526;
          result[4] += 0;
          result[5] += 156750;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 22738062;
          result[1] += 0;
          result[2] += 20211610;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 411658;
          result[1] += 0;
          result[2] += 41165820;
          result[3] += 1166364;
          result[4] += 0;
          result[5] += 205829;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42745150;
          result[5] += 204522;
        } else {
          result[0] += 0;
          result[1] += 2386092;
          result[2] += 0;
          result[3] += 3579139;
          result[4] += 25650499;
          result[5] += 11333941;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1232769;
          result[1] += 49310;
          result[2] += 98621;
          result[3] += 1725876;
          result[4] += 2712091;
          result[5] += 37131003;
        } else {
          result[0] += 1847297;
          result[1] += 115456;
          result[2] += 115456;
          result[3] += 18126609;
          result[4] += 2078209;
          result[5] += 20666643;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 16853669;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26096003;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42139301;
          result[2] += 0;
          result[3] += 0;
          result[4] += 810371;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35535131;
          result[1] += 1537577;
          result[2] += 136673;
          result[3] += 1161725;
          result[4] += 3656018;
          result[5] += 922546;
        } else {
          result[0] += 6533189;
          result[1] += 483939;
          result[2] += 9194859;
          result[3] += 9194859;
          result[4] += 6291219;
          result[5] += 11251604;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 1717986;
          result[2] += 2454267;
          result[3] += 22824683;
          result[4] += 1963413;
          result[5] += 13989322;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31905471;
          result[3] += 11044201;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 1160801;
          result[1] += 0;
          result[2] += 25537643;
          result[3] += 15090425;
          result[4] += 0;
          result[5] += 1160801;
        } else {
          result[0] += 3181457;
          result[1] += 0;
          result[2] += 36586758;
          result[3] += 795364;
          result[4] += 0;
          result[5] += 2386092;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 33405301;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1444790;
          result[1] += 0;
          result[2] += 35857066;
          result[3] += 4991093;
          result[4] += 0;
          result[5] += 656722;
        } else {
          result[0] += 86417;
          result[1] += 0;
          result[2] += 41999076;
          result[3] += 691342;
          result[4] += 0;
          result[5] += 172835;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 360921;
          result[1] += 180460;
          result[2] += 721843;
          result[3] += 180460;
          result[4] += 40423221;
          result[5] += 1082764;
        } else {
          result[0] += 0;
          result[1] += 31496426;
          result[2] += 2863311;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1170536;
          result[1] += 180082;
          result[2] += 450206;
          result[3] += 2431113;
          result[4] += 4412020;
          result[5] += 34305713;
        } else {
          result[0] += 3262000;
          result[1] += 543666;
          result[2] += 1449777;
          result[3] += 21927892;
          result[4] += 2537111;
          result[5] += 13229224;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 5506368;
          result[2] += 0;
          result[3] += 1101273;
          result[4] += 36342030;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1376592;
          result[1] += 16794423;
          result[2] += 1101273;
          result[3] += 3028502;
          result[4] += 18446333;
          result[5] += 2202547;
        } else {
          result[0] += 31737910;
          result[1] += 172488;
          result[2] += 2184856;
          result[3] += 3133543;
          result[4] += 2156108;
          result[5] += 3564765;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2603010;
          result[3] += 1301505;
          result[4] += 7158278;
          result[5] += 31886878;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 27269633;
          result[4] += 0;
          result[5] += 11589594;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30317416;
          result[3] += 8842579;
          result[4] += 0;
          result[5] += 3789677;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 20452225;
          result[2] += 10226112;
          result[3] += 10226112;
          result[4] += 2045222;
          result[5] += 0;
        } else {
          result[0] += 35280088;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 1533916;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24457452;
          result[3] += 12526987;
          result[4] += 0;
          result[5] += 5965232;
        } else {
          result[0] += 483667;
          result[1] += 0;
          result[2] += 39757467;
          result[3] += 2660171;
          result[4] += 48366;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 1867377;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40573011;
          result[5] += 509284;
        } else {
          result[0] += 0;
          result[1] += 20344581;
          result[2] += 0;
          result[3] += 2260509;
          result[4] += 9042036;
          result[5] += 11302545;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 122363;
          result[1] += 0;
          result[2] += 305909;
          result[3] += 917728;
          result[4] += 2263729;
          result[5] += 39339942;
        } else {
          result[0] += 3760185;
          result[1] += 167119;
          result[2] += 835596;
          result[3] += 15542099;
          result[4] += 3927304;
          result[5] += 18717367;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 20861269;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22088403;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32101884;
          result[1] += 1450576;
          result[2] += 157671;
          result[3] += 504548;
          result[4] += 6874470;
          result[5] += 1860521;
        } else {
          result[0] += 7064090;
          result[1] += 0;
          result[2] += 11019981;
          result[3] += 11490921;
          result[4] += 1695381;
          result[5] += 11679297;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 5965232;
          result[5] += 34598347;
        } else {
          result[0] += 0;
          result[1] += 4618244;
          result[2] += 7389191;
          result[3] += 23091222;
          result[4] += 0;
          result[5] += 7851015;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 3435973;
          result[1] += 0;
          result[2] += 31782757;
          result[3] += 6871947;
          result[4] += 286331;
          result[5] += 572662;
        } else {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37313743;
          result[3] += 5052902;
          result[4] += 0;
          result[5] += 583027;
        } else {
          result[0] += 152574;
          result[1] += 0;
          result[2] += 42110514;
          result[3] += 686584;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 6179809;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35688397;
          result[5] += 1081466;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2489836;
          result[4] += 18673770;
          result[5] += 21786065;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 94811;
          result[1] += 142217;
          result[2] += 0;
          result[3] += 2370291;
          result[4] += 2986566;
          result[5] += 37355786;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 641039;
          result[3] += 26496315;
          result[4] += 1282079;
          result[5] += 14530237;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 18703889;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24245783;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33040733;
          result[1] += 2296773;
          result[2] += 196866;
          result[3] += 1017142;
          result[4] += 5413824;
          result[5] += 984331;
        } else {
          result[0] += 8335246;
          result[1] += 1157673;
          result[2] += 10650592;
          result[3] += 10071756;
          result[4] += 1852277;
          result[5] += 10882127;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 933688;
          result[1] += 1400532;
          result[2] += 6068975;
          result[3] += 4201598;
          result[4] += 4201598;
          result[5] += 26143279;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7898790;
          result[3] += 26658417;
          result[4] += 493674;
          result[5] += 7898790;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 792429;
          result[1] += 475457;
          result[2] += 27893514;
          result[3] += 10777039;
          result[4] += 0;
          result[5] += 3011231;
        } else {
          result[0] += 26724240;
          result[1] += 1908874;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38041138;
          result[3] += 4908534;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42492761;
          result[3] += 456911;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 350133;
          result[1] += 0;
          result[2] += 42132695;
          result[3] += 466844;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 580400;
          result[1] += 773867;
          result[2] += 773867;
          result[3] += 0;
          result[4] += 38693399;
          result[5] += 2128136;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1149616;
          result[1] += 183938;
          result[2] += 0;
          result[3] += 2805064;
          result[4] += 2529156;
          result[5] += 36281897;
        } else {
          result[0] += 172488;
          result[1] += 172488;
          result[2] += 862443;
          result[3] += 22251035;
          result[4] += 3449772;
          result[5] += 16041444;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 19482325;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23467347;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42851389;
          result[2] += 0;
          result[3] += 98283;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33935544;
          result[1] += 1259326;
          result[2] += 298261;
          result[3] += 961065;
          result[4] += 4838466;
          result[5] += 1657008;
        } else {
          result[0] += 10021590;
          result[1] += 318145;
          result[2] += 5885695;
          result[3] += 13203047;
          result[4] += 2386092;
          result[5] += 11135100;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 588351;
          result[3] += 8825275;
          result[4] += 2941758;
          result[5] += 30594287;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6417767;
          result[3] += 27645766;
          result[4] += 0;
          result[5] += 8886139;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36342030;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 604924;
          result[1] += 1209849;
          result[2] += 28028190;
          result[3] += 8468949;
          result[4] += 604924;
          result[5] += 4032833;
        } else {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 2045222;
          result[4] += 6135667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 9395240;
          result[4] += 0;
          result[5] += 1342177;
        } else {
          result[0] += 213679;
          result[1] += 0;
          result[2] += 40759453;
          result[3] += 1816279;
          result[4] += 0;
          result[5] += 160259;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 727960;
          result[1] += 582368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38727501;
          result[5] += 2911842;
        } else {
          result[0] += 24190045;
          result[1] += 0;
          result[2] += 246837;
          result[3] += 493674;
          result[4] += 9626650;
          result[5] += 8392464;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 187008;
          result[3] += 748034;
          result[4] += 1558406;
          result[5] += 40456223;
        } else {
          result[0] += 125217;
          result[1] += 375653;
          result[2] += 0;
          result[3] += 9892198;
          result[4] += 9015674;
          result[5] += 23540928;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42742186;
          result[2] += 0;
          result[3] += 0;
          result[4] += 207486;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32990328;
          result[1] += 2005701;
          result[2] += 380391;
          result[3] += 1901958;
          result[4] += 4737604;
          result[5] += 933688;
        } else {
          result[0] += 5359531;
          result[1] += 293672;
          result[2] += 8883607;
          result[3] += 15491249;
          result[4] += 2275965;
          result[5] += 10645645;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3142658;
          result[3] += 3142658;
          result[4] += 4190211;
          result[5] += 32474142;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 28185722;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25299122;
          result[3] += 14120440;
          result[4] += 0;
          result[5] += 3530110;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 14316557;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 193249;
          result[1] += 0;
          result[2] += 39422871;
          result[3] += 2995365;
          result[4] += 0;
          result[5] += 338186;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 30678337;
          result[1] += 0;
          result[2] += 8180890;
          result[3] += 0;
          result[4] += 4090445;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 167119;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41612718;
          result[5] += 1169835;
        } else {
          result[0] += 21203003;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2718333;
          result[4] += 5436667;
          result[5] += 13591668;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56216;
          result[3] += 1236770;
          result[4] += 2361107;
          result[5] += 39295577;
        } else {
          result[0] += 102261;
          result[1] += 511305;
          result[2] += 102261;
          result[3] += 15748213;
          result[4] += 3681400;
          result[5] += 22804231;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 20294900;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22654772;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34359738;
          result[1] += 889794;
          result[2] += 239559;
          result[3] += 1163576;
          result[4] += 5270318;
          result[5] += 1026685;
        } else {
          result[0] += 11316615;
          result[1] += 1514822;
          result[2] += 9712685;
          result[3] += 11138400;
          result[4] += 1782144;
          result[5] += 7485005;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 5368709;
          result[1] += 0;
          result[2] += 894784;
          result[3] += 4473924;
          result[4] += 12526987;
          result[5] += 19685266;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6902626;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 2468372;
          result[1] += 0;
          result[2] += 26164743;
          result[3] += 5430418;
          result[4] += 987348;
          result[5] += 7898790;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25053975;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 715827;
        } else {
          result[0] += 302462;
          result[1] += 0;
          result[2] += 36900423;
          result[3] += 5141862;
          result[4] += 0;
          result[5] += 604924;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22906492;
          result[3] += 20043180;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 237291;
          result[1] += 0;
          result[2] += 42237799;
          result[3] += 474582;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 769707;
          result[1] += 153941;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38793252;
          result[5] += 3232771;
        } else {
          result[0] += 0;
          result[1] += 39881839;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3067833;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 41281724;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1667948;
          result[5] += 0;
        } else {
          result[0] += 2863311;
          result[1] += 1431655;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22190664;
          result[5] += 16464041;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 878915;
          result[4] += 1699236;
          result[5] += 40371520;
        } else {
          result[0] += 2395599;
          result[1] += 342228;
          result[2] += 513342;
          result[3] += 9582397;
          result[4] += 4962312;
          result[5] += 25153792;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 613566;
          result[3] += 4908534;
          result[4] += 4294967;
          result[5] += 33132604;
        } else {
          result[0] += 453693;
          result[1] += 302462;
          result[2] += 453693;
          result[3] += 31909792;
          result[4] += 453693;
          result[5] += 9376337;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 7961402;
          result[1] += 2304616;
          result[2] += 4609233;
          result[3] += 9427976;
          result[4] += 6494828;
          result[5] += 12151614;
        } else {
          result[0] += 34667568;
          result[1] += 806222;
          result[2] += 696283;
          result[3] += 1172687;
          result[4] += 5313739;
          result[5] += 293171;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 2025927;
          result[2] += 12965939;
          result[3] += 19854094;
          result[4] += 810371;
          result[5] += 7293340;
        } else {
          result[0] += 3029196;
          result[1] += 540927;
          result[2] += 29967404;
          result[3] += 6923876;
          result[4] += 757299;
          result[5] += 1730969;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 2863311;
          result[1] += 0;
          result[2] += 20043180;
          result[3] += 0;
          result[4] += 2863311;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41184617;
          result[3] += 1699682;
          result[4] += 0;
          result[5] += 65372;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 32582510;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5924092;
          result[5] += 4443069;
        } else {
          result[0] += 0;
          result[1] += 350609;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41897844;
          result[5] += 701219;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 114685;
          result[1] += 401398;
          result[2] += 114685;
          result[3] += 917483;
          result[4] += 1662937;
          result[5] += 39738482;
        } else {
          result[0] += 3769052;
          result[1] += 438261;
          result[2] += 788871;
          result[3] += 15163864;
          result[4] += 4470272;
          result[5] += 18319350;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        } else {
          result[0] += 191739;
          result[1] += 42566193;
          result[2] += 0;
          result[3] += 0;
          result[4] += 191739;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34463779;
          result[1] += 1885753;
          result[2] += 162564;
          result[3] += 682772;
          result[4] += 4909462;
          result[5] += 845337;
        } else {
          result[0] += 9144786;
          result[1] += 411001;
          result[2] += 8528284;
          result[3] += 9555788;
          result[4] += 2363259;
          result[5] += 12946552;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9203501;
          result[3] += 25463020;
          result[4] += 3374617;
          result[5] += 4908534;
        } else {
          result[0] += 687194;
          result[1] += 0;
          result[2] += 30923764;
          result[3] += 7559142;
          result[4] += 343597;
          result[5] += 3435973;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42e10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 30678337;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 215827;
          result[1] += 0;
          result[2] += 40305786;
          result[3] += 1942447;
          result[4] += 0;
          result[5] += 485611;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42040685;
          result[5] += 908987;
        } else {
          result[0] += 1022611;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24542670;
          result[5] += 17384391;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 171798;
          result[3] += 801727;
          result[4] += 1431655;
          result[5] += 40544491;
        } else {
          result[0] += 2835308;
          result[1] += 2100228;
          result[2] += 420045;
          result[3] += 14281553;
          result[4] += 3570388;
          result[5] += 19742147;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 7953643;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34996029;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31596929;
          result[1] += 1046052;
          result[2] += 123064;
          result[3] += 1446013;
          result[4] += 6460910;
          result[5] += 2276701;
        } else {
          result[0] += 7462886;
          result[1] += 380759;
          result[2] += 9823595;
          result[3] += 13174279;
          result[4] += 2360708;
          result[5] += 9747443;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 795364;
          result[2] += 4772185;
          result[3] += 2386092;
          result[4] += 3181457;
          result[5] += 31814572;
        } else {
          result[0] += 2260509;
          result[1] += 0;
          result[2] += 19779454;
          result[3] += 14128181;
          result[4] += 0;
          result[5] += 6781527;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 810371;
          result[1] += 0;
          result[2] += 30794105;
          result[3] += 10940011;
          result[4] += 0;
          result[5] += 405185;
        } else {
          result[0] += 37580963;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 270123;
          result[1] += 0;
          result[2] += 36196579;
          result[3] += 6482969;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 91382;
          result[1] += 0;
          result[2] += 42035850;
          result[3] += 548293;
          result[4] += 0;
          result[5] += 274146;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 184333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42765339;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 3904515;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 27790964;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12632256;
          result[5] += 2526451;
        } else {
          result[0] += 0;
          result[1] += 98621;
          result[2] += 0;
          result[3] += 2317605;
          result[4] += 2268295;
          result[5] += 38265150;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 3789677;
          result[1] += 2210644;
          result[2] += 0;
          result[3] += 3789677;
          result[4] += 9158386;
          result[5] += 24001287;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2013265;
          result[3] += 28185722;
          result[4] += 838860;
          result[5] += 11911823;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1690932;
          result[1] += 18769345;
          result[2] += 0;
          result[3] += 1183652;
          result[4] += 19952997;
          result[5] += 1352745;
        } else {
          result[0] += 30846497;
          result[1] += 181094;
          result[2] += 1901496;
          result[3] += 3320073;
          result[4] += 3078613;
          result[5] += 3621897;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42830000))) ) ) {
          result[0] += 209510;
          result[1] += 42425896;
          result[2] += 0;
          result[3] += 104755;
          result[4] += 209510;
          result[5] += 0;
        } else {
          result[0] += 9544371;
          result[1] += 4772185;
          result[2] += 19088743;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 1317474;
          result[2] += 16073190;
          result[3] += 18708139;
          result[4] += 0;
          result[5] += 6850868;
        } else {
          result[0] += 3022045;
          result[1] += 0;
          result[2] += 33700383;
          result[3] += 5219896;
          result[4] += 91577;
          result[5] += 915771;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 397682;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 3976821;
          result[4] += 0;
          result[5] += 397682;
        } else {
          result[0] += 193032;
          result[1] += 0;
          result[2] += 42370576;
          result[3] += 386064;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 575218;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41415756;
          result[5] += 958698;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 954437;
          result[3] += 6681060;
          result[4] += 20997617;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 59735;
          result[1] += 0;
          result[2] += 59735;
          result[3] += 955764;
          result[4] += 657088;
          result[5] += 41217349;
        } else {
          result[0] += 3978325;
          result[1] += 1299044;
          result[2] += 405951;
          result[3] += 15263777;
          result[4] += 4627847;
          result[5] += 17374725;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25769803;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42355898;
          result[2] += 0;
          result[3] += 0;
          result[4] += 593774;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32723560;
          result[1] += 941451;
          result[2] += 422030;
          result[3] += 1266090;
          result[4] += 6200595;
          result[5] += 1395945;
        } else {
          result[0] += 7158278;
          result[1] += 1049880;
          result[2] += 10021590;
          result[3] += 11262358;
          result[4] += 2481536;
          result[5] += 10976027;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 3221225;
          result[2] += 6442450;
          result[3] += 4294967;
          result[4] += 2147483;
          result[5] += 26843545;
        } else {
          result[0] += 3408704;
          result[1] += 1363481;
          result[2] += 4772185;
          result[3] += 25224411;
          result[4] += 681740;
          result[5] += 7499149;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33132604;
          result[3] += 7362801;
          result[4] += 0;
          result[5] += 2454267;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1012281;
          result[1] += 0;
          result[2] += 34562194;
          result[3] += 6941361;
          result[4] += 0;
          result[5] += 433835;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 14939016;
          result[1] += 0;
          result[2] += 28010656;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 73418;
          result[1] += 0;
          result[2] += 41921817;
          result[3] += 954437;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 180460;
          result[1] += 360921;
          result[2] += 0;
          result[3] += 902304;
          result[4] += 39520917;
          result[5] += 1985068;
        } else {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2684354;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1725656;
          result[1] += 287609;
          result[2] += 47934;
          result[3] += 814893;
          result[4] += 3930662;
          result[5] += 36142916;
        } else {
          result[0] += 432379;
          result[1] += 0;
          result[2] += 1297137;
          result[3] += 20754204;
          result[4] += 1153011;
          result[5] += 19312940;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1396737;
          result[1] += 8031239;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31426589;
          result[5] += 2095105;
        } else {
          result[0] += 31095563;
          result[1] += 544029;
          result[2] += 1603454;
          result[3] += 3980003;
          result[4] += 2691512;
          result[5] += 3035110;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 631612;
          result[3] += 3158064;
          result[4] += 7579354;
          result[5] += 31580641;
        } else {
          result[0] += 0;
          result[1] += 676372;
          result[2] += 7440100;
          result[3] += 24011234;
          result[4] += 1014559;
          result[5] += 9807405;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 16806393;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22408525;
          result[5] += 3734754;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 11453246;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 34359738;
          result[1] += 4294967;
          result[2] += 4294967;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 535754;
          result[1] += 0;
          result[2] += 38485049;
          result[3] += 3616344;
          result[4] += 44646;
          result[5] += 267877;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 436776;
          result[1] += 291184;
          result[2] += 145592;
          result[3] += 145592;
          result[4] += 39164278;
          result[5] += 2766250;
        } else {
          result[0] += 0;
          result[1] += 17685159;
          result[2] += 20211610;
          result[3] += 0;
          result[4] += 5052902;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 483939;
          result[4] += 1391327;
          result[5] += 41074405;
        } else {
          result[0] += 4588318;
          result[1] += 1128275;
          result[2] += 1429148;
          result[3] += 16021506;
          result[4] += 3159170;
          result[5] += 16623253;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          result[0] += 4941112;
          result[1] += 16913809;
          result[2] += 190042;
          result[3] += 380085;
          result[4] += 18624194;
          result[5] += 1900428;
        } else {
          result[0] += 30686925;
          result[1] += 240446;
          result[2] += 2194070;
          result[3] += 3486467;
          result[4] += 2825240;
          result[5] += 3516523;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 12884901;
          result[1] += 30064771;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 106311;
          result[1] += 42737050;
          result[2] += 0;
          result[3] += 0;
          result[4] += 106311;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3702558;
          result[3] += 740511;
          result[4] += 11107674;
          result[5] += 27398929;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 2169175;
          result[2] += 7375196;
          result[3] += 26030104;
          result[4] += 433835;
          result[5] += 6941361;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29826161;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 8351325;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13071639;
          result[3] += 13071639;
          result[4] += 0;
          result[5] += 16806393;
        } else {
          result[0] += 1160801;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 8706014;
          result[4] += 580400;
          result[5] += 290200;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40773556;
          result[3] += 2004318;
          result[4] += 0;
          result[5] += 171798;
        } else {
          result[0] += 11302545;
          result[1] += 0;
          result[2] += 31647127;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 825955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41917228;
          result[5] += 206488;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3789677;
          result[4] += 25264513;
          result[5] += 13895482;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1975892;
          result[1] += 675963;
          result[2] += 0;
          result[3] += 883952;
          result[4] += 3223825;
          result[5] += 36190039;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 913822;
          result[3] += 24520912;
          result[4] += 1523038;
          result[5] += 15991899;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32675074;
          result[1] += 2098116;
          result[2] += 61709;
          result[3] += 678802;
          result[4] += 7004005;
          result[5] += 431965;
        } else {
          result[0] += 8005969;
          result[1] += 565127;
          result[2] += 7723406;
          result[3] += 11302545;
          result[4] += 3579139;
          result[5] += 11773484;
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 671088;
          result[2] += 3355443;
          result[3] += 4026531;
          result[4] += 8053063;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8312839;
          result[3] += 29094939;
          result[4] += 0;
          result[5] += 5541893;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 7158278;
          result[4] += 14316557;
          result[5] += 14316557;
        } else {
          result[0] += 943948;
          result[1] += 0;
          result[2] += 34926107;
          result[3] += 5663693;
          result[4] += 0;
          result[5] += 1415923;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 10737418;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 1789569;
        } else {
          result[0] += 2045222;
          result[1] += 0;
          result[2] += 27269633;
          result[3] += 4772185;
          result[4] += 2045222;
          result[5] += 6817408;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1130254;
          result[1] += 322929;
          result[2] += 34876426;
          result[3] += 6297132;
          result[4] += 0;
          result[5] += 322929;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41637119;
          result[3] += 1239634;
          result[4] += 0;
          result[5] += 72919;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 172488;
          result[4] += 41569763;
          result[5] += 1207420;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59077;
          result[3] += 886169;
          result[4] += 1122481;
          result[5] += 40881944;
        } else {
          result[0] += 4781345;
          result[1] += 1813613;
          result[2] += 82436;
          result[3] += 13849414;
          result[4] += 2225798;
          result[5] += 20197063;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37223049;
          result[5] += 0;
        } else {
          result[0] += 96516;
          result[1] += 42177543;
          result[2] += 0;
          result[3] += 289548;
          result[4] += 386064;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1418149;
          result[1] += 9319268;
          result[2] += 202592;
          result[3] += 2633706;
          result[4] += 26742249;
          result[5] += 2633706;
        } else {
          result[0] += 30844616;
          result[1] += 378283;
          result[2] += 1454934;
          result[3] += 3317251;
          result[4] += 3550040;
          result[5] += 3404547;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 28082478;
          result[4] += 0;
          result[5] += 11563373;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10307921;
          result[3] += 18897856;
          result[4] += 0;
          result[5] += 13743895;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30601641;
          result[3] += 11811160;
          result[4] += 0;
          result[5] += 536870;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3067833;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 9203501;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 9911462;
          result[1] += 0;
          result[2] += 19822925;
          result[3] += 3303820;
          result[4] += 1101273;
          result[5] += 8810189;
        } else {
          result[0] += 762154;
          result[1] += 0;
          result[2] += 38556073;
          result[3] += 3138285;
          result[4] += 89665;
          result[5] += 403493;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40254086;
          result[5] += 2695586;
        } else {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 24051816;
          result[4] += 1717986;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 27221623;
          result[1] += 0;
          result[2] += 0;
          result[3] += 604924;
          result[4] += 15123124;
          result[5] += 0;
        } else {
          result[0] += 450807;
          result[1] += 245895;
          result[2] += 0;
          result[3] += 4917901;
          result[4] += 1680283;
          result[5] += 35654785;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1986112;
          result[1] += 14895840;
          result[2] += 0;
          result[3] += 496528;
          result[4] += 25074664;
          result[5] += 496528;
        } else {
          result[0] += 31118040;
          result[1] += 1298938;
          result[2] += 1750742;
          result[3] += 2654351;
          result[4] += 3670912;
          result[5] += 2456687;
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 363980;
          result[2] += 727960;
          result[3] += 10191447;
          result[4] += 3639802;
          result[5] += 28026481;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8288533;
          result[3] += 27126109;
          result[4] += 0;
          result[5] += 7535030;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29314856;
          result[3] += 10226112;
          result[4] += 0;
          result[5] += 3408704;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 3067833;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39881839;
          result[5] += 0;
        } else {
          result[0] += 11523082;
          result[1] += 3142658;
          result[2] += 7332870;
          result[3] += 5237764;
          result[4] += 1047552;
          result[5] += 14665741;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33382684;
          result[3] += 8752776;
          result[4] += 0;
          result[5] += 814211;
        } else {
          result[0] += 468116;
          result[1] += 0;
          result[2] += 40199489;
          result[3] += 1872465;
          result[4] += 58514;
          result[5] += 351087;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 704092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41189440;
          result[5] += 1056139;
        } else {
          result[0] += 0;
          result[1] += 2863311;
          result[2] += 0;
          result[3] += 4294967;
          result[4] += 20043180;
          result[5] += 15748213;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 57961;
          result[1] += 0;
          result[2] += 289808;
          result[3] += 1159235;
          result[4] += 1912738;
          result[5] += 39529928;
        } else {
          result[0] += 5108551;
          result[1] += 189205;
          result[2] += 94602;
          result[3] += 12676775;
          result[4] += 4162523;
          result[5] += 20718014;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 954437;
          result[2] += 954437;
          result[3] += 0;
          result[4] += 41040798;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41971320;
          result[2] += 0;
          result[3] += 293505;
          result[4] += 684846;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35382514;
          result[1] += 1762215;
          result[2] += 0;
          result[3] += 760171;
          result[4] += 4491920;
          result[5] += 552851;
        } else {
          result[0] += 10007690;
          result[1] += 1111965;
          result[2] += 9729699;
          result[3] += 10841665;
          result[4] += 1806944;
          result[5] += 9451707;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 38177487;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 30279519;
          result[4] += 1073741;
          result[5] += 6227702;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6442450;
          result[3] += 4294967;
          result[4] += 6442450;
          result[5] += 25769803;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36633544;
          result[3] += 1263225;
          result[4] += 0;
          result[5] += 5052902;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 766958;
          result[1] += 0;
          result[2] += 0;
          result[3] += 766958;
          result[4] += 12271335;
          result[5] += 29144420;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27331610;
          result[3] += 1301505;
          result[4] += 1301505;
          result[5] += 13015052;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 14316557;
          result[1] += 1193046;
          result[2] += 11930464;
          result[3] += 7158278;
          result[4] += 3579139;
          result[5] += 4772185;
        } else {
          result[0] += 278893;
          result[1] += 0;
          result[2] += 38115510;
          result[3] += 4136927;
          result[4] += 92964;
          result[5] += 325376;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42680000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 169093;
          result[1] += 845466;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39229622;
          result[5] += 2705491;
        } else {
          result[0] += 2369888;
          result[1] += 218758;
          result[2] += 328138;
          result[3] += 6526308;
          result[4] += 3172004;
          result[5] += 30334573;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32182261;
          result[1] += 2099495;
          result[2] += 239942;
          result[3] += 1079740;
          result[4] += 4738860;
          result[5] += 2609372;
        } else {
          result[0] += 7465293;
          result[1] += 581711;
          result[2] += 11537271;
          result[3] += 12506789;
          result[4] += 3781122;
          result[5] += 7077485;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1431655;
          result[3] += 1431655;
          result[4] += 2863311;
          result[5] += 37223049;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5237764;
          result[3] += 19903506;
          result[4] += 0;
          result[5] += 17808400;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29386618;
          result[3] += 13563054;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 15240206;
          result[1] += 6927366;
          result[2] += 0;
          result[3] += 5541893;
          result[4] += 1385473;
          result[5] += 13854733;
        } else {
          result[0] += 1789569;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 381774;
          result[2] += 31496426;
          result[3] += 10117034;
          result[4] += 0;
          result[5] += 954437;
        } else {
          result[0] += 184333;
          result[1] += 0;
          result[2] += 40614783;
          result[3] += 1904778;
          result[4] += 0;
          result[5] += 245777;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 795364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41955467;
          result[5] += 198841;
        } else {
          result[0] += 681740;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 13634816;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 64295;
          result[1] += 0;
          result[2] += 64295;
          result[3] += 1221622;
          result[4] += 1157326;
          result[5] += 40442132;
        } else {
          result[0] += 3966932;
          result[1] += 1678317;
          result[2] += 152574;
          result[3] += 13426540;
          result[4] += 2517476;
          result[5] += 21207831;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 2013265;
          result[2] += 2684354;
          result[3] += 0;
          result[4] += 38252052;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42280078;
          result[2] += 0;
          result[3] += 0;
          result[4] += 669594;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33260375;
          result[1] += 1242217;
          result[2] += 652164;
          result[3] += 1397494;
          result[4] += 5093092;
          result[5] += 1304328;
        } else {
          result[0] += 9283392;
          result[1] += 1789569;
          result[2] += 6375342;
          result[3] += 12415139;
          result[4] += 3131746;
          result[5] += 9954481;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9911462;
          result[4] += 0;
          result[5] += 33038209;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12126966;
          result[3] += 24253932;
          result[4] += 505290;
          result[5] += 6063483;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 8259552;
          result[1] += 0;
          result[2] += 4955731;
          result[3] += 16519104;
          result[4] += 0;
          result[5] += 13215283;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37265157;
          result[3] += 5684515;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 375809;
          result[1] += 0;
          result[2] += 40050570;
          result[3] += 2415919;
          result[4] += 0;
          result[5] += 107374;
        } else {
          result[0] += 14867194;
          result[1] += 0;
          result[2] += 28082478;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 171114;
          result[1] += 1197799;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40725187;
          result[5] += 855571;
        } else {
          result[0] += 20629370;
          result[1] += 676372;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11498337;
          result[5] += 10145592;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 579617;
          result[4] += 1912738;
          result[5] += 40457316;
        } else {
          result[0] += 645166;
          result[1] += 92166;
          result[2] += 460833;
          result[3] += 13456335;
          result[4] += 2857167;
          result[5] += 25438003;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1941228;
          result[1] += 6794298;
          result[2] += 727960;
          result[3] += 485307;
          result[4] += 30574343;
          result[5] += 2426535;
        } else {
          result[0] += 0;
          result[1] += 42633866;
          result[2] += 0;
          result[3] += 0;
          result[4] += 315806;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 19514477;
          result[1] += 712857;
          result[2] += 4188038;
          result[3] += 8286970;
          result[4] += 4544467;
          result[5] += 5702861;
        } else {
          result[0] += 37223049;
          result[1] += 1476395;
          result[2] += 984263;
          result[3] += 805306;
          result[4] += 2013265;
          result[5] += 447392;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2887372;
          result[3] += 24181748;
          result[4] += 721843;
          result[5] += 15158708;
        } else {
          result[0] += 0;
          result[1] += 580400;
          result[2] += 23796440;
          result[3] += 12768821;
          result[4] += 580400;
          result[5] += 5223608;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 3817748;
          result[1] += 477218;
          result[2] += 32928082;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 954437;
        } else {
          result[0] += 33521695;
          result[1] += 0;
          result[2] += 9427976;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 17299173;
          result[3] += 16106127;
          result[4] += 596523;
          result[5] += 7158278;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 530242;
          result[1] += 530242;
          result[2] += 32875058;
          result[3] += 7688521;
          result[4] += 0;
          result[5] += 1325607;
        } else {
          result[0] += 67319;
          result[1] += 0;
          result[2] += 41468649;
          result[3] += 1346384;
          result[4] += 0;
          result[5] += 67319;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
