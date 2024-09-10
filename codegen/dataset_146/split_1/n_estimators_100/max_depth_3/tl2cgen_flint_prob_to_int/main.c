
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 493674;
        result[1] += 164558;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39329394;
        result[5] += 2962046;
      } else {
        result[0] += 1788214;
        result[1] += 975389;
        result[2] += 455181;
        result[3] += 7087833;
        result[4] += 1918266;
        result[5] += 30724784;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 40900207;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2049465;
        result[5] += 0;
      } else {
        result[0] += 26569467;
        result[1] += 1341371;
        result[2] += 2734333;
        result[3] += 4178887;
        result[4] += 4797981;
        result[5] += 3327632;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 825955;
        result[1] += 4955731;
        result[2] += 0;
        result[3] += 4129776;
        result[4] += 4955731;
        result[5] += 28082478;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21845092;
        result[3] += 17031766;
        result[4] += 0;
        result[5] += 4072813;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1481023;
        result[1] += 0;
        result[2] += 19253301;
        result[3] += 13329208;
        result[4] += 0;
        result[5] += 8886139;
      } else {
        result[0] += 143165;
        result[1] += 0;
        result[2] += 40802189;
        result[3] += 1908874;
        result[4] += 0;
        result[5] += 95443;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 167772;
        result[1] += 671088;
        result[2] += 167772;
        result[3] += 0;
        result[4] += 39258685;
        result[5] += 2684354;
      } else {
        result[0] += 1130254;
        result[1] += 445251;
        result[2] += 171250;
        result[3] += 7124028;
        result[4] += 2500260;
        result[5] += 31578627;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 26093592;
        result[1] += 2380802;
        result[2] += 1547521;
        result[3] += 3714051;
        result[4] += 4785412;
        result[5] += 4428292;
      } else {
        result[0] += 600694;
        result[1] += 41848399;
        result[2] += 0;
        result[3] += 0;
        result[4] += 500578;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12103998;
        result[3] += 24598449;
        result[4] += 390451;
        result[5] += 5856773;
      } else {
        result[0] += 2045222;
        result[1] += 0;
        result[2] += 31189643;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 2556528;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 8259552;
        result[1] += 0;
        result[2] += 26430567;
        result[3] += 4405094;
        result[4] += 0;
        result[5] += 3854457;
      } else {
        result[0] += 105917;
        result[1] += 0;
        result[2] += 40831316;
        result[3] += 1694684;
        result[4] += 0;
        result[5] += 317753;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 795364;
        result[1] += 1749801;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38813778;
        result[5] += 1590728;
      } else {
        result[0] += 2392657;
        result[1] += 384006;
        result[2] += 886169;
        result[3] += 7473361;
        result[4] += 2185884;
        result[5] += 29627594;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 374289;
        result[1] += 40423221;
        result[2] += 748578;
        result[3] += 0;
        result[4] += 1403584;
        result[5] += 0;
      } else {
        result[0] += 27131821;
        result[1] += 1763568;
        result[2] += 2197677;
        result[3] += 3581400;
        result[4] += 5317836;
        result[5] += 2957368;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 1160801;
        result[1] += 2321603;
        result[2] += 1160801;
        result[3] += 0;
        result[4] += 8125613;
        result[5] += 30180851;
      } else {
        result[0] += 1291719;
        result[1] += 1291719;
        result[2] += 17761142;
        result[3] += 16146493;
        result[4] += 0;
        result[5] += 6458597;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35957865;
        result[3] += 6849117;
        result[4] += 142689;
        result[5] += 0;
      } else {
        result[0] += 218758;
        result[1] += 0;
        result[2] += 41345440;
        result[3] += 947955;
        result[4] += 0;
        result[5] += 437517;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5938720;
        result[1] += 1696777;
        result[2] += 106048;
        result[3] += 1908874;
        result[4] += 29057309;
        result[5] += 4241943;
      } else {
        result[0] += 191397;
        result[1] += 38279;
        result[2] += 267956;
        result[3] += 7005160;
        result[4] += 2947526;
        result[5] += 32499351;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 25132439;
        result[1] += 1714124;
        result[2] += 3235107;
        result[3] += 3524818;
        result[4] += 4538807;
        result[5] += 4804376;
      } else {
        result[0] += 672589;
        result[1] += 42180998;
        result[2] += 96084;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 923648;
        result[1] += 461824;
        result[2] += 7851015;
        result[3] += 18011153;
        result[4] += 3694595;
        result[5] += 12007435;
      } else {
        result[0] += 727960;
        result[1] += 0;
        result[2] += 34942106;
        result[3] += 4367763;
        result[4] += 0;
        result[5] += 2911842;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 3181457;
        result[1] += 1060485;
        result[2] += 20679472;
        result[3] += 13786314;
        result[4] += 0;
        result[5] += 4241943;
      } else {
        result[0] += 153391;
        result[1] += 0;
        result[2] += 40290883;
        result[3] += 2454267;
        result[4] += 0;
        result[5] += 51130;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 598184;
        result[1] += 2751650;
        result[2] += 239273;
        result[3] += 1196369;
        result[4] += 33857263;
        result[5] += 4306930;
      } else {
        result[0] += 2055347;
        result[1] += 177185;
        result[2] += 212622;
        result[3] += 7760708;
        result[4] += 1630103;
        result[5] += 31113706;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 39820888;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3128784;
        result[5] += 0;
      } else {
        result[0] += 26370848;
        result[1] += 1352351;
        result[2] += 2829920;
        result[3] += 4057053;
        result[4] += 3581226;
        result[5] += 4758272;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10283724;
        result[3] += 18752674;
        result[4] += 907387;
        result[5] += 13005886;
      } else {
        result[0] += 1227133;
        result[1] += 0;
        result[2] += 34973305;
        result[3] += 613566;
        result[4] += 3681400;
        result[5] += 2454267;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 3995318;
        result[1] += 998829;
        result[2] += 17978932;
        result[3] += 10987125;
        result[4] += 0;
        result[5] += 8989466;
      } else {
        result[0] += 154866;
        result[1] += 0;
        result[2] += 40007207;
        result[3] += 2581110;
        result[4] += 0;
        result[5] += 206488;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5965232;
        result[1] += 1843799;
        result[2] += 216917;
        result[3] += 0;
        result[4] += 31453043;
        result[5] += 3470680;
      } else {
        result[0] += 393050;
        result[1] += 71463;
        result[2] += 357318;
        result[3] += 7896736;
        result[4] += 2965742;
        result[5] += 31265360;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 97835;
        result[1] += 41188638;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1663199;
        result[5] += 0;
      } else {
        result[0] += 27301342;
        result[1] += 1536660;
        result[2] += 1920826;
        result[3] += 3431876;
        result[4] += 4072151;
        result[5] += 4686815;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9042036;
        result[3] += 27691236;
        result[4] += 0;
        result[5] += 6216400;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32351701;
        result[3] += 7809031;
        result[4] += 0;
        result[5] += 2788939;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 371858;
        result[1] += 0;
        result[2] += 34768782;
        result[3] += 6507526;
        result[4] += 0;
        result[5] += 1301505;
      } else {
        result[0] += 235987;
        result[1] += 0;
        result[2] += 41179768;
        result[3] += 1238932;
        result[4] += 0;
        result[5] += 294984;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 303531;
        result[1] += 151765;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39459063;
        result[5] += 3035312;
      } else {
        result[0] += 1805180;
        result[1] += 817440;
        result[2] += 34060;
        result[3] += 5926441;
        result[4] += 2179840;
        result[5] += 32186709;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 40847880;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2101792;
        result[5] += 0;
      } else {
        result[0] += 27442274;
        result[1] += 1111451;
        result[2] += 1667177;
        result[3] += 3202039;
        result[4] += 5213238;
        result[5] += 4313491;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7012191;
        result[3] += 29363551;
        result[4] += 0;
        result[5] += 6573929;
      } else {
        result[0] += 894784;
        result[1] += 0;
        result[2] += 17895697;
        result[3] += 13421772;
        result[4] += 0;
        result[5] += 10737418;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1765055;
        result[1] += 0;
        result[2] += 27358353;
        result[3] += 9707802;
        result[4] += 588351;
        result[5] += 3530110;
      } else {
        result[0] += 383051;
        result[1] += 0;
        result[2] += 39262800;
        result[3] += 2825006;
        result[4] += 0;
        result[5] += 478814;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 137219;
        result[1] += 2195510;
        result[2] += 0;
        result[3] += 137219;
        result[4] += 39244749;
        result[5] += 1234974;
      } else {
        result[0] += 2692464;
        result[1] += 64878;
        result[2] += 259514;
        result[3] += 6974455;
        result[4] += 2238313;
        result[5] += 30720045;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 26600250;
        result[1] += 2179922;
        result[2] += 3295835;
        result[3] += 3295835;
        result[4] += 4723166;
        result[5] += 2854661;
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
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 1777227;
        result[1] += 3554455;
        result[2] += 10959571;
        result[3] += 17772278;
        result[4] += 1481023;
        result[5] += 7405116;
      } else {
        result[0] += 998829;
        result[1] += 0;
        result[2] += 33960206;
        result[3] += 5992977;
        result[4] += 0;
        result[5] += 1997659;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 954437;
        result[2] += 16225432;
        result[3] += 5726623;
        result[4] += 3817748;
        result[5] += 16225432;
      } else {
        result[0] += 187963;
        result[1] += 140972;
        result[2] += 39707301;
        result[3] += 2725471;
        result[4] += 46990;
        result[5] += 140972;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4905419;
        result[1] += 4251363;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29650535;
        result[5] += 4142354;
      } else {
        result[0] += 148872;
        result[1] += 37218;
        result[2] += 111654;
        result[3] += 6997000;
        result[4] += 2307521;
        result[5] += 33347406;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 42555639;
        result[2] += 0;
        result[3] += 0;
        result[4] += 394033;
        result[5] += 0;
      } else {
        result[0] += 25498282;
        result[1] += 2048748;
        result[2] += 2986730;
        result[3] += 3554455;
        result[4] += 5084846;
        result[5] += 3776609;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 5113056;
        result[2] += 1022611;
        result[3] += 8180890;
        result[4] += 4090445;
        result[5] += 24542670;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25089412;
        result[3] += 14458305;
        result[4] += 0;
        result[5] += 3401954;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 17685159;
        result[1] += 0;
        result[2] += 5052902;
        result[3] += 2526451;
        result[4] += 10105805;
        result[5] += 7579354;
      } else {
        result[0] += 306418;
        result[1] += 0;
        result[2] += 39783347;
        result[3] += 2451348;
        result[4] += 0;
        result[5] += 408558;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 164558;
        result[1] += 2632930;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39000277;
        result[5] += 1151906;
      } else {
        result[0] += 1988410;
        result[1] += 596523;
        result[2] += 165700;
        result[3] += 7025718;
        result[4] += 2452373;
        result[5] += 30720946;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 42233845;
        result[2] += 0;
        result[3] += 0;
        result[4] += 715827;
        result[5] += 0;
      } else {
        result[0] += 26999737;
        result[1] += 1445539;
        result[2] += 2327563;
        result[3] += 4312117;
        result[4] += 4459121;
        result[5] += 3405593;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        result[0] += 2996488;
        result[1] += 3995318;
        result[2] += 2996488;
        result[3] += 1997659;
        result[4] += 6991807;
        result[5] += 23971910;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10737418;
        result[3] += 21474836;
        result[4] += 0;
        result[5] += 10737418;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 5128319;
        result[1] += 1282079;
        result[2] += 21795356;
        result[3] += 14102877;
        result[4] += 641039;
        result[5] += 0;
      } else {
        result[0] += 969518;
        result[1] += 339331;
        result[2] += 39168550;
        result[3] += 1987513;
        result[4] += 0;
        result[5] += 484759;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11897650;
        result[1] += 928185;
        result[2] += 84380;
        result[3] += 0;
        result[4] += 27170520;
        result[5] += 2868936;
      } else {
        result[0] += 454895;
        result[1] += 492802;
        result[2] += 0;
        result[3] += 5155477;
        result[4] += 2426106;
        result[5] += 34420391;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 24368608;
        result[1] += 1523038;
        result[2] += 3528371;
        result[3] += 6193688;
        result[4] += 3756827;
        result[5] += 3579139;
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
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 704092;
        result[2] += 2112278;
        result[3] += 11969580;
        result[4] += 0;
        result[5] += 28163719;
      } else {
        result[0] += 1160801;
        result[1] += 0;
        result[2] += 23796440;
        result[3] += 9866816;
        result[4] += 0;
        result[5] += 8125613;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
        result[0] += 18171015;
        result[1] += 18171015;
        result[2] += 3303820;
        result[3] += 3303820;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 233676;
        result[1] += 233676;
        result[2] += 38977178;
        result[3] += 3037789;
        result[4] += 0;
        result[5] += 467352;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 453693;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40983666;
        result[5] += 1512312;
      } else {
        result[0] += 0;
        result[1] += 35370318;
        result[2] += 0;
        result[3] += 5052902;
        result[4] += 2526451;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2251394;
        result[1] += 346368;
        result[2] += 0;
        result[3] += 1905025;
        result[4] += 2727650;
        result[5] += 35719234;
      } else {
        result[0] += 5635240;
        result[1] += 1675341;
        result[2] += 1523038;
        result[3] += 19037975;
        result[4] += 1523038;
        result[5] += 13555038;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 228051;
        result[1] += 35880080;
        result[2] += 76017;
        result[3] += 532119;
        result[4] += 6081369;
        result[5] += 152034;
      } else {
        result[0] += 33409393;
        result[1] += 884041;
        result[2] += 699866;
        result[3] += 2725793;
        result[4] += 3867680;
        result[5] += 1362896;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 513342;
        result[1] += 1026685;
        result[2] += 12491339;
        result[3] += 14886938;
        result[4] += 2224485;
        result[5] += 11806882;
      } else {
        result[0] += 783276;
        result[1] += 43515;
        result[2] += 38250012;
        result[3] += 3133106;
        result[4] += 130546;
        result[5] += 609215;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6788398;
        result[1] += 1436007;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30156153;
        result[5] += 4569114;
      } else {
        result[0] += 0;
        result[1] += 574577;
        result[2] += 179555;
        result[3] += 7936352;
        result[4] += 1544177;
        result[5] += 32715010;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 89852;
        result[1] += 41691732;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1168087;
        result[5] += 0;
      } else {
        result[0] += 25532177;
        result[1] += 1112292;
        result[2] += 3134643;
        result[3] += 3539113;
        result[4] += 5359229;
        result[5] += 4272215;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2928386;
        result[3] += 0;
        result[4] += 5856773;
        result[5] += 34164512;
      } else {
        result[0] += 5895053;
        result[1] += 1052688;
        result[2] += 17053546;
        result[3] += 14948170;
        result[4] += 421075;
        result[5] += 3579139;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 734182;
        result[1] += 0;
        result[2] += 26430567;
        result[3] += 12481101;
        result[4] += 0;
        result[5] += 3303820;
      } else {
        result[0] += 452697;
        result[1] += 0;
        result[2] += 40459836;
        result[3] += 2037138;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5261334;
        result[1] += 2362232;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30816390;
        result[5] += 4509715;
      } else {
        result[0] += 71822;
        result[1] += 323199;
        result[2] += 395022;
        result[3] += 7254041;
        result[4] += 2801065;
        result[5] += 32104521;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 37569755;
        result[2] += 89665;
        result[3] += 448326;
        result[4] += 3945272;
        result[5] += 896652;
      } else {
        result[0] += 29465139;
        result[1] += 1721429;
        result[2] += 1807501;
        result[3] += 3299407;
        result[4] += 4561788;
        result[5] += 2094406;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 923648;
        result[3] += 10621962;
        result[4] += 2309122;
        result[5] += 29094939;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19231196;
        result[3] += 17308077;
        result[4] += 0;
        result[5] += 6410398;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        result[0] += 15090425;
        result[1] += 6384410;
        result[2] += 11027618;
        result[3] += 2321603;
        result[4] += 3482405;
        result[5] += 4643207;
      } else {
        result[0] += 180271;
        result[1] += 90135;
        result[2] += 39163972;
        result[3] += 2929411;
        result[4] += 0;
        result[5] += 585882;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 321720;
        result[1] += 1447741;
        result[2] += 0;
        result[3] += 482580;
        result[4] += 39893329;
        result[5] += 804300;
      } else {
        result[0] += 2897161;
        result[1] += 567485;
        result[2] += 448014;
        result[3] += 7018896;
        result[4] += 3613984;
        result[5] += 28404130;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 42395483;
        result[2] += 0;
        result[3] += 0;
        result[4] += 554189;
        result[5] += 0;
      } else {
        result[0] += 29322195;
        result[1] += 1387228;
        result[2] += 2094442;
        result[3] += 3073662;
        result[4] += 4052882;
        result[5] += 3019261;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 2643056;
        result[2] += 6607641;
        result[3] += 12554519;
        result[4] += 660764;
        result[5] += 20483690;
      } else {
        result[0] += 933688;
        result[1] += 0;
        result[2] += 28010656;
        result[3] += 11671106;
        result[4] += 0;
        result[5] += 2334221;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 730022;
        result[1] += 0;
        result[2] += 34189399;
        result[3] += 5840182;
        result[4] += 0;
        result[5] += 2190068;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42343681;
        result[3] += 605991;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4703422;
        result[1] += 742645;
        result[2] += 0;
        result[3] += 990194;
        result[4] += 30200922;
        result[5] += 6312487;
      } else {
        result[0] += 144247;
        result[1] += 72123;
        result[2] += 72123;
        result[3] += 6310825;
        result[4] += 1875216;
        result[5] += 34475136;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 390451;
        result[1] += 40899802;
        result[2] += 97612;
        result[3] += 0;
        result[4] += 1464193;
        result[5] += 97612;
      } else {
        result[0] += 26613589;
        result[1] += 1839649;
        result[2] += 1766063;
        result[3] += 4317043;
        result[4] += 4783087;
        result[5] += 3630240;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10270573;
        result[3] += 24275902;
        result[4] += 0;
        result[5] += 8403196;
      } else {
        result[0] += 961559;
        result[1] += 0;
        result[2] += 29167315;
        result[3] += 7692478;
        result[4] += 0;
        result[5] += 5128319;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 9463487;
        result[1] += 0;
        result[2] += 26206580;
        result[3] += 2183881;
        result[4] += 0;
        result[5] += 5095723;
      } else {
        result[0] += 50057;
        result[1] += 0;
        result[2] += 40496836;
        result[3] += 2052373;
        result[4] += 0;
        result[5] += 350405;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5403345;
        result[1] += 692736;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32558623;
        result[5] += 4294967;
      } else {
        result[0] += 74307;
        result[1] += 37153;
        result[2] += 37153;
        result[3] += 6910587;
        result[4] += 2340682;
        result[5] += 33549787;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 23584069;
        result[1] += 2754024;
        result[2] += 3606461;
        result[3] += 4808614;
        result[4] += 4699328;
        result[5] += 3497174;
      } else {
        result[0] += 436037;
        result[1] += 42077598;
        result[2] += 109009;
        result[3] += 218018;
        result[4] += 109009;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11166914;
        result[3] += 16320875;
        result[4] += 3435973;
        result[5] += 12025908;
      } else {
        result[0] += 0;
        result[1] += 1301505;
        result[2] += 22125589;
        result[3] += 0;
        result[4] += 0;
        result[5] += 19522578;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12271335;
        result[3] += 30678337;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 188582;
        result[1] += 0;
        result[2] += 39979497;
        result[3] += 2262990;
        result[4] += 0;
        result[5] += 518601;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5439536;
        result[1] += 113323;
        result[2] += 113323;
        result[3] += 2039826;
        result[4] += 29690802;
        result[5] += 5552860;
      } else {
        result[0] += 0;
        result[1] += 214569;
        result[2] += 35761;
        result[3] += 6723179;
        result[4] += 2324503;
        result[5] += 33651658;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 41140263;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1809409;
        result[5] += 0;
      } else {
        result[0] += 27063846;
        result[1] += 1738266;
        result[2] += 2969538;
        result[3] += 3814529;
        result[4] += 4321524;
        result[5] += 3041966;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 352046;
        result[1] += 352046;
        result[2] += 11265487;
        result[3] += 14785952;
        result[4] += 352046;
        result[5] += 15842092;
      } else {
        result[0] += 1193046;
        result[1] += 1193046;
        result[2] += 32212254;
        result[3] += 4175662;
        result[4] += 0;
        result[5] += 4175662;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13015052;
        result[3] += 26030104;
        result[4] += 0;
        result[5] += 3904515;
      } else {
        result[0] += 217742;
        result[1] += 0;
        result[2] += 40119022;
        result[3] += 2340729;
        result[4] += 54435;
        result[5] += 217742;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 304607;
        result[1] += 2589164;
        result[2] += 0;
        result[3] += 456911;
        result[4] += 37771343;
        result[5] += 1827645;
      } else {
        result[0] += 1416312;
        result[1] += 35407;
        result[2] += 70815;
        result[3] += 6515036;
        result[4] += 2159876;
        result[5] += 32752223;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 209851;
        result[1] += 35604859;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6925110;
        result[5] += 209851;
      } else {
        result[0] += 27511295;
        result[1] += 988269;
        result[2] += 2323769;
        result[3] += 4594119;
        result[4] += 3312039;
        result[5] += 4220179;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6049249;
        result[3] += 29036398;
        result[4] += 0;
        result[5] += 7864024;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35957865;
        result[3] += 5493562;
        result[4] += 0;
        result[5] += 1498244;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1745921;
        result[1] += 0;
        result[2] += 33696288;
        result[3] += 5586949;
        result[4] += 0;
        result[5] += 1920513;
      } else {
        result[0] += 547517;
        result[1] += 0;
        result[2] += 40698769;
        result[3] += 1216704;
        result[4] += 0;
        result[5] += 486681;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        result[0] += 319328;
        result[1] += 319328;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38958067;
        result[5] += 3352948;
      } else {
        result[0] += 1630587;
        result[1] += 945740;
        result[2] += 913128;
        result[3] += 7109361;
        result[4] += 2576328;
        result[5] += 29774526;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 1517423;
        result[1] += 32195760;
        result[2] += 65974;
        result[3] += 1187548;
        result[4] += 7719065;
        result[5] += 263899;
      } else {
        result[0] += 32538595;
        result[1] += 636763;
        result[2] += 1814774;
        result[3] += 2738081;
        result[4] += 2547052;
        result[5] += 2674405;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2753184;
        result[3] += 1651910;
        result[4] += 11563373;
        result[5] += 26981204;
      } else {
        result[0] += 0;
        result[1] += 671088;
        result[2] += 14763950;
        result[3] += 20468203;
        result[4] += 0;
        result[5] += 7046430;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16106127;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 16106127;
      } else {
        result[0] += 393132;
        result[1] += 0;
        result[2] += 39460626;
        result[3] += 2702782;
        result[4] += 196566;
        result[5] += 196566;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6891924;
        result[1] += 199765;
        result[2] += 0;
        result[3] += 998829;
        result[4] += 31163483;
        result[5] += 3695669;
      } else {
        result[0] += 0;
        result[1] += 170165;
        result[2] += 102099;
        result[3] += 6976769;
        result[4] += 2348278;
        result[5] += 33352360;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 98508;
        result[1] += 41472046;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1379117;
        result[5] += 0;
      } else {
        result[0] += 27028003;
        result[1] += 2459444;
        result[2] += 3132556;
        result[3] += 3546778;
        result[4] += 4116333;
        result[5] += 2666555;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 3355443;
        result[2] += 8724152;
        result[3] += 14092861;
        result[4] += 0;
        result[5] += 16777215;
      } else {
        result[0] += 2431113;
        result[1] += 0;
        result[2] += 31604476;
        result[3] += 4862227;
        result[4] += 0;
        result[5] += 4051855;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32797932;
        result[3] += 7028128;
        result[4] += 390451;
        result[5] += 2733161;
      } else {
        result[0] += 244727;
        result[1] += 0;
        result[2] += 41114216;
        result[3] += 1590728;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 8140087;
        result[1] += 321319;
        result[2] += 0;
        result[3] += 214212;
        result[4] += 31060860;
        result[5] += 3213192;
      } else {
        result[0] += 150832;
        result[1] += 377082;
        result[2] += 75416;
        result[3] += 3205199;
        result[4] += 4449571;
        result[5] += 34691570;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 237728;
        result[1] += 37402667;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5309276;
        result[5] += 0;
      } else {
        result[0] += 24835892;
        result[1] += 769707;
        result[2] += 2540034;
        result[3] += 7337877;
        result[4] += 2437406;
        result[5] += 5028755;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 543666;
        result[1] += 0;
        result[2] += 6524000;
        result[3] += 28270670;
        result[4] += 0;
        result[5] += 7611334;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31828775;
        result[3] += 9970459;
        result[4] += 0;
        result[5] += 1150437;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
        result[0] += 109705;
        result[1] += 0;
        result[2] += 40426448;
        result[3] += 1919844;
        result[4] += 109705;
        result[5] += 383968;
      } else {
        result[0] += 6710886;
        result[1] += 0;
        result[2] += 35344001;
        result[3] += 447392;
        result[4] += 0;
        result[5] += 447392;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6829917;
        result[1] += 1182101;
        result[2] += 0;
        result[3] += 394033;
        result[4] += 29815216;
        result[5] += 4728404;
      } else {
        result[0] += 70121;
        result[1] += 525914;
        result[2] += 420731;
        result[3] += 6766764;
        result[4] += 2945120;
        result[5] += 32221019;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 162380;
        result[1] += 37347541;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5277370;
        result[5] += 162380;
      } else {
        result[0] += 28207699;
        result[1] += 963697;
        result[2] += 2760864;
        result[3] += 4037112;
        result[4] += 2708772;
        result[5] += 4271525;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2684354;
        result[3] += 2684354;
        result[4] += 5368709;
        result[5] += 32212254;
      } else {
        result[0] += 0;
        result[1] += 1227133;
        result[2] += 4908534;
        result[3] += 29451204;
        result[4] += 1227133;
        result[5] += 6135667;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 876523;
        result[1] += 0;
        result[2] += 25711368;
        result[3] += 10518287;
        result[4] += 0;
        result[5] += 5843492;
      } else {
        result[0] += 143484;
        result[1] += 0;
        result[2] += 40510437;
        result[3] += 2008782;
        result[4] += 0;
        result[5] += 286968;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2883546;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38700235;
        result[5] += 1365890;
      } else {
        result[0] += 1741202;
        result[1] += 68282;
        result[2] += 170706;
        result[3] += 7067235;
        result[4] += 2867863;
        result[5] += 31034382;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 301754;
        result[1] += 41239732;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1408185;
        result[5] += 0;
      } else {
        result[0] += 27132955;
        result[1] += 2237233;
        result[2] += 1742960;
        result[3] += 3642007;
        result[4] += 4032222;
        result[5] += 4162294;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 676372;
        result[1] += 2367304;
        result[2] += 4734609;
        result[3] += 17585692;
        result[4] += 3043677;
        result[5] += 14542015;
      } else {
        result[0] += 320519;
        result[1] += 2564159;
        result[2] += 24038996;
        result[3] += 14102877;
        result[4] += 0;
        result[5] += 1923119;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 3119249;
        result[1] += 0;
        result[2] += 33112038;
        result[3] += 5638644;
        result[4] += 119971;
        result[5] += 959769;
      } else {
        result[0] += 219130;
        result[1] += 0;
        result[2] += 40831406;
        result[3] += 1826091;
        result[4] += 0;
        result[5] += 73043;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 1130254;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41819418;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 42558331;
        result[2] += 0;
        result[3] += 0;
        result[4] += 391340;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1721429;
        result[1] += 172142;
        result[2] += 28690;
        result[3] += 6053694;
        result[4] += 8435005;
        result[5] += 26538709;
      } else {
        result[0] += 26564532;
        result[1] += 1667948;
        result[2] += 2845323;
        result[3] += 3973641;
        result[4] += 5298189;
        result[5] += 2600037;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 2045222;
        result[1] += 7499149;
        result[2] += 0;
        result[3] += 2045222;
        result[4] += 9544371;
        result[5] += 21815706;
      } else {
        result[0] += 1403584;
        result[1] += 0;
        result[2] += 18808026;
        result[3] += 18246593;
        result[4] += 842150;
        result[5] += 3649318;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 736280;
        result[1] += 0;
        result[2] += 35832298;
        result[3] += 5031247;
        result[4] += 0;
        result[5] += 1349846;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42387714;
        result[3] += 561958;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7416567;
        result[1] += 885560;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29887659;
        result[5] += 4759886;
      } else {
        result[0] += 34470;
        result[1] += 310230;
        result[2] += 827281;
        result[3] += 8169400;
        result[4] += 2826543;
        result[5] += 30781747;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 72550;
        result[1] += 37726064;
        result[2] += 0;
        result[3] += 145100;
        result[4] += 5005958;
        result[5] += 0;
      } else {
        result[0] += 33050374;
        result[1] += 632543;
        result[2] += 948814;
        result[3] += 1929256;
        result[4] += 3763631;
        result[5] += 2625053;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4156419;
        result[3] += 22998857;
        result[4] += 554189;
        result[5] += 15240206;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33746171;
        result[3] += 5113056;
        result[4] += 0;
        result[5] += 4090445;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 622459;
        result[1] += 5602131;
        result[2] += 15561475;
        result[3] += 5602131;
        result[4] += 5602131;
        result[5] += 9959344;
      } else {
        result[0] += 616081;
        result[1] += 0;
        result[2] += 38505085;
        result[3] += 3388447;
        result[4] += 44005;
        result[5] += 396052;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8739139;
        result[1] += 959173;
        result[2] += 0;
        result[3] += 852598;
        result[4] += 28881789;
        result[5] += 3516970;
      } else {
        result[0] += 0;
        result[1] += 33606;
        result[2] += 100820;
        result[3] += 7595169;
        result[4] += 2957410;
        result[5] += 32262665;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 89292;
        result[1] += 39377974;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3482405;
        result[5] += 0;
      } else {
        result[0] += 29067230;
        result[1] += 1551730;
        result[2] += 2438433;
        result[3] += 3214298;
        result[4] += 4017872;
        result[5] += 2660108;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15211342;
        result[3] += 24159191;
        result[4] += 0;
        result[5] += 3579139;
      } else {
        result[0] += 6817408;
        result[1] += 0;
        result[2] += 33405301;
        result[3] += 681740;
        result[4] += 1363481;
        result[5] += 681740;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 463485;
        result[1] += 0;
        result[2] += 33679959;
        result[3] += 6643294;
        result[4] += 0;
        result[5] += 2162933;
      } else {
        result[0] += 68282;
        result[1] += 0;
        result[2] += 41379176;
        result[3] += 1365649;
        result[4] += 0;
        result[5] += 136564;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 421075;
        result[1] += 1368494;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38317845;
        result[5] += 2842257;
      } else {
        result[0] += 0;
        result[1] += 41800813;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1148859;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 446546;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5805107;
        result[4] += 1907972;
        result[5] += 34790046;
      } else {
        result[0] += 27306897;
        result[1] += 889636;
        result[2] += 2545348;
        result[3] += 5609652;
        result[4] += 2594773;
        result[5] += 4003364;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2526451;
        result[3] += 842150;
        result[4] += 12632256;
        result[5] += 26948814;
      } else {
        result[0] += 1333840;
        result[1] += 2134145;
        result[2] += 17073161;
        result[3] += 16006089;
        result[4] += 266768;
        result[5] += 6135667;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 7730941;
        result[1] += 2576980;
        result[2] += 24910810;
        result[3] += 2576980;
        result[4] += 0;
        result[5] += 5153960;
      } else {
        result[0] += 589698;
        result[1] += 49141;
        result[2] += 40050324;
        result[3] += 2063943;
        result[4] += 49141;
        result[5] += 147424;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1783377;
        result[2] += 0;
        result[3] += 743073;
        result[4] += 39085688;
        result[5] += 1337533;
      } else {
        result[0] += 2002024;
        result[1] += 93844;
        result[2] += 62563;
        result[3] += 7038365;
        result[4] += 2690219;
        result[5] += 31062654;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 93368;
        result[1] += 41269033;
        result[2] += 186737;
        result[3] += 93368;
        result[4] += 1307163;
        result[5] += 0;
      } else {
        result[0] += 27180328;
        result[1] += 2086730;
        result[2] += 2430116;
        result[3] += 3037645;
        result[4] += 5203619;
        result[5] += 3011231;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 885560;
        result[1] += 0;
        result[2] += 9741162;
        result[3] += 27009588;
        result[4] += 0;
        result[5] += 5313361;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31865886;
        result[3] += 8312839;
        result[4] += 0;
        result[5] += 2770946;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 4955731;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 4405094;
        result[4] += 0;
        result[5] += 4955731;
      } else {
        result[0] += 255348;
        result[1] += 0;
        result[2] += 40651533;
        result[3] += 1787441;
        result[4] += 0;
        result[5] += 255348;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2566713;
        result[2] += 0;
        result[3] += 342228;
        result[4] += 37474017;
        result[5] += 2566713;
      } else {
        result[0] += 1625649;
        result[1] += 227590;
        result[2] += 682772;
        result[3] += 7347937;
        result[4] += 2080831;
        result[5] += 30984888;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 41382839;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1566833;
        result[5] += 0;
      } else {
        result[0] += 27773287;
        result[1] += 951654;
        result[2] += 2404179;
        result[3] += 3556182;
        result[4] += 5259143;
        result[5] += 3005224;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 6991807;
        result[2] += 998829;
        result[3] += 998829;
        result[4] += 5992977;
        result[5] += 27967228;
      } else {
        result[0] += 0;
        result[1] += 667611;
        result[2] += 21808642;
        result[3] += 14909990;
        result[4] += 890148;
        result[5] += 4673280;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 18084072;
        result[1] += 22605091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2260509;
        result[5] += 0;
      } else {
        result[0] += 210022;
        result[1] += 0;
        result[2] += 40586915;
        result[3] += 1995217;
        result[4] += 52505;
        result[5] += 105011;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6723750;
        result[1] += 823316;
        result[2] += 0;
        result[3] += 274438;
        result[4] += 31834901;
        result[5] += 3293265;
      } else {
        result[0] += 173463;
        result[1] += 728548;
        result[2] += 624470;
        result[3] += 7563028;
        result[4] += 2740730;
        result[5] += 31119431;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 42645783;
        result[2] += 0;
        result[3] += 0;
        result[4] += 303889;
        result[5] += 0;
      } else {
        result[0] += 26330452;
        result[1] += 1401621;
        result[2] += 2653068;
        result[3] += 3954573;
        result[4] += 5256078;
        result[5] += 3353878;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 795364;
        result[1] += 0;
        result[2] += 5567550;
        result[3] += 19088743;
        result[4] += 1193046;
        result[5] += 16304968;
      } else {
        result[0] += 6974733;
        result[1] += 2569638;
        result[2] += 25329294;
        result[3] += 4772185;
        result[4] += 367091;
        result[5] += 2936729;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4772185;
        result[3] += 19088743;
        result[4] += 0;
        result[5] += 19088743;
      } else {
        result[0] += 0;
        result[1] += 238344;
        result[2] += 40709234;
        result[3] += 1573073;
        result[4] += 0;
        result[5] += 429020;
      }
    }
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 330382;
        result[1] += 495573;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41958526;
        result[5] += 165191;
      } else {
        result[0] += 33225218;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7293340;
        result[5] += 2431113;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 190253;
        result[2] += 0;
        result[3] += 1617152;
        result[4] += 3376995;
        result[5] += 37765271;
      } else {
        result[0] += 1186455;
        result[1] += 1423746;
        result[2] += 1423746;
        result[3] += 15423915;
        result[4] += 4627174;
        result[5] += 18864635;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 339523;
        result[1] += 39045157;
        result[2] += 0;
        result[3] += 594165;
        result[4] += 2970827;
        result[5] += 0;
      } else {
        result[0] += 31988730;
        result[1] += 1092782;
        result[2] += 794751;
        result[3] += 3808182;
        result[4] += 2516711;
        result[5] += 2748514;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 376751;
        result[1] += 1507006;
        result[2] += 13437470;
        result[3] += 16074731;
        result[4] += 1255838;
        result[5] += 10297874;
      } else {
        result[0] += 732341;
        result[1] += 0;
        result[2] += 38081756;
        result[3] += 3273997;
        result[4] += 129236;
        result[5] += 732341;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11032943;
        result[1] += 1379117;
        result[2] += 0;
        result[3] += 295525;
        result[4] += 26695782;
        result[5] += 3546303;
      } else {
        result[0] += 390451;
        result[1] += 78090;
        result[2] += 39045;
        result[3] += 3357883;
        result[4] += 3943560;
        result[5] += 35140641;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 42440790;
        result[2] += 0;
        result[3] += 0;
        result[4] += 508882;
        result[5] += 0;
      } else {
        result[0] += 24933870;
        result[1] += 1537348;
        result[2] += 2306022;
        result[3] += 6677857;
        result[4] += 3050675;
        result[5] += 4443897;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15158708;
        result[3] += 14436864;
        result[4] += 360921;
        result[5] += 12993178;
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 493674;
        result[1] += 0;
        result[2] += 33734417;
        result[3] += 6911441;
        result[4] += 0;
        result[5] += 1810139;
      } else {
        result[0] += 248623;
        result[1] += 0;
        result[2] += 40898530;
        result[3] += 1616051;
        result[4] += 0;
        result[5] += 186467;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 473709;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37738867;
        result[5] += 4737096;
      } else {
        result[0] += 1160801;
        result[1] += 633164;
        result[2] += 879395;
        result[3] += 6929636;
        result[4] += 1969845;
        result[5] += 31376829;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25760587;
        result[1] += 1797250;
        result[2] += 2903250;
        result[3] += 4147500;
        result[4] += 5553042;
        result[5] += 2788042;
      } else {
        result[0] += 620959;
        result[1] += 42225220;
        result[2] += 103493;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 17179869;
        result[5] += 25769803;
      } else {
        result[0] += 367091;
        result[1] += 367091;
        result[2] += 15784922;
        result[3] += 20557108;
        result[4] += 0;
        result[5] += 5873459;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26430567;
        result[3] += 8259552;
        result[4] += 550636;
        result[5] += 7708915;
      } else {
        result[0] += 154495;
        result[1] += 51498;
        result[2] += 40580746;
        result[3] += 1802444;
        result[4] += 0;
        result[5] += 360488;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 650752;
        result[1] += 162688;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41485479;
        result[5] += 650752;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1775803;
        result[1] += 82595;
        result[2] += 123893;
        result[3] += 1321528;
        result[4] += 2684354;
        result[5] += 36961497;
      } else {
        result[0] += 3096371;
        result[1] += 1098712;
        result[2] += 599297;
        result[3] += 20975421;
        result[4] += 1997659;
        result[5] += 15182209;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 96084;
        result[1] += 41796661;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1056927;
        result[5] += 0;
      } else {
        result[0] += 28712212;
        result[1] += 1542391;
        result[2] += 1898328;
        result[3] += 2610201;
        result[4] += 5932275;
        result[5] += 2254264;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 5271096;
        result[1] += 2928386;
        result[2] += 16398966;
        result[3] += 8394708;
        result[4] += 976128;
        result[5] += 8980386;
      } else {
        result[0] += 88282;
        result[1] += 44141;
        result[2] += 37608552;
        result[3] += 4458290;
        result[4] += 0;
        result[5] += 750405;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1024972;
        result[1] += 198381;
        result[2] += 0;
        result[3] += 1620118;
        result[4] += 11175511;
        result[5] += 28930688;
      } else {
        result[0] += 1610612;
        result[1] += 536870;
        result[2] += 0;
        result[3] += 23488102;
        result[4] += 1610612;
        result[5] += 15703474;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
        result[0] += 2045222;
        result[1] += 39828017;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1076432;
        result[5] += 0;
      } else {
        result[0] += 25373796;
        result[1] += 2982276;
        result[2] += 3348950;
        result[3] += 4008962;
        result[4] += 4497859;
        result[5] += 2737827;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 1952257;
        result[1] += 2603010;
        result[2] += 5206020;
        result[3] += 5856773;
        result[4] += 1952257;
        result[5] += 25379352;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22429273;
        result[3] += 17179869;
        result[4] += 0;
        result[5] += 3340530;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2526451;
        result[1] += 168430;
        result[2] += 30991136;
        result[3] += 7747784;
        result[4] += 168430;
        result[5] += 1347440;
      } else {
        result[0] += 335544;
        result[1] += 0;
        result[2] += 40869298;
        result[3] += 1543503;
        result[4] += 0;
        result[5] += 201326;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 1353714;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40365308;
        result[5] += 1230649;
      } else {
        result[0] += 85217;
        result[1] += 42438367;
        result[2] += 0;
        result[3] += 0;
        result[4] += 426088;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1906644;
        result[1] += 501748;
        result[2] += 200699;
        result[3] += 7124828;
        result[4] += 2374942;
        result[5] += 30840808;
      } else {
        result[0] += 28073249;
        result[1] += 853128;
        result[2] += 2586044;
        result[3] += 3892397;
        result[4] += 3572474;
        result[5] += 3972378;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10534825;
        result[3] += 27552620;
        result[4] += 0;
        result[5] += 4862227;
      } else {
        result[0] += 0;
        result[1] += 2021161;
        result[2] += 19201030;
        result[3] += 4042322;
        result[4] += 1010580;
        result[5] += 16674578;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 322929;
        result[1] += 0;
        result[2] += 34553496;
        result[3] += 6942992;
        result[4] += 0;
        result[5] += 1130254;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41675201;
        result[3] += 1274471;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 340870;
        result[1] += 1022611;
        result[2] += 0;
        result[3] += 340870;
        result[4] += 39029663;
        result[5] += 2215657;
      } else {
        result[0] += 1489192;
        result[1] += 236917;
        result[2] += 101535;
        result[3] += 5990616;
        result[4] += 2673777;
        result[5] += 32457633;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 33991826;
        result[2] += 239942;
        result[3] += 479884;
        result[4] += 7838115;
        result[5] += 399903;
      } else {
        result[0] += 31107705;
        result[1] += 2043791;
        result[2] += 571059;
        result[3] += 3336188;
        result[4] += 3486467;
        result[5] += 2404460;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9521861;
        result[3] += 25526692;
        result[4] += 0;
        result[5] += 7901119;
      } else {
        result[0] += 3303820;
        result[1] += 0;
        result[2] += 28082478;
        result[3] += 3303820;
        result[4] += 4129776;
        result[5] += 4129776;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2198788;
        result[1] += 0;
        result[2] += 30783042;
        result[3] += 7182709;
        result[4] += 146585;
        result[5] += 2638546;
      } else {
        result[0] += 109845;
        result[1] += 164768;
        result[2] += 40258453;
        result[3] += 1812454;
        result[4] += 0;
        result[5] += 604151;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 1925330;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38210398;
        result[5] += 2813944;
      } else {
        result[0] += 1034470;
        result[1] += 344823;
        result[2] += 191568;
        result[3] += 6245135;
        result[4] += 1724117;
        result[5] += 33409558;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 219504;
        result[1] += 33949997;
        result[2] += 146336;
        result[3] += 439008;
        result[4] += 8194826;
        result[5] += 0;
      } else {
        result[0] += 25855652;
        result[1] += 934237;
        result[2] += 2853211;
        result[3] += 4873184;
        result[4] += 3837948;
        result[5] += 4595438;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 260301;
        result[1] += 260301;
        result[2] += 12234149;
        result[3] += 16398966;
        result[4] += 1822107;
        result[5] += 11973848;
      } else {
        result[0] += 3904515;
        result[1] += 1464193;
        result[2] += 32049566;
        result[3] += 4067203;
        result[4] += 0;
        result[5] += 1464193;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 271833;
        result[2] += 36697505;
        result[3] += 5708500;
        result[4] += 0;
        result[5] += 271833;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42472454;
        result[3] += 397682;
        result[4] += 0;
        result[5] += 79536;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1855850;
        result[1] += 0;
        result[2] += 132560;
        result[3] += 0;
        result[4] += 34996029;
        result[5] += 5965232;
      } else {
        result[0] += 21474836;
        result[1] += 1651910;
        result[2] += 0;
        result[3] += 3716798;
        result[4] += 15693149;
        result[5] += 412977;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 165032;
        result[1] += 288806;
        result[2] += 82516;
        result[3] += 3259389;
        result[4] += 2269195;
        result[5] += 36884733;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 788067;
        result[3] += 30143577;
        result[4] += 197016;
        result[5] += 11821010;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 40172754;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2776918;
        result[5] += 0;
      } else {
        result[0] += 32297904;
        result[1] += 2180186;
        result[2] += 622910;
        result[3] += 1899876;
        result[4] += 4204645;
        result[5] += 1744149;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 141281;
        result[1] += 282563;
        result[2] += 16247409;
        result[3] += 16812536;
        result[4] += 0;
        result[5] += 9465881;
      } else {
        result[0] += 1905025;
        result[1] += 0;
        result[2] += 37667555;
        result[3] += 2424578;
        result[4] += 259776;
        result[5] += 692736;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 534643;
        result[1] += 356428;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41880386;
        result[5] += 178214;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4129776;
        result[4] += 22300791;
        result[5] += 16519104;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 484759;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2084464;
        result[4] += 3635694;
        result[5] += 36744754;
      } else {
        result[0] += 3810051;
        result[1] += 1298881;
        result[2] += 1905025;
        result[3] += 17058640;
        result[4] += 1645249;
        result[5] += 17231824;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 75350;
        result[1] += 34661139;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7987132;
        result[5] += 226050;
      } else {
        result[0] += 31540672;
        result[1] += 505662;
        result[2] += 1611797;
        result[3] += 2212271;
        result[4] += 3413219;
        result[5] += 3666050;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8842579;
        result[1] += 1768515;
        result[2] += 15537675;
        result[3] += 12000643;
        result[4] += 1515870;
        result[5] += 3284386;
      } else {
        result[0] += 48695;
        result[1] += 0;
        result[2] += 38859227;
        result[3] += 3213921;
        result[4] += 0;
        result[5] += 827828;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7208336;
        result[1] += 450521;
        result[2] += 450521;
        result[3] += 0;
        result[4] += 34389773;
        result[5] += 450521;
      } else {
        result[0] += 66076;
        result[1] += 594687;
        result[2] += 330382;
        result[3] += 7268406;
        result[4] += 3535088;
        result[5] += 31155031;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 39721722;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3227950;
        result[5] += 0;
      } else {
        result[0] += 27871872;
        result[1] += 1141864;
        result[2] += 2050165;
        result[3] += 3840816;
        result[4] += 3503447;
        result[5] += 4541506;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12397843;
        result[3] += 27009588;
        result[4] += 0;
        result[5] += 3542241;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36285068;
        result[3] += 0;
        result[4] += 0;
        result[5] += 6664604;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 17448304;
        result[1] += 0;
        result[2] += 18790481;
        result[3] += 6710886;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 373881;
        result[1] += 0;
        result[2] += 38696767;
        result[3] += 3318201;
        result[4] += 0;
        result[5] += 560822;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 149650;
        result[1] += 0;
        result[2] += 0;
        result[3] += 748252;
        result[4] += 38609810;
        result[5] += 3441959;
      } else {
        result[0] += 1713003;
        result[1] += 186873;
        result[2] += 155727;
        result[3] += 6976596;
        result[4] += 3270279;
        result[5] += 30647192;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 285064;
        result[1] += 40384095;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2280513;
        result[5] += 0;
      } else {
        result[0] += 27529771;
        result[1] += 2314330;
        result[2] += 3552228;
        result[3] += 3444585;
        result[4] += 3525317;
        result[5] += 2583438;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9735259;
        result[3] += 13743895;
        result[4] += 0;
        result[5] += 19470518;
      } else {
        result[0] += 565127;
        result[1] += 1977945;
        result[2] += 28821491;
        result[3] += 8476909;
        result[4] += 1130254;
        result[5] += 1977945;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 436776;
        result[1] += 0;
        result[2] += 36834804;
        result[3] += 5241316;
        result[4] += 0;
        result[5] += 436776;
      } else {
        result[0] += 72796;
        result[1] += 0;
        result[2] += 41420955;
        result[3] += 1237532;
        result[4] += 0;
        result[5] += 218388;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 531884;
        result[1] += 531884;
        result[2] += 398913;
        result[3] += 0;
        result[4] += 39625394;
        result[5] += 1861595;
      } else {
        result[0] += 3023067;
        result[1] += 368666;
        result[2] += 0;
        result[3] += 2949333;
        result[4] += 3834133;
        result[5] += 32774471;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 40283831;
        result[2] += 98734;
        result[3] += 98734;
        result[4] += 2468372;
        result[5] += 0;
      } else {
        result[0] += 24569463;
        result[1] += 1734866;
        result[2] += 2930518;
        result[3] += 6658137;
        result[4] += 2907073;
        result[5] += 4149613;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 3904515;
        result[2] += 4685418;
        result[3] += 12494450;
        result[4] += 2342709;
        result[5] += 19522578;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26755533;
        result[3] += 5632743;
        result[4] += 0;
        result[5] += 10561394;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22215348;
        result[3] += 17031766;
        result[4] += 0;
        result[5] += 3702558;
      } else {
        result[0] += 143644;
        result[1] += 0;
        result[2] += 40220429;
        result[3] += 2250428;
        result[4] += 0;
        result[5] += 335170;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1121819;
        result[2] += 0;
        result[3] += 801299;
        result[4] += 38782913;
        result[5] += 2243639;
      } else {
        result[0] += 1647949;
        result[1] += 411987;
        result[2] += 34332;
        result[3] += 6900786;
        result[4] += 2643584;
        result[5] += 31311032;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        result[0] += 553000;
        result[1] += 40092505;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2304167;
        result[5] += 0;
      } else {
        result[0] += 27385578;
        result[1] += 1522854;
        result[2] += 1135688;
        result[3] += 2942465;
        result[4] += 5833308;
        result[5] += 4129776;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4343225;
        result[3] += 25576771;
        result[4] += 1930322;
        result[5] += 11099353;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24051816;
        result[3] += 10880583;
        result[4] += 0;
        result[5] += 8017272;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 607062;
        result[1] += 0;
        result[2] += 35057860;
        result[3] += 6525922;
        result[4] += 0;
        result[5] += 758828;
      } else {
        result[0] += 882527;
        result[1] += 0;
        result[2] += 40713936;
        result[3] += 1176703;
        result[4] += 0;
        result[5] += 176505;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 513342;
        result[1] += 855571;
        result[2] += 171114;
        result[3] += 0;
        result[4] += 39356274;
        result[5] += 2053370;
      } else {
        result[0] += 1002159;
        result[1] += 536870;
        result[2] += 143165;
        result[3] += 6370868;
        result[4] += 2505397;
        result[5] += 32391211;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 348617;
        result[1] += 33815895;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8506266;
        result[5] += 278893;
      } else {
        result[0] += 31230676;
        result[1] += 1078986;
        result[2] += 899155;
        result[3] += 3206988;
        result[4] += 2877298;
        result[5] += 3656566;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 226050;
        result[1] += 0;
        result[2] += 6329425;
        result[3] += 24639549;
        result[4] += 678152;
        result[5] += 11076494;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 27042386;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 8749007;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2318879;
        result[1] += 0;
        result[2] += 33573335;
        result[3] += 6049249;
        result[4] += 0;
        result[5] += 1008208;
      } else {
        result[0] += 65472;
        result[1] += 0;
        result[2] += 41378343;
        result[3] += 1178497;
        result[4] += 0;
        result[5] += 327360;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 1073741;
        result[1] += 4392580;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34652577;
        result[5] += 2830773;
      } else {
        result[0] += 0;
        result[1] += 41759381;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1190291;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1589420;
        result[1] += 211922;
        result[2] += 0;
        result[3] += 7664538;
        result[4] += 1377497;
        result[5] += 32106293;
      } else {
        result[0] += 28048766;
        result[1] += 1369568;
        result[2] += 3396530;
        result[3] += 3971749;
        result[4] += 2547397;
        result[5] += 3615661;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 1626881;
        result[2] += 2277634;
        result[3] += 13015052;
        result[4] += 7483655;
        result[5] += 18546449;
      } else {
        result[0] += 3702558;
        result[1] += 0;
        result[2] += 30360975;
        result[3] += 3702558;
        result[4] += 0;
        result[5] += 5183581;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42960000))) ) ) {
        result[0] += 36342030;
        result[1] += 0;
        result[2] += 6607641;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 270407;
        result[1] += 180271;
        result[2] += 38758361;
        result[3] += 3380089;
        result[4] += 0;
        result[5] += 360542;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 321720;
        result[1] += 1769462;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37802146;
        result[5] += 3056343;
      } else {
        result[0] += 1821444;
        result[1] += 510004;
        result[2] += 145715;
        result[3] += 7249351;
        result[4] += 1165724;
        result[5] += 32057431;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 27789461;
        result[1] += 2198614;
        result[2] += 1329394;
        result[3] += 2607658;
        result[4] += 5880014;
        result[5] += 3144529;
      } else {
        result[0] += 513752;
        result[1] += 42435920;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7870358;
        result[3] += 24285678;
        result[4] += 899469;
        result[5] += 9894165;
      } else {
        result[0] += 6561755;
        result[1] += 0;
        result[2] += 25650499;
        result[3] += 8947848;
        result[4] += 0;
        result[5] += 1789569;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 399531;
        result[1] += 0;
        result[2] += 32362079;
        result[3] += 8589934;
        result[4] += 0;
        result[5] += 1598127;
      } else {
        result[0] += 854719;
        result[1] += 0;
        result[2] += 40011573;
        result[3] += 1442339;
        result[4] += 0;
        result[5] += 641039;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 489920;
        result[1] += 326613;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42133139;
        result[5] += 0;
      } else {
        result[0] += 1187548;
        result[1] += 131949;
        result[2] += 65974;
        result[3] += 6003717;
        result[4] += 2902896;
        result[5] += 32657585;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 557787;
        result[1] += 40718521;
        result[2] += 92964;
        result[3] += 464823;
        result[4] += 1115575;
        result[5] += 0;
      } else {
        result[0] += 25950856;
        result[1] += 1659647;
        result[2] += 3168418;
        result[3] += 4048534;
        result[4] += 4853212;
        result[5] += 3269003;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1481023;
        result[3] += 1481023;
        result[4] += 7405116;
        result[5] += 32582510;
      } else {
        result[0] += 2260509;
        result[1] += 0;
        result[2] += 7535030;
        result[3] += 22605091;
        result[4] += 753503;
        result[5] += 9795539;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1857873;
        result[1] += 1202153;
        result[2] += 29725982;
        result[3] += 7759355;
        result[4] += 0;
        result[5] += 2404307;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42177701;
        result[3] += 771971;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 6725215;
        result[1] += 1681303;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32556157;
        result[5] += 1986995;
      } else {
        result[0] += 172212;
        result[1] += 792175;
        result[2] += 206654;
        result[3] += 8128406;
        result[4] += 2135428;
        result[5] += 31514796;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41788870;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1160801;
        result[5] += 0;
      } else {
        result[0] += 25822798;
        result[1] += 1204421;
        result[2] += 2625639;
        result[3] += 3661441;
        result[4] += 5901665;
        result[5] += 3733706;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 4405094;
        result[1] += 11012736;
        result[2] += 1101273;
        result[3] += 3303820;
        result[4] += 0;
        result[5] += 23126746;
      } else {
        result[0] += 1620742;
        result[1] += 1620742;
        result[2] += 8103711;
        result[3] += 23500764;
        result[4] += 0;
        result[5] += 8103711;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 5368709;
        result[2] += 8947848;
        result[3] += 8947848;
        result[4] += 3579139;
        result[5] += 16106127;
      } else {
        result[0] += 944443;
        result[1] += 0;
        result[2] += 38317404;
        result[3] += 3103170;
        result[4] += 0;
        result[5] += 584655;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 645859;
        result[1] += 5489807;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35683750;
        result[5] += 1130254;
      } else {
        result[0] += 29113536;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7206320;
        result[5] += 6629815;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 80884;
        result[1] += 40442;
        result[2] += 40442;
        result[3] += 3639802;
        result[4] += 3922898;
        result[5] += 35225202;
      } else {
        result[0] += 771551;
        result[1] += 900142;
        result[2] += 3471979;
        result[3] += 24689632;
        result[4] += 900142;
        result[5] += 12216224;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 42438367;
        result[2] += 0;
        result[3] += 0;
        result[4] += 511305;
        result[5] += 0;
      } else {
        result[0] += 31360078;
        result[1] += 1655656;
        result[2] += 1298553;
        result[3] += 1850439;
        result[4] += 4772185;
        result[5] += 2012758;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1495759;
        result[1] += 1923119;
        result[2] += 7906158;
        result[3] += 10897678;
        result[4] += 1709439;
        result[5] += 19017516;
      } else {
        result[0] += 1644198;
        result[1] += 0;
        result[2] += 37014517;
        result[3] += 3328499;
        result[4] += 0;
        result[5] += 962457;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 2078209;
        result[2] += 0;
        result[3] += 173184;
        result[4] += 39312805;
        result[5] += 1385473;
      } else {
        result[0] += 1150739;
        result[1] += 304607;
        result[2] += 643060;
        result[3] += 6227533;
        result[4] += 2639932;
        result[5] += 31983799;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 41098393;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1851279;
        result[5] += 0;
      } else {
        result[0] += 26449371;
        result[1] += 1148909;
        result[2] += 2542268;
        result[3] += 4228966;
        result[4] += 4962312;
        result[5] += 3617843;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 704092;
        result[1] += 0;
        result[2] += 8801162;
        result[3] += 19010510;
        result[4] += 1760232;
        result[5] += 12673673;
      } else {
        result[0] += 1415923;
        result[1] += 1887897;
        result[2] += 32094261;
        result[3] += 2831846;
        result[4] += 1415923;
        result[5] += 3303820;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 596523;
        result[1] += 0;
        result[2] += 31019208;
        result[3] += 10140895;
        result[4] += 0;
        result[5] += 1193046;
      } else {
        result[0] += 176264;
        result[1] += 0;
        result[2] += 40129448;
        result[3] += 2467696;
        result[4] += 0;
        result[5] += 176264;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 8366819;
        result[1] += 1255022;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31375572;
        result[5] += 1952257;
      } else {
        result[0] += 139787;
        result[1] += 69893;
        result[2] += 34946;
        result[3] += 7024315;
        result[4] += 3040375;
        result[5] += 32640353;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 36324042;
        result[2] += 0;
        result[3] += 233845;
        result[4] += 6235887;
        result[5] += 155897;
      } else {
        result[0] += 27775836;
        result[1] += 1337355;
        result[2] += 3471979;
        result[3] += 3960628;
        result[4] += 3240514;
        result[5] += 3163359;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19572002;
        result[3] += 16038169;
        result[4] += 271833;
        result[5] += 7067667;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35870056;
        result[3] += 471974;
        result[4] += 0;
        result[5] += 6607641;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42300000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 317362;
        result[1] += 0;
        result[2] += 41257075;
        result[3] += 1269448;
        result[4] += 0;
        result[5] += 105787;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 146087;
        result[1] += 292174;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40612275;
        result[5] += 1899135;
      } else {
        result[0] += 0;
        result[1] += 30678337;
        result[2] += 0;
        result[3] += 0;
        result[4] += 12271335;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
        result[0] += 34001824;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8053063;
        result[5] += 894784;
      } else {
        result[0] += 66588;
        result[1] += 33294;
        result[2] += 199765;
        result[3] += 7624399;
        result[4] += 1931070;
        result[5] += 33094554;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 164873;
        result[1] += 35942528;
        result[2] += 0;
        result[3] += 82436;
        result[4] += 6512522;
        result[5] += 247310;
      } else {
        result[0] += 32969533;
        result[1] += 1498615;
        result[2] += 1084104;
        result[3] += 2231980;
        result[4] += 3316084;
        result[5] += 1849354;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1619287;
        result[1] += 771089;
        result[2] += 22207371;
        result[3] += 12414537;
        result[4] += 1696396;
        result[5] += 4240991;
      } else {
        result[0] += 421075;
        result[1] += 0;
        result[2] += 40904450;
        result[3] += 1323379;
        result[4] += 0;
        result[5] += 300768;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42960000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 42737575;
        result[2] += 0;
        result[3] += 0;
        result[4] += 212097;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 18829591;
        result[1] += 1706609;
        result[2] += 0;
        result[3] += 0;
        result[4] += 20308653;
        result[5] += 2104818;
      } else {
        result[0] += 2765321;
        result[1] += 1121076;
        result[2] += 921773;
        result[3] += 8171399;
        result[4] += 4135525;
        result[5] += 25834577;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 825955;
        result[1] += 2477865;
        result[2] += 4129776;
        result[3] += 14041239;
        result[4] += 4955731;
        result[5] += 16519104;
      } else {
        result[0] += 40603408;
        result[1] += 195522;
        result[2] += 586566;
        result[3] += 782088;
        result[4] += 782088;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 520602;
        result[1] += 0;
        result[2] += 14837159;
        result[3] += 17440170;
        result[4] += 1561806;
        result[5] += 8589934;
      } else {
        result[0] += 1536805;
        result[1] += 0;
        result[2] += 37894391;
        result[3] += 2992726;
        result[4] += 80884;
        result[5] += 444864;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 466844;
        result[2] += 0;
        result[3] += 1867377;
        result[4] += 37347541;
        result[5] += 3267909;
      } else {
        result[0] += 1476395;
        result[1] += 134217;
        result[2] += 100663;
        result[3] += 6408896;
        result[4] += 3321888;
        result[5] += 31507611;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
        result[0] += 187963;
        result[1] += 40036237;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2725471;
        result[5] += 0;
      } else {
        result[0] += 26380127;
        result[1] += 1714960;
        result[2] += 2774200;
        result[3] += 3883881;
        result[4] += 4413501;
        result[5] += 3783001;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 3262000;
        result[2] += 8698667;
        result[3] += 17125502;
        result[4] += 543666;
        result[5] += 13319835;
      } else {
        result[0] += 8403196;
        result[1] += 933688;
        result[2] += 29878033;
        result[3] += 0;
        result[4] += 0;
        result[5] += 3734754;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31973645;
        result[3] += 8589934;
        result[4] += 0;
        result[5] += 2386092;
      } else {
        result[0] += 526344;
        result[1] += 0;
        result[2] += 41160103;
        result[3] += 1210591;
        result[4] += 0;
        result[5] += 52634;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 158485;
        result[1] += 316971;
        result[2] += 0;
        result[3] += 158485;
        result[4] += 38987525;
        result[5] += 3328203;
      } else {
        result[0] += 1030792;
        result[1] += 610839;
        result[2] += 114532;
        result[3] += 6184752;
        result[4] += 2825134;
        result[5] += 32183621;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41505177;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1444495;
        result[5] += 0;
      } else {
        result[0] += 27053530;
        result[1] += 1278711;
        result[2] += 2256550;
        result[3] += 3259461;
        result[4] += 4688609;
        result[5] += 4412809;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5933836;
        result[3] += 11867672;
        result[4] += 282563;
        result[5] += 24865600;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2095105;
        result[1] += 2618882;
        result[2] += 14665741;
        result[3] += 17284624;
        result[4] += 1309441;
        result[5] += 4975876;
      } else {
        result[0] += 1417933;
        result[1] += 0;
        result[2] += 38833090;
        result[3] += 2469949;
        result[4] += 0;
        result[5] += 228699;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 4413800;
        result[1] += 2037138;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34970879;
        result[5] += 1527853;
      } else {
        result[0] += 38658;
        result[1] += 115975;
        result[2] += 347927;
        result[3] += 5605492;
        result[4] += 3247320;
        result[5] += 33594298;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 390451;
        result[1] += 41290253;
        result[2] += 0;
        result[3] += 195225;
        result[4] += 1073741;
        result[5] += 0;
      } else {
        result[0] += 23989907;
        result[1] += 1479453;
        result[2] += 2253321;
        result[3] += 4779772;
        result[4] += 4939098;
        result[5] += 5508119;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
        result[0] += 847690;
        result[1] += 1977945;
        result[2] += 10454854;
        result[3] += 18649200;
        result[4] += 1412818;
        result[5] += 9607163;
      } else {
        result[0] += 4772185;
        result[1] += 1908874;
        result[2] += 28633115;
        result[3] += 954437;
        result[4] += 2863311;
        result[5] += 3817748;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5832671;
        result[1] += 0;
        result[2] += 27042386;
        result[3] += 7423400;
        result[4] += 0;
        result[5] += 2651214;
      } else {
        result[0] += 300697;
        result[1] += 0;
        result[2] += 41195602;
        result[3] += 1303023;
        result[4] += 0;
        result[5] += 150348;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6946038;
        result[1] += 115767;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30794105;
        result[5] += 5093761;
      } else {
        result[0] += 0;
        result[1] += 226647;
        result[2] += 37774;
        result[3] += 6270576;
        result[4] += 2190924;
        result[5] += 34223749;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 206986;
        result[1] += 41397275;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1345411;
        result[5] += 0;
      } else {
        result[0] += 28586992;
        result[1] += 2047858;
        result[2] += 1439035;
        result[3] += 3099460;
        result[4] += 5341035;
        result[5] += 2435290;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 954437;
        result[4] += 8589934;
        result[5] += 33405301;
      } else {
        result[0] += 360921;
        result[1] += 1263225;
        result[2] += 8301197;
        result[3] += 22738062;
        result[4] += 0;
        result[5] += 10286266;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 5846552;
        result[1] += 1349204;
        result[2] += 25185148;
        result[3] += 6071419;
        result[4] += 899469;
        result[5] += 3597878;
      } else {
        result[0] += 48973;
        result[1] += 0;
        result[2] += 39717428;
        result[3] += 2938404;
        result[4] += 0;
        result[5] += 244867;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 156180;
        result[2] += 0;
        result[3] += 2655070;
        result[4] += 38264254;
        result[5] += 1874167;
      } else {
        result[0] += 1431655;
        result[1] += 95443;
        result[2] += 95443;
        result[3] += 6712874;
        result[4] += 2958755;
        result[5] += 31655499;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 94811;
        result[1] += 40674193;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2180667;
        result[5] += 0;
      } else {
        result[0] += 27154775;
        result[1] += 1633954;
        result[2] += 3060423;
        result[3] += 3682882;
        result[4] += 4305341;
        result[5] += 3112295;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9878424;
        result[3] += 16750372;
        result[4] += 0;
        result[5] += 16320875;
      } else {
        result[0] += 3181457;
        result[1] += 0;
        result[2] += 31814572;
        result[3] += 6362914;
        result[4] += 1590728;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8409726;
        result[1] += 2402778;
        result[2] += 21925357;
        result[3] += 8710073;
        result[4] += 0;
        result[5] += 1501736;
      } else {
        result[0] += 52250;
        result[1] += 0;
        result[2] += 39971410;
        result[3] += 2560260;
        result[4] += 0;
        result[5] += 365751;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8369679;
        result[1] += 1541783;
        result[2] += 330382;
        result[3] += 220254;
        result[4] += 28522987;
        result[5] += 3964585;
      } else {
        result[0] += 120871;
        result[1] += 201452;
        result[2] += 40290;
        result[3] += 3706725;
        result[4] += 4311083;
        result[5] += 34569248;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42560000))) ) ) {
        result[0] += 199302;
        result[1] += 41654207;
        result[2] += 99651;
        result[3] += 0;
        result[4] += 996512;
        result[5] += 0;
      } else {
        result[0] += 24926563;
        result[1] += 1250961;
        result[2] += 3057905;
        result[3] += 6509632;
        result[4] += 2918909;
        result[5] += 4285700;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1952257;
        result[4] += 1952257;
        result[5] += 39045157;
      } else {
        result[0] += 0;
        result[1] += 2477865;
        result[2] += 4955731;
        result[3] += 25604612;
        result[4] += 2477865;
        result[5] += 7433597;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 948415;
        result[1] += 541951;
        result[2] += 30891247;
        result[3] += 6909884;
        result[4] += 270975;
        result[5] += 3387198;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41278720;
        result[3] += 1609065;
        result[4] += 0;
        result[5] += 61887;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 689954;
        result[1] += 1552397;
        result[2] += 0;
        result[3] += 862443;
        result[4] += 38809945;
        result[5] += 1034931;
      } else {
        result[0] += 1544479;
        result[1] += 887254;
        result[2] += 295751;
        result[3] += 6769420;
        result[4] += 2398872;
        result[5] += 31053895;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 41629706;
        result[2] += 0;
        result[3] += 101535;
        result[4] += 1218430;
        result[5] += 0;
      } else {
        result[0] += 25667135;
        result[1] += 1882256;
        result[2] += 2835607;
        result[3] += 3568954;
        result[4] += 5573435;
        result[5] += 3422284;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 5206020;
        result[2] += 9110536;
        result[3] += 5856773;
        result[4] += 1301505;
        result[5] += 21474836;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28971968;
        result[3] += 12707003;
        result[4] += 0;
        result[5] += 1270700;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 3205199;
        result[1] += 1923119;
        result[2] += 28205755;
        result[3] += 3846239;
        result[4] += 0;
        result[5] += 5769359;
      } else {
        result[0] += 163513;
        result[1] += 0;
        result[2] += 41205523;
        result[3] += 1417121;
        result[4] += 0;
        result[5] += 163513;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 557787;
        result[1] += 2342709;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36702447;
        result[5] += 3346727;
      } else {
        result[0] += 0;
        result[1] += 40912534;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2037138;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1230234;
        result[1] += 72366;
        result[2] += 72366;
        result[3] += 7019575;
        result[4] += 1519701;
        result[5] += 33035426;
      } else {
        result[0] += 27990260;
        result[1] += 1146714;
        result[2] += 3622575;
        result[3] += 4248056;
        result[4] += 2658292;
        result[5] += 3283773;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 3482405;
        result[1] += 1160801;
        result[2] += 0;
        result[3] += 11608019;
        result[4] += 1160801;
        result[5] += 25537643;
      } else {
        result[0] += 332943;
        result[1] += 0;
        result[2] += 24304853;
        result[3] += 15648330;
        result[4] += 0;
        result[5] += 2663545;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        result[0] += 5237764;
        result[1] += 0;
        result[2] += 16760847;
        result[3] += 0;
        result[4] += 7332870;
        result[5] += 13618188;
      } else {
        result[0] += 0;
        result[1] += 48095;
        result[2] += 40304396;
        result[3] += 2404796;
        result[4] += 0;
        result[5] += 192383;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 750212;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41074141;
        result[5] += 1125318;
      } else {
        result[0] += 13998411;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2545165;
        result[4] += 11453246;
        result[5] += 14952849;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 99076;
        result[1] += 0;
        result[2] += 99076;
        result[3] += 2031068;
        result[4] += 3071372;
        result[5] += 37649078;
      } else {
        result[0] += 0;
        result[1] += 1001741;
        result[2] += 626088;
        result[3] += 19533962;
        result[4] += 876523;
        result[5] += 20911356;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 39067683;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3881989;
        result[5] += 0;
      } else {
        result[0] += 31052673;
        result[1] += 2048090;
        result[2] += 1084283;
        result[3] += 2680589;
        result[4] += 4307014;
        result[5] += 1777020;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 122363;
        result[1] += 122363;
        result[2] += 17742742;
        result[3] += 14561285;
        result[4] += 244727;
        result[5] += 10156190;
      } else {
        result[0] += 719575;
        result[1] += 449734;
        result[2] += 38092537;
        result[3] += 2833329;
        result[4] += 539681;
        result[5] += 314814;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 375653;
        result[1] += 626088;
        result[2] += 0;
        result[3] += 1252177;
        result[4] += 35937481;
        result[5] += 4758272;
      } else {
        result[0] += 1624147;
        result[1] += 252645;
        result[2] += 108276;
        result[3] += 7434985;
        result[4] += 1912884;
        result[5] += 31616734;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 96299;
        result[1] += 41408877;
        result[2] += 0;
        result[3] += 192599;
        result[4] += 1251896;
        result[5] += 0;
      } else {
        result[0] += 26215059;
        result[1] += 2076192;
        result[2] += 2426393;
        result[3] += 3602069;
        result[4] += 5353075;
        result[5] += 3276882;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 1651910;
        result[2] += 1651910;
        result[3] += 5781686;
        result[4] += 3303820;
        result[5] += 30560344;
      } else {
        result[0] += 1900428;
        result[1] += 2280513;
        result[2] += 15583509;
        result[3] += 19004280;
        result[4] += 0;
        result[5] += 4180941;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 2072638;
        result[1] += 0;
        result[2] += 35004559;
        result[3] += 5411889;
        result[4] += 0;
        result[5] += 460586;
      } else {
        result[0] += 1015701;
        result[1] += 0;
        result[2] += 40700619;
        result[3] += 1233352;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 825955;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41628144;
        result[5] += 495573;
      } else {
        result[0] += 1241918;
        result[1] += 103493;
        result[2] += 34497;
        result[3] += 6658061;
        result[4] += 2380343;
        result[5] += 32531358;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41861086;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1088586;
        result[5] += 0;
      } else {
        result[0] += 26970651;
        result[1] += 1452638;
        result[2] += 2275800;
        result[3] += 4067387;
        result[4] += 5205287;
        result[5] += 2977908;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 2419699;
        result[1] += 7864024;
        result[2] += 2419699;
        result[3] += 7259099;
        result[4] += 4234474;
        result[5] += 18752674;
      } else {
        result[0] += 0;
        result[1] += 876523;
        result[2] += 20598312;
        result[3] += 18407002;
        result[4] += 0;
        result[5] += 3067833;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 6781527;
        result[1] += 0;
        result[2] += 16953818;
        result[3] += 14693309;
        result[4] += 0;
        result[5] += 4521018;
      } else {
        result[0] += 663681;
        result[1] += 0;
        result[2] += 39631265;
        result[3] += 2512508;
        result[4] += 0;
        result[5] += 142217;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 444306;
        result[1] += 296204;
        result[2] += 0;
        result[3] += 148102;
        result[4] += 40283831;
        result[5] += 1777227;
      } else {
        result[0] += 2403209;
        result[1] += 154051;
        result[2] += 30810;
        result[3] += 7363681;
        result[4] += 2742124;
        result[5] += 30255795;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 376751;
        result[1] += 40406600;
        result[2] += 470939;
        result[3] += 0;
        result[4] += 1695381;
        result[5] += 0;
      } else {
        result[0] += 28542331;
        result[1] += 1797513;
        result[2] += 2859680;
        result[3] += 3213735;
        result[4] += 4330372;
        result[5] += 2206039;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
        result[0] += 1419823;
        result[1] += 4969383;
        result[2] += 1419823;
        result[3] += 11003635;
        result[4] += 2839647;
        result[5] += 21297358;
      } else {
        result[0] += 3181457;
        result[1] += 0;
        result[2] += 31814572;
        result[3] += 7953643;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25114639;
        result[3] += 12011349;
        result[4] += 363980;
        result[5] += 5459704;
      } else {
        result[0] += 407588;
        result[1] += 0;
        result[2] += 39994653;
        result[3] += 2394584;
        result[4] += 0;
        result[5] += 152845;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 145100;
        result[1] += 3917706;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37871164;
        result[5] += 1015701;
      } else {
        result[0] += 2573763;
        result[1] += 64344;
        result[2] += 321720;
        result[3] += 7077848;
        result[4] += 2831139;
        result[5] += 30080857;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 26393225;
        result[1] += 2606107;
        result[2] += 2708307;
        result[3] += 3449259;
        result[4] += 4343512;
        result[5] += 3449259;
      } else {
        result[0] += 998829;
        result[1] += 41451428;
        result[2] += 0;
        result[3] += 99882;
        result[4] += 399531;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 904203;
        result[1] += 3164712;
        result[2] += 7233629;
        result[3] += 21700887;
        result[4] += 452101;
        result[5] += 9494138;
      } else {
        result[0] += 3944357;
        result[1] += 1314785;
        result[2] += 24980932;
        result[3] += 4820881;
        result[4] += 1314785;
        result[5] += 6573929;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 20679472;
        result[1] += 0;
        result[2] += 20679472;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1590728;
      } else {
        result[0] += 99420;
        result[1] += 0;
        result[2] += 40414449;
        result[3] += 2087831;
        result[4] += 0;
        result[5] += 347971;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 921666;
        result[1] += 553000;
        result[2] += 0;
        result[3] += 368666;
        result[4] += 40737672;
        result[5] += 368666;
      } else {
        result[0] += 20007611;
        result[1] += 533536;
        result[2] += 0;
        result[3] += 1067072;
        result[4] += 9070117;
        result[5] += 12271335;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 120984;
        result[3] += 967879;
        result[4] += 2601177;
        result[5] += 39259630;
      } else {
        result[0] += 441263;
        result[1] += 588351;
        result[2] += 735439;
        result[3] += 18091814;
        result[4] += 4412637;
        result[5] += 18680165;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        result[0] += 540733;
        result[1] += 33293721;
        result[2] += 154495;
        result[3] += 77247;
        result[4] += 8419989;
        result[5] += 463485;
      } else {
        result[0] += 33099439;
        result[1] += 1591956;
        result[2] += 1293465;
        result[3] += 1989946;
        result[4] += 2918587;
        result[5] += 2056277;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 452101;
        result[1] += 2561910;
        result[2] += 12508150;
        result[3] += 15371461;
        result[4] += 1356305;
        result[5] += 10699743;
      } else {
        result[0] += 1543102;
        result[1] += 42863;
        result[2] += 38406094;
        result[3] += 2186061;
        result[4] += 85727;
        result[5] += 685823;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 2367304;
        result[2] += 0;
        result[3] += 169093;
        result[4] += 37876876;
        result[5] += 2536398;
      } else {
        result[0] += 1769094;
        result[1] += 262088;
        result[2] += 131044;
        result[3] += 6617722;
        result[4] += 3341622;
        result[5] += 30828102;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 90230;
        result[1] += 40062299;
        result[2] += 0;
        result[3] += 90230;
        result[4] += 2706912;
        result[5] += 0;
      } else {
        result[0] += 26095681;
        result[1] += 1145664;
        result[2] += 3411533;
        result[3] += 4073472;
        result[4] += 4404441;
        result[5] += 3818880;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9761289;
        result[3] += 1301505;
        result[4] += 5856773;
        result[5] += 26030104;
      } else {
        result[0] += 0;
        result[1] += 1808407;
        result[2] += 19892480;
        result[3] += 17179869;
        result[4] += 0;
        result[5] += 4068916;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1272582;
        result[1] += 1908874;
        result[2] += 24815366;
        result[3] += 13362120;
        result[4] += 318145;
        result[5] += 1272582;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40753991;
        result[3] += 2088575;
        result[4] += 0;
        result[5] += 107106;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 649113;
        result[1] += 2055525;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37432208;
        result[5] += 2812824;
      } else {
        result[0] += 92364;
        result[1] += 40086361;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2770946;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        result[0] += 2124946;
        result[1] += 289765;
        result[2] += 611726;
        result[3] += 8531981;
        result[4] += 1770788;
        result[5] += 29620464;
      } else {
        result[0] += 29694663;
        result[1] += 832024;
        result[2] += 3127264;
        result[3] += 3815836;
        result[4] += 2754287;
        result[5] += 2725597;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 1789569;
        result[2] += 4921316;
        result[3] += 17895697;
        result[4] += 894784;
        result[5] += 17448304;
      } else {
        result[0] += 1700977;
        result[1] += 850488;
        result[2] += 27215634;
        result[3] += 8930130;
        result[4] += 850488;
        result[5] += 3401954;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 10737418;
        result[4] += 894784;
        result[5] += 4473924;
      } else {
        result[0] += 145100;
        result[1] += 0;
        result[2] += 40918269;
        result[3] += 1692836;
        result[4] += 0;
        result[5] += 193466;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 577798;
        result[1] += 192599;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40445880;
        result[5] += 1733394;
      } else {
        result[0] += 18991351;
        result[1] += 0;
        result[2] += 584349;
        result[3] += 0;
        result[4] += 14316557;
        result[5] += 9057414;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 54092;
        result[2] += 0;
        result[3] += 1298226;
        result[4] += 2596453;
        result[5] += 39000899;
      } else {
        result[0] += 87831;
        result[1] += 351326;
        result[2] += 175663;
        result[3] += 16863675;
        result[4] += 2722780;
        result[5] += 22748395;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
        result[0] += 607062;
        result[1] += 35664922;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6677687;
        result[5] += 0;
      } else {
        result[0] += 34410717;
        result[1] += 573511;
        result[2] += 1497503;
        result[3] += 2389633;
        result[4] += 2102877;
        result[5] += 1975430;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 1412818;
        result[2] += 17660227;
        result[3] += 14693309;
        result[4] += 2119227;
        result[5] += 7064090;
      } else {
        result[0] += 1349204;
        result[1] += 179893;
        result[2] += 38227457;
        result[3] += 2113753;
        result[4] += 494708;
        result[5] += 584655;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1415923;
        result[2] += 0;
        result[3] += 314649;
        result[4] += 39488527;
        result[5] += 1730572;
      } else {
        result[0] += 910099;
        result[1] += 140015;
        result[2] += 0;
        result[3] += 6510708;
        result[4] += 2310251;
        result[5] += 33078598;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 345671;
        result[1] += 38196691;
        result[2] += 0;
        result[3] += 345671;
        result[4] += 4061639;
        result[5] += 0;
      } else {
        result[0] += 27380723;
        result[1] += 1350618;
        result[2] += 3020474;
        result[3] += 4002742;
        result[4] += 3609835;
        result[5] += 3585278;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3734754;
        result[4] += 3734754;
        result[5] += 35480164;
      } else {
        result[0] += 0;
        result[1] += 987348;
        result[2] += 18265952;
        result[3] += 13329208;
        result[4] += 493674;
        result[5] += 9873488;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1277313;
        result[1] += 0;
        result[2] += 33848812;
        result[3] += 6865561;
        result[4] += 0;
        result[5] += 957985;
      } else {
        result[0] += 122538;
        result[1] += 0;
        result[2] += 41111598;
        result[3] += 1470459;
        result[4] += 0;
        result[5] += 245076;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1326630;
        result[1] += 1326630;
        result[2] += 0;
        result[3] += 165828;
        result[4] += 35487374;
        result[5] += 4643207;
      } else {
        result[0] += 0;
        result[1] += 523244;
        result[2] += 174414;
        result[3] += 4185957;
        result[4] += 2790638;
        result[5] += 35275416;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 41250565;
        result[2] += 0;
        result[3] += 377579;
        result[4] += 1321528;
        result[5] += 0;
      } else {
        result[0] += 22766715;
        result[1] += 1567197;
        result[2] += 2689649;
        result[3] += 6035826;
        result[4] += 4659234;
        result[5] += 5231049;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 1533916;
        result[2] += 9970459;
        result[3] += 0;
        result[4] += 5368709;
        result[5] += 26076587;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9544371;
        result[3] += 28633115;
        result[4] += 0;
        result[5] += 4772185;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 2045222;
        result[1] += 1022611;
        result[2] += 22838318;
        result[3] += 12612205;
        result[4] += 1022611;
        result[5] += 3408704;
      } else {
        result[0] += 195004;
        result[1] += 0;
        result[2] += 39927107;
        result[3] += 2437552;
        result[4] += 0;
        result[5] += 390008;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7579354;
        result[1] += 2675066;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29871571;
        result[5] += 2823680;
      } else {
        result[0] += 230912;
        result[1] += 296887;
        result[2] += 197924;
        result[3] += 8081927;
        result[4] += 3925507;
        result[5] += 30216513;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 679344;
        result[1] += 35854296;
        result[2] += 0;
        result[3] += 603861;
        result[4] += 5812170;
        result[5] += 0;
      } else {
        result[0] += 27964708;
        result[1] += 1056805;
        result[2] += 3441393;
        result[3] += 3631076;
        result[4] += 2438782;
        result[5] += 4416906;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 1101273;
        result[1] += 3303820;
        result[2] += 0;
        result[3] += 4405094;
        result[4] += 7708915;
        result[5] += 26430567;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22979442;
        result[3] += 17234582;
        result[4] += 0;
        result[5] += 2735647;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 1808407;
        result[1] += 0;
        result[2] += 30968974;
        result[3] += 8815985;
        result[4] += 0;
        result[5] += 1356305;
      } else {
        result[0] += 247192;
        result[1] += 0;
        result[2] += 40477749;
        result[3] += 1915740;
        result[4] += 0;
        result[5] += 308990;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 692736;
        result[1] += 173184;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41391015;
        result[5] += 692736;
      } else {
        result[0] += 1448111;
        result[1] += 197469;
        result[2] += 98734;
        result[3] += 7306381;
        result[4] += 2040520;
        result[5] += 31858454;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 96299;
        result[1] += 42179275;
        result[2] += 0;
        result[3] += 0;
        result[4] += 674098;
        result[5] += 0;
      } else {
        result[0] += 28237345;
        result[1] += 1032444;
        result[2] += 2839221;
        result[3] += 3639365;
        result[4] += 4620187;
        result[5] += 2581110;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1301505;
        result[3] += 5206020;
        result[4] += 1301505;
        result[5] += 35140641;
      } else {
        result[0] += 913822;
        result[1] += 16448810;
        result[2] += 0;
        result[3] += 20104102;
        result[4] += 0;
        result[5] += 5482936;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 3579139;
        result[1] += 0;
        result[2] += 21474836;
        result[3] += 9435912;
        result[4] += 650752;
        result[5] += 7809031;
      } else {
        result[0] += 187144;
        result[1] += 0;
        result[2] += 39019637;
        result[3] += 3508960;
        result[4] += 0;
        result[5] += 233930;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 304607;
        result[1] += 3350683;
        result[2] += 0;
        result[3] += 456911;
        result[4] += 34420659;
        result[5] += 4416810;
      } else {
        result[0] += 1252988;
        result[1] += 278441;
        result[2] += 591689;
        result[3] += 7204685;
        result[4] += 2749614;
        result[5] += 30872252;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 39798229;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3151443;
        result[5] += 0;
      } else {
        result[0] += 25774789;
        result[1] += 1695053;
        result[2] += 2293308;
        result[3] += 4362270;
        result[4] += 4586616;
        result[5] += 4237634;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10487710;
        result[3] += 15981273;
        result[4] += 0;
        result[5] += 16480688;
      } else {
        result[0] += 0;
        result[1] += 894784;
        result[2] += 28856811;
        result[3] += 8724152;
        result[4] += 1118481;
        result[5] += 3355443;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1493901;
        result[1] += 186737;
        result[2] += 35106689;
        result[3] += 4668442;
        result[4] += 0;
        result[5] += 1493901;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42307568;
        result[3] += 642104;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 159072;
        result[1] += 1908874;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39450069;
        result[5] += 1431655;
      } else {
        result[0] += 938790;
        result[1] += 502923;
        result[2] += 569980;
        result[3] += 7644438;
        result[4] += 2447561;
        result[5] += 30845979;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 77247;
        result[1] += 34684178;
        result[2] += 0;
        result[3] += 386238;
        result[4] += 7802008;
        result[5] += 0;
      } else {
        result[0] += 27589660;
        result[1] += 1512125;
        result[2] += 2228395;
        result[3] += 4483319;
        result[4] += 2573266;
        result[5] += 4562905;
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7745022;
        result[3] += 26755533;
        result[4] += 0;
        result[5] += 8449115;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31735036;
        result[3] += 7158278;
        result[4] += 477218;
        result[5] += 3579139;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 514367;
        result[1] += 0;
        result[2] += 40017779;
        result[3] += 2160342;
        result[4] += 0;
        result[5] += 257183;
      } else {
        result[0] += 19685266;
        result[1] += 0;
        result[2] += 23264406;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 42369271;
        result[2] += 0;
        result[3] += 0;
        result[4] += 580400;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 19395009;
        result[1] += 2355466;
        result[2] += 0;
        result[3] += 0;
        result[4] += 18943963;
        result[5] += 2255233;
      } else {
        result[0] += 2057469;
        result[1] += 1183044;
        result[2] += 514367;
        result[3] += 8358469;
        result[4] += 4114938;
        result[5] += 26721383;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 7953643;
        result[1] += 0;
        result[2] += 12725829;
        result[3] += 10339736;
        result[4] += 3181457;
        result[5] += 8749007;
      } else {
        result[0] += 41182756;
        result[1] += 0;
        result[2] += 611625;
        result[3] += 135916;
        result[4] += 883458;
        result[5] += 135916;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 751306;
        result[1] += 0;
        result[2] += 24918323;
        result[3] += 12897423;
        result[4] += 0;
        result[5] += 4382619;
      } else {
        result[0] += 572662;
        result[1] += 0;
        result[2] += 40086361;
        result[3] += 2186528;
        result[4] += 0;
        result[5] += 104120;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
        result[0] += 422455;
        result[1] += 2957190;
        result[2] += 140818;
        result[3] += 0;
        result[4] += 35908742;
        result[5] += 3520464;
      } else {
        result[0] += 35280088;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3067833;
        result[5] += 4601750;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 90802;
        result[1] += 45401;
        result[2] += 499414;
        result[3] += 2678679;
        result[4] += 3677508;
        result[5] += 35957865;
      } else {
        result[0] += 282563;
        result[1] += 282563;
        result[2] += 1412818;
        result[3] += 22181245;
        result[4] += 706409;
        result[5] += 18084072;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 1434045;
        result[1] += 32481138;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8317465;
        result[5] += 717022;
      } else {
        result[0] += 31546550;
        result[1] += 908490;
        result[2] += 877163;
        result[3] += 3414671;
        result[4] += 2192908;
        result[5] += 4009889;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 907387;
        result[1] += 0;
        result[2] += 19508830;
        result[3] += 14971893;
        result[4] += 302462;
        result[5] += 7259099;
      } else {
        result[0] += 670390;
        result[1] += 0;
        result[2] += 39865877;
        result[3] += 2189941;
        result[4] += 44692;
        result[5] += 178770;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 359411;
        result[1] += 179705;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38457029;
        result[5] += 3953526;
      } else {
        result[0] += 1392962;
        result[1] += 928641;
        result[2] += 961807;
        result[3] += 6533656;
        result[4] += 2255272;
        result[5] += 30877332;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 374289;
        result[1] += 40516793;
        result[2] += 0;
        result[3] += 187144;
        result[4] += 1871445;
        result[5] += 0;
      } else {
        result[0] += 26084618;
        result[1] += 1099351;
        result[2] += 2548497;
        result[3] += 4022627;
        result[4] += 5196935;
        result[5] += 3997642;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1952257;
        result[4] += 0;
        result[5] += 40997415;
      } else {
        result[0] += 1022611;
        result[1] += 0;
        result[2] += 18918308;
        result[3] += 19173961;
        result[4] += 255652;
        result[5] += 3579139;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 6135667;
        result[1] += 18407002;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8180890;
        result[5] += 10226112;
      } else {
        result[0] += 618323;
        result[1] += 0;
        result[2] += 39525114;
        result[3] += 2330602;
        result[4] += 0;
        result[5] += 475633;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 277094;
        result[1] += 138547;
        result[2] += 0;
        result[3] += 692736;
        result[4] += 38516158;
        result[5] += 3325135;
      } else {
        result[0] += 1141174;
        result[1] += 138324;
        result[2] += 69162;
        result[3] += 6570400;
        result[4] += 1901958;
        result[5] += 33128652;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 307332;
        result[1] += 34805370;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7452805;
        result[5] += 384165;
      } else {
        result[0] += 27970311;
        result[1] += 1086997;
        result[2] += 2067947;
        result[3] += 4347991;
        result[4] += 3207969;
        result[5] += 4268455;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4090445;
        result[3] += 25224411;
        result[4] += 1363481;
        result[5] += 12271335;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 27201459;
        result[3] += 6442450;
        result[4] += 0;
        result[5] += 9305762;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 499414;
        result[1] += 0;
        result[2] += 31712839;
        result[3] += 8490051;
        result[4] += 0;
        result[5] += 2247366;
      } else {
        result[0] += 590558;
        result[1] += 0;
        result[2] += 40157944;
        result[3] += 2040109;
        result[4] += 0;
        result[5] += 161061;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 795364;
        result[1] += 454493;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37268499;
        result[5] += 4431315;
      } else {
        result[0] += 2901489;
        result[1] += 152709;
        result[2] += 76354;
        result[3] += 3206908;
        result[4] += 3016021;
        result[5] += 33596188;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 453055;
        result[1] += 42224783;
        result[2] += 0;
        result[3] += 0;
        result[4] += 271833;
        result[5] += 0;
      } else {
        result[0] += 24494921;
        result[1] += 1289206;
        result[2] += 2936525;
        result[3] += 6422157;
        result[4] += 3032022;
        result[5] += 4774838;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
        result[0] += 2801065;
        result[1] += 4668442;
        result[2] += 8091967;
        result[3] += 10893032;
        result[4] += 2178606;
        result[5] += 14316557;
      } else {
        result[0] += 3435973;
        result[1] += 0;
        result[2] += 32641751;
        result[3] += 5153960;
        result[4] += 0;
        result[5] += 1717986;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19461570;
        result[3] += 20132659;
        result[4] += 0;
        result[5] += 3355443;
      } else {
        result[0] += 222249;
        result[1] += 0;
        result[2] += 40449368;
        result[3] += 2111368;
        result[4] += 0;
        result[5] += 166686;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 655720;
        result[2] += 0;
        result[3] += 819650;
        result[4] += 39835002;
        result[5] += 1639300;
      } else {
        result[0] += 1382129;
        result[1] += 138212;
        result[2] += 241872;
        result[3] += 7117966;
        result[4] += 2349620;
        result[5] += 31719871;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25272865;
        result[1] += 2792320;
        result[2] += 2129735;
        result[3] += 4046498;
        result[4] += 4993047;
        result[5] += 3715205;
      } else {
        result[0] += 800926;
        result[1] += 42048630;
        result[2] += 0;
        result[3] += 0;
        result[4] += 100115;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4294967;
        result[3] += 28346784;
        result[4] += 0;
        result[5] += 10307921;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40423221;
        result[3] += 0;
        result[4] += 0;
        result[5] += 2526451;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25625435;
        result[3] += 12632256;
        result[4] += 0;
        result[5] += 4691981;
      } else {
        result[0] += 771262;
        result[1] += 0;
        result[2] += 39816419;
        result[3] += 2169175;
        result[4] += 0;
        result[5] += 192815;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 164558;
        result[1] += 822790;
        result[2] += 0;
        result[3] += 164558;
        result[4] += 38671161;
        result[5] += 3126604;
      } else {
        result[0] += 976128;
        result[1] += 813440;
        result[2] += 455526;
        result[3] += 7581268;
        result[4] += 3318838;
        result[5] += 29804470;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 186737;
        result[1] += 41549140;
        result[2] += 0;
        result[3] += 186737;
        result[4] += 1027057;
        result[5] += 0;
      } else {
        result[0] += 25314051;
        result[1] += 1436609;
        result[2] += 3492447;
        result[3] += 4012599;
        result[4] += 5102440;
        result[5] += 3591523;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 943948;
        result[1] += 471974;
        result[2] += 10855411;
        result[3] += 14159232;
        result[4] += 471974;
        result[5] += 16047130;
      } else {
        result[0] += 1316465;
        result[1] += 2468372;
        result[2] += 29949580;
        result[3] += 8227906;
        result[4] += 0;
        result[5] += 987348;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30156153;
        result[3] += 10965873;
        result[4] += 0;
        result[5] += 1827645;
      } else {
        result[0] += 131747;
        result[1] += 0;
        result[2] += 41500450;
        result[3] += 1053979;
        result[4] += 0;
        result[5] += 263494;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9250698;
        result[1] += 1541783;
        result[2] += 0;
        result[3] += 110127;
        result[4] += 27091332;
        result[5] += 4955731;
      } else {
        result[0] += 515524;
        result[1] += 418864;
        result[2] += 128881;
        result[3] += 8248399;
        result[4] += 3254251;
        result[5] += 30383752;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 26384486;
        result[1] += 2839002;
        result[2] += 2969231;
        result[3] += 3229690;
        result[4] += 3750608;
        result[5] += 3776654;
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 1753047;
        result[1] += 11394811;
        result[2] += 5259143;
        result[3] += 0;
        result[4] += 3506095;
        result[5] += 21036574;
      } else {
        result[0] += 1412818;
        result[1] += 282563;
        result[2] += 18366636;
        result[3] += 15823563;
        result[4] += 847690;
        result[5] += 6216400;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26658417;
        result[3] += 16291255;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 207737;
        result[1] += 0;
        result[2] += 40404891;
        result[3] += 1921569;
        result[4] += 51934;
        result[5] += 363540;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 179705;
        result[1] += 1257940;
        result[2] += 0;
        result[3] += 179705;
        result[4] += 40254086;
        result[5] += 1078234;
      } else {
        result[0] += 1441955;
        result[1] += 549316;
        result[2] += 0;
        result[3] += 7999419;
        result[4] += 1750945;
        result[5] += 31208035;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 25011320;
        result[1] += 1535578;
        result[2] += 3094423;
        result[3] += 3838946;
        result[4] += 6142315;
        result[5] += 3327087;
      } else {
        result[0] += 498256;
        result[1] += 42451416;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 810371;
        result[3] += 8914083;
        result[4] += 0;
        result[5] += 33225218;
      } else {
        result[0] += 1908874;
        result[1] += 3181457;
        result[2] += 20043180;
        result[3] += 13680266;
        result[4] += 954437;
        result[5] += 3181457;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 10462099;
        result[4] += 0;
        result[5] += 3854457;
      } else {
        result[0] += 300347;
        result[1] += 0;
        result[2] += 41027449;
        result[3] += 1561806;
        result[4] += 0;
        result[5] += 60069;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1687978;
        result[2] += 0;
        result[3] += 1312872;
        result[4] += 38448397;
        result[5] += 1500425;
      } else {
        result[0] += 1475370;
        result[1] += 131144;
        result[2] += 32786;
        result[3] += 6360485;
        result[4] += 2458950;
        result[5] += 32490935;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25508783;
        result[1] += 2633930;
        result[2] += 2396639;
        result[3] += 3606823;
        result[4] += 5315318;
        result[5] += 3488177;
      } else {
        result[0] += 205993;
        result[1] += 42640682;
        result[2] += 0;
        result[3] += 102996;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16207423;
        result[3] += 19989155;
        result[4] += 0;
        result[5] += 6753093;
      } else {
        result[0] += 200699;
        result[1] += 0;
        result[2] += 33717500;
        result[3] += 7225178;
        result[4] += 200699;
        result[5] += 1605595;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 13707342;
        result[1] += 0;
        result[2] += 27414684;
        result[3] += 1827645;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 201326;
        result[1] += 0;
        result[2] += 41070624;
        result[3] += 1409286;
        result[4] += 0;
        result[5] += 268435;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6151942;
        result[1] += 569624;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32240735;
        result[5] += 3987370;
      } else {
        result[0] += 137990;
        result[1] += 0;
        result[2] += 103493;
        result[3] += 7727491;
        result[4] += 2000868;
        result[5] += 32979829;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 293505;
        result[1] += 41579979;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1076187;
        result[5] += 0;
      } else {
        result[0] += 26449945;
        result[1] += 1486235;
        result[2] += 1864091;
        result[3] += 3980086;
        result[4] += 5743416;
        result[5] += 3425897;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13498468;
        result[3] += 24951714;
        result[4] += 0;
        result[5] += 4499489;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30300111;
        result[3] += 9119451;
        result[4] += 0;
        result[5] += 3530110;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 34359738;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8589934;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 534199;
        result[1] += 0;
        result[2] += 40385513;
        result[3] += 1549179;
        result[4] += 0;
        result[5] += 480779;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 375106;
        result[1] += 562659;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40886588;
        result[5] += 1125318;
      } else {
        result[0] += 1319881;
        result[1] += 356724;
        result[2] += 35672;
        result[3] += 6064322;
        result[4] += 2140349;
        result[5] += 33032721;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 233845;
        result[1] += 37571220;
        result[2] += 77948;
        result[3] += 0;
        result[4] += 5066658;
        result[5] += 0;
      } else {
        result[0] += 28271976;
        result[1] += 799663;
        result[2] += 2373195;
        result[3] += 4591616;
        result[4] += 3895135;
        result[5] += 3018085;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3655291;
        result[3] += 913822;
        result[4] += 1827645;
        result[5] += 36552913;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11453246;
        result[3] += 16361780;
        result[4] += 0;
        result[5] += 15134646;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 6135667;
        result[1] += 4431315;
        result[2] += 22497447;
        result[3] += 4431315;
        result[4] += 681740;
        result[5] += 4772185;
      } else {
        result[0] += 47774;
        result[1] += 0;
        result[2] += 39175452;
        result[3] += 3248696;
        result[4] += 0;
        result[5] += 477749;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4351110;
        result[1] += 701792;
        result[2] += 0;
        result[3] += 561433;
        result[4] += 32001717;
        result[5] += 5333619;
      } else {
        result[0] += 113623;
        result[1] += 151497;
        result[2] += 113623;
        result[3] += 7120404;
        result[4] += 2878461;
        result[5] += 32572062;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 35715242;
        result[2] += 152303;
        result[3] += 76151;
        result[4] += 6777519;
        result[5] += 228455;
      } else {
        result[0] += 25950327;
        result[1] += 1253639;
        result[2] += 3936426;
        result[3] += 4312518;
        result[4] += 3309607;
        result[5] += 4187154;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1244918;
        result[1] += 1244918;
        result[2] += 622459;
        result[3] += 15561475;
        result[4] += 4979672;
        result[5] += 19296229;
      } else {
        result[0] += 727960;
        result[1] += 0;
        result[2] += 24750658;
        result[3] += 12011349;
        result[4] += 0;
        result[5] += 5459704;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 477218;
        result[1] += 0;
        result[2] += 30780598;
        result[3] += 9544371;
        result[4] += 0;
        result[5] += 2147483;
      } else {
        result[0] += 115767;
        result[1] += 0;
        result[2] += 40750094;
        result[3] += 1678626;
        result[4] += 0;
        result[5] += 405185;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 173184;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41217831;
        result[5] += 1558657;
      } else {
        result[0] += 3734754;
        result[1] += 1867377;
        result[2] += 0;
        result[3] += 1867377;
        result[4] += 19607459;
        result[5] += 15872705;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 1643592;
        result[1] += 346019;
        result[2] += 43252;
        result[3] += 2378884;
        result[4] += 3762962;
        result[5] += 34774961;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 148102;
        result[3] += 22955859;
        result[4] += 1036716;
        result[5] += 18808994;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 41598447;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1351225;
        result[5] += 0;
      } else {
        result[0] += 31614922;
        result[1] += 1048974;
        result[2] += 1165527;
        result[3] += 2593297;
        result[4] += 4749522;
        result[5] += 1777428;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 688296;
        result[2] += 13628261;
        result[3] += 17620378;
        result[4] += 550636;
        result[5] += 10462099;
      } else {
        result[0] += 801614;
        result[1] += 126570;
        result[2] += 38013413;
        result[3] += 2826746;
        result[4] += 295331;
        result[5] += 885995;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 89571;
        result[3] += 1209219;
        result[4] += 8330176;
        result[5] += 33320705;
      } else {
        result[0] += 4473924;
        result[1] += 319566;
        result[2] += 127826;
        result[3] += 10993071;
        result[4] += 10801331;
        result[5] += 16233953;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 96084;
        result[1] += 41508408;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1345179;
        result[5] += 0;
      } else {
        result[0] += 27217790;
        result[1] += 1469760;
        result[2] += 3266134;
        result[3] += 3946579;
        result[4] += 4191539;
        result[5] += 2857867;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 9427976;
        result[2] += 0;
        result[3] += 2095105;
        result[4] += 3142658;
        result[5] += 28283930;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13421772;
        result[3] += 22145925;
        result[4] += 0;
        result[5] += 7381975;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2483484;
        result[1] += 584349;
        result[2] += 29655726;
        result[3] += 7596540;
        result[4] += 146087;
        result[5] += 2483484;
      } else {
        result[0] += 612770;
        result[1] += 0;
        result[2] += 40888534;
        result[3] += 1392661;
        result[4] += 0;
        result[5] += 55706;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 305691;
        result[1] += 458537;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40504139;
        result[5] += 1681303;
      } else {
        result[0] += 2395952;
        result[1] += 177477;
        result[2] += 88738;
        result[3] += 8371045;
        result[4] += 2573430;
        result[5] += 29343027;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        result[0] += 397682;
        result[1] += 40861841;
        result[2] += 0;
        result[3] += 99420;
        result[4] += 1590728;
        result[5] += 0;
      } else {
        result[0] += 28347888;
        result[1] += 1876977;
        result[2] += 3008685;
        result[3] += 2870672;
        result[4] += 4913265;
        result[5] += 1932183;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3046076;
        result[1] += 3046076;
        result[2] += 6092152;
        result[3] += 13707342;
        result[4] += 3046076;
        result[5] += 14011950;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40563580;
        result[3] += 1193046;
        result[4] += 0;
        result[5] += 1193046;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 2831846;
        result[1] += 0;
        result[2] += 25958593;
        result[3] += 12743309;
        result[4] += 0;
        result[5] += 1415923;
      } else {
        result[0] += 667079;
        result[1] += 0;
        result[2] += 39870843;
        result[3] += 2155180;
        result[4] += 0;
        result[5] += 256569;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5259143;
        result[1] += 626088;
        result[2] += 0;
        result[3] += 1252177;
        result[4] += 30052249;
        result[5] += 5760014;
      } else {
        result[0] += 35089;
        result[1] += 385985;
        result[2] += 70179;
        result[3] += 7684622;
        result[4] += 2105376;
        result[5] += 32668419;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 40949565;
        result[2] += 0;
        result[3] += 210537;
        result[4] += 1579032;
        result[5] += 210537;
      } else {
        result[0] += 25248909;
        result[1] += 1929238;
        result[2] += 2917973;
        result[3] += 4099631;
        result[4] += 4509595;
        result[5] += 4244324;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1263225;
        result[3] += 11369031;
        result[4] += 0;
        result[5] += 30317416;
      } else {
        result[0] += 0;
        result[1] += 1269448;
        result[2] += 21580623;
        result[3] += 14387082;
        result[4] += 846298;
        result[5] += 4866219;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 6902626;
        result[1] += 766958;
        result[2] += 24542670;
        result[3] += 3834792;
        result[4] += 3067833;
        result[5] += 3834792;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40959726;
        result[3] += 1879393;
        result[4] += 0;
        result[5] += 110552;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 299300;
        result[1] += 748252;
        result[2] += 0;
        result[3] += 149650;
        result[4] += 40106314;
        result[5] += 1646154;
      } else {
        result[0] += 1989681;
        result[1] += 548877;
        result[2] += 343048;
        result[3] += 6723750;
        result[4] += 1783852;
        result[5] += 31560462;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        result[0] += 180082;
        result[1] += 41418971;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1350618;
        result[5] += 0;
      } else {
        result[0] += 25260104;
        result[1] += 1124336;
        result[2] += 2973246;
        result[3] += 4397406;
        result[4] += 5746611;
        result[5] += 3447966;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14316557;
        result[3] += 19088743;
        result[4] += 1101273;
        result[5] += 8443098;
      } else {
        result[0] += 0;
        result[1] += 550636;
        result[2] += 30835662;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 4405094;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 2477865;
        result[1] += 4129776;
        result[2] += 19822925;
        result[3] += 8259552;
        result[4] += 0;
        result[5] += 8259552;
      } else {
        result[0] += 305329;
        result[1] += 0;
        result[2] += 40710590;
        result[3] += 1831976;
        result[4] += 50888;
        result[5] += 50888;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4786960;
        result[1] += 1462682;
        result[2] += 797826;
        result[3] += 797826;
        result[4] += 30317416;
        result[5] += 4786960;
      } else {
        result[0] += 407427;
        result[1] += 339523;
        result[2] += 543236;
        result[3] += 7197889;
        result[4] += 4006372;
        result[5] += 30455222;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 25562268;
        result[1] += 1872879;
        result[2] += 2885246;
        result[3] += 3897613;
        result[4] += 4985907;
        result[5] += 3745758;
      } else {
        result[0] += 588351;
        result[1] += 41282676;
        result[2] += 0;
        result[3] += 490293;
        result[4] += 588351;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e20000))) ) ) {
        result[0] += 271833;
        result[1] += 271833;
        result[2] += 14950835;
        result[3] += 10601501;
        result[4] += 271833;
        result[5] += 16581835;
      } else {
        result[0] += 0;
        result[1] += 40689163;
        result[2] += 2260509;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1282079;
        result[1] += 0;
        result[2] += 33975114;
        result[3] += 7211698;
        result[4] += 0;
        result[5] += 480779;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41905304;
        result[3] += 913822;
        result[4] += 0;
        result[5] += 130546;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1271536;
        result[1] += 2825636;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38852500;
        result[5] += 0;
      } else {
        result[0] += 27275510;
        result[1] += 1974697;
        result[2] += 246837;
        result[3] += 740511;
        result[4] += 7898790;
        result[5] += 4813325;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 214319;
        result[1] += 171455;
        result[2] += 42863;
        result[3] += 3429115;
        result[4] += 3386251;
        result[5] += 35705666;
      } else {
        result[0] += 2456531;
        result[1] += 792429;
        result[2] += 950915;
        result[3] += 19810734;
        result[4] += 3803661;
        result[5] += 15135401;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 280716;
        result[1] += 41639661;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1029294;
        result[5] += 0;
      } else {
        result[0] += 35059216;
        result[1] += 1535440;
        result[2] += 1620742;
        result[3] += 1364835;
        result[4] += 2132555;
        result[5] += 1236882;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 526989;
        result[1] += 1053979;
        result[2] += 15019210;
        result[3] += 14228726;
        result[4] += 2107959;
        result[5] += 10012807;
      } else {
        result[0] += 986855;
        result[1] += 0;
        result[2] += 38530276;
        result[3] += 2831846;
        result[4] += 0;
        result[5] += 600694;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 251167;
        result[1] += 2386092;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35791394;
        result[5] += 4521018;
      } else {
        result[0] += 1849829;
        result[1] += 67266;
        result[2] += 1076264;
        result[3] += 7432950;
        result[4] += 1547129;
        result[5] += 30976232;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 206986;
        result[1] += 41500768;
        result[2] += 0;
        result[3] += 310479;
        result[4] += 931438;
        result[5] += 0;
      } else {
        result[0] += 26436439;
        result[1] += 1984641;
        result[2] += 2671632;
        result[3] += 3740285;
        result[4] += 4427276;
        result[5] += 3689397;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3205199;
        result[3] += 10897678;
        result[4] += 641039;
        result[5] += 28205755;
      } else {
        result[0] += 2236962;
        result[1] += 447392;
        result[2] += 25501368;
        result[3] += 8500456;
        result[4] += 0;
        result[5] += 6263493;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 39370533;
        result[2] += 3579139;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 323625;
        result[1] += 46232;
        result[2] += 38650082;
        result[3] += 3236250;
        result[4] += 0;
        result[5] += 693482;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 17179869;
        result[2] += 0;
        result[3] += 0;
        result[4] += 25769803;
        result[5] += 0;
      } else {
        result[0] += 288252;
        result[1] += 42469251;
        result[2] += 0;
        result[3] += 0;
        result[4] += 192168;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 18893726;
        result[1] += 2322999;
        result[2] += 0;
        result[3] += 103244;
        result[4] += 19564814;
        result[5] += 2064888;
      } else {
        result[0] += 2003633;
        result[1] += 796315;
        result[2] += 590814;
        result[3] += 8220033;
        result[4] += 4777894;
        result[5] += 26560981;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 42011614;
        result[1] += 0;
        result[2] += 67004;
        result[3] += 268016;
        result[4] += 536033;
        result[5] += 67004;
      } else {
        result[0] += 10462099;
        result[1] += 0;
        result[2] += 15417831;
        result[3] += 6607641;
        result[4] += 550636;
        result[5] += 9911462;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3570637;
        result[1] += 0;
        result[2] += 26524738;
        result[3] += 9997786;
        result[4] += 0;
        result[5] += 2856510;
      } else {
        result[0] += 118481;
        result[1] += 0;
        result[2] += 40461553;
        result[3] += 1895709;
        result[4] += 0;
        result[5] += 473927;
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
