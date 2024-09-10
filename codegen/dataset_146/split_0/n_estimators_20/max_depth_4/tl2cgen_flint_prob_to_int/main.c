
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 2359872;
          result[2] += 0;
          result[3] += 0;
          result[4] += 212388492;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15713294;
          result[4] += 146657419;
          result[5] += 52377649;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 110837865;
          result[1] += 27709466;
          result[2] += 0;
          result[3] += 6927366;
          result[4] += 39255077;
          result[5] += 30018588;
        } else {
          result[0] += 425665;
          result[1] += 1702662;
          result[2] += 425665;
          result[3] += 33627593;
          result[4] += 2979660;
          result[5] += 175587116;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 89478485;
          result[2] += 0;
          result[3] += 0;
          result[4] += 125269879;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 169812391;
          result[1] += 4558721;
          result[2] += 162811;
          result[3] += 6675271;
          result[4] += 29143257;
          result[5] += 4395910;
        } else {
          result[0] += 29080507;
          result[1] += 8947848;
          result[2] += 42502280;
          result[3] += 43844457;
          result[4] += 25501368;
          result[5] += 64871901;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 157482134;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 3205199;
          result[2] += 9615598;
          result[3] += 28846795;
          result[4] += 0;
          result[5] += 173080771;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 3940336;
          result[1] += 23642021;
          result[2] += 7880673;
          result[3] += 120180277;
          result[4] += 5910505;
          result[5] += 53194549;
        } else {
          result[0] += 2045222;
          result[1] += 2045222;
          result[2] += 122713351;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 16361780;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 172083126;
          result[3] += 36976539;
          result[4] += 1422174;
          result[5] += 4266523;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 116322030;
          result[3] += 98426333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 179687407;
          result[1] += 0;
          result[2] += 35060957;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1851279;
          result[1] += 0;
          result[2] += 203640690;
          result[3] += 9256395;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 2801065;
          result[2] += 0;
          result[3] += 0;
          result[4] += 208212544;
          result[5] += 3734754;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 5608227;
          result[1] += 233676;
          result[2] += 0;
          result[3] += 6075579;
          result[4] += 12384834;
          result[5] += 190446047;
        } else {
          result[0] += 12289816;
          result[1] += 2587329;
          result[2] += 3880994;
          result[3] += 100259025;
          result[4] += 6468324;
          result[5] += 89262874;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 117600294;
          result[2] += 0;
          result[3] += 0;
          result[4] += 97148069;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 212822370;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1925994;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 167252923;
          result[1] += 7210529;
          result[2] += 2978261;
          result[3] += 3605264;
          result[4] += 28685365;
          result[5] += 5016020;
        } else {
          result[0] += 53687091;
          result[1] += 3267909;
          result[2] += 42015984;
          result[3] += 60222910;
          result[4] += 10270573;
          result[5] += 45283894;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 23342213;
          result[1] += 4668442;
          result[2] += 42015984;
          result[3] += 14005328;
          result[4] += 18673770;
          result[5] += 112042625;
        } else {
          result[0] += 7953643;
          result[1] += 0;
          result[2] += 68931573;
          result[3] += 106048575;
          result[4] += 0;
          result[5] += 31814572;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 214748364;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 196852667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 148002251;
          result[3] += 60942103;
          result[4] += 0;
          result[5] += 5804009;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2196914;
          result[1] += 274614;
          result[2] += 200743036;
          result[3] += 9611499;
          result[4] += 0;
          result[5] += 1922299;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 1579032;
          result[1] += 0;
          result[2] += 1579032;
          result[3] += 0;
          result[4] += 208432236;
          result[5] += 3158064;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 128849018;
          result[4] += 42949672;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2938404;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6856276;
          result[4] += 13222818;
          result[5] += 191730866;
        } else {
          result[0] += 14616380;
          result[1] += 562168;
          result[2] += 1686505;
          result[3] += 89384790;
          result[4] += 12929875;
          result[5] += 95568643;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 15907286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 198841078;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 213853579;
          result[2] += 0;
          result[3] += 0;
          result[4] += 894784;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 176083209;
          result[1] += 6792527;
          result[2] += 870836;
          result[3] += 3483347;
          result[4] += 25428435;
          result[5] += 2090008;
        } else {
          result[0] += 32116384;
          result[1] += 7190235;
          result[2] += 45538157;
          result[3] += 69505609;
          result[4] += 15339168;
          result[5] += 45058808;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34636833;
          result[3] += 27709466;
          result[4] += 6927366;
          result[5] += 145474698;
        } else {
          result[0] += 0;
          result[1] += 7279605;
          result[2] += 36398027;
          result[3] += 123753294;
          result[4] += 18199013;
          result[5] += 29118422;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 168730858;
          result[1] += 0;
          result[2] += 46017506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 174866525;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 12271335;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 8259552;
          result[1] += 0;
          result[2] += 115633734;
          result[3] += 74335972;
          result[4] += 0;
          result[5] += 16519104;
        } else {
          result[0] += 193273528;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1491308;
          result[1] += 0;
          result[2] += 200829489;
          result[3] += 11681913;
          result[4] += 0;
          result[5] += 745654;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1875531;
          result[3] += 937765;
          result[4] += 210059535;
          result[5] += 1875531;
        } else {
          result[0] += 34164512;
          result[1] += 14641933;
          result[2] += 14641933;
          result[3] += 24403223;
          result[4] += 63448380;
          result[5] += 63448380;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 7097227;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9386655;
          result[4] += 17170711;
          result[5] += 181093770;
        } else {
          result[0] += 14005328;
          result[1] += 2667681;
          result[2] += 1333840;
          result[3] += 106040341;
          result[4] += 12004566;
          result[5] += 78696605;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 3253763;
          result[1] += 61821498;
          result[2] += 11388170;
          result[3] += 0;
          result[4] += 128523642;
          result[5] += 9761289;
        } else {
          result[0] += 939817;
          result[1] += 211928911;
          result[2] += 0;
          result[3] += 939817;
          result[4] += 939817;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 8729608;
          result[1] += 106501221;
          result[2] += 0;
          result[3] += 12221451;
          result[4] += 80312396;
          result[5] += 6983686;
        } else {
          result[0] += 171340037;
          result[1] += 819025;
          result[2] += 10155910;
          result[3] += 12121570;
          result[4] += 7698835;
          result[5] += 12612985;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17179869;
          result[4] += 4294967;
          result[5] += 193273528;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 178956970;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 3940336;
          result[2] += 23642021;
          result[3] += 151702973;
          result[4] += 3940336;
          result[5] += 31522695;
        } else {
          result[0] += 0;
          result[1] += 13015052;
          result[2] += 117135471;
          result[3] += 13015052;
          result[4] += 0;
          result[5] += 71582788;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 24403223;
          result[3] += 9761289;
          result[4] += 58567735;
          result[5] += 68329025;
        } else {
          result[0] += 6507526;
          result[1] += 1501736;
          result[2] += 145668471;
          result[3] += 51559630;
          result[4] += 1501736;
          result[5] += 8009263;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 161061273;
        } else {
          result[0] += 360921;
          result[1] += 0;
          result[2] += 205725324;
          result[3] += 7218432;
          result[4] += 360921;
          result[5] += 1082764;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 2489836;
          result[1] += 3112295;
          result[2] += 0;
          result[3] += 0;
          result[4] += 194207216;
          result[5] += 14939016;
        } else {
          result[0] += 0;
          result[1] += 145474698;
          result[2] += 0;
          result[3] += 0;
          result[4] += 69273666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 189136174;
          result[1] += 0;
          result[2] += 3940336;
          result[3] += 5910505;
          result[4] += 15761347;
          result[5] += 0;
        } else {
          result[0] += 6496884;
          result[1] += 877957;
          result[2] += 4389786;
          result[3] += 28621409;
          result[4] += 15100866;
          result[5] += 159261461;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 213075000;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1673363;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 76924787;
          result[2] += 3205199;
          result[3] += 22436396;
          result[4] += 108976782;
          result[5] += 3205199;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 182555047;
          result[1] += 7385525;
          result[2] += 1893724;
          result[3] += 7953643;
          result[4] += 10794229;
          result[5] += 4166194;
        } else {
          result[0] += 42040685;
          result[1] += 568117;
          result[2] += 38063863;
          result[3] += 61356675;
          result[4] += 9089877;
          result[5] += 63629145;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 167026505;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 62216815;
          result[3] += 104363691;
          result[4] += 12041964;
          result[5] += 36125893;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 2119227;
          result[1] += 0;
          result[2] += 173070228;
          result[3] += 33907636;
          result[4] += 706409;
          result[5] += 4944863;
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 206831374;
          result[3] += 7587115;
          result[4] += 0;
          result[5] += 329874;
        } else {
          result[0] += 95443717;
          result[1] += 0;
          result[2] += 119304647;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 211392921;
          result[5] += 3355443;
        } else {
          result[0] += 78335881;
          result[1] += 0;
          result[2] += 2701237;
          result[3] += 16207423;
          result[4] += 48622271;
          result[5] += 68881550;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 1452965;
          result[2] += 1452965;
          result[3] += 9008388;
          result[4] += 2905931;
          result[5] += 199928112;
        } else {
          result[0] += 1253395;
          result[1] += 835596;
          result[2] += 417798;
          result[3] += 73950312;
          result[4] += 20472120;
          result[5] += 117819141;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 2962046;
          result[1] += 69608090;
          result[2] += 4443069;
          result[3] += 1481023;
          result[4] += 133292088;
          result[5] += 2962046;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 181415433;
          result[1] += 6896468;
          result[2] += 957842;
          result[3] += 4789214;
          result[4] += 15325485;
          result[5] += 5363919;
        } else {
          result[0] += 38083453;
          result[1] += 0;
          result[2] += 72464349;
          result[3] += 56596243;
          result[4] += 11636610;
          result[5] += 35967706;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23860929;
          result[4] += 17895697;
          result[5] += 172991738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 171798691;
          result[4] += 8589934;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 171798691;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 21474836;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 21122789;
          result[2] += 98573019;
          result[3] += 59847904;
          result[4] += 0;
          result[5] += 35204649;
        } else {
          result[0] += 130716395;
          result[1] += 0;
          result[2] += 84031968;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2196290;
          result[1] += 0;
          result[2] += 195957882;
          result[3] += 15618062;
          result[4] += 0;
          result[5] += 976128;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x43028000))) ) ) {
          result[0] += 0;
          result[1] += 2431113;
          result[2] += 0;
          result[3] += 0;
          result[4] += 209075766;
          result[5] += 3241484;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 569624;
          result[1] += 284812;
          result[2] += 1139248;
          result[3] += 4841806;
          result[4] += 8259552;
          result[5] += 199653320;
        } else {
          result[0] += 24457452;
          result[1] += 5070447;
          result[2] += 2982616;
          result[3] += 77249758;
          result[4] += 13720034;
          result[5] += 91268055;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 193273528;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 168503048;
          result[1] += 7441775;
          result[2] += 2657776;
          result[3] += 4252442;
          result[4] += 29589914;
          result[5] += 2303406;
        } else {
          result[0] += 52480639;
          result[1] += 7238708;
          result[2] += 54290316;
          result[3] += 47051608;
          result[4] += 13874192;
          result[5] += 39812899;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 125269879;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36398027;
          result[3] += 141952308;
          result[4] += 0;
          result[5] += 36398027;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12632256;
          result[3] += 37896770;
          result[4] += 0;
          result[5] += 164219337;
        } else {
          result[0] += 2213900;
          result[1] += 0;
          result[2] += 152759146;
          result[3] += 39850212;
          result[4] += 0;
          result[5] += 19925106;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 146933091;
          result[1] += 22605091;
          result[2] += 11302545;
          result[3] += 33907636;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 26843545;
          result[1] += 0;
          result[2] += 187904819;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2225371;
          result[1] += 2225371;
          result[2] += 166902874;
          result[3] += 38944003;
          result[4] += 0;
          result[5] += 4450743;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 205602929;
          result[3] += 8129275;
          result[4] += 0;
          result[5] += 1016159;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 1875531;
          result[2] += 0;
          result[3] += 0;
          result[4] += 209121770;
          result[5] += 3751063;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 29826161;
          result[4] += 101408950;
          result[5] += 83513252;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 6224590;
          result[1] += 666920;
          result[2] += 444613;
          result[3] += 8225351;
          result[4] += 16228396;
          result[5] += 182958492;
        } else {
          result[0] += 6829453;
          result[1] += 1517656;
          result[2] += 4552968;
          result[3] += 116859534;
          result[4] += 2276484;
          result[5] += 82712267;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 165767982;
          result[1] += 13622668;
          result[2] += 1224509;
          result[3] += 6122547;
          result[4] += 24184063;
          result[5] += 3826592;
        } else {
          result[0] += 43880470;
          result[1] += 7313411;
          result[2] += 26594224;
          result[3] += 56512727;
          result[4] += 31913069;
          result[5] += 48534460;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 214748364;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 186115249;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40563580;
          result[3] += 140779483;
          result[4] += 0;
          result[5] += 33405301;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 119304647;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 181343063;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 9544371;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42fd0000))) ) ) {
          result[0] += 2208209;
          result[1] += 0;
          result[2] += 171688281;
          result[3] += 32571088;
          result[4] += 1104104;
          result[5] += 7176680;
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 95443717;
          result[1] += 0;
          result[2] += 95443717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 23860929;
        } else {
          result[0] += 739237;
          result[1] += 0;
          result[2] += 207355994;
          result[3] += 6653133;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 3158064;
          result[1] += 15790320;
          result[2] += 0;
          result[3] += 1579032;
          result[4] += 178430626;
          result[5] += 15790320;
        } else {
          result[0] += 0;
          result[1] += 201733312;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13015052;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 211392921;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3355443;
        } else {
          result[0] += 1687609;
          result[1] += 1054756;
          result[2] += 2531414;
          result[3] += 18985611;
          result[4] += 13922781;
          result[5] += 176566189;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 168953883;
          result[1] += 5030454;
          result[2] += 520391;
          result[3] += 6244702;
          result[4] += 19254497;
          result[5] += 14744435;
        } else {
          result[0] += 34200665;
          result[1] += 3181457;
          result[2] += 31814572;
          result[3] += 81127160;
          result[4] += 5965232;
          result[5] += 58459277;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 163208757;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68329025;
          result[3] += 39045157;
          result[4] += 0;
          result[5] += 107374182;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 17179869;
          result[1] += 0;
          result[2] += 77309411;
          result[3] += 60129542;
          result[4] += 0;
          result[5] += 60129542;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 189106768;
          result[3] += 25641595;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 137659208;
          result[3] += 69747332;
          result[4] += 0;
          result[5] += 7341824;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 198438362;
          result[3] += 16310002;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 146419339;
          result[3] += 0;
          result[4] += 0;
          result[5] += 68329025;
        } else {
          result[0] += 3050402;
          result[1] += 0;
          result[2] += 204682035;
          result[3] += 7015926;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 4082668;
          result[2] += 0;
          result[3] += 4082668;
          result[4] += 195151555;
          result[5] += 11431471;
        } else {
          result[0] += 127688216;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2902004;
          result[4] += 23216039;
          result[5] += 60942103;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9571641;
          result[4] += 16443589;
          result[5] += 188733134;
        } else {
          result[0] += 0;
          result[1] += 2019577;
          result[2] += 4039154;
          result[3] += 94246931;
          result[4] += 14810232;
          result[5] += 99632470;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 3869339;
          result[1] += 79321468;
          result[2] += 0;
          result[3] += 3869339;
          result[4] += 127688216;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 181308230;
          result[1] += 4702518;
          result[2] += 1393338;
          result[3] += 4702518;
          result[4] += 18287573;
          result[5] += 4354184;
        } else {
          result[0] += 43880470;
          result[1] += 7313411;
          result[2] += 28588791;
          result[3] += 58507294;
          result[4] += 32577925;
          result[5] += 43880470;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 214748364;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22369621;
          result[3] += 140928614;
          result[4] += 0;
          result[5] += 51450129;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 151119219;
          result[3] += 0;
          result[4] += 0;
          result[5] += 63629145;
        } else {
          result[0] += 5174659;
          result[1] += 0;
          result[2] += 116429836;
          result[3] += 93143869;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 6135667;
          result[1] += 0;
          result[2] += 162595190;
          result[3] += 33746171;
          result[4] += 1227133;
          result[5] += 11044201;
        } else {
          result[0] += 196852667;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 167026505;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 209859172;
          result[3] += 3008733;
          result[4] += 0;
          result[5] += 1880458;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 819650;
          result[1] += 2458950;
          result[2] += 0;
          result[3] += 0;
          result[4] += 200814310;
          result[5] += 10655453;
        } else {
          result[0] += 130786598;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 56512727;
          result[5] += 27449039;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 542979;
          result[3] += 10316609;
          result[4] += 10588098;
          result[5] += 193300677;
        } else {
          result[0] += 2870967;
          result[1] += 6316128;
          result[2] += 1148386;
          result[3] += 93593538;
          result[4] += 10335482;
          result[5] += 100483860;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 7708915;
          result[1] += 58367504;
          result[2] += 5506368;
          result[3] += 8810189;
          result[4] += 132152839;
          result[5] += 2202547;
        } else {
          result[0] += 153248332;
          result[1] += 3583917;
          result[2] += 14192315;
          result[3] += 16916092;
          result[4] += 14192315;
          result[5] += 12615391;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 214748364;
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
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37896770;
          result[4] += 0;
          result[5] += 176851594;
        } else {
          result[0] += 2334221;
          result[1] += 7002664;
          result[2] += 32679098;
          result[3] += 137719060;
          result[4] += 7002664;
          result[5] += 28010656;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 3904515;
          result[1] += 31236125;
          result[2] += 19522578;
          result[3] += 0;
          result[4] += 46854188;
          result[5] += 113230955;
        } else {
          result[0] += 12271335;
          result[1] += 3067833;
          result[2] += 119645517;
          result[3] += 46017506;
          result[4] += 3067833;
          result[5] += 30678337;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
          result[0] += 2292687;
          result[1] += 0;
          result[2] += 171187308;
          result[3] += 36682994;
          result[4] += 0;
          result[5] += 4585374;
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 858993;
          result[1] += 0;
          result[2] += 192414534;
          result[3] += 20615843;
          result[4] += 0;
          result[5] += 858993;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 213679964;
          result[3] += 1068399;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 181710154;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 0;
        } else {
          result[0] += 3303820;
          result[1] += 660764;
          result[2] += 2643056;
          result[3] += 0;
          result[4] += 204836901;
          result[5] += 3303820;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 584349;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3798270;
          result[4] += 9933937;
          result[5] += 200431807;
        } else {
          result[0] += 48418066;
          result[1] += 7120303;
          result[2] += 7689928;
          result[3] += 53829497;
          result[4] += 22784972;
          result[5] += 74905596;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2334221;
          result[1] += 144721724;
          result[2] += 7002664;
          result[3] += 9336885;
          result[4] += 51352869;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 189741915;
          result[1] += 7019354;
          result[2] += 219354;
          result[3] += 2851612;
          result[4] += 10309676;
          result[5] += 4606451;
        } else {
          result[0] += 70943656;
          result[1] += 2876094;
          result[2] += 35471828;
          result[3] += 65191467;
          result[4] += 7669584;
          result[5] += 32595733;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 54829369;
          result[4] += 4569114;
          result[5] += 155349880;
        } else {
          result[0] += 0;
          result[1] += 4382619;
          result[2] += 6573929;
          result[3] += 129287280;
          result[4] += 2191309;
          result[5] += 72313224;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 46684427;
          result[2] += 18673770;
          result[3] += 0;
          result[4] += 9336885;
          result[5] += 140053281;
        } else {
          result[0] += 34513130;
          result[1] += 0;
          result[2] += 168730858;
          result[3] += 11504376;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 92035013;
          result[3] += 78887154;
          result[4] += 6573929;
          result[5] += 37252267;
        } else {
          result[0] += 7141275;
          result[1] += 0;
          result[2] += 165779616;
          result[3] += 37746743;
          result[4] += 510091;
          result[5] += 3570637;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 754827;
          result[1] += 0;
          result[2] += 208332332;
          result[3] += 5661204;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 16860408;
          result[2] += 0;
          result[3] += 0;
          result[4] += 197000566;
          result[5] += 887389;
        } else {
          result[0] += 94328720;
          result[1] += 15052455;
          result[2] += 0;
          result[3] += 4013988;
          result[4] += 63220312;
          result[5] += 38132887;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13614429;
          result[4] += 11816297;
          result[5] += 189317637;
        } else {
          result[0] += 6522730;
          result[1] += 2508742;
          result[2] += 9031473;
          result[3] += 99346206;
          result[4] += 24083928;
          result[5] += 73255283;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 211211332;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3537031;
          result[5] += 0;
        } else {
          result[0] += 80530636;
          result[1] += 67108863;
          result[2] += 26843545;
          result[3] += 40265318;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 12632256;
          result[1] += 61757699;
          result[2] += 0;
          result[3] += 0;
          result[4] += 126322567;
          result[5] += 14035840;
        } else {
          result[0] += 158336854;
          result[1] += 1762859;
          result[2] += 14904177;
          result[3] += 14102877;
          result[4] += 10577158;
          result[5] += 15064437;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x423a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2753184;
          result[3] += 35791394;
          result[4] += 5506368;
          result[5] += 170697418;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14810232;
          result[3] += 136994646;
          result[4] += 0;
          result[5] += 62943486;
        } else {
          result[0] += 4880644;
          result[1] += 0;
          result[2] += 146419339;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 43925801;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 59652323;
          result[4] += 11930464;
          result[5] += 0;
        } else {
          result[0] += 187904819;
          result[1] += 6710886;
          result[2] += 20132659;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 3003473;
          result[1] += 0;
          result[2] += 132152839;
          result[3] += 69079893;
          result[4] += 0;
          result[5] += 10512157;
        } else {
          result[0] += 1077783;
          result[1] += 0;
          result[2] += 200737179;
          result[3] += 11316726;
          result[4] += 0;
          result[5] += 1616675;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 6582325;
          result[2] += 0;
          result[3] += 0;
          result[4] += 205697667;
          result[5] += 2468372;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 5035131;
          result[1] += 251756;
          result[2] += 0;
          result[3] += 8559723;
          result[4] += 8056210;
          result[5] += 192845542;
        } else {
          result[0] += 13665805;
          result[1] += 3253763;
          result[2] += 650752;
          result[3] += 108024934;
          result[4] += 16919568;
          result[5] += 72233540;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 159654301;
          result[1] += 10219060;
          result[2] += 2517739;
          result[3] += 6960809;
          result[4] += 24584985;
          result[5] += 10811469;
        } else {
          result[0] += 30678337;
          result[1] += 1586810;
          result[2] += 72464349;
          result[3] += 52364749;
          result[4] += 12694484;
          result[5] += 44959633;
        }
      } else {
        result[0] += 0;
        result[1] += 214748364;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19522578;
          result[3] += 9761289;
          result[4] += 43925801;
          result[5] += 141538694;
        } else {
          result[0] += 0;
          result[1] += 153391689;
          result[2] += 30678337;
          result[3] += 0;
          result[4] += 15339168;
          result[5] += 15339168;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 12632256;
          result[1] += 12632256;
          result[2] += 25264513;
          result[3] += 12632256;
          result[4] += 25264513;
          result[5] += 126322567;
        } else {
          result[0] += 7761989;
          result[1] += 0;
          result[2] += 80207220;
          result[3] += 108667847;
          result[4] += 5174659;
          result[5] += 12936648;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 95443717;
          result[4] += 0;
          result[5] += 33405301;
        } else {
          result[0] += 2921746;
          result[1] += 0;
          result[2] += 172383041;
          result[3] += 37982703;
          result[4] += 0;
          result[5] += 1460873;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2706912;
          result[1] += 0;
          result[2] += 178656202;
          result[3] += 31580641;
          result[4] += 0;
          result[5] += 1804608;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 209705350;
          result[3] += 5043014;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 4544938;
          result[2] += 0;
          result[3] += 0;
          result[4] += 209067191;
          result[5] += 1136234;
        } else {
          result[0] += 0;
          result[1] += 40518559;
          result[2] += 0;
          result[3] += 12155567;
          result[4] += 89140830;
          result[5] += 72933406;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 9405037;
          result[1] += 1306255;
          result[2] += 0;
          result[3] += 3918765;
          result[4] += 12540050;
          result[5] += 187578255;
        } else {
          result[0] += 2198788;
          result[1] += 0;
          result[2] += 1465859;
          result[3] += 123132168;
          result[4] += 0;
          result[5] += 87951548;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 19869955;
          result[1] += 87122112;
          result[2] += 0;
          result[3] += 764229;
          result[4] += 103170922;
          result[5] += 3821145;
        } else {
          result[0] += 145166620;
          result[1] += 1227913;
          result[2] += 13234174;
          result[3] += 21147392;
          result[4] += 14052783;
          result[5] += 19919479;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 213652709;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1095654;
          result[5] += 0;
        } else {
          result[0] += 134217727;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 9474192;
          result[1] += 3158064;
          result[2] += 3158064;
          result[3] += 15790320;
          result[4] += 28422577;
          result[5] += 154745145;
        } else {
          result[0] += 1690932;
          result[1] += 0;
          result[2] += 55800756;
          result[3] += 116674308;
          result[4] += 1690932;
          result[5] += 38891436;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 7669584;
          result[1] += 17895697;
          result[2] += 140609048;
          result[3] += 33234865;
          result[4] += 2556528;
          result[5] += 12782640;
        } else {
          result[0] += 162912552;
          result[1] += 0;
          result[2] += 51835812;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65617555;
          result[3] += 149130808;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 165941918;
          result[3] += 45552683;
          result[4] += 0;
          result[5] += 3253763;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 148671944;
          result[3] += 66076419;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1932183;
          result[1] += 0;
          result[2] += 204259370;
          result[3] += 8280785;
          result[4] += 0;
          result[5] += 276026;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          result[0] += 6012954;
          result[1] += 1717986;
          result[2] += 0;
          result[3] += 0;
          result[4] += 201004469;
          result[5] += 6012954;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 214748364;
        }
      } else {
        result[0] += 0;
        result[1] += 214748364;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 119304647;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11930464;
          result[4] += 79536431;
          result[5] += 3976821;
        } else {
          result[0] += 252052;
          result[1] += 504104;
          result[2] += 252052;
          result[3] += 7309510;
          result[4] += 13106707;
          result[5] += 193323938;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 185361746;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4521018;
          result[4] += 18084072;
          result[5] += 6781527;
        } else {
          result[0] += 2169175;
          result[1] += 6073691;
          result[2] += 3036845;
          result[3] += 98914398;
          result[4] += 13015052;
          result[5] += 91539201;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 39045157;
          result[1] += 136658050;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 16207423;
          result[1] += 54024745;
          result[2] += 2701237;
          result[3] += 2701237;
          result[4] += 131010008;
          result[5] += 8103711;
        } else {
          result[0] += 177444658;
          result[1] += 2016416;
          result[2] += 6889423;
          result[3] += 11258325;
          result[4] += 9577978;
          result[5] += 7561562;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 5681173;
          result[2] += 60220440;
          result[3] += 99988656;
          result[4] += 15907286;
          result[5] += 32950807;
        } else {
          result[0] += 5467117;
          result[1] += 0;
          result[2] += 187412778;
          result[3] += 15307928;
          result[4] += 1312108;
          result[5] += 5248432;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 155507436;
          result[2] += 0;
          result[3] += 0;
          result[4] += 59240928;
          result[5] += 0;
        } else {
          result[0] += 758828;
          result[1] += 1517656;
          result[2] += 0;
          result[3] += 0;
          result[4] += 204124770;
          result[5] += 8347109;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 14810232;
          result[1] += 22215348;
          result[2] += 14810232;
          result[3] += 0;
          result[4] += 81456276;
          result[5] += 81456276;
        } else {
          result[0] += 183601655;
          result[1] += 3278600;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22950206;
          result[5] += 4917901;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 255348;
          result[3] += 7405116;
          result[4] += 11235348;
          result[5] += 195852551;
        } else {
          result[0] += 12141250;
          result[1] += 15935391;
          result[2] += 0;
          result[3] += 50841485;
          result[4] += 48565001;
          result[5] += 87265236;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 46528812;
          result[5] += 136007297;
        } else {
          result[0] += 5506368;
          result[1] += 2753184;
          result[2] += 15417831;
          result[3] += 137108571;
          result[4] += 1651910;
          result[5] += 52310499;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42900000))) ) ) {
          result[0] += 13094412;
          result[1] += 107374182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 86423122;
          result[5] += 7856647;
        } else {
          result[0] += 184391266;
          result[1] += 1124336;
          result[2] += 7870358;
          result[3] += 5171950;
          result[4] += 10119032;
          result[5] += 6071419;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 134217727;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8947848;
          result[4] += 35791394;
          result[5] += 35791394;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 3609216;
          result[1] += 0;
          result[2] += 123615655;
          result[3] += 60454371;
          result[4] += 1804608;
          result[5] += 25264513;
        } else {
          result[0] += 4842127;
          result[1] += 0;
          result[2] += 195864066;
          result[3] += 11621106;
          result[4] += 242106;
          result[5] += 2178957;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 3067833;
          result[2] += 0;
          result[3] += 0;
          result[4] += 206567474;
          result[5] += 5113056;
        } else {
          result[0] += 4129776;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66076419;
          result[5] += 144542168;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 24403223;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 180583852;
          result[5] += 9761289;
        } else {
          result[0] += 174263017;
          result[1] += 8801162;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28163719;
          result[5] += 3520464;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 70121915;
          result[4] += 83269774;
          result[5] += 61356675;
        } else {
          result[0] += 508882;
          result[1] += 1526647;
          result[2] += 254441;
          result[3] += 6615470;
          result[4] += 12722059;
          result[5] += 193120863;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3976821;
          result[3] += 33802983;
          result[4] += 15907286;
          result[5] += 161061273;
        } else {
          result[0] += 2032318;
          result[1] += 7451836;
          result[2] += 4064637;
          result[3] += 130068410;
          result[4] += 1354879;
          result[5] += 69776282;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 8103711;
          result[2] += 0;
          result[3] += 0;
          result[4] += 206644652;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 203445819;
          result[2] += 11302545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 97612893;
          result[2] += 0;
          result[3] += 39045157;
          result[4] += 58567735;
          result[5] += 19522578;
        } else {
          result[0] += 0;
          result[1] += 213674622;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1073741;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 167228873;
          result[1] += 1324585;
          result[2] += 6457352;
          result[3] += 9106522;
          result[4] += 24504824;
          result[5] += 6126206;
        } else {
          result[0] += 14810232;
          result[1] += 162912552;
          result[2] += 18512790;
          result[3] += 7405116;
          result[4] += 11107674;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 5718151;
          result[1] += 1270700;
          result[2] += 87678326;
          result[3] += 67347120;
          result[4] += 14613054;
          result[5] += 38121011;
        } else {
          result[0] += 9027033;
          result[1] += 1187767;
          result[2] += 192655889;
          result[3] += 11402568;
          result[4] += 0;
          result[5] += 475107;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 5174659;
          result[1] += 3449772;
          result[2] += 862443;
          result[3] += 0;
          result[4] += 200949273;
          result[5] += 4312216;
        } else {
          result[0] += 52181845;
          result[1] += 2006994;
          result[2] += 0;
          result[3] += 28097916;
          result[4] += 56195833;
          result[5] += 76265774;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 250874;
          result[2] += 250874;
          result[3] += 8278850;
          result[4] += 11540215;
          result[5] += 194427549;
        } else {
          result[0] += 0;
          result[1] += 10455912;
          result[2] += 14477417;
          result[3] += 98929021;
          result[4] += 10455912;
          result[5] += 80430099;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 187904819;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 209182532;
          result[2] += 0;
          result[3] += 2319096;
          result[4] += 3246735;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 26162237;
          result[1] += 47964101;
          result[2] += 0;
          result[3] += 9810838;
          result[4] += 125360720;
          result[5] += 5450466;
        } else {
          result[0] += 164375291;
          result[1] += 589158;
          result[2] += 4418690;
          result[3] += 18411210;
          result[4] += 13108782;
          result[5] += 13845230;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 36342030;
          result[4] += 9911462;
          result[5] += 161887228;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9988296;
          result[3] += 134841996;
          result[4] += 0;
          result[5] += 69918072;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 8947848;
          result[1] += 0;
          result[2] += 0;
          result[3] += 187904819;
          result[4] += 0;
          result[5] += 17895697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 160085144;
          result[3] += 35140641;
          result[4] += 0;
          result[5] += 19522578;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6710886;
          result[3] += 161061273;
          result[4] += 0;
          result[5] += 46976204;
        } else {
          result[0] += 2718333;
          result[1] += 16310002;
          result[2] += 100578348;
          result[3] += 38056672;
          result[4] += 29901671;
          result[5] += 27183337;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 2451465;
          result[1] += 0;
          result[2] += 194891495;
          result[3] += 16915110;
          result[4] += 0;
          result[5] += 490293;
        } else {
          result[0] += 82595524;
          result[1] += 0;
          result[2] += 132152839;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2597762;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 189636660;
          result[5] += 22513941;
        } else {
          result[0] += 54096916;
          result[1] += 36064610;
          result[2] += 9835802;
          result[3] += 31146709;
          result[4] += 78686423;
          result[5] += 4917901;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3959898;
          result[4] += 6701367;
          result[5] += 204087098;
        } else {
          result[0] += 4219946;
          result[1] += 937765;
          result[2] += 2344414;
          result[3] += 82054506;
          result[4] += 29539622;
          result[5] += 95652110;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 991909;
          result[1] += 213260500;
          result[2] += 0;
          result[3] += 495954;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 166446812;
          result[1] += 11612568;
          result[2] += 336596;
          result[3] += 5385538;
          result[4] += 28274079;
          result[5] += 2692769;
        } else {
          result[0] += 42506892;
          result[1] += 2656680;
          result[2] += 45163573;
          result[3] += 49591374;
          result[4] += 11512283;
          result[5] += 63317559;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 11302545;
          result[1] += 45210182;
          result[2] += 56512727;
          result[3] += 22605091;
          result[4] += 79117818;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 5506368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11012736;
          result[5] += 198229259;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36909875;
          result[3] += 137573171;
          result[4] += 3355443;
          result[5] += 36909875;
        } else {
          result[0] += 11302545;
          result[1] += 0;
          result[2] += 129979273;
          result[3] += 62164000;
          result[4] += 0;
          result[5] += 11302545;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 107374182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 107374182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 666920;
          result[1] += 0;
          result[2] += 172732380;
          result[3] += 31345258;
          result[4] += 0;
          result[5] += 10003805;
        } else {
          result[0] += 1460873;
          result[1] += 0;
          result[2] += 205252688;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 365218;
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
