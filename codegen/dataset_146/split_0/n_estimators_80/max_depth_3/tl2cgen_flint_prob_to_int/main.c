
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 195225;
        result[1] += 5075870;
        result[2] += 0;
        result[3] += 390451;
        result[4] += 44511479;
        result[5] += 3514064;
      } else {
        result[0] += 1544298;
        result[1] += 317943;
        result[2] += 1953083;
        result[3] += 7221867;
        result[4] += 2816074;
        result[5] += 39833823;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 500190;
        result[1] += 42349444;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10587361;
        result[5] += 250095;
      } else {
        result[0] += 40565246;
        result[1] += 787310;
        result[2] += 1349675;
        result[3] += 3074260;
        result[4] += 4723864;
        result[5] += 3186733;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3739399;
        result[3] += 33921694;
        result[4] += 1869699;
        result[5] += 14156297;
      } else {
        result[0] += 1403584;
        result[1] += 1754480;
        result[2] += 18597489;
        result[3] += 8772400;
        result[4] += 6667024;
        result[5] += 16492112;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2749037;
        result[1] += 0;
        result[2] += 41073858;
        result[3] += 8732237;
        result[4] += 0;
        result[5] += 1131956;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51741265;
        result[3] += 1768932;
        result[4] += 0;
        result[5] += 176893;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6507526;
        result[1] += 650752;
        result[2] += 650752;
        result[3] += 0;
        result[4] += 40183974;
        result[5] += 5694085;
      } else {
        result[0] += 0;
        result[1] += 589428;
        result[2] += 245595;
        result[3] += 8301114;
        result[4] += 2308594;
        result[5] += 42242359;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 50132466;
        result[2] += 0;
        result[3] += 245146;
        result[4] += 3309478;
        result[5] += 0;
      } else {
        result[0] += 35861889;
        result[1] += 1510610;
        result[2] += 2537825;
        result[3] += 4169284;
        result[4] += 5679894;
        result[5] += 3927586;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 1136234;
        result[2] += 14202934;
        result[3] += 23860929;
        result[4] += 2840586;
        result[5] += 11646406;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42264305;
        result[3] += 10280506;
        result[4] += 0;
        result[5] += 1142278;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1622412;
        result[1] += 294984;
        result[2] += 39085382;
        result[3] += 9734472;
        result[4] += 442476;
        result[5] += 2507364;
      } else {
        result[0] += 182609;
        result[1] += 0;
        result[2] += 52134913;
        result[3] += 1186959;
        result[4] += 0;
        result[5] += 182609;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7438572;
        result[1] += 161708;
        result[2] += 0;
        result[3] += 323416;
        result[4] += 39780194;
        result[5] += 5983199;
      } else {
        result[0] += 135118;
        result[1] += 0;
        result[2] += 360316;
        result[3] += 8602545;
        result[4] += 2837488;
        result[5] += 41751622;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 45507096;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8179994;
        result[5] += 0;
      } else {
        result[0] += 36485109;
        result[1] += 1073091;
        result[2] += 2796541;
        result[3] += 4910206;
        result[4] += 4227330;
        result[5] += 4194812;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7953643;
        result[3] += 29826161;
        result[4] += 0;
        result[5] += 15907286;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30678337;
        result[3] += 12271335;
        result[4] += 3067833;
        result[5] += 7669584;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 248551;
        result[1] += 0;
        result[2] += 41508075;
        result[3] += 10687707;
        result[4] += 0;
        result[5] += 1242756;
      } else {
        result[0] += 1108378;
        result[1] += 0;
        result[2] += 50154134;
        result[3] += 2147483;
        result[4] += 0;
        result[5] += 277094;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4723204;
        result[1] += 2519042;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40619558;
        result[5] += 5825285;
      } else {
        result[0] += 0;
        result[1] += 1165000;
        result[2] += 679583;
        result[3] += 8494792;
        result[4] += 2621250;
        result[5] += 40726464;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 52153174;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1533916;
        result[5] += 0;
      } else {
        result[0] += 32007407;
        result[1] += 1365649;
        result[2] += 3357221;
        result[3] += 4580615;
        result[4] += 6885148;
        result[5] += 5491048;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 2556528;
        result[1] += 6391320;
        result[2] += 3834792;
        result[3] += 0;
        result[4] += 14060904;
        result[5] += 26843545;
      } else {
        result[0] += 2105376;
        result[1] += 2105376;
        result[2] += 20702865;
        result[3] += 18597489;
        result[4] += 1754480;
        result[5] += 8421504;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1389957;
        result[1] += 0;
        result[2] += 42567434;
        result[3] += 8860976;
        result[4] += 0;
        result[5] += 868723;
      } else {
        result[0] += 302178;
        result[1] += 0;
        result[2] += 51269661;
        result[3] += 2014524;
        result[4] += 0;
        result[5] += 100726;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13781284;
        result[1] += 479349;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35471828;
        result[5] += 3954629;
      } else {
        result[0] += 104449;
        result[1] += 1305619;
        result[2] += 1201170;
        result[3] += 5013580;
        result[4] += 2872363;
        result[5] += 43189907;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 31361490;
        result[1] += 2057402;
        result[2] += 2474443;
        result[3] += 6922882;
        result[4] += 5199112;
        result[5] += 5671758;
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 1220161;
        result[2] += 0;
        result[3] += 23183062;
        result[4] += 0;
        result[5] += 29283867;
      } else {
        result[0] += 169895;
        result[1] += 509687;
        result[2] += 34488859;
        result[3] += 13081981;
        result[4] += 1189271;
        result[5] += 4247396;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42740000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13421772;
        result[3] += 0;
        result[4] += 13421772;
        result[5] += 26843545;
      } else {
        result[0] += 392449;
        result[1] += 0;
        result[2] += 50312025;
        result[3] += 2825636;
        result[4] += 0;
        result[5] += 156979;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 365218;
        result[1] += 913045;
        result[2] += 0;
        result[3] += 1826091;
        result[4] += 45104460;
        result[5] += 5478274;
      } else {
        result[0] += 2084522;
        result[1] += 212706;
        result[2] += 510495;
        result[3] += 7785053;
        result[4] += 3233137;
        result[5] += 39861176;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 48046813;
        result[2] += 104449;
        result[3] += 104449;
        result[4] += 5431378;
        result[5] += 0;
      } else {
        result[0] += 36425671;
        result[1] += 1868854;
        result[2] += 1597021;
        result[3] += 4281375;
        result[4] += 5776459;
        result[5] += 3737708;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4473924;
        result[3] += 40265318;
        result[4] += 0;
        result[5] += 8947848;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21872518;
        result[3] += 20679472;
        result[4] += 0;
        result[5] += 11135100;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37938877;
        result[3] += 13242815;
        result[4] += 0;
        result[5] += 2505397;
      } else {
        result[0] += 1227502;
        result[1] += 0;
        result[2] += 49487739;
        result[3] += 2584216;
        result[4] += 258421;
        result[5] += 129210;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1029145;
        result[1] += 1543718;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47512218;
        result[5] += 3602009;
      } else {
        result[0] += 2227491;
        result[1] += 318213;
        result[2] += 45459;
        result[3] += 8409916;
        result[4] += 1636524;
        result[5] += 41049486;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 341955;
        result[1] += 50609487;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2621662;
        result[5] += 113985;
      } else {
        result[0] += 32270769;
        result[1] += 2340581;
        result[2] += 4476362;
        result[3] += 5149279;
        result[4] += 5617395;
        result[5] += 3832702;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42700000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6710886;
        result[3] += 16404388;
        result[4] += 1491308;
        result[5] += 29080507;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 4030562;
        result[1] += 1451002;
        result[2] += 35146504;
        result[3] += 9350904;
        result[4] += 483667;
        result[5] += 3224449;
      } else {
        result[0] += 87154;
        result[1] += 0;
        result[2] += 50723842;
        result[3] += 2876094;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 544125;
        result[1] += 1088251;
        result[2] += 725501;
        result[3] += 725501;
        result[4] += 48789957;
        result[5] += 1813753;
      } else {
        result[0] += 2716696;
        result[1] += 1164298;
        result[2] += 862443;
        result[3] += 8322577;
        result[4] += 2846062;
        result[5] += 37775013;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 372827;
        result[1] += 43154727;
        result[2] += 0;
        result[3] += 1677721;
        result[4] += 8202194;
        result[5] += 279620;
      } else {
        result[0] += 38772135;
        result[1] += 1012327;
        result[2] += 1990910;
        result[3] += 3475657;
        result[4] += 4690449;
        result[5] += 3745611;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7895160;
        result[3] += 0;
        result[4] += 3158064;
        result[5] += 42633866;
      } else {
        result[0] += 0;
        result[1] += 1988410;
        result[2] += 8947848;
        result[3] += 28831956;
        result[4] += 1988410;
        result[5] += 11930464;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 1533916;
        result[2] += 23775711;
        result[3] += 17640044;
        result[4] += 3067833;
        result[5] += 7669584;
      } else {
        result[0] += 651830;
        result[1] += 59257;
        result[2] += 48472450;
        result[3] += 3377664;
        result[4] += 59257;
        result[5] += 1066630;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 13421772;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 13421772;
      } else {
        result[0] += 0;
        result[1] += 53334659;
        result[2] += 0;
        result[3] += 117477;
        result[4] += 234954;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1876367;
        result[1] += 919037;
        result[2] += 306345;
        result[3] += 6203501;
        result[4] += 10530634;
        result[5] += 33851204;
      } else {
        result[0] += 34979821;
        result[1] += 2034068;
        result[2] += 1356045;
        result[3] += 4376330;
        result[4] += 6225483;
        result[5] += 4715341;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 7856647;
        result[2] += 7201926;
        result[3] += 7201926;
        result[4] += 5892485;
        result[5] += 25534104;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9373936;
        result[3] += 33234865;
        result[4] += 426088;
        result[5] += 10652200;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2321603;
        result[1] += 1451002;
        result[2] += 29890650;
        result[3] += 14219824;
        result[4] += 4062806;
        result[5] += 1741202;
      } else {
        result[0] += 1172776;
        result[1] += 0;
        result[2] += 47823209;
        result[3] += 4235025;
        result[4] += 0;
        result[5] += 456079;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 2815053;
        result[2] += 1407526;
        result[3] += 201075;
        result[4] += 44839780;
        result[5] += 4423655;
      } else {
        result[0] += 44212898;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3158064;
        result[4] += 1579032;
        result[5] += 4737096;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 437496;
        result[2] += 62499;
        result[3] += 2062484;
        result[4] += 4874962;
        result[5] += 46249647;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3770665;
        result[3] += 29447100;
        result[4] += 0;
        result[5] += 20469325;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 292307;
        result[1] += 43066595;
        result[2] += 0;
        result[3] += 487178;
        result[4] += 9841009;
        result[5] += 0;
      } else {
        result[0] += 37517090;
        result[1] += 1714490;
        result[2] += 672349;
        result[3] += 3933243;
        result[4] += 5311559;
        result[5] += 4538357;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11829359;
        result[3] += 28511788;
        result[4] += 909950;
        result[5] += 12435992;
      } else {
        result[0] += 1751786;
        result[1] += 0;
        result[2] += 47761932;
        result[3] += 3503572;
        result[4] += 103046;
        result[5] += 566754;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 216480;
        result[1] += 4762564;
        result[2] += 216480;
        result[3] += 0;
        result[4] += 47409165;
        result[5] += 1082401;
      } else {
        result[0] += 821217;
        result[1] += 102652;
        result[2] += 153978;
        result[3] += 5697196;
        result[4] += 3182217;
        result[5] += 43729829;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42500000))) ) ) {
        result[0] += 0;
        result[1] += 51130563;
        result[2] += 0;
        result[3] += 511305;
        result[4] += 2045222;
        result[5] += 0;
      } else {
        result[0] += 30112701;
        result[1] += 1354550;
        result[2] += 3047738;
        result[3] += 7502126;
        result[4] += 6355968;
        result[5] += 5314006;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 5835553;
        result[2] += 5835553;
        result[3] += 9336885;
        result[4] += 2334221;
        result[5] += 30344877;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28095317;
        result[3] += 18915659;
        result[4] += 278171;
        result[5] += 6397943;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29080507;
        result[3] += 6710886;
        result[4] += 0;
        result[5] += 17895697;
      } else {
        result[0] += 817569;
        result[1] += 68130;
        result[2] += 49462979;
        result[3] += 3202148;
        result[4] += 68130;
        result[5] += 68130;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 4396787;
        result[1] += 1388459;
        result[2] += 0;
        result[3] += 0;
        result[4] += 43505056;
        result[5] += 4396787;
      } else {
        result[0] += 50410;
        result[1] += 1411491;
        result[2] += 403283;
        result[3] += 6452533;
        result[4] += 3377497;
        result[5] += 41991875;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 52274272;
        result[2] += 0;
        result[3] += 128438;
        result[4] += 1284380;
        result[5] += 0;
      } else {
        result[0] += 33474453;
        result[1] += 2064888;
        result[2] += 1832224;
        result[3] += 4682351;
        result[4] += 6659991;
        result[5] += 4973181;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 2651214;
        result[1] += 8616446;
        result[2] += 5302428;
        result[3] += 2651214;
        result[4] += 15244482;
        result[5] += 19221304;
      } else {
        result[0] += 1323273;
        result[1] += 0;
        result[2] += 19471022;
        result[3] += 23440842;
        result[4] += 189039;
        result[5] += 9262913;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 13059022;
        result[1] += 0;
        result[2] += 30471051;
        result[3] += 3627506;
        result[4] += 725501;
        result[5] += 5804009;
      } else {
        result[0] += 324982;
        result[1] += 0;
        result[2] += 49657309;
        result[3] += 3509809;
        result[4] += 0;
        result[5] += 194989;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 240749;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52964843;
        result[5] += 481498;
      } else {
        result[0] += 0;
        result[1] += 3158064;
        result[2] += 0;
        result[3] += 6316128;
        result[4] += 26843545;
        result[5] += 17369353;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
        result[0] += 48491566;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5195524;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 181990;
        result[2] += 272985;
        result[3] += 9008511;
        result[4] += 4140275;
        result[5] += 40083328;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 53439113;
        result[2] += 0;
        result[3] += 0;
        result[4] += 247977;
        result[5] += 0;
      } else {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10737418;
        result[4] += 21474836;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        result[0] += 40956796;
        result[1] += 2198546;
        result[2] += 815589;
        result[3] += 1773021;
        result[4] += 6347416;
        result[5] += 1595719;
      } else {
        result[0] += 2459844;
        result[1] += 351406;
        result[2] += 38303299;
        result[3] += 7809031;
        result[4] += 1132309;
        result[5] += 3631199;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7016853;
        result[1] += 3426835;
        result[2] += 0;
        result[3] += 2284557;
        result[4] += 37368826;
        result[5] += 3590018;
      } else {
        result[0] += 280839;
        result[1] += 234032;
        result[2] += 561678;
        result[3] += 7629464;
        result[4] += 4072168;
        result[5] += 40908908;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 33162360;
        result[1] += 2101196;
        result[2] += 2283909;
        result[3] += 4415557;
        result[4] += 6334041;
        result[5] += 5390025;
      } else {
        result[0] += 409825;
        result[1] += 53277266;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 858993;
        result[2] += 7730941;
        result[3] += 28346784;
        result[4] += 858993;
        result[5] += 15891378;
      } else {
        result[0] += 715827;
        result[1] += 0;
        result[2] += 16464041;
        result[3] += 3579139;
        result[4] += 12884901;
        result[5] += 20043180;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1045004;
        result[1] += 0;
        result[2] += 44151427;
        result[3] += 7706906;
        result[4] += 0;
        result[5] += 783753;
      } else {
        result[0] += 184175;
        result[1] += 0;
        result[2] += 51292812;
        result[3] += 1841752;
        result[4] += 0;
        result[5] += 368350;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7110873;
        result[1] += 2844349;
        result[2] += 355543;
        result[3] += 888859;
        result[4] += 37687626;
        result[5] += 4799839;
      } else {
        result[0] += 187553;
        result[1] += 140664;
        result[2] += 750212;
        result[3] += 8158562;
        result[4] += 3844839;
        result[5] += 40605258;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        result[0] += 384165;
        result[1] += 41874010;
        result[2] += 0;
        result[3] += 384165;
        result[4] += 10852667;
        result[5] += 192082;
      } else {
        result[0] += 38783751;
        result[1] += 1753334;
        result[2] += 1753334;
        result[3] += 3296268;
        result[4] += 4593735;
        result[5] += 3506668;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7290839;
        result[3] += 5302428;
        result[4] += 9942053;
        result[5] += 31151768;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10157017;
        result[3] += 34824059;
        result[4] += 0;
        result[5] += 8706014;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 389036;
        result[1] += 389036;
        result[2] += 26065471;
        result[3] += 19840881;
        result[4] += 1167110;
        result[5] += 5835553;
      } else {
        result[0] += 1746868;
        result[1] += 524060;
        result[2] += 47689509;
        result[3] += 2853218;
        result[4] += 116457;
        result[5] += 756976;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9210426;
        result[1] += 242379;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37690034;
        result[5] += 6544250;
      } else {
        result[0] += 55634;
        result[1] += 333805;
        result[2] += 222537;
        result[3] += 3504960;
        result[4] += 4283840;
        result[5] += 45286313;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425c0000))) ) ) {
        result[0] += 0;
        result[1] += 53226257;
        result[2] += 0;
        result[3] += 0;
        result[4] += 460833;
        result[5] += 0;
      } else {
        result[0] += 29931218;
        result[1] += 1861467;
        result[2] += 3782029;
        result[3] += 8184548;
        result[4] += 4697989;
        result[5] += 5229837;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10945911;
        result[3] += 16679484;
        result[4] += 3648637;
        result[5] += 22413057;
      } else {
        result[0] += 1147160;
        result[1] += 0;
        result[2] += 39921170;
        result[3] += 11701032;
        result[4] += 0;
        result[5] += 917728;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 8134407;
        result[1] += 6507526;
        result[2] += 27656986;
        result[3] += 6507526;
        result[4] += 0;
        result[5] += 4880644;
      } else {
        result[0] += 1263225;
        result[1] += 140358;
        result[2] += 50248310;
        result[3] += 1965017;
        result[4] += 0;
        result[5] += 70179;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1104672;
        result[1] += 1988410;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49710269;
        result[5] += 883738;
      } else {
        result[0] += 2413414;
        result[1] += 637505;
        result[2] += 136608;
        result[3] += 7376852;
        result[4] += 3961642;
        result[5] += 39161067;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52082649;
        result[2] += 0;
        result[3] += 740511;
        result[4] += 863930;
        result[5] += 0;
      } else {
        result[0] += 33012930;
        result[1] += 2688835;
        result[2] += 2897967;
        result[3] += 4332013;
        result[4] += 5885563;
        result[5] += 4869780;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 599855;
        result[1] += 2099495;
        result[2] += 5698629;
        result[3] += 20994951;
        result[4] += 7798124;
        result[5] += 16496033;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 38242859;
        result[3] += 8825275;
        result[4] += 0;
        result[5] += 6618956;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 263818;
        result[1] += 263818;
        result[2] += 42079071;
        result[3] += 9893198;
        result[4] += 0;
        result[5] += 1187183;
      } else {
        result[0] += 1255838;
        result[1] += 0;
        result[2] += 51070761;
        result[3] += 1255838;
        result[4] += 0;
        result[5] += 104653;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 229432;
        result[1] += 917728;
        result[2] += 0;
        result[3] += 229432;
        result[4] += 50475042;
        result[5] += 1835456;
      } else {
        result[0] += 1457756;
        result[1] += 124950;
        result[2] += 458152;
        result[3] += 8538288;
        result[4] += 3831817;
        result[5] += 39276126;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 32135600;
        result[1] += 3508382;
        result[2] += 3184077;
        result[3] += 4422330;
        result[4] += 7694854;
        result[5] += 2741844;
      } else {
        result[0] += 538216;
        result[1] += 53014320;
        result[2] += 0;
        result[3] += 0;
        result[4] += 134554;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8259552;
        result[3] += 0;
        result[4] += 0;
        result[5] += 45427538;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13805252;
        result[3] += 21474836;
        result[4] += 0;
        result[5] += 18407002;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 0;
        result[1] += 40265318;
        result[2] += 0;
        result[3] += 0;
        result[4] += 13421772;
        result[5] += 0;
      } else {
        result[0] += 715827;
        result[1] += 0;
        result[2] += 47740213;
        result[3] += 4515222;
        result[4] += 0;
        result[5] += 715827;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 432960;
        result[2] += 0;
        result[3] += 1515361;
        result[4] += 49790447;
        result[5] += 1948321;
      } else {
        result[0] += 2812180;
        result[1] += 1448699;
        result[2] += 0;
        result[3] += 8393934;
        result[4] += 2641745;
        result[5] += 38390531;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 187717;
        result[1] += 42424065;
        result[2] += 0;
        result[3] += 844726;
        result[4] += 9573572;
        result[5] += 657009;
      } else {
        result[0] += 35361368;
        result[1] += 959288;
        result[2] += 4399496;
        result[3] += 3969470;
        result[4] += 4796443;
        result[5] += 4201023;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 577280;
        result[2] += 0;
        result[3] += 15009294;
        result[4] += 7504647;
        result[5] += 30595869;
      } else {
        result[0] += 4210752;
        result[1] += 4210752;
        result[2] += 29475265;
        result[3] += 4210752;
        result[4] += 2105376;
        result[5] += 9474192;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 35384673;
        result[1] += 0;
        result[2] += 18302417;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 631612;
        result[1] += 0;
        result[2] += 47083866;
        result[3] += 5512257;
        result[4] += 0;
        result[5] += 459354;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 473014;
        result[1] += 2365070;
        result[2] += 0;
        result[3] += 236507;
        result[4] += 49193458;
        result[5] += 1419042;
      } else {
        result[0] += 1577667;
        result[1] += 649627;
        result[2] += 510421;
        result[3] += 6542679;
        result[4] += 2273697;
        result[5] += 42132998;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 34729610;
        result[1] += 2350356;
        result[2] += 2350356;
        result[3] += 4174975;
        result[4] += 6679960;
        result[5] += 3401831;
      } else {
        result[0] += 521233;
        result[1] += 53165857;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 1760232;
        result[2] += 880116;
        result[3] += 3520464;
        result[4] += 16722208;
        result[5] += 30804068;
      } else {
        result[0] += 0;
        result[1] += 460833;
        result[2] += 16129169;
        result[3] += 26267503;
        result[4] += 0;
        result[5] += 10829584;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1927989;
        result[1] += 444920;
        result[2] += 35890265;
        result[3] += 9936561;
        result[4] += 2521216;
        result[5] += 2966137;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51246768;
        result[3] += 2187875;
        result[4] += 168298;
        result[5] += 84149;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 24525239;
        result[1] += 3843507;
        result[2] += 0;
        result[3] += 0;
        result[4] += 22389957;
        result[5] += 2928386;
      } else {
        result[0] += 3323910;
        result[1] += 801299;
        result[2] += 1840021;
        result[3] += 10832387;
        result[4] += 5816843;
        result[5] += 31072628;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 129055;
        result[1] += 53428980;
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
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 52927368;
        result[1] += 0;
        result[2] += 168827;
        result[3] += 0;
        result[4] += 590895;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25641595;
        result[3] += 19231196;
        result[4] += 0;
        result[5] += 8814298;
      } else {
        result[0] += 2009960;
        result[1] += 0;
        result[2] += 47181167;
        result[3] += 3596770;
        result[4] += 158681;
        result[5] += 740511;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11351748;
        result[1] += 1201949;
        result[2] += 0;
        result[3] += 667749;
        result[4] += 35257194;
        result[5] += 5208449;
      } else {
        result[0] += 383175;
        result[1] += 1106950;
        result[2] += 383175;
        result[3] += 9323927;
        result[4] += 3661451;
        result[5] += 38828411;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 283060;
        result[1] += 44440456;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8680513;
        result[5] += 283060;
      } else {
        result[0] += 38078268;
        result[1] += 1016388;
        result[2] += 4210752;
        result[3] += 3738857;
        result[4] += 2903967;
        result[5] += 3738857;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 1400532;
        result[1] += 3734754;
        result[2] += 12137951;
        result[3] += 10737418;
        result[4] += 9336885;
        result[5] += 16339549;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33812543;
        result[3] += 16519104;
        result[4] += 0;
        result[5] += 3355443;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 4222580;
        result[1] += 1206451;
        result[2] += 39209673;
        result[3] += 7841934;
        result[4] += 1206451;
        result[5] += 0;
      } else {
        result[0] += 763685;
        result[1] += 0;
        result[2] += 50174137;
        result[3] += 2520162;
        result[4] += 0;
        result[5] += 229105;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51690463;
        result[5] += 1996627;
      } else {
        result[0] += 1621569;
        result[1] += 876523;
        result[2] += 175304;
        result[3] += 8283151;
        result[4] += 3067833;
        result[5] += 39662708;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 461824;
        result[1] += 48491566;
        result[2] += 115456;
        result[3] += 461824;
        result[4] += 4156419;
        result[5] += 0;
      } else {
        result[0] += 33753301;
        result[1] += 2433232;
        result[2] += 2838771;
        result[3] += 3743434;
        result[4] += 6114276;
        result[5] += 4804074;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 367719;
        result[2] += 5515797;
        result[3] += 31991622;
        result[4] += 2574038;
        result[5] += 13237912;
      } else {
        result[0] += 3024624;
        result[1] += 3024624;
        result[2] += 26465467;
        result[3] += 12854655;
        result[4] += 1512312;
        result[5] += 6805405;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 4120453;
        result[1] += 0;
        result[2] += 40113831;
        result[3] += 7634958;
        result[4] += 0;
        result[5] += 1817847;
      } else {
        result[0] += 104653;
        result[1] += 0;
        result[2] += 52221946;
        result[3] += 1151185;
        result[4] += 0;
        result[5] += 209306;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1445421;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51415714;
        result[5] += 825955;
      } else {
        result[0] += 1679033;
        result[1] += 545685;
        result[2] += 1091371;
        result[3] += 8227263;
        result[4] += 2560525;
        result[5] += 39583211;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 45774254;
        result[2] += 0;
        result[3] += 200324;
        result[4] += 7712511;
        result[5] += 0;
      } else {
        result[0] += 35890083;
        result[1] += 822412;
        result[2] += 3815994;
        result[3] += 4506820;
        result[4] += 4638406;
        result[5] += 4013373;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 0;
        result[1] += 5694085;
        result[2] += 9761289;
        result[3] += 16675535;
        result[4] += 406720;
        result[5] += 21149460;
      } else {
        result[0] += 4628197;
        result[1] += 2314098;
        result[2] += 37025580;
        result[3] += 4165377;
        result[4] += 0;
        result[5] += 5553837;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 45427538;
        result[1] += 0;
        result[2] += 8259552;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 62572;
        result[1] += 0;
        result[2] += 49369597;
        result[3] += 3942059;
        result[4] += 0;
        result[5] += 312861;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 213892;
        result[1] += 3422284;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47698092;
        result[5] += 2352820;
      } else {
        result[0] += 2085816;
        result[1] += 589469;
        result[2] += 408094;
        result[3] += 8116545;
        result[4] += 3899569;
        result[5] += 38587596;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 52433252;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1253838;
        result[5] += 0;
      } else {
        result[0] += 34159016;
        result[1] += 1602148;
        result[2] += 3174067;
        result[3] += 4413465;
        result[4] += 5411030;
        result[5] += 4927362;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2753184;
        result[1] += 0;
        result[2] += 6882960;
        result[3] += 6882960;
        result[4] += 5506368;
        result[5] += 31661617;
      } else {
        result[0] += 479349;
        result[1] += 1438047;
        result[2] += 18215263;
        result[3] += 23967451;
        result[4] += 958698;
        result[5] += 8628282;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 749122;
        result[1] += 0;
        result[2] += 41701135;
        result[3] += 9738588;
        result[4] += 0;
        result[5] += 1498244;
      } else {
        result[0] += 1242117;
        result[1] += 0;
        result[2] += 49684711;
        result[3] += 2760261;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 466844;
        result[1] += 2801065;
        result[2] += 1400532;
        result[3] += 700266;
        result[4] += 45750738;
        result[5] += 2567643;
      } else {
        result[0] += 1242117;
        result[1] += 230021;
        result[2] += 184017;
        result[3] += 8188776;
        result[4] += 3266309;
        result[5] += 40575847;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 358511;
        result[1] += 43917653;
        result[2] += 0;
        result[3] += 268883;
        result[4] += 8962786;
        result[5] += 179255;
      } else {
        result[0] += 37271973;
        result[1] += 1062154;
        result[2] += 1544952;
        result[3] += 4441737;
        result[4] += 4409551;
        result[5] += 4956721;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15772478;
        result[3] += 24265351;
        result[4] += 0;
        result[5] += 13649260;
      } else {
        result[0] += 2386092;
        result[1] += 0;
        result[2] += 42353149;
        result[3] += 5368709;
        result[4] += 596523;
        result[5] += 2982616;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36222615;
        result[3] += 10349318;
        result[4] += 646832;
        result[5] += 6468324;
      } else {
        result[0] += 991756;
        result[1] += 0;
        result[2] += 49257244;
        result[3] += 3305855;
        result[4] += 0;
        result[5] += 132234;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 250874;
        result[2] += 250874;
        result[3] += 0;
        result[4] += 53185342;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 2825636;
        result[2] += 0;
        result[3] += 9889727;
        result[4] += 21192272;
        result[5] += 19779454;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 458864;
        result[3] += 1442144;
        result[4] += 2359872;
        result[5] += 49426210;
      } else {
        result[0] += 5435263;
        result[1] += 1220161;
        result[2] += 887389;
        result[3] += 17747798;
        result[4] += 4436949;
        result[5] += 23959528;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 419430;
        result[1] += 18454937;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34812723;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 52111369;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1575721;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        result[0] += 43326424;
        result[1] += 588674;
        result[2] += 1020368;
        result[3] += 2511676;
        result[4] += 4709393;
        result[5] += 1530553;
      } else {
        result[0] += 1323564;
        result[1] += 165445;
        result[2] += 38590181;
        result[3] += 9264952;
        result[4] += 785866;
        result[5] += 3557080;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 167772;
        result[1] += 4697620;
        result[2] += 335544;
        result[3] += 167772;
        result[4] += 47143976;
        result[5] += 1174405;
      } else {
        result[0] += 2293594;
        result[1] += 127421;
        result[2] += 424739;
        result[3] += 8282423;
        result[4] += 4162448;
        result[5] += 38396463;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52568610;
        result[2] += 0;
        result[3] += 372827;
        result[4] += 745654;
        result[5] += 0;
      } else {
        result[0] += 35935983;
        result[1] += 2268938;
        result[2] += 1434769;
        result[3] += 4304309;
        result[4] += 5238578;
        result[5] += 4504510;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4473924;
        result[3] += 43247934;
        result[4] += 0;
        result[5] += 5965232;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12582911;
        result[3] += 15938355;
        result[4] += 0;
        result[5] += 25165823;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 735439;
        result[1] += 0;
        result[2] += 33830221;
        result[3] += 12012180;
        result[4] += 490293;
        result[5] += 6618956;
      } else {
        result[0] += 1217394;
        result[1] += 0;
        result[2] += 48878383;
        result[3] += 3286964;
        result[4] += 0;
        result[5] += 304348;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 907387;
        result[1] += 1814774;
        result[2] += 0;
        result[3] += 0;
        result[4] += 45823066;
        result[5] += 5141862;
      } else {
        result[0] += 4946219;
        result[1] += 206092;
        result[2] += 0;
        result[3] += 3658141;
        result[4] += 3503572;
        result[5] += 41373065;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 50100920;
        result[2] += 0;
        result[3] += 105475;
        result[4] += 3480695;
        result[5] += 0;
      } else {
        result[0] += 31419481;
        result[1] += 1224135;
        result[2] += 2856316;
        result[3] += 7986027;
        result[4] += 4342766;
        result[5] += 5858363;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6316128;
        result[3] += 34738706;
        result[4] += 0;
        result[5] += 12632256;
      } else {
        result[0] += 2684354;
        result[1] += 0;
        result[2] += 24830279;
        result[3] += 12750684;
        result[4] += 1342177;
        result[5] += 12079595;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39681763;
        result[3] += 11282069;
        result[4] += 0;
        result[5] += 2723258;
      } else {
        result[0] += 542293;
        result[1] += 0;
        result[2] += 50636688;
        result[3] += 2169175;
        result[4] += 0;
        result[5] += 338933;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 185768;
        result[1] += 3343832;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48485573;
        result[5] += 1671916;
      } else {
        result[0] += 1967589;
        result[1] += 421626;
        result[2] += 562168;
        result[3] += 8245137;
        result[4] += 3091926;
        result[5] += 39398641;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51118915;
        result[2] += 0;
        result[3] += 366882;
        result[4] += 2201293;
        result[5] += 0;
      } else {
        result[0] += 33399395;
        result[1] += 2480591;
        result[2] += 2628245;
        result[3] += 4547751;
        result[4] += 5610862;
        result[5] += 5020245;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1403584;
        result[1] += 1052688;
        result[2] += 8772400;
        result[3] += 18597489;
        result[4] += 7368816;
        result[5] += 16492112;
      } else {
        result[0] += 2113665;
        result[1] += 422733;
        result[2] += 38045970;
        result[3] += 9722859;
        result[4] += 0;
        result[5] += 3381864;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22866724;
        result[3] += 19884107;
        result[4] += 0;
        result[5] += 10936259;
      } else {
        result[0] += 134217;
        result[1] += 0;
        result[2] += 48788144;
        result[3] += 4160749;
        result[4] += 0;
        result[5] += 603979;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 598740;
        result[2] += 0;
        result[3] += 399160;
        result[4] += 49895066;
        result[5] += 2794123;
      } else {
        result[0] += 1192065;
        result[1] += 706409;
        result[2] += 485656;
        result[3] += 6887488;
        result[4] += 3796948;
        result[5] += 40618522;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 96213;
        result[1] += 41949053;
        result[2] += 96213;
        result[3] += 384853;
        result[4] += 11160757;
        result[5] += 0;
      } else {
        result[0] += 35318796;
        result[1] += 1795871;
        result[2] += 2709559;
        result[3] += 4788989;
        result[4] += 3969820;
        result[5] += 5104054;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45210182;
        result[4] += 0;
        result[5] += 8476909;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16777215;
        result[3] += 16777215;
        result[4] += 0;
        result[5] += 20132659;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1342177;
        result[1] += 0;
        result[2] += 37580963;
        result[3] += 12846553;
        result[4] += 191739;
        result[5] += 1725656;
      } else {
        result[0] += 717741;
        result[1] += 0;
        result[2] += 50600801;
        result[3] += 2153225;
        result[4] += 0;
        result[5] += 215322;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13588296;
        result[1] += 1998278;
        result[2] += 0;
        result[3] += 1332185;
        result[4] += 33970740;
        result[5] += 2797590;
      } else {
        result[0] += 284058;
        result[1] += 405798;
        result[2] += 202899;
        result[3] += 9252197;
        result[4] += 2840586;
        result[5] += 40701551;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 47675795;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5907652;
        result[5] += 103643;
      } else {
        result[0] += 40436660;
        result[1] += 1142278;
        result[2] += 1979949;
        result[3] += 2132253;
        result[4] += 5216405;
        result[5] += 2779544;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7730941;
        result[3] += 32641751;
        result[4] += 0;
        result[5] += 13314398;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35502753;
        result[3] += 9525129;
        result[4] += 0;
        result[5] += 8659208;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2126221;
        result[1] += 0;
        result[2] += 42524428;
        result[3] += 7707552;
        result[4] += 0;
        result[5] += 1328888;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52859544;
        result[3] += 827546;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 18207831;
        result[1] += 1144492;
        result[2] += 0;
        result[3] += 208089;
        result[4] += 30381067;
        result[5] += 3745611;
      } else {
        result[0] += 465372;
        result[1] += 846132;
        result[2] += 126919;
        result[3] += 7572883;
        result[4] += 4822953;
        result[5] += 39852828;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42580000))) ) ) {
        result[0] += 492542;
        result[1] += 52825142;
        result[2] += 0;
        result[3] += 0;
        result[4] += 369406;
        result[5] += 0;
      } else {
        result[0] += 37533100;
        result[1] += 3071252;
        result[2] += 2592615;
        result[3] += 3430230;
        result[4] += 4547049;
        result[5] += 2512843;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 488064;
        result[2] += 4636612;
        result[3] += 27575642;
        result[4] += 6344838;
        result[5] += 14641933;
      } else {
        result[0] += 419430;
        result[1] += 1258291;
        result[2] += 36490444;
        result[3] += 7969177;
        result[4] += 1258291;
        result[5] += 6291455;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 4668442;
        result[1] += 23342213;
        result[2] += 0;
        result[3] += 4668442;
        result[4] += 0;
        result[5] += 21007992;
      } else {
        result[0] += 1330085;
        result[1] += 0;
        result[2] += 47520330;
        result[3] += 4534382;
        result[4] += 0;
        result[5] += 302292;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 379414;
        result[1] += 1138242;
        result[2] += 0;
        result[3] += 2276484;
        result[4] += 45719395;
        result[5] += 4173554;
      } else {
        result[0] += 3389442;
        result[1] += 627674;
        result[2] += 0;
        result[3] += 7406558;
        result[4] += 3263907;
        result[5] += 38999508;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 46402411;
        result[2] += 0;
        result[3] += 99790;
        result[4] += 7085099;
        result[5] += 99790;
      } else {
        result[0] += 39783044;
        result[1] += 1019144;
        result[2] += 2984638;
        result[3] += 3057434;
        result[4] += 3821792;
        result[5] += 3021036;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 778073;
        result[3] += 5446516;
        result[4] += 12449180;
        result[5] += 35013320;
      } else {
        result[0] += 290200;
        result[1] += 290200;
        result[2] += 13349222;
        result[3] += 27569046;
        result[4] += 1451002;
        result[5] += 10737418;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 13421772;
        result[1] += 0;
        result[2] += 31082000;
        result[3] += 4238454;
        result[4] += 706409;
        result[5] += 4238454;
      } else {
        result[0] += 117092;
        result[1] += 0;
        result[2] += 49061921;
        result[3] += 4449529;
        result[4] += 0;
        result[5] += 58546;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6077783;
        result[1] += 844136;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39674422;
        result[5] += 7090747;
      } else {
        result[0] += 0;
        result[1] += 202021;
        result[2] += 202021;
        result[3] += 6818210;
        result[4] += 2171726;
        result[5] += 44293112;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 186413;
        result[1] += 43527554;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9786709;
        result[5] += 186413;
      } else {
        result[0] += 40498273;
        result[1] += 895979;
        result[2] += 1505245;
        result[3] += 3225526;
        result[4] += 4838289;
        result[5] += 2723777;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 314880;
        result[1] += 314880;
        result[2] += 8816648;
        result[3] += 24088342;
        result[4] += 2204162;
        result[5] += 17948177;
      } else {
        result[0] += 4400581;
        result[1] += 5720755;
        result[2] += 33004359;
        result[3] += 4400581;
        result[4] += 0;
        result[5] += 6160813;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 4473924;
        result[1] += 0;
        result[2] += 15658734;
        result[3] += 26843545;
        result[4] += 2236962;
        result[5] += 4473924;
      } else {
        result[0] += 1518300;
        result[1] += 0;
        result[2] += 47856818;
        result[3] += 4129776;
        result[4] += 0;
        result[5] += 182196;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4749796;
        result[1] += 3166530;
        result[2] += 0;
        result[3] += 863599;
        result[4] += 36702971;
        result[5] += 8204193;
      } else {
        result[0] += 339484;
        result[1] += 145493;
        result[2] += 872960;
        result[3] += 8293127;
        result[4] += 3879825;
        result[5] += 40156198;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52577853;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1109237;
        result[5] += 0;
      } else {
        result[0] += 33731760;
        result[1] += 1954550;
        result[2] += 2238275;
        result[3] += 4665701;
        result[4] += 6241951;
        result[5] += 4854851;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 8476909;
        result[2] += 2825636;
        result[3] += 0;
        result[4] += 9889727;
        result[5] += 32494818;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19667548;
        result[3] += 20199103;
        result[4] += 531555;
        result[5] += 13288883;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20364069;
        result[3] += 29620464;
        result[4] += 0;
        result[5] += 3702558;
      } else {
        result[0] += 487571;
        result[1] += 0;
        result[2] += 49028070;
        result[3] += 3575527;
        result[4] += 108349;
        result[5] += 487571;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 14286793;
        result[1] += 3125236;
        result[2] += 111615;
        result[3] += 1116155;
        result[4] += 29689742;
        result[5] += 5357547;
      } else {
        result[0] += 542293;
        result[1] += 271146;
        result[2] += 858631;
        result[3] += 7185393;
        result[4] += 4654688;
        result[5] += 40174936;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 199951;
        result[1] += 47088677;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5998557;
        result[5] += 399903;
      } else {
        result[0] += 42238804;
        result[1] += 743931;
        result[2] += 1446534;
        result[3] += 4215614;
        result[4] += 2934398;
        result[5] += 2107807;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        result[0] += 458864;
        result[1] += 2294320;
        result[2] += 2753184;
        result[3] += 11930464;
        result[4] += 5047504;
        result[5] += 31202753;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16777215;
        result[3] += 30478609;
        result[4] += 0;
        result[5] += 6431266;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2152266;
        result[1] += 0;
        result[2] += 41251773;
        result[3] += 8250354;
        result[4] += 358711;
        result[5] += 1673985;
      } else {
        result[0] += 762871;
        result[1] += 0;
        result[2] += 51493835;
        result[3] += 1048948;
        result[4] += 0;
        result[5] += 381435;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 19166182;
        result[1] += 871190;
        result[2] += 0;
        result[3] += 435595;
        result[4] += 29620464;
        result[5] += 3593659;
      } else {
        result[0] += 374851;
        result[1] += 541452;
        result[2] += 249901;
        result[3] += 7913535;
        result[4] += 5456174;
        result[5] += 39151175;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 526344;
        result[1] += 49686876;
        result[2] += 0;
        result[3] += 105268;
        result[4] += 3158064;
        result[5] += 210537;
      } else {
        result[0] += 39794186;
        result[1] += 1095654;
        result[2] += 2848702;
        result[3] += 3725226;
        result[4] += 3199312;
        result[5] += 3024007;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 2684354;
        result[2] += 3579139;
        result[3] += 1789569;
        result[4] += 12526987;
        result[5] += 33107039;
      } else {
        result[0] += 235469;
        result[1] += 470939;
        result[2] += 13657242;
        result[3] += 26843545;
        result[4] += 2119227;
        result[5] += 10360666;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 12303291;
        result[1] += 2236962;
        result[2] += 27962026;
        result[3] += 2236962;
        result[4] += 3914683;
        result[5] += 5033164;
      } else {
        result[0] += 174120;
        result[1] += 0;
        result[2] += 47534840;
        result[3] += 5281648;
        result[4] += 232160;
        result[5] += 464320;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 224632;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51440769;
        result[5] += 2021689;
      } else {
        result[0] += 2361340;
        result[1] += 1069286;
        result[2] += 0;
        result[3] += 6727593;
        result[4] += 3074198;
        result[5] += 40454671;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 115456;
        result[1] += 49877039;
        result[2] += 0;
        result[3] += 346368;
        result[4] += 3348227;
        result[5] += 0;
      } else {
        result[0] += 35406422;
        result[1] += 1451894;
        result[2] += 1517889;
        result[3] += 3332757;
        result[4] += 6797505;
        result[5] += 5180622;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 281084;
        result[1] += 281084;
        result[2] += 7027106;
        result[3] += 29232761;
        result[4] += 1124336;
        result[5] += 15740717;
      } else {
        result[0] += 4129776;
        result[1] += 1238932;
        result[2] += 32625232;
        result[3] += 7433597;
        result[4] += 1238932;
        result[5] += 7020619;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 617093;
        result[1] += 0;
        result[2] += 32088836;
        result[3] += 14193139;
        result[4] += 1234186;
        result[5] += 5553837;
      } else {
        result[0] += 1582612;
        result[1] += 0;
        result[2] += 48695774;
        result[3] += 2982616;
        result[4] += 0;
        result[5] += 426088;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6968236;
        result[1] += 475107;
        result[2] += 316738;
        result[3] += 158369;
        result[4] += 38642036;
        result[5] += 7126605;
      } else {
        result[0] += 189205;
        result[1] += 1087932;
        result[2] += 189205;
        result[3] += 8939964;
        result[4] += 2175864;
        result[5] += 41104918;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 52461358;
        result[2] += 0;
        result[3] += 367719;
        result[4] += 858012;
        result[5] += 0;
      } else {
        result[0] += 32942375;
        result[1] += 2781414;
        result[2] += 2578602;
        result[3] += 3853417;
        result[4] += 7504024;
        result[5] += 4027256;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9813769;
        result[3] += 34059552;
        result[4] += 0;
        result[5] += 9813769;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 38100516;
        result[3] += 12988812;
        result[4] += 0;
        result[5] += 2597762;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 12079595;
        result[1] += 0;
        result[2] += 22817013;
        result[3] += 2684354;
        result[4] += 0;
        result[5] += 16106127;
      } else {
        result[0] += 743931;
        result[1] += 0;
        result[2] += 48479567;
        result[3] += 4153620;
        result[4] += 0;
        result[5] += 309971;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 8706014;
        result[1] += 4767579;
        result[2] += 0;
        result[3] += 621858;
        result[4] += 35445917;
        result[5] += 4145721;
      } else {
        result[0] += 578716;
        result[1] += 89033;
        result[2] += 267099;
        result[3] += 7256215;
        result[4] += 4051016;
        result[5] += 41445009;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 351662;
        result[1] += 51225456;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1875531;
        result[5] += 234441;
      } else {
        result[0] += 33325031;
        result[1] += 2097379;
        result[2] += 3408241;
        result[3] += 4165628;
        result[4] += 6466920;
        result[5] += 4223889;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 3501332;
        result[1] += 3501332;
        result[2] += 1167110;
        result[3] += 8169774;
        result[4] += 0;
        result[5] += 37347541;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28318465;
        result[3] += 13569264;
        result[4] += 1179936;
        result[5] += 10619424;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1035288;
        result[1] += 0;
        result[2] += 42446818;
        result[3] += 8873899;
        result[4] += 0;
        result[5] += 1331084;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51961434;
        result[3] += 1533916;
        result[4] += 0;
        result[5] += 191739;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1189271;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51138653;
        result[5] += 1359166;
      } else {
        result[0] += 4776882;
        result[1] += 549552;
        result[2] += 549552;
        result[3] += 6721454;
        result[4] += 3804597;
        result[5] += 37285050;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 47698092;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5988998;
        result[5] += 0;
      } else {
        result[0] += 34217788;
        result[1] += 716261;
        result[2] += 4037112;
        result[3] += 7423078;
        result[4] += 2604589;
        result[5] += 4688260;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2191309;
        result[3] += 0;
        result[4] += 5478274;
        result[5] += 46017506;
      } else {
        result[0] += 7030452;
        result[1] += 8308716;
        result[2] += 8308716;
        result[3] += 14700036;
        result[4] += 1278264;
        result[5] += 14060904;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2516582;
        result[1] += 0;
        result[2] += 36909875;
        result[3] += 12079595;
        result[4] += 0;
        result[5] += 2181038;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50310544;
        result[3] += 2954478;
        result[4] += 0;
        result[5] += 422068;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 163182;
        result[1] += 4242748;
        result[2] += 0;
        result[3] += 0;
        result[4] += 43896132;
        result[5] += 5385027;
      } else {
        result[0] += 2355889;
        result[1] += 453055;
        result[2] += 996722;
        result[3] += 7928473;
        result[4] += 3262000;
        result[5] += 38690950;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 48960688;
        result[2] += 0;
        result[3] += 969518;
        result[4] += 3029745;
        result[5] += 727138;
      } else {
        result[0] += 32502782;
        result[1] += 1967114;
        result[2] += 2330273;
        result[3] += 4872391;
        result[4] += 5750026;
        result[5] += 6264502;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18922499;
        result[3] += 26403487;
        result[4] += 0;
        result[5] += 8361104;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 43061521;
        result[3] += 6151645;
        result[4] += 0;
        result[5] += 4473924;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 6710886;
        result[3] += 6710886;
        result[4] += 0;
        result[5] += 13421772;
      } else {
        result[0] += 864924;
        result[1] += 0;
        result[2] += 48373984;
        result[3] += 4077500;
        result[4] += 0;
        result[5] += 370681;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        result[0] += 184491;
        result[1] += 4058817;
        result[2] += 0;
        result[3] += 737966;
        result[4] += 45753947;
        result[5] += 2951867;
      } else {
        result[0] += 1452229;
        result[1] += 635350;
        result[2] += 272292;
        result[3] += 6807323;
        result[4] += 3494426;
        result[5] += 41025469;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 85488;
        result[1] += 42659010;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10686124;
        result[5] += 256466;
      } else {
        result[0] += 36082563;
        result[1] += 638332;
        result[2] += 2620521;
        result[3] += 5241042;
        result[4] += 4031571;
        result[5] += 5073060;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 2825636;
        result[2] += 2825636;
        result[3] += 14128181;
        result[4] += 4238454;
        result[5] += 29669181;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25264513;
        result[3] += 22632793;
        result[4] += 0;
        result[5] += 5789784;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 622820;
        result[1] += 498256;
        result[2] += 41230689;
        result[3] += 8470353;
        result[4] += 622820;
        result[5] += 2242152;
      } else {
        result[0] += 311530;
        result[1] += 0;
        result[2] += 51194847;
        result[3] += 1765339;
        result[4] += 0;
        result[5] += 415374;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 198107;
        result[1] += 2179180;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50517373;
        result[5] += 792429;
      } else {
        result[0] += 2219180;
        result[1] += 256059;
        result[2] += 170706;
        result[3] += 7980513;
        result[4] += 3072711;
        result[5] += 39987920;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 34749735;
        result[1] += 2312482;
        result[2] += 2656229;
        result[3] += 3468723;
        result[4] += 6843697;
        result[5] += 3656222;
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
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 624268;
        result[2] += 3745611;
        result[3] += 27467814;
        result[4] += 1248537;
        result[5] += 20600860;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26020123;
        result[3] += 22397068;
        result[4] += 658737;
        result[5] += 4611161;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
        result[0] += 35320454;
        result[1] += 1412818;
        result[2] += 15541000;
        result[3] += 1412818;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 737966;
        result[1] += 245988;
        result[2] += 48951803;
        result[3] += 3136359;
        result[4] += 0;
        result[5] += 614972;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 903388;
        result[1] += 2581110;
        result[2] += 0;
        result[3] += 774333;
        result[4] += 44524150;
        result[5] += 4904109;
      } else {
        result[0] += 6960161;
        result[1] += 508326;
        result[2] += 195510;
        result[3] += 8172324;
        result[4] += 3831999;
        result[5] += 34018768;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        result[0] += 223231;
        result[1] += 48776005;
        result[2] += 781309;
        result[3] += 111615;
        result[4] += 3683313;
        result[5] += 111615;
      } else {
        result[0] += 38182984;
        result[1] += 2350356;
        result[2] += 2474059;
        result[3] += 4741947;
        result[4] += 3216277;
        result[5] += 2721465;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 838860;
        result[1] += 838860;
        result[2] += 8388607;
        result[3] += 29360127;
        result[4] += 1677721;
        result[5] += 12582911;
      } else {
        result[0] += 7017920;
        result[1] += 350896;
        result[2] += 29124369;
        result[3] += 7017920;
        result[4] += 1403584;
        result[5] += 8772400;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2041334;
        result[1] += 0;
        result[2] += 39601884;
        result[3] += 10002537;
        result[4] += 0;
        result[5] += 2041334;
      } else {
        result[0] += 226846;
        result[1] += 0;
        result[2] += 51947931;
        result[3] += 1361081;
        result[4] += 0;
        result[5] += 151231;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1565873;
        result[2] += 0;
        result[3] += 671088;
        result[4] += 49660559;
        result[5] += 1789569;
      } else {
        result[0] += 1994698;
        result[1] += 806367;
        result[2] += 424403;
        result[3] += 9167123;
        result[4] += 3013267;
        result[5] += 38281230;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 286585;
        result[1] += 43656584;
        result[2] += 0;
        result[3] += 477643;
        result[4] += 8502048;
        result[5] += 764229;
      } else {
        result[0] += 36473444;
        result[1] += 1234186;
        result[2] += 3085465;
        result[3] += 4157258;
        result[4] += 5294008;
        result[5] += 3442729;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 7542814;
        result[1] += 887389;
        result[2] += 8430204;
        result[3] += 18191493;
        result[4] += 3105864;
        result[5] += 15529323;
      } else {
        result[0] += 7669584;
        result[1] += 0;
        result[2] += 40265318;
        result[3] += 2876094;
        result[4] += 0;
        result[5] += 2876094;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 202592;
        result[1] += 0;
        result[2] += 40923744;
        result[3] += 10332232;
        result[4] += 0;
        result[5] += 2228520;
      } else {
        result[0] += 242562;
        result[1] += 0;
        result[2] += 51423177;
        result[3] += 1778789;
        result[4] += 0;
        result[5] += 242562;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 18361384;
        result[1] += 1397061;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30635570;
        result[5] += 3293074;
      } else {
        result[0] += 419758;
        result[1] += 461734;
        result[2] += 83951;
        result[3] += 7807505;
        result[4] += 3987704;
        result[5] += 40926437;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 48825254;
        result[2] += 310330;
        result[3] += 0;
        result[4] += 4448063;
        result[5] += 103443;
      } else {
        result[0] += 38892756;
        result[1] += 1718322;
        result[2] += 2640348;
        result[3] += 4819684;
        result[4] += 3436644;
        result[5] += 2179335;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 565127;
        result[1] += 847690;
        result[2] += 7346654;
        result[3] += 28256363;
        result[4] += 3673327;
        result[5] += 12997927;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40698278;
        result[3] += 8659208;
        result[4] += 0;
        result[5] += 4329604;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        result[0] += 22513941;
        result[1] += 0;
        result[2] += 19050258;
        result[3] += 5195524;
        result[4] += 0;
        result[5] += 6927366;
      } else {
        result[0] += 1159548;
        result[1] += 0;
        result[2] += 48411145;
        result[3] += 3884487;
        result[4] += 0;
        result[5] += 231909;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 208899;
        result[1] += 208899;
        result[2] += 626697;
        result[3] += 417798;
        result[4] += 50971401;
        result[5] += 1253395;
      } else {
        result[0] += 2459268;
        result[1] += 166730;
        result[2] += 166730;
        result[3] += 9503615;
        result[4] += 2792729;
        result[5] += 38598017;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52877156;
        result[2] += 0;
        result[3] += 0;
        result[4] += 809934;
        result[5] += 0;
      } else {
        result[0] += 34135564;
        result[1] += 2037944;
        result[2] += 3247973;
        result[3] += 4044045;
        result[4] += 6177518;
        result[5] += 4044045;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6573929;
        result[3] += 27391373;
        result[4] += 2739137;
        result[5] += 16982651;
      } else {
        result[0] += 0;
        result[1] += 4260880;
        result[2] += 29826161;
        result[3] += 11930464;
        result[4] += 0;
        result[5] += 7669584;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 39045157;
        result[1] += 0;
        result[2] += 9761289;
        result[3] += 4880644;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 566319;
        result[1] += 0;
        result[2] += 48760111;
        result[3] += 3907604;
        result[4] += 0;
        result[5] += 453055;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 14641933;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39045157;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1857684;
        result[1] += 482998;
        result[2] += 74307;
        result[3] += 6539050;
        result[4] += 11963490;
        result[5] += 32769560;
      } else {
        result[0] += 31353961;
        result[1] += 2423071;
        result[2] += 2247909;
        result[3] += 5196466;
        result[4] += 7123246;
        result[5] += 5342434;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 454975;
        result[1] += 0;
        result[2] += 19108964;
        result[3] += 24113693;
        result[4] += 0;
        result[5] += 10009457;
      } else {
        result[0] += 1606024;
        result[1] += 0;
        result[2] += 39691738;
        result[3] += 9865576;
        result[4] += 0;
        result[5] += 2523752;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42461608;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 488064;
      } else {
        result[0] += 183545;
        result[1] += 0;
        result[2] += 50933907;
        result[3] += 2110774;
        result[4] += 0;
        result[5] += 458864;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6620928;
        result[1] += 1295398;
        result[2] += 0;
        result[3] += 431799;
        result[4] += 38718036;
        result[5] += 6620928;
      } else {
        result[0] += 47052;
        result[1] += 705789;
        result[2] += 423473;
        result[3] += 8987059;
        result[4] += 2399685;
        result[5] += 41124029;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 50820839;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2866251;
        result[5] += 0;
      } else {
        result[0] += 34622695;
        result[1] += 1314785;
        result[2] += 3130442;
        result[3] += 4226097;
        result[4] += 5540883;
        result[5] += 4852186;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 1052688;
        result[2] += 3158064;
        result[3] += 0;
        result[4] += 13684944;
        result[5] += 35791394;
      } else {
        result[0] += 1883757;
        result[1] += 2825636;
        result[2] += 14128181;
        result[3] += 25430727;
        result[4] += 1255838;
        result[5] += 8162949;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 729609;
        result[1] += 0;
        result[2] += 48397423;
        result[3] += 4438457;
        result[4] += 0;
        result[5] += 121601;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53201235;
        result[5] += 485856;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6242685;
        result[4] += 29964888;
        result[5] += 17479518;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1452456;
        result[1] += 215178;
        result[2] += 161384;
        result[3] += 2528349;
        result[4] += 3335270;
        result[5] += 45994451;
      } else {
        result[0] += 1874787;
        result[1] += 1022611;
        result[2] += 2215657;
        result[3] += 27610504;
        result[4] += 1022611;
        result[5] += 19940919;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0;
        result[1] += 7669584;
        result[2] += 0;
        result[3] += 0;
        result[4] += 46017506;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 53319371;
        result[2] += 0;
        result[3] += 0;
        result[4] += 367719;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 37930366;
        result[1] += 2183767;
        result[2] += 1142278;
        result[3] += 2889292;
        result[4] += 6820074;
        result[5] += 2721310;
      } else {
        result[0] += 2715516;
        result[1] += 267099;
        result[2] += 39219176;
        result[3] += 7567832;
        result[4] += 133549;
        result[5] += 3783916;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 175448;
        result[1] += 1403584;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48248202;
        result[5] += 3859856;
      } else {
        result[0] += 3629549;
        result[1] += 264654;
        result[2] += 302462;
        result[3] += 9792222;
        result[4] += 2570931;
        result[5] += 37127270;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 211783;
        result[1] += 47121805;
        result[2] += 0;
        result[3] += 211783;
        result[4] += 5929935;
        result[5] += 211783;
      } else {
        result[0] += 39308690;
        result[1] += 1777974;
        result[2] += 2628309;
        result[3] += 3014825;
        result[4] += 5140664;
        result[5] += 1816625;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 4011104;
        result[1] += 1234186;
        result[2] += 8022209;
        result[3] += 24992266;
        result[4] += 1234186;
        result[5] += 14193139;
      } else {
        result[0] += 2386092;
        result[1] += 170435;
        result[2] += 40904450;
        result[3] += 9033066;
        result[4] += 0;
        result[5] += 1193046;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 571139;
        result[1] += 0;
        result[2] += 47594938;
        result[3] += 5521012;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52819170;
        result[3] += 867920;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3046076;
        result[2] += 0;
        result[3] += 761519;
        result[4] += 47404559;
        result[5] += 2474936;
      } else {
        result[0] += 922987;
        result[1] += 102554;
        result[2] += 512770;
        result[3] += 7845391;
        result[4] += 3743226;
        result[5] += 40560161;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 121464;
        result[1] += 51136347;
        result[2] += 0;
        result[3] += 728784;
        result[4] += 1700496;
        result[5] += 0;
      } else {
        result[0] += 31427937;
        result[1] += 1739859;
        result[2] += 3452102;
        result[3] += 4556774;
        result[4] += 6407101;
        result[5] += 6103316;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 745654;
        result[1] += 2236962;
        result[2] += 5219578;
        result[3] += 1491308;
        result[4] += 7456540;
        result[5] += 36537048;
      } else {
        result[0] += 2091704;
        result[1] += 1394469;
        result[2] += 17430873;
        result[3] += 22311518;
        result[4] += 0;
        result[5] += 10458524;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 3258465;
        result[1] += 0;
        result[2] += 38636085;
        result[3] += 10396055;
        result[4] += 0;
        result[5] += 1396485;
      } else {
        result[0] += 174308;
        result[1] += 0;
        result[2] += 51595386;
        result[3] += 1917396;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 563151;
        result[1] += 2815756;
        result[2] += 0;
        result[3] += 375434;
        result[4] += 47867861;
        result[5] += 2064888;
      } else {
        result[0] += 2765698;
        result[1] += 488064;
        result[2] += 162688;
        result[3] += 9029192;
        result[4] += 2562338;
        result[5] += 38679108;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 34873924;
        result[1] += 2510438;
        result[2] += 2419699;
        result[3] += 3841273;
        result[4] += 6805405;
        result[5] += 3236348;
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
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7002664;
        result[3] += 39681763;
        result[4] += 0;
        result[5] += 7002664;
      } else {
        result[0] += 2236962;
        result[1] += 0;
        result[2] += 28521267;
        result[3] += 15099494;
        result[4] += 559240;
        result[5] += 7270126;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11504376;
        result[3] += 26843545;
        result[4] += 0;
        result[5] += 15339168;
      } else {
        result[0] += 643309;
        result[1] += 0;
        result[2] += 49183925;
        result[3] += 3275029;
        result[4] += 0;
        result[5] += 584826;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 432960;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50656368;
        result[5] += 2597762;
      } else {
        result[0] += 2283640;
        result[1] += 947926;
        result[2] += 646313;
        result[3] += 8315897;
        result[4] += 2973041;
        result[5] += 38520272;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        result[0] += 303316;
        result[1] += 47519647;
        result[2] += 404422;
        result[3] += 101105;
        result[4] += 4853070;
        result[5] += 505528;
      } else {
        result[0] += 34002846;
        result[1] += 1962292;
        result[2] += 3127403;
        result[3] += 4629783;
        result[4] += 5580268;
        result[5] += 4384496;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 639132;
        result[1] += 639132;
        result[2] += 8308716;
        result[3] += 26843545;
        result[4] += 3834792;
        result[5] += 13421772;
      } else {
        result[0] += 631612;
        result[1] += 631612;
        result[2] += 36949350;
        result[3] += 8210966;
        result[4] += 1894838;
        result[5] += 5368709;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        result[0] += 25264513;
        result[1] += 9474192;
        result[2] += 9474192;
        result[3] += 0;
        result[4] += 9474192;
        result[5] += 0;
      } else {
        result[0] += 275671;
        result[1] += 0;
        result[2] += 48862833;
        result[3] += 4135077;
        result[4] += 0;
        result[5] += 413507;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        result[0] += 1584209;
        result[1] += 2992395;
        result[2] += 0;
        result[3] += 176023;
        result[4] += 46822184;
        result[5] += 2112278;
      } else {
        result[0] += 43437737;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5368709;
        result[5] += 4880644;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 59126;
        result[1] += 59126;
        result[2] += 59126;
        result[3] += 2424196;
        result[4] += 5262280;
        result[5] += 45823233;
      } else {
        result[0] += 976128;
        result[1] += 2091704;
        result[2] += 976128;
        result[3] += 20638154;
        result[4] += 4322856;
        result[5] += 24682117;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 38423513;
        result[1] += 3419041;
        result[2] += 447731;
        result[3] += 3866773;
        result[4] += 5250670;
        result[5] += 2279360;
      } else {
        result[0] += 563644;
        result[1] += 52700714;
        result[2] += 281822;
        result[3] += 0;
        result[4] += 140911;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 580400;
        result[2] += 13929623;
        result[3] += 29020049;
        result[4] += 290200;
        result[5] += 9866816;
      } else {
        result[0] += 1386398;
        result[1] += 0;
        result[2] += 45846767;
        result[3] += 4541650;
        result[4] += 478068;
        result[5] += 1434205;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 391876;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51727708;
        result[5] += 1567506;
      } else {
        result[0] += 1628215;
        result[1] += 264034;
        result[2] += 220029;
        result[3] += 8009057;
        result[4] += 2860377;
        result[5] += 40705376;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 51225456;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2461635;
        result[5] += 0;
      } else {
        result[0] += 36543864;
        result[1] += 2061113;
        result[2] += 2388274;
        result[3] += 3435188;
        result[4] += 6706796;
        result[5] += 2551854;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 319566;
        result[1] += 0;
        result[2] += 3515226;
        result[3] += 17576131;
        result[4] += 3515226;
        result[5] += 28760941;
      } else {
        result[0] += 9107631;
        result[1] += 12463074;
        result[2] += 22050055;
        result[3] += 5272839;
        result[4] += 2876094;
        result[5] += 1917396;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 801299;
        result[1] += 0;
        result[2] += 30048745;
        result[3] += 20032496;
        result[4] += 0;
        result[5] += 2804549;
      } else {
        result[0] += 458864;
        result[1] += 0;
        result[2] += 49688418;
        result[3] += 2884288;
        result[4] += 0;
        result[5] += 655520;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9251165;
        result[1] += 2123218;
        result[2] += 151658;
        result[3] += 606633;
        result[4] += 35791394;
        result[5] += 5763021;
      } else {
        result[0] += 46888;
        result[1] += 328218;
        result[2] += 328218;
        result[3] += 9049439;
        result[4] += 3797951;
        result[5] += 40136375;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 51839793;
        result[2] += 0;
        result[3] += 577280;
        result[4] += 923648;
        result[5] += 346368;
      } else {
        result[0] += 33160591;
        result[1] += 2183670;
        result[2] += 3244309;
        result[3] += 4398535;
        result[4] += 5958300;
        result[5] += 4741683;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1917396;
        result[1] += 1917396;
        result[2] += 1917396;
        result[3] += 28121809;
        result[4] += 1278264;
        result[5] += 18534829;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32435950;
        result[3] += 19014178;
        result[4] += 0;
        result[5] += 2236962;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 721600;
        result[1] += 0;
        result[2] += 41997160;
        result[3] += 8803528;
        result[4] += 0;
        result[5] += 2164802;
      } else {
        result[0] += 1685622;
        result[1] += 0;
        result[2] += 49894439;
        result[3] += 2107028;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 5719243;
        result[2] += 0;
        result[3] += 1475933;
        result[4] += 44462505;
        result[5] += 2029408;
      } else {
        result[0] += 1775552;
        result[1] += 0;
        result[2] += 186900;
        result[3] += 7803084;
        result[4] += 3317479;
        result[5] += 40604075;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 50375993;
        result[2] += 0;
        result[3] += 946028;
        result[4] += 2128563;
        result[5] += 236507;
      } else {
        result[0] += 32811981;
        result[1] += 1758814;
        result[2] += 3719460;
        result[3] += 4901614;
        result[4] += 5161111;
        result[5] += 5334109;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 1610612;
        result[1] += 1073741;
        result[2] += 6979321;
        result[3] += 19864223;
        result[4] += 4294967;
        result[5] += 19864223;
      } else {
        result[0] += 11388170;
        result[1] += 1626881;
        result[2] += 32537631;
        result[3] += 1626881;
        result[4] += 6507526;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1173488;
        result[1] += 0;
        result[2] += 40338661;
        result[3] += 10268022;
        result[4] += 146686;
        result[5] += 1760232;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51242495;
        result[3] += 2256550;
        result[4] += 0;
        result[5] += 188045;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10761332;
        result[1] += 2391407;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34675404;
        result[5] += 5858947;
      } else {
        result[0] += 108349;
        result[1] += 758445;
        result[2] += 433397;
        result[3] += 3954750;
        result[4] += 3413003;
        result[5] += 45019145;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 29618511;
        result[1] += 2321910;
        result[2] += 3143073;
        result[3] += 7758577;
        result[4] += 5380035;
        result[5] += 5464983;
      } else {
        result[0] += 506481;
        result[1] += 52041024;
        result[2] += 886343;
        result[3] += 0;
        result[4] += 253240;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 1095654;
        result[1] += 4930447;
        result[2] += 7669584;
        result[3] += 9313066;
        result[4] += 9860894;
        result[5] += 20817443;
      } else {
        result[0] += 3520464;
        result[1] += 0;
        result[2] += 29483894;
        result[3] += 18042383;
        result[4] += 0;
        result[5] += 2640348;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 511305;
        result[1] += 0;
        result[2] += 39370533;
        result[3] += 12782640;
        result[4] += 0;
        result[5] += 1022611;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50209384;
        result[3] += 3042993;
        result[4] += 72452;
        result[5] += 362261;
      }
    }
  }
  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 208899;
        result[1] += 626697;
        result[2] += 417798;
        result[3] += 0;
        result[4] += 50553603;
        result[5] += 1880092;
      } else {
        result[0] += 0;
        result[1] += 46976204;
        result[2] += 6710886;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 821096;
        result[1] += 0;
        result[2] += 252645;
        result[3] += 2779096;
        result[4] += 2526451;
        result[5] += 47307801;
      } else {
        result[0] += 3748724;
        result[1] += 2142128;
        result[2] += 4819788;
        result[3] += 18877505;
        result[4] += 2543777;
        result[5] += 21555166;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 51703003;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1984088;
        result[5] += 0;
      } else {
        result[0] += 35634512;
        result[1] += 1378316;
        result[2] += 1378316;
        result[3] += 3294511;
        result[4] += 6790727;
        result[5] += 5210707;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 7101467;
        result[1] += 3124645;
        result[2] += 9089877;
        result[3] += 22724694;
        result[4] += 2272469;
        result[5] += 9373936;
      } else {
        result[0] += 1830241;
        result[1] += 0;
        result[2] += 45349323;
        result[3] += 5389045;
        result[4] += 0;
        result[5] += 1118481;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bc0000))) ) ) {
        result[0] += 0;
        result[1] += 18673770;
        result[2] += 0;
        result[3] += 2334221;
        result[4] += 30344877;
        result[5] += 2334221;
      } else {
        result[0] += 0;
        result[1] += 53008938;
        result[2] += 0;
        result[3] += 452101;
        result[4] += 226050;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 901222;
        result[1] += 42915;
        result[2] += 214576;
        result[3] += 3862380;
        result[4] += 12316702;
        result[5] += 36349293;
      } else {
        result[0] += 28812159;
        result[1] += 2242394;
        result[2] += 3311442;
        result[3] += 6622885;
        result[4] += 6257844;
        result[5] += 6440364;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11504376;
        result[3] += 30678337;
        result[4] += 0;
        result[5] += 11504376;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 38100516;
        result[3] += 15586574;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 4382619;
        result[1] += 3286964;
        result[2] += 15339168;
        result[3] += 5478274;
        result[4] += 8765239;
        result[5] += 16434823;
      } else {
        result[0] += 251461;
        result[1] += 314327;
        result[2] += 49097913;
        result[3] += 3834792;
        result[4] += 0;
        result[5] += 188596;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 453055;
        result[2] += 0;
        result[3] += 906111;
        result[4] += 49156534;
        result[5] += 3171389;
      } else {
        result[0] += 1269923;
        result[1] += 1269923;
        result[2] += 306533;
        result[3] += 7794700;
        result[4] += 2627426;
        result[5] += 40418584;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 50406820;
        result[2] += 0;
        result[3] += 546711;
        result[4] += 2733558;
        result[5] += 0;
      } else {
        result[0] += 33642733;
        result[1] += 1913191;
        result[2] += 2472431;
        result[3] += 4238454;
        result[4] += 6916922;
        result[5] += 4503357;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13569264;
        result[3] += 30088369;
        result[4] += 0;
        result[5] += 10029456;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39475802;
        result[3] += 8684676;
        result[4] += 0;
        result[5] += 5526612;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35583304;
        result[3] += 14358175;
        result[4] += 0;
        result[5] += 3745611;
      } else {
        result[0] += 802297;
        result[1] += 0;
        result[2] += 50277325;
        result[3] += 2072602;
        result[4] += 0;
        result[5] += 534865;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
        result[0] += 0;
        result[1] += 1477626;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51716922;
        result[5] += 492542;
      } else {
        result[0] += 2825636;
        result[1] += 13186303;
        result[2] += 0;
        result[3] += 5651272;
        result[4] += 11302545;
        result[5] += 20721333;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1071486;
        result[1] += 56394;
        result[2] += 56394;
        result[3] += 2650518;
        result[4] += 4285944;
        result[5] += 45566354;
      } else {
        result[0] += 2611804;
        result[1] += 870601;
        result[2] += 4207907;
        result[3] += 24521941;
        result[4] += 2176503;
        result[5] += 19298332;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 53075620;
        result[2] += 0;
        result[3] += 0;
        result[4] += 611470;
        result[5] += 0;
      } else {
        result[0] += 37011293;
        result[1] += 1622696;
        result[2] += 1311967;
        result[3] += 3659698;
        result[4] += 6007430;
        result[5] += 4074004;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 617093;
        result[2] += 14398836;
        result[3] += 25917906;
        result[4] += 2056976;
        result[5] += 10696278;
      } else {
        result[0] += 2204808;
        result[1] += 496081;
        result[2] += 44702495;
        result[3] += 4354497;
        result[4] += 606322;
        result[5] += 1322885;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 462819;
        result[1] += 231409;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48596073;
        result[5] += 4396787;
      } else {
        result[0] += 2095105;
        result[1] += 1658625;
        result[2] += 785664;
        result[3] += 7027334;
        result[4] += 2356994;
        result[5] += 39763365;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52800747;
        result[2] += 0;
        result[3] += 0;
        result[4] += 886343;
        result[5] += 0;
      } else {
        result[0] += 36221062;
        result[1] += 1707932;
        result[2] += 708953;
        result[3] += 2803587;
        result[4] += 6992856;
        result[5] += 5252698;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9610652;
        result[3] += 29494759;
        result[4] += 0;
        result[5] += 14581679;
      } else {
        result[0] += 5047504;
        result[1] += 0;
        result[2] += 33497073;
        result[3] += 6882960;
        result[4] += 1376592;
        result[5] += 6882960;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 4214345;
        result[1] += 0;
        result[2] += 39211732;
        result[3] += 9161619;
        result[4] += 0;
        result[5] += 1099394;
      } else {
        result[0] += 229432;
        result[1] += 0;
        result[2] += 49863224;
        result[3] += 2906138;
        result[4] += 0;
        result[5] += 688296;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 12046859;
        result[1] += 1571329;
        result[2] += 0;
        result[3] += 1178497;
        result[4] += 34176416;
        result[5] += 4713988;
      } else {
        result[0] += 333201;
        result[1] += 249901;
        result[2] += 291551;
        result[3] += 9246341;
        result[4] += 3248714;
        result[5] += 40317381;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 53314264;
        result[2] += 0;
        result[3] += 0;
        result[4] += 372827;
        result[5] += 0;
      } else {
        result[0] += 37122882;
        result[1] += 2308728;
        result[2] += 3041657;
        result[3] += 3261536;
        result[4] += 6046668;
        result[5] += 1905616;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 830212;
        result[1] += 276737;
        result[2] += 14667091;
        result[3] += 25183120;
        result[4] += 276737;
        result[5] += 12453191;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 38903689;
        result[3] += 10114959;
        result[4] += 778073;
        result[5] += 3890368;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 24970740;
        result[1] += 1248537;
        result[2] += 23722203;
        result[3] += 1248537;
        result[4] += 0;
        result[5] += 2497074;
      } else {
        result[0] += 639132;
        result[1] += 174308;
        result[2] += 49096961;
        result[3] += 3253763;
        result[4] += 0;
        result[5] += 522926;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 232411;
        result[1] += 232411;
        result[2] += 697234;
        result[3] += 0;
        result[4] += 50898151;
        result[5] += 1626881;
      } else {
        result[0] += 1917396;
        result[1] += 127826;
        result[2] += 340870;
        result[3] += 8223498;
        result[4] += 2812180;
        result[5] += 40265318;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 32623398;
        result[1] += 3187857;
        result[2] += 2532409;
        result[3] += 4439165;
        result[4] += 7358885;
        result[5] += 3545373;
      } else {
        result[0] += 239674;
        result[1] += 53447416;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18492220;
        result[3] += 26843545;
        result[4] += 0;
        result[5] += 8351325;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31580641;
        result[3] += 3158064;
        result[4] += 0;
        result[5] += 18948385;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1303084;
        result[1] += 0;
        result[2] += 42871487;
        result[3] += 8600359;
        result[4] += 0;
        result[5] += 912159;
      } else {
        result[0] += 189707;
        result[1] += 0;
        result[2] += 51884874;
        result[3] += 1327949;
        result[4] += 0;
        result[5] += 284560;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10369878;
        result[1] += 2100228;
        result[2] += 0;
        result[3] += 525057;
        result[4] += 35441356;
        result[5] += 5250571;
      } else {
        result[0] += 53261;
        result[1] += 53261;
        result[2] += 426088;
        result[3] += 5432622;
        result[4] += 3994575;
        result[5] += 43727283;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 50211810;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3115768;
        result[5] += 359511;
      } else {
        result[0] += 33709794;
        result[1] += 1364155;
        result[2] += 2728310;
        result[3] += 6335743;
        result[4] += 3849949;
        result[5] += 5699137;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9495675;
        result[3] += 18626133;
        result[4] += 6208711;
        result[5] += 19356570;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 44739242;
        result[3] += 5965232;
        result[4] += 0;
        result[5] += 2982616;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 5247610;
        result[2] += 25834389;
        result[3] += 15339168;
        result[4] += 0;
        result[5] += 7265922;
      } else {
        result[0] += 491415;
        result[1] += 122853;
        result[2] += 49387209;
        result[3] += 3378478;
        result[4] += 0;
        result[5] += 307134;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1776411;
        result[1] += 3158064;
        result[2] += 0;
        result[3] += 0;
        result[4] += 43028624;
        result[5] += 5723991;
      } else {
        result[0] += 369406;
        result[1] += 123135;
        result[2] += 246271;
        result[3] += 3755633;
        result[4] += 3447794;
        result[5] += 45744849;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52422513;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1264578;
        result[5] += 0;
      } else {
        result[0] += 30187144;
        result[1] += 1461978;
        result[2] += 2409556;
        result[3] += 6281091;
        result[4] += 7201596;
        result[5] += 6145723;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 553475;
        result[2] += 3874326;
        result[3] += 8855602;
        result[4] += 6088226;
        result[5] += 34315460;
      } else {
        result[0] += 271146;
        result[1] += 0;
        result[2] += 23589782;
        result[3] += 25758957;
        result[4] += 0;
        result[5] += 4067203;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 12958953;
        result[1] += 18512790;
        result[2] += 1851279;
        result[3] += 0;
        result[4] += 12958953;
        result[5] += 7405116;
      } else {
        result[0] += 1005154;
        result[1] += 0;
        result[2] += 48543063;
        result[3] += 3547605;
        result[4] += 0;
        result[5] += 591267;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 594322;
        result[3] += 198107;
        result[4] += 51309803;
        result[5] += 1584858;
      } else {
        result[0] += 2012195;
        result[1] += 299688;
        result[2] += 299688;
        result[3] += 7620655;
        result[4] += 2825636;
        result[5] += 40629226;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 33861093;
        result[1] += 2767081;
        result[2] += 3537300;
        result[3] += 4050779;
        result[4] += 5905009;
        result[5] += 3565826;
      } else {
        result[0] += 410870;
        result[1] += 52317522;
        result[2] += 0;
        result[3] += 821741;
        result[4] += 136956;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5368709;
        result[3] += 8947848;
        result[4] += 10737418;
        result[5] += 28633115;
      } else {
        result[0] += 11773484;
        result[1] += 4238454;
        result[2] += 27314484;
        result[3] += 6593151;
        result[4] += 470939;
        result[5] += 3296575;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24627106;
        result[3] += 21179311;
        result[4] += 0;
        result[5] += 7880673;
      } else {
        result[0] += 288640;
        result[1] += 0;
        result[2] += 50223407;
        result[3] += 3175043;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2741468;
        result[2] += 228455;
        result[3] += 685367;
        result[4] += 47518787;
        result[5] += 2513012;
      } else {
        result[0] += 2254356;
        result[1] += 709704;
        result[2] += 250484;
        result[3] += 7222291;
        result[4] += 3214545;
        result[5] += 40035707;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 32723840;
        result[1] += 2704935;
        result[2] += 2910745;
        result[3] += 4204410;
        result[4] += 6203710;
        result[5] += 4939447;
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4294967;
        result[3] += 8589934;
        result[4] += 0;
        result[5] += 40802189;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28567443;
        result[3] += 18716600;
        result[4] += 0;
        result[5] += 6403047;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 4561648;
        result[1] += 0;
        result[2] += 37896770;
        result[3] += 7719712;
        result[4] += 0;
        result[5] += 3508960;
      } else {
        result[0] += 475107;
        result[1] += 0;
        result[2] += 49682617;
        result[3] += 3257876;
        result[4] += 0;
        result[5] += 271489;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 891812;
        result[1] += 535087;
        result[2] += 1070174;
        result[3] += 356724;
        result[4] += 48514580;
        result[5] += 2318711;
      } else {
        result[0] += 3737430;
        result[1] += 175879;
        result[2] += 87939;
        result[3] += 3561551;
        result[4] += 5056523;
        result[5] += 41067766;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        result[0] += 437369;
        result[1] += 47891946;
        result[2] += 0;
        result[3] += 328027;
        result[4] += 4701720;
        result[5] += 328027;
      } else {
        result[0] += 34760005;
        result[1] += 1876250;
        result[2] += 1876250;
        result[3] += 6747917;
        result[4] += 3192917;
        result[5] += 5233750;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14606046;
        result[3] += 27633061;
        result[4] += 789516;
        result[5] += 10658466;
      } else {
        result[0] += 3463683;
        result[1] += 0;
        result[2] += 42430120;
        result[3] += 3463683;
        result[4] += 0;
        result[5] += 4329604;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14454216;
        result[3] += 18583993;
        result[4] += 0;
        result[5] += 20648881;
      } else {
        result[0] += 1176856;
        result[1] += 0;
        result[2] += 48195092;
        result[3] += 3698693;
        result[4] += 0;
        result[5] += 616448;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 363980;
        result[1] += 2365871;
        result[2] += 0;
        result[3] += 181990;
        result[4] += 49137337;
        result[5] += 1637911;
      } else {
        result[0] += 4212253;
        result[1] += 153172;
        result[2] += 153172;
        result[3] += 8424507;
        result[4] += 3216630;
        result[5] += 37527353;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 50662466;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3024624;
        result[5] += 0;
      } else {
        result[0] += 37092236;
        result[1] += 1823610;
        result[2] += 4048415;
        result[3] += 2334221;
        result[4] += 5908497;
        result[5] += 2480110;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 688296;
        result[2] += 7571256;
        result[3] += 24090361;
        result[4] += 1376592;
        result[5] += 19960585;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 48806446;
        result[3] += 3253763;
        result[4] += 0;
        result[5] += 1626881;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 12958953;
        result[2] += 3702558;
        result[3] += 12958953;
        result[4] += 1851279;
        result[5] += 22215348;
      } else {
        result[0] += 1994743;
        result[1] += 0;
        result[2] += 47360905;
        result[3] += 3647530;
        result[4] += 170977;
        result[5] += 512933;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        result[0] += 367719;
        result[1] += 4412637;
        result[2] += 0;
        result[3] += 1470879;
        result[4] += 45597255;
        result[5] += 1838599;
      } else {
        result[0] += 2495001;
        result[1] += 668304;
        result[2] += 89107;
        result[3] += 8019648;
        result[4] += 3831609;
        result[5] += 38583419;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 50914518;
        result[2] += 0;
        result[3] += 1134234;
        result[4] += 1386286;
        result[5] += 252052;
      } else {
        result[0] += 33773840;
        result[1] += 1634218;
        result[2] += 2905276;
        result[3] += 4357914;
        result[4] += 6325029;
        result[5] += 4690811;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1704352;
        result[1] += 1704352;
        result[2] += 1704352;
        result[3] += 852176;
        result[4] += 16191344;
        result[5] += 31530513;
      } else {
        result[0] += 346368;
        result[1] += 1039104;
        result[2] += 15932943;
        result[3] += 25631256;
        result[4] += 0;
        result[5] += 10737418;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1740479;
        result[1] += 0;
        result[2] += 41905385;
        result[3] += 8836279;
        result[4] += 0;
        result[5] += 1204947;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51897521;
        result[3] += 1368494;
        result[4] += 0;
        result[5] += 421075;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 211366;
        result[1] += 1902298;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49671127;
        result[5] += 1902298;
      } else {
        result[0] += 978798;
        result[1] += 293639;
        result[2] += 734098;
        result[3] += 5579150;
        result[4] += 3866253;
        result[5] += 42235150;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 47356640;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6330450;
        result[5] += 0;
      } else {
        result[0] += 36456543;
        result[1] += 1488668;
        result[2] += 1393647;
        result[3] += 5036134;
        result[4] += 5067808;
        result[5] += 4244289;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 1639300;
        result[2] += 4098251;
        result[3] += 10245628;
        result[4] += 2868775;
        result[5] += 34835135;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20304733;
        result[3] += 27875989;
        result[4] += 0;
        result[5] += 5506368;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 1005971;
        result[1] += 317675;
        result[2] += 46274672;
        result[3] += 4923963;
        result[4] += 158837;
        result[5] += 1005971;
      } else {
        result[0] += 31082000;
        result[1] += 0;
        result[2] += 22605091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 399160;
        result[1] += 1397061;
        result[2] += 0;
        result[3] += 199580;
        result[4] += 48298424;
        result[5] += 3392864;
      } else {
        result[0] += 4670376;
        result[1] += 1023034;
        result[2] += 177919;
        result[3] += 4892775;
        result[4] += 3247023;
        result[5] += 39675961;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 30324295;
        result[1] += 2144142;
        result[2] += 3592134;
        result[3] += 7017192;
        result[4] += 5791968;
        result[5] += 4817358;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12565063;
        result[3] += 21132152;
        result[4] += 1142278;
        result[5] += 18847595;
      } else {
        result[0] += 0;
        result[1] += 671088;
        result[2] += 41607495;
        result[3] += 8724152;
        result[4] += 671088;
        result[5] += 2013265;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1626881;
        result[1] += 1162058;
        result[2] += 39742392;
        result[3] += 9993700;
        result[4] += 0;
        result[5] += 1162058;
      } else {
        result[0] += 416179;
        result[1] += 0;
        result[2] += 51689431;
        result[3] += 1581480;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6900221;
        result[1] += 1851279;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39550051;
        result[5] += 5385538;
      } else {
        result[0] += 189539;
        result[1] += 521233;
        result[2] += 189539;
        result[3] += 8576666;
        result[4] += 3364327;
        result[5] += 40845783;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 500578;
        result[1] += 50808762;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2377749;
        result[5] += 0;
      } else {
        result[0] += 34747734;
        result[1] += 2271494;
        result[2] += 2824020;
        result[3] += 3714201;
        result[4] += 6231263;
        result[5] += 3898376;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 447392;
        result[1] += 447392;
        result[2] += 5368709;
        result[3] += 30422685;
        result[4] += 1342177;
        result[5] += 15658734;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31367738;
        result[3] += 10858063;
        result[4] += 0;
        result[5] += 11461289;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        result[0] += 25352237;
        result[1] += 745654;
        result[2] += 24606583;
        result[3] += 0;
        result[4] += 0;
        result[5] += 2982616;
      } else {
        result[0] += 293372;
        result[1] += 0;
        result[2] += 49286509;
        result[3] += 3813837;
        result[4] += 0;
        result[5] += 293372;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1283356;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50692592;
        result[5] += 1711142;
      } else {
        result[0] += 2279168;
        result[1] += 928550;
        result[2] += 675309;
        result[3] += 8019298;
        result[4] += 1983721;
        result[5] += 39801043;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 32852393;
        result[1] += 2143860;
        result[2] += 3502644;
        result[3] += 4076353;
        result[4] += 7367632;
        result[5] += 3744206;
      } else {
        result[0] += 698747;
        result[1] += 52988343;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 1952257;
        result[2] += 4880644;
        result[3] += 1952257;
        result[4] += 7809031;
        result[5] += 37092899;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18078306;
        result[3] += 29582682;
        result[4] += 0;
        result[5] += 6026102;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 614737;
        result[1] += 0;
        result[2] += 40982512;
        result[3] += 9221065;
        result[4] += 204912;
        result[5] += 2663863;
      } else {
        result[0] += 82722;
        result[1] += 165445;
        result[2] += 51536298;
        result[3] += 1571733;
        result[4] += 0;
        result[5] += 330891;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 453055;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50968757;
        result[5] += 2265278;
      } else {
        result[0] += 2287311;
        result[1] += 1165234;
        result[2] += 43156;
        result[3] += 8329267;
        result[4] += 2632566;
        result[5] += 39229554;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52504556;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1182535;
        result[5] += 0;
      } else {
        result[0] += 34315131;
        result[1] += 1370056;
        result[2] += 2517080;
        result[3] += 3281762;
        result[4] += 7168899;
        result[5] += 5034160;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7571256;
        result[3] += 26499397;
        result[4] += 688296;
        result[5] += 18928141;
      } else {
        result[0] += 0;
        result[1] += 1288490;
        result[2] += 30494267;
        result[3] += 17179869;
        result[4] += 1288490;
        result[5] += 3435973;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 8259552;
        result[1] += 0;
        result[2] += 18583993;
        result[3] += 14454216;
        result[4] += 0;
        result[5] += 12389328;
      } else {
        result[0] += 1851279;
        result[1] += 0;
        result[2] += 48073535;
        result[3] += 3702558;
        result[4] += 0;
        result[5] += 59718;
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
