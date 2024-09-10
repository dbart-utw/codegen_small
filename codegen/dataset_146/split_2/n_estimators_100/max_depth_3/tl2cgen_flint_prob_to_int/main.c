
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 299300;
        result[1] += 5537065;
        result[2] += 0;
        result[3] += 0;
        result[4] += 33372045;
        result[5] += 3741260;
      } else {
        result[0] += 1275391;
        result[1] += 206820;
        result[2] += 241290;
        result[3] += 7100828;
        result[4] += 1792442;
        result[5] += 32332899;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25679031;
        result[1] += 1958772;
        result[2] += 2555959;
        result[3] += 3726445;
        result[4] += 5016368;
        result[5] += 4013095;
      } else {
        result[0] += 459354;
        result[1] += 42490318;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 1328340;
        result[2] += 9298382;
        result[3] += 22139006;
        result[4] += 885560;
        result[5] += 9298382;
      } else {
        result[0] += 732096;
        result[1] += 0;
        result[2] += 28063706;
        result[3] += 10005321;
        result[4] += 488064;
        result[5] += 3660483;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 32212254;
        result[1] += 10737418;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 357913;
        result[1] += 0;
        result[2] += 39523925;
        result[3] += 2761050;
        result[4] += 0;
        result[5] += 306783;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 5133427;
        result[1] += 2566713;
        result[2] += 0;
        result[3] += 0;
        result[4] += 33880618;
        result[5] += 1368913;
      } else {
        result[0] += 274877;
        result[1] += 1065151;
        result[2] += 790273;
        result[3] += 5394478;
        result[4] += 2783138;
        result[5] += 32641751;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 232160;
        result[1] += 33895417;
        result[2] += 154773;
        result[3] += 773867;
        result[4] += 7119585;
        result[5] += 773867;
      } else {
        result[0] += 31069375;
        result[1] += 1044111;
        result[2] += 1439180;
        result[3] += 3132334;
        result[4] += 3668500;
        result[5] += 2596169;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3235934;
        result[3] += 23534067;
        result[4] += 2059230;
        result[5] += 14120440;
      } else {
        result[0] += 913822;
        result[1] += 0;
        result[2] += 31983799;
        result[3] += 3655291;
        result[4] += 0;
        result[5] += 6396759;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 10307921;
        result[1] += 4294967;
        result[2] += 6012954;
        result[3] += 3435973;
        result[4] += 10307921;
        result[5] += 8589934;
      } else {
        result[0] += 384623;
        result[1] += 0;
        result[2] += 38419657;
        result[3] += 3205199;
        result[4] += 0;
        result[5] += 940191;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 583027;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41006248;
        result[5] += 1360396;
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
        result[0] += 494190;
        result[1] += 0;
        result[2] += 179705;
        result[3] += 1572425;
        result[4] += 2515880;
        result[5] += 38187470;
      } else {
        result[0] += 2552564;
        result[1] += 1220791;
        result[2] += 1775697;
        result[3] += 21086402;
        result[4] += 1331772;
        result[5] += 14982444;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 75086;
        result[1] += 34314686;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8559899;
        result[5] += 0;
      } else {
        result[0] += 31076704;
        result[1] += 1006183;
        result[2] += 402473;
        result[3] += 2817314;
        result[4] += 3248536;
        result[5] += 4398460;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 257183;
        result[2] += 14402285;
        result[3] += 18002856;
        result[4] += 0;
        result[5] += 10287346;
      } else {
        result[0] += 715827;
        result[1] += 0;
        result[2] += 37559910;
        result[3] += 4084429;
        result[4] += 0;
        result[5] += 589505;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 610658;
        result[2] += 203552;
        result[3] += 0;
        result[4] += 41931908;
        result[5] += 203552;
      } else {
        result[0] += 1629245;
        result[1] += 311983;
        result[2] += 138659;
        result[3] += 5719690;
        result[4] += 3085166;
        result[5] += 32064929;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 42549209;
        result[2] += 0;
        result[3] += 0;
        result[4] += 400463;
        result[5] += 0;
      } else {
        result[0] += 28913123;
        result[1] += 1923928;
        result[2] += 1680050;
        result[3] += 2899441;
        result[4] += 5229833;
        result[5] += 2303294;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1717986;
        result[4] += 10307921;
        result[5] += 30923764;
      } else {
        result[0] += 0;
        result[1] += 674602;
        result[2] += 8320093;
        result[3] += 25410015;
        result[4] += 224867;
        result[5] += 8320093;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 833974;
        result[1] += 0;
        result[2] += 12092626;
        result[3] += 15845510;
        result[4] += 5837819;
        result[5] += 8339742;
      } else {
        result[0] += 782400;
        result[1] += 0;
        result[2] += 38008195;
        result[3] += 3376676;
        result[4] += 123536;
        result[5] += 658863;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7757925;
        result[1] += 899469;
        result[2] += 0;
        result[3] += 899469;
        result[4] += 29232761;
        result[5] += 4160046;
      } else {
        result[0] += 139220;
        result[1] += 139220;
        result[2] += 313247;
        result[3] += 6717412;
        result[4] += 2575588;
        result[5] += 33064983;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 28129011;
        result[1] += 2667169;
        result[2] += 1842271;
        result[3] += 2694665;
        result[4] += 5581807;
        result[5] += 2034747;
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 1367823;
        result[2] += 7112684;
        result[3] += 16961017;
        result[4] += 1094259;
        result[5] += 16413887;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29186794;
        result[3] += 11389968;
        result[4] += 0;
        result[5] += 2372910;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        result[0] += 29878033;
        result[1] += 0;
        result[2] += 13071639;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 437765;
        result[1] += 97281;
        result[2] += 39642110;
        result[3] += 2432031;
        result[4] += 48640;
        result[5] += 291843;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        result[0] += 555383;
        result[1] += 2591790;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37766091;
        result[5] += 2036406;
      } else {
        result[0] += 1144370;
        result[1] += 750993;
        result[2] += 71523;
        result[3] += 6079470;
        result[4] += 3039735;
        result[5] += 31863579;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 471974;
        result[1] += 40471807;
        result[2] += 0;
        result[3] += 353980;
        result[4] += 1651910;
        result[5] += 0;
      } else {
        result[0] += 27529248;
        result[1] += 1617880;
        result[2] += 1643159;
        result[3] += 3362158;
        result[4] += 4651406;
        result[5] += 4145818;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3781732;
        result[3] += 24581259;
        result[4] += 2701237;
        result[5] += 11885444;
      } else {
        result[0] += 1130254;
        result[1] += 4521018;
        result[2] += 20721333;
        result[3] += 3767515;
        result[4] += 1883757;
        result[5] += 10925793;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7158278;
        result[3] += 32212254;
        result[4] += 0;
        result[5] += 3579139;
      } else {
        result[0] += 616502;
        result[1] += 0;
        result[2] += 38140953;
        result[3] += 3246913;
        result[4] += 0;
        result[5] += 945303;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 369194;
        result[1] += 2215169;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38150139;
        result[5] += 2215169;
      } else {
        result[0] += 3819963;
        result[1] += 99651;
        result[2] += 431821;
        result[3] += 4650389;
        result[4] += 2856668;
        result[5] += 31091178;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 785664;
        result[1] += 38672164;
        result[2] += 0;
        result[3] += 261888;
        result[4] += 2968066;
        result[5] += 261888;
      } else {
        result[0] += 29962730;
        result[1] += 711189;
        result[2] += 1546064;
        result[3] += 4421744;
        result[4] += 1978962;
        result[5] += 4328980;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 1822107;
        result[2] += 3383913;
        result[3] += 23687395;
        result[4] += 1822107;
        result[5] += 12234149;
      } else {
        result[0] += 315806;
        result[1] += 1579032;
        result[2] += 23053868;
        result[3] += 5052902;
        result[4] += 947419;
        result[5] += 12000643;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24542670;
        result[3] += 15500633;
        result[4] += 0;
        result[5] += 2906368;
      } else {
        result[0] += 543666;
        result[1] += 0;
        result[2] += 39539399;
        result[3] += 2767757;
        result[4] += 0;
        result[5] += 98848;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 197016;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42752656;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 2816371;
        result[2] += 0;
        result[3] += 4224557;
        result[4] += 24643254;
        result[5] += 11265487;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
        result[0] += 30171257;
        result[1] += 1064867;
        result[2] += 0;
        result[3] += 1419823;
        result[4] += 9228855;
        result[5] += 1064867;
      } else {
        result[0] += 256607;
        result[1] += 160379;
        result[2] += 705670;
        result[3] += 8852957;
        result[4] += 1988707;
        result[5] += 30985350;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        result[0] += 1667177;
        result[1] += 34772563;
        result[2] += 0;
        result[3] += 79389;
        result[4] += 6033595;
        result[5] += 396947;
      } else {
        result[0] += 36169956;
        result[1] += 1445421;
        result[2] += 894784;
        result[3] += 929199;
        result[4] += 2753184;
        result[5] += 757125;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 246129;
        result[2] += 20305719;
        result[3] += 16736835;
        result[4] += 0;
        result[5] += 5660988;
      } else {
        result[0] += 1040929;
        result[1] += 45257;
        result[2] += 37745023;
        result[3] += 2127117;
        result[4] += 497836;
        result[5] += 1493508;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 179705;
        result[1] += 179705;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41691732;
        result[5] += 898528;
      } else {
        result[0] += 0;
        result[1] += 36077725;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6871947;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 122189;
        result[1] += 0;
        result[2] += 122189;
        result[3] += 1038612;
        result[4] += 1466276;
        result[5] += 40200405;
      } else {
        result[0] += 4919345;
        result[1] += 1198302;
        result[2] += 1324439;
        result[3] += 13181324;
        result[4] += 3153426;
        result[5] += 19172834;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 279498;
        result[1] += 37918691;
        result[2] += 93166;
        result[3] += 0;
        result[4] += 4658315;
        result[5] += 0;
      } else {
        result[0] += 30342987;
        result[1] += 666560;
        result[2] += 1304139;
        result[3] += 3014012;
        result[4] += 4955731;
        result[5] += 2666241;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 137659;
        result[1] += 1101273;
        result[2] += 20098244;
        result[3] += 16656764;
        result[4] += 275318;
        result[5] += 4680413;
      } else {
        result[0] += 604924;
        result[1] += 279196;
        result[2] += 38854796;
        result[3] += 2280101;
        result[4] += 279196;
        result[5] += 651457;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5418266;
        result[1] += 264305;
        result[2] += 0;
        result[3] += 925069;
        result[4] += 31716681;
        result[5] += 4625349;
      } else {
        result[0] += 72002;
        result[1] += 108004;
        result[2] += 504019;
        result[3] += 6516253;
        result[4] += 2448095;
        result[5] += 33301297;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
        result[0] += 254140;
        result[1] += 39391711;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3303820;
        result[5] += 0;
      } else {
        result[0] += 28844820;
        result[1] += 1217304;
        result[2] += 2461071;
        result[3] += 3519597;
        result[4] += 4366417;
        result[5] += 2540461;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0;
        result[1] += 18790481;
        result[2] += 21474836;
        result[3] += 0;
        result[4] += 2684354;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6081369;
        result[3] += 11782653;
        result[4] += 1900428;
        result[5] += 23185221;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29798958;
        result[3] += 10912294;
        result[4] += 0;
        result[5] += 2238419;
      } else {
        result[0] += 347301;
        result[1] += 0;
        result[2] += 40171257;
        result[3] += 2025927;
        result[4] += 57883;
        result[5] += 347301;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 535198;
        result[1] += 1471795;
        result[2] += 535198;
        result[3] += 0;
        result[4] += 40006081;
        result[5] += 401398;
      } else {
        result[0] += 3272677;
        result[1] += 674778;
        result[2] += 236172;
        result[3] += 4352323;
        result[4] += 3475111;
        result[5] += 30938609;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 24457452;
        result[1] += 2648563;
        result[2] += 2576980;
        result[3] += 5989093;
        result[4] += 3364391;
        result[5] += 3913192;
      } else {
        result[0] += 1042467;
        result[1] += 41281724;
        result[2] += 0;
        result[3] += 104246;
        result[4] += 521233;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 5095723;
        result[2] += 2911842;
        result[3] += 7279605;
        result[4] += 5095723;
        result[5] += 22566777;
      } else {
        result[0] += 3067833;
        result[1] += 0;
        result[2] += 28121809;
        result[3] += 5624361;
        result[4] += 0;
        result[5] += 6135667;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10307921;
        result[3] += 30923764;
        result[4] += 0;
        result[5] += 1717986;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39219302;
        result[3] += 3528728;
        result[4] += 0;
        result[5] += 201641;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 4601750;
        result[1] += 1533916;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35280088;
        result[5] += 1533916;
      } else {
        result[0] += 37282;
        result[1] += 596523;
        result[2] += 186413;
        result[3] += 5778818;
        result[4] += 2684354;
        result[5] += 33666280;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41969086;
        result[2] += 0;
        result[3] += 0;
        result[4] += 980586;
        result[5] += 0;
      } else {
        result[0] += 26564532;
        result[1] += 1128318;
        result[2] += 2183050;
        result[3] += 3826470;
        result[4] += 5003845;
        result[5] += 4243457;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6135667;
        result[3] += 3681400;
        result[4] += 3067833;
        result[5] += 30064771;
      } else {
        result[0] += 206488;
        result[1] += 1445421;
        result[2] += 17138571;
        result[3] += 18171015;
        result[4] += 1032444;
        result[5] += 4955731;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 11248723;
        result[1] += 1022611;
        result[2] += 20963530;
        result[3] += 3579139;
        result[4] += 511305;
        result[5] += 5624361;
      } else {
        result[0] += 305691;
        result[1] += 0;
        result[2] += 40045602;
        result[3] += 2445532;
        result[4] += 0;
        result[5] += 152845;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1227133;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40495405;
        result[5] += 1227133;
      } else {
        result[0] += 1599744;
        result[1] += 139108;
        result[2] += 69554;
        result[3] += 6572864;
        result[4] += 2260509;
        result[5] += 32307891;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 98058;
        result[1] += 41772969;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1078644;
        result[5] += 0;
      } else {
        result[0] += 28226250;
        result[1] += 1449456;
        result[2] += 2237756;
        result[3] += 3356635;
        result[4] += 4984094;
        result[5] += 2695479;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 3805667;
        result[2] += 1631000;
        result[3] += 7611334;
        result[4] += 4893000;
        result[5] += 25008670;
      } else {
        result[0] += 0;
        result[1] += 814211;
        result[2] += 17709106;
        result[3] += 17098447;
        result[4] += 0;
        result[5] += 7327906;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 9162596;
        result[1] += 1145324;
        result[2] += 24624479;
        result[3] += 5726623;
        result[4] += 2290649;
        result[5] += 0;
      } else {
        result[0] += 502923;
        result[1] += 0;
        result[2] += 39378915;
        result[3] += 2766079;
        result[4] += 0;
        result[5] += 301754;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 867670;
        result[1] += 2458398;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37165205;
        result[5] += 2458398;
      } else {
        result[0] += 1570921;
        result[1] += 300814;
        result[2] += 735325;
        result[3] += 6918741;
        result[4] += 1270107;
        result[5] += 32153762;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 288737;
        result[1] += 34431922;
        result[2] += 288737;
        result[3] += 288737;
        result[4] += 7579354;
        result[5] += 72184;
      } else {
        result[0] += 28902223;
        result[1] += 753503;
        result[2] += 3498406;
        result[3] += 3794425;
        result[4] += 3229298;
        result[5] += 2771814;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 0;
        result[1] += 1883757;
        result[2] += 12432800;
        result[3] += 10925793;
        result[4] += 376751;
        result[5] += 17330569;
      } else {
        result[0] += 22088403;
        result[1] += 14725602;
        result[2] += 6135667;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31786542;
        result[3] += 9649485;
        result[4] += 0;
        result[5] += 1513644;
      } else {
        result[0] += 63441;
        result[1] += 0;
        result[2] += 41236761;
        result[3] += 1586029;
        result[4] += 0;
        result[5] += 63441;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 673720;
        result[2] += 336860;
        result[3] += 673720;
        result[4] += 39075780;
        result[5] += 2189591;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 59404;
        result[2] += 0;
        result[3] += 2316787;
        result[4] += 1782144;
        result[5] += 38791336;
      } else {
        result[0] += 5080068;
        result[1] += 1187548;
        result[2] += 1055598;
        result[3] += 13656808;
        result[4] += 4684219;
        result[5] += 17285429;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 38737125;
        result[2] += 0;
        result[3] += 91577;
        result[4] += 4120970;
        result[5] += 0;
      } else {
        result[0] += 29326869;
        result[1] += 1216321;
        result[2] += 1756909;
        result[3] += 2621849;
        result[4] += 4243611;
        result[5] += 3784112;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 923648;
        result[1] += 230912;
        result[2] += 15471118;
        result[3] += 19627538;
        result[4] += 923648;
        result[5] += 5772805;
      } else {
        result[0] += 639675;
        result[1] += 228455;
        result[2] += 37649500;
        result[3] += 3700982;
        result[4] += 91382;
        result[5] += 639675;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4871903;
        result[1] += 512831;
        result[2] += 384623;
        result[3] += 0;
        result[4] += 31154538;
        result[5] += 6025775;
      } else {
        result[0] += 147847;
        result[1] += 1182779;
        result[2] += 110885;
        result[3] += 6874904;
        result[4] += 1589359;
        result[5] += 33043896;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 410608;
        result[1] += 35312350;
        result[2] += 0;
        result[3] += 410608;
        result[4] += 6651861;
        result[5] += 164243;
      } else {
        result[0] += 27249582;
        result[1] += 850743;
        result[2] += 4176378;
        result[3] += 3531875;
        result[4] += 3402975;
        result[5] += 3738116;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 619466;
        result[1] += 3303820;
        result[2] += 18377504;
        result[3] += 10737418;
        result[4] += 1032444;
        result[5] += 8879018;
      } else {
        result[0] += 37223049;
        result[1] += 0;
        result[2] += 5726623;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 6247225;
        result[2] += 21865288;
        result[3] += 6247225;
        result[4] += 0;
        result[5] += 8589934;
      } else {
        result[0] += 99651;
        result[1] += 0;
        result[2] += 39960136;
        result[3] += 2491280;
        result[4] += 0;
        result[5] += 398604;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 12768821;
        result[1] += 677134;
        result[2] += 0;
        result[3] += 967334;
        result[4] += 25053975;
        result[5] += 3482405;
      } else {
        result[0] += 286331;
        result[1] += 143165;
        result[2] += 322122;
        result[3] += 5046586;
        result[4] += 4509715;
        result[5] += 32641751;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 429496;
        result[1] += 38826504;
        result[2] += 343597;
        result[3] += 257698;
        result[4] += 2920577;
        result[5] += 171798;
      } else {
        result[0] += 29778439;
        result[1] += 1567286;
        result[2] += 1959107;
        result[3] += 4611438;
        result[4] += 1687846;
        result[5] += 3345553;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1908874;
        result[3] += 0;
        result[4] += 3817748;
        result[5] += 37223049;
      } else {
        result[0] += 0;
        result[1] += 596523;
        result[2] += 6860017;
        result[3] += 22071359;
        result[4] += 894784;
        result[5] += 12526987;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 187553;
        result[1] += 0;
        result[2] += 24006804;
        result[3] += 12941167;
        result[4] += 1875531;
        result[5] += 3938616;
      } else {
        result[0] += 511915;
        result[1] += 0;
        result[2] += 38751969;
        result[3] += 3020298;
        result[4] += 307149;
        result[5] += 358340;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4893000;
        result[1] += 2446500;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30445337;
        result[5] += 5164834;
      } else {
        result[0] += 0;
        result[1] += 266531;
        result[2] += 114227;
        result[3] += 6777519;
        result[4] += 1979949;
        result[5] += 33811444;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41653777;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1295895;
        result[5] += 0;
      } else {
        result[0] += 26768980;
        result[1] += 969350;
        result[2] += 2311527;
        result[3] += 3703415;
        result[4] += 4946171;
        result[5] += 4250228;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 3067833;
        result[2] += 0;
        result[3] += 766958;
        result[4] += 8436542;
        result[5] += 30678337;
      } else {
        result[0] += 0;
        result[1] += 1541783;
        result[2] += 12114010;
        result[3] += 19162161;
        result[4] += 220254;
        result[5] += 9911462;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        result[0] += 18084072;
        result[1] += 0;
        result[2] += 18084072;
        result[3] += 5274521;
        result[4] += 0;
        result[5] += 1507006;
      } else {
        result[0] += 486957;
        result[1] += 0;
        result[2] += 38761836;
        result[3] += 3506095;
        result[4] += 0;
        result[5] += 194783;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 624268;
        result[1] += 2372220;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36582134;
        result[5] += 3371049;
      } else {
        result[0] += 4779561;
        result[1] += 431488;
        result[2] += 365105;
        result[3] += 4879135;
        result[4] += 1991484;
        result[5] += 30502897;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 42747556;
        result[2] += 0;
        result[3] += 0;
        result[4] += 202116;
        result[5] += 0;
      } else {
        result[0] += 26290559;
        result[1] += 1415645;
        result[2] += 3589672;
        result[3] += 4878921;
        result[4] += 3235761;
        result[5] += 3539113;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 557787;
        result[1] += 3346727;
        result[2] += 7251243;
        result[3] += 5020091;
        result[4] += 4462303;
        result[5] += 22311518;
      } else {
        result[0] += 0;
        result[1] += 335544;
        result[2] += 19126026;
        result[3] += 18119393;
        result[4] += 0;
        result[5] += 5368709;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 17498014;
        result[1] += 3181457;
        result[2] += 20679472;
        result[3] += 1590728;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 309733;
        result[1] += 0;
        result[2] += 39594229;
        result[3] += 2787598;
        result[4] += 0;
        result[5] += 258111;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1037431;
        result[4] += 36517596;
        result[5] += 5394644;
      } else {
        result[0] += 265121;
        result[1] += 0;
        result[2] += 340870;
        result[3] += 4355566;
        result[4] += 2726963;
        result[5] += 35261151;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        result[0] += 311229;
        result[1] += 41497268;
        result[2] += 0;
        result[3] += 311229;
        result[4] += 829945;
        result[5] += 0;
      } else {
        result[0] += 26858737;
        result[1] += 1968830;
        result[2] += 1166714;
        result[3] += 3670288;
        result[4] += 5736345;
        result[5] += 3548756;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 780903;
        result[2] += 5075870;
        result[3] += 20303481;
        result[4] += 780903;
        result[5] += 16008514;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30541989;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 5249404;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        result[0] += 19714603;
        result[1] += 6336836;
        result[2] += 11969580;
        result[3] += 0;
        result[4] += 2112278;
        result[5] += 2816371;
      } else {
        result[0] += 506373;
        result[1] += 0;
        result[2] += 38116108;
        result[3] += 3958919;
        result[4] += 46033;
        result[5] += 322237;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5709322;
        result[1] += 259514;
        result[2] += 0;
        result[3] += 519029;
        result[4] += 30752484;
        result[5] += 5709322;
      } else {
        result[0] += 114941;
        result[1] += 344823;
        result[2] += 191568;
        result[3] += 6398390;
        result[4] += 2068940;
        result[5] += 33831009;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 26559737;
        result[1] += 2388720;
        result[2] += 1986658;
        result[3] += 3547605;
        result[4] += 5061250;
        result[5] += 3405700;
      } else {
        result[0] += 211574;
        result[1] += 42103373;
        result[2] += 317362;
        result[3] += 105787;
        result[4] += 211574;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5602131;
        result[3] += 2801065;
        result[4] += 933688;
        result[5] += 33612787;
      } else {
        result[0] += 943948;
        result[1] += 1651910;
        result[2] += 13451271;
        result[3] += 19822925;
        result[4] += 707961;
        result[5] += 6371654;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        result[0] += 33038209;
        result[1] += 0;
        result[2] += 9911462;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 330019;
        result[1] += 0;
        result[2] += 39225167;
        result[3] += 3158757;
        result[4] += 0;
        result[5] += 235728;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 239942;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40790192;
        result[5] += 1919538;
      } else {
        result[0] += 193466;
        result[1] += 38693;
        result[2] += 154773;
        result[3] += 5184915;
        result[4] += 2515070;
        result[5] += 34862752;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25251131;
        result[1] += 2206630;
        result[2] += 1865398;
        result[3] += 4367763;
        result[4] += 5709940;
        result[5] += 3548807;
      } else {
        result[0] += 644245;
        result[1] += 41983305;
        result[2] += 0;
        result[3] += 0;
        result[4] += 322122;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 9314386;
        result[2] += 0;
        result[3] += 11384250;
        result[4] += 0;
        result[5] += 22251035;
      } else {
        result[0] += 7433597;
        result[1] += 825955;
        result[2] += 21474836;
        result[3] += 1651910;
        result[4] += 2477865;
        result[5] += 9085507;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1187051;
        result[1] += 0;
        result[2] += 27302179;
        result[3] += 12194253;
        result[4] += 215827;
        result[5] += 2050361;
      } else {
        result[0] += 119971;
        result[1] += 0;
        result[2] += 41030134;
        result[3] += 1679596;
        result[4] += 0;
        result[5] += 119971;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7968038;
        result[1] += 1846252;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29248532;
        result[5] += 3886848;
      } else {
        result[0] += 157903;
        result[1] += 434233;
        result[2] += 592137;
        result[3] += 4658144;
        result[4] += 2921209;
        result[5] += 34186044;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 24405354;
        result[1] += 1992752;
        result[2] += 2461635;
        result[3] += 5884480;
        result[4] += 3985504;
        result[5] += 4219946;
      } else {
        result[0] += 538216;
        result[1] += 42411456;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 4487279;
        result[2] += 5128319;
        result[3] += 8333518;
        result[4] += 2564159;
        result[5] += 22436396;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25329294;
        result[3] += 13765920;
        result[4] += 0;
        result[5] += 3854457;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33405301;
        result[3] += 8483886;
        result[4] += 0;
        result[5] += 1060485;
      } else {
        result[0] += 253764;
        result[1] += 0;
        result[2] += 41109878;
        result[3] += 1205382;
        result[4] += 0;
        result[5] += 380647;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4294967;
        result[1] += 596523;
        result[2] += 0;
        result[3] += 477218;
        result[4] += 31019208;
        result[5] += 6561755;
      } else {
        result[0] += 0;
        result[1] += 509140;
        result[2] += 1091016;
        result[3] += 7382543;
        result[4] += 2654806;
        result[5] += 31312166;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 387807;
        result[1] += 39653309;
        result[2] += 0;
        result[3] += 484759;
        result[4] += 2423796;
        result[5] += 0;
      } else {
        result[0] += 28016022;
        result[1] += 1012032;
        result[2] += 2419004;
        result[3] += 3727241;
        result[4] += 4615855;
        result[5] += 3159516;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0;
        result[1] += 3221225;
        result[2] += 4294967;
        result[3] += 8589934;
        result[4] += 3221225;
        result[5] += 23622320;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22167573;
        result[3] += 15240206;
        result[4] += 0;
        result[5] += 5541893;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 667611;
        result[2] += 32045351;
        result[3] += 8233875;
        result[4] += 445074;
        result[5] += 1557760;
      } else {
        result[0] += 461204;
        result[1] += 115301;
        result[2] += 40758951;
        result[3] += 1268312;
        result[4] += 0;
        result[5] += 345903;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 6114868;
        result[1] += 436776;
        result[2] += 0;
        result[3] += 291184;
        result[4] += 33922962;
        result[5] += 2183881;
      } else {
        result[0] += 352914;
        result[1] += 846994;
        result[2] += 105874;
        result[3] += 7305326;
        result[4] += 2435108;
        result[5] += 31903454;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41110286;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1839386;
        result[5] += 0;
      } else {
        result[0] += 27657540;
        result[1] += 1048742;
        result[2] += 1707255;
        result[3] += 3755962;
        result[4] += 4829094;
        result[5] += 3951077;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10172290;
        result[3] += 25430727;
        result[4] += 0;
        result[5] += 7346654;
      } else {
        result[0] += 965161;
        result[1] += 0;
        result[2] += 30724297;
        result[3] += 9651611;
        result[4] += 0;
        result[5] += 1608601;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 174120;
        result[1] += 0;
        result[2] += 40744149;
        result[3] += 1973363;
        result[4] += 0;
        result[5] += 58040;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 786624;
        result[1] += 471974;
        result[2] += 0;
        result[3] += 471974;
        result[4] += 37285979;
        result[5] += 3933120;
      } else {
        result[0] += 1490585;
        result[1] += 138659;
        result[2] += 34664;
        result[3] += 7591588;
        result[4] += 1975892;
        result[5] += 31718281;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 81344;
        result[1] += 36442146;
        result[2] += 0;
        result[3] += 244032;
        result[4] += 6182149;
        result[5] += 0;
      } else {
        result[0] += 28573639;
        result[1] += 1376428;
        result[2] += 4180264;
        result[3] += 3109709;
        result[4] += 2829325;
        result[5] += 2880304;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3506095;
        result[3] += 31554861;
        result[4] += 4382619;
        result[5] += 3506095;
      } else {
        result[0] += 452101;
        result[1] += 0;
        result[2] += 23961396;
        result[3] += 6781527;
        result[4] += 4521018;
        result[5] += 7233629;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 3995318;
        result[1] += 5992977;
        result[2] += 8989466;
        result[3] += 10987125;
        result[4] += 0;
        result[5] += 12984784;
      } else {
        result[0] += 281945;
        result[1] += 0;
        result[2] += 39613319;
        result[3] += 2772462;
        result[4] += 0;
        result[5] += 281945;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 339523;
        result[2] += 0;
        result[3] += 1018569;
        result[4] += 38875395;
        result[5] += 2716184;
      } else {
        result[0] += 979198;
        result[1] += 135061;
        result[2] += 303889;
        result[3] += 6415438;
        result[4] += 2566175;
        result[5] += 32549909;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 42300559;
        result[2] += 0;
        result[3] += 0;
        result[4] += 649113;
        result[5] += 0;
      } else {
        result[0] += 27165963;
        result[1] += 1609133;
        result[2] += 2153399;
        result[3] += 3833524;
        result[4] += 4874728;
        result[5] += 3312922;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11379827;
        result[3] += 26430567;
        result[4] += 0;
        result[5] += 5139277;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33107039;
        result[3] += 5368709;
        result[4] += 0;
        result[5] += 4473924;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 356428;
        result[1] += 0;
        result[2] += 34751810;
        result[3] += 7306790;
        result[4] += 0;
        result[5] += 534643;
      } else {
        result[0] += 565954;
        result[1] += 0;
        result[2] += 40434318;
        result[3] += 1886515;
        result[4] += 0;
        result[5] += 62883;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 12456401;
        result[1] += 797209;
        result[2] += 199302;
        result[3] += 996512;
        result[4] += 24813152;
        result[5] += 3687094;
      } else {
        result[0] += 318145;
        result[1] += 282796;
        result[2] += 671640;
        result[3] += 4984283;
        result[4] += 4736836;
        result[5] += 31955970;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 334238;
        result[1] += 39440166;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3175267;
        result[5] += 0;
      } else {
        result[0] += 30121717;
        result[1] += 869183;
        result[2] += 2247889;
        result[3] += 5065244;
        result[4] += 1528564;
        result[5] += 3117073;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 920350;
        result[2] += 3374617;
        result[3] += 19634136;
        result[4] += 1227133;
        result[5] += 17793435;
      } else {
        result[0] += 0;
        result[1] += 4542753;
        result[2] += 20235903;
        result[3] += 8259552;
        result[4] += 825955;
        result[5] += 9085507;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 31236125;
        result[1] += 0;
        result[2] += 7809031;
        result[3] += 3904515;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 224632;
        result[1] += 0;
        result[2] += 39085999;
        result[3] += 3369482;
        result[4] += 0;
        result[5] += 269558;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 172488;
        result[1] += 689954;
        result[2] += 0;
        result[3] += 2242352;
        result[4] += 37602524;
        result[5] += 2242352;
      } else {
        result[0] += 1501492;
        result[1] += 314265;
        result[2] += 209510;
        result[3] += 5936133;
        result[4] += 2758556;
        result[5] += 32229713;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 183938;
        result[1] += 41294225;
        result[2] += 0;
        result[3] += 275907;
        result[4] += 1195601;
        result[5] += 0;
      } else {
        result[0] += 27743098;
        result[1] += 1754604;
        result[2] += 1856320;
        result[3] += 3331206;
        result[4] += 5543533;
        result[5] += 2720908;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 1138817;
        result[1] += 650752;
        result[2] += 13340428;
        result[3] += 17570320;
        result[4] += 1138817;
        result[5] += 9110536;
      } else {
        result[0] += 3423524;
        result[1] += 466844;
        result[2] += 30656107;
        result[3] += 5913360;
        result[4] += 155614;
        result[5] += 2334221;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 212622;
        result[1] += 0;
        result[2] += 37846741;
        result[3] += 4039820;
        result[4] += 0;
        result[5] += 850488;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42567047;
        result[3] += 382625;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 3029644;
        result[2] += 356428;
        result[3] += 0;
        result[4] += 38850741;
        result[5] += 712857;
      } else {
        result[0] += 19181407;
        result[1] += 1667948;
        result[2] += 833974;
        result[3] += 0;
        result[4] += 8756729;
        result[5] += 12509613;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 754281;
        result[2] += 0;
        result[3] += 2573430;
        result[4] += 2262844;
        result[5] += 37359116;
      } else {
        result[0] += 251167;
        result[1] += 125583;
        result[2] += 6153608;
        result[3] += 19967830;
        result[4] += 627919;
        result[5] += 15823563;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 28352570;
        result[1] += 2367097;
        result[2] += 867935;
        result[3] += 2077785;
        result[4] += 5391722;
        result[5] += 3892560;
      } else {
        result[0] += 634724;
        result[1] += 41362862;
        result[2] += 105787;
        result[3] += 105787;
        result[4] += 740511;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 233422;
        result[2] += 14472172;
        result[3] += 19840881;
        result[4] += 0;
        result[5] += 8403196;
      } else {
        result[0] += 1086187;
        result[1] += 0;
        result[2] += 38333375;
        result[3] += 3122789;
        result[4] += 90515;
        result[5] += 316804;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 139901;
        result[1] += 2098518;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39592043;
        result[5] += 1119209;
      } else {
        result[0] += 3315029;
        result[1] += 619291;
        result[2] += 109286;
        result[3] += 3387887;
        result[4] += 2768596;
        result[5] += 32749580;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 105787;
        result[1] += 41891799;
        result[2] += 0;
        result[3] += 0;
        result[4] += 952086;
        result[5] += 0;
      } else {
        result[0] += 24609763;
        result[1] += 1268060;
        result[2] += 2113433;
        result[3] += 5541893;
        result[4] += 5048758;
        result[5] += 4367763;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5980334;
        result[3] += 31532671;
        result[4] += 0;
        result[5] += 5436667;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30395153;
        result[3] += 9250698;
        result[4] += 0;
        result[5] += 3303820;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1090093;
        result[1] += 0;
        result[2] += 35537039;
        result[3] += 5341456;
        result[4] += 0;
        result[5] += 981083;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41586191;
        result[3] += 908987;
        result[4] += 0;
        result[5] += 454493;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 2980181;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39092967;
        result[5] += 876523;
      } else {
        result[0] += 1874283;
        result[1] += 381210;
        result[2] += 667117;
        result[3] += 6957084;
        result[4] += 2477865;
        result[5] += 30592111;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41616423;
        result[2] += 0;
        result[3] += 190464;
        result[4] += 1142785;
        result[5] += 0;
      } else {
        result[0] += 27506812;
        result[1] += 1551794;
        result[2] += 2803242;
        result[3] += 3554110;
        result[4] += 4680413;
        result[5] += 2853299;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2202547;
        result[3] += 2202547;
        result[4] += 8810189;
        result[5] += 29734388;
      } else {
        result[0] += 1607741;
        result[1] += 459354;
        result[2] += 21130320;
        result[3] += 15388385;
        result[4] += 229677;
        result[5] += 4134193;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33142267;
        result[3] += 8792846;
        result[4] += 0;
        result[5] += 1014559;
      } else {
        result[0] += 121155;
        result[1] += 0;
        result[2] += 41071760;
        result[3] += 1635601;
        result[4] += 0;
        result[5] += 121155;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1082764;
        result[1] += 3248294;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37174927;
        result[5] += 1443686;
      } else {
        result[0] += 1958853;
        result[1] += 471575;
        result[2] += 36275;
        result[3] += 6311860;
        result[4] += 2140228;
        result[5] += 32030879;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 143885;
        result[1] += 34172687;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8417272;
        result[5] += 215827;
      } else {
        result[0] += 30404235;
        result[1] += 915078;
        result[2] += 1682564;
        result[3] += 3069942;
        result[4] += 3099460;
        result[5] += 3778390;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3904515;
        result[3] += 2231151;
        result[4] += 6135667;
        result[5] += 30678337;
      } else {
        result[0] += 480779;
        result[1] += 801299;
        result[2] += 11859238;
        result[3] += 20353016;
        result[4] += 801299;
        result[5] += 8654038;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 1354268;
        result[1] += 773867;
        result[2] += 28246181;
        result[3] += 9866816;
        result[4] += 967334;
        result[5] += 1741202;
      } else {
        result[0] += 1860240;
        result[1] += 164138;
        result[2] += 39174478;
        result[3] += 1641388;
        result[4] += 0;
        result[5] += 109425;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0;
        result[1] += 36814005;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6135667;
        result[5] += 0;
      } else {
        result[0] += 142217;
        result[1] += 711087;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40247541;
        result[5] += 1848826;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 54922;
        result[2] += 219691;
        result[3] += 1427994;
        result[4] += 2141991;
        result[5] += 39105073;
      } else {
        result[0] += 5791611;
        result[1] += 114685;
        result[2] += 401398;
        result[3] += 13303503;
        result[4] += 3612589;
        result[5] += 19725884;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 31427355;
        result[1] += 2605864;
        result[2] += 1318630;
        result[3] += 1475610;
        result[4] += 4929165;
        result[5] += 1193046;
      } else {
        result[0] += 118974;
        result[1] += 41759931;
        result[2] += 0;
        result[3] += 237948;
        result[4] += 713844;
        result[5] += 118974;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 4340658;
        result[1] += 1941873;
        result[2] += 15306532;
        result[3] += 11651241;
        result[4] += 1827645;
        result[5] += 7881721;
      } else {
        result[0] += 195004;
        result[1] += 0;
        result[2] += 38757082;
        result[3] += 3363822;
        result[4] += 0;
        result[5] += 633763;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 613566;
        result[1] += 613566;
        result[2] += 0;
        result[3] += 204522;
        result[4] += 40086361;
        result[5] += 1431655;
      } else {
        result[0] += 1834875;
        result[1] += 33979;
        result[2] += 271833;
        result[3] += 6490021;
        result[4] += 2650375;
        result[5] += 31668587;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        result[0] += 290200;
        result[1] += 40821536;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1644469;
        result[5] += 193466;
      } else {
        result[0] += 29578796;
        result[1] += 1917630;
        result[2] += 1654941;
        result[3] += 2889580;
        result[4] += 4308101;
        result[5] += 2600622;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8053063;
        result[3] += 1342177;
        result[4] += 7381975;
        result[5] += 26172456;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11204262;
        result[3] += 25105847;
        result[4] += 622459;
        result[5] += 6017103;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 4090445;
        result[1] += 6135667;
        result[2] += 0;
        result[3] += 4090445;
        result[4] += 6135667;
        result[5] += 22497447;
      } else {
        result[0] += 831848;
        result[1] += 0;
        result[2] += 38308831;
        result[3] += 3371177;
        result[4] += 0;
        result[5] += 437815;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 10668144;
        result[1] += 3048041;
        result[2] += 0;
        result[3] += 0;
        result[4] += 27709466;
        result[5] += 1524020;
      } else {
        result[0] += 255462;
        result[1] += 894119;
        result[2] += 287395;
        result[3] += 7216822;
        result[4] += 2810090;
        result[5] += 31485782;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 112728;
        result[1] += 42160571;
        result[2] += 0;
        result[3] += 112728;
        result[4] += 563644;
        result[5] += 0;
      } else {
        result[0] += 26096621;
        result[1] += 1658476;
        result[2] += 3634015;
        result[3] += 4219360;
        result[4] += 4755926;
        result[5] += 2585272;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1101273;
        result[4] += 0;
        result[5] += 41848399;
      } else {
        result[0] += 4241943;
        result[1] += 0;
        result[2] += 13256071;
        result[3] += 10604857;
        result[4] += 9014128;
        result[5] += 5832671;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 676372;
        result[1] += 0;
        result[2] += 27054912;
        result[3] += 13189269;
        result[4] += 0;
        result[5] += 2029118;
      } else {
        result[0] += 54922;
        result[1] += 0;
        result[2] += 40313375;
        result[3] += 2361682;
        result[4] += 0;
        result[5] += 219691;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1183652;
        result[2] += 338186;
        result[3] += 2198211;
        result[4] += 37200504;
        result[5] += 2029118;
      } else {
        result[0] += 756519;
        result[1] += 447034;
        result[2] += 447034;
        result[3] += 5983381;
        result[4] += 2716592;
        result[5] += 32599111;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 296204;
        result[1] += 41073710;
        result[2] += 0;
        result[3] += 197469;
        result[4] += 1382288;
        result[5] += 0;
      } else {
        result[0] += 28231247;
        result[1] += 2134925;
        result[2] += 1381422;
        result[3] += 3089362;
        result[4] += 4495901;
        result[5] += 3616814;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7809031;
        result[3] += 24328136;
        result[4] += 0;
        result[5] += 10812505;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25769803;
        result[3] += 8589934;
        result[4] += 2454267;
        result[5] += 6135667;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1677721;
        result[1] += 0;
        result[2] += 31205621;
        result[3] += 8891924;
        result[4] += 0;
        result[5] += 1174405;
      } else {
        result[0] += 230912;
        result[1] += 0;
        result[2] += 40813734;
        result[3] += 1674113;
        result[4] += 0;
        result[5] += 230912;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7216476;
        result[1] += 1280342;
        result[2] += 0;
        result[3] += 1163947;
        result[4] += 28516720;
        result[5] += 4772185;
      } else {
        result[0] += 127636;
        result[1] += 478636;
        result[2] += 255272;
        result[3] += 6828551;
        result[4] += 2680365;
        result[5] += 32579209;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 33850819;
        result[2] += 539762;
        result[3] += 154217;
        result[4] += 8250655;
        result[5] += 154217;
      } else {
        result[0] += 30300310;
        result[1] += 1105001;
        result[2] += 3402242;
        result[3] += 3227768;
        result[4] += 2558951;
        result[5] += 2355398;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 788067;
        result[1] += 1576134;
        result[2] += 6698572;
        result[3] += 19701684;
        result[4] += 1970168;
        result[5] += 12215044;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32212254;
        result[3] += 7966471;
        result[4] += 0;
        result[5] += 2770946;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 6135667;
        result[1] += 2454267;
        result[2] += 15952735;
        result[3] += 14725602;
        result[4] += 0;
        result[5] += 3681400;
      } else {
        result[0] += 318538;
        result[1] += 0;
        result[2] += 40507540;
        result[3] += 1911233;
        result[4] += 0;
        result[5] += 212359;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5135286;
        result[1] += 2334221;
        result[2] += 350133;
        result[3] += 0;
        result[4] += 29994744;
        result[5] += 5135286;
      } else {
        result[0] += 195759;
        result[1] += 195759;
        result[2] += 548127;
        result[3] += 6107701;
        result[4] += 3053850;
        result[5] += 32848473;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 464823;
        result[1] += 40346662;
        result[2] += 0;
        result[3] += 650752;
        result[4] += 1487434;
        result[5] += 0;
      } else {
        result[0] += 28037719;
        result[1] += 1515552;
        result[2] += 1461425;
        result[3] += 2895787;
        result[4] += 4411340;
        result[5] += 4627847;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1552397;
        result[1] += 1552397;
        result[2] += 8667554;
        result[3] += 17205742;
        result[4] += 1552397;
        result[5] += 12419182;
      } else {
        result[0] += 6369654;
        result[1] += 0;
        result[2] += 28208471;
        result[3] += 7461595;
        result[4] += 181990;
        result[5] += 727960;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        result[0] += 58040;
        result[1] += 0;
        result[2] += 40511988;
        result[3] += 2263563;
        result[4] += 0;
        result[5] += 116080;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 862443;
        result[1] += 517465;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37947502;
        result[5] += 3622261;
      } else {
        result[0] += 1572528;
        result[1] += 1212157;
        result[2] += 1179396;
        result[3] += 5765936;
        result[4] += 2194987;
        result[5] += 31024668;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 320519;
        result[1] += 34536024;
        result[2] += 0;
        result[3] += 1201949;
        result[4] += 6490528;
        result[5] += 400649;
      } else {
        result[0] += 31254190;
        result[1] += 936774;
        result[2] += 2129032;
        result[3] += 2526451;
        result[4] += 3803870;
        result[5] += 2299354;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9286415;
        result[4] += 6964811;
        result[5] += 26698445;
      } else {
        result[0] += 194342;
        result[1] += 0;
        result[2] += 16907789;
        result[3] += 19628583;
        result[4] += 1749081;
        result[5] += 4469875;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 660764;
        result[1] += 0;
        result[2] += 17179869;
        result[3] += 4625349;
        result[4] += 3964585;
        result[5] += 16519104;
      } else {
        result[0] += 350814;
        result[1] += 0;
        result[2] += 39541764;
        result[3] += 2555931;
        result[4] += 50116;
        result[5] += 451046;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8403196;
        result[1] += 414972;
        result[2] += 0;
        result[3] += 622459;
        result[4] += 29774290;
        result[5] += 3734754;
      } else {
        result[0] += 244960;
        result[1] += 122480;
        result[2] += 163306;
        result[3] += 2531254;
        result[4] += 5103335;
        result[5] += 34784335;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
        result[0] += 474058;
        result[1] += 41906744;
        result[2] += 0;
        result[3] += 94811;
        result[4] += 474058;
        result[5] += 0;
      } else {
        result[0] += 26407039;
        result[1] += 1452896;
        result[2] += 2599920;
        result[3] += 5480225;
        result[4] += 2982262;
        result[5] += 4027328;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2741468;
        result[4] += 4569114;
        result[5] += 35639090;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9277129;
        result[3] += 24739011;
        result[4] += 343597;
        result[5] += 8589934;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 5052902;
        result[1] += 2526451;
        result[2] += 4210752;
        result[3] += 5052902;
        result[4] += 15158708;
        result[5] += 10947955;
      } else {
        result[0] += 257955;
        result[1] += 0;
        result[2] += 38779384;
        result[3] += 3095471;
        result[4] += 171970;
        result[5] += 644889;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 403283;
        result[1] += 4940220;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34884006;
        result[5] += 2722162;
      } else {
        result[0] += 0;
        result[1] += 41015002;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1934669;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1126429;
        result[1] += 472373;
        result[2] += 436037;
        result[3] += 6249867;
        result[4] += 1126429;
        result[5] += 33538534;
      } else {
        result[0] += 26927772;
        result[1] += 623905;
        result[2] += 3169441;
        result[3] += 4791596;
        result[4] += 3294222;
        result[5] += 4142734;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 2825636;
        result[2] += 3955890;
        result[3] += 11867672;
        result[4] += 3390763;
        result[5] += 20909709;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 27440068;
        result[3] += 13720034;
        result[4] += 0;
        result[5] += 1789569;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28991029;
        result[3] += 12884901;
        result[4] += 0;
        result[5] += 1073741;
      } else {
        result[0] += 208240;
        result[1] += 0;
        result[2] += 40606963;
        result[3] += 1770047;
        result[4] += 0;
        result[5] += 364421;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 295186;
        result[1] += 1328340;
        result[2] += 0;
        result[3] += 737966;
        result[4] += 38964651;
        result[5] += 1623527;
      } else {
        result[0] += 3621849;
        result[1] += 615031;
        result[2] += 136673;
        result[3] += 3314334;
        result[4] += 3006818;
        result[5] += 32254965;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 23761399;
        result[1] += 2569437;
        result[2] += 2380854;
        result[3] += 6364660;
        result[4] += 3865942;
        result[5] += 4007378;
      } else {
        result[0] += 966367;
        result[1] += 41339060;
        result[2] += 0;
        result[3] += 0;
        result[4] += 644245;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4521018;
        result[3] += 0;
        result[4] += 0;
        result[5] += 38428654;
      } else {
        result[0] += 0;
        result[1] += 466844;
        result[2] += 16806393;
        result[3] += 16806393;
        result[4] += 466844;
        result[5] += 8403196;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 715827;
        result[1] += 178956;
        result[2] += 30243728;
        result[3] += 8947848;
        result[4] += 357913;
        result[5] += 2505397;
      } else {
        result[0] += 121843;
        result[1] += 60921;
        result[2] += 41000184;
        result[3] += 1340273;
        result[4] += 0;
        result[5] += 426450;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7635497;
        result[1] += 668106;
        result[2] += 0;
        result[3] += 381774;
        result[4] += 29682996;
        result[5] += 4581298;
      } else {
        result[0] += 38938;
        result[1] += 233633;
        result[2] += 116816;
        result[3] += 2764666;
        result[4] += 2725727;
        result[5] += 37069889;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 298953;
        result[1] += 42451416;
        result[2] += 0;
        result[3] += 0;
        result[4] += 199302;
        result[5] += 0;
      } else {
        result[0] += 25962309;
        result[1] += 1560860;
        result[2] += 1873032;
        result[3] += 5879240;
        result[4] += 3511935;
        result[5] += 4162294;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 780903;
        result[1] += 3123612;
        result[2] += 2733161;
        result[3] += 16789417;
        result[4] += 3514064;
        result[5] += 16008514;
      } else {
        result[0] += 360921;
        result[1] += 360921;
        result[2] += 21294375;
        result[3] += 14075943;
        result[4] += 0;
        result[5] += 6857510;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1020402;
        result[1] += 0;
        result[2] += 34971979;
        result[3] += 6586234;
        result[4] += 0;
        result[5] += 371055;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42002886;
        result[3] += 774643;
        result[4] += 0;
        result[5] += 172142;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 662803;
        result[1] += 1458167;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36851879;
        result[5] += 3976821;
      } else {
        result[0] += 1459293;
        result[1] += 265326;
        result[2] += 663315;
        result[3] += 6434159;
        result[4] += 1724620;
        result[5] += 32402957;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 29166080;
        result[1] += 2453479;
        result[2] += 1047552;
        result[3] += 2370777;
        result[4] += 5348033;
        result[5] += 2563748;
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
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 485307;
        result[2] += 7279605;
        result[3] += 23780044;
        result[4] += 0;
        result[5] += 11404715;
      } else {
        result[0] += 1874787;
        result[1] += 1193046;
        result[2] += 24542670;
        result[3] += 5965232;
        result[4] += 1363481;
        result[5] += 8010454;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29990719;
        result[3] += 9996906;
        result[4] += 0;
        result[5] += 2962046;
      } else {
        result[0] += 298261;
        result[1] += 0;
        result[2] += 40742536;
        result[3] += 1610612;
        result[4] += 0;
        result[5] += 298261;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6752397;
        result[1] += 110695;
        result[2] += 0;
        result[3] += 221390;
        result[4] += 29666268;
        result[5] += 6198921;
      } else {
        result[0] += 148486;
        result[1] += 890918;
        result[2] += 111364;
        result[3] += 7535681;
        result[4] += 1818957;
        result[5] += 32444264;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27061369;
        result[1] += 2280740;
        result[2] += 1998851;
        result[3] += 2665134;
        result[4] += 5279017;
        result[5] += 3664560;
      } else {
        result[0] += 106574;
        result[1] += 42843098;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1342177;
        result[1] += 2460658;
        result[2] += 5816101;
        result[3] += 18343089;
        result[4] += 1118481;
        result[5] += 13869165;
      } else {
        result[0] += 7020619;
        result[1] += 0;
        result[2] += 28495456;
        result[3] += 7020619;
        result[4] += 0;
        result[5] += 412977;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33038209;
        result[3] += 8745408;
        result[4] += 0;
        result[5] += 1166054;
      } else {
        result[0] += 250801;
        result[1] += 0;
        result[2] += 41005965;
        result[3] += 1567506;
        result[4] += 0;
        result[5] += 125400;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 159664;
        result[1] += 1117649;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40874038;
        result[5] += 798321;
      } else {
        result[0] += 2573879;
        result[1] += 124042;
        result[2] += 341116;
        result[3] += 6884351;
        result[4] += 2387815;
        result[5] += 30638467;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 483485;
        result[1] += 36744935;
        result[2] += 241742;
        result[3] += 241742;
        result[4] += 4996021;
        result[5] += 241742;
      } else {
        result[0] += 29567000;
        result[1] += 1088022;
        result[2] += 3427269;
        result[3] += 2774456;
        result[4] += 3100863;
        result[5] += 2992060;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4190211;
        result[3] += 3142658;
        result[4] += 9427976;
        result[5] += 26188824;
      } else {
        result[0] += 650752;
        result[1] += 2277634;
        result[2] += 17244944;
        result[3] += 17244944;
        result[4] += 650752;
        result[5] += 4880644;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32341621;
        result[3] += 10090585;
        result[4] += 0;
        result[5] += 517465;
      } else {
        result[0] += 416987;
        result[1] += 0;
        result[2] += 40745598;
        result[3] += 1787087;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 322929;
        result[1] += 0;
        result[2] += 0;
        result[3] += 161464;
        result[4] += 40043304;
        result[5] += 2421974;
      } else {
        result[0] += 1132885;
        result[1] += 199920;
        result[2] += 133280;
        result[3] += 6730670;
        result[4] += 2665611;
        result[5] += 32087304;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 37075561;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5721537;
        result[5] += 152574;
      } else {
        result[0] += 29093227;
        result[1] += 1008706;
        result[2] += 3503928;
        result[3] += 3424294;
        result[4] += 3052665;
        result[5] += 2866850;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 3272356;
        result[2] += 13089424;
        result[3] += 11862290;
        result[4] += 818089;
        result[5] += 13907513;
      } else {
        result[0] += 394033;
        result[1] += 788067;
        result[2] += 30734628;
        result[3] += 9062775;
        result[4] += 0;
        result[5] += 1970168;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1887897;
        result[1] += 0;
        result[2] += 33982158;
        result[3] += 3775795;
        result[4] += 0;
        result[5] += 3303820;
      } else {
        result[0] += 54712;
        result[1] += 0;
        result[2] += 41362997;
        result[3] += 1477249;
        result[4] += 0;
        result[5] += 54712;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5444324;
        result[1] += 1330834;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32061023;
        result[5] += 4113489;
      } else {
        result[0] += 105527;
        result[1] += 35175;
        result[2] += 0;
        result[3] += 6999987;
        result[4] += 2321603;
        result[5] += 33487378;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 35346529;
        result[2] += 0;
        result[3] += 242653;
        result[4] += 6875183;
        result[5] += 485307;
      } else {
        result[0] += 27504211;
        result[1] += 1436787;
        result[2] += 3463683;
        result[3] += 4259047;
        result[4] += 3258427;
        result[5] += 3027515;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10160137;
        result[3] += 15702030;
        result[4] += 461824;
        result[5] += 16625679;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32212254;
        result[3] += 9663676;
        result[4] += 0;
        result[5] += 1073741;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 4772185;
        result[1] += 28633115;
        result[2] += 4772185;
        result[3] += 0;
        result[4] += 4772185;
        result[5] += 0;
      } else {
        result[0] += 285379;
        result[1] += 0;
        result[2] += 39287297;
        result[3] += 3139178;
        result[4] += 0;
        result[5] += 237816;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6607641;
        result[4] += 6607641;
        result[5] += 29734388;
      } else {
        result[0] += 357913;
        result[1] += 357913;
        result[2] += 0;
        result[3] += 536870;
        result[4] += 40086361;
        result[5] += 1610612;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 976128;
        result[1] += 366048;
        result[2] += 0;
        result[3] += 2074273;
        result[4] += 3009730;
        result[5] += 36523490;
      } else {
        result[0] += 588351;
        result[1] += 0;
        result[2] += 784468;
        result[3] += 23926301;
        result[4] += 0;
        result[5] += 17650550;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 27658963;
        result[1] += 2661522;
        result[2] += 1148107;
        result[3] += 2844176;
        result[4] += 6236313;
        result[5] += 2400589;
      } else {
        result[0] += 0;
        result[1] += 42599539;
        result[2] += 0;
        result[3] += 0;
        result[4] += 350133;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1215556;
        result[1] += 1080494;
        result[2] += 12560753;
        result[3] += 15397052;
        result[4] += 1215556;
        result[5] += 11480258;
      } else {
        result[0] += 1289379;
        result[1] += 177845;
        result[2] += 37792155;
        result[3] += 2934449;
        result[4] += 0;
        result[5] += 755843;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1193046;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41245320;
        result[5] += 511305;
      } else {
        result[0] += 2027666;
        result[1] += 337944;
        result[2] += 430111;
        result[3] += 8694390;
        result[4] += 2734278;
        result[5] += 28725281;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 79980;
        result[1] += 36471230;
        result[2] += 0;
        result[3] += 479884;
        result[4] += 5678634;
        result[5] += 239942;
      } else {
        result[0] += 29042159;
        result[1] += 1690717;
        result[2] += 2372458;
        result[3] += 3136007;
        result[4] += 3190547;
        result[5] += 3517782;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12092626;
        result[3] += 22934291;
        result[4] += 0;
        result[5] += 7922755;
      } else {
        result[0] += 3390763;
        result[1] += 0;
        result[2] += 30516872;
        result[3] += 7911781;
        result[4] += 0;
        result[5] += 1130254;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1422174;
        result[1] += 0;
        result[2] += 35269930;
        result[3] += 5688698;
        result[4] += 0;
        result[5] += 568869;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41566430;
        result[3] += 1314080;
        result[4] += 0;
        result[5] += 69162;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5293517;
        result[1] += 3248294;
        result[2] += 0;
        result[3] += 1443686;
        result[4] += 28753422;
        result[5] += 4210752;
      } else {
        result[0] += 39295;
        result[1] += 235771;
        result[2] += 785904;
        result[3] += 5540625;
        result[4] += 2357713;
        result[5] += 33990363;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 83235;
        result[1] += 35208743;
        result[2] += 166471;
        result[3] += 0;
        result[4] += 7324750;
        result[5] += 166471;
      } else {
        result[0] += 30424958;
        result[1] += 845895;
        result[2] += 1282487;
        result[3] += 3902035;
        result[4] += 3874748;
        result[5] += 2619548;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2454267;
        result[3] += 1840700;
        result[4] += 11657768;
        result[5] += 26996937;
      } else {
        result[0] += 442780;
        result[1] += 442780;
        result[2] += 13062013;
        result[3] += 22360396;
        result[4] += 442780;
        result[5] += 6198921;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1695381;
        result[1] += 0;
        result[2] += 18649200;
        result[3] += 14693309;
        result[4] += 0;
        result[5] += 7911781;
      } else {
        result[0] += 408612;
        result[1] += 0;
        result[2] += 38137130;
        result[3] += 3859114;
        result[4] += 45401;
        result[5] += 499414;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 177477;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42594716;
        result[5] += 177477;
      } else {
        result[0] += 0;
        result[1] += 4521018;
        result[2] += 5274521;
        result[3] += 9795539;
        result[4] += 15070060;
        result[5] += 8288533;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 166902;
        result[3] += 1112685;
        result[4] += 2559177;
        result[5] += 39110906;
      } else {
        result[0] += 5361262;
        result[1] += 416987;
        result[2] += 536126;
        result[3] += 15011536;
        result[4] += 3931592;
        result[5] += 17692167;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 35526272;
        result[2] += 88373;
        result[3] += 88373;
        result[4] += 7069905;
        result[5] += 176747;
      } else {
        result[0] += 32801503;
        result[1] += 1571329;
        result[2] += 1440385;
        result[3] += 2749826;
        result[4] += 2848034;
        result[5] += 1538593;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 5143673;
        result[1] += 257183;
        result[2] += 11573265;
        result[3] += 9515795;
        result[4] += 5915224;
        result[5] += 10544530;
      } else {
        result[0] += 80354;
        result[1] += 0;
        result[2] += 37204300;
        result[3] += 4861469;
        result[4] += 120532;
        result[5] += 683016;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 497486;
        result[1] += 331657;
        result[2] += 497486;
        result[3] += 165828;
        result[4] += 39633095;
        result[5] += 1824117;
      } else {
        result[0] += 1311697;
        result[1] += 100899;
        result[2] += 134533;
        result[3] += 5784920;
        result[4] += 2354328;
        result[5] += 33263294;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 387807;
        result[1] += 39847213;
        result[2] += 969518;
        result[3] += 96951;
        result[4] += 1648181;
        result[5] += 0;
      } else {
        result[0] += 27622924;
        result[1] += 1763693;
        result[2] += 2583438;
        result[3] += 3328661;
        result[4] += 4918470;
        result[5] += 2732483;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11388170;
        result[3] += 18221073;
        result[4] += 325376;
        result[5] += 13015052;
      } else {
        result[0] += 0;
        result[1] += 1737848;
        result[2] += 33515640;
        result[3] += 6703128;
        result[4] += 0;
        result[5] += 993056;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 19214327;
        result[1] += 0;
        result[2] += 18084072;
        result[3] += 2260509;
        result[4] += 2260509;
        result[5] += 1130254;
      } else {
        result[0] += 498770;
        result[1] += 0;
        result[2] += 40123307;
        result[3] += 2105919;
        result[4] += 0;
        result[5] += 221675;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7379668;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34536850;
        result[5] += 1033153;
      } else {
        result[0] += 0;
        result[1] += 204522;
        result[2] += 102261;
        result[3] += 6237928;
        result[4] += 3136007;
        result[5] += 33268953;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 93368;
        result[1] += 41362402;
        result[2] += 373475;
        result[3] += 0;
        result[4] += 1120426;
        result[5] += 0;
      } else {
        result[0] += 26948814;
        result[1] += 2236962;
        result[2] += 2394865;
        result[3] += 3184381;
        result[4] += 5447660;
        result[5] += 2736988;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 266768;
        result[1] += 266768;
        result[2] += 6402435;
        result[3] += 21874988;
        result[4] += 800304;
        result[5] += 13338407;
      } else {
        result[0] += 954437;
        result[1] += 5726623;
        result[2] += 28633115;
        result[3] += 1908874;
        result[4] += 0;
        result[5] += 5726623;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2477865;
        result[1] += 0;
        result[2] += 29872048;
        result[3] += 10186781;
        result[4] += 0;
        result[5] += 412977;
      } else {
        result[0] += 322929;
        result[1] += 0;
        result[2] += 40559991;
        result[3] += 1679235;
        result[4] += 0;
        result[5] += 387515;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 370255;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41468649;
        result[5] += 1110767;
      } else {
        result[0] += 18265952;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2468372;
        result[4] += 6911441;
        result[5] += 15303906;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1046135;
        result[4] += 2150389;
        result[5] += 39753147;
      } else {
        result[0] += 478281;
        result[1] += 860906;
        result[2] += 478281;
        result[3] += 15305005;
        result[4] += 2391407;
        result[5] += 23435790;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 225655;
        result[1] += 35653493;
        result[2] += 0;
        result[3] += 300873;
        result[4] += 6619214;
        result[5] += 150436;
      } else {
        result[0] += 31207625;
        result[1] += 940503;
        result[2] += 1026004;
        result[3] += 3705014;
        result[4] += 2964011;
        result[5] += 3106512;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 2095105;
        result[1] += 1178497;
        result[2] += 18594065;
        result[3] += 13094412;
        result[4] += 1702273;
        result[5] += 6285317;
      } else {
        result[0] += 235211;
        result[1] += 0;
        result[2] += 38856987;
        result[3] += 3151837;
        result[4] += 0;
        result[5] += 705635;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 138547;
        result[1] += 1246925;
        result[2] += 0;
        result[3] += 831283;
        result[4] += 36576495;
        result[5] += 4156419;
      } else {
        result[0] += 1823169;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5434448;
        result[4] += 1998474;
        result[5] += 33693580;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 76017;
        result[1] += 33447532;
        result[2] += 456102;
        result[3] += 532119;
        result[4] += 7829763;
        result[5] += 608136;
      } else {
        result[0] += 30898393;
        result[1] += 1147740;
        result[2] += 1782018;
        result[3] += 3201593;
        result[4] += 3594241;
        result[5] += 2325685;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 3445160;
        result[2] += 3215483;
        result[3] += 15388385;
        result[4] += 918709;
        result[5] += 19981933;
      } else {
        result[0] += 0;
        result[1] += 268435;
        result[2] += 22280142;
        result[3] += 15300820;
        result[4] += 0;
        result[5] += 5100273;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        result[0] += 15728049;
        result[1] += 1814774;
        result[2] += 21777298;
        result[3] += 1209849;
        result[4] += 2419699;
        result[5] += 0;
      } else {
        result[0] += 96951;
        result[1] += 96951;
        result[2] += 39362454;
        result[3] += 2666176;
        result[4] += 145427;
        result[5] += 581711;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 299300;
        result[1] += 748252;
        result[2] += 1197203;
        result[3] += 0;
        result[4] += 39208412;
        result[5] += 1496504;
      } else {
        result[0] += 1430520;
        result[1] += 374660;
        result[2] += 476840;
        result[3] += 6505461;
        result[4] += 1975480;
        result[5] += 32186709;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 205993;
        result[1] += 41301723;
        result[2] += 0;
        result[3] += 102996;
        result[4] += 1338958;
        result[5] += 0;
      } else {
        result[0] += 26560668;
        result[1] += 1738949;
        result[2] += 2405943;
        result[3] += 3930502;
        result[4] += 4978636;
        result[5] += 3334971;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 5726623;
        result[2] += 1908874;
        result[3] += 3817748;
        result[4] += 2863311;
        result[5] += 28633115;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20043180;
        result[3] += 17179869;
        result[4] += 1908874;
        result[5] += 3817748;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30901084;
        result[3] += 10205862;
        result[4] += 0;
        result[5] += 1842725;
      } else {
        result[0] += 193757;
        result[1] += 0;
        result[2] += 41464195;
        result[3] += 1033375;
        result[4] += 0;
        result[5] += 258343;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 4161213;
        result[2] += 297229;
        result[3] += 297229;
        result[4] += 37302311;
        result[5] += 891688;
      } else {
        result[0] += 2319812;
        result[1] += 165700;
        result[2] += 530242;
        result[3] += 6296634;
        result[4] += 3148317;
        result[5] += 30488965;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 39340456;
        result[2] += 0;
        result[3] += 90230;
        result[4] += 3518985;
        result[5] += 0;
      } else {
        result[0] += 31817879;
        result[1] += 1190566;
        result[2] += 1101273;
        result[3] += 2351368;
        result[4] += 3780047;
        result[5] += 2708537;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 1610612;
        result[2] += 2684354;
        result[3] += 8589934;
        result[4] += 2684354;
        result[5] += 27380416;
      } else {
        result[0] += 1408185;
        result[1] += 0;
        result[2] += 7745022;
        result[3] += 26755533;
        result[4] += 0;
        result[5] += 7040929;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5389122;
        result[1] += 653226;
        result[2] += 23842784;
        result[3] += 7348803;
        result[4] += 326613;
        result[5] += 5389122;
      } else {
        result[0] += 50116;
        result[1] += 0;
        result[2] += 39892578;
        result[3] += 2956861;
        result[4] += 0;
        result[5] += 50116;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 157324;
        result[1] += 786624;
        result[2] += 943948;
        result[3] += 943948;
        result[4] += 37600629;
        result[5] += 2517196;
      } else {
        result[0] += 973670;
        result[1] += 324556;
        result[2] += 252433;
        result[3] += 4940474;
        result[4] += 2235835;
        result[5] += 34222703;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        result[0] += 808983;
        result[1] += 33756677;
        result[2] += 0;
        result[3] += 220631;
        result[4] += 7722115;
        result[5] += 441263;
      } else {
        result[0] += 30726397;
        result[1] += 1513891;
        result[2] += 1541926;
        result[3] += 3139923;
        result[4] += 2719398;
        result[5] += 3308134;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 249707;
        result[2] += 2746781;
        result[3] += 18728055;
        result[4] += 4245025;
        result[5] += 16980103;
      } else {
        result[0] += 689032;
        result[1] += 689032;
        result[2] += 22508384;
        result[3] += 15847740;
        result[4] += 0;
        result[5] += 3215483;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 7516192;
        result[1] += 1073741;
        result[2] += 23085449;
        result[3] += 2684354;
        result[4] += 2147483;
        result[5] += 6442450;
      } else {
        result[0] += 53221;
        result[1] += 0;
        result[2] += 40182159;
        result[3] += 2341741;
        result[4] += 0;
        result[5] += 372549;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 5536481;
        result[1] += 3019898;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31541166;
        result[5] += 2852126;
      } else {
        result[0] += 0;
        result[1] += 823794;
        result[2] += 823794;
        result[3] += 6815030;
        result[4] += 2396494;
        result[5] += 32090557;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 78232;
        result[1] += 32466510;
        result[2] += 0;
        result[3] += 547627;
        result[4] += 9622604;
        result[5] += 234697;
      } else {
        result[0] += 30562424;
        result[1] += 1271180;
        result[2] += 1487551;
        result[3] += 2866917;
        result[4] += 2677592;
        result[5] += 4084005;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 766958;
        result[1] += 383479;
        result[2] += 1533916;
        result[3] += 29527900;
        result[4] += 0;
        result[5] += 10737418;
      } else {
        result[0] += 987348;
        result[1] += 0;
        result[2] += 18512790;
        result[3] += 7158278;
        result[4] += 5677255;
        result[5] += 10613999;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29583592;
        result[3] += 9980006;
        result[4] += 0;
        result[5] += 3386073;
      } else {
        result[0] += 622459;
        result[1] += 0;
        result[2] += 39893964;
        result[3] += 2037138;
        result[4] += 0;
        result[5] += 396110;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 6350535;
        result[1] += 167119;
        result[2] += 668477;
        result[3] += 0;
        result[4] += 31919795;
        result[5] += 3843745;
      } else {
        result[0] += 0;
        result[1] += 35175;
        result[2] += 0;
        result[3] += 6577877;
        result[4] += 3200999;
        result[5] += 33135619;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 38264254;
        result[2] += 0;
        result[3] += 520602;
        result[4] += 4164816;
        result[5] += 0;
      } else {
        result[0] += 29405810;
        result[1] += 1771120;
        result[2] += 2057625;
        result[3] += 3672470;
        result[4] += 3438057;
        result[5] += 2604589;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5153960;
        result[3] += 0;
        result[4] += 3435973;
        result[5] += 34359738;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7074063;
        result[3] += 21222191;
        result[4] += 0;
        result[5] += 14653417;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1060485;
        result[1] += 530242;
        result[2] += 26777265;
        result[3] += 10604857;
        result[4] += 1060485;
        result[5] += 2916335;
      } else {
        result[0] += 46083;
        result[1] += 46083;
        result[2] += 40184672;
        result[3] += 2350250;
        result[4] += 0;
        result[5] += 322583;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 5785057;
        result[1] += 175304;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34885652;
        result[5] += 2103657;
      } else {
        result[0] += 64295;
        result[1] += 257183;
        result[2] += 225035;
        result[3] += 6718923;
        result[4] += 3825607;
        result[5] += 31858627;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 315226;
        result[1] += 35699452;
        result[2] += 78806;
        result[3] += 236420;
        result[4] += 6462152;
        result[5] += 157613;
      } else {
        result[0] += 29398844;
        result[1] += 1445421;
        result[2] += 1987454;
        result[3] += 3923287;
        result[4] += 3123143;
        result[5] += 3071521;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6362914;
        result[3] += 25451658;
        result[4] += 0;
        result[5] += 11135100;
      } else {
        result[0] += 926971;
        result[1] += 0;
        result[2] += 28736112;
        result[3] += 12050627;
        result[4] += 0;
        result[5] += 1235961;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 532433;
        result[1] += 0;
        result[2] += 35318119;
        result[3] += 6389207;
        result[4] += 0;
        result[5] += 709911;
      } else {
        result[0] += 357318;
        result[1] += 0;
        result[2] += 40948689;
        result[3] += 1071955;
        result[4] += 0;
        result[5] += 571709;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 598601;
        result[2] += 149650;
        result[3] += 149650;
        result[4] += 40405615;
        result[5] += 1646154;
      } else {
        result[0] += 3456507;
        result[1] += 308005;
        result[2] += 0;
        result[3] += 3422284;
        result[4] += 3524953;
        result[5] += 32237921;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 40412930;
        result[2] += 0;
        result[3] += 174947;
        result[4] += 2099373;
        result[5] += 262421;
      } else {
        result[0] += 27994224;
        result[1] += 1538737;
        result[2] += 2510571;
        result[3] += 4778184;
        result[4] += 2861511;
        result[5] += 3266442;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 1034931;
        result[2] += 4139727;
        result[3] += 21733569;
        result[4] += 1552397;
        result[5] += 14489046;
      } else {
        result[0] += 6710886;
        result[1] += 671088;
        result[2] += 2013265;
        result[3] += 2013265;
        result[4] += 10066329;
        result[5] += 21474836;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 354955;
        result[1] += 0;
        result[2] += 27686566;
        result[3] += 11476909;
        result[4] += 118318;
        result[5] += 3312922;
      } else {
        result[0] += 62066;
        result[1] += 0;
        result[2] += 40280834;
        result[3] += 2296442;
        result[4] += 0;
        result[5] += 310330;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5591785;
        result[1] += 1427689;
        result[2] += 0;
        result[3] += 951793;
        result[4] += 30100463;
        result[5] += 4877940;
      } else {
        result[0] += 213149;
        result[1] += 106574;
        result[2] += 0;
        result[3] += 6998416;
        result[4] += 1953872;
        result[5] += 33677659;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 310479;
        result[1] += 41397275;
        result[2] += 0;
        result[3] += 206986;
        result[4] += 1034931;
        result[5] += 0;
      } else {
        result[0] += 26154640;
        result[1] += 1876672;
        result[2] += 3111950;
        result[3] += 4014654;
        result[4] += 4798580;
        result[5] += 2993174;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 1651910;
        result[1] += 4955731;
        result[2] += 5781686;
        result[3] += 5781686;
        result[4] += 0;
        result[5] += 24778657;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22408525;
        result[3] += 6535819;
        result[4] += 4668442;
        result[5] += 9336885;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 390451;
        result[1] += 0;
        result[2] += 33839136;
        result[3] += 7548730;
        result[4] += 0;
        result[5] += 1171354;
      } else {
        result[0] += 70991;
        result[1] += 0;
        result[2] += 41529849;
        result[3] += 1064867;
        result[4] += 0;
        result[5] += 283964;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1003497;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41745476;
        result[5] += 200699;
      } else {
        result[0] += 0;
        result[1] += 1610612;
        result[2] += 0;
        result[3] += 4294967;
        result[4] += 26843545;
        result[5] += 10200547;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
        result[0] += 35060957;
        result[1] += 438261;
        result[2] += 438261;
        result[3] += 0;
        result[4] += 7012191;
        result[5] += 0;
      } else {
        result[0] += 474783;
        result[1] += 255652;
        result[2] += 146087;
        result[3] += 3834792;
        result[4] += 3725226;
        result[5] += 34513130;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
        result[0] += 377579;
        result[1] += 42288908;
        result[2] += 0;
        result[3] += 0;
        result[4] += 283184;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 15461882;
        result[2] += 0;
        result[3] += 0;
        result[4] += 27487790;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
        result[0] += 32533422;
        result[1] += 1805483;
        result[2] += 381929;
        result[3] += 2222133;
        result[4] += 3159595;
        result[5] += 2847108;
      } else {
        result[0] += 2229703;
        result[1] += 139356;
        result[2] += 28010656;
        result[3] += 8417132;
        result[4] += 278712;
        result[5] += 3874110;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 2755262;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39221965;
        result[5] += 972445;
      } else {
        result[0] += 1226071;
        result[1] += 334383;
        result[2] += 631612;
        result[3] += 6204667;
        result[4] += 2823680;
        result[5] += 31729256;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 95021;
        result[1] += 37438431;
        result[2] += 95021;
        result[3] += 190042;
        result[4] += 5131155;
        result[5] += 0;
      } else {
        result[0] += 28032420;
        result[1] += 2102431;
        result[2] += 1777055;
        result[3] += 3604168;
        result[4] += 3153647;
        result[5] += 4279949;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 523776;
        result[2] += 3404547;
        result[3] += 19379730;
        result[4] += 4452100;
        result[5] += 15189518;
      } else {
        result[0] += 332943;
        result[1] += 0;
        result[2] += 23971910;
        result[3] += 13983614;
        result[4] += 0;
        result[5] += 4661204;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5368709;
        result[3] += 5368709;
        result[4] += 1789569;
        result[5] += 30422685;
      } else {
        result[0] += 560213;
        result[1] += 0;
        result[2] += 37954439;
        result[3] += 3548016;
        result[4] += 373475;
        result[5] += 513528;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 832358;
        result[1] += 0;
        result[2] += 665886;
        result[3] += 166471;
        result[4] += 39786712;
        result[5] += 1498244;
      } else {
        result[0] += 2089617;
        result[1] += 96443;
        result[2] += 32147;
        result[3] += 6333147;
        result[4] += 2925464;
        result[5] += 31472851;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 29222620;
        result[1] += 2133447;
        result[2] += 2021161;
        result[3] += 2077304;
        result[4] += 5445906;
        result[5] += 2049232;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5310981;
        result[3] += 23783958;
        result[4] += 1385473;
        result[5] += 12469259;
      } else {
        result[0] += 3842865;
        result[1] += 1808407;
        result[2] += 21700887;
        result[3] += 5425221;
        result[4] += 2486560;
        result[5] += 7685730;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 1923119;
        result[1] += 0;
        result[2] += 19872236;
        result[3] += 19872236;
        result[4] += 0;
        result[5] += 1282079;
      } else {
        result[0] += 52698;
        result[1] += 0;
        result[2] += 40051228;
        result[3] += 2634949;
        result[4] += 0;
        result[5] += 210795;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42419430;
        result[5] += 530242;
      } else {
        result[0] += 4955731;
        result[1] += 1651910;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29734388;
        result[5] += 6607641;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 116080;
        result[3] += 1218842;
        result[4] += 1915323;
        result[5] += 39699427;
      } else {
        result[0] += 5694314;
        result[1] += 484622;
        result[2] += 605778;
        result[3] += 13993475;
        result[4] += 3271202;
        result[5] += 18900279;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 158194;
        result[1] += 37412882;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5220402;
        result[5] += 158194;
      } else {
        result[0] += 33665115;
        result[1] += 1134779;
        result[2] += 1203553;
        result[3] += 1960073;
        result[4] += 2854141;
        result[5] += 2132009;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 1558657;
        result[1] += 346368;
        result[2] += 16972048;
        result[3] += 16279311;
        result[4] += 1039104;
        result[5] += 6754182;
      } else {
        result[0] += 1318991;
        result[1] += 247310;
        result[2] += 37343957;
        result[3] += 3586009;
        result[4] += 0;
        result[5] += 453403;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 509284;
        result[2] += 0;
        result[3] += 169761;
        result[4] += 41082295;
        result[5] += 1188330;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
        result[0] += 143324;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2388747;
        result[4] += 1863222;
        result[5] += 38554378;
      } else {
        result[0] += 4673697;
        result[1] += 483485;
        result[2] += 966971;
        result[3] += 14665741;
        result[4] += 4673697;
        result[5] += 17486076;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 533063;
        result[1] += 34496811;
        result[2] += 0;
        result[3] += 76151;
        result[4] += 7843645;
        result[5] += 0;
      } else {
        result[0] += 33894019;
        result[1] += 776198;
        result[2] += 1423031;
        result[3] += 2716696;
        result[4] += 2166888;
        result[5] += 1972838;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 197016;
        result[1] += 197016;
        result[2] += 17731516;
        result[3] += 16352398;
        result[4] += 197016;
        result[5] += 8274707;
      } else {
        result[0] += 1634182;
        result[1] += 335216;
        result[2] += 37041474;
        result[3] += 3016952;
        result[4] += 209510;
        result[5] += 712336;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 330382;
        result[1] += 991146;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37167986;
        result[5] += 4460158;
      } else {
        result[0] += 1299376;
        result[1] += 1088667;
        result[2] += 1194021;
        result[3] += 7339723;
        result[4] += 1510086;
        result[5] += 30517797;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25093934;
        result[1] += 1552672;
        result[2] += 2488843;
        result[3] += 4178516;
        result[4] += 5411521;
        result[5] += 4224183;
      } else {
        result[0] += 1005847;
        result[1] += 41943825;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8500456;
        result[3] += 21922228;
        result[4] += 894784;
        result[5] += 11632203;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28283930;
        result[3] += 10999306;
        result[4] += 0;
        result[5] += 3666435;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42820000))) ) ) {
        result[0] += 3181457;
        result[1] += 0;
        result[2] += 15907286;
        result[3] += 0;
        result[4] += 14316557;
        result[5] += 9544371;
      } else {
        result[0] += 362226;
        result[1] += 103493;
        result[2] += 39534397;
        result[3] += 2483836;
        result[4] += 0;
        result[5] += 465719;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 528069;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41717510;
        result[5] += 704092;
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 964645;
        result[1] += 0;
        result[2] += 137806;
        result[3] += 2388644;
        result[4] += 2618322;
        result[5] += 36840254;
      } else {
        result[0] += 2846808;
        result[1] += 1113968;
        result[2] += 2104162;
        result[3] += 19556335;
        result[4] += 1732839;
        result[5] += 15595558;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 37300436;
        result[2] += 232160;
        result[3] += 541707;
        result[4] += 4797981;
        result[5] += 77386;
      } else {
        result[0] += 28536677;
        result[1] += 1262452;
        result[2] += 1946280;
        result[3] += 3813657;
        result[4] += 3235033;
        result[5] += 4155571;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2032027;
        result[1] += 738919;
        result[2] += 25400344;
        result[3] += 12469259;
        result[4] += 831283;
        result[5] += 1477838;
      } else {
        result[0] += 67213;
        result[1] += 0;
        result[2] += 41470967;
        result[3] += 1344277;
        result[4] += 0;
        result[5] += 67213;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1974697;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40316742;
        result[5] += 658232;
      } else {
        result[0] += 2169175;
        result[1] += 278893;
        result[2] += 61976;
        result[3] += 6042702;
        result[4] += 3346727;
        result[5] += 31050196;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 28332576;
        result[1] += 3060027;
        result[2] += 1939838;
        result[3] += 2814132;
        result[4] += 4781293;
        result[5] += 2021803;
      } else {
        result[0] += 332943;
        result[1] += 42616729;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 641039;
        result[2] += 2564159;
        result[3] += 3205199;
        result[4] += 11538718;
        result[5] += 25000555;
      } else {
        result[0] += 0;
        result[1] += 226050;
        result[2] += 13337003;
        result[3] += 21926938;
        result[4] += 452101;
        result[5] += 7007578;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3495903;
        result[1] += 0;
        result[2] += 28216936;
        result[3] += 7491222;
        result[4] += 1498244;
        result[5] += 2247366;
      } else {
        result[0] += 108595;
        result[1] += 0;
        result[2] += 40071881;
        result[3] += 2280513;
        result[4] += 0;
        result[5] += 488681;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 604924;
        result[1] += 453693;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40529973;
        result[5] += 1361081;
      } else {
        result[0] += 17935028;
        result[1] += 5191718;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8967514;
        result[5] += 10855411;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 101535;
        result[2] += 203071;
        result[3] += 2081485;
        result[4] += 2284557;
        result[5] += 38279022;
      } else {
        result[0] += 211054;
        result[1] += 844219;
        result[2] += 1582911;
        result[3] += 19100468;
        result[4] += 1899494;
        result[5] += 19311523;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1002416;
        result[1] += 33619492;
        result[2] += 0;
        result[3] += 1542178;
        result[4] += 6322932;
        result[5] += 462653;
      } else {
        result[0] += 33900832;
        result[1] += 904884;
        result[2] += 1228056;
        result[3] += 2294527;
        result[4] += 3231728;
        result[5] += 1389643;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 3522686;
        result[1] += 812927;
        result[2] += 9484154;
        result[3] += 11110010;
        result[4] += 2845246;
        result[5] += 15174647;
      } else {
        result[0] += 431655;
        result[1] += 0;
        result[2] += 37381323;
        result[3] += 4359715;
        result[4] += 0;
        result[5] += 776979;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 753503;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40689163;
        result[5] += 1507006;
      } else {
        result[0] += 913822;
        result[1] += 391638;
        result[2] += 652730;
        result[3] += 6657852;
        result[4] += 2382466;
        result[5] += 31951162;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 42129631;
        result[2] += 0;
        result[3] += 0;
        result[4] += 820041;
        result[5] += 0;
      } else {
        result[0] += 26962850;
        result[1] += 1813430;
        result[2] += 2386092;
        result[3] += 3841609;
        result[4] += 4557437;
        result[5] += 3388251;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2477865;
        result[3] += 14041239;
        result[4] += 825955;
        result[5] += 25604612;
      } else {
        result[0] += 715827;
        result[1] += 2863311;
        result[2] += 27201459;
        result[3] += 3579139;
        result[4] += 2863311;
        result[5] += 5726623;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31918882;
        result[3] += 8683813;
        result[4] += 0;
        result[5] += 2346976;
      } else {
        result[0] += 111848;
        result[1] += 0;
        result[2] += 40936407;
        result[3] += 1621797;
        result[4] += 0;
        result[5] += 279620;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9610520;
        result[1] += 1700977;
        result[2] += 0;
        result[3] += 0;
        result[4] += 27215634;
        result[5] += 4422540;
      } else {
        result[0] += 545970;
        result[1] += 109194;
        result[2] += 145592;
        result[3] += 5241316;
        result[4] += 3785394;
        result[5] += 33122205;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        result[0] += 202116;
        result[1] += 41939092;
        result[2] += 101058;
        result[3] += 101058;
        result[4] += 606348;
        result[5] += 0;
      } else {
        result[0] += 28415048;
        result[1] += 1450618;
        result[2] += 2076374;
        result[3] += 4920724;
        result[4] += 3242558;
        result[5] += 2844349;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 894784;
        result[1] += 894784;
        result[2] += 5070447;
        result[3] += 22667882;
        result[4] += 1789569;
        result[5] += 11632203;
      } else {
        result[0] += 4090445;
        result[1] += 2045222;
        result[2] += 25224411;
        result[3] += 3408704;
        result[4] += 681740;
        result[5] += 7499149;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21887814;
        result[3] += 15693149;
        result[4] += 0;
        result[5] += 5368709;
      } else {
        result[0] += 911780;
        result[1] += 0;
        result[2] += 38582722;
        result[3] += 3263215;
        result[4] += 0;
        result[5] += 191953;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 5775990;
        result[1] += 1036716;
        result[2] += 592409;
        result[3] += 0;
        result[4] += 34655943;
        result[5] += 888613;
      } else {
        result[0] += 72002;
        result[1] += 684026;
        result[2] += 252009;
        result[3] += 6372248;
        result[4] += 3204124;
        result[5] += 32365260;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 38880756;
        result[2] += 0;
        result[3] += 271261;
        result[4] += 3797655;
        result[5] += 0;
      } else {
        result[0] += 28766914;
        result[1] += 1873194;
        result[2] += 1418275;
        result[3] += 2943591;
        result[4] += 4790025;
        result[5] += 3157670;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2477865;
        result[3] += 1651910;
        result[4] += 9911462;
        result[5] += 28908433;
      } else {
        result[0] += 0;
        result[1] += 631612;
        result[2] += 11158493;
        result[3] += 24422363;
        result[4] += 631612;
        result[5] += 6105590;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8589934;
        result[4] += 30064771;
        result[5] += 4294967;
      } else {
        result[0] += 689262;
        result[1] += 0;
        result[2] += 38727939;
        result[3] += 3144760;
        result[4] += 0;
        result[5] += 387710;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 730022;
        result[1] += 2676750;
        result[2] += 0;
        result[3] += 608352;
        result[4] += 35892786;
        result[5] += 3041761;
      } else {
        result[0] += 3817748;
        result[1] += 230381;
        result[2] += 460762;
        result[3] += 4245599;
        result[4] += 3620278;
        result[5] += 30574901;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 25671956;
        result[1] += 2343177;
        result[2] += 3167152;
        result[3] += 5407332;
        result[4] += 3424644;
        result[5] += 2935409;
      } else {
        result[0] += 222537;
        result[1] += 42504598;
        result[2] += 0;
        result[3] += 0;
        result[4] += 222537;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13839339;
        result[3] += 6681060;
        result[4] += 1908874;
        result[5] += 20520399;
      } else {
        result[0] += 0;
        result[1] += 38177487;
        result[2] += 2386092;
        result[3] += 2386092;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1209849;
        result[1] += 0;
        result[2] += 15728049;
        result[3] += 13913274;
        result[4] += 604924;
        result[5] += 11493574;
      } else {
        result[0] += 689032;
        result[1] += 0;
        result[2] += 38723608;
        result[3] += 3307354;
        result[4] += 0;
        result[5] += 229677;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2015688;
        result[2] += 465158;
        result[3] += 0;
        result[4] += 38298083;
        result[5] += 2170741;
      } else {
        result[0] += 2173048;
        result[1] += 351522;
        result[2] += 287609;
        result[3] += 5880014;
        result[4] += 3834792;
        result[5] += 30422685;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 100584;
        result[1] += 41843241;
        result[2] += 0;
        result[3] += 201169;
        result[4] += 804677;
        result[5] += 0;
      } else {
        result[0] += 29745171;
        result[1] += 2382977;
        result[2] += 756945;
        result[3] += 2046557;
        result[4] += 4513640;
        result[5] += 3504379;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4016875;
        result[3] += 31208035;
        result[4] += 0;
        result[5] += 7724761;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33285996;
        result[3] += 4294967;
        result[4] += 0;
        result[5] += 5368709;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 288252;
        result[2] += 21618962;
        result[3] += 14124389;
        result[4] += 0;
        result[5] += 6918068;
      } else {
        result[0] += 1029294;
        result[1] += 0;
        result[2] += 38832492;
        result[3] += 2760382;
        result[4] += 0;
        result[5] += 327502;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6390073;
        result[1] += 419021;
        result[2] += 0;
        result[3] += 628531;
        result[4] += 30798058;
        result[5] += 4713988;
      } else {
        result[0] += 132560;
        result[1] += 265121;
        result[2] += 231981;
        result[3] += 7589101;
        result[4] += 2120971;
        result[5] += 32609936;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 36638366;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6311306;
        result[5] += 0;
      } else {
        result[0] += 29598171;
        result[1] += 702710;
        result[2] += 3766528;
        result[3] += 3316794;
        result[4] += 2810842;
        result[5] += 2754625;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 296204;
        result[1] += 3258251;
        result[2] += 9478548;
        result[3] += 18068483;
        result[4] += 1777227;
        result[5] += 10070957;
      } else {
        result[0] += 3655291;
        result[1] += 0;
        result[2] += 31069976;
        result[3] += 456911;
        result[4] += 456911;
        result[5] += 7310582;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29155617;
        result[3] += 12853551;
        result[4] += 0;
        result[5] += 940503;
      } else {
        result[0] += 186198;
        result[1] += 0;
        result[2] += 40218768;
        result[3] += 2358508;
        result[4] += 0;
        result[5] += 186198;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4583044;
        result[1] += 1440385;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31688478;
        result[5] += 5237764;
      } else {
        result[0] += 112335;
        result[1] += 37445;
        result[2] += 74890;
        result[3] += 7451599;
        result[4] += 2059487;
        result[5] += 33213914;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 201169;
        result[1] += 39831546;
        result[2] += 0;
        result[3] += 603508;
        result[4] += 2313448;
        result[5] += 0;
      } else {
        result[0] += 25443137;
        result[1] += 1679339;
        result[2] += 3243655;
        result[3] += 3956799;
        result[4] += 4922994;
        result[5] += 3703747;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6362914;
        result[5] += 36586758;
      } else {
        result[0] += 0;
        result[1] += 1218430;
        result[2] += 16753418;
        result[3] += 14621165;
        result[4] += 304607;
        result[5] += 10052051;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6135667;
        result[3] += 33746171;
        result[4] += 0;
        result[5] += 3067833;
      } else {
        result[0] += 343597;
        result[1] += 441768;
        result[2] += 39317357;
        result[3] += 2405181;
        result[4] += 0;
        result[5] += 441768;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5762867;
        result[1] += 2283400;
        result[2] += 217466;
        result[3] += 869866;
        result[4] += 30119137;
        result[5] += 3696933;
      } else {
        result[0] += 329256;
        result[1] += 73168;
        result[2] += 621928;
        result[3] += 6877801;
        result[4] += 2487715;
        result[5] += 32559803;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 39348023;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3601649;
        result[5] += 0;
      } else {
        result[0] += 27757102;
        result[1] += 1201389;
        result[2] += 1877171;
        result[3] += 3378907;
        result[4] += 3954573;
        result[5] += 4780528;
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6756128;
        result[3] += 27989674;
        result[4] += 0;
        result[5] += 8203870;
      } else {
        result[0] += 239942;
        result[1] += 0;
        result[2] += 33831865;
        result[3] += 8158038;
        result[4] += 0;
        result[5] += 719826;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1629125;
        result[1] += 0;
        result[2] += 35544556;
        result[3] += 5627888;
        result[4] += 0;
        result[5] += 148102;
      } else {
        result[0] += 84880;
        result[1] += 0;
        result[2] += 42015984;
        result[3] += 424403;
        result[4] += 0;
        result[5] += 424403;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5585940;
        result[1] += 372396;
        result[2] += 248264;
        result[3] += 1613716;
        result[4] += 30536472;
        result[5] += 4592884;
      } else {
        result[0] += 0;
        result[1] += 139333;
        result[2] += 69666;
        result[3] += 7593697;
        result[4] += 1672006;
        result[5] += 33474968;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27288202;
        result[1] += 2769406;
        result[2] += 1981558;
        result[3] += 2960399;
        result[4] += 5037454;
        result[5] += 2912651;
      } else {
        result[0] += 436037;
        result[1] += 41968589;
        result[2] += 436037;
        result[3] += 0;
        result[4] += 109009;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 327860;
        result[1] += 0;
        result[2] += 16720865;
        result[3] += 20327326;
        result[4] += 0;
        result[5] += 5573621;
      } else {
        result[0] += 1481023;
        result[1] += 0;
        result[2] += 34698257;
        result[3] += 6558817;
        result[4] += 0;
        result[5] += 211574;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1997659;
        result[1] += 0;
        result[2] += 33294320;
        result[3] += 6991807;
        result[4] += 0;
        result[5] += 665886;
      } else {
        result[0] += 72672;
        result[1] += 0;
        result[2] += 41278196;
        result[3] += 1235438;
        result[4] += 0;
        result[5] += 363364;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 19088743;
        result[2] += 0;
        result[3] += 0;
        result[4] += 23860929;
        result[5] += 0;
      } else {
        result[0] += 99420;
        result[1] += 42054888;
        result[2] += 0;
        result[3] += 198841;
        result[4] += 596523;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1413222;
        result[1] += 92166;
        result[2] += 153611;
        result[3] += 4424000;
        result[4] += 9247390;
        result[5] += 27619281;
      } else {
        result[0] += 27363916;
        result[1] += 1903797;
        result[2] += 863054;
        result[3] += 2513012;
        result[4] += 6066768;
        result[5] += 4239122;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5672598;
        result[3] += 27822744;
        result[4] += 0;
        result[5] += 9454330;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31075351;
        result[3] += 7579354;
        result[4] += 0;
        result[5] += 4294967;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2171612;
        result[1] += 120645;
        result[2] += 31609028;
        result[3] += 7118063;
        result[4] += 241290;
        result[5] += 1689032;
      } else {
        result[0] += 140818;
        result[1] += 0;
        result[2] += 41259849;
        result[3] += 1337776;
        result[4] += 0;
        result[5] += 211227;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8340673;
        result[1] += 479349;
        result[2] += 191739;
        result[3] += 1342177;
        result[4] += 27322894;
        result[5] += 5272839;
      } else {
        result[0] += 233967;
        result[1] += 100271;
        result[2] += 200543;
        result[3] += 7754337;
        result[4] += 2339670;
        result[5] += 32320882;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 28071337;
        result[1] += 2712333;
        result[2] += 2817667;
        result[3] += 2528000;
        result[4] += 4555667;
        result[5] += 2264666;
      } else {
        result[0] += 105011;
        result[1] += 42004570;
        result[2] += 0;
        result[3] += 420045;
        result[4] += 420045;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9978206;
        result[3] += 16919568;
        result[4] += 433835;
        result[5] += 15618062;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33285996;
        result[3] += 3221225;
        result[4] += 0;
        result[5] += 6442450;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 151765;
        result[1] += 607062;
        result[2] += 31870782;
        result[3] += 9409468;
        result[4] += 0;
        result[5] += 910593;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40975757;
        result[3] += 1497452;
        result[4] += 136132;
        result[5] += 340330;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 676372;
        result[1] += 2029118;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39229622;
        result[5] += 1014559;
      } else {
        result[0] += 19052862;
        result[1] += 645859;
        result[2] += 0;
        result[3] += 3229298;
        result[4] += 10010826;
        result[5] += 10010826;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 56736;
        result[3] += 851050;
        result[4] += 1985784;
        result[5] += 40056101;
      } else {
        result[0] += 743073;
        result[1] += 371536;
        result[2] += 445844;
        result[3] += 15381630;
        result[4] += 3418140;
        result[5] += 22589447;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        result[0] += 148614;
        result[1] += 33066789;
        result[2] += 594459;
        result[3] += 520151;
        result[4] += 8396735;
        result[5] += 222922;
      } else {
        result[0] += 34325378;
        result[1] += 1443109;
        result[2] += 618475;
        result[3] += 2199023;
        result[4] += 3161095;
        result[5] += 1202590;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 435300;
        result[1] += 435300;
        result[2] += 14945325;
        result[3] += 15670826;
        result[4] += 2176503;
        result[5] += 9286415;
      } else {
        result[0] += 2541919;
        result[1] += 438261;
        result[2] += 36551048;
        result[3] += 2804876;
        result[4] += 0;
        result[5] += 613566;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2278962;
        result[2] += 0;
        result[3] += 175304;
        result[4] += 39794186;
        result[5] += 701219;
      } else {
        result[0] += 2663777;
        result[1] += 688391;
        result[2] += 299300;
        result[3] += 7093430;
        result[4] += 2095105;
        result[5] += 30109666;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        result[0] += 454975;
        result[1] += 38854894;
        result[2] += 90995;
        result[3] += 90995;
        result[4] += 3093832;
        result[5] += 363980;
      } else {
        result[0] += 29707816;
        result[1] += 1266612;
        result[2] += 1410545;
        result[3] += 2705944;
        result[4] += 4490716;
        result[5] += 3368037;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5368709;
        result[3] += 28633115;
        result[4] += 0;
        result[5] += 8947848;
      } else {
        result[0] += 2386092;
        result[1] += 0;
        result[2] += 29587552;
        result[3] += 9067153;
        result[4] += 0;
        result[5] += 1908874;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 801299;
        result[1] += 0;
        result[2] += 34135374;
        result[3] += 6570658;
        result[4] += 0;
        result[5] += 1442339;
      } else {
        result[0] += 122016;
        result[1] += 0;
        result[2] += 41424471;
        result[3] += 1159153;
        result[4] += 0;
        result[5] += 244032;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5113056;
        result[1] += 639132;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32851386;
        result[5] += 4346097;
      } else {
        result[0] += 109009;
        result[1] += 254355;
        result[2] += 290691;
        result[3] += 7194615;
        result[4] += 2398205;
        result[5] += 32702796;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 279498;
        result[1] += 38664022;
        result[2] += 0;
        result[3] += 186332;
        result[4] += 3819819;
        result[5] += 0;
      } else {
        result[0] += 29576767;
        result[1] += 1078460;
        result[2] += 1186306;
        result[3] += 3558918;
        result[4] += 3909417;
        result[5] += 3639802;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4921316;
        result[3] += 29975292;
        result[4] += 0;
        result[5] += 8053063;
      } else {
        result[0] += 2095105;
        result[1] += 0;
        result[2] += 22696981;
        result[3] += 14665741;
        result[4] += 0;
        result[5] += 3491843;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33538390;
        result[3] += 7357912;
        result[4] += 0;
        result[5] += 2053370;
      } else {
        result[0] += 821741;
        result[1] += 0;
        result[2] += 40374883;
        result[3] += 1479134;
        result[4] += 54782;
        result[5] += 219130;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 480779;
        result[1] += 3044939;
        result[2] += 0;
        result[3] += 641039;
        result[4] += 36699533;
        result[5] += 2083379;
      } else {
        result[0] += 2436630;
        result[1] += 64976;
        result[2] += 162442;
        result[3] += 5815424;
        result[4] += 2111746;
        result[5] += 32358452;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 327235;
        result[1] += 34686973;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7935463;
        result[5] += 0;
      } else {
        result[0] += 34458852;
        result[1] += 693802;
        result[2] += 1123299;
        result[3] += 2015330;
        result[4] += 2742171;
        result[5] += 1916216;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3435973;
        result[3] += 26915128;
        result[4] += 1336212;
        result[5] += 11262358;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23595807;
        result[3] += 12725829;
        result[4] += 795364;
        result[5] += 5832671;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 4427801;
        result[1] += 2213900;
        result[2] += 17268425;
        result[3] += 3542241;
        result[4] += 5756141;
        result[5] += 9741162;
      } else {
        result[0] += 787642;
        result[1] += 0;
        result[2] += 38548142;
        result[3] += 3150569;
        result[4] += 92663;
        result[5] += 370655;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8756729;
        result[1] += 1042467;
        result[2] += 0;
        result[3] += 729727;
        result[4] += 27938136;
        result[5] += 4482611;
      } else {
        result[0] += 170570;
        result[1] += 136456;
        result[2] += 204684;
        result[3] += 7812132;
        result[4] += 2387988;
        result[5] += 32237840;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 27646939;
        result[1] += 2779996;
        result[2] += 2218896;
        result[3] += 2882014;
        result[4] += 4616324;
        result[5] += 2805501;
      } else {
        result[0] += 351087;
        result[1] += 42598585;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4224557;
        result[3] += 32388277;
        result[4] += 0;
        result[5] += 6336836;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24542670;
        result[3] += 18407002;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 280716;
        result[1] += 0;
        result[2] += 32422792;
        result[3] += 8140787;
        result[4] += 0;
        result[5] += 2105376;
      } else {
        result[0] += 475238;
        result[1] += 0;
        result[2] += 40811100;
        result[3] += 1366310;
        result[4] += 0;
        result[5] += 297024;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 110127;
        result[1] += 587345;
        result[2] += 256963;
        result[3] += 2826602;
        result[4] += 8222843;
        result[5] += 30945789;
      } else {
        result[0] += 11517230;
        result[1] += 1559624;
        result[2] += 0;
        result[3] += 4079019;
        result[4] += 15356307;
        result[5] += 10437490;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 24349979;
        result[1] += 2200727;
        result[2] += 3194603;
        result[3] += 5418994;
        result[4] += 3241931;
        result[5] += 4543436;
      } else {
        result[0] += 583555;
        result[1] += 42132695;
        result[2] += 0;
        result[3] += 0;
        result[4] += 233422;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 976128;
        result[2] += 4880644;
        result[3] += 27331610;
        result[4] += 1464193;
        result[5] += 8297095;
      } else {
        result[0] += 2029118;
        result[1] += 1352745;
        result[2] += 20629370;
        result[3] += 6425541;
        result[4] += 3381864;
        result[5] += 9131032;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11713547;
        result[3] += 0;
        result[4] += 3904515;
        result[5] += 27331610;
      } else {
        result[0] += 144937;
        result[1] += 0;
        result[2] += 40823929;
        result[3] += 1884181;
        result[4] += 0;
        result[5] += 96624;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7548086;
        result[1] += 212622;
        result[2] += 318933;
        result[3] += 1382043;
        result[4] += 28278745;
        result[5] += 5209242;
      } else {
        result[0] += 97171;
        result[1] += 97171;
        result[2] += 388684;
        result[3] += 7190669;
        result[4] += 2882745;
        result[5] += 32293230;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 81344;
        result[1] += 39939942;
        result[2] += 0;
        result[3] += 81344;
        result[4] += 2847042;
        result[5] += 0;
      } else {
        result[0] += 29615624;
        result[1] += 1543942;
        result[2] += 2610666;
        result[3] += 3312458;
        result[4] += 3817748;
        result[5] += 2049232;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1263225;
        result[3] += 39159995;
        result[4] += 0;
        result[5] += 2526451;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19470518;
        result[3] += 13171233;
        result[4] += 0;
        result[5] += 10307921;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1524840;
        result[1] += 0;
        result[2] += 34944260;
        result[3] += 5845221;
        result[4] += 0;
        result[5] += 635350;
      } else {
        result[0] += 72672;
        result[1] += 0;
        result[2] += 41568888;
        result[3] += 1308111;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1653182;
        result[1] += 99190;
        result[2] += 0;
        result[3] += 2149136;
        result[4] += 11175511;
        result[5] += 27872651;
      } else {
        result[0] += 3643052;
        result[1] += 671088;
        result[2] += 958698;
        result[3] += 19845049;
        result[4] += 2109135;
        result[5] += 15722648;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 1058308;
        result[1] += 38363670;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3527693;
        result[5] += 0;
      } else {
        result[0] += 29146458;
        result[1] += 1597066;
        result[2] += 3336727;
        result[3] += 2908941;
        result[4] += 4021184;
        result[5] += 1939294;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10290025;
        result[3] += 18790481;
        result[4] += 0;
        result[5] += 13869165;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31036624;
        result[3] += 6583526;
        result[4] += 0;
        result[5] += 5329521;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
        result[0] += 0;
        result[1] += 39645851;
        result[2] += 3303820;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 306783;
        result[1] += 0;
        result[2] += 39319402;
        result[3] += 3016703;
        result[4] += 51130;
        result[5] += 255652;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 414972;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42327213;
        result[5] += 207486;
      } else {
        result[0] += 1789569;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12526987;
        result[4] += 12526987;
        result[5] += 16106127;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 1357734;
        result[1] += 135773;
        result[2] += 45257;
        result[3] += 1900828;
        result[4] += 2443922;
        result[5] += 37066156;
      } else {
        result[0] += 2458398;
        result[1] += 289223;
        result[2] += 867670;
        result[3] += 17498014;
        result[4] += 1590728;
        result[5] += 20245637;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 155614;
        result[1] += 35091127;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7391700;
        result[5] += 311229;
      } else {
        result[0] += 31814572;
        result[1] += 1371317;
        result[2] += 685658;
        result[3] += 2879767;
        result[4] += 3126604;
        result[5] += 3071751;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 1069286;
        result[1] += 0;
        result[2] += 16930369;
        result[3] += 16217511;
        result[4] += 0;
        result[5] += 8732506;
      } else {
        result[0] += 755843;
        result[1] += 0;
        result[2] += 38058923;
        result[3] += 3112295;
        result[4] += 44461;
        result[5] += 978149;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
        result[0] += 0;
        result[1] += 1493901;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40522082;
        result[5] += 933688;
      } else {
        result[0] += 0;
        result[1] += 10737418;
        result[2] += 0;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 21474836;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 2078209;
        result[1] += 0;
        result[2] += 203746;
        result[3] += 2689448;
        result[4] += 3137689;
        result[5] += 34840579;
      } else {
        result[0] += 344977;
        result[1] += 172488;
        result[2] += 862443;
        result[3] += 24320899;
        result[4] += 689954;
        result[5] += 16558910;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 28961110;
        result[1] += 2154132;
        result[2] += 1196740;
        result[3] += 2686016;
        result[4] += 5425221;
        result[5] += 2526451;
      } else {
        result[0] += 675612;
        result[1] += 42274060;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1511686;
        result[1] += 889227;
        result[2] += 22319602;
        result[3] += 11826721;
        result[4] += 800304;
        result[5] += 5602131;
      } else {
        result[0] += 57883;
        result[1] += 0;
        result[2] += 40171257;
        result[3] += 1910160;
        result[4] += 0;
        result[5] += 810371;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 186332;
        result[1] += 5217313;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35589533;
        result[5] += 1956492;
      } else {
        result[0] += 0;
        result[1] += 42367961;
        result[2] += 0;
        result[3] += 0;
        result[4] += 581711;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2904383;
        result[1] += 264034;
        result[2] += 88011;
        result[3] += 2772366;
        result[4] += 1892249;
        result[5] += 35028626;
      } else {
        result[0] += 24292496;
        result[1] += 853156;
        result[2] += 2761531;
        result[3] += 6623185;
        result[4] += 2694177;
        result[5] += 5725126;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 780903;
        result[2] += 5466322;
        result[3] += 9370837;
        result[4] += 1561806;
        result[5] += 25769803;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19253301;
        result[3] += 22955859;
        result[4] += 0;
        result[5] += 740511;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 764229;
        result[1] += 305691;
        result[2] += 32250466;
        result[3] += 6878061;
        result[4] += 611383;
        result[5] += 2139841;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41403753;
        result[3] += 1545919;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6319921;
        result[1] += 2837515;
        result[2] += 0;
        result[3] += 0;
        result[4] += 29535961;
        result[5] += 4256273;
      } else {
        result[0] += 180612;
        result[1] += 361225;
        result[2] += 72245;
        result[3] += 6646543;
        result[4] += 2311841;
        result[5] += 33377205;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        result[0] += 99190;
        result[1] += 40172326;
        result[2] += 0;
        result[3] += 1289482;
        result[4] += 1289482;
        result[5] += 99190;
      } else {
        result[0] += 27280570;
        result[1] += 1760860;
        result[2] += 1505662;
        result[3] += 2960286;
        result[4] += 5971612;
        result[5] += 3470680;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1507006;
        result[3] += 30893624;
        result[4] += 0;
        result[5] += 10549042;
      } else {
        result[0] += 290200;
        result[1] += 0;
        result[2] += 20604234;
        result[3] += 16831628;
        result[4] += 0;
        result[5] += 5223608;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31952896;
        result[3] += 8091967;
        result[4] += 0;
        result[5] += 2904808;
      } else {
        result[0] += 1051602;
        result[1] += 0;
        result[2] += 40846467;
        result[3] += 940907;
        result[4] += 0;
        result[5] += 110695;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 497486;
        result[1] += 1492459;
        result[2] += 0;
        result[3] += 829144;
        result[4] += 37477320;
        result[5] += 2653261;
      } else {
        result[0] += 1085501;
        result[1] += 398017;
        result[2] += 868401;
        result[3] += 6440641;
        result[4] += 2858487;
        result[5] += 31298624;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 28283321;
        result[1] += 1923865;
        result[2] += 2598467;
        result[3] += 2848320;
        result[4] += 5072009;
        result[5] += 2223688;
      } else {
        result[0] += 516222;
        result[1] += 42433450;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 464320;
        result[2] += 5107528;
        result[3] += 19269312;
        result[4] += 4643207;
        result[5] += 13465302;
      } else {
        result[0] += 1491308;
        result[1] += 0;
        result[2] += 24457452;
        result[3] += 4175662;
        result[4] += 2386092;
        result[5] += 10439156;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 719826;
        result[1] += 0;
        result[2] += 29272961;
        result[3] += 11037346;
        result[4] += 239942;
        result[5] += 1679596;
      } else {
        result[0] += 466210;
        result[1] += 0;
        result[2] += 40851724;
        result[3] += 1573461;
        result[4] += 0;
        result[5] += 58276;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5537536;
        result[1] += 945433;
        result[2] += 0;
        result[3] += 1485680;
        result[4] += 30659043;
        result[5] += 4321979;
      } else {
        result[0] += 176602;
        result[1] += 70640;
        result[2] += 35320;
        result[3] += 6393002;
        result[4] += 1660061;
        result[5] += 34614045;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 24913064;
        result[1] += 2795674;
        result[2] += 3269135;
        result[3] += 4193511;
        result[4] += 4937521;
        result[5] += 2840765;
      } else {
        result[0] += 113623;
        result[1] += 42608802;
        result[2] += 0;
        result[3] += 0;
        result[4] += 113623;
        result[5] += 113623;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1193046;
        result[3] += 5965232;
        result[4] += 5965232;
        result[5] += 29826161;
      } else {
        result[0] += 0;
        result[1] += 968789;
        result[2] += 20344581;
        result[3] += 13885984;
        result[4] += 322929;
        result[5] += 7427387;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42890000))) ) ) {
        result[0] += 24542670;
        result[1] += 12271335;
        result[2] += 2045222;
        result[3] += 4090445;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 52441;
        result[1] += 0;
        result[2] += 39540968;
        result[3] += 2936729;
        result[4] += 0;
        result[5] += 419532;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 320519;
        result[1] += 2403899;
        result[2] += 0;
        result[3] += 480779;
        result[4] += 37500833;
        result[5] += 2243639;
      } else {
        result[0] += 2183881;
        result[1] += 151658;
        result[2] += 0;
        result[3] += 7249273;
        result[4] += 2638857;
        result[5] += 30726001;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 503316;
        result[1] += 36322672;
        result[2] += 0;
        result[3] += 335544;
        result[4] += 5452595;
        result[5] += 335544;
      } else {
        result[0] += 29162378;
        result[1] += 1376083;
        result[2] += 3757765;
        result[3] += 3493134;
        result[4] += 2910945;
        result[5] += 2249366;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8589934;
        result[3] += 1227133;
        result[4] += 1227133;
        result[5] += 31905471;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9474192;
        result[3] += 23369674;
        result[4] += 0;
        result[5] += 10105805;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33941990;
        result[3] += 6918944;
        result[4] += 130546;
        result[5] += 1958191;
      } else {
        result[0] += 298780;
        result[1] += 224085;
        result[2] += 41381076;
        result[3] += 896341;
        result[4] += 74695;
        result[5] += 74695;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
