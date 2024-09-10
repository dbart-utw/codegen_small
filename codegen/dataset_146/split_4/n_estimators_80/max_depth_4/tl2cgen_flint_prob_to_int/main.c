
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
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0;
          result[1] += 917728;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50245610;
          result[5] += 2523752;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 46976204;
          result[4] += 6710886;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40265318;
          result[4] += 13421772;
          result[5] += 0;
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72354;
          result[3] += 2025927;
          result[4] += 2387700;
          result[5] += 49201107;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 39177066;
          result[4] += 0;
          result[5] += 14510024;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 37580963;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14572210;
          result[5] += 1533916;
        } else {
          result[0] += 1802924;
          result[1] += 0;
          result[2] += 3405524;
          result[3] += 20733634;
          result[4] += 5008124;
          result[5] += 22736883;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
          result[0] += 6597142;
          result[1] += 15014186;
          result[2] += 227487;
          result[3] += 1592413;
          result[4] += 25933594;
          result[5] += 4322265;
        } else {
          result[0] += 44990972;
          result[1] += 869611;
          result[2] += 320383;
          result[3] += 1922299;
          result[4] += 2059607;
          result[5] += 3524216;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 48806446;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4880644;
          result[5] += 0;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 646832;
          result[2] += 7115156;
          result[3] += 19404972;
          result[4] += 646832;
          result[5] += 25873296;
        } else {
          result[0] += 0;
          result[1] += 317675;
          result[2] += 30814484;
          result[3] += 15248404;
          result[4] += 0;
          result[5] += 7306527;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 823421;
          result[1] += 0;
          result[2] += 48087824;
          result[3] += 3732844;
          result[4] += 384263;
          result[5] += 658737;
        } else {
          result[0] += 18583993;
          result[1] += 0;
          result[2] += 35103098;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
          result[0] += 210537;
          result[1] += 5263440;
          result[2] += 0;
          result[3] += 842150;
          result[4] += 43370748;
          result[5] += 4000214;
        } else {
          result[0] += 43183095;
          result[1] += 0;
          result[2] += 2334221;
          result[3] += 4668442;
          result[4] += 1167110;
          result[5] += 2334221;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1664716;
          result[4] += 3537521;
          result[5] += 48484853;
        } else {
          result[0] += 1801580;
          result[1] += 120105;
          result[2] += 600526;
          result[3] += 20658120;
          result[4] += 6245478;
          result[5] += 24261280;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 14641933;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 0;
        } else {
          result[0] += 126322;
          result[1] += 52297542;
          result[2] += 0;
          result[3] += 252645;
          result[4] += 757935;
          result[5] += 252645;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 39838757;
          result[1] += 2261762;
          result[2] += 158720;
          result[3] += 1706241;
          result[4] += 6031365;
          result[5] += 3690243;
        } else {
          result[0] += 9159882;
          result[1] += 1144985;
          result[2] += 9032662;
          result[3] += 13230941;
          result[4] += 5979367;
          result[5] += 15139250;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42db0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 45552683;
          result[4] += 0;
          result[5] += 8134407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22513941;
          result[3] += 13854733;
          result[4] += 2597762;
          result[5] += 14720654;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45427538;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 7158278;
        } else {
          result[0] += 565127;
          result[1] += 0;
          result[2] += 43232236;
          result[3] += 8476909;
          result[4] += 0;
          result[5] += 1412818;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 12782640;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5113056;
        } else {
          result[0] += 144320;
          result[1] += 0;
          result[2] += 51017168;
          result[3] += 2236962;
          result[4] += 0;
          result[5] += 288640;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 230416;
          result[1] += 460833;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52995841;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1309441;
          result[4] += 30117148;
          result[5] += 22260501;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 149963;
          result[2] += 74981;
          result[3] += 1499639;
          result[4] += 2699350;
          result[5] += 49263154;
        } else {
          result[0] += 4774351;
          result[1] += 487178;
          result[2] += 0;
          result[3] += 16758946;
          result[4] += 4774351;
          result[5] += 26892263;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 52749325;
          result[2] += 0;
          result[3] += 0;
          result[4] += 937765;
          result[5] += 0;
        } else {
          result[0] += 711087;
          result[1] += 18488269;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33776646;
          result[5] += 711087;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46281975;
          result[1] += 1580360;
          result[2] += 0;
          result[3] += 632144;
          result[4] += 4560467;
          result[5] += 632144;
        } else {
          result[0] += 11683201;
          result[1] += 695428;
          result[2] += 12795887;
          result[3] += 15160344;
          result[4] += 1947200;
          result[5] += 11405029;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1451002;
          result[4] += 7255012;
          result[5] += 44981076;
        } else {
          result[0] += 1309441;
          result[1] += 4364804;
          result[2] += 8293127;
          result[3] += 23133462;
          result[4] += 4364804;
          result[5] += 12221451;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 4238454;
          result[2] += 15541000;
          result[3] += 9889727;
          result[4] += 2825636;
          result[5] += 21192272;
        } else {
          result[0] += 4006499;
          result[1] += 400649;
          result[2] += 40866293;
          result[3] += 5609099;
          result[4] += 400649;
          result[5] += 2403899;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42182714;
          result[3] += 9412671;
          result[4] += 0;
          result[5] += 2091704;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 8259552;
          result[1] += 0;
          result[2] += 37167986;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52129615;
          result[3] += 1557475;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 242928;
          result[1] += 3400992;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49314386;
          result[5] += 728784;
        } else {
          result[0] += 20849355;
          result[1] += 5212338;
          result[2] += 0;
          result[3] += 2606169;
          result[4] += 8339742;
          result[5] += 16679484;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 347714;
          result[3] += 2434000;
          result[4] += 2086285;
          result[5] += 48819090;
        } else {
          result[0] += 540927;
          result[1] += 135231;
          result[2] += 2569407;
          result[3] += 20555259;
          result[4] += 2569407;
          result[5] += 27316857;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 53313399;
          result[2] += 0;
          result[3] += 0;
          result[4] += 373692;
          result[5] += 0;
        } else {
          result[0] += 16339549;
          result[1] += 21007992;
          result[2] += 0;
          result[3] += 2334221;
          result[4] += 14005328;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40344502;
          result[1] += 2256758;
          result[2] += 712660;
          result[3] += 1385728;
          result[4] += 8076819;
          result[5] += 910621;
        } else {
          result[0] += 8639302;
          result[1] += 246837;
          result[2] += 12588697;
          result[3] += 14193139;
          result[4] += 3949395;
          result[5] += 14069720;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42aa0000))) ) ) {
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
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 35791394;
        } else {
          result[0] += 1019375;
          result[1] += 0;
          result[2] += 29901671;
          result[3] += 17669169;
          result[4] += 0;
          result[5] += 5096875;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 1451002;
          result[1] += 0;
          result[2] += 36275061;
          result[3] += 5804009;
          result[4] += 2902004;
          result[5] += 7255012;
        } else {
          result[0] += 31317469;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8947848;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43866281;
          result[3] += 8838728;
          result[4] += 0;
          result[5] += 982080;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52098715;
          result[3] += 1508956;
          result[4] += 0;
          result[5] += 79418;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 894784;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51226432;
          result[5] += 1565873;
        } else {
          result[0] += 0;
          result[1] += 32808777;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20878313;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1845313;
          result[1] += 461328;
          result[2] += 0;
          result[3] += 1729981;
          result[4] += 6054935;
          result[5] += 43595532;
        } else {
          result[0] += 860370;
          result[1] += 0;
          result[2] += 2925258;
          result[3] += 29424655;
          result[4] += 0;
          result[5] += 20476807;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        } else {
          result[0] += 132234;
          result[1] += 53290388;
          result[2] += 0;
          result[3] += 0;
          result[4] += 264468;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41071017;
          result[1] += 2397446;
          result[2] += 39302;
          result[3] += 1218374;
          result[4] += 6209780;
          result[5] += 2751168;
        } else {
          result[0] += 10131837;
          result[1] += 465831;
          result[2] += 11878705;
          result[3] += 16769937;
          result[4] += 2212700;
          result[5] += 12228079;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 18332177;
          result[4] += 0;
          result[5] += 35354913;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29080507;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 34164512;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19522578;
          result[5] += 0;
        } else {
          result[0] += 7669584;
          result[1] += 0;
          result[2] += 46017506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26372606;
          result[3] += 16011939;
          result[4] += 0;
          result[5] += 11302545;
        } else {
          result[0] += 1209168;
          result[1] += 0;
          result[2] += 44497408;
          result[3] += 7013178;
          result[4] += 0;
          result[5] += 967334;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48933546;
          result[3] += 4473924;
          result[4] += 0;
          result[5] += 279620;
        } else {
          result[0] += 110014;
          result[1] += 0;
          result[2] += 53027004;
          result[3] += 550072;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 756156;
          result[4] += 49654258;
          result[5] += 3276676;
        } else {
          result[0] += 0;
          result[1] += 31580641;
          result[2] += 0;
          result[3] += 3158064;
          result[4] += 0;
          result[5] += 18948385;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 147898;
          result[3] += 1109237;
          result[4] += 2884017;
          result[5] += 49545938;
        } else {
          result[0] += 1499639;
          result[1] += 1649603;
          result[2] += 599855;
          result[3] += 16945925;
          result[4] += 4648882;
          result[5] += 28343185;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 12201611;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 2440322;
        } else {
          result[0] += 116711;
          result[1] += 52169847;
          result[2] += 116711;
          result[3] += 816977;
          result[4] += 466844;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 17494342;
          result[1] += 637445;
          result[2] += 1912337;
          result[3] += 9420030;
          result[4] += 9844994;
          result[5] += 14377941;
        } else {
          result[0] += 44432366;
          result[1] += 1986616;
          result[2] += 1017535;
          result[3] += 1065989;
          result[4] += 4603135;
          result[5] += 581448;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 46976204;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1626881;
          result[3] += 43112361;
          result[4] += 0;
          result[5] += 8947848;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4668442;
          result[3] += 28010656;
          result[4] += 2334221;
          result[5] += 18673770;
        } else {
          result[0] += 1342177;
          result[1] += 0;
          result[2] += 29527900;
          result[3] += 12079595;
          result[4] += 0;
          result[5] += 10737418;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9761289;
          result[3] += 43925801;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 464320;
          result[1] += 0;
          result[2] += 49159963;
          result[3] += 3598486;
          result[4] += 0;
          result[5] += 464320;
        } else {
          result[0] += 31317469;
          result[1] += 0;
          result[2] += 22369621;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42960000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x423e0000))) ) ) {
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 445536;
          result[1] += 2450448;
          result[2] += 0;
          result[3] += 1559376;
          result[4] += 45444674;
          result[5] += 3787056;
        } else {
          result[0] += 2987162;
          result[1] += 40920;
          result[2] += 654720;
          result[3] += 8838728;
          result[4] += 4051083;
          result[5] += 37114475;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41573287;
          result[1] += 2334221;
          result[2] += 201225;
          result[3] += 1408581;
          result[4] += 6761192;
          result[5] += 1408581;
        } else {
          result[0] += 10938587;
          result[1] += 2011694;
          result[2] += 15716361;
          result[3] += 11692973;
          result[4] += 2137425;
          result[5] += 11190049;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
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
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 48133254;
          result[4] += 0;
          result[5] += 5553837;
        } else {
          result[0] += 0;
          result[1] += 1491308;
          result[2] += 20878313;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 13421772;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 3677198;
          result[1] += 0;
          result[2] += 30888463;
          result[3] += 7354396;
          result[4] += 0;
          result[5] += 11767033;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 242928;
          result[1] += 242928;
          result[2] += 41297762;
          result[3] += 10688832;
          result[4] += 0;
          result[5] += 1214640;
        } else {
          result[0] += 84546;
          result[1] += 0;
          result[2] += 52249798;
          result[3] += 1268199;
          result[4] += 0;
          result[5] += 84546;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 855571;
          result[1] += 2138927;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49837020;
          result[5] += 855571;
        } else {
          result[0] += 30298655;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7973330;
          result[5] += 15415105;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 225576;
          result[1] += 56394;
          result[2] += 0;
          result[3] += 3722004;
          result[4] += 3665610;
          result[5] += 46017506;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 217356;
          result[3] += 34994419;
          result[4] += 652069;
          result[5] += 17823244;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40022756;
          result[1] += 4123556;
          result[2] += 282989;
          result[3] += 848967;
          result[4] += 7478999;
          result[5] += 929821;
        } else {
          result[0] += 10984255;
          result[1] += 987348;
          result[2] += 9503232;
          result[3] += 16661511;
          result[4] += 2344953;
          result[5] += 13205790;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 53569356;
          result[2] += 0;
          result[3] += 117734;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 35791394;
          result[1] += 11930464;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 48806446;
          result[4] += 0;
          result[5] += 4880644;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 26843545;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 41756626;
          result[4] += 0;
          result[5] += 11930464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39832357;
          result[3] += 12122891;
          result[4] += 0;
          result[5] += 1731841;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41800650;
          result[3] += 9112937;
          result[4] += 198107;
          result[5] += 2575395;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 30678337;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 707443;
          result[1] += 0;
          result[2] += 50307083;
          result[3] += 2436749;
          result[4] += 0;
          result[5] += 235814;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 382114;
          result[1] += 382114;
          result[2] += 0;
          result[3] += 382114;
          result[4] += 47191144;
          result[5] += 5349603;
        } else {
          result[0] += 0;
          result[1] += 45210182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8476909;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2045222;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2045222;
          result[4] += 3195660;
          result[5] += 46400985;
        } else {
          result[0] += 3458370;
          result[1] += 1482158;
          result[2] += 164684;
          result[3] += 27502282;
          result[4] += 1482158;
          result[5] += 19597435;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 37451942;
          result[1] += 3333043;
          result[2] += 573426;
          result[3] += 2472903;
          result[4] += 8099654;
          result[5] += 1756119;
        } else {
          result[0] += 5772805;
          result[1] += 288640;
          result[2] += 15153614;
          result[3] += 13277452;
          result[4] += 5195524;
          result[5] += 13999053;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
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
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d70000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2526451;
          result[1] += 631612;
          result[2] += 8210966;
          result[3] += 14527095;
          result[4] += 631612;
          result[5] += 27159352;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36368674;
          result[3] += 1731841;
          result[4] += 0;
          result[5] += 15586574;
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
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 38347922;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11504376;
          result[4] += 0;
          result[5] += 42182714;
        } else {
          result[0] += 2038750;
          result[1] += 0;
          result[2] += 38962783;
          result[3] += 10873334;
          result[4] += 0;
          result[5] += 1812222;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 331401;
          result[1] += 0;
          result[2] += 46064849;
          result[3] += 7290839;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 107374;
          result[1] += 0;
          result[2] += 52935471;
          result[3] += 644245;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 48806446;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4880644;
          result[5] += 0;
        } else {
          result[0] += 887389;
          result[1] += 0;
          result[2] += 221847;
          result[3] += 0;
          result[4] += 50359378;
          result[5] += 2218474;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1199711;
          result[1] += 299927;
          result[2] += 0;
          result[3] += 3179235;
          result[4] += 2399423;
          result[5] += 46608793;
        } else {
          result[0] += 4473924;
          result[1] += 536870;
          result[2] += 715827;
          result[3] += 22727535;
          result[4] += 5010795;
          result[5] += 20222137;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 13918875;
          result[2] += 0;
          result[3] += 4772185;
          result[4] += 34996029;
          result[5] += 0;
        } else {
          result[0] += 37250221;
          result[1] += 1102472;
          result[2] += 2371987;
          result[3] += 3708318;
          result[4] += 4042400;
          result[5] += 5211690;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 30678337;
          result[1] += 23008753;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 4473924;
          result[3] += 22369621;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1309441;
          result[3] += 1309441;
          result[4] += 5237764;
          result[5] += 45830443;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3253763;
          result[3] += 41485479;
          result[4] += 0;
          result[5] += 8947848;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32679098;
          result[3] += 16339549;
          result[4] += 0;
          result[5] += 4668442;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1809677;
          result[1] += 2412902;
          result[2] += 31970964;
          result[3] += 13270966;
          result[4] += 0;
          result[5] += 4222580;
        } else {
          result[0] += 33405301;
          result[1] += 2386092;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 308192;
          result[1] += 0;
          result[2] += 49927145;
          result[3] += 3205199;
          result[4] += 0;
          result[5] += 246553;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 468882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53218208;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29826161;
          result[5] += 23860929;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1241742;
          result[4] += 1387829;
          result[5] += 51057519;
        } else {
          result[0] += 5919869;
          result[1] += 714466;
          result[2] += 306200;
          result[3] += 17555474;
          result[4] += 4184735;
          result[5] += 25006344;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 5347319;
          result[1] += 21603172;
          result[2] += 1283356;
          result[3] += 213892;
          result[4] += 23100421;
          result[5] += 2138927;
        } else {
          result[0] += 39058658;
          result[1] += 816816;
          result[2] += 2376192;
          result[3] += 4715256;
          result[4] += 3861312;
          result[5] += 2858856;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 530242;
          result[1] += 52228923;
          result[2] += 132560;
          result[3] += 0;
          result[4] += 795364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 46017506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 0;
          result[4] += 38774010;
          result[5] += 2982616;
        } else {
          result[0] += 416179;
          result[1] += 0;
          result[2] += 4994148;
          result[3] += 32878141;
          result[4] += 832358;
          result[5] += 14566265;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 7669584;
          result[1] += 35791394;
          result[2] += 2556528;
          result[3] += 5113056;
          result[4] += 2556528;
          result[5] += 0;
        } else {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 4473924;
          result[4] += 3579139;
          result[5] += 16106127;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 365218;
          result[1] += 0;
          result[2] += 40539232;
          result[3] += 9495675;
          result[4] += 0;
          result[5] += 3286964;
        } else {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 475708;
          result[1] += 0;
          result[2] += 50425090;
          result[3] += 2650375;
          result[4] += 0;
          result[5] += 135916;
        } else {
          result[0] += 14005328;
          result[1] += 0;
          result[2] += 39681763;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 492542;
          result[1] += 1149264;
          result[2] += 0;
          result[3] += 164180;
          result[4] += 46955682;
          result[5] += 4925421;
        } else {
          result[0] += 34539946;
          result[1] += 375434;
          result[2] += 750868;
          result[3] += 0;
          result[4] += 8634986;
          result[5] += 9385855;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 139266;
          result[1] += 278532;
          result[2] += 69633;
          result[3] += 2437157;
          result[4] += 2297891;
          result[5] += 48464611;
        } else {
          result[0] += 577280;
          result[1] += 1154561;
          result[2] += 2309122;
          result[3] += 14432013;
          result[4] += 9044061;
          result[5] += 26170051;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 688296;
          result[1] += 25466953;
          result[2] += 0;
          result[3] += 4818072;
          result[4] += 22025473;
          result[5] += 688296;
        } else {
          result[0] += 118253;
          result[1] += 52977570;
          result[2] += 0;
          result[3] += 0;
          result[4] += 591267;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          result[0] += 3270279;
          result[1] += 5450466;
          result[2] += 545046;
          result[3] += 24254574;
          result[4] += 1635139;
          result[5] += 18531584;
        } else {
          result[0] += 41885009;
          result[1] += 1237980;
          result[2] += 1815704;
          result[3] += 2847355;
          result[4] += 3879005;
          result[5] += 2022034;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9860894;
          result[4] += 3286964;
          result[5] += 40539232;
        } else {
          result[0] += 501748;
          result[1] += 0;
          result[2] += 5017485;
          result[3] += 32111905;
          result[4] += 1505245;
          result[5] += 14550706;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 5752188;
          result[4] += 1917396;
          result[5] += 19173961;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50933907;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2753184;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 26843545;
          result[4] += 4737096;
          result[5] += 15790320;
        } else {
          result[0] += 11267661;
          result[1] += 4639625;
          result[2] += 33802983;
          result[3] += 2651214;
          result[4] += 0;
          result[5] += 1325607;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 422733;
          result[2] += 36777771;
          result[3] += 14795655;
          result[4] += 0;
          result[5] += 1690932;
        } else {
          result[0] += 463390;
          result[1] += 0;
          result[2] += 50244762;
          result[3] += 2383150;
          result[4] += 0;
          result[5] += 595787;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 1123160;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50542240;
          result[5] += 2021689;
        } else {
          result[0] += 26587892;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12782640;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 279620;
          result[2] += 0;
          result[3] += 1537911;
          result[4] += 3425348;
          result[5] += 48444211;
        } else {
          result[0] += 711087;
          result[1] += 0;
          result[2] += 0;
          result[3] += 26488001;
          result[4] += 355543;
          result[5] += 26132458;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 16777215;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36909875;
          result[5] += 0;
        } else {
          result[0] += 242379;
          result[1] += 52959952;
          result[2] += 0;
          result[3] += 0;
          result[4] += 484759;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43220571;
          result[1] += 3037343;
          result[2] += 0;
          result[3] += 1436581;
          result[4] += 5582144;
          result[5] += 410451;
        } else {
          result[0] += 12104516;
          result[1] += 2990527;
          result[2] += 8544364;
          result[3] += 13101359;
          result[4] += 3560151;
          result[5] += 13386171;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 2440322;
          result[2] += 0;
          result[3] += 2440322;
          result[4] += 4880644;
          result[5] += 43925801;
        } else {
          result[0] += 0;
          result[1] += 501748;
          result[2] += 5017485;
          result[3] += 28599665;
          result[4] += 0;
          result[5] += 19568192;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 2902004;
          result[1] += 11608019;
          result[2] += 11608019;
          result[3] += 0;
          result[4] += 0;
          result[5] += 27569046;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47139884;
          result[3] += 5237764;
          result[4] += 0;
          result[5] += 1309441;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12715363;
          result[3] += 39558909;
          result[4] += 1412818;
          result[5] += 0;
        } else {
          result[0] += 1639300;
          result[1] += 0;
          result[2] += 34835135;
          result[3] += 8606327;
          result[4] += 1639300;
          result[5] += 6967027;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 809353;
          result[1] += 0;
          result[2] += 43435284;
          result[3] += 9442453;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 951617;
          result[1] += 0;
          result[2] += 50673635;
          result[3] += 1823933;
          result[4] += 0;
          result[5] += 237904;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
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
          result[3] += 0;
          result[4] += 39558909;
          result[5] += 14128181;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 23008753;
          result[2] += 0;
          result[3] += 3834792;
          result[4] += 26843545;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43925801;
          result[5] += 9761289;
        } else {
          result[0] += 0;
          result[1] += 151444;
          result[2] += 227166;
          result[3] += 1893056;
          result[4] += 757222;
          result[5] += 50658200;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 31580641;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1579032;
          result[4] += 18158869;
          result[5] += 2368548;
        } else {
          result[0] += 0;
          result[1] += 118514;
          result[2] += 237029;
          result[3] += 15880949;
          result[4] += 3555436;
          result[5] += 33895161;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 766958;
          result[1] += 9203501;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 766958;
        } else {
          result[0] += 759211;
          result[1] += 52060209;
          result[2] += 108458;
          result[3] += 0;
          result[4] += 759211;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44445181;
          result[1] += 2226459;
          result[2] += 42008;
          result[3] += 1176242;
          result[4] += 4999032;
          result[5] += 798164;
        } else {
          result[0] += 12664647;
          result[1] += 275318;
          result[2] += 1651910;
          result[3] += 18171015;
          result[4] += 5506368;
          result[5] += 15417831;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 2640348;
          result[2] += 6160813;
          result[3] += 8801162;
          result[4] += 0;
          result[5] += 36084766;
        } else {
          result[0] += 231409;
          result[1] += 462819;
          result[2] += 23603807;
          result[3] += 19669839;
          result[4] += 462819;
          result[5] += 9256395;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 14128181;
          result[1] += 0;
          result[2] += 31788409;
          result[3] += 2825636;
          result[4] += 3532045;
          result[5] += 1412818;
        } else {
          result[0] += 775480;
          result[1] += 0;
          result[2] += 48735948;
          result[3] += 3400182;
          result[4] += 119304;
          result[5] += 656175;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          result[0] += 305040;
          result[1] += 610080;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52771970;
          result[5] += 0;
        } else {
          result[0] += 21623967;
          result[1] += 745654;
          result[2] += 1118481;
          result[3] += 2609789;
          result[4] += 17895697;
          result[5] += 9693502;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 321159;
          result[2] += 0;
          result[3] += 2408693;
          result[4] += 4228594;
          result[5] += 46728644;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 531555;
          result[3] += 34285320;
          result[4] += 797333;
          result[5] += 18072882;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 116205;
          result[1] += 52757444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 813440;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41862439;
          result[1] += 1944321;
          result[2] += 238080;
          result[3] += 1547521;
          result[4] += 6626566;
          result[5] += 1468161;
        } else {
          result[0] += 9808218;
          result[1] += 1032444;
          result[2] += 14454216;
          result[3] += 15228549;
          result[4] += 903388;
          result[5] += 12260273;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 725501;
          result[2] += 2176503;
          result[3] += 30471051;
          result[4] += 3627506;
          result[5] += 16686528;
        } else {
          result[0] += 3834792;
          result[1] += 13421772;
          result[2] += 21091357;
          result[3] += 3834792;
          result[4] += 3834792;
          result[5] += 7669584;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 1769904;
          result[1] += 1179936;
          result[2] += 41297762;
          result[3] += 9439488;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3834792;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 38347922;
        } else {
          result[0] += 11930464;
          result[1] += 0;
          result[2] += 40762421;
          result[3] += 994205;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43565754;
          result[3] += 9021191;
          result[4] += 0;
          result[5] += 1100145;
        } else {
          result[0] += 192426;
          result[1] += 0;
          result[2] += 52243889;
          result[3] += 1250774;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 516222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52912758;
          result[5] += 258111;
        } else {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 32212254;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 20132659;
          result[2] += 0;
          result[3] += 20132659;
          result[4] += 13421772;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 28377462;
          result[1] += 766958;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19940919;
          result[5] += 4601750;
        } else {
          result[0] += 0;
          result[1] += 116838;
          result[2] += 58419;
          result[3] += 3213046;
          result[4] += 2570437;
          result[5] += 47728349;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5402474;
          result[1] += 2025927;
          result[2] += 0;
          result[3] += 9791985;
          result[4] += 3038891;
          result[5] += 33427811;
        } else {
          result[0] += 1101273;
          result[1] += 550636;
          result[2] += 0;
          result[3] += 36892667;
          result[4] += 0;
          result[5] += 15142512;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 4601750;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49085340;
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
          result[0] += 43959958;
          result[1] += 1043683;
          result[2] += 459220;
          result[3] += 1335915;
          result[4] += 5510650;
          result[5] += 1377662;
        } else {
          result[0] += 9615598;
          result[1] += 801299;
          result[2] += 10416898;
          result[3] += 14223072;
          result[4] += 7612348;
          result[5] += 11017873;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1890390;
          result[1] += 1134234;
          result[2] += 13988889;
          result[3] += 14745046;
          result[4] += 1512312;
          result[5] += 20416217;
        } else {
          result[0] += 0;
          result[1] += 50331647;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3355443;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
          result[0] += 47370962;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 910858;
          result[1] += 0;
          result[2] += 46293060;
          result[3] += 5465152;
          result[4] += 53579;
          result[5] += 964438;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1325607;
          result[2] += 0;
          result[3] += 441869;
          result[4] += 49489335;
          result[5] += 2430279;
        } else {
          result[0] += 33554431;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6151645;
          result[5] += 13981013;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 957273;
          result[4] += 1435910;
          result[5] += 51293907;
        } else {
          result[0] += 508400;
          result[1] += 2236962;
          result[2] += 305040;
          result[3] += 19420898;
          result[4] += 3660483;
          result[5] += 27555306;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37580963;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52848230;
          result[2] += 0;
          result[3] += 0;
          result[4] += 838860;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42849634;
          result[1] += 1000380;
          result[2] += 375142;
          result[3] += 1625618;
          result[4] += 6460791;
          result[5] += 1375523;
        } else {
          result[0] += 8180890;
          result[1] += 2045222;
          result[2] += 10609591;
          result[3] += 14700036;
          result[4] += 4346097;
          result[5] += 13805252;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 48449326;
          result[4] += 0;
          result[5] += 5237764;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14913080;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 20878313;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 725501;
          result[1] += 0;
          result[2] += 29020049;
          result[3] += 13059022;
          result[4] += 725501;
          result[5] += 10157017;
        } else {
          result[0] += 2556528;
          result[1] += 0;
          result[2] += 51130563;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41693166;
          result[3] += 11137215;
          result[4] += 0;
          result[5] += 856708;
        } else {
          result[0] += 1420293;
          result[1] += 0;
          result[2] += 49426210;
          result[3] += 2556528;
          result[4] += 0;
          result[5] += 284058;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42940000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 290200;
          result[1] += 0;
          result[2] += 52526289;
          result[3] += 870601;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 24403223;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29283867;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53573347;
          result[2] += 0;
          result[3] += 0;
          result[4] += 113743;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 44739242;
          result[2] += 0;
          result[3] += 8947848;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1215556;
          result[1] += 405185;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49230049;
          result[5] += 2836299;
        } else {
          result[0] += 2349354;
          result[1] += 43506;
          result[2] += 87013;
          result[3] += 9005857;
          result[4] += 2218834;
          result[5] += 39982525;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40895078;
          result[1] += 3188163;
          result[2] += 118080;
          result[3] += 1062721;
          result[4] += 7753927;
          result[5] += 669120;
        } else {
          result[0] += 8046468;
          result[1] += 395727;
          result[2] += 13322840;
          result[3] += 16488664;
          result[4] += 3429642;
          result[5] += 12003747;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2556528;
          result[2] += 2556528;
          result[3] += 2556528;
          result[4] += 0;
          result[5] += 46017506;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1651910;
          result[1] += 1651910;
          result[2] += 7433597;
          result[3] += 33864165;
          result[4] += 3303820;
          result[5] += 5781686;
        } else {
          result[0] += 2176503;
          result[1] += 4353007;
          result[2] += 29745550;
          result[3] += 11608019;
          result[4] += 0;
          result[5] += 5804009;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41756626;
          result[3] += 10439156;
          result[4] += 0;
          result[5] += 1491308;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 30678337;
          result[1] += 0;
          result[2] += 23008753;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 400152;
          result[1] += 0;
          result[2] += 51286177;
          result[3] += 2000761;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 256876;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51888958;
          result[5] += 1541256;
        } else {
          result[0] += 0;
          result[1] += 38347922;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 15339168;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1050265;
          result[1] += 494242;
          result[2] += 0;
          result[3] += 3521477;
          result[4] += 2656553;
          result[5] += 45964552;
        } else {
          result[0] += 4841806;
          result[1] += 1281654;
          result[2] += 427218;
          result[3] += 23924221;
          result[4] += 4414588;
          result[5] += 18797602;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 20132659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33554431;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53087904;
          result[2] += 0;
          result[3] += 0;
          result[4] += 599186;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 37951840;
          result[1] += 2916602;
          result[2] += 504104;
          result[3] += 1872386;
          result[4] += 7777606;
          result[5] += 2664550;
        } else {
          result[0] += 7895160;
          result[1] += 315806;
          result[2] += 11842740;
          result[3] += 14684998;
          result[4] += 3631773;
          result[5] += 15316611;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5263440;
          result[3] += 40002146;
          result[4] += 0;
          result[5] += 8421504;
        } else {
          result[0] += 1052688;
          result[1] += 0;
          result[2] += 24211825;
          result[3] += 21053761;
          result[4] += 0;
          result[5] += 7368816;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49660559;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4026531;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12389328;
          result[3] += 33038209;
          result[4] += 0;
          result[5] += 8259552;
        } else {
          result[0] += 6710886;
          result[1] += 0;
          result[2] += 33554431;
          result[3] += 0;
          result[4] += 0;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 613566;
          result[1] += 0;
          result[2] += 49698907;
          result[3] += 2699693;
          result[4] += 0;
          result[5] += 674923;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 226527;
          result[1] += 1132639;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51874868;
          result[5] += 453055;
        } else {
          result[0] += 2119227;
          result[1] += 3532045;
          result[2] += 0;
          result[3] += 706409;
          result[4] += 25430727;
          result[5] += 21898681;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 73343;
          result[1] += 0;
          result[2] += 73343;
          result[3] += 1540203;
          result[4] += 1613546;
          result[5] += 50386655;
        } else {
          result[0] += 4872287;
          result[1] += 2114388;
          result[2] += 1930528;
          result[3] += 17926340;
          result[4] += 5240007;
          result[5] += 21603538;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 2855696;
          result[1] += 24844558;
          result[2] += 285569;
          result[3] += 856708;
          result[4] += 24558988;
          result[5] += 285569;
        } else {
          result[0] += 42245579;
          result[1] += 1400184;
          result[2] += 1120147;
          result[3] += 2800369;
          result[4] += 3520464;
          result[5] += 2600343;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 44739242;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2618882;
          result[3] += 17677456;
          result[4] += 654720;
          result[5] += 32736031;
        } else {
          result[0] += 3834792;
          result[1] += 30678337;
          result[2] += 0;
          result[3] += 3834792;
          result[4] += 15339168;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27322894;
          result[3] += 15339168;
          result[4] += 958698;
          result[5] += 10066329;
        } else {
          result[0] += 42182714;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3834792;
          result[4] += 3834792;
          result[5] += 3834792;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16519104;
          result[3] += 34414802;
          result[4] += 0;
          result[5] += 2753184;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41353570;
          result[3] += 7255012;
          result[4] += 0;
          result[5] += 5078508;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 603225;
          result[1] += 0;
          result[2] += 49645478;
          result[3] += 2895483;
          result[4] += 0;
          result[5] += 542903;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51035876;
          result[5] += 2651214;
        } else {
          result[0] += 0;
          result[1] += 23008753;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7669584;
          result[5] += 23008753;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 2637466;
          result[1] += 996376;
          result[2] += 0;
          result[3] += 2754686;
          result[4] += 2871907;
          result[5] += 44426654;
        } else {
          result[0] += 0;
          result[1] += 173184;
          result[2] += 2597762;
          result[3] += 25631256;
          result[4] += 173184;
          result[5] += 25111703;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 51646726;
          result[2] += 0;
          result[3] += 127522;
          result[4] += 1657796;
          result[5] += 255045;
        } else {
          result[0] += 8947848;
          result[1] += 8947848;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41197110;
          result[1] += 1665330;
          result[2] += 158602;
          result[3] += 1823933;
          result[4] += 7692242;
          result[5] += 1149871;
        } else {
          result[0] += 9901307;
          result[1] += 1760232;
          result[2] += 11221482;
          result[3] += 12101598;
          result[4] += 5170682;
          result[5] += 13531787;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 17895697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 2684354;
          result[3] += 5368709;
          result[4] += 13421772;
          result[5] += 16106127;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 8947848;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 25430727;
          result[4] += 0;
          result[5] += 10360666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44631437;
          result[3] += 7115156;
          result[4] += 646832;
          result[5] += 1293664;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 386238;
          result[1] += 772476;
          result[2] += 44031139;
          result[3] += 6952285;
          result[4] += 772476;
          result[5] += 772476;
        } else {
          result[0] += 169093;
          result[1] += 0;
          result[2] += 52334345;
          result[3] += 1099105;
          result[4] += 0;
          result[5] += 84546;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 200324;
          result[1] += 0;
          result[2] += 400649;
          result[3] += 600974;
          result[4] += 49680591;
          result[5] += 2804549;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1644681;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2290805;
          result[4] += 2819453;
          result[5] += 46932150;
        } else {
          result[0] += 2160780;
          result[1] += 4321561;
          result[2] += 332427;
          result[3] += 25763155;
          result[4] += 1662139;
          result[5] += 19447026;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 339076;
          result[1] += 51426582;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1921432;
          result[5] += 0;
        } else {
          result[0] += 350896;
          result[1] += 10526880;
          result[2] += 350896;
          result[3] += 1754480;
          result[4] += 34738706;
          result[5] += 5965232;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 41819879;
          result[1] += 1970570;
          result[2] += 175161;
          result[3] += 2145732;
          result[4] += 5605177;
          result[5] += 1970570;
        } else {
          result[0] += 7549747;
          result[1] += 503316;
          result[2] += 13421772;
          result[3] += 13925089;
          result[4] += 3187671;
          result[5] += 15099494;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15658734;
          result[3] += 29080507;
          result[4] += 0;
          result[5] += 8947848;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46976204;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1142278;
          result[1] += 0;
          result[2] += 35410634;
          result[3] += 12850633;
          result[4] += 285569;
          result[5] += 3997974;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51412214;
          result[3] += 1819901;
          result[4] += 0;
          result[5] += 454975;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 807324;
          result[1] += 0;
          result[2] += 45613844;
          result[3] += 6256766;
          result[4] += 0;
          result[5] += 1009155;
        } else {
          result[0] += 210125;
          result[1] += 0;
          result[2] += 52741525;
          result[3] += 525314;
          result[4] += 0;
          result[5] += 210125;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 254441;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53432649;
          result[5] += 0;
        } else {
          result[0] += 925639;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40728138;
          result[5] += 12033313;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
          result[0] += 41834097;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10458524;
          result[5] += 1394469;
        } else {
          result[0] += 0;
          result[1] += 403999;
          result[2] += 224444;
          result[3] += 8124885;
          result[4] += 2603554;
          result[5] += 42330206;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 52857489;
          result[2] += 0;
          result[3] += 0;
          result[4] += 829601;
          result[5] += 0;
        } else {
          result[0] += 1851279;
          result[1] += 14810232;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36562760;
          result[5] += 462819;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 44878400;
          result[1] += 918441;
          result[2] += 876694;
          result[3] += 2003872;
          result[4] += 3590272;
          result[5] += 1419409;
        } else {
          result[0] += 6886564;
          result[1] += 1264879;
          result[2] += 16443428;
          result[3] += 14756922;
          result[4] += 2951384;
          result[5] += 11383912;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2618882;
          result[2] += 2618882;
          result[3] += 6547206;
          result[4] += 0;
          result[5] += 41902119;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16722208;
          result[3] += 16722208;
          result[4] += 1760232;
          result[5] += 18482441;
        } else {
          result[0] += 1491308;
          result[1] += 0;
          result[2] += 46230550;
          result[3] += 0;
          result[4] += 1491308;
          result[5] += 4473924;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 32595733;
          result[4] += 0;
          result[5] += 7669584;
        } else {
          result[0] += 0;
          result[1] += 5113056;
          result[2] += 38347922;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 2556528;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 275318;
          result[1] += 0;
          result[2] += 45152220;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 84413;
          result[1] += 0;
          result[2] += 51492335;
          result[3] += 2025927;
          result[4] += 0;
          result[5] += 84413;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 1243716;
          result[1] += 1451002;
          result[2] += 0;
          result[3] += 207286;
          result[4] += 49334083;
          result[5] += 1451002;
        } else {
          result[0] += 5368709;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 1789569;
          result[4] += 16106127;
          result[5] += 1789569;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
          result[0] += 9970459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3834792;
          result[4] += 31445296;
          result[5] += 8436542;
        } else {
          result[0] += 50886025;
          result[1] += 233422;
          result[2] += 0;
          result[3] += 0;
          result[4] += 933688;
          result[5] += 1633954;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 218833;
          result[2] += 72944;
          result[3] += 1167110;
          result[4] += 1385943;
          result[5] += 50842258;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
          result[0] += 3212048;
          result[1] += 2294320;
          result[2] += 0;
          result[3] += 1376592;
          result[4] += 35791394;
          result[5] += 11012736;
        } else {
          result[0] += 2197717;
          result[1] += 863388;
          result[2] += 1805267;
          result[3] += 21270762;
          result[4] += 1726777;
          result[5] += 25823176;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 43061521;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10625570;
          result[5] += 0;
        } else {
          result[0] += 46887091;
          result[1] += 219354;
          result[2] += 2083870;
          result[3] += 1096774;
          result[4] += 2522580;
          result[5] += 877419;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13600729;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 18611524;
        } else {
          result[0] += 801299;
          result[1] += 0;
          result[2] += 38462393;
          result[3] += 8012998;
          result[4] += 801299;
          result[5] += 5609099;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 9395240;
          result[1] += 13421772;
          result[2] += 25501368;
          result[3] += 1342177;
          result[4] += 1342177;
          result[5] += 2684354;
        } else {
          result[0] += 376940;
          result[1] += 53848;
          result[2] += 49379200;
          result[3] += 3500161;
          result[4] += 107697;
          result[5] += 269243;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
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
          result[3] += 1533916;
          result[4] += 52153174;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 50107951;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 0;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 12985686;
          result[1] += 1744345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31785859;
          result[5] += 7171199;
        } else {
          result[0] += 227295;
          result[1] += 454590;
          result[2] += 863721;
          result[3] += 8909966;
          result[4] += 2909376;
          result[5] += 40322142;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 8781531;
          result[1] += 8581951;
          result[2] += 199580;
          result[3] += 1197481;
          result[4] += 31932842;
          result[5] += 2993703;
        } else {
          result[0] += 39696362;
          result[1] += 223851;
          result[2] += 3507009;
          result[3] += 4253181;
          result[4] += 2835454;
          result[5] += 3171231;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 789516;
          result[1] += 10263708;
          result[2] += 4737096;
          result[3] += 3947580;
          result[4] += 11053224;
          result[5] += 22895965;
        } else {
          result[0] += 958698;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 42182714;
          result[4] += 0;
          result[5] += 6710886;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7320966;
          result[3] += 0;
          result[4] += 24403223;
          result[5] += 21962900;
        } else {
          result[0] += 6012954;
          result[1] += 429496;
          result[2] += 37366215;
          result[3] += 9019431;
          result[4] += 0;
          result[5] += 858993;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11504376;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 11504376;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42182714;
          result[3] += 9313066;
          result[4] += 0;
          result[5] += 2191309;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41756626;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 163431;
          result[1] += 0;
          result[2] += 51971065;
          result[3] += 1552594;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52574405;
          result[5] += 1112685;
        } else {
          result[0] += 35128590;
          result[1] += 0;
          result[2] += 0;
          result[3] += 662803;
          result[4] += 13918875;
          result[5] += 3976821;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 1299687;
          result[2] += 249939;
          result[3] += 3749098;
          result[4] += 4248978;
          result[5] += 44139386;
        } else {
          result[0] += 1303084;
          result[1] += 521233;
          result[2] += 2345552;
          result[3] += 30231565;
          result[4] += 0;
          result[5] += 19285654;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40265318;
          result[5] += 0;
        } else {
          result[0] += 122016;
          result[1] += 52954994;
          result[2] += 0;
          result[3] += 244032;
          result[4] += 366048;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40553851;
          result[1] += 1631705;
          result[2] += 596965;
          result[3] += 1751098;
          result[4] += 7083989;
          result[5] += 2069480;
        } else {
          result[0] += 8202194;
          result[1] += 248551;
          result[2] += 12551843;
          result[3] += 17150043;
          result[4] += 3976821;
          result[5] += 11557637;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4129776;
          result[3] += 19616437;
          result[4] += 0;
          result[5] += 29940877;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27917287;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51130563;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2556528;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32514717;
          result[3] += 14366968;
          result[4] += 1512312;
          result[5] += 5293093;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1136234;
          result[1] += 0;
          result[2] += 45165330;
          result[3] += 7101467;
          result[4] += 0;
          result[5] += 284058;
        } else {
          result[0] += 160980;
          result[1] += 160980;
          result[2] += 52077283;
          result[3] += 1287846;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 634099;
          result[1] += 845466;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51573426;
          result[5] += 634099;
        } else {
          result[0] += 0;
          result[1] += 2084935;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35965138;
          result[5] += 15637016;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 45791930;
          result[1] += 1579032;
          result[2] += 631612;
          result[3] += 947419;
          result[4] += 3158064;
          result[5] += 1579032;
        } else {
          result[0] += 720377;
          result[1] += 113743;
          result[2] += 720377;
          result[3] += 10843579;
          result[4] += 3222742;
          result[5] += 38066270;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 3780781;
          result[1] += 19660061;
          result[2] += 3024624;
          result[3] += 1512312;
          result[4] += 24953155;
          result[5] += 756156;
        } else {
          result[0] += 123135;
          result[1] += 53440820;
          result[2] += 0;
          result[3] += 0;
          result[4] += 123135;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 35583304;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18103786;
          result[5] += 0;
        } else {
          result[0] += 44602285;
          result[1] += 273913;
          result[2] += 2373918;
          result[3] += 2373918;
          result[4] += 2236962;
          result[5] += 1826091;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7227108;
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 6194664;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38347922;
          result[3] += 8849520;
          result[4] += 0;
          result[5] += 6489648;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 13421772;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44212898;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9474192;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1359166;
          result[1] += 0;
          result[2] += 46721361;
          result[3] += 5266771;
          result[4] += 0;
          result[5] += 339791;
        } else {
          result[0] += 87296;
          result[1] += 0;
          result[2] += 52464946;
          result[3] += 1134849;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 424403;
          result[1] += 424403;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48806446;
          result[5] += 4031836;
        } else {
          result[0] += 31661617;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9636144;
          result[5] += 12389328;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 65793;
          result[2] += 0;
          result[3] += 2829099;
          result[4] += 3026478;
          result[5] += 47765720;
        } else {
          result[0] += 0;
          result[1] += 810983;
          result[2] += 648786;
          result[3] += 22869727;
          result[4] += 3730522;
          result[5] += 25627070;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 10324440;
          result[2] += 0;
          result[3] += 2064888;
          result[4] += 41297762;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52686710;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1000380;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43015851;
          result[1] += 1613094;
          result[2] += 82722;
          result[3] += 1778540;
          result[4] += 5956040;
          result[5] += 1240841;
        } else {
          result[0] += 7482935;
          result[1] += 1068990;
          result[2] += 13065442;
          result[3] += 14965870;
          result[4] += 4157186;
          result[5] += 12946665;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 3501332;
          result[2] += 4668442;
          result[3] += 23925768;
          result[4] += 3501332;
          result[5] += 18090215;
        } else {
          result[0] += 0;
          result[1] += 735439;
          result[2] += 28682144;
          result[3] += 13973352;
          result[4] += 0;
          result[5] += 10296154;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 1095654;
          result[1] += 0;
          result[2] += 49304471;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3286964;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3479718;
          result[1] += 0;
          result[2] += 35294291;
          result[3] += 11433362;
          result[4] += 0;
          result[5] += 3479718;
        } else {
          result[0] += 745654;
          result[1] += 0;
          result[2] += 49213166;
          result[3] += 3728270;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 30678337;
          result[1] += 0;
          result[2] += 23008753;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 87580;
          result[1] += 0;
          result[2] += 52110635;
          result[3] += 1488875;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 662803;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1546541;
          result[4] += 48826531;
          result[5] += 2651214;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30388919;
          result[5] += 23298171;
        } else {
          result[0] += 46366124;
          result[1] += 2440322;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3253763;
          result[5] += 1626881;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 484212;
          result[2] += 0;
          result[3] += 2057904;
          result[4] += 3207909;
          result[5] += 47937064;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11069503;
          result[4] += 1106950;
          result[5] += 41510637;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 545046;
          result[3] += 38153262;
          result[4] += 272523;
          result[5] += 14716258;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 112551;
          result[1] += 52899230;
          result[2] += 0;
          result[3] += 0;
          result[4] += 675309;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41769651;
          result[1] += 1875531;
          result[2] += 390735;
          result[3] += 1289427;
          result[4] += 6955096;
          result[5] += 1406648;
        } else {
          result[0] += 10095008;
          result[1] += 2294320;
          result[2] += 11930464;
          result[3] += 13077624;
          result[4] += 3670912;
          result[5] += 12618760;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 725501;
          result[1] += 2176503;
          result[2] += 2902004;
          result[3] += 16686528;
          result[4] += 10157017;
          result[5] += 21039535;
        } else {
          result[0] += 994205;
          result[1] += 994205;
          result[2] += 26512143;
          result[3] += 19221304;
          result[4] += 331401;
          result[5] += 5633830;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 9431516;
          result[1] += 725501;
          result[2] += 26843545;
          result[3] += 5078508;
          result[4] += 0;
          result[5] += 11608019;
        } else {
          result[0] += 249417;
          result[1] += 0;
          result[2] += 49197578;
          result[3] += 3803615;
          result[4] += 0;
          result[5] += 436480;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 436480;
          result[1] += 0;
          result[2] += 0;
          result[3] += 218240;
          result[4] += 51941169;
          result[5] += 1091201;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5965232;
          result[4] += 23860929;
          result[5] += 23860929;
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
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 38819896;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12389328;
          result[5] += 2477865;
        } else {
          result[0] += 160579;
          result[1] += 267632;
          result[2] += 53526;
          result[3] += 3746855;
          result[4] += 2622799;
          result[5] += 46835697;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15339168;
          result[4] += 2876094;
          result[5] += 35471828;
        } else {
          result[0] += 0;
          result[1] += 406720;
          result[2] += 0;
          result[3] += 42705640;
          result[4] += 406720;
          result[5] += 10168009;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 53172107;
          result[2] += 0;
          result[3] += 0;
          result[4] += 514984;
          result[5] += 0;
        } else {
          result[0] += 436480;
          result[1] += 17459216;
          result[2] += 0;
          result[3] += 1309441;
          result[4] += 33172511;
          result[5] += 1309441;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 45785290;
          result[1] += 1535206;
          result[2] += 0;
          result[3] += 541837;
          result[4] += 5328071;
          result[5] += 496684;
        } else {
          result[0] += 14031853;
          result[1] += 610080;
          result[2] += 9761289;
          result[3] += 13421772;
          result[4] += 2440322;
          result[5] += 13421772;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 2982616;
          result[2] += 14913080;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2064888;
          result[2] += 10324440;
          result[3] += 24188689;
          result[4] += 884952;
          result[5] += 16224120;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
          result[0] += 7405116;
          result[1] += 7405116;
          result[2] += 20364069;
          result[3] += 1851279;
          result[4] += 12958953;
          result[5] += 3702558;
        } else {
          result[0] += 946491;
          result[1] += 105165;
          result[2] += 47850394;
          result[3] += 3575633;
          result[4] += 0;
          result[5] += 1209405;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 1802924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50682216;
          result[5] += 1201949;
        } else {
          result[0] += 2119227;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31082000;
          result[5] += 20485863;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 299927;
          result[1] += 224945;
          result[2] += 0;
          result[3] += 1649603;
          result[4] += 2099495;
          result[5] += 49413118;
        } else {
          result[0] += 14251482;
          result[1] += 195225;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 9761289;
          result[5] += 20889159;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 52943159;
          result[2] += 0;
          result[3] += 0;
          result[4] += 743931;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 22156577;
          result[2] += 2556528;
          result[3] += 1704352;
          result[4] += 19600049;
          result[5] += 7669584;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 14945152;
          result[1] += 1346987;
          result[2] += 3976821;
          result[3] += 17190131;
          result[4] += 4105106;
          result[5] += 12122891;
        } else {
          result[0] += 42594320;
          result[1] += 2160929;
          result[2] += 3169363;
          result[3] += 1296557;
          result[4] += 3409466;
          result[5] += 1056454;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 8947848;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 32212254;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38347922;
          result[3] += 12052204;
          result[4] += 1095654;
          result[5] += 2191309;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 303316;
          result[1] += 0;
          result[2] += 50532595;
          result[3] += 2426535;
          result[4] += 0;
          result[5] += 424643;
        } else {
          result[0] += 18512790;
          result[1] += 0;
          result[2] += 35174301;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42500000))) ) ) {
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
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 473709;
          result[1] += 1263225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48318382;
          result[5] += 3631773;
        } else {
          result[0] += 6804876;
          result[1] += 150384;
          result[2] += 676728;
          result[3] += 7105644;
          result[4] += 4135560;
          result[5] += 34813898;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 15298696;
          result[1] += 1841509;
          result[2] += 3966328;
          result[3] += 14165459;
          result[4] += 1983164;
          result[5] += 16431932;
        } else {
          result[0] += 42508840;
          result[1] += 3673603;
          result[2] += 1836801;
          result[3] += 787200;
          result[4] += 4093443;
          result[5] += 787200;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 3834792;
          result[1] += 0;
          result[2] += 3834792;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 42182714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7895160;
          result[3] += 37107254;
          result[4] += 0;
          result[5] += 8684676;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 49557314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4129776;
          result[5] += 0;
        } else {
          result[0] += 4310642;
          result[1] += 391876;
          result[2] += 28998866;
          result[3] += 7053778;
          result[4] += 2351259;
          result[5] += 10580667;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1167110;
          result[1] += 0;
          result[2] += 21007992;
          result[3] += 30344877;
          result[4] += 0;
          result[5] += 1167110;
        } else {
          result[0] += 756156;
          result[1] += 0;
          result[2] += 42344747;
          result[3] += 9830030;
          result[4] += 0;
          result[5] += 756156;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 990536;
          result[1] += 0;
          result[2] += 45960904;
          result[3] += 5943220;
          result[4] += 0;
          result[5] += 792429;
        } else {
          result[0] += 418612;
          result[1] += 0;
          result[2] += 52535905;
          result[3] += 732572;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 1538801;
          result[1] += 1196845;
          result[2] += 0;
          result[3] += 1025867;
          result[4] += 44967213;
          result[5] += 4958361;
        } else {
          result[0] += 29043836;
          result[1] += 2640348;
          result[2] += 0;
          result[3] += 2640348;
          result[4] += 19362557;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65712;
          result[3] += 2431361;
          result[4] += 3745611;
          result[5] += 47444406;
        } else {
          result[0] += 1738071;
          result[1] += 386238;
          result[2] += 0;
          result[3] += 23946760;
          result[4] += 1931190;
          result[5] += 25684831;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 16106127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37580963;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53574539;
          result[2] += 0;
          result[3] += 0;
          result[4] += 112551;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 13066699;
          result[1] += 5681173;
          result[2] += 1136234;
          result[3] += 2272469;
          result[4] += 29826161;
          result[5] += 1704352;
        } else {
          result[0] += 40984508;
          result[1] += 672489;
          result[2] += 2017468;
          result[3] += 3997577;
          result[4] += 2764679;
          result[5] += 3250366;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 4807799;
          result[2] += 0;
          result[3] += 6410398;
          result[4] += 11218198;
          result[5] += 31250694;
        } else {
          result[0] += 711087;
          result[1] += 0;
          result[2] += 15999464;
          result[3] += 30576753;
          result[4] += 0;
          result[5] += 6399785;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 7320966;
          result[1] += 4880644;
          result[2] += 12201611;
          result[3] += 2440322;
          result[4] += 9761289;
          result[5] += 17082256;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42384545;
          result[3] += 7770500;
          result[4] += 0;
          result[5] += 3532045;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12782640;
          result[3] += 28121809;
          result[4] += 0;
          result[5] += 12782640;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44821333;
          result[3] += 8865758;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 34896609;
          result[1] += 0;
          result[2] += 18790481;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 718702;
          result[1] += 0;
          result[2] += 50381058;
          result[3] += 2299848;
          result[4] += 0;
          result[5] += 287481;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
          result[0] += 218240;
          result[1] += 436480;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51941169;
          result[5] += 1091201;
        } else {
          result[0] += 3355443;
          result[1] += 0;
          result[2] += 10066329;
          result[3] += 3355443;
          result[4] += 13421772;
          result[5] += 23488102;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1684588;
          result[4] += 2050802;
          result[5] += 49951700;
        } else {
          result[0] += 4456240;
          result[1] += 954908;
          result[2] += 212201;
          result[3] += 17188357;
          result[4] += 5411149;
          result[5] += 25464232;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 934591;
          result[1] += 50883316;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1869183;
          result[5] += 0;
        } else {
          result[0] += 409825;
          result[1] += 15573354;
          result[2] += 0;
          result[3] += 819650;
          result[4] += 36884261;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 24109480;
          result[1] += 745654;
          result[2] += 2858340;
          result[3] += 13048945;
          result[4] += 4473924;
          result[5] += 8450745;
        } else {
          result[0] += 45554294;
          result[1] += 691021;
          result[2] += 2764087;
          result[3] += 584710;
          result[4] += 2870398;
          result[5] += 1222577;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1988410;
          result[3] += 1988410;
          result[4] += 1988410;
          result[5] += 47721858;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 0;
          result[4] += 4473924;
          result[5] += 4473924;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 571139;
          result[1] += 5711392;
          result[2] += 2855696;
          result[3] += 30270381;
          result[4] += 2284557;
          result[5] += 11993924;
        } else {
          result[0] += 3660483;
          result[1] += 0;
          result[2] += 31724190;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 4880644;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 45634027;
          result[4] += 0;
          result[5] += 2684354;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42750831;
          result[3] += 8450745;
          result[4] += 0;
          result[5] += 2485513;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1376592;
          result[1] += 0;
          result[2] += 42330206;
          result[3] += 6194664;
          result[4] += 0;
          result[5] += 3785628;
        } else {
          result[0] += 901721;
          result[1] += 0;
          result[2] += 50496385;
          result[3] += 2219621;
          result[4] += 0;
          result[5] += 69363;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 470939;
          result[1] += 2119227;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50390515;
          result[5] += 706409;
        } else {
          result[0] += 19299281;
          result[1] += 0;
          result[2] += 1403584;
          result[3] += 0;
          result[4] += 19650177;
          result[5] += 13334048;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 418030;
          result[2] += 0;
          result[3] += 2508184;
          result[4] += 3284527;
          result[5] += 47476348;
        } else {
          result[0] += 340870;
          result[1] += 170435;
          result[2] += 1704352;
          result[3] += 29826161;
          result[4] += 340870;
          result[5] += 21304401;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 19522578;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34164512;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53094518;
          result[2] += 0;
          result[3] += 0;
          result[4] += 592572;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 24326015;
          result[1] += 2669188;
          result[2] += 4003783;
          result[3] += 7886239;
          result[4] += 7279605;
          result[5] += 7522259;
        } else {
          result[0] += 48094685;
          result[1] += 209715;
          result[2] += 1468006;
          result[3] += 838860;
          result[4] += 2726297;
          result[5] += 349525;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12632256;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 8842579;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39881839;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39045157;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 1220161;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50704475;
          result[3] += 994205;
          result[4] += 0;
          result[5] += 1988410;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18673770;
          result[3] += 25676434;
          result[4] += 0;
          result[5] += 9336885;
        } else {
          result[0] += 6316128;
          result[1] += 0;
          result[2] += 42633866;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4737096;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2729852;
          result[1] += 0;
          result[2] += 43905121;
          result[3] += 6597142;
          result[4] += 0;
          result[5] += 454975;
        } else {
          result[0] += 188375;
          result[1] += 0;
          result[2] += 52085897;
          result[3] += 1412818;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42890000))) ) ) {
          result[0] += 612400;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50829223;
          result[5] += 2245467;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 13421772;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2789679;
          result[1] += 341593;
          result[2] += 0;
          result[3] += 1594102;
          result[4] += 4269917;
          result[5] += 44691799;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 665542;
          result[3] += 28396477;
          result[4] += 887389;
          result[5] += 23737680;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 4521018;
          result[1] += 1130254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46905563;
          result[5] += 1130254;
        } else {
          result[0] += 0;
          result[1] += 50081241;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3605849;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 48385252;
          result[1] += 620936;
          result[2] += 0;
          result[3] += 620936;
          result[4] += 3534559;
          result[5] += 525407;
        } else {
          result[0] += 12623310;
          result[1] += 1977145;
          result[2] += 11102429;
          result[3] += 14752543;
          result[4] += 1977145;
          result[5] += 11254517;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8095672;
          result[3] += 37069658;
          result[4] += 852176;
          result[5] += 7669584;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12201611;
          result[3] += 0;
          result[4] += 0;
          result[5] += 41485479;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 7040929;
          result[1] += 3520464;
          result[2] += 1760232;
          result[3] += 14961976;
          result[4] += 9681278;
          result[5] += 16722208;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36071014;
          result[3] += 11744051;
          result[4] += 4194303;
          result[5] += 1677721;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42813756;
          result[3] += 9174376;
          result[4] += 0;
          result[5] += 1698958;
        } else {
          result[0] += 268100;
          result[1] += 0;
          result[2] += 50737987;
          result[3] += 2412902;
          result[4] += 0;
          result[5] += 268100;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 976128;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52710962;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31814572;
          result[5] += 21872518;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2253817;
          result[1] += 57790;
          result[2] += 0;
          result[3] += 2022656;
          result[4] += 3351831;
          result[5] += 46000995;
        } else {
          result[0] += 3631773;
          result[1] += 473709;
          result[2] += 0;
          result[3] += 25896126;
          result[4] += 1579032;
          result[5] += 22106449;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46017506;
          result[5] += 0;
        } else {
          result[0] += 248551;
          result[1] += 52817161;
          result[2] += 0;
          result[3] += 372827;
          result[4] += 248551;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 17068993;
          result[1] += 2990721;
          result[2] += 4230776;
          result[3] += 12035828;
          result[4] += 8607441;
          result[5] += 8753330;
        } else {
          result[0] += 43959263;
          result[1] += 1577485;
          result[2] += 2839473;
          result[3] += 788742;
          result[4] += 4048879;
          result[5] += 473245;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 2684354;
          result[4] += 0;
          result[5] += 40265318;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19387005;
          result[3] += 28334853;
          result[4] += 0;
          result[5] += 5965232;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 2796202;
          result[2] += 42502280;
          result[3] += 5592405;
          result[4] += 0;
          result[5] += 2796202;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 38654705;
          result[4] += 0;
          result[5] += 2147483;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43925801;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 4880644;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 375872;
          result[1] += 0;
          result[2] += 50053659;
          result[3] += 2693751;
          result[4] += 62645;
          result[5] += 501163;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 488064;
          result[1] += 244032;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51490801;
          result[5] += 1464193;
        } else {
          result[0] += 22106449;
          result[1] += 902304;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13534560;
          result[5] += 17143777;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 174308;
          result[2] += 0;
          result[3] += 1684984;
          result[4] += 4183409;
          result[5] += 47644388;
        } else {
          result[0] += 356724;
          result[1] += 178362;
          result[2] += 535087;
          result[3] += 25149102;
          result[4] += 891812;
          result[5] += 26576001;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 53221259;
          result[2] += 0;
          result[3] += 0;
          result[4] += 465831;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 23097934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30589156;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 42696719;
          result[1] += 1613665;
          result[2] += 218062;
          result[3] += 1221152;
          result[4] += 7196076;
          result[5] += 741413;
        } else {
          result[0] += 9239173;
          result[1] += 1997659;
          result[2] += 10238003;
          result[3] += 14982444;
          result[4] += 4619586;
          result[5] += 12610223;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 45427538;
          result[4] += 0;
          result[5] += 8259552;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19522578;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 29283867;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25948760;
          result[3] += 17000912;
          result[4] += 894784;
          result[5] += 9842633;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 48318382;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1789569;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27498266;
          result[3] += 26188824;
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33234865;
          result[3] += 10226112;
          result[4] += 0;
          result[5] += 10226112;
        } else {
          result[0] += 571815;
          result[1] += 0;
          result[2] += 51590435;
          result[3] += 1524840;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 1003497;
          result[1] += 250874;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50425725;
          result[5] += 2006994;
        } else {
          result[0] += 0;
          result[1] += 39681763;
          result[2] += 0;
          result[3] += 7002664;
          result[4] += 4668442;
          result[5] += 2334221;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1346568;
          result[1] += 292732;
          result[2] += 0;
          result[3] += 2341857;
          result[4] += 3746972;
          result[5] += 45958960;
        } else {
          result[0] += 4997897;
          result[1] += 1612224;
          result[2] += 0;
          result[3] += 21120146;
          result[4] += 3708117;
          result[5] += 22248704;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38347922;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 52522512;
          result[2] += 0;
          result[3] += 232915;
          result[4] += 931663;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40175239;
          result[1] += 2125864;
          result[2] += 288252;
          result[3] += 1765548;
          result[4] += 5945214;
          result[5] += 3386970;
        } else {
          result[0] += 7738679;
          result[1] += 161222;
          result[2] += 10640684;
          result[3] += 19185477;
          result[4] += 3063227;
          result[5] += 12897799;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7561562;
          result[3] += 38563966;
          result[4] += 0;
          result[5] += 7561562;
        } else {
          result[0] += 1677721;
          result[1] += 0;
          result[2] += 33554431;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 11744051;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41756626;
          result[3] += 7953643;
          result[4] += 0;
          result[5] += 3976821;
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42990000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 601536;
          result[1] += 0;
          result[2] += 46468658;
          result[3] += 5413824;
          result[4] += 0;
          result[5] += 1203072;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 103443;
          result[1] += 0;
          result[2] += 52756101;
          result[3] += 827546;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 720632;
          result[1] += 540474;
          result[2] += 360316;
          result[3] += 0;
          result[4] += 45760138;
          result[5] += 6305530;
        } else {
          result[0] += 0;
          result[1] += 45552683;
          result[2] += 0;
          result[3] += 3253763;
          result[4] += 4880644;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 236507;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1261370;
          result[4] += 1419042;
          result[5] += 50770171;
        } else {
          result[0] += 7098293;
          result[1] += 299927;
          result[2] += 999759;
          result[3] += 17795721;
          result[4] += 4698870;
          result[5] += 22794519;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 3834792;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49852298;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53235939;
          result[2] += 0;
          result[3] += 0;
          result[4] += 451152;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44572135;
          result[1] += 865920;
          result[2] += 273448;
          result[3] += 1367243;
          result[4] += 4830926;
          result[5] += 1777416;
        } else {
          result[0] += 11131969;
          result[1] += 986377;
          result[2] += 7327372;
          result[3] += 13668367;
          result[4] += 3240953;
          result[5] += 17332053;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 745654;
          result[1] += 7456540;
          result[2] += 5965232;
          result[3] += 9693502;
          result[4] += 8202194;
          result[5] += 21623967;
        } else {
          result[0] += 1032444;
          result[1] += 0;
          result[2] += 11356884;
          result[3] += 35103098;
          result[4] += 0;
          result[5] += 6194664;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14641933;
          result[3] += 0;
          result[4] += 14641933;
          result[5] += 24403223;
        } else {
          result[0] += 1118481;
          result[1] += 0;
          result[2] += 41383799;
          result[3] += 7829367;
          result[4] += 0;
          result[5] += 3355443;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 5033164;
          result[1] += 0;
          result[2] += 41104179;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 838860;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 468201;
          result[1] += 0;
          result[2] += 46664070;
          result[3] += 5774483;
          result[4] += 0;
          result[5] += 780335;
        } else {
          result[0] += 574193;
          result[1] += 0;
          result[2] += 52060209;
          result[3] += 1052688;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52351591;
          result[5] += 1335499;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
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
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          result[0] += 352277;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1127288;
          result[4] += 2677309;
          result[5] += 49530216;
        } else {
          result[0] += 8343264;
          result[1] += 2176503;
          result[2] += 0;
          result[3] += 8161888;
          result[4] += 6348135;
          result[5] += 28657298;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 1134234;
          result[1] += 567117;
          result[2] += 2268468;
          result[3] += 28166818;
          result[4] += 2457507;
          result[5] += 19092944;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39558909;
          result[3] += 2825636;
          result[4] += 0;
          result[5] += 11302545;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 52165594;
          result[2] += 0;
          result[3] += 108678;
          result[4] += 1412818;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 21312148;
          result[1] += 3009730;
          result[2] += 2440322;
          result[3] += 7402311;
          result[4] += 12526987;
          result[5] += 6995590;
        } else {
          result[0] += 46463316;
          result[1] += 924643;
          result[2] += 2427188;
          result[3] += 577901;
          result[4] += 3062880;
          result[5] += 231160;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 610080;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15862095;
          result[4] += 9761289;
          result[5] += 27453626;
        } else {
          result[0] += 506481;
          result[1] += 0;
          result[2] += 27350027;
          result[3] += 19246315;
          result[4] += 253240;
          result[5] += 6331024;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 3097332;
          result[1] += 4129776;
          result[2] += 17551549;
          result[3] += 5162220;
          result[4] += 5162220;
          result[5] += 18583993;
        } else {
          result[0] += 1004122;
          result[1] += 0;
          result[2] += 50741664;
          result[3] += 1807420;
          result[4] += 0;
          result[5] += 133883;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
          result[0] += 230912;
          result[1] += 53456178;
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
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1032444;
          result[1] += 3923287;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47905404;
          result[5] += 825955;
        } else {
          result[0] += 37991197;
          result[1] += 2942980;
          result[2] += 178362;
          result[3] += 891812;
          result[4] += 7937128;
          result[5] += 3745611;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 167597;
          result[2] += 614524;
          result[3] += 4804463;
          result[4] += 4692732;
          result[5] += 43407772;
        } else {
          result[0] += 8947848;
          result[1] += 1922130;
          result[2] += 4241943;
          result[3] += 14913080;
          result[4] += 6495475;
          result[5] += 17166613;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 53304976;
          result[1] += 0;
          result[2] += 95528;
          result[3] += 0;
          result[4] += 286585;
          result[5] += 0;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 23860929;
          result[4] += 5965232;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 5965232;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 23860929;
        } else {
          result[0] += 1677721;
          result[1] += 0;
          result[2] += 43620761;
          result[3] += 3355443;
          result[4] += 0;
          result[5] += 5033164;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 9256395;
          result[1] += 0;
          result[2] += 40728138;
          result[3] += 3702558;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 47851537;
          result[1] += 0;
          result[2] += 5835553;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 123702;
          result[1] += 0;
          result[2] += 42059011;
          result[3] += 9277723;
          result[4] += 0;
          result[5] += 2226653;
        } else {
          result[0] += 1273930;
          result[1] += 0;
          result[2] += 51321219;
          result[3] += 1000945;
          result[4] += 0;
          result[5] += 90995;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 821741;
          result[2] += 273913;
          result[3] += 0;
          result[4] += 52317522;
          result[5] += 273913;
        } else {
          result[0] += 5263440;
          result[1] += 1052688;
          result[2] += 2105376;
          result[3] += 0;
          result[4] += 28422577;
          result[5] += 16843009;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 437666;
          result[2] += 72944;
          result[3] += 2334221;
          result[4] += 1531832;
          result[5] += 49310426;
        } else {
          result[0] += 5640278;
          result[1] += 626697;
          result[2] += 417798;
          result[3] += 17129733;
          result[4] += 5953626;
          result[5] += 23918956;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53454679;
          result[2] += 0;
          result[3] += 0;
          result[4] += 232411;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 20672615;
          result[1] += 2776918;
          result[2] += 1157049;
          result[3] += 7173706;
          result[4] += 12187586;
          result[5] += 9719214;
        } else {
          result[0] += 44739242;
          result[1] += 1724886;
          result[2] += 1832691;
          result[3] += 754637;
          result[4] += 3773189;
          result[5] += 862443;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10360666;
          result[3] += 32965757;
          result[4] += 0;
          result[5] += 10360666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1073741;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 13958643;
          result[4] += 0;
          result[5] += 11811160;
        } else {
          result[0] += 838860;
          result[1] += 0;
          result[2] += 44459622;
          result[3] += 5033164;
          result[4] += 838860;
          result[5] += 2516582;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42330206;
          result[3] += 7227108;
          result[4] += 0;
          result[5] += 4129776;
        } else {
          result[0] += 49557314;
          result[1] += 0;
          result[2] += 4129776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 499996;
          result[1] += 0;
          result[2] += 50437115;
          result[3] += 2687479;
          result[4] += 0;
          result[5] += 62499;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 259357;
          result[3] += 0;
          result[4] += 51612227;
          result[5] += 1815505;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3834792;
          result[5] += 49852298;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 0;
          result[4] += 34164512;
          result[5] += 14641933;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34164512;
          result[5] += 19522578;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 230746;
          result[3] += 1538312;
          result[4] += 1307565;
          result[5] += 50610467;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
          result[0] += 47113161;
          result[1] += 4382619;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2191309;
          result[5] += 0;
        } else {
          result[0] += 217356;
          result[1] += 2282244;
          result[2] += 2499601;
          result[3] += 19127384;
          result[4] += 2499601;
          result[5] += 27060902;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 21962900;
          result[2] += 4880644;
          result[3] += 1220161;
          result[4] += 25623384;
          result[5] += 0;
        } else {
          result[0] += 407750;
          result[1] += 52599757;
          result[2] += 0;
          result[3] += 271833;
          result[4] += 407750;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41449592;
          result[1] += 1776411;
          result[2] += 0;
          result[3] += 1263225;
          result[4] += 8132015;
          result[5] += 1065846;
        } else {
          result[0] += 9444951;
          result[1] += 165700;
          result[2] += 7456540;
          result[3] += 15078781;
          result[4] += 4473924;
          result[5] += 17067192;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1069463;
          result[1] += 427785;
          result[2] += 18822565;
          result[3] += 18822565;
          result[4] += 1283356;
          result[5] += 13261353;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 46684427;
          result[1] += 0;
          result[2] += 7002664;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 653272;
          result[1] += 0;
          result[2] += 48104583;
          result[3] += 4454128;
          result[4] += 59388;
          result[5] += 415718;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 367719;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49642173;
          result[5] += 3677198;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 280350;
          result[3] += 1541926;
          result[4] += 2593240;
          result[5] += 49271573;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1032444;
          result[1] += 6194664;
          result[2] += 0;
          result[3] += 1032444;
          result[4] += 41813984;
          result[5] += 3613554;
        } else {
          result[0] += 6022923;
          result[1] += 1453809;
          result[2] += 415374;
          result[3] += 17757239;
          result[4] += 2492244;
          result[5] += 25545501;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 825955;
          result[1] += 1651910;
          result[2] += 1238932;
          result[3] += 1238932;
          result[4] += 45427538;
          result[5] += 3303820;
        } else {
          result[0] += 367719;
          result[1] += 52583931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 735439;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44551626;
          result[1] += 1861729;
          result[2] += 0;
          result[3] += 1082401;
          result[4] += 4502788;
          result[5] += 1688545;
        } else {
          result[0] += 13421772;
          result[1] += 725501;
          result[2] += 10701143;
          result[3] += 16323777;
          result[4] += 1451002;
          result[5] += 11063893;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2440322;
          result[4] += 2440322;
          result[5] += 48806446;
        } else {
          result[0] += 0;
          result[1] += 3278600;
          result[2] += 9835802;
          result[3] += 29507408;
          result[4] += 1639300;
          result[5] += 9425977;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 17895697;
          result[1] += 13421772;
          result[2] += 8947848;
          result[3] += 8947848;
          result[4] += 4473924;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40124036;
          result[3] += 10172290;
          result[4] += 565127;
          result[5] += 2825636;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 2776918;
          result[1] += 0;
          result[2] += 37025580;
          result[3] += 925639;
          result[4] += 925639;
          result[5] += 12033313;
        } else {
          result[0] += 41054834;
          result[1] += 0;
          result[2] += 12632256;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 316178;
          result[1] += 0;
          result[2] += 49576772;
          result[3] += 3288255;
          result[4] += 0;
          result[5] += 505885;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 432960;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51955249;
          result[5] += 1298881;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1215556;
          result[1] += 67530;
          result[2] += 135061;
          result[3] += 2160989;
          result[4] += 3376546;
          result[5] += 46731405;
        } else {
          result[0] += 4526312;
          result[1] += 1634501;
          result[2] += 1885963;
          result[3] += 17979517;
          result[4] += 1760232;
          result[5] += 25900563;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 5662310;
          result[1] += 15938355;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30618419;
          result[5] += 1468006;
        } else {
          result[0] += 40293936;
          result[1] += 610514;
          result[2] += 1907856;
          result[3] += 5113056;
          result[4] += 2823628;
          result[5] += 2938099;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 610080;
          result[3] += 39045157;
          result[4] += 0;
          result[5] += 14031853;
        } else {
          result[0] += 0;
          result[1] += 4772185;
          result[2] += 16702650;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19813093;
          result[3] += 6391320;
          result[4] += 5113056;
          result[5] += 22369621;
        } else {
          result[0] += 5789784;
          result[1] += 526344;
          result[2] += 42107522;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5263440;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 631612;
          result[1] += 0;
          result[2] += 27790964;
          result[3] += 18316772;
          result[4] += 0;
          result[5] += 6947741;
        } else {
          result[0] += 269784;
          result[1] += 0;
          result[2] += 45053991;
          result[3] += 8363315;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 4652881;
          result[1] += 0;
          result[2] += 43665500;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52918564;
          result[3] += 768526;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f00000))) ) ) {
          result[0] += 0;
          result[1] += 394758;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52305438;
          result[5] += 986895;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 72845;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1748290;
          result[4] += 1966826;
          result[5] += 49899128;
        } else {
          result[0] += 3752884;
          result[1] += 938221;
          result[2] += 0;
          result[3] += 16366744;
          result[4] += 4274117;
          result[5] += 28355123;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 947419;
          result[1] += 21790642;
          result[2] += 315806;
          result[3] += 315806;
          result[4] += 26527739;
          result[5] += 3789677;
        } else {
          result[0] += 120645;
          result[1] += 53566446;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43190576;
          result[1] += 2279980;
          result[2] += 602259;
          result[3] += 1935832;
          result[4] += 4387887;
          result[5] += 1290555;
        } else {
          result[0] += 9659183;
          result[1] += 3144850;
          result[2] += 7637494;
          result[3] += 21340057;
          result[4] += 2021689;
          result[5] += 9883815;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9928434;
          result[3] += 30520743;
          result[4] += 367719;
          result[5] += 12870193;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40802189;
          result[3] += 8589934;
          result[4] += 2147483;
          result[5] += 2147483;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46366124;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 2440322;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41617900;
          result[3] += 5410327;
          result[4] += 0;
          result[5] += 6658864;
        } else {
          result[0] += 38347922;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 136434;
          result[1] += 0;
          result[2] += 50753743;
          result[3] += 2524043;
          result[4] += 0;
          result[5] += 272869;
        } else {
          result[0] += 19884107;
          result[1] += 0;
          result[2] += 33802983;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 220029;
          result[1] += 2420319;
          result[2] += 0;
          result[3] += 660087;
          result[4] += 47966335;
          result[5] += 2420319;
        } else {
          result[0] += 28733936;
          result[1] += 756156;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10586186;
          result[5] += 13610811;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 319946;
          result[2] += 191968;
          result[3] += 1471755;
          result[4] += 4159309;
          result[5] += 47544110;
        } else {
          result[0] += 192426;
          result[1] += 0;
          result[2] += 3078829;
          result[3] += 30595869;
          result[4] += 0;
          result[5] += 19819965;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 38771974;
          result[1] += 2418667;
          result[2] += 183232;
          result[3] += 1832323;
          result[4] += 7292649;
          result[5] += 3188243;
        } else {
          result[0] += 10047584;
          result[1] += 1349675;
          result[2] += 13046862;
          result[3] += 15596249;
          result[4] += 3899062;
          result[5] += 9747656;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 118776;
          result[1] += 53449537;
          result[2] += 0;
          result[3] += 0;
          result[4] += 118776;
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1491308;
          result[3] += 7456540;
          result[4] += 0;
          result[5] += 44739242;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 19685266;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 14316557;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12201611;
          result[3] += 41485479;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1032444;
          result[2] += 38458541;
          result[3] += 10324440;
          result[4] += 0;
          result[5] += 3871665;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 42182714;
          result[1] += 11504376;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1099863;
          result[1] += 0;
          result[2] += 50318758;
          result[3] += 2268468;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 213892;
          result[1] += 1069463;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51120377;
          result[5] += 1283356;
        } else {
          result[0] += 25790857;
          result[1] += 1579032;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13684944;
          result[5] += 12632256;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 139810;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2796202;
          result[4] += 3355443;
          result[5] += 47395635;
        } else {
          result[0] += 281822;
          result[1] += 140911;
          result[2] += 0;
          result[3] += 23109404;
          result[4] += 2113665;
          result[5] += 28041289;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 23246420;
          result[1] += 4046765;
          result[2] += 4181657;
          result[3] += 7014393;
          result[4] += 9307561;
          result[5] += 5890292;
        } else {
          result[0] += 49299203;
          result[1] += 1720740;
          result[2] += 1032444;
          result[3] += 0;
          result[4] += 1290555;
          result[5] += 344148;
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
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 0;
          result[5] += 44739242;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 35791394;
          result[4] += 894784;
          result[5] += 6263493;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19522578;
          result[3] += 34164512;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40957162;
          result[3] += 9409077;
          result[4] += 0;
          result[5] += 3320851;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 973179;
          result[1] += 0;
          result[2] += 44766275;
          result[3] += 6812259;
          result[4] += 0;
          result[5] += 1135376;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45427538;
          result[3] += 6194664;
          result[4] += 0;
          result[5] += 2064888;
        } else {
          result[0] += 102652;
          result[1] += 0;
          result[2] += 52865873;
          result[3] += 718565;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 7328714;
          result[1] += 340870;
          result[2] += 0;
          result[3] += 0;
          result[4] += 43290543;
          result[5] += 2726963;
        } else {
          result[0] += 1851279;
          result[1] += 44430696;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7405116;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78375;
          result[3] += 2429634;
          result[4] += 2194508;
          result[5] += 48984572;
        } else {
          result[0] += 418340;
          result[1] += 557787;
          result[2] += 836681;
          result[3] += 19940919;
          result[4] += 6693455;
          result[5] += 25239905;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
          result[0] += 7420167;
          result[1] += 4583044;
          result[2] += 0;
          result[3] += 13312652;
          result[4] += 5456005;
          result[5] += 22915221;
        } else {
          result[0] += 40274308;
          result[1] += 1078776;
          result[2] += 1618164;
          result[3] += 2589062;
          result[4] += 6005187;
          result[5] += 2121593;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3038891;
          result[3] += 36466703;
          result[4] += 0;
          result[5] += 14181495;
        } else {
          result[0] += 5965232;
          result[1] += 0;
          result[2] += 16702650;
          result[3] += 11930464;
          result[4] += 2386092;
          result[5] += 16702650;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21067086;
          result[3] += 23105836;
          result[4] += 0;
          result[5] += 9514168;
        } else {
          result[0] += 451152;
          result[1] += 0;
          result[2] += 43310594;
          result[3] += 5413824;
          result[4] += 0;
          result[5] += 4511520;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5965232;
          result[4] += 11930464;
          result[5] += 35791394;
        } else {
          result[0] += 1789569;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 198351;
          result[1] += 0;
          result[2] += 49984533;
          result[3] += 3371972;
          result[4] += 0;
          result[5] += 132234;
        } else {
          result[0] += 14982444;
          result[1] += 0;
          result[2] += 38704647;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 417798;
          result[1] += 1880092;
          result[2] += 0;
          result[3] += 835596;
          result[4] += 48046813;
          result[5] += 2506790;
        } else {
          result[0] += 48622271;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2025927;
          result[5] += 3038891;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 189261;
          result[2] += 0;
          result[3] += 2649656;
          result[4] += 5110052;
          result[5] += 45738121;
        } else {
          result[0] += 749819;
          result[1] += 0;
          result[2] += 299927;
          result[3] += 25043978;
          result[4] += 599855;
          result[5] += 26993509;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 20571689;
          result[2] += 0;
          result[3] += 501748;
          result[4] += 30606659;
          result[5] += 2006994;
        } else {
          result[0] += 624268;
          result[1] += 53062822;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43450518;
          result[1] += 1230146;
          result[2] += 263602;
          result[3] += 1186212;
          result[4] += 6238598;
          result[5] += 1318013;
        } else {
          result[0] += 12905550;
          result[1] += 2374621;
          result[2] += 11873106;
          result[3] += 11873106;
          result[4] += 3716798;
          result[5] += 10943907;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 5033164;
          result[2] += 8388607;
          result[3] += 35232153;
          result[4] += 0;
          result[5] += 5033164;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 2556528;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 0;
          result[4] += 5113056;
          result[5] += 30678337;
        } else {
          result[0] += 894784;
          result[1] += 2684354;
          result[2] += 41160103;
          result[3] += 3579139;
          result[4] += 894784;
          result[5] += 4473924;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12389328;
          result[3] += 41297762;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 456911;
          result[1] += 0;
          result[2] += 41807394;
          result[3] += 9823595;
          result[4] += 0;
          result[5] += 1599189;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51701744;
          result[3] += 1819901;
          result[4] += 0;
          result[5] += 165445;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13421772;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 21474836;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 51769695;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1917396;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 3140470;
          result[1] += 4037747;
          result[2] += 0;
          result[3] += 448638;
          result[4] += 43517948;
          result[5] += 2542285;
        } else {
          result[0] += 45091520;
          result[1] += 2395487;
          result[2] += 563644;
          result[3] += 140911;
          result[4] += 4368241;
          result[5] += 1127288;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 125878;
          result[2] += 62939;
          result[3] += 3084018;
          result[4] += 3335774;
          result[5] += 47078480;
        } else {
          result[0] += 6752672;
          result[1] += 2808042;
          result[2] += 869155;
          result[3] += 14976224;
          result[4] += 7956119;
          result[5] += 20324876;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42900000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a20000))) ) ) {
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
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 51744721;
          result[1] += 0;
          result[2] += 77694;
          result[3] += 310779;
          result[4] += 1243116;
          result[5] += 310779;
        } else {
          result[0] += 8947848;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24573195;
          result[3] += 21902196;
          result[4] += 1335499;
          result[5] += 5876199;
        } else {
          result[0] += 3510872;
          result[1] += 0;
          result[2] += 39936174;
          result[3] += 6729172;
          result[4] += 0;
          result[5] += 3510872;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3426835;
          result[1] += 0;
          result[2] += 38837470;
          result[3] += 7995949;
          result[4] += 0;
          result[5] += 3426835;
        } else {
          result[0] += 164937;
          result[1] += 0;
          result[2] += 52120186;
          result[3] += 1237029;
          result[4] += 0;
          result[5] += 164937;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 34513130;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19173961;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53567786;
          result[2] += 0;
          result[3] += 0;
          result[4] += 119304;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 559240;
          result[1] += 1677721;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49772407;
          result[5] += 1677721;
        } else {
          result[0] += 2864972;
          result[1] += 581298;
          result[2] += 83042;
          result[3] += 8387310;
          result[4] += 2657365;
          result[5] += 39113101;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 7303023;
          result[1] += 9276813;
          result[2] += 1579032;
          result[3] += 394758;
          result[4] += 33159673;
          result[5] += 1973790;
        } else {
          result[0] += 38496259;
          result[1] += 192289;
          result[2] += 2230552;
          result[3] += 4499562;
          result[4] += 4114984;
          result[5] += 4153442;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1508064;
          result[1] += 3317741;
          result[2] += 6937096;
          result[3] += 22017739;
          result[4] += 3016128;
          result[5] += 16890320;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37069658;
          result[3] += 14060904;
          result[4] += 0;
          result[5] += 2556528;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 38146091;
          result[1] += 0;
          result[2] += 12715363;
          result[3] += 0;
          result[4] += 2825636;
          result[5] += 0;
        } else {
          result[0] += 6547206;
          result[1] += 0;
          result[2] += 45830443;
          result[3] += 1309441;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20281790;
          result[3] += 19088743;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 7754802;
          result[4] += 0;
          result[5] += 2982616;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45427538;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 260195;
          result[1] += 0;
          result[2] += 52039183;
          result[3] += 1387711;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 254441;
          result[1] += 0;
          result[2] += 508882;
          result[3] += 763323;
          result[4] += 49361590;
          result[5] += 2798853;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2799118;
          result[1] += 1063664;
          result[2] += 0;
          result[3] += 2519206;
          result[4] += 3023047;
          result[5] += 44282053;
        } else {
          result[0] += 759722;
          result[1] += 506481;
          result[2] += 2025927;
          result[3] += 28362991;
          result[4] += 253240;
          result[5] += 21778725;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 26188824;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24879383;
          result[5] += 2618882;
        } else {
          result[0] += 0;
          result[1] += 53423919;
          result[2] += 0;
          result[3] += 0;
          result[4] += 263172;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 43403948;
          result[1] += 1156337;
          result[2] += 82595;
          result[3] += 991146;
          result[4] += 6731535;
          result[5] += 1321528;
        } else {
          result[0] += 12655765;
          result[1] += 4129776;
          result[2] += 9458519;
          result[3] += 13721514;
          result[4] += 3596901;
          result[5] += 10124612;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 1220161;
          result[2] += 0;
          result[3] += 1220161;
          result[4] += 14641933;
          result[5] += 36604834;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7049820;
          result[3] += 26030104;
          result[4] += 0;
          result[5] += 20607166;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 2386092;
          result[1] += 3579139;
          result[2] += 11930464;
          result[3] += 20281790;
          result[4] += 2386092;
          result[5] += 13123511;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37445618;
          result[3] += 13534560;
          result[4] += 0;
          result[5] += 2706912;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 4473924;
          result[1] += 0;
          result[2] += 27962026;
          result[3] += 7829367;
          result[4] += 0;
          result[5] += 13421772;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 14540253;
          result[1] += 0;
          result[2] += 29080507;
          result[3] += 2236962;
          result[4] += 1118481;
          result[5] += 6710886;
        } else {
          result[0] += 306783;
          result[1] += 0;
          result[2] += 50557900;
          result[3] += 2822407;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
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
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13421772;
          result[5] += 40265318;
        } else {
          result[0] += 490293;
          result[1] += 52216211;
          result[2] += 367719;
          result[3] += 367719;
          result[4] += 245146;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 416179;
          result[1] += 1248537;
          result[2] += 208089;
          result[3] += 208089;
          result[4] += 49317211;
          result[5] += 2288984;
        } else {
          result[0] += 3327544;
          result[1] += 162319;
          result[2] += 1339133;
          result[3] += 8886978;
          result[4] += 4179720;
          result[5] += 35791394;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39232874;
          result[1] += 4005882;
          result[2] += 454275;
          result[3] += 1486719;
          result[4] += 6896726;
          result[5] += 1610612;
        } else {
          result[0] += 11419629;
          result[1] += 1038148;
          result[2] += 13347619;
          result[3] += 15423915;
          result[4] += 1927989;
          result[5] += 10529788;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 2119227;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8476909;
          result[4] += 2825636;
          result[5] += 40265318;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10021590;
          result[3] += 35791394;
          result[4] += 715827;
          result[5] += 7158278;
        } else {
          result[0] += 5237764;
          result[1] += 1309441;
          result[2] += 41902119;
          result[3] += 5237764;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 20648881;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 47370962;
          result[1] += 0;
          result[2] += 6316128;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 429006;
          result[1] += 0;
          result[2] += 50071179;
          result[3] += 2819185;
          result[4] += 0;
          result[5] += 367719;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 518715;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51871585;
          result[5] += 1296789;
        } else {
          result[0] += 0;
          result[1] += 31019208;
          result[2] += 0;
          result[3] += 5965232;
          result[4] += 3579139;
          result[5] += 13123511;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1966560;
          result[1] += 147492;
          result[2] += 442476;
          result[3] += 3392316;
          result[4] += 4768908;
          result[5] += 42969338;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1258291;
          result[3] += 38168166;
          result[4] += 0;
          result[5] += 14260633;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 8619487;
          result[1] += 9604571;
          result[2] += 0;
          result[3] += 738813;
          result[4] += 31522695;
          result[5] += 3201523;
        } else {
          result[0] += 37961581;
          result[1] += 834687;
          result[2] += 2771162;
          result[3] += 4340374;
          result[4] += 2470674;
          result[5] += 5308611;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ce0000))) ) ) {
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49213166;
          result[5] += 4473924;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10009457;
          result[3] += 6369654;
          result[4] += 1819901;
          result[5] += 35488077;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 1412818;
          result[1] += 12715363;
          result[2] += 1412818;
          result[3] += 7064090;
          result[4] += 2825636;
          result[5] += 28256363;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27647244;
          result[3] += 22182091;
          result[4] += 0;
          result[5] += 3857755;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 4668442;
          result[1] += 0;
          result[2] += 44350205;
          result[3] += 2334221;
          result[4] += 2334221;
          result[5] += 0;
        } else {
          result[0] += 46976204;
          result[1] += 6710886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45042559;
          result[3] += 6824630;
          result[4] += 0;
          result[5] += 1819901;
        } else {
          result[0] += 394178;
          result[1] += 0;
          result[2] += 52189213;
          result[3] += 1103699;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
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
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1552932;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48140904;
          result[5] += 3993254;
        } else {
          result[0] += 2552263;
          result[1] += 1208967;
          result[2] += 134329;
          result[3] += 8417992;
          result[4] += 2597040;
          result[5] += 38776497;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 41857732;
          result[1] += 2096842;
          result[2] += 197815;
          result[3] += 1305581;
          result[4] += 7319168;
          result[5] += 909950;
        } else {
          result[0] += 9383703;
          result[1] += 0;
          result[2] += 8306885;
          result[3] += 12460327;
          result[4] += 4768767;
          result[5] += 18767407;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 9942053;
          result[5] += 37779804;
        } else {
          result[0] += 0;
          result[1] += 2576980;
          result[2] += 11596411;
          result[3] += 23622320;
          result[4] += 1717986;
          result[5] += 14173392;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 21272243;
          result[1] += 4051855;
          result[2] += 16207423;
          result[3] += 3038891;
          result[4] += 1012963;
          result[5] += 8103711;
        } else {
          result[0] += 906111;
          result[1] += 0;
          result[2] += 38283200;
          result[3] += 12685557;
          result[4] += 0;
          result[5] += 1812222;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
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
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 245146;
          result[1] += 0;
          result[2] += 47558427;
          result[3] += 5148077;
          result[4] += 0;
          result[5] += 735439;
        } else {
          result[0] += 487178;
          result[1] += 0;
          result[2] += 51933247;
          result[3] += 1266664;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          result[0] += 933688;
          result[1] += 311229;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49641107;
          result[5] += 2801065;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22106449;
          result[3] += 3158064;
          result[4] += 9474192;
          result[5] += 18948385;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 43709844;
          result[1] += 950214;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4751070;
          result[5] += 4275963;
        } else {
          result[0] += 105165;
          result[1] += 157748;
          result[2] += 52582;
          result[3] += 4048879;
          result[4] += 4154045;
          result[5] += 45168669;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53341466;
          result[2] += 0;
          result[3] += 0;
          result[4] += 345625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 44029560;
          result[1] += 2765565;
          result[2] += 43897;
          result[3] += 1448629;
          result[4] += 4038603;
          result[5] += 1360833;
        } else {
          result[0] += 7710892;
          result[1] += 289158;
          result[2] += 11566339;
          result[3] += 18602528;
          result[4] += 2024109;
          result[5] += 13494062;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 3834792;
          result[2] += 0;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 46017506;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22625274;
          result[3] += 24542670;
          result[4] += 766958;
          result[5] += 5752188;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4473924;
          result[3] += 4473924;
          result[4] += 0;
          result[5] += 44739242;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50026607;
          result[3] += 1220161;
          result[4] += 0;
          result[5] += 2440322;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31580641;
          result[3] += 7895160;
          result[4] += 4737096;
          result[5] += 9474192;
        } else {
          result[0] += 29826161;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49954246;
          result[3] += 3183897;
          result[4] += 0;
          result[5] += 548947;
        } else {
          result[0] += 475107;
          result[1] += 0;
          result[2] += 52895246;
          result[3] += 316738;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 1022611;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51641868;
          result[5] += 1022611;
        } else {
          result[0] += 4294967;
          result[1] += 715827;
          result[2] += 0;
          result[3] += 1431655;
          result[4] += 32212254;
          result[5] += 15032385;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 203875;
          result[1] += 135916;
          result[2] += 203875;
          result[3] += 3058125;
          result[4] += 2242625;
          result[5] += 47842673;
        } else {
          result[0] += 6361486;
          result[1] += 385544;
          result[2] += 2602426;
          result[3] += 19180845;
          result[4] += 6457872;
          result[5] += 18698915;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46017506;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53433850;
          result[2] += 0;
          result[3] += 0;
          result[4] += 253240;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 4266523;
          result[1] += 10310765;
          result[2] += 1422174;
          result[3] += 2844349;
          result[4] += 34843277;
          result[5] += 0;
        } else {
          result[0] += 38398714;
          result[1] += 1386620;
          result[2] += 2951012;
          result[3] += 3875425;
          result[4] += 2844349;
          result[5] += 4230969;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16777215;
          result[3] += 26004684;
          result[4] += 0;
          result[5] += 10905190;
        } else {
          result[0] += 0;
          result[1] += 5263440;
          result[2] += 13684944;
          result[3] += 7368816;
          result[4] += 0;
          result[5] += 27369889;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50331647;
          result[3] += 3355443;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 5651272;
          result[1] += 8476909;
          result[2] += 8476909;
          result[3] += 11302545;
          result[4] += 0;
          result[5] += 19779454;
        } else {
          result[0] += 1468006;
          result[1] += 0;
          result[2] += 43620761;
          result[3] += 7130316;
          result[4] += 0;
          result[5] += 1468006;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24778657;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28908433;
        } else {
          result[0] += 80854;
          result[1] += 0;
          result[2] += 52150864;
          result[3] += 1455372;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 688296;
          result[1] += 2523752;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50245610;
          result[5] += 229432;
        } else {
          result[0] += 22943201;
          result[1] += 3670912;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11930464;
          result[5] += 15142512;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 63837;
          result[3] += 2936511;
          result[4] += 2298139;
          result[5] += 48388602;
        } else {
          result[0] += 1396485;
          result[1] += 1396485;
          result[2] += 1861980;
          result[3] += 23895410;
          result[4] += 2792970;
          result[5] += 22343760;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 783753;
          result[1] += 10972544;
          result[2] += 783753;
          result[3] += 3135012;
          result[4] += 35268892;
          result[5] += 2743136;
        } else {
          result[0] += 0;
          result[1] += 52779064;
          result[2] += 0;
          result[3] += 0;
          result[4] += 908026;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 43094888;
          result[1] += 854209;
          result[2] += 0;
          result[3] += 1836551;
          result[4] += 5851337;
          result[5] += 2050103;
        } else {
          result[0] += 11716243;
          result[1] += 0;
          result[2] += 14682381;
          result[3] += 12309471;
          result[4] += 1483068;
          result[5] += 13495926;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2684354;
          result[3] += 0;
          result[4] += 2684354;
          result[5] += 48318382;
        } else {
          result[0] += 0;
          result[1] += 7405116;
          result[2] += 0;
          result[3] += 27769185;
          result[4] += 1851279;
          result[5] += 16661511;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 22713769;
          result[1] += 14454216;
          result[2] += 4129776;
          result[3] += 0;
          result[4] += 8259552;
          result[5] += 4129776;
        } else {
          result[0] += 2536398;
          result[1] += 422733;
          result[2] += 26632179;
          result[3] += 15641121;
          result[4] += 2113665;
          result[5] += 6340995;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31082000;
          result[3] += 21192272;
          result[4] += 0;
          result[5] += 1412818;
        } else {
          result[0] += 497102;
          result[1] += 0;
          result[2] += 45733448;
          result[3] += 6710886;
          result[4] += 0;
          result[5] += 745654;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33554431;
          result[3] += 20132659;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 90230;
          result[1] += 0;
          result[2] += 52243404;
          result[3] += 1353456;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 596523;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50505633;
          result[5] += 2584934;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 13421772;
          result[4] += 13421772;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1967911;
          result[1] += 0;
          result[2] += 61497;
          result[3] += 1414436;
          result[4] += 3812828;
          result[5] += 46430416;
        } else {
          result[0] += 2113665;
          result[1] += 0;
          result[2] += 140911;
          result[3] += 23391226;
          result[4] += 2536398;
          result[5] += 25504891;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 39862763;
          result[1] += 3259713;
          result[2] += 78547;
          result[3] += 1296030;
          result[4] += 7579816;
          result[5] += 1610219;
        } else {
          result[0] += 8249150;
          result[1] += 1758015;
          result[2] += 14740284;
          result[3] += 15416444;
          result[4] += 3651263;
          result[5] += 9871933;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 26843545;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4382619;
          result[3] += 29582682;
          result[4] += 2191309;
          result[5] += 17530478;
        } else {
          result[0] += 5965232;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
          result[0] += 20648881;
          result[1] += 14454216;
          result[2] += 6194664;
          result[3] += 4129776;
          result[4] += 2064888;
          result[5] += 6194664;
        } else {
          result[0] += 1385473;
          result[1] += 0;
          result[2] += 40178726;
          result[3] += 8659208;
          result[4] += 0;
          result[5] += 3463683;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47003156;
          result[3] += 6037102;
          result[4] += 0;
          result[5] += 646832;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 86592;
          result[1] += 0;
          result[2] += 52821170;
          result[3] += 779328;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 485856;
          result[1] += 0;
          result[2] += 0;
          result[3] += 242928;
          result[4] += 50286098;
          result[5] += 2672208;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2521216;
          result[1] += 395485;
          result[2] += 0;
          result[3] += 3015573;
          result[4] += 3163880;
          result[5] += 44590935;
        } else {
          result[0] += 0;
          result[1] += 247405;
          result[2] += 1237029;
          result[3] += 35131644;
          result[4] += 494811;
          result[5] += 16576198;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 18790481;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 2684354;
        } else {
          result[0] += 0;
          result[1] += 53440820;
          result[2] += 0;
          result[3] += 0;
          result[4] += 246271;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
          result[0] += 6122212;
          result[1] += 2825636;
          result[2] += 1177348;
          result[3] += 10596136;
          result[4] += 18131166;
          result[5] += 14834590;
        } else {
          result[0] += 40472386;
          result[1] += 1204759;
          result[2] += 2033031;
          result[3] += 2635411;
          result[4] += 5421417;
          result[5] += 1920085;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 11184810;
          result[3] += 4473924;
          result[4] += 20132659;
          result[5] += 0;
        } else {
          result[0] += 2556528;
          result[1] += 0;
          result[2] += 852176;
          result[3] += 14486992;
          result[4] += 2556528;
          result[5] += 33234865;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6049249;
          result[3] += 37051654;
          result[4] += 0;
          result[5] += 10586186;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35549560;
          result[3] += 13784523;
          result[4] += 0;
          result[5] += 4353007;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 9256395;
          result[1] += 7405116;
          result[2] += 33323022;
          result[3] += 0;
          result[4] += 1851279;
          result[5] += 1851279;
        } else {
          result[0] += 39045157;
          result[1] += 0;
          result[2] += 14641933;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 345254;
          result[1] += 0;
          result[2] += 43847334;
          result[3] += 8631365;
          result[4] += 0;
          result[5] += 863136;
        } else {
          result[0] += 277213;
          result[1] += 0;
          result[2] += 52393426;
          result[3] += 831641;
          result[4] += 0;
          result[5] += 184809;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
          result[0] += 1056832;
          result[1] += 0;
          result[2] += 422733;
          result[3] += 634099;
          result[4] += 43118766;
          result[5] += 8454660;
        } else {
          result[0] += 28942423;
          result[1] += 7069905;
          result[2] += 0;
          result[3] += 3534952;
          result[4] += 14139810;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 717299;
          result[1] += 331061;
          result[2] += 0;
          result[3] += 2924373;
          result[4] += 5352156;
          result[5] += 44362200;
        } else {
          result[0] += 2475861;
          result[1] += 0;
          result[2] += 1303084;
          result[3] += 30101257;
          result[4] += 1042467;
          result[5] += 18764420;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 53555826;
          result[2] += 0;
          result[3] += 0;
          result[4] += 131264;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 23008753;
          result[2] += 0;
          result[3] += 6710886;
          result[4] += 12463074;
          result[5] += 11504376;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          result[0] += 44921851;
          result[1] += 1643482;
          result[2] += 199209;
          result[3] += 896444;
          result[4] += 5528077;
          result[5] += 498024;
        } else {
          result[0] += 8822703;
          result[1] += 1689453;
          result[2] += 21212032;
          result[3] += 6194664;
          result[4] += 2064888;
          result[5] += 13703348;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1851279;
          result[5] += 51835812;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 639132;
          result[1] += 319566;
          result[2] += 23328319;
          result[3] += 22369621;
          result[4] += 2236962;
          result[5] += 4793490;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32808777;
          result[3] += 18889902;
          result[4] += 0;
          result[5] += 1988410;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46423543;
          result[3] += 6947741;
          result[4] += 0;
          result[5] += 315806;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 596523;
          result[1] += 0;
          result[2] += 50346561;
          result[3] += 2744006;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 238609;
          result[1] += 0;
          result[2] += 53448481;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 44739242;
        } else {
          result[0] += 709521;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1655549;
          result[4] += 50139486;
          result[5] += 1182535;
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 39426457;
          result[1] += 0;
          result[2] += 0;
          result[3] += 838860;
          result[4] += 8388607;
          result[5] += 5033164;
        } else {
          result[0] += 286790;
          result[1] += 286790;
          result[2] += 0;
          result[3] += 3326764;
          result[4] += 2867900;
          result[5] += 46918846;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 950214;
          result[3] += 19479387;
          result[4] += 2850642;
          result[5] += 30406848;
        } else {
          result[0] += 0;
          result[1] += 426088;
          result[2] += 0;
          result[3] += 40904450;
          result[4] += 1278264;
          result[5] += 11078288;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 15339168;
          result[2] += 0;
          result[3] += 2300875;
          result[4] += 36047046;
          result[5] += 0;
        } else {
          result[0] += 544493;
          result[1] += 52707002;
          result[2] += 0;
          result[3] += 108898;
          result[4] += 326696;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 45511392;
          result[1] += 1362616;
          result[2] += 272523;
          result[3] += 1135513;
          result[4] += 4950840;
          result[5] += 454205;
        } else {
          result[0] += 14193139;
          result[1] += 925639;
          result[2] += 11570493;
          result[3] += 12341860;
          result[4] += 4319651;
          result[5] += 10336307;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 1006632;
          result[2] += 10401873;
          result[3] += 26843545;
          result[4] += 3690987;
          result[5] += 11744051;
        } else {
          result[0] += 1533916;
          result[1] += 0;
          result[2] += 37325311;
          result[3] += 11248723;
          result[4] += 3067833;
          result[5] += 511305;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9256395;
          result[3] += 27769185;
          result[4] += 0;
          result[5] += 16661511;
        } else {
          result[0] += 787860;
          result[1] += 56275;
          result[2] += 48453443;
          result[3] += 3095167;
          result[4] += 281378;
          result[5] += 1012963;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c00000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 112788;
          result[1] += 53574303;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1971559;
          result[1] += 5308045;
          result[2] += 0;
          result[3] += 454975;
          result[4] += 41554415;
          result[5] += 4398095;
        } else {
          result[0] += 43155721;
          result[1] += 343414;
          result[2] += 686828;
          result[3] += 801299;
          result[4] += 6181456;
          result[5] += 2518371;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 221238;
          result[3] += 1106190;
          result[4] += 1327428;
          result[5] += 51032235;
        } else {
          result[0] += 6115616;
          result[1] += 2807168;
          result[2] += 3107936;
          result[3] += 15940704;
          result[4] += 7068048;
          result[5] += 18647617;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 15339168;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7669584;
        } else {
          result[0] += 53229790;
          result[1] += 0;
          result[2] += 91460;
          result[3] += 91460;
          result[4] += 274380;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 4129776;
          result[1] += 0;
          result[2] += 43362650;
          result[3] += 6194664;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 44739242;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 5965232;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40058829;
          result[3] += 10117951;
          result[4] += 0;
          result[5] += 3510309;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f70000))) ) ) {
          result[0] += 640827;
          result[1] += 0;
          result[2] += 50910172;
          result[3] += 1993685;
          result[4] += 0;
          result[5] += 142406;
        } else {
          result[0] += 19387005;
          result[1] += 0;
          result[2] += 34300086;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 238609;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50823779;
          result[5] += 2624702;
        } else {
          result[0] += 0;
          result[1] += 48318382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1334328;
          result[4] += 1098858;
          result[5] += 51253904;
        } else {
          result[0] += 5322024;
          result[1] += 1960745;
          result[2] += 1027057;
          result[3] += 16619656;
          result[4] += 3921491;
          result[5] += 24836115;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 37025580;
          result[1] += 12958953;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3702558;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53546916;
          result[2] += 0;
          result[3] += 0;
          result[4] += 140175;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 2884017;
          result[1] += 20188121;
          result[2] += 0;
          result[3] += 221847;
          result[4] += 29283867;
          result[5] += 1109237;
        } else {
          result[0] += 37996202;
          result[1] += 514455;
          result[2] += 2425289;
          result[3] += 4409617;
          result[4] += 3711427;
          result[5] += 4630098;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 1579032;
          result[1] += 1579032;
          result[2] += 3158064;
          result[3] += 1579032;
          result[4] += 7895160;
          result[5] += 37896770;
        } else {
          result[0] += 2902004;
          result[1] += 4353007;
          result[2] += 1451002;
          result[3] += 25392543;
          result[4] += 7980513;
          result[5] += 11608019;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 4668442;
          result[1] += 0;
          result[2] += 44350205;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4668442;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 559240;
          result[1] += 2796202;
          result[2] += 19014178;
          result[3] += 26284305;
          result[4] += 0;
          result[5] += 5033164;
        } else {
          result[0] += 3189332;
          result[1] += 0;
          result[2] += 43055984;
          result[3] += 5847108;
          result[4] += 0;
          result[5] += 1594666;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 20452225;
          result[1] += 0;
          result[2] += 33234865;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 318051;
          result[1] += 0;
          result[2] += 49806863;
          result[3] += 3371345;
          result[4] += 0;
          result[5] += 190830;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 526344;
          result[1] += 263172;
          result[2] += 526344;
          result[3] += 0;
          result[4] += 51581715;
          result[5] += 789516;
        } else {
          result[0] += 0;
          result[1] += 12838217;
          result[2] += 5835553;
          result[3] += 1167110;
          result[4] += 18673770;
          result[5] += 15172438;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 809666;
          result[1] += 62282;
          result[2] += 0;
          result[3] += 2491280;
          result[4] += 2615844;
          result[5] += 47708018;
        } else {
          result[0] += 1931190;
          result[1] += 5600451;
          result[2] += 5214213;
          result[3] += 21822450;
          result[4] += 579357;
          result[5] += 18539427;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 14641933;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 0;
        } else {
          result[0] += 111615;
          result[1] += 53463860;
          result[2] += 0;
          result[3] += 0;
          result[4] += 111615;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40636295;
          result[1] += 1560007;
          result[2] += 608783;
          result[3] += 2206840;
          result[4] += 7343450;
          result[5] += 1331713;
        } else {
          result[0] += 8632042;
          result[1] += 947419;
          result[2] += 10211074;
          result[3] += 13474407;
          result[4] += 4526558;
          result[5] += 15895589;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2556528;
          result[3] += 11504376;
          result[4] += 1278264;
          result[5] += 38347922;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 426088;
          result[1] += 0;
          result[2] += 30252249;
          result[3] += 16191344;
          result[4] += 0;
          result[5] += 6817408;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38483667;
          result[3] += 12827889;
          result[4] += 0;
          result[5] += 2375535;
        } else {
          result[0] += 275318;
          result[1] += 0;
          result[2] += 49006678;
          result[3] += 3854457;
          result[4] += 0;
          result[5] += 550636;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49817751;
          result[3] += 3869339;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53293298;
          result[3] += 393792;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 598740;
          result[1] += 199580;
          result[2] += 0;
          result[3] += 399160;
          result[4] += 49296325;
          result[5] += 3193284;
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
          result[0] += 148717;
          result[1] += 0;
          result[2] += 0;
          result[3] += 966665;
          result[4] += 2230765;
          result[5] += 50340942;
        } else {
          result[0] += 5866836;
          result[1] += 1328340;
          result[2] += 110695;
          result[3] += 18375375;
          result[4] += 3431546;
          result[5] += 24574297;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 4695068;
          result[1] += 14493473;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33477881;
          result[5] += 1020667;
        } else {
          result[0] += 38321217;
          result[1] += 411252;
          result[2] += 2579672;
          result[3] += 4448999;
          result[4] += 3514336;
          result[5] += 4411613;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 26843545;
        } else {
          result[0] += 238609;
          result[1] += 53209872;
          result[2] += 0;
          result[3] += 238609;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42f60000))) ) ) {
          result[0] += 440058;
          result[1] += 440058;
          result[2] += 5280697;
          result[3] += 24203196;
          result[4] += 3080406;
          result[5] += 20242673;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 2334221;
          result[1] += 7002664;
          result[2] += 11671106;
          result[3] += 4668442;
          result[4] += 7002664;
          result[5] += 21007992;
        } else {
          result[0] += 12389328;
          result[1] += 0;
          result[2] += 39232874;
          result[3] += 0;
          result[4] += 2064888;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10066329;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 16777215;
        } else {
          result[0] += 875333;
          result[1] += 0;
          result[2] += 39098207;
          result[3] += 11087551;
          result[4] += 0;
          result[5] += 2625999;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3123612;
          result[1] += 0;
          result[2] += 45292382;
          result[3] += 5271096;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 396947;
          result[1] += 0;
          result[2] += 52099302;
          result[3] += 1190841;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 504104;
          result[1] += 756156;
          result[2] += 0;
          result[3] += 504104;
          result[4] += 49654258;
          result[5] += 2268468;
        } else {
          result[0] += 22922578;
          result[1] += 1206451;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12064514;
          result[5] += 17493546;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 65312;
          result[1] += 522502;
          result[2] += 0;
          result[3] += 1959382;
          result[4] += 3788140;
          result[5] += 47351753;
        } else {
          result[0] += 0;
          result[1] += 719023;
          result[2] += 0;
          result[3] += 23967451;
          result[4] += 1917396;
          result[5] += 27083220;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1032444;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 1032444;
          result[4] += 32349913;
          result[5] += 1376592;
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
          result[0] += 46606997;
          result[1] += 1389957;
          result[2] += 0;
          result[3] += 1172776;
          result[4] += 3952690;
          result[5] += 564670;
        } else {
          result[0] += 11019981;
          result[1] += 2684354;
          result[2] += 8335627;
          result[3] += 12715363;
          result[4] += 4662300;
          result[5] += 14269463;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2236962;
          result[4] += 0;
          result[5] += 51450129;
        } else {
          result[0] += 492542;
          result[1] += 985084;
          result[2] += 6895589;
          result[3] += 27582358;
          result[4] += 0;
          result[5] += 17731516;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 29283867;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14641933;
          result[5] += 9761289;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42450258;
          result[3] += 4994148;
          result[4] += 0;
          result[5] += 6242685;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20132659;
          result[3] += 29527900;
          result[4] += 0;
          result[5] += 4026531;
        } else {
          result[0] += 1890390;
          result[1] += 0;
          result[2] += 41021474;
          result[3] += 8695796;
          result[4] += 189039;
          result[5] += 1890390;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 484915;
          result[1] += 0;
          result[2] += 50639049;
          result[3] += 2493851;
          result[4] += 0;
          result[5] += 69273;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42080000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          result[0] += 1016800;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51043408;
          result[5] += 1626881;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 0;
          result[4] += 0;
          result[5] += 38347922;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14510024;
          result[5] += 39177066;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 854889;
          result[4] += 427444;
          result[5] += 52404756;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5164530;
          result[1] += 1801580;
          result[2] += 120105;
          result[3] += 7566637;
          result[4] += 7566637;
          result[5] += 31467601;
        } else {
          result[0] += 258111;
          result[1] += 258111;
          result[2] += 4645998;
          result[3] += 33554431;
          result[4] += 774333;
          result[5] += 14196105;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1412818;
          result[1] += 8005969;
          result[2] += 1883757;
          result[3] += 2354696;
          result[4] += 39558909;
          result[5] += 470939;
        } else {
          result[0] += 0;
          result[1] += 53107316;
          result[2] += 0;
          result[3] += 0;
          result[4] += 579774;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          result[0] += 13100677;
          result[1] += 3082512;
          result[2] += 1798132;
          result[3] += 10018165;
          result[4] += 7706281;
          result[5] += 17981322;
        } else {
          result[0] += 44167495;
          result[1] += 1200669;
          result[2] += 814740;
          result[3] += 2787269;
          result[4] += 3216079;
          result[5] += 1500837;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1063110;
          result[1] += 5847108;
          result[2] += 2126221;
          result[3] += 12757328;
          result[4] += 1063110;
          result[5] += 30830210;
        } else {
          result[0] += 20765761;
          result[1] += 0;
          result[2] += 23298171;
          result[3] += 7597229;
          result[4] += 0;
          result[5] += 2025927;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 360316;
          result[1] += 0;
          result[2] += 39094291;
          result[3] += 10989639;
          result[4] += 360316;
          result[5] += 2882528;
        } else {
          result[0] += 553475;
          result[1] += 0;
          result[2] += 50682511;
          result[3] += 2372036;
          result[4] += 0;
          result[5] += 79067;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 226527;
          result[1] += 2944861;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49156534;
          result[5] += 1359166;
        } else {
          result[0] += 27337598;
          result[1] += 0;
          result[2] += 988105;
          result[3] += 1317474;
          result[4] += 15809695;
          result[5] += 8234216;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 220330;
          result[3] += 2203300;
          result[4] += 1689197;
          result[5] += 49574263;
        } else {
          result[0] += 497102;
          result[1] += 994205;
          result[2] += 2485513;
          result[3] += 22369621;
          result[4] += 5666970;
          result[5] += 21673677;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
          result[0] += 13684944;
          result[1] += 6316128;
          result[2] += 842150;
          result[3] += 13263869;
          result[4] += 4842365;
          result[5] += 14737632;
        } else {
          result[0] += 40779168;
          result[1] += 493296;
          result[2] += 4398559;
          result[3] += 2507590;
          result[4] += 4480775;
          result[5] += 1027700;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 3158064;
          result[1] += 3158064;
          result[2] += 0;
          result[3] += 3158064;
          result[4] += 3158064;
          result[5] += 41054834;
        } else {
          result[0] += 933688;
          result[1] += 0;
          result[2] += 16806393;
          result[3] += 22408525;
          result[4] += 1867377;
          result[5] += 11671106;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47637841;
          result[3] += 1512312;
          result[4] += 0;
          result[5] += 4536937;
        } else {
          result[0] += 750868;
          result[1] += 0;
          result[2] += 38294288;
          result[3] += 14641933;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 43925801;
          result[1] += 0;
          result[2] += 7320966;
          result[3] += 2440322;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 238963;
          result[1] += 0;
          result[2] += 52014347;
          result[3] += 1274471;
          result[4] += 0;
          result[5] += 159308;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1851279;
          result[1] += 3132933;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47563629;
          result[5] += 1139248;
        } else {
          result[0] += 47027173;
          result[1] += 271833;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3397917;
          result[5] += 2990167;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42640000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2825636;
          result[1] += 16953818;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33907636;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 935908;
          result[4] += 1191155;
          result[5] += 51560027;
        } else {
          result[0] += 275318;
          result[1] += 275318;
          result[2] += 1101273;
          result[3] += 11012736;
          result[4] += 4129776;
          result[5] += 36892667;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 1614010;
          result[1] += 1359166;
          result[2] += 1019375;
          result[3] += 20727294;
          result[4] += 6371094;
          result[5] += 22596149;
        } else {
          result[0] += 24403223;
          result[1] += 4880644;
          result[2] += 6304166;
          result[3] += 3863843;
          result[4] += 11388170;
          result[5] += 2847042;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 2064888;
          result[1] += 0;
          result[2] += 12389328;
          result[3] += 2064888;
          result[4] += 8259552;
          result[5] += 28908433;
        } else {
          result[0] += 50838388;
          result[1] += 0;
          result[2] += 438261;
          result[3] += 876523;
          result[4] += 1533916;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1376592;
          result[1] += 1101273;
          result[2] += 17895697;
          result[3] += 21474836;
          result[4] += 1927228;
          result[5] += 9911462;
        } else {
          result[0] += 781850;
          result[1] += 0;
          result[2] += 47562592;
          result[3] += 4756259;
          result[4] += 0;
          result[5] += 586388;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 52684932;
          result[1] += 286331;
          result[2] += 286331;
          result[3] += 0;
          result[4] += 429496;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 29283867;
          result[1] += 0;
          result[2] += 24403223;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 711087;
          result[1] += 0;
          result[2] += 52264916;
          result[3] += 0;
          result[4] += 0;
          result[5] += 711087;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 985084;
          result[1] += 1723897;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50731838;
          result[5] += 246271;
        } else {
          result[0] += 15142512;
          result[1] += 5506368;
          result[2] += 0;
          result[3] += 1376592;
          result[4] += 11471600;
          result[5] += 20190017;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2847568;
          result[4] += 3611550;
          result[5] += 47227971;
        } else {
          result[0] += 159783;
          result[1] += 479349;
          result[2] += 798915;
          result[3] += 26204413;
          result[4] += 3355443;
          result[5] += 22689187;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 3501332;
          result[1] += 5251998;
          result[2] += 0;
          result[3] += 5835553;
          result[4] += 38514652;
          result[5] += 583555;
        } else {
          result[0] += 453055;
          result[1] += 51988132;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1245902;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 45877283;
          result[1] += 1749738;
          result[2] += 42676;
          result[3] += 554795;
          result[4] += 4395683;
          result[5] += 1066913;
        } else {
          result[0] += 7669584;
          result[1] += 986089;
          result[2] += 14243513;
          result[3] += 12271335;
          result[4] += 2629571;
          result[5] += 15886996;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 2334221;
          result[1] += 1167110;
          result[2] += 5835553;
          result[3] += 1167110;
          result[4] += 9336885;
          result[5] += 33846209;
        } else {
          result[0] += 8947848;
          result[1] += 41756626;
          result[2] += 0;
          result[3] += 2982616;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16357785;
          result[3] += 26424115;
          result[4] += 0;
          result[5] += 10905190;
        } else {
          result[0] += 2147483;
          result[1] += 0;
          result[2] += 51539607;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 15693149;
          result[4] += 0;
          result[5] += 5781686;
        } else {
          result[0] += 413507;
          result[1] += 0;
          result[2] += 50034439;
          result[3] += 3239144;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42960000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 46017506;
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 15859425;
          result[1] += 117477;
          result[2] += 0;
          result[3] += 469908;
          result[4] += 34068394;
          result[5] += 3171885;
        } else {
          result[0] += 809934;
          result[1] += 501388;
          result[2] += 1349890;
          result[3] += 10721990;
          result[4] += 4319651;
          result[5] += 35984235;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 24163075;
          result[1] += 5205550;
          result[2] += 3030096;
          result[3] += 5205550;
          result[4] += 7769477;
          result[5] += 8313341;
        } else {
          result[0] += 48620943;
          result[1] += 773994;
          result[2] += 1266536;
          result[3] += 351815;
          result[4] += 2533073;
          result[5] += 140726;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42840000))) ) ) {
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
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19884107;
          result[3] += 0;
          result[4] += 1988410;
          result[5] += 31814572;
        } else {
          result[0] += 1142278;
          result[1] += 0;
          result[2] += 32554938;
          result[3] += 18276456;
          result[4] += 0;
          result[5] += 1713417;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 9761289;
          result[4] += 0;
          result[5] += 39045157;
        } else {
          result[0] += 7793287;
          result[1] += 0;
          result[2] += 40698278;
          result[3] += 2597762;
          result[4] += 0;
          result[5] += 2597762;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44706705;
          result[3] += 8199483;
          result[4] += 0;
          result[5] += 780903;
        } else {
          result[0] += 271604;
          result[1] += 0;
          result[2] += 51242653;
          result[3] += 2172833;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 998829;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52188846;
          result[5] += 499414;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1558029;
          result[1] += 194753;
          result[2] += 0;
          result[3] += 2142290;
          result[4] += 3245894;
          result[5] += 46546123;
        } else {
          result[0] += 4559413;
          result[1] += 1937750;
          result[2] += 569926;
          result[3] += 19833447;
          result[4] += 3419559;
          result[5] += 23366992;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42520000))) ) ) {
          result[0] += 115954;
          result[1] += 52179678;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1391458;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 22535322;
          result[2] += 1325607;
          result[3] += 0;
          result[4] += 29826161;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 8612902;
          result[1] += 10909676;
          result[2] += 574193;
          result[3] += 287096;
          result[4] += 30145158;
          result[5] += 3158064;
        } else {
          result[0] += 39880740;
          result[1] += 269204;
          result[2] += 1346023;
          result[3] += 4653394;
          result[4] += 3691948;
          result[5] += 3845780;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3745611;
          result[3] += 38704647;
          result[4] += 0;
          result[5] += 11236833;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 38347922;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 46528812;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31002404;
          result[3] += 19660061;
          result[4] += 0;
          result[5] += 3024624;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 865920;
          result[1] += 0;
          result[2] += 25977624;
          result[3] += 7793287;
          result[4] += 2597762;
          result[5] += 16452495;
        } else {
          result[0] += 1934669;
          result[1] += 0;
          result[2] += 44497408;
          result[3] += 6126454;
          result[4] += 0;
          result[5] += 1128557;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 654720;
          result[1] += 0;
          result[2] += 43211561;
          result[3] += 9820809;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 376751;
          result[1] += 0;
          result[2] += 52556836;
          result[3] += 565127;
          result[4] += 0;
          result[5] += 188375;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d00000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 17895697;
          result[4] += 17895697;
          result[5] += 0;
        } else {
          result[0] += 121189;
          result[1] += 53444711;
          result[2] += 0;
          result[3] += 121189;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 20164165;
          result[1] += 168034;
          result[2] += 168034;
          result[3] += 336069;
          result[4] += 28649918;
          result[5] += 4200867;
        } else {
          result[0] += 1605868;
          result[1] += 1313892;
          result[2] += 510958;
          result[3] += 10584130;
          result[4] += 3905179;
          result[5] += 35767062;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 45805873;
          result[1] += 3199892;
          result[2] += 592572;
          result[3] += 651830;
          result[4] += 3199892;
          result[5] += 237029;
        } else {
          result[0] += 5307469;
          result[1] += 2857867;
          result[2] += 26945612;
          result[3] += 9594271;
          result[4] += 1837200;
          result[5] += 7144669;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31082000;
          result[5] += 22605091;
        } else {
          result[0] += 0;
          result[1] += 1789569;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 51897521;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 5113056;
          result[1] += 5113056;
          result[2] += 5113056;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 11504376;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20132659;
          result[3] += 20878313;
          result[4] += 0;
          result[5] += 12676118;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44739242;
          result[3] += 8421504;
          result[4] += 0;
          result[5] += 526344;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 35791394;
          result[1] += 6316128;
          result[2] += 9474192;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2105376;
        } else {
          result[0] += 565871;
          result[1] += 0;
          result[2] += 51069933;
          result[3] += 2051285;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
          result[0] += 229432;
          result[1] += 1606024;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50704475;
          result[5] += 1147160;
        } else {
          result[0] += 24352907;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1660425;
          result[4] += 6641702;
          result[5] += 21032056;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 116331;
          result[1] += 1279648;
          result[2] += 0;
          result[3] += 3722615;
          result[4] += 2442966;
          result[5] += 46125529;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 35232153;
          result[4] += 1342177;
          result[5] += 17112760;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 2825636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50861454;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53338473;
          result[2] += 0;
          result[3] += 0;
          result[4] += 348617;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 41108033;
          result[1] += 1562105;
          result[2] += 0;
          result[3] += 904376;
          result[4] += 8180498;
          result[5] += 1932077;
        } else {
          result[0] += 12326117;
          result[1] += 821741;
          result[2] += 11230462;
          result[3] += 13832643;
          result[4] += 2876094;
          result[5] += 12600031;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1677721;
          result[1] += 838860;
          result[2] += 1677721;
          result[3] += 1677721;
          result[4] += 5872025;
          result[5] += 41943039;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46976204;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6710886;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 778073;
          result[1] += 778073;
          result[2] += 12449180;
          result[3] += 31122951;
          result[4] += 3112295;
          result[5] += 5446516;
        } else {
          result[0] += 7075043;
          result[1] += 3745611;
          result[2] += 32045783;
          result[3] += 6242685;
          result[4] += 832358;
          result[5] += 3745611;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 51450129;
          result[1] += 0;
          result[2] += 2236962;
          result[3] += 0;
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24403223;
          result[3] += 21962900;
          result[4] += 0;
          result[5] += 7320966;
        } else {
          result[0] += 190830;
          result[1] += 0;
          result[2] += 50633796;
          result[3] += 2671632;
          result[4] += 0;
          result[5] += 190830;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53090567;
          result[5] += 596523;
        } else {
          result[0] += 2025927;
          result[1] += 2025927;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37479667;
          result[5] += 12155567;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 133053;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1064428;
          result[4] += 1729695;
          result[5] += 50759913;
        } else {
          result[0] += 3035312;
          result[1] += 5501504;
          result[2] += 189707;
          result[3] += 19729531;
          result[4] += 2845605;
          result[5] += 22385430;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 30097308;
          result[2] += 2440322;
          result[3] += 4880644;
          result[4] += 14641933;
          result[5] += 1626881;
        } else {
          result[0] += 406720;
          result[1] += 52873650;
          result[2] += 0;
          result[3] += 0;
          result[4] += 406720;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 40843843;
          result[1] += 1504164;
          result[2] += 77136;
          result[3] += 1812710;
          result[4] += 7366547;
          result[5] += 2082688;
        } else {
          result[0] += 5807497;
          result[1] += 387166;
          result[2] += 9421052;
          result[3] += 18067771;
          result[4] += 2968276;
          result[5] += 17035327;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1677721;
          result[2] += 0;
          result[3] += 5033164;
          result[4] += 3355443;
          result[5] += 43620761;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 756156;
          result[2] += 1512312;
          result[3] += 34783185;
          result[4] += 2268468;
          result[5] += 14366968;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24311135;
          result[3] += 13168531;
          result[4] += 0;
          result[5] += 16207423;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 1234186;
          result[2] += 24683720;
          result[3] += 23449534;
          result[4] += 0;
          result[5] += 4319651;
        } else {
          result[0] += 4238454;
          result[1] += 0;
          result[2] += 38852500;
          result[3] += 5651272;
          result[4] += 2825636;
          result[5] += 2119227;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 39370533;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 601199;
          result[1] += 0;
          result[2] += 49959655;
          result[3] += 2825636;
          result[4] += 0;
          result[5] += 300599;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 913822;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51402534;
          result[5] += 1370734;
        } else {
          result[0] += 0;
          result[1] += 8134407;
          result[2] += 0;
          result[3] += 9761289;
          result[4] += 16268815;
          result[5] += 19522578;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 76805;
          result[1] += 230416;
          result[2] += 0;
          result[3] += 1612916;
          result[4] += 3379444;
          result[5] += 48387507;
        } else {
          result[0] += 4456650;
          result[1] += 207286;
          result[2] += 103643;
          result[3] += 13888166;
          result[4] += 4767579;
          result[5] += 30263765;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 53426474;
          result[2] += 0;
          result[3] += 0;
          result[4] += 260616;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 27159352;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26527739;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 42853958;
          result[1] += 1435716;
          result[2] += 435065;
          result[3] += 1957795;
          result[4] += 6090917;
          result[5] += 913637;
        } else {
          result[0] += 12953989;
          result[1] += 2158998;
          result[2] += 12090390;
          result[3] += 12810056;
          result[4] += 2158998;
          result[5] += 11514657;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 44739242;
        } else {
          result[0] += 3355443;
          result[1] += 838860;
          result[2] += 4613734;
          result[3] += 21390950;
          result[4] += 6291455;
          result[5] += 17196646;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 778073;
          result[2] += 14005328;
          result[3] += 25676434;
          result[4] += 2334221;
          result[5] += 10893032;
        } else {
          result[0] += 745654;
          result[1] += 0;
          result[2] += 42502280;
          result[3] += 6710886;
          result[4] += 745654;
          result[5] += 2982616;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 331401;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 15244482;
          result[4] += 0;
          result[5] += 2319812;
        } else {
          result[0] += 920350;
          result[1] += 0;
          result[2] += 50312474;
          result[3] += 2454267;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45250548;
          result[3] += 8436542;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52971263;
          result[3] += 715827;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8947848;
          result[4] += 44739242;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 53443058;
          result[2] += 0;
          result[3] += 0;
          result[4] += 244032;
          result[5] += 0;
        } else {
          result[0] += 15339168;
          result[1] += 38347922;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 169895;
          result[1] += 1529062;
          result[2] += 0;
          result[3] += 679583;
          result[4] += 48250423;
          result[5] += 3058125;
        } else {
          result[0] += 8742026;
          result[1] += 389978;
          result[2] += 552470;
          result[3] += 9197001;
          result[4] += 4192272;
          result[5] += 30613341;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 46009259;
          result[1] += 2886402;
          result[2] += 57728;
          result[3] += 692736;
          result[4] += 3521411;
          result[5] += 519552;
        } else {
          result[0] += 5996962;
          result[1] += 1998987;
          result[2] += 20275444;
          result[3] += 9423797;
          result[4] += 2284557;
          result[5] += 13707342;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 39370533;
          result[5] += 3579139;
        } else {
          result[0] += 756156;
          result[1] += 0;
          result[2] += 1512312;
          result[3] += 3780781;
          result[4] += 3780781;
          result[5] += 43857060;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 2196290;
          result[1] += 2440322;
          result[2] += 23671126;
          result[3] += 19766610;
          result[4] += 244032;
          result[5] += 5368709;
        } else {
          result[0] += 39283237;
          result[1] += 1309441;
          result[2] += 11784971;
          result[3] += 0;
          result[4] += 1309441;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 16106127;
          result[5] += 26843545;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 39370533;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 359110;
          result[1] += 0;
          result[2] += 49198203;
          result[3] += 3471406;
          result[4] += 0;
          result[5] += 658370;
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
