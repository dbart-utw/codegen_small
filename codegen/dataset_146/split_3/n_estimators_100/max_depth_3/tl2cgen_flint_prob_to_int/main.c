
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 534643;
        result[1] += 891072;
        result[2] += 356428;
        result[3] += 1247500;
        result[4] += 37781455;
        result[5] += 2138572;
      } else {
        result[0] += 1391887;
        result[1] += 33140;
        result[2] += 99420;
        result[3] += 5534410;
        result[4] += 2949475;
        result[5] += 32941338;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 39816005;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2949333;
        result[5] += 184333;
      } else {
        result[0] += 26449233;
        result[1] += 1892697;
        result[2] += 2887576;
        result[3] += 3906721;
        result[4] += 4294967;
        result[5] += 3518476;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 3520464;
        result[2] += 5984790;
        result[3] += 18658464;
        result[4] += 704092;
        result[5] += 14081859;
      } else {
        result[0] += 4210752;
        result[1] += 0;
        result[2] += 33686018;
        result[3] += 3368601;
        result[4] += 0;
        result[5] += 1684300;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 3435973;
        result[1] += 1717986;
        result[2] += 8589934;
        result[3] += 20615843;
        result[4] += 0;
        result[5] += 8589934;
      } else {
        result[0] += 452101;
        result[1] += 0;
        result[2] += 38981223;
        result[3] += 3164712;
        result[4] += 0;
        result[5] += 351634;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2655070;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38576615;
        result[5] += 1717986;
      } else {
        result[0] += 1431655;
        result[1] += 256963;
        result[2] += 917728;
        result[3] += 6203841;
        result[4] += 2679765;
        result[5] += 31459717;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 244495;
        result[1] += 35614814;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7008865;
        result[5] += 81498;
      } else {
        result[0] += 29276454;
        result[1] += 1005783;
        result[2] += 1848466;
        result[3] += 3289183;
        result[4] += 3098900;
        result[5] += 4430883;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 218018;
        result[1] += 872074;
        result[2] += 5232447;
        result[3] += 16787435;
        result[4] += 1962167;
        result[5] += 17877528;
      } else {
        result[0] += 2260509;
        result[1] += 2637260;
        result[2] += 27502860;
        result[3] += 4897769;
        result[4] += 0;
        result[5] += 5651272;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2084935;
        result[1] += 0;
        result[2] += 32524995;
        result[3] += 7366772;
        result[4] += 0;
        result[5] += 972969;
      } else {
        result[0] += 525378;
        result[1] += 0;
        result[2] += 40782487;
        result[3] += 1641807;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 325376;
        result[1] += 2277634;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38719780;
        result[5] += 1626881;
      } else {
        result[0] += 2330843;
        result[1] += 341857;
        result[2] += 435090;
        result[3] += 6557439;
        result[4] += 2921323;
        result[5] += 30363119;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 270123;
        result[1] += 39257981;
        result[2] += 0;
        result[3] += 90041;
        result[4] += 3061402;
        result[5] += 270123;
      } else {
        result[0] += 28473451;
        result[1] += 1969191;
        result[2] += 2208688;
        result[3] += 2528016;
        result[4] += 3592444;
        result[5] += 4177880;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4294967;
        result[3] += 26843545;
        result[4] += 536870;
        result[5] += 11274289;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35140641;
        result[3] += 4880644;
        result[4] += 0;
        result[5] += 2928386;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1533916;
        result[1] += 0;
        result[2] += 32491148;
        result[3] += 7809031;
        result[4] += 0;
        result[5] += 1115575;
      } else {
        result[0] += 130744;
        result[1] += 0;
        result[2] += 41838341;
        result[3] += 980586;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6745301;
        result[1] += 1927228;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29872048;
        result[5] += 4405094;
      } else {
        result[0] += 154495;
        result[1] += 772476;
        result[2] += 77247;
        result[3] += 6141185;
        result[4] += 1969814;
        result[5] += 33834454;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41801797;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1147875;
        result[5] += 0;
      } else {
        result[0] += 26503904;
        result[1] += 1167887;
        result[2] += 2454948;
        result[3] += 4242531;
        result[4] += 5744101;
        result[5] += 2836299;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 452101;
        result[1] += 6781527;
        result[2] += 3616814;
        result[3] += 9042036;
        result[4] += 1356305;
        result[5] += 21700887;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 27837750;
        result[3] += 11532782;
        result[4] += 0;
        result[5] += 3579139;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 6442450;
        result[1] += 0;
        result[2] += 15032385;
        result[3] += 5368709;
        result[4] += 6442450;
        result[5] += 9663676;
      } else {
        result[0] += 141904;
        result[1] += 0;
        result[2] += 38929053;
        result[3] += 3689509;
        result[4] += 0;
        result[5] += 189205;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1819901;
        result[2] += 0;
        result[3] += 545970;
        result[4] += 38581909;
        result[5] += 2001891;
      } else {
        result[0] += 1633199;
        result[1] += 416987;
        result[2] += 694978;
        result[3] += 7505768;
        result[4] += 3509641;
        result[5] += 29189098;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41895105;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1054567;
        result[5] += 0;
      } else {
        result[0] += 26335192;
        result[1] += 1686245;
        result[2] += 2702952;
        result[3] += 3322896;
        result[4] += 4339603;
        result[5] += 4562782;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1533916;
        result[3] += 9586980;
        result[4] += 4601750;
        result[5] += 27227024;
      } else {
        result[0] += 11413199;
        result[1] += 1802084;
        result[2] += 18020841;
        result[3] += 10512157;
        result[4] += 300347;
        result[5] += 901042;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 788067;
        result[1] += 0;
        result[2] += 30077905;
        result[3] += 9588153;
        result[4] += 0;
        result[5] += 2495546;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41353570;
        result[3] += 1596102;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42676108;
        result[5] += 273564;
      } else {
        result[0] += 45257;
        result[1] += 0;
        result[2] += 90515;
        result[3] += 2262891;
        result[4] += 3801657;
        result[5] += 36749351;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 20721333;
        result[1] += 1507006;
        result[2] += 0;
        result[3] += 753503;
        result[4] += 17895697;
        result[5] += 2072133;
      } else {
        result[0] += 99420;
        result[1] += 1093625;
        result[2] += 994205;
        result[3] += 18293379;
        result[4] += 1590728;
        result[5] += 20878313;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 265121;
        result[1] += 38796103;
        result[2] += 0;
        result[3] += 88373;
        result[4] += 3623326;
        result[5] += 176747;
      } else {
        result[0] += 33532028;
        result[1] += 1433828;
        result[2] += 977610;
        result[3] += 1596763;
        result[4] += 4431832;
        result[5] += 977610;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 534643;
        result[1] += 1960358;
        result[2] += 13366080;
        result[3] += 14613581;
        result[4] += 1782144;
        result[5] += 10692864;
      } else {
        result[0] += 1650283;
        result[1] += 0;
        result[2] += 37787249;
        result[3] += 3215936;
        result[4] += 42314;
        result[5] += 253889;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 370255;
        result[2] += 925639;
        result[3] += 0;
        result[4] += 40357882;
        result[5] += 1295895;
      } else {
        result[0] += 1554308;
        result[1] += 539249;
        result[2] += 444088;
        result[3] += 7612940;
        result[4] += 2220440;
        result[5] += 30578644;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 39606285;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3343387;
        result[5] += 0;
      } else {
        result[0] += 28212767;
        result[1] += 1112685;
        result[2] += 2522087;
        result[3] += 3659500;
        result[4] += 3783131;
        result[5] += 3659500;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14837159;
        result[3] += 21084384;
        result[4] += 0;
        result[5] += 7028128;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 38654705;
        result[3] += 4294967;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 1507006;
        result[2] += 24865600;
        result[3] += 0;
        result[4] += 3767515;
        result[5] += 12809551;
      } else {
        result[0] += 324148;
        result[1] += 216098;
        result[2] += 38681718;
        result[3] += 3349534;
        result[4] += 0;
        result[5] += 378173;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 6781527;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36168145;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 42518017;
        result[2] += 0;
        result[3] += 323741;
        result[4] += 107913;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3732774;
        result[1] += 477977;
        result[2] += 523498;
        result[3] += 7010333;
        result[4] += 8148374;
        result[5] += 23056713;
      } else {
        result[0] += 30271026;
        result[1] += 2729852;
        result[2] += 2274876;
        result[3] += 1789569;
        result[4] += 4367763;
        result[5] += 1516584;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10398341;
        result[3] += 23057192;
        result[4] += 0;
        result[5] += 9494138;
      } else {
        result[0] += 1301505;
        result[1] += 0;
        result[2] += 32537631;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 1952257;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1083903;
        result[1] += 0;
        result[2] += 31975150;
        result[3] += 8806715;
        result[4] += 0;
        result[5] += 1083903;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41445066;
        result[3] += 1436215;
        result[4] += 0;
        result[5] += 68391;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 373475;
        result[1] += 746950;
        result[2] += 0;
        result[3] += 746950;
        result[4] += 37160803;
        result[5] += 3921491;
      } else {
        result[0] += 1960358;
        result[1] += 499000;
        result[2] += 142571;
        result[3] += 6522647;
        result[4] += 2423715;
        result[5] += 31401379;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25288989;
        result[1] += 2126679;
        result[2] += 2404072;
        result[3] += 3652340;
        result[4] += 5178001;
        result[5] += 4299590;
      } else {
        result[0] += 386933;
        result[1] += 42562738;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 335544;
        result[1] += 2348810;
        result[2] += 8053063;
        result[3] += 17783848;
        result[4] += 1006632;
        result[5] += 13421772;
      } else {
        result[0] += 1698574;
        result[1] += 1213267;
        result[2] += 29846382;
        result[3] += 8978180;
        result[4] += 0;
        result[5] += 1213267;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34842706;
        result[3] += 7589500;
        result[4] += 0;
        result[5] += 517465;
      } else {
        result[0] += 160559;
        result[1] += 0;
        result[2] += 41584916;
        result[3] += 1204196;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 330382;
        result[2] += 165191;
        result[3] += 1651910;
        result[4] += 38489514;
        result[5] += 2312674;
      } else {
        result[0] += 1437359;
        result[1] += 410674;
        result[2] += 273782;
        result[3] += 6536563;
        result[4] += 2087593;
        result[5] += 32203699;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 24280705;
        result[1] += 2452373;
        result[2] += 2805868;
        result[3] += 4352410;
        result[4] += 4374503;
        result[5] += 4683812;
      } else {
        result[0] += 717536;
        result[1] += 41617105;
        result[2] += 0;
        result[3] += 205010;
        result[4] += 410020;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 338186;
        result[1] += 2029118;
        result[2] += 12512896;
        result[3] += 17923879;
        result[4] += 338186;
        result[5] += 9807405;
      } else {
        result[0] += 6710886;
        result[1] += 0;
        result[2] += 34896609;
        result[3] += 1342177;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29655726;
        result[3] += 13293946;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 517465;
        result[1] += 0;
        result[2] += 39787381;
        result[3] += 2414841;
        result[4] += 0;
        result[5] += 229984;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 162074;
        result[2] += 0;
        result[3] += 162074;
        result[4] += 37277074;
        result[5] += 5348449;
      } else {
        result[0] += 1235438;
        result[1] += 1053756;
        result[2] += 36336;
        result[3] += 6576895;
        result[4] += 1417121;
        result[5] += 32630123;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        result[0] += 295186;
        result[1] += 34684443;
        result[2] += 295186;
        result[3] += 147593;
        result[4] += 7158278;
        result[5] += 368983;
      } else {
        result[0] += 28209105;
        result[1] += 1272028;
        result[2] += 2020280;
        result[3] += 4090445;
        result[4] += 3242425;
        result[5] += 4115386;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4928650;
        result[3] += 32388277;
        result[4] += 0;
        result[5] += 5632743;
      } else {
        result[0] += 885560;
        result[1] += 0;
        result[2] += 30994609;
        result[3] += 6641702;
        result[4] += 442780;
        result[5] += 3985021;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 681740;
        result[1] += 0;
        result[2] += 33575736;
        result[3] += 7840019;
        result[4] += 0;
        result[5] += 852176;
      } else {
        result[0] += 193757;
        result[1] += 0;
        result[2] += 41141265;
        result[3] += 1485477;
        result[4] += 0;
        result[5] += 129171;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 4645998;
        result[1] += 1445421;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34793364;
        result[5] += 2064888;
      } else {
        result[0] += 38954354;
        result[1] += 166471;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1997659;
        result[5] += 1831187;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 271098;
        result[1] += 658380;
        result[2] += 38728;
        result[3] += 3524274;
        result[4] += 3640459;
        result[5] += 34816732;
      } else {
        result[0] += 419021;
        result[1] += 1152308;
        result[2] += 2304616;
        result[3] += 24827006;
        result[4] += 2095105;
        result[5] += 12151614;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 99190;
        result[1] += 42652100;
        result[2] += 0;
        result[3] += 0;
        result[4] += 198381;
        result[5] += 0;
      } else {
        result[0] += 32885819;
        result[1] += 1981073;
        result[2] += 1822587;
        result[3] += 1109401;
        result[4] += 3248960;
        result[5] += 1901830;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 1488355;
        result[1] += 212622;
        result[2] += 25727279;
        result[3] += 8079641;
        result[4] += 425244;
        result[5] += 7016530;
      } else {
        result[0] += 1315744;
        result[1] += 46990;
        result[2] += 37827666;
        result[3] += 3383344;
        result[4] += 93981;
        result[5] += 281945;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10679378;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29020049;
        result[5] += 3250245;
      } else {
        result[0] += 63300;
        result[1] += 348155;
        result[2] += 284854;
        result[3] += 8640575;
        result[4] += 2437085;
        result[5] += 31175702;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        result[0] += 81965;
        result[1] += 36310505;
        result[2] += 81965;
        result[3] += 81965;
        result[4] += 6229341;
        result[5] += 163930;
      } else {
        result[0] += 30372339;
        result[1] += 1757531;
        result[2] += 3185525;
        result[3] += 2773604;
        result[4] += 2883449;
        result[5] += 1977222;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8053063;
        result[3] += 12079595;
        result[4] += 0;
        result[5] += 22817013;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30923764;
        result[3] += 2576980;
        result[4] += 0;
        result[5] += 9448928;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 28633115;
        result[2] += 0;
        result[3] += 14316557;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 388245;
        result[1] += 0;
        result[2] += 38873093;
        result[3] += 3494210;
        result[4] += 0;
        result[5] += 194122;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 350609;
        result[1] += 3506095;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37339919;
        result[5] += 1753047;
      } else {
        result[0] += 1833647;
        result[1] += 528936;
        result[2] += 35262;
        result[3] += 5888830;
        result[4] += 2574159;
        result[5] += 32088836;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 37443304;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5349043;
        result[5] += 157324;
      } else {
        result[0] += 30519793;
        result[1] += 776867;
        result[2] += 860103;
        result[3] += 2996488;
        result[4] += 4189535;
        result[5] += 3606884;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 193466;
        result[1] += 0;
        result[2] += 8899481;
        result[3] += 23602973;
        result[4] += 0;
        result[5] += 10253750;
      } else {
        result[0] += 753503;
        result[1] += 0;
        result[2] += 30893624;
        result[3] += 7911781;
        result[4] += 1507006;
        result[5] += 1883757;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 31236125;
        result[1] += 0;
        result[2] += 7809031;
        result[3] += 0;
        result[4] += 0;
        result[5] += 3904515;
      } else {
        result[0] += 279498;
        result[1] += 46583;
        result[2] += 38524272;
        result[3] += 3307404;
        result[4] += 0;
        result[5] += 791913;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 557787;
        result[1] += 371858;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40160733;
        result[5] += 1859293;
      } else {
        result[0] += 1435072;
        result[1] += 478357;
        result[2] += 34168;
        result[3] += 6491995;
        result[4] += 2596798;
        result[5] += 31913281;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27529248;
        result[1] += 1895953;
        result[2] += 2199306;
        result[3] += 3109364;
        result[4] += 5991213;
        result[5] += 2224585;
      } else {
        result[0] += 416987;
        result[1] += 42532685;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42df0000))) ) ) {
        result[0] += 2336174;
        result[1] += 1797057;
        result[2] += 7367935;
        result[3] += 12759107;
        result[4] += 2695586;
        result[5] += 15993811;
      } else {
        result[0] += 1073741;
        result[1] += 3221225;
        result[2] += 36507222;
        result[3] += 2147483;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 11930464;
        result[1] += 0;
        result[2] += 17498014;
        result[3] += 11930464;
        result[4] += 0;
        result[5] += 1590728;
      } else {
        result[0] += 672589;
        result[1] += 0;
        result[2] += 38770006;
        result[3] += 3314907;
        result[4] += 0;
        result[5] += 192168;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 166471;
        result[1] += 665886;
        result[2] += 0;
        result[3] += 1165301;
        result[4] += 37955524;
        result[5] += 2996488;
      } else {
        result[0] += 1403802;
        result[1] += 200543;
        result[2] += 534781;
        result[3] += 7085860;
        result[4] += 2740757;
        result[5] += 30983927;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41384309;
        result[2] += 0;
        result[3] += 293505;
        result[4] += 1271858;
        result[5] += 0;
      } else {
        result[0] += 26562867;
        result[1] += 1624348;
        result[2] += 3057596;
        result[3] += 3726445;
        result[4] += 4371407;
        result[5] += 3607008;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5602131;
        result[3] += 11204262;
        result[4] += 2801065;
        result[5] += 23342213;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 24865600;
        result[2] += 0;
        result[3] += 9042036;
        result[4] += 0;
        result[5] += 9042036;
      } else {
        result[0] += 607557;
        result[1] += 0;
        result[2] += 38416356;
        result[3] += 3271465;
        result[4] += 0;
        result[5] += 654293;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
        result[0] += 0;
        result[1] += 34359738;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8589934;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41880386;
        result[5] += 1069286;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1301505;
        result[4] += 1247275;
        result[5] += 40400891;
      } else {
        result[0] += 4213930;
        result[1] += 648296;
        result[2] += 243111;
        result[3] += 14424607;
        result[4] += 3079410;
        result[5] += 20340316;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 190042;
        result[1] += 41049244;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1615363;
        result[5] += 95021;
      } else {
        result[0] += 30804888;
        result[1] += 1886013;
        result[2] += 943006;
        result[3] += 1600253;
        result[4] += 5915224;
        result[5] += 1800285;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 4357213;
        result[1] += 3008551;
        result[2] += 12552923;
        result[3] += 11515492;
        result[4] += 4045983;
        result[5] += 7469508;
      } else {
        result[0] += 144937;
        result[1] += 0;
        result[2] += 38166750;
        result[3] += 3816675;
        result[4] += 96624;
        result[5] += 724685;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        result[0] += 405185;
        result[1] += 607778;
        result[2] += 0;
        result[3] += 810371;
        result[4] += 37074481;
        result[5] += 4051855;
      } else {
        result[0] += 1300519;
        result[1] += 325129;
        result[2] += 260103;
        result[3] += 6079930;
        result[4] += 3478890;
        result[5] += 31505096;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 269558;
        result[1] += 41871438;
        result[2] += 0;
        result[3] += 0;
        result[4] += 808675;
        result[5] += 0;
      } else {
        result[0] += 26594908;
        result[1] += 1620742;
        result[2] += 3266041;
        result[3] += 3879959;
        result[4] += 4223752;
        result[5] += 3364268;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4156419;
        result[3] += 0;
        result[4] += 0;
        result[5] += 38793252;
      } else {
        result[0] += 1855850;
        result[1] += 1855850;
        result[2] += 20414350;
        result[3] += 12195586;
        result[4] += 530242;
        result[5] += 6097793;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 493674;
        result[1] += 0;
        result[2] += 23202696;
        result[3] += 15303906;
        result[4] += 0;
        result[5] += 3949395;
      } else {
        result[0] += 54643;
        result[1] += 0;
        result[2] += 40326792;
        result[3] += 2458950;
        result[4] += 0;
        result[5] += 109286;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42509163;
        result[5] += 440509;
      } else {
        result[0] += 2021161;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2021161;
        result[4] += 24253932;
        result[5] += 14653417;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 646554;
        result[1] += 923648;
        result[2] += 92364;
        result[3] += 2216757;
        result[4] += 877466;
        result[5] += 38192881;
      } else {
        result[0] += 2887372;
        result[1] += 1804608;
        result[2] += 240614;
        result[3] += 18046081;
        result[4] += 1804608;
        result[5] += 18166388;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 26242828;
        result[1] += 3396722;
        result[2] += 1509654;
        result[3] += 2792860;
        result[4] += 5787009;
        result[5] += 3220596;
      } else {
        result[0] += 421075;
        result[1] += 41475909;
        result[2] += 0;
        result[3] += 526344;
        result[4] += 526344;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 401398;
        result[1] += 0;
        result[2] += 16658050;
        result[3] += 19668541;
        result[4] += 602098;
        result[5] += 5619583;
      } else {
        result[0] += 1570203;
        result[1] += 646554;
        result[2] += 36715043;
        result[3] += 3094223;
        result[4] += 323277;
        result[5] += 600371;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 376751;
        result[1] += 1883757;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39370533;
        result[5] += 1318630;
      } else {
        result[0] += 1033272;
        result[1] += 241096;
        result[2] += 585520;
        result[3] += 6199632;
        result[4] += 3168700;
        result[5] += 31721450;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 42455998;
        result[2] += 0;
        result[3] += 98734;
        result[4] += 394939;
        result[5] += 0;
      } else {
        result[0] += 26906304;
        result[1] += 2053916;
        result[2] += 1848524;
        result[3] += 3400372;
        result[4] += 4085011;
        result[5] += 4655543;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35957865;
        result[4] += 0;
        result[5] += 6991807;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5052902;
        result[3] += 17685159;
        result[4] += 0;
        result[5] += 20211610;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25587039;
        result[3] += 13250431;
        result[4] += 0;
        result[5] += 4112202;
      } else {
        result[0] += 634483;
        result[1] += 0;
        result[2] += 39337995;
        result[3] += 2684354;
        result[4] += 0;
        result[5] += 292838;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 349184;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35267617;
        result[5] += 7332870;
      } else {
        result[0] += 22061580;
        result[1] += 1877581;
        result[2] += 0;
        result[3] += 1173488;
        result[4] += 15490045;
        result[5] += 2346976;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 40177;
        result[1] += 40177;
        result[2] += 80354;
        result[3] += 2651710;
        result[4] += 3736501;
        result[5] += 36400751;
      } else {
        result[0] += 260301;
        result[1] += 650752;
        result[2] += 2082408;
        result[3] += 25509502;
        result[4] += 1561806;
        result[5] += 12884901;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
        result[0] += 831771;
        result[1] += 33119642;
        result[2] += 907387;
        result[3] += 756156;
        result[4] += 7107868;
        result[5] += 226846;
      } else {
        result[0] += 34866640;
        result[1] += 1644006;
        result[2] += 1233004;
        result[3] += 1301505;
        result[4] += 2671510;
        result[5] += 1233004;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3711700;
        result[1] += 1590728;
        result[2] += 19751547;
        result[3] += 9676932;
        result[4] += 662803;
        result[5] += 7555960;
      } else {
        result[0] += 50410;
        result[1] += 0;
        result[2] += 38412735;
        result[3] += 4083243;
        result[4] += 0;
        result[5] += 403283;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 389271;
        result[1] += 3373690;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36332049;
        result[5] += 2854661;
      } else {
        result[0] += 2281475;
        result[1] += 72427;
        result[2] += 144855;
        result[3] += 6446072;
        result[4] += 2064191;
        result[5] += 31940650;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
        result[0] += 2427131;
        result[1] += 39572794;
        result[2] += 0;
        result[3] += 0;
        result[4] += 949747;
        result[5] += 0;
      } else {
        result[0] += 25930927;
        result[1] += 2567917;
        result[2] += 1409836;
        result[3] += 3272835;
        result[4] += 5312063;
        result[5] += 4456091;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 383479;
        result[1] += 0;
        result[2] += 13805252;
        result[3] += 21474836;
        result[4] += 191739;
        result[5] += 7094365;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34528168;
        result[3] += 6737203;
        result[4] += 0;
        result[5] += 1684300;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 1894838;
        result[1] += 0;
        result[2] += 28422577;
        result[3] += 3158064;
        result[4] += 1263225;
        result[5] += 8210966;
      } else {
        result[0] += 321319;
        result[1] += 0;
        result[2] += 39950693;
        result[3] += 2677660;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 610658;
        result[1] += 1017764;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40710590;
        result[5] += 610658;
      } else {
        result[0] += 0;
        result[1] += 2603010;
        result[2] += 0;
        result[3] += 0;
        result[4] += 24728599;
        result[5] += 15618062;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        result[0] += 103994;
        result[1] += 0;
        result[2] += 155991;
        result[3] += 1351926;
        result[4] += 2443867;
        result[5] += 38893892;
      } else {
        result[0] += 4526312;
        result[1] += 402338;
        result[2] += 502923;
        result[3] += 15087707;
        result[4] += 3118126;
        result[5] += 19312265;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 308435;
        result[1] += 35470106;
        result[2] += 308435;
        result[3] += 308435;
        result[4] += 6245823;
        result[5] += 308435;
      } else {
        result[0] += 32045194;
        result[1] += 1184609;
        result[2] += 1032736;
        result[3] += 2399592;
        result[4] += 3584201;
        result[5] += 2703338;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 419703;
        result[1] += 1259110;
        result[2] += 14969429;
        result[3] += 12870911;
        result[4] += 2378320;
        result[5] += 11052195;
      } else {
        result[0] += 1552890;
        result[1] += 0;
        result[2] += 37800616;
        result[3] += 3146645;
        result[4] += 0;
        result[5] += 449520;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 390451;
        result[1] += 1757032;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38264254;
        result[5] += 2537935;
      } else {
        result[0] += 1267255;
        result[1] += 548002;
        result[2] += 650752;
        result[3] += 6130774;
        result[4] += 3527764;
        result[5] += 30825124;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 29059679;
        result[1] += 2799326;
        result[2] += 1066410;
        result[3] += 2825987;
        result[4] += 4985467;
        result[5] += 2212801;
      } else {
        result[0] += 214212;
        result[1] += 42628353;
        result[2] += 0;
        result[3] += 0;
        result[4] += 107106;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4697620;
        result[3] += 4026531;
        result[4] += 8053063;
        result[5] += 26172456;
      } else {
        result[0] += 1777227;
        result[1] += 2073432;
        result[2] += 3554455;
        result[3] += 22807757;
        result[4] += 592409;
        result[5] += 12144390;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12064514;
        result[3] += 15925159;
        result[4] += 0;
        result[5] += 14959998;
      } else {
        result[0] += 1731176;
        result[1] += 247310;
        result[2] += 37137864;
        result[3] += 3544790;
        result[4] += 41218;
        result[5] += 247310;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 205500;
        result[1] += 411001;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41305666;
        result[5] += 1027504;
      } else {
        result[0] += 0;
        result[1] += 16519104;
        result[2] += 0;
        result[3] += 6607641;
        result[4] += 3303820;
        result[5] += 16519104;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1694837;
        result[1] += 82675;
        result[2] += 0;
        result[3] += 2190888;
        result[4] += 3058975;
        result[5] += 35922296;
      } else {
        result[0] += 0;
        result[1] += 329116;
        result[2] += 1151906;
        result[3] += 24848278;
        result[4] += 1481023;
        result[5] += 15139348;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 10105805;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32338577;
        result[5] += 505290;
      } else {
        result[0] += 0;
        result[1] += 40538776;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2410896;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
        result[0] += 35497522;
        result[1] += 898250;
        result[2] += 598833;
        result[3] += 1131130;
        result[4] += 3493195;
        result[5] += 1330741;
      } else {
        result[0] += 2285504;
        result[1] += 534273;
        result[2] += 28197781;
        result[3] += 7064286;
        result[4] += 623319;
        result[5] += 4244508;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 648296;
        result[1] += 2593187;
        result[2] += 0;
        result[3] += 486222;
        result[4] += 36304629;
        result[5] += 2917336;
      } else {
        result[0] += 2870064;
        result[1] += 168827;
        result[2] += 371420;
        result[3] += 6618031;
        result[4] += 2735002;
        result[5] += 30186326;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 26757547;
        result[1] += 2063943;
        result[2] += 2973060;
        result[3] += 2702782;
        result[4] += 5159857;
        result[5] += 3292480;
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 1101273;
        result[2] += 18538106;
        result[3] += 14500103;
        result[4] += 1101273;
        result[5] += 7708915;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41564199;
        result[3] += 1385473;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 21474836;
        result[1] += 10737418;
        result[2] += 7158278;
        result[3] += 0;
        result[4] += 3579139;
        result[5] += 0;
      } else {
        result[0] += 318538;
        result[1] += 0;
        result[2] += 39286474;
        result[3] += 3132300;
        result[4] += 0;
        result[5] += 212359;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1073741;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40981146;
        result[5] += 894784;
      } else {
        result[0] += 1260137;
        result[1] += 840091;
        result[2] += 560060;
        result[3] += 6440700;
        result[4] += 1575171;
        result[5] += 32273511;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 162688;
        result[1] += 37987684;
        result[2] += 244032;
        result[3] += 0;
        result[4] += 4555268;
        result[5] += 0;
      } else {
        result[0] += 27812472;
        result[1] += 926269;
        result[2] += 2949438;
        result[3] += 3631953;
        result[4] += 4046336;
        result[5] += 3583201;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0;
        result[1] += 39045157;
        result[2] += 0;
        result[3] += 3904515;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 373475;
        result[1] += 0;
        result[2] += 15312492;
        result[3] += 7096032;
        result[4] += 2987803;
        result[5] += 17179869;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 900142;
        result[1] += 0;
        result[2] += 31119224;
        result[3] += 9515795;
        result[4] += 0;
        result[5] += 1414510;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41539174;
        result[3] += 1269448;
        result[4] += 0;
        result[5] += 141049;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 397682;
        result[1] += 198841;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39768215;
        result[5] += 2584934;
      } else {
        result[0] += 0;
        result[1] += 39768215;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 3181457;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 2043060;
        result[1] += 408612;
        result[2] += 0;
        result[3] += 1407441;
        result[4] += 2133863;
        result[5] += 36956695;
      } else {
        result[0] += 0;
        result[1] += 624268;
        result[2] += 1623098;
        result[3] += 20101445;
        result[4] += 624268;
        result[5] += 19976592;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 27301342;
        result[1] += 1767160;
        result[2] += 1203717;
        result[3] += 2330602;
        result[4] += 5967366;
        result[5] += 4379483;
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 1814774;
        result[1] += 3478318;
        result[2] += 11947268;
        result[3] += 17089130;
        result[4] += 1512312;
        result[5] += 7107868;
      } else {
        result[0] += 1607741;
        result[1] += 137806;
        result[2] += 37069931;
        result[3] += 3353289;
        result[4] += 45935;
        result[5] += 734967;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 466844;
        result[1] += 155614;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39992992;
        result[5] += 2334221;
      } else {
        result[0] += 2111791;
        result[1] += 148717;
        result[2] += 535383;
        result[3] += 7168193;
        result[4] += 2141534;
        result[5] += 30844051;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 27138248;
        result[1] += 2998276;
        result[2] += 2280740;
        result[3] += 2947024;
        result[4] += 4715238;
        result[5] += 2870145;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3067833;
        result[4] += 0;
        result[5] += 39881839;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15405860;
        result[3] += 21474836;
        result[4] += 0;
        result[5] += 6068975;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1390457;
        result[1] += 0;
        result[2] += 32443997;
        result[3] += 8033751;
        result[4] += 0;
        result[5] += 1081466;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41272958;
        result[3] += 1612224;
        result[4] += 0;
        result[5] += 64488;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2471923;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39705273;
        result[5] += 772476;
      } else {
        result[0] += 2249310;
        result[1] += 91188;
        result[2] += 820694;
        result[3] += 7295061;
        result[4] += 2674855;
        result[5] += 29818562;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 338853;
        result[1] += 38459864;
        result[2] += 84713;
        result[3] += 1355413;
        result[4] += 2626114;
        result[5] += 84713;
      } else {
        result[0] += 28606204;
        result[1] += 1237897;
        result[2] += 2045222;
        result[3] += 2879458;
        result[4] += 3632961;
        result[5] += 4547929;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6710886;
        result[3] += 2684354;
        result[4] += 2684354;
        result[5] += 30870077;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21297358;
        result[3] += 18102754;
        result[4] += 0;
        result[5] += 3549559;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10737418;
        result[3] += 21474836;
        result[4] += 0;
        result[5] += 10737418;
      } else {
        result[0] += 346767;
        result[1] += 99076;
        result[2] += 39432456;
        result[3] += 2675066;
        result[4] += 99076;
        result[5] += 297229;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 160860;
        result[2] += 321720;
        result[3] += 1608601;
        result[4] += 36836985;
        result[5] += 4021504;
      } else {
        result[0] += 1462261;
        result[1] += 204036;
        result[2] += 102018;
        result[3] += 6495160;
        result[4] += 2414431;
        result[5] += 32271765;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41799235;
        result[2] += 0;
        result[3] += 383479;
        result[4] += 766958;
        result[5] += 0;
      } else {
        result[0] += 27296473;
        result[1] += 1787556;
        result[2] += 2029118;
        result[3] += 3406020;
        result[4] += 5024483;
        result[5] += 3406020;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10855411;
        result[3] += 22654772;
        result[4] += 0;
        result[5] += 9439488;
      } else {
        result[0] += 867670;
        result[1] += 0;
        result[2] += 30802290;
        result[3] += 8676701;
        result[4] += 0;
        result[5] += 2603010;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7158278;
        result[3] += 14316557;
        result[4] += 0;
        result[5] += 21474836;
      } else {
        result[0] += 589698;
        result[1] += 0;
        result[2] += 39952041;
        result[3] += 2014801;
        result[4] += 0;
        result[5] += 393132;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 308990;
        result[1] += 1699447;
        result[2] += 0;
        result[3] += 2008437;
        result[4] += 36769863;
        result[5] += 2162933;
      } else {
        result[0] += 1646520;
        result[1] += 210194;
        result[2] += 70064;
        result[3] += 6936407;
        result[4] += 1961812;
        result[5] += 32124673;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 39723839;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3225833;
        result[5] += 0;
      } else {
        result[0] += 26861501;
        result[1] += 1436443;
        result[2] += 2657421;
        result[3] += 3447465;
        result[4] += 5099375;
        result[5] += 3447465;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12604795;
        result[3] += 17740082;
        result[4] += 933688;
        result[5] += 11671106;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39214918;
        result[3] += 0;
        result[4] += 0;
        result[5] += 3734754;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1394469;
        result[1] += 0;
        result[2] += 34582853;
        result[3] += 6275114;
        result[4] += 0;
        result[5] += 697234;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41538181;
        result[3] += 1075422;
        result[4] += 0;
        result[5] += 336069;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 836681;
        result[1] += 139446;
        result[2] += 418340;
        result[3] += 139446;
        result[4] += 38347922;
        result[5] += 3067833;
      } else {
        result[0] += 2305791;
        result[1] += 344148;
        result[2] += 275318;
        result[3] += 6401153;
        result[4] += 1927228;
        result[5] += 31696032;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 416987;
        result[1] += 32524995;
        result[2] += 347489;
        result[3] += 347489;
        result[4] += 8826227;
        result[5] += 486484;
      } else {
        result[0] += 32859087;
        result[1] += 1067273;
        result[2] += 1714105;
        result[3] += 2522646;
        result[4] += 2328596;
        result[5] += 2457963;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 704092;
        result[2] += 3755162;
        result[3] += 17132929;
        result[4] += 1642883;
        result[5] += 19714603;
      } else {
        result[0] += 208493;
        result[1] += 416987;
        result[2] += 24602239;
        result[3] += 12718107;
        result[4] += 0;
        result[5] += 5003845;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 1282079;
        result[1] += 5128319;
        result[2] += 19231196;
        result[3] += 4487279;
        result[4] += 4487279;
        result[5] += 8333518;
      } else {
        result[0] += 940142;
        result[1] += 0;
        result[2] += 38842734;
        result[3] += 3166796;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4566488;
        result[1] += 2344953;
        result[2] += 246837;
        result[3] += 0;
        result[4] += 31718580;
        result[5] += 4072813;
      } else {
        result[0] += 111557;
        result[1] += 37185;
        result[2] += 148743;
        result[3] += 6061295;
        result[4] += 2417081;
        result[5] += 34173809;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 27409969;
        result[1] += 2019422;
        result[2] += 1231355;
        result[3] += 2832117;
        result[4] += 5023929;
        result[5] += 4432879;
      } else {
        result[0] += 1168698;
        result[1] += 41586191;
        result[2] += 0;
        result[3] += 0;
        result[4] += 194783;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5781686;
        result[3] += 27256523;
        result[4] += 825955;
        result[5] += 9085507;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30607812;
        result[3] += 7898790;
        result[4] += 0;
        result[5] += 4443069;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 987348;
        result[1] += 0;
        result[2] += 33174919;
        result[3] += 7108911;
        result[4] += 98734;
        result[5] += 1579758;
      } else {
        result[0] += 335544;
        result[1] += 0;
        result[2] += 41020293;
        result[3] += 1509949;
        result[4] += 0;
        result[5] += 83886;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 12073410;
        result[1] += 1484435;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26422955;
        result[5] += 2968871;
      } else {
        result[0] += 537831;
        result[1] += 384165;
        result[2] += 76833;
        result[3] += 4033734;
        result[4] += 3073321;
        result[5] += 34843786;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 40669159;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2280513;
        result[5] += 0;
      } else {
        result[0] += 25525771;
        result[1] += 1024935;
        result[2] += 2293902;
        result[3] += 5588338;
        result[4] += 3514064;
        result[5] += 5002660;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8825275;
        result[3] += 27652529;
        result[4] += 0;
        result[5] += 6471868;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30541989;
        result[3] += 10021590;
        result[4] += 0;
        result[5] += 2386092;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1328340;
        result[1] += 0;
        result[2] += 34832037;
        result[3] += 5608548;
        result[4] += 0;
        result[5] += 1180747;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41324932;
        result[3] += 1624740;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8695983;
        result[1] += 2120971;
        result[2] += 318145;
        result[3] += 106048;
        result[4] += 26830289;
        result[5] += 4878234;
      } else {
        result[0] += 65422;
        result[1] += 883199;
        result[2] += 392533;
        result[3] += 7654397;
        result[4] += 3434665;
        result[5] += 30519455;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 39167940;
        result[2] += 90041;
        result[3] += 540247;
        result[4] += 2251031;
        result[5] += 900412;
      } else {
        result[0] += 27933848;
        result[1] += 1380130;
        result[2] += 2981082;
        result[3] += 3395121;
        result[4] += 3671148;
        result[5] += 3588340;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8180890;
        result[3] += 12782640;
        result[4] += 1533916;
        result[5] += 20452225;
      } else {
        result[0] += 7405116;
        result[1] += 1110767;
        result[2] += 23326115;
        result[3] += 7034860;
        result[4] += 1110767;
        result[5] += 2962046;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
        result[0] += 4294967;
        result[1] += 30064771;
        result[2] += 8589934;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 198611;
        result[1] += 0;
        result[2] += 39076754;
        result[3] += 3128126;
        result[4] += 0;
        result[5] += 546180;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6082468;
        result[1] += 3227432;
        result[2] += 0;
        result[3] += 372396;
        result[4] += 27805568;
        result[5] += 5461808;
      } else {
        result[0] += 36993;
        result[1] += 184968;
        result[2] += 1146804;
        result[3] += 6621870;
        result[4] += 2256615;
        result[5] += 32702421;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 40964604;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1985068;
        result[5] += 0;
      } else {
        result[0] += 26285105;
        result[1] += 1323710;
        result[2] += 2694696;
        result[3] += 4325696;
        result[4] += 4987551;
        result[5] += 3332913;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3789677;
        result[3] += 20211610;
        result[4] += 1263225;
        result[5] += 17685159;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 266768;
        result[2] += 25076206;
        result[3] += 14672248;
        result[4] += 1067072;
        result[5] += 1867377;
      } else {
        result[0] += 476630;
        result[1] += 52958;
        result[2] += 39719179;
        result[3] += 2065397;
        result[4] += 105917;
        result[5] += 529589;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 169093;
        result[1] += 2198211;
        result[2] += 0;
        result[3] += 169093;
        result[4] += 38384156;
        result[5] += 2029118;
      } else {
        result[0] += 1172687;
        result[1] += 586343;
        result[2] += 403111;
        result[3] += 5790143;
        result[4] += 3151597;
        result[5] += 31845789;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 26642070;
        result[1] += 2038450;
        result[2] += 1848826;
        result[3] += 3484327;
        result[4] += 4503552;
        result[5] += 4432444;
      } else {
        result[0] += 456911;
        result[1] += 42492761;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8259552;
        result[3] += 17510251;
        result[4] += 0;
        result[5] += 17179869;
      } else {
        result[0] += 3152269;
        result[1] += 2758235;
        result[2] += 24430089;
        result[3] += 2364202;
        result[4] += 3546303;
        result[5] += 6698572;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32351701;
        result[3] += 9110536;
        result[4] += 0;
        result[5] += 1487434;
      } else {
        result[0] += 132560;
        result[1] += 0;
        result[2] += 40629860;
        result[3] += 1855850;
        result[4] += 0;
        result[5] += 331401;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 163306;
        result[1] += 163306;
        result[2] += 163306;
        result[3] += 326613;
        result[4] += 38867004;
        result[5] += 3266134;
      } else {
        result[0] += 1479808;
        result[1] += 598970;
        result[2] += 458035;
        result[3] += 4474658;
        result[4] += 1726442;
        result[5] += 34211757;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 28241551;
        result[1] += 2398329;
        result[2] += 1248110;
        result[3] += 2985675;
        result[4] += 5261640;
        result[5] += 2814366;
      } else {
        result[0] += 676372;
        result[1] += 40018724;
        result[2] += 1127288;
        result[3] += 225457;
        result[4] += 901830;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1193046;
        result[3] += 4772185;
        result[4] += 7158278;
        result[5] += 29826161;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9203501;
        result[3] += 25100458;
        result[4] += 836681;
        result[5] += 7809031;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 802797;
        result[1] += 802797;
        result[2] += 20069940;
        result[3] += 4415386;
        result[4] += 2809791;
        result[5] += 14048958;
      } else {
        result[0] += 848621;
        result[1] += 0;
        result[2] += 38046526;
        result[3] += 3488776;
        result[4] += 94291;
        result[5] += 471456;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40495405;
        result[5] += 2454267;
      } else {
        result[0] += 0;
        result[1] += 36507222;
        result[2] += 0;
        result[3] += 2147483;
        result[4] += 4294967;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1967480;
        result[1] += 41861;
        result[2] += 0;
        result[3] += 2553538;
        result[4] += 2344231;
        result[5] += 36042561;
      } else {
        result[0] += 1193046;
        result[1] += 0;
        result[2] += 994205;
        result[3] += 25053975;
        result[4] += 596523;
        result[5] += 15111921;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 95656;
        result[1] += 41227859;
        result[2] += 0;
        result[3] += 95656;
        result[4] += 1530500;
        result[5] += 0;
      } else {
        result[0] += 30327164;
        result[1] += 1712462;
        result[2] += 1132435;
        result[3] += 2430592;
        result[4] += 5606934;
        result[5] += 1740083;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 1193046;
        result[1] += 954437;
        result[2] += 5010795;
        result[3] += 15748213;
        result[4] += 1431655;
        result[5] += 18611524;
      } else {
        result[0] += 1665009;
        result[1] += 340570;
        result[2] += 35873383;
        result[3] += 3784112;
        result[4] += 75682;
        result[5] += 1210915;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 336860;
        result[1] += 2526451;
        result[2] += 0;
        result[3] += 505290;
        result[4] += 37223049;
        result[5] += 2358021;
      } else {
        result[0] += 1335587;
        result[1] += 562352;
        result[2] += 281176;
        result[3] += 6431906;
        result[4] += 1651910;
        result[5] += 32686739;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 38555208;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4394464;
        result[5] += 0;
      } else {
        result[0] += 29139820;
        result[1] += 669880;
        result[2] += 1983878;
        result[3] += 3323639;
        result[4] += 4096579;
        result[5] += 3735874;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2202547;
        result[3] += 3303820;
        result[4] += 4405094;
        result[5] += 33038209;
      } else {
        result[0] += 0;
        result[1] += 3131746;
        result[2] += 4473924;
        result[3] += 23264406;
        result[4] += 3131746;
        result[5] += 8947848;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1167815;
        result[1] += 129757;
        result[2] += 28806125;
        result[3] += 10121070;
        result[4] += 129757;
        result[5] += 2595146;
      } else {
        result[0] += 307662;
        result[1] += 0;
        result[2] += 40488373;
        result[3] += 2092104;
        result[4] += 0;
        result[5] += 61532;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 756822;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38030327;
        result[5] += 4162523;
      } else {
        result[0] += 2063542;
        result[1] += 1084234;
        result[2] += 209851;
        result[3] += 5456147;
        result[4] += 2133493;
        result[5] += 32002402;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42680000))) ) ) {
        result[0] += 0;
        result[1] += 39167412;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3782260;
        result[5] += 0;
      } else {
        result[0] += 29306526;
        result[1] += 1338077;
        result[2] += 865815;
        result[3] += 2466261;
        result[4] += 5168653;
        result[5] += 3804338;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5139277;
        result[3] += 29000206;
        result[4] += 0;
        result[5] += 8810189;
      } else {
        result[0] += 987348;
        result[1] += 0;
        result[2] += 24190045;
        result[3] += 13329208;
        result[4] += 1481023;
        result[5] += 2962046;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 416987;
        result[1] += 0;
        result[2] += 22517304;
        result[3] += 11675639;
        result[4] += 0;
        result[5] += 8339742;
      } else {
        result[0] += 797100;
        result[1] += 0;
        result[2] += 38495285;
        result[3] += 3188403;
        result[4] += 46888;
        result[5] += 421994;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7134961;
        result[1] += 419703;
        result[2] += 0;
        result[3] += 559604;
        result[4] += 29938859;
        result[5] += 4896542;
      } else {
        result[0] += 36001;
        result[1] += 180007;
        result[2] += 180007;
        result[3] += 6156239;
        result[4] += 2772107;
        result[5] += 33625309;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 79097;
        result[1] += 35751845;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7118730;
        result[5] += 0;
      } else {
        result[0] += 30942840;
        result[1] += 1037973;
        result[2] += 1655147;
        result[3] += 3254188;
        result[4] += 2889494;
        result[5] += 3170028;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 167119;
        result[1] += 668477;
        result[2] += 7019012;
        result[3] += 19385844;
        result[4] += 2673909;
        result[5] += 13035309;
      } else {
        result[0] += 511305;
        result[1] += 2045222;
        result[2] += 30678337;
        result[3] += 5624361;
        result[4] += 0;
        result[5] += 4090445;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1799567;
        result[1] += 0;
        result[2] += 32392211;
        result[3] += 6958326;
        result[4] += 0;
        result[5] += 1799567;
      } else {
        result[0] += 310666;
        result[1] += 0;
        result[2] += 41085672;
        result[3] += 1398000;
        result[4] += 0;
        result[5] += 155333;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 371858;
        result[1] += 0;
        result[2] += 0;
        result[3] += 557787;
        result[4] += 37185864;
        result[5] += 4834162;
      } else {
        result[0] += 2429874;
        result[1] += 164180;
        result[2] += 229852;
        result[3] += 6403047;
        result[4] += 3250777;
        result[5] += 30471939;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 141281;
        result[1] += 35461736;
        result[2] += 282563;
        result[3] += 0;
        result[4] += 7064090;
        result[5] += 0;
      } else {
        result[0] += 31162948;
        result[1] += 1063679;
        result[2] += 2127359;
        result[3] += 3076047;
        result[4] += 2961055;
        result[5] += 2558581;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 858993;
        result[4] += 8589934;
        result[5] += 33500744;
      } else {
        result[0] += 5343021;
        result[1] += 1849507;
        result[2] += 15823563;
        result[3] += 12741051;
        result[4] += 411001;
        result[5] += 6781527;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 545970;
        result[1] += 0;
        result[2] += 31484294;
        result[3] += 8735526;
        result[4] += 0;
        result[5] += 2183881;
      } else {
        result[0] += 435721;
        result[1] += 0;
        result[2] += 40771066;
        result[3] += 1742885;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2329473;
        result[2] += 145592;
        result[3] += 727960;
        result[4] += 38145133;
        result[5] += 1601513;
      } else {
        result[0] += 2491452;
        result[1] += 0;
        result[2] += 74371;
        result[3] += 5652251;
        result[4] += 2603010;
        result[5] += 32128586;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 234697;
        result[1] += 37238696;
        result[2] += 78232;
        result[3] += 234697;
        result[4] += 5085116;
        result[5] += 78232;
      } else {
        result[0] += 30256833;
        result[1] += 1224747;
        result[2] += 1725780;
        result[3] += 2171143;
        result[4] += 3395891;
        result[5] += 4175276;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 1853942;
        result[2] += 3398894;
        result[3] += 26882169;
        result[4] += 1544952;
        result[5] += 9269713;
      } else {
        result[0] += 0;
        result[1] += 1741202;
        result[2] += 9866816;
        result[3] += 8125613;
        result[4] += 2321603;
        result[5] += 20894435;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 12984784;
        result[1] += 998829;
        result[2] += 18977762;
        result[3] += 4494733;
        result[4] += 0;
        result[5] += 5493562;
      } else {
        result[0] += 174414;
        result[1] += 174414;
        result[2] += 38458488;
        result[3] += 3706316;
        result[4] += 0;
        result[5] += 436037;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42738098;
        result[5] += 211574;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4772185;
        result[3] += 954437;
        result[4] += 20043180;
        result[5] += 17179869;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 378828;
        result[1] += 94707;
        result[2] += 0;
        result[3] += 2036202;
        result[4] += 2415031;
        result[5] += 38024903;
      } else {
        result[0] += 2056101;
        result[1] += 685367;
        result[2] += 228455;
        result[3] += 16334583;
        result[4] += 2513012;
        result[5] += 21132152;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        result[0] += 240389;
        result[1] += 36539274;
        result[2] += 80129;
        result[3] += 80129;
        result[4] += 5849489;
        result[5] += 160259;
      } else {
        result[0] += 30598860;
        result[1] += 1835931;
        result[2] += 1196137;
        result[3] += 2809531;
        result[4] += 3783131;
        result[5] += 2726080;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 4370317;
        result[1] += 1356305;
        result[2] += 19741779;
        result[3] += 11076494;
        result[4] += 1205604;
        result[5] += 5199170;
      } else {
        result[0] += 66588;
        result[1] += 0;
        result[2] += 40818836;
        result[3] += 1997659;
        result[4] += 0;
        result[5] += 66588;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 348240;
        result[1] += 3946726;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36217021;
        result[5] += 2437684;
      } else {
        result[0] += 82595;
        result[1] += 40719593;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2064888;
        result[5] += 82595;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1468043;
        result[1] += 263494;
        result[2] += 188210;
        result[3] += 6361520;
        result[4] += 2070317;
        result[5] += 32598086;
      } else {
        result[0] += 30213453;
        result[1] += 1037973;
        result[2] += 1514880;
        result[3] += 3731095;
        result[4] += 3226134;
        result[5] += 3226134;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 239942;
        result[1] += 959769;
        result[2] += 5278730;
        result[3] += 27353422;
        result[4] += 959769;
        result[5] += 8158038;
      } else {
        result[0] += 2135619;
        result[1] += 711873;
        result[2] += 23966392;
        result[3] += 3322074;
        result[4] += 3084783;
        result[5] += 9728931;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1793721;
        result[1] += 0;
        result[2] += 33682110;
        result[3] += 6776282;
        result[4] += 99651;
        result[5] += 597907;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42314054;
        result[3] += 635618;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 519971;
        result[1] += 3847791;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36710011;
        result[5] += 1871898;
      } else {
        result[0] += 0;
        result[1] += 42155941;
        result[2] += 0;
        result[3] += 0;
        result[4] += 793731;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1600608;
        result[1] += 152438;
        result[2] += 190548;
        result[3] += 6516764;
        result[4] += 1943596;
        result[5] += 32545714;
      } else {
        result[0] += 28566758;
        result[1] += 696750;
        result[2] += 2239554;
        result[3] += 3483750;
        result[4] += 3458867;
        result[5] += 4503992;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7051438;
        result[3] += 30128875;
        result[4] += 0;
        result[5] += 5769359;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30574343;
        result[3] += 5823684;
        result[4] += 0;
        result[5] += 6551645;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 810371;
        result[1] += 0;
        result[2] += 30996697;
        result[3] += 8306304;
        result[4] += 0;
        result[5] += 2836299;
      } else {
        result[0] += 701219;
        result[1] += 0;
        result[2] += 40203231;
        result[3] += 1694612;
        result[4] += 175304;
        result[5] += 175304;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 325376;
        result[1] += 0;
        result[2] += 1138817;
        result[3] += 488064;
        result[4] += 38882469;
        result[5] += 2114946;
      } else {
        result[0] += 1321528;
        result[1] += 173885;
        result[2] += 208662;
        result[3] += 6503310;
        result[4] += 2121400;
        result[5] += 32620885;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 36578018;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6214329;
        result[5] += 157324;
      } else {
        result[0] += 28667121;
        result[1] += 1020182;
        result[2] += 2346419;
        result[3] += 3876692;
        result[4] += 3213574;
        result[5] += 3825683;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 232160;
        result[1] += 0;
        result[2] += 18804991;
        result[3] += 16947708;
        result[4] += 0;
        result[5] += 6964811;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35531093;
        result[3] += 5856773;
        result[4] += 0;
        result[5] += 1561806;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14316557;
        result[5] += 28633115;
      } else {
        result[0] += 268771;
        result[1] += 0;
        result[2] += 40154450;
        result[3] += 2365188;
        result[4] += 0;
        result[5] += 161262;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 162074;
        result[1] += 2593187;
        result[2] += 162074;
        result[3] += 0;
        result[4] += 39059891;
        result[5] += 972445;
      } else {
        result[0] += 1287417;
        result[1] += 214569;
        result[2] += 715231;
        result[3] += 6007947;
        result[4] += 2610596;
        result[5] += 32113910;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41841294;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1108378;
        result[5] += 0;
      } else {
        result[0] += 25664757;
        result[1] += 1432451;
        result[2] += 2315796;
        result[3] += 3986990;
        result[4] += 5085203;
        result[5] += 4464474;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8825275;
        result[3] += 6471868;
        result[4] += 2353406;
        result[5] += 25299122;
      } else {
        result[0] += 4521018;
        result[1] += 5274521;
        result[2] += 13563054;
        result[3] += 15070060;
        result[4] += 753503;
        result[5] += 3767515;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 454493;
        result[1] += 0;
        result[2] += 33405301;
        result[3] += 8180890;
        result[4] += 0;
        result[5] += 908987;
      } else {
        result[0] += 511305;
        result[1] += 0;
        result[2] += 40904450;
        result[3] += 1314785;
        result[4] += 0;
        result[5] += 219130;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 279802;
        result[1] += 279802;
        result[2] += 0;
        result[3] += 1678814;
        result[4] += 36514217;
        result[5] += 4197036;
      } else {
        result[0] += 2067096;
        result[1] += 131244;
        result[2] += 229677;
        result[3] += 6955943;
        result[4] += 2657695;
        result[5] += 30908015;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 36835840;
        result[2] += 305691;
        result[3] += 152845;
        result[4] += 5655295;
        result[5] += 0;
      } else {
        result[0] += 30078319;
        result[1] += 1571659;
        result[2] += 2763953;
        result[3] += 3603978;
        result[4] += 2411685;
        result[5] += 2520075;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 2260509;
        result[1] += 1808407;
        result[2] += 9946240;
        result[3] += 16727767;
        result[4] += 452101;
        result[5] += 11754647;
      } else {
        result[0] += 2317918;
        result[1] += 0;
        result[2] += 29451204;
        result[3] += 7771845;
        result[4] += 0;
        result[5] += 3408704;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 21474836;
        result[4] += 0;
        result[5] += 21474836;
      } else {
        result[0] += 132356;
        result[1] += 66178;
        result[2] += 40699613;
        result[3] += 1919168;
        result[4] += 0;
        result[5] += 132356;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4481705;
        result[1] += 622459;
        result[2] += 746950;
        result[3] += 0;
        result[4] += 32990328;
        result[5] += 4108229;
      } else {
        result[0] += 0;
        result[1] += 556433;
        result[2] += 556433;
        result[3] += 6851081;
        result[4] += 1808407;
        result[5] += 33177318;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 162074;
        result[1] += 36790851;
        result[2] += 0;
        result[3] += 162074;
        result[4] += 5753635;
        result[5] += 81037;
      } else {
        result[0] += 27370632;
        result[1] += 1110985;
        result[2] += 2903710;
        result[3] += 4191443;
        result[4] += 3585451;
        result[5] += 3787449;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10183943;
        result[3] += 19039545;
        result[4] += 2213900;
        result[5] += 11512283;
      } else {
        result[0] += 756822;
        result[1] += 0;
        result[2] += 34057009;
        result[3] += 7000607;
        result[4] += 189205;
        result[5] += 946028;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 14316557;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 28633115;
      } else {
        result[0] += 250801;
        result[1] += 0;
        result[2] += 40253562;
        result[3] += 2069108;
        result[4] += 0;
        result[5] += 376201;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1767476;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38354234;
        result[5] += 2827962;
      } else {
        result[0] += 1200576;
        result[1] += 271098;
        result[2] += 38728;
        result[3] += 6196526;
        result[4] += 3369361;
        result[5] += 31873382;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 705538;
        result[1] += 36599823;
        result[2] += 0;
        result[3] += 793731;
        result[4] += 4674194;
        result[5] += 176384;
      } else {
        result[0] += 27418874;
        result[1] += 1304488;
        result[2] += 1993652;
        result[3] += 3470432;
        result[4] += 3568883;
        result[5] += 5193341;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 403283;
        result[1] += 1008208;
        result[2] += 7662382;
        result[3] += 12905066;
        result[4] += 4436116;
        result[5] += 16534615;
      } else {
        result[0] += 2202547;
        result[1] += 1101273;
        result[2] += 27531841;
        result[3] += 6607641;
        result[4] += 1101273;
        result[5] += 4405094;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42930000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 175126;
        result[1] += 0;
        result[2] += 39753621;
        result[3] += 2889580;
        result[4] += 0;
        result[5] += 131344;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41481308;
        result[5] += 1468364;
      } else {
        result[0] += 1572201;
        result[1] += 250122;
        result[2] += 107195;
        result[3] += 6896245;
        result[4] += 2000983;
        result[5] += 32122925;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27222970;
        result[1] += 3298305;
        result[2] += 1744755;
        result[3] += 2939793;
        result[4] += 4636748;
        result[5] += 3107099;
      } else {
        result[0] += 667611;
        result[1] += 41948255;
        result[2] += 0;
        result[3] += 0;
        result[4] += 333805;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 5413824;
        result[2] += 2165529;
        result[3] += 21294375;
        result[4] += 1443686;
        result[5] += 12632256;
      } else {
        result[0] += 631612;
        result[1] += 0;
        result[2] += 21474836;
        result[3] += 4421289;
        result[4] += 1894838;
        result[5] += 14527095;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 201641;
        result[1] += 0;
        result[2] += 28431473;
        result[3] += 11090291;
        result[4] += 0;
        result[5] += 3226266;
      } else {
        result[0] += 532214;
        result[1] += 0;
        result[2] += 40075717;
        result[3] += 2022413;
        result[4] += 0;
        result[5] += 319328;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 293171;
        result[1] += 0;
        result[2] += 732929;
        result[3] += 0;
        result[4] += 36353306;
        result[5] += 5570264;
      } else {
        result[0] += 1611956;
        result[1] += 1038816;
        result[2] += 1038816;
        result[3] += 6877679;
        result[4] += 1361207;
        result[5] += 31021198;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 152303;
        result[1] += 34116052;
        result[2] += 0;
        result[3] += 533063;
        result[4] += 7919797;
        result[5] += 228455;
      } else {
        result[0] += 28163719;
        result[1] += 1141116;
        result[2] += 2646418;
        result[3] += 3933209;
        result[4] += 3131999;
        result[5] += 3933209;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 715827;
        result[2] += 0;
        result[3] += 7874106;
        result[4] += 6442450;
        result[5] += 27917287;
      } else {
        result[0] += 1073741;
        result[1] += 0;
        result[2] += 24696061;
        result[3] += 9663676;
        result[4] += 0;
        result[5] += 7516192;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11369031;
        result[3] += 26527739;
        result[4] += 0;
        result[5] += 5052902;
      } else {
        result[0] += 198153;
        result[1] += 0;
        result[2] += 39085688;
        result[3] += 3170448;
        result[4] += 99076;
        result[5] += 396306;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3534952;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36763506;
        result[5] += 2651214;
      } else {
        result[0] += 1536411;
        result[1] += 104755;
        result[2] += 244429;
        result[3] += 6320236;
        result[4] += 2583964;
        result[5] += 32159877;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 174592;
        result[1] += 40767270;
        result[2] += 0;
        result[3] += 349184;
        result[4] += 1658625;
        result[5] += 0;
      } else {
        result[0] += 27418990;
        result[1] += 1897070;
        result[2] += 1315302;
        result[3] += 2959429;
        result[4] += 5387679;
        result[5] += 3971200;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14316557;
        result[3] += 17318416;
        result[4] += 0;
        result[5] += 11314698;
      } else {
        result[0] += 2935409;
        result[1] += 0;
        result[2] += 32289502;
        result[3] += 6334304;
        result[4] += 0;
        result[5] += 1390457;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14316557;
        result[3] += 0;
        result[4] += 0;
        result[5] += 28633115;
      } else {
        result[0] += 61709;
        result[1] += 0;
        result[2] += 41406940;
        result[3] += 1357604;
        result[4] += 0;
        result[5] += 123418;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9047509;
        result[1] += 1143938;
        result[2] += 0;
        result[3] += 519971;
        result[4] += 28494456;
        result[5] += 3743797;
      } else {
        result[0] += 0;
        result[1] += 303799;
        result[2] += 189874;
        result[3] += 4367119;
        result[4] += 3797495;
        result[5] += 34291383;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 272408;
        result[1] += 41224421;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1452843;
        result[5] += 0;
      } else {
        result[0] += 25130391;
        result[1] += 1140037;
        result[2] += 2974010;
        result[3] += 6468473;
        result[4] += 2627042;
        result[5] += 4609716;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 913822;
        result[3] += 9138228;
        result[4] += 5482936;
        result[5] += 27414684;
      } else {
        result[0] += 2221534;
        result[1] += 2221534;
        result[2] += 8145627;
        result[3] += 18512790;
        result[4] += 740511;
        result[5] += 11107674;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2559177;
        result[1] += 1223954;
        result[2] += 29708711;
        result[3] += 7677532;
        result[4] += 0;
        result[5] += 1780297;
      } else {
        result[0] += 146836;
        result[1] += 0;
        result[2] += 41114216;
        result[3] += 1688619;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2477865;
        result[2] += 206488;
        result[3] += 412977;
        result[4] += 39232874;
        result[5] += 619466;
      } else {
        result[0] += 1272852;
        result[1] += 654609;
        result[2] += 109101;
        result[3] += 6837035;
        result[4] += 2218399;
        result[5] += 31857674;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41973544;
        result[2] += 0;
        result[3] += 0;
        result[4] += 976128;
        result[5] += 0;
      } else {
        result[0] += 24704972;
        result[1] += 1136116;
        result[2] += 3319243;
        result[3] += 3965270;
        result[4] += 5970182;
        result[5] += 3853886;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2770946;
        result[4] += 2770946;
        result[5] += 37407779;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8589934;
        result[3] += 11657768;
        result[4] += 1227133;
        result[5] += 21474836;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 4955731;
        result[1] += 14867194;
        result[2] += 8259552;
        result[3] += 1651910;
        result[4] += 0;
        result[5] += 13215283;
      } else {
        result[0] += 478281;
        result[1] += 0;
        result[2] += 38262514;
        result[3] += 3730595;
        result[4] += 0;
        result[5] += 478281;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7661293;
        result[1] += 464320;
        result[2] += 464320;
        result[3] += 928641;
        result[4] += 28091407;
        result[5] += 5339689;
      } else {
        result[0] += 132868;
        result[1] += 166085;
        result[2] += 132868;
        result[3] += 7407406;
        result[4] += 3620660;
        result[5] += 31489783;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 26907611;
        result[1] += 2485750;
        result[2] += 2383245;
        result[3] += 2870145;
        result[4] += 4997127;
        result[5] += 3305792;
      } else {
        result[0] += 306054;
        result[1] += 42643618;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 913822;
        result[3] += 26500862;
        result[4] += 0;
        result[5] += 15534988;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 27678678;
        result[3] += 14793776;
        result[4] += 0;
        result[5] += 477218;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 810371;
        result[1] += 0;
        result[2] += 34197664;
        result[3] += 6807117;
        result[4] += 162074;
        result[5] += 972445;
      } else {
        result[0] += 194049;
        result[1] += 0;
        result[2] += 41591324;
        result[3] += 1034931;
        result[4] += 0;
        result[5] += 129366;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 160860;
        result[1] += 1126021;
        result[2] += 0;
        result[3] += 804300;
        result[4] += 39089028;
        result[5] += 1769462;
      } else {
        result[0] += 342911;
        result[1] += 39606285;
        result[2] += 85727;
        result[3] += 257183;
        result[4] += 2486108;
        result[5] += 171455;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 3897635;
        result[1] += 264887;
        result[2] += 378411;
        result[3] += 2459672;
        result[4] += 3254336;
        result[5] += 32694729;
      } else {
        result[0] += 27874972;
        result[1] += 1428129;
        result[2] += 1004980;
        result[3] += 5104240;
        result[4] += 3067833;
        result[5] += 4469516;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3459034;
        result[3] += 22483721;
        result[4] += 864758;
        result[5] += 16142158;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21661574;
        result[3] += 7842983;
        result[4] += 4108229;
        result[5] += 9336885;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1443686;
        result[1] += 1082764;
        result[2] += 29776033;
        result[3] += 8481658;
        result[4] += 451152;
        result[5] += 1714377;
      } else {
        result[0] += 76833;
        result[1] += 0;
        result[2] += 40414182;
        result[3] += 1843993;
        result[4] += 76833;
        result[5] += 537831;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 335544;
        result[1] += 3858759;
        result[2] += 0;
        result[3] += 1006632;
        result[4] += 35399925;
        result[5] += 2348810;
      } else {
        result[0] += 2317428;
        result[1] += 77247;
        result[2] += 154495;
        result[3] += 5986690;
        result[4] += 2896785;
        result[5] += 31517026;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 42555639;
        result[2] += 0;
        result[3] += 0;
        result[4] += 394033;
        result[5] += 0;
      } else {
        result[0] += 27435911;
        result[1] += 1720979;
        result[2] += 1596271;
        result[3] += 2868299;
        result[4] += 5063172;
        result[5] += 4265037;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3142658;
        result[3] += 0;
        result[4] += 7332870;
        result[5] += 32474142;
      } else {
        result[0] += 347770;
        result[1] += 1738853;
        result[2] += 11476430;
        result[3] += 18779614;
        result[4] += 1391082;
        result[5] += 9215921;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 10987125;
        result[1] += 0;
        result[2] += 20975421;
        result[3] += 6991807;
        result[4] += 0;
        result[5] += 3995318;
      } else {
        result[0] += 177294;
        result[1] += 0;
        result[2] += 38738920;
        result[3] += 3457249;
        result[4] += 0;
        result[5] += 576208;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 158485;
        result[1] += 2218802;
        result[2] += 0;
        result[3] += 2060316;
        result[4] += 34549921;
        result[5] += 3962146;
      } else {
        result[0] += 2142614;
        result[1] += 97391;
        result[2] += 64927;
        result[3] += 6330450;
        result[4] += 2629571;
        result[5] += 31684717;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 40056221;
        result[2] += 271261;
        result[3] += 0;
        result[4] += 2531770;
        result[5] += 90420;
      } else {
        result[0] += 28527652;
        result[1] += 1291917;
        result[2] += 3005686;
        result[3] += 3190245;
        result[4] += 4403066;
        result[5] += 2531104;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1122867;
        result[1] += 3930035;
        result[2] += 11790106;
        result[3] += 14035840;
        result[4] += 2245734;
        result[5] += 9825088;
      } else {
        result[0] += 1629526;
        result[1] += 0;
        result[2] += 31659379;
        result[3] += 8496818;
        result[4] += 0;
        result[5] += 1163947;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        result[0] += 142453;
        result[1] += 0;
        result[2] += 41311459;
        result[3] += 1495759;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 557787;
        result[1] += 371858;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39974803;
        result[5] += 2045222;
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1305272;
        result[4] += 1367428;
        result[5] += 40276972;
      } else {
        result[0] += 2890843;
        result[1] += 825955;
        result[2] += 1101273;
        result[3] += 12939965;
        result[4] += 3028502;
        result[5] += 22163132;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 40904450;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2045222;
        result[5] += 0;
      } else {
        result[0] += 30674306;
        result[1] += 1185207;
        result[2] += 536165;
        result[3] += 2567950;
        result[4] += 5164119;
        result[5] += 2821923;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 489920;
        result[2] += 11594778;
        result[3] += 17473821;
        result[4] += 489920;
        result[5] += 12901232;
      } else {
        result[0] += 1430211;
        result[1] += 0;
        result[2] += 38095623;
        result[3] += 2730403;
        result[4] += 86679;
        result[5] += 606756;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 163930;
        result[1] += 2950740;
        result[2] += 0;
        result[3] += 163930;
        result[4] += 38195701;
        result[5] += 1475370;
      } else {
        result[0] += 1408723;
        result[1] += 65522;
        result[2] += 163805;
        result[3] += 7731596;
        result[4] += 1932899;
        result[5] += 31647127;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41164236;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1785436;
        result[5] += 0;
      } else {
        result[0] += 26542752;
        result[1] += 1652845;
        result[2] += 2868172;
        result[3] += 3961967;
        result[4] += 5468973;
        result[5] += 2454961;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 390451;
        result[1] += 2342709;
        result[2] += 7418579;
        result[3] += 16398966;
        result[4] += 1561806;
        result[5] += 14837159;
      } else {
        result[0] += 10611095;
        result[1] += 1010580;
        result[2] += 26780384;
        result[3] += 4547612;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28780708;
        result[3] += 11512283;
        result[4] += 0;
        result[5] += 2656680;
      } else {
        result[0] += 282192;
        result[1] += 0;
        result[2] += 39789118;
        result[3] += 2709046;
        result[4] += 0;
        result[5] += 169315;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 303531;
        result[1] += 2580015;
        result[2] += 0;
        result[3] += 1365890;
        result[4] += 36271985;
        result[5] += 2428250;
      } else {
        result[0] += 2839647;
        result[1] += 96806;
        result[2] += 64537;
        result[3] += 6582819;
        result[4] += 2613766;
        result[5] += 30752094;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 0;
        result[1] += 39632767;
        result[2] += 0;
        result[3] += 85048;
        result[4] += 3146807;
        result[5] += 85048;
      } else {
        result[0] += 27174867;
        result[1] += 1544026;
        result[2] += 4349008;
        result[3] += 3345390;
        result[4] += 3499793;
        result[5] += 3036585;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1263225;
        result[3] += 0;
        result[4] += 1263225;
        result[5] += 40423221;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9761289;
        result[3] += 21474836;
        result[4] += 0;
        result[5] += 11713547;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 894784;
        result[1] += 447392;
        result[2] += 23711798;
        result[3] += 8500456;
        result[4] += 4921316;
        result[5] += 4473924;
      } else {
        result[0] += 459082;
        result[1] += 0;
        result[2] += 39736098;
        result[3] += 2601464;
        result[4] += 0;
        result[5] += 153027;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13657242;
        result[1] += 941878;
        result[2] += 0;
        result[3] += 0;
        result[4] += 25619103;
        result[5] += 2731448;
      } else {
        result[0] += 266768;
        result[1] += 228658;
        result[2] += 190548;
        result[3] += 4801826;
        result[4] += 2172254;
        result[5] += 35289615;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27986389;
        result[1] += 1860443;
        result[2] += 2524887;
        result[3] += 4411909;
        result[4] += 3136176;
        result[5] += 3029865;
      } else {
        result[0] += 620959;
        result[1] += 42328713;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1651910;
        result[1] += 0;
        result[2] += 6607641;
        result[3] += 0;
        result[4] += 8259552;
        result[5] += 26430567;
      } else {
        result[0] += 842150;
        result[1] += 0;
        result[2] += 13755124;
        result[3] += 19650177;
        result[4] += 842150;
        result[5] += 7860070;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        result[0] += 11523082;
        result[1] += 9427976;
        result[2] += 7332870;
        result[3] += 5237764;
        result[4] += 0;
        result[5] += 9427976;
      } else {
        result[0] += 222306;
        result[1] += 0;
        result[2] += 38058923;
        result[3] += 3868138;
        result[4] += 44461;
        result[5] += 755843;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 42849557;
        result[2] += 0;
        result[3] += 0;
        result[4] += 100115;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 19676943;
        result[1] += 3196254;
        result[2] += 349590;
        result[3] += 0;
        result[4] += 17379635;
        result[5] += 2347249;
      } else {
        result[0] += 2640540;
        result[1] += 1191748;
        result[2] += 1308586;
        result[3] += 8856325;
        result[4] += 4042597;
        result[5] += 24909875;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 41781441;
        result[1] += 0;
        result[2] += 687194;
        result[3] += 137438;
        result[4] += 343597;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2238072;
        result[1] += 0;
        result[2] += 29734388;
        result[3] += 9272013;
        result[4] += 0;
        result[5] += 1705197;
      } else {
        result[0] += 643923;
        result[1] += 0;
        result[2] += 40438372;
        result[3] += 1738592;
        result[4] += 0;
        result[5] += 128784;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 360921;
        result[3] += 360921;
        result[4] += 38438152;
        result[5] += 3789677;
      } else {
        result[0] += 1171687;
        result[1] += 1098457;
        result[2] += 73230;
        result[3] += 6444281;
        result[4] += 2196914;
        result[5] += 31965101;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41656564;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1293108;
        result[5] += 0;
      } else {
        result[0] += 25146940;
        result[1] += 1208540;
        result[2] += 2905145;
        result[3] += 3579139;
        result[4] += 5833532;
        result[5] += 4276374;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 943948;
        result[1] += 2359872;
        result[2] += 2831846;
        result[3] += 11799360;
        result[4] += 4719744;
        result[5] += 20294900;
      } else {
        result[0] += 1695381;
        result[1] += 0;
        result[2] += 22039963;
        result[3] += 16388690;
        result[4] += 0;
        result[5] += 2825636;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 987348;
        result[1] += 2468372;
        result[2] += 20734324;
        result[3] += 9379813;
        result[4] += 987348;
        result[5] += 8392464;
      } else {
        result[0] += 1215556;
        result[1] += 0;
        result[2] += 39556243;
        result[3] += 2177872;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4193311;
        result[1] += 762420;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32784069;
        result[5] += 5209871;
      } else {
        result[0] += 68609;
        result[1] += 137219;
        result[2] += 68609;
        result[3] += 7135408;
        result[4] += 1749547;
        result[5] += 33790277;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 93776;
        result[1] += 41918130;
        result[2] += 0;
        result[3] += 0;
        result[4] += 937765;
        result[5] += 0;
      } else {
        result[0] += 26237450;
        result[1] += 1526005;
        result[2] += 3052011;
        result[3] += 3765787;
        result[4] += 4971824;
        result[5] += 3396593;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 2078209;
        result[1] += 0;
        result[2] += 10391049;
        result[3] += 9005576;
        result[4] += 1385473;
        result[5] += 20089363;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 363980;
        result[1] += 0;
        result[2] += 31180977;
        result[3] += 9584814;
        result[4] += 0;
        result[5] += 1819901;
      } else {
        result[0] += 141982;
        result[1] += 0;
        result[2] += 40606963;
        result[3] += 2129735;
        result[4] += 0;
        result[5] += 70991;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 306783;
        result[1] += 2761050;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36353830;
        result[5] += 3528008;
      } else {
        result[0] += 2524471;
        result[1] += 201957;
        result[2] += 370255;
        result[3] += 6092390;
        result[4] += 3029365;
        result[5] += 30731231;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 37161533;
        result[2] += 251658;
        result[3] += 83886;
        result[4] += 4949278;
        result[5] += 503316;
      } else {
        result[0] += 30995489;
        result[1] += 1337730;
        result[2] += 654633;
        result[3] += 2049288;
        result[4] += 3415480;
        result[5] += 4497049;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5433392;
        result[3] += 26908228;
        result[4] += 0;
        result[5] += 10608051;
      } else {
        result[0] += 0;
        result[1] += 627002;
        result[2] += 22885592;
        result[3] += 12226549;
        result[4] += 0;
        result[5] += 7210529;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 7648571;
        result[1] += 0;
        result[2] += 24710770;
        result[3] += 3530110;
        result[4] += 1176703;
        result[5] += 5883516;
      } else {
        result[0] += 590373;
        result[1] += 0;
        result[2] += 39063047;
        result[3] += 2853471;
        result[4] += 49197;
        result[5] += 393582;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3205199;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38462393;
        result[5] += 1282079;
      } else {
        result[0] += 2515490;
        result[1] += 186332;
        result[2] += 341609;
        result[3] += 7235917;
        result[4] += 3478209;
        result[5] += 29192113;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 85727;
        result[1] += 38234638;
        result[2] += 0;
        result[3] += 85727;
        result[4] += 4114938;
        result[5] += 428639;
      } else {
        result[0] += 29346200;
        result[1] += 1371317;
        result[2] += 1727860;
        result[3] += 2824914;
        result[4] += 3181457;
        result[5] += 4497922;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6710886;
        result[3] += 28856811;
        result[4] += 0;
        result[5] += 7381975;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24778657;
        result[3] += 4955731;
        result[4] += 0;
        result[5] += 13215283;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 799594;
        result[1] += 0;
        result[2] += 32783393;
        result[3] += 7082126;
        result[4] += 114227;
        result[5] += 2170329;
      } else {
        result[0] += 401398;
        result[1] += 0;
        result[2] += 41076478;
        result[3] += 1404895;
        result[4] += 0;
        result[5] += 66899;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 483939;
        result[1] += 2298714;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37505348;
        result[5] += 2661669;
      } else {
        result[0] += 4348320;
        result[1] += 186737;
        result[2] += 1360517;
        result[3] += 8349843;
        result[4] += 2134145;
        result[5] += 26570108;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42640000))) ) ) {
        result[0] += 292174;
        result[1] += 40612275;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2045222;
        result[5] += 0;
      } else {
        result[0] += 30837247;
        result[1] += 2162933;
        result[2] += 2657317;
        result[3] += 2224731;
        result[4] += 3491592;
        result[5] += 1575851;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 858993;
        result[3] += 6012954;
        result[4] += 2576980;
        result[5] += 33500744;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20452225;
        result[3] += 11248723;
        result[4] += 0;
        result[5] += 11248723;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1351563;
        result[1] += 1501736;
        result[2] += 29584215;
        result[3] += 7809031;
        result[4] += 0;
        result[5] += 2703126;
      } else {
        result[0] += 197621;
        result[1] += 0;
        result[2] += 40973461;
        result[3] += 1580969;
        result[4] += 0;
        result[5] += 197621;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0;
        result[1] += 1605595;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40541280;
        result[5] += 802797;
      } else {
        result[0] += 3067833;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9203501;
        result[5] += 30678337;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50648;
        result[3] += 2684354;
        result[4] += 2177872;
        result[5] += 38036797;
      } else {
        result[0] += 5253500;
        result[1] += 921666;
        result[2] += 553000;
        result[3] += 14931002;
        result[4] += 2119833;
        result[5] += 19170669;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 27770868;
        result[1] += 2513531;
        result[2] += 1927854;
        result[3] += 3050402;
        result[4] += 5027063;
        result[5] += 2659951;
      } else {
        result[0] += 880430;
        result[1] += 191397;
        result[2] += 34068813;
        result[3] += 5052902;
        result[4] += 497634;
        result[5] += 2258494;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
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
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 373475;
        result[1] += 2987803;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38654705;
        result[5] += 933688;
      } else {
        result[0] += 1758790;
        result[1] += 211054;
        result[2] += 35175;
        result[3] += 6648229;
        result[4] += 2075373;
        result[5] += 32221048;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 79832;
        result[1] += 36802600;
        result[2] += 319328;
        result[3] += 79832;
        result[4] += 5428583;
        result[5] += 239496;
      } else {
        result[0] += 28353084;
        result[1] += 1522665;
        result[2] += 2599032;
        result[3] += 3754158;
        result[4] += 4200457;
        result[5] += 2520274;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 660764;
        result[1] += 2973438;
        result[2] += 2643056;
        result[3] += 13876048;
        result[4] += 2312674;
        result[5] += 20483690;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34725267;
        result[3] += 4569114;
        result[4] += 0;
        result[5] += 3655291;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1590728;
        result[3] += 12725829;
        result[4] += 0;
        result[5] += 28633115;
      } else {
        result[0] += 689262;
        result[1] += 86157;
        result[2] += 38038677;
        result[3] += 3747865;
        result[4] += 0;
        result[5] += 387710;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 12283272;
        result[1] += 1921872;
        result[2] += 83559;
        result[3] += 1336954;
        result[4] += 22477552;
        result[5] += 4846461;
      } else {
        result[0] += 641952;
        result[1] += 91707;
        result[2] += 611383;
        result[3] += 9140179;
        result[4] += 3423746;
        result[5] += 29040704;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        result[0] += 100349;
        result[1] += 41043028;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1806294;
        result[5] += 0;
      } else {
        result[0] += 30962273;
        result[1] += 1211162;
        result[2] += 2453379;
        result[3] += 1583827;
        result[4] += 4409872;
        result[5] += 2329157;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5368709;
        result[3] += 29911379;
        result[4] += 1533916;
        result[5] += 6135667;
      } else {
        result[0] += 1460873;
        result[1] += 0;
        result[2] += 24834844;
        result[3] += 13147859;
        result[4] += 0;
        result[5] += 3506095;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6607641;
        result[3] += 16519104;
        result[4] += 0;
        result[5] += 19822925;
      } else {
        result[0] += 390451;
        result[1] += 0;
        result[2] += 39533221;
        result[3] += 2489128;
        result[4] += 0;
        result[5] += 536870;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5717758;
        result[1] += 1329711;
        result[2] += 398913;
        result[3] += 0;
        result[4] += 30051473;
        result[5] += 5451816;
      } else {
        result[0] += 121441;
        result[1] += 161921;
        result[2] += 485764;
        result[3] += 6112535;
        result[4] += 2671704;
        result[5] += 33396305;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 95656;
        result[1] += 38262514;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4591501;
        result[5] += 0;
      } else {
        result[0] += 28139440;
        result[1] += 1230002;
        result[2] += 2510208;
        result[3] += 3037352;
        result[4] += 3815517;
        result[5] += 4217150;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2928386;
        result[1] += 1561806;
        result[2] += 5271096;
        result[3] += 13665805;
        result[4] += 3904515;
        result[5] += 15618062;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36814005;
        result[3] += 4090445;
        result[4] += 0;
        result[5] += 2045222;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        result[0] += 28082478;
        result[1] += 0;
        result[2] += 14867194;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 88738;
        result[1] += 44369;
        result[2] += 37536594;
        result[3] += 4880644;
        result[4] += 0;
        result[5] += 399325;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 4359553;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35845215;
        result[5] += 2744903;
      } else {
        result[0] += 1611434;
        result[1] += 263091;
        result[2] += 98659;
        result[3] += 6708830;
        result[4] += 2236276;
        result[5] += 32031379;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 40043986;
        result[2] += 0;
        result[3] += 726421;
        result[4] += 2179264;
        result[5] += 0;
      } else {
        result[0] += 27993751;
        result[1] += 1296007;
        result[2] += 1581128;
        result[3] += 2980816;
        result[4] += 5365469;
        result[5] += 3732500;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5583457;
        result[3] += 28346784;
        result[4] += 0;
        result[5] += 9019431;
      } else {
        result[0] += 6442450;
        result[1] += 0;
        result[2] += 36507222;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 405185;
        result[1] += 0;
        result[2] += 22285207;
        result[3] += 10534825;
        result[4] += 0;
        result[5] += 9724454;
      } else {
        result[0] += 430453;
        result[1] += 0;
        result[2] += 38932108;
        result[3] += 3204485;
        result[4] += 0;
        result[5] += 382625;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 285379;
        result[1] += 2283039;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36956695;
        result[5] += 3424558;
      } else {
        result[0] += 2800304;
        result[1] += 105011;
        result[2] += 280030;
        result[3] += 6510708;
        result[4] += 2100228;
        result[5] += 31153389;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 499414;
        result[1] += 41551311;
        result[2] += 99882;
        result[3] += 299648;
        result[4] += 499414;
        result[5] += 0;
      } else {
        result[0] += 29492645;
        result[1] += 1557899;
        result[2] += 1772781;
        result[3] += 2256267;
        result[4] += 4351373;
        result[5] += 3518703;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9439488;
        result[4] += 3303820;
        result[5] += 30206363;
      } else {
        result[0] += 360921;
        result[1] += 902304;
        result[2] += 12451795;
        result[3] += 18948385;
        result[4] += 1985068;
        result[5] += 8301197;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 7976367;
        result[1] += 0;
        result[2] += 22701969;
        result[3] += 6749234;
        result[4] += 613566;
        result[5] += 4908534;
      } else {
        result[0] += 49367;
        result[1] += 0;
        result[2] += 40086361;
        result[3] += 2715209;
        result[4] += 0;
        result[5] += 98734;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6961917;
        result[1] += 2249234;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29347158;
        result[5] += 4391363;
      } else {
        result[0] += 299416;
        result[1] += 299416;
        result[2] += 632102;
        result[3] += 8516743;
        result[4] += 2428602;
        result[5] += 30773390;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        result[0] += 102750;
        result[1] += 40586413;
        result[2] += 0;
        result[3] += 205500;
        result[4] += 2055008;
        result[5] += 0;
      } else {
        result[0] += 28230676;
        result[1] += 1977945;
        result[2] += 2774261;
        result[3] += 2774261;
        result[4] += 3878828;
        result[5] += 3313700;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6135667;
        result[4] += 4090445;
        result[5] += 32723560;
      } else {
        result[0] += 0;
        result[1] += 2454267;
        result[2] += 17486652;
        result[3] += 15339168;
        result[4] += 613566;
        result[5] += 7056017;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 10283724;
        result[1] += 3629549;
        result[2] += 20567449;
        result[3] += 6049249;
        result[4] += 604924;
        result[5] += 1814774;
      } else {
        result[0] += 54297;
        result[1] += 0;
        result[2] += 39203114;
        result[3] += 3366472;
        result[4] += 0;
        result[5] += 325787;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1812222;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41137450;
        result[5] += 0;
      } else {
        result[0] += 1751617;
        result[1] += 315291;
        result[2] += 105097;
        result[3] += 5605177;
        result[4] += 2031876;
        result[5] += 33140612;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 154495;
        result[1] += 34838673;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7956504;
        result[5] += 0;
      } else {
        result[0] += 31801533;
        result[1] += 997465;
        result[2] += 1261499;
        result[3] += 2581674;
        result[4] += 3197755;
        result[5] += 3109744;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 1022611;
        result[2] += 3323486;
        result[3] += 22753100;
        result[4] += 2300875;
        result[5] += 13549599;
      } else {
        result[0] += 3937053;
        result[1] += 1431655;
        result[2] += 22190664;
        result[3] += 7516192;
        result[4] += 0;
        result[5] += 7874106;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2129735;
        result[1] += 0;
        result[2] += 18812666;
        result[3] += 14908150;
        result[4] += 354955;
        result[5] += 6744163;
      } else {
        result[0] += 1103631;
        result[1] += 0;
        result[2] += 39040976;
        result[3] += 2667110;
        result[4] += 0;
        result[5] += 137953;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 306783;
        result[1] += 153391;
        result[2] += 306783;
        result[3] += 1533916;
        result[4] += 38347922;
        result[5] += 2300875;
      } else {
        result[0] += 1758569;
        result[1] += 541098;
        result[2] += 507279;
        result[3] += 6696090;
        result[4] += 2773128;
        result[5] += 30673506;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41484438;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1465234;
        result[5] += 0;
      } else {
        result[0] += 27989674;
        result[1] += 1879524;
        result[2] += 1600135;
        result[3] += 3530458;
        result[4] += 4952800;
        result[5] += 2997079;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6857510;
        result[3] += 17685159;
        result[4] += 1082764;
        result[5] += 17324237;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28856811;
        result[3] += 8724152;
        result[4] += 671088;
        result[5] += 4697620;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10737418;
        result[3] += 12884901;
        result[4] += 0;
        result[5] += 19327352;
      } else {
        result[0] += 564508;
        result[1] += 235211;
        result[2] += 37916140;
        result[3] += 3387049;
        result[4] += 235211;
        result[5] += 611550;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7552829;
        result[1] += 2141847;
        result[2] += 450915;
        result[3] += 0;
        result[4] += 28182200;
        result[5] += 4621880;
      } else {
        result[0] += 283964;
        result[1] += 0;
        result[2] += 354955;
        result[3] += 7844527;
        result[4] += 2094240;
        result[5] += 32371984;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 93981;
        result[1] += 42385782;
        result[2] += 0;
        result[3] += 0;
        result[4] += 469908;
        result[5] += 0;
      } else {
        result[0] += 27638075;
        result[1] += 1389623;
        result[2] += 2341773;
        result[3] += 2882182;
        result[4] += 4580612;
        result[5] += 4117404;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 1022611;
        result[2] += 3067833;
        result[3] += 5113056;
        result[4] += 7669584;
        result[5] += 26076587;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11760029;
        result[3] += 20452225;
        result[4] += 0;
        result[5] += 10737418;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 429496;
        result[1] += 429496;
        result[2] += 23622320;
        result[3] += 12884901;
        result[4] += 1288490;
        result[5] += 4294967;
      } else {
        result[0] += 459627;
        result[1] += 51069;
        result[2] += 39374789;
        result[3] += 2655627;
        result[4] += 0;
        result[5] += 408558;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 178956;
        result[1] += 894784;
        result[2] += 0;
        result[3] += 1073741;
        result[4] += 37759920;
        result[5] += 3042268;
      } else {
        result[0] += 993876;
        result[1] += 212973;
        result[2] += 319460;
        result[3] += 6389207;
        result[4] += 3088116;
        result[5] += 31946037;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41030645;
        result[2] += 0;
        result[3] += 182764;
        result[4] += 1736263;
        result[5] += 0;
      } else {
        result[0] += 26419777;
        result[1] += 1940567;
        result[2] += 2665358;
        result[3] += 4325361;
        result[4] += 4605925;
        result[5] += 2992682;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2684354;
        result[3] += 30870077;
        result[4] += 1342177;
        result[5] += 8053063;
      } else {
        result[0] += 511305;
        result[1] += 1022611;
        result[2] += 23775711;
        result[3] += 10226112;
        result[4] += 511305;
        result[5] += 6902626;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 465158;
        result[1] += 0;
        result[2] += 33336388;
        result[3] += 7597595;
        result[4] += 0;
        result[5] += 1550529;
      } else {
        result[0] += 72550;
        result[1] += 0;
        result[2] += 42079071;
        result[3] += 798051;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2526451;
        result[2] += 0;
        result[3] += 1082764;
        result[4] += 36633544;
        result[5] += 2706912;
      } else {
        result[0] += 2020783;
        result[1] += 224531;
        result[2] += 160379;
        result[3] += 6768021;
        result[4] += 2469846;
        result[5] += 31306109;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41791479;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1158193;
        result[5] += 0;
      } else {
        result[0] += 28275839;
        result[1] += 1837419;
        result[2] += 2679569;
        result[3] += 3368601;
        result[4] += 4236271;
        result[5] += 2551971;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 596523;
        result[2] += 9544371;
        result[3] += 20580051;
        result[4] += 1193046;
        result[5] += 11035679;
      } else {
        result[0] += 6471868;
        result[1] += 2941758;
        result[2] += 27064177;
        result[3] += 2353406;
        result[4] += 1765055;
        result[5] += 2353406;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 1034931;
        result[1] += 0;
        result[2] += 29495558;
        result[3] += 12419182;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 627766;
        result[1] += 0;
        result[2] += 40072411;
        result[3] += 2092554;
        result[4] += 0;
        result[5] += 156941;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5928264;
        result[1] += 0;
        result[2] += 0;
        result[3] += 362954;
        result[4] += 29883293;
        result[5] += 6775159;
      } else {
        result[0] += 38042;
        result[1] += 913013;
        result[2] += 0;
        result[3] += 6353051;
        result[4] += 2016237;
        result[5] += 33629327;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 568869;
        result[1] += 40674193;
        result[2] += 0;
        result[3] += 379246;
        result[4] += 1327362;
        result[5] += 0;
      } else {
        result[0] += 26997641;
        result[1] += 2021741;
        result[2] += 1775187;
        result[3] += 3501064;
        result[4] += 5202285;
        result[5] += 3451753;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5052902;
        result[3] += 2526451;
        result[4] += 6947741;
        result[5] += 28422577;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7229152;
        result[3] += 21687458;
        result[4] += 0;
        result[5] += 14033061;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 19253301;
        result[1] += 2962046;
        result[2] += 8886139;
        result[3] += 3702558;
        result[4] += 2221534;
        result[5] += 5924092;
      } else {
        result[0] += 326790;
        result[1] += 420159;
        result[2] += 37580963;
        result[3] += 3968176;
        result[4] += 0;
        result[5] += 653581;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        result[0] += 1358092;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39893964;
        result[5] += 1697615;
      } else {
        result[0] += 19060505;
        result[1] += 0;
        result[2] += 1016560;
        result[3] += 254140;
        result[4] += 12707003;
        result[5] += 9911462;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 46888;
        result[1] += 140664;
        result[2] += 93776;
        result[3] += 1547313;
        result[4] += 3704174;
        result[5] += 37416854;
      } else {
        result[0] += 0;
        result[1] += 1157673;
        result[2] += 578836;
        result[3] += 20953883;
        result[4] += 1273440;
        result[5] += 18985839;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1006632;
        result[1] += 14092861;
        result[2] += 0;
        result[3] += 0;
        result[4] += 27850178;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 42665864;
        result[2] += 0;
        result[3] += 0;
        result[4] += 283808;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 35095063;
        result[1] += 835596;
        result[2] += 1069563;
        result[3] += 1504074;
        result[4] += 3108419;
        result[5] += 1336954;
      } else {
        result[0] += 824633;
        result[1] += 274877;
        result[2] += 33672543;
        result[3] += 5153960;
        result[4] += 274877;
        result[5] += 2748779;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 820694;
        result[1] += 4240254;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35289858;
        result[5] += 2598865;
      } else {
        result[0] += 1743087;
        result[1] += 0;
        result[2] += 348617;
        result[3] += 6205391;
        result[4] += 1917396;
        result[5] += 32735180;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 419430;
        result[1] += 38252052;
        result[2] += 83886;
        result[3] += 0;
        result[4] += 4194303;
        result[5] += 0;
      } else {
        result[0] += 28240880;
        result[1] += 1381347;
        result[2] += 2276665;
        result[3] += 4067300;
        result[4] += 3376627;
        result[5] += 3606851;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1571329;
        result[3] += 14141965;
        result[4] += 3142658;
        result[5] += 24093718;
      } else {
        result[0] += 1193046;
        result[1] += 0;
        result[2] += 27440068;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 3579139;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42910000))) ) ) {
        result[0] += 12632256;
        result[1] += 10947955;
        result[2] += 10105805;
        result[3] += 7579354;
        result[4] += 0;
        result[5] += 1684300;
      } else {
        result[0] += 233422;
        result[1] += 46684;
        result[2] += 38608021;
        result[3] += 3361278;
        result[4] += 0;
        result[5] += 700266;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1937579;
        result[2] += 0;
        result[3] += 1776114;
        result[4] += 35845215;
        result[5] += 3390763;
      } else {
        result[0] += 1519757;
        result[1] += 198229;
        result[2] += 66076;
        result[3] += 6178145;
        result[4] += 1982292;
        result[5] += 33005171;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 620959;
        result[1] += 39534397;
        result[2] += 620959;
        result[3] += 310479;
        result[4] += 1862877;
        result[5] += 0;
      } else {
        result[0] += 26861581;
        result[1] += 2020029;
        result[2] += 2549084;
        result[3] += 4040058;
        result[4] += 4593162;
        result[5] += 2885756;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1073741;
        result[1] += 1073741;
        result[2] += 9663676;
        result[3] += 0;
        result[4] += 4294967;
        result[5] += 26843545;
      } else {
        result[0] += 2793474;
        result[1] += 2793474;
        result[2] += 14316557;
        result[3] += 18506769;
        result[4] += 698368;
        result[5] += 3841027;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 643440;
        result[1] += 0;
        result[2] += 33298061;
        result[3] += 7077848;
        result[4] += 0;
        result[5] += 1930322;
      } else {
        result[0] += 409694;
        result[1] += 0;
        result[2] += 40969481;
        result[3] += 1570496;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 14538090;
        result[1] += 996897;
        result[2] += 166149;
        result[3] += 0;
        result[4] += 24590141;
        result[5] += 2658393;
      } else {
        result[0] += 139673;
        result[1] += 488858;
        result[2] += 69836;
        result[3] += 7018605;
        result[4] += 3317251;
        result[5] += 31915448;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 721169;
        result[1] += 37901483;
        result[2] += 0;
        result[3] += 641039;
        result[4] += 3445589;
        result[5] += 240389;
      } else {
        result[0] += 31890977;
        result[1] += 1116015;
        result[2] += 1623294;
        result[3] += 3280408;
        result[4] += 1995299;
        result[5] += 3043677;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4917901;
        result[3] += 9507942;
        result[4] += 4917901;
        result[5] += 23605927;
      } else {
        result[0] += 177477;
        result[1] += 0;
        result[2] += 22007270;
        result[3] += 16150496;
        result[4] += 177477;
        result[5] += 4436949;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 13071639;
        result[2] += 9336885;
        result[3] += 11204262;
        result[4] += 0;
        result[5] += 9336885;
      } else {
        result[0] += 1028441;
        result[1] += 48973;
        result[2] += 38688987;
        result[3] += 2252776;
        result[4] += 244867;
        result[5] += 685627;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
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
        result[3] += 3976821;
        result[4] += 23065565;
        result[5] += 15907286;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 534643;
        result[1] += 178214;
        result[2] += 0;
        result[3] += 1009881;
        result[4] += 1722739;
        result[5] += 39504194;
      } else {
        result[0] += 3044325;
        result[1] += 2139255;
        result[2] += 1398744;
        result[3] += 13000092;
        result[4] += 2386092;
        result[5] += 20981162;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41257471;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1692200;
        result[5] += 0;
      } else {
        result[0] += 30113157;
        result[1] += 1309267;
        result[2] += 1138493;
        result[3] += 2333911;
        result[4] += 6062478;
        result[5] += 1992363;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 911053;
        result[1] += 2212558;
        result[2] += 9761289;
        result[3] += 13275353;
        result[4] += 3514064;
        result[5] += 13275353;
      } else {
        result[0] += 1251395;
        result[1] += 0;
        result[2] += 37452472;
        result[3] += 3664800;
        result[4] += 0;
        result[5] += 581004;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 5678092;
        result[1] += 582368;
        result[2] += 0;
        result[3] += 1164736;
        result[4] += 31739080;
        result[5] += 3785394;
      } else {
        result[0] += 233603;
        result[1] += 767554;
        result[2] += 200231;
        result[3] += 7141592;
        result[4] += 2936729;
        result[5] += 31669960;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        result[0] += 621333;
        result[1] += 36115005;
        result[2] += 155333;
        result[3] += 77666;
        result[4] += 5747334;
        result[5] += 233000;
      } else {
        result[0] += 28828502;
        result[1] += 1545335;
        result[2] += 2078209;
        result[3] += 3303820;
        result[4] += 3010740;
        result[5] += 4183063;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19146239;
        result[3] += 17852574;
        result[4] += 776198;
        result[5] += 5174659;
      } else {
        result[0] += 376751;
        result[1] += 0;
        result[2] += 34661139;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 753503;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 251904;
        result[1] += 0;
        result[2] += 40745510;
        result[3] += 1637377;
        result[4] += 0;
        result[5] += 314880;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5647816;
        result[1] += 3152269;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
        result[5] += 5516471;
      } else {
        result[0] += 0;
        result[1] += 566618;
        result[2] += 642167;
        result[3] += 7328264;
        result[4] += 1699855;
        result[5] += 32712767;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 186332;
        result[1] += 41365845;
        result[2] += 0;
        result[3] += 372665;
        result[4] += 1024829;
        result[5] += 0;
      } else {
        result[0] += 25993452;
        result[1] += 1255171;
        result[2] += 3058053;
        result[3] += 3674228;
        result[4] += 5271718;
        result[5] += 3697049;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        result[0] += 3368601;
        result[1] += 7579354;
        result[2] += 6737203;
        result[3] += 2526451;
        result[4] += 5052902;
        result[5] += 17685159;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18464345;
        result[3] += 20069940;
        result[4] += 0;
        result[5] += 4415386;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29578548;
        result[3] += 11750382;
        result[4] += 0;
        result[5] += 1620742;
      } else {
        result[0] += 455095;
        result[1] += 0;
        result[2] += 39820888;
        result[3] += 2559914;
        result[4] += 0;
        result[5] += 113773;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4139727;
        result[1] += 2199230;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30789223;
        result[5] += 5821491;
      } else {
        result[0] += 39295;
        result[1] += 471542;
        result[2] += 275066;
        result[3] += 7505386;
        result[4] += 2004056;
        result[5] += 32654325;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 36635987;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6147535;
        result[5] += 166149;
      } else {
        result[0] += 28384994;
        result[1] += 1042106;
        result[2] += 2506017;
        result[3] += 3796244;
        result[4] += 3002259;
        result[5] += 4218049;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 5632743;
        result[2] += 1408185;
        result[3] += 2816371;
        result[4] += 8449115;
        result[5] += 24643254;
      } else {
        result[0] += 6722557;
        result[1] += 0;
        result[2] += 19047246;
        result[3] += 12324688;
        result[4] += 373475;
        result[5] += 4481705;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 167119;
        result[2] += 28410289;
        result[3] += 12199712;
        result[4] += 0;
        result[5] += 2172551;
      } else {
        result[0] += 178956;
        result[1] += 0;
        result[2] += 40503927;
        result[3] += 2028179;
        result[4] += 0;
        result[5] += 238609;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4377036;
        result[1] += 2462083;
        result[2] += 0;
        result[3] += 683911;
        result[4] += 30639257;
        result[5] += 4787383;
      } else {
        result[0] += 73168;
        result[1] += 621928;
        result[2] += 256088;
        result[3] += 6036368;
        result[4] += 3109644;
        result[5] += 32852475;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 38215063;
        result[2] += 0;
        result[3] += 253639;
        result[4] += 4058236;
        result[5] += 422733;
      } else {
        result[0] += 27457200;
        result[1] += 1282816;
        result[2] += 2195589;
        result[3] += 3379727;
        result[4] += 4119813;
        result[5] += 4514526;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7976367;
        result[3] += 29451204;
        result[4] += 0;
        result[5] += 5522100;
      } else {
        result[0] += 2120971;
        result[1] += 0;
        result[2] += 23860929;
        result[3] += 9544371;
        result[4] += 1590728;
        result[5] += 5832671;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1321528;
        result[1] += 0;
        result[2] += 32113140;
        result[3] += 7400559;
        result[4] += 0;
        result[5] += 2114445;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41898702;
        result[3] += 1050970;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 238609;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42472454;
        result[5] += 238609;
      } else {
        result[0] += 15477359;
        result[1] += 773867;
        result[2] += 0;
        result[3] += 0;
        result[4] += 17025095;
        result[5] += 9673349;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 49085;
        result[2] += 49085;
        result[3] += 2307011;
        result[4] += 1865242;
        result[5] += 38679248;
      } else {
        result[0] += 267599;
        result[1] += 1070396;
        result[2] += 401398;
        result[3] += 20872738;
        result[4] += 1337996;
        result[5] += 18999543;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 0;
        result[1] += 13563054;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29386618;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 42763340;
        result[2] += 0;
        result[3] += 0;
        result[4] += 186332;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 30099429;
        result[1] += 1279692;
        result[2] += 1066410;
        result[3] += 2479403;
        result[4] += 5465352;
        result[5] += 2559384;
      } else {
        result[0] += 894784;
        result[1] += 516222;
        result[2] += 33932994;
        result[3] += 5403123;
        result[4] += 137659;
        result[5] += 2064888;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 22305355;
        result[1] += 2610201;
        result[2] += 0;
        result[3] += 1898328;
        result[4] += 6169566;
        result[5] += 9966222;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1883354;
        result[4] += 3307354;
        result[5] += 37758963;
      } else {
        result[0] += 518715;
        result[1] += 622459;
        result[2] += 1348661;
        result[3] += 21578579;
        result[4] += 2074863;
        result[5] += 16806393;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        result[0] += 365218;
        result[1] += 35207044;
        result[2] += 365218;
        result[3] += 0;
        result[4] += 6939147;
        result[5] += 73043;
      } else {
        result[0] += 34563452;
        result[1] += 1154378;
        result[2] += 1358092;
        result[3] += 1935281;
        result[4] += 2648280;
        result[5] += 1290187;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 7719065;
        result[1] += 1583398;
        result[2] += 15240206;
        result[3] += 8906614;
        result[4] += 593774;
        result[5] += 8906614;
      } else {
        result[0] += 260038;
        result[1] += 0;
        result[2] += 37402187;
        result[3] += 4463992;
        result[4] += 43339;
        result[5] += 780115;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 132560;
        result[1] += 3976821;
        result[2] += 132560;
        result[3] += 662803;
        result[4] += 35658833;
        result[5] += 2386092;
      } else {
        result[0] += 33182691;
        result[1] += 125217;
        result[2] += 1001741;
        result[3] += 1126959;
        result[4] += 3631313;
        result[5] += 3881748;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 235728;
        result[1] += 94291;
        result[2] += 47145;
        result[3] += 2404427;
        result[4] += 3441631;
        result[5] += 36726449;
      } else {
        result[0] += 2204370;
        result[1] += 1066630;
        result[2] += 1351065;
        result[3] += 18061617;
        result[4] += 3697653;
        result[5] += 16568334;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 194783;
        result[1] += 42365323;
        result[2] += 0;
        result[3] += 0;
        result[4] += 389566;
        result[5] += 0;
      } else {
        result[0] += 32694185;
        result[1] += 2467485;
        result[2] += 3007248;
        result[3] += 963861;
        result[4] += 3200020;
        result[5] += 616871;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2079887;
        result[1] += 415977;
        result[2] += 28494456;
        result[3] += 8111560;
        result[4] += 1143938;
        result[5] += 2703853;
      } else {
        result[0] += 63535;
        result[1] += 63535;
        result[2] += 39836457;
        result[3] += 2732005;
        result[4] += 0;
        result[5] += 254140;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 611383;
        result[1] += 0;
        result[2] += 152845;
        result[3] += 0;
        result[4] += 38822836;
        result[5] += 3362607;
      } else {
        result[0] += 1164864;
        result[1] += 150305;
        result[2] += 37576;
        result[3] += 6275236;
        result[4] += 1615779;
        result[5] += 33705911;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 40327482;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2622190;
        result[5] += 0;
      } else {
        result[0] += 28239532;
        result[1] += 1352939;
        result[2] += 1820318;
        result[3] += 2976466;
        result[4] += 4526196;
        result[5] += 4034218;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42840000))) ) ) {
        result[0] += 0;
        result[1] += 5368709;
        result[2] += 8947848;
        result[3] += 0;
        result[4] += 3579139;
        result[5] += 25053975;
      } else {
        result[0] += 0;
        result[1] += 1804608;
        result[2] += 5413824;
        result[3] += 22016218;
        result[4] += 2165529;
        result[5] += 11549491;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 760171;
        result[2] += 31040324;
        result[3] += 8361883;
        result[4] += 126695;
        result[5] += 2660599;
      } else {
        result[0] += 1536111;
        result[1] += 0;
        result[2] += 39570228;
        result[3] += 1659000;
        result[4] += 0;
        result[5] += 184333;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5078508;
        result[1] += 290200;
        result[2] += 580400;
        result[3] += 0;
        result[4] += 31341653;
        result[5] += 5658909;
      } else {
        result[0] += 0;
        result[1] += 440133;
        result[2] += 110033;
        result[3] += 6565321;
        result[4] += 1980599;
        result[5] += 33853585;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
        result[0] += 213149;
        result[1] += 41883924;
        result[2] += 0;
        result[3] += 0;
        result[4] += 852598;
        result[5] += 0;
      } else {
        result[0] += 28208795;
        result[1] += 2164032;
        result[2] += 814694;
        result[3] += 2036736;
        result[4] += 5677401;
        result[5] += 4048013;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6951392;
        result[3] += 26067720;
        result[4] += 0;
        result[5] += 9930560;
      } else {
        result[0] += 1168698;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 8180890;
        result[4] += 292174;
        result[5] += 4674794;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6135667;
        result[3] += 9203501;
        result[4] += 0;
        result[5] += 27610504;
      } else {
        result[0] += 643096;
        result[1] += 91870;
        result[2] += 39228899;
        result[3] += 2618322;
        result[4] += 0;
        result[5] += 367483;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4786559;
        result[1] += 2716696;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31177322;
        result[5] += 4269093;
      } else {
        result[0] += 35672;
        result[1] += 463742;
        result[2] += 392397;
        result[3] += 6528064;
        result[4] += 2497074;
        result[5] += 33032721;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
        result[0] += 82754;
        result[1] += 39722240;
        result[2] += 0;
        result[3] += 331018;
        result[4] += 2317130;
        result[5] += 496528;
      } else {
        result[0] += 28651100;
        result[1] += 1645684;
        result[2] += 1375900;
        result[3] += 3102520;
        result[4] += 4370506;
        result[5] += 3803959;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 268435;
        result[1] += 0;
        result[2] += 10200547;
        result[3] += 22280142;
        result[4] += 268435;
        result[5] += 9932111;
      } else {
        result[0] += 1605595;
        result[1] += 0;
        result[2] += 28900714;
        result[3] += 11239166;
        result[4] += 0;
        result[5] += 1204196;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18721652;
        result[3] += 4405094;
        result[4] += 0;
        result[5] += 19822925;
      } else {
        result[0] += 639571;
        result[1] += 0;
        result[2] += 39604223;
        result[3] += 2656680;
        result[4] += 0;
        result[5] += 49197;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
