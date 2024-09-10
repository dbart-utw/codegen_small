
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
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7090747;
        result[1] += 1350618;
        result[2] += 0;
        result[3] += 1181791;
        result[4] += 35284912;
        result[5] += 8779021;
      } else {
        result[0] += 48323;
        result[1] += 386585;
        result[2] += 0;
        result[3] += 7490098;
        result[4] += 3189332;
        result[5] += 42572751;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 909950;
        result[1] += 43768628;
        result[2] += 0;
        result[3] += 454975;
        result[4] += 8371546;
        result[5] += 181990;
      } else {
        result[0] += 35443904;
        result[1] += 1778327;
        result[2] += 3219385;
        result[3] += 5856216;
        result[4] += 4261853;
        result[5] += 3127403;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10737418;
        result[3] += 12389328;
        result[4] += 1651910;
        result[5] += 28908433;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37844998;
        result[3] += 11441511;
        result[4] += 0;
        result[5] += 4400581;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 6442450;
        result[2] += 10737418;
        result[3] += 19327352;
        result[4] += 0;
        result[5] += 17179869;
      } else {
        result[0] += 652550;
        result[1] += 0;
        result[2] += 49000593;
        result[3] += 3737333;
        result[4] += 0;
        result[5] += 296613;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8450745;
        result[1] += 1822709;
        result[2] += 0;
        result[3] += 828504;
        result[4] += 33968684;
        result[5] += 8616446;
      } else {
        result[0] += 135802;
        result[1] += 45267;
        result[2] += 497940;
        result[3] += 10185156;
        result[4] += 4345666;
        result[5] += 38477257;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 52877156;
        result[2] += 0;
        result[3] += 0;
        result[4] += 809934;
        result[5] += 0;
      } else {
        result[0] += 33108048;
        result[1] += 1603954;
        result[2] += 3631595;
        result[3] += 4297388;
        result[4] += 6718452;
        result[5] += 4327651;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 2236962;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2236962;
        result[5] += 49213166;
      } else {
        result[0] += 0;
        result[1] += 7002664;
        result[2] += 14783401;
        result[3] += 21786065;
        result[4] += 0;
        result[5] += 10114959;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 4737096;
        result[1] += 0;
        result[2] += 23685481;
        result[3] += 0;
        result[4] += 6316128;
        result[5] += 18948385;
      } else {
        result[0] += 56453;
        result[1] += 0;
        result[2] += 48606293;
        result[3] += 4742077;
        result[4] += 0;
        result[5] += 282266;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 465495;
        result[1] += 4810115;
        result[2] += 0;
        result[3] += 0;
        result[4] += 45463346;
        result[5] += 2948135;
      } else {
        result[0] += 4874447;
        result[1] += 443131;
        result[2] += 374957;
        result[3] += 9851155;
        result[4] += 3101920;
        result[5] += 35041479;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 35420882;
        result[1] += 3816266;
        result[2] += 4038573;
        result[3] += 2408323;
        result[4] += 4890749;
        result[5] += 3112295;
      } else {
        result[0] += 281084;
        result[1] += 52703296;
        result[2] += 562168;
        result[3] += 140542;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
        result[0] += 1579032;
        result[1] += 1579032;
        result[2] += 15790320;
        result[3] += 4737096;
        result[4] += 8684676;
        result[5] += 21316933;
      } else {
        result[0] += 789516;
        result[1] += 0;
        result[2] += 28027819;
        result[3] += 21711691;
        result[4] += 0;
        result[5] += 3158064;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 46976204;
        result[2] += 0;
        result[3] += 6710886;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 996512;
        result[1] += 124564;
        result[2] += 49015940;
        result[3] += 2864972;
        result[4] += 62282;
        result[5] += 622820;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 240749;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48631356;
        result[5] += 4814985;
      } else {
        result[0] += 2303406;
        result[1] += 354370;
        result[2] += 221481;
        result[3] += 8194811;
        result[4] += 2347702;
        result[5] += 40265318;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 850675;
        result[1] += 45369372;
        result[2] += 94519;
        result[3] += 94519;
        result[4] += 7278003;
        result[5] += 0;
      } else {
        result[0] += 37188622;
        result[1] += 1743740;
        result[2] += 2950945;
        result[3] += 4091083;
        result[4] += 3990483;
        result[5] += 3722215;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 2064888;
        result[2] += 1651910;
        result[3] += 23539724;
        result[4] += 4129776;
        result[5] += 22300791;
      } else {
        result[0] += 10408721;
        result[1] += 1643482;
        result[2] += 27939200;
        result[3] += 3834792;
        result[4] += 2191309;
        result[5] += 7669584;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 32679098;
        result[1] += 0;
        result[2] += 21007992;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 226527;
        result[1] += 0;
        result[2] += 47231048;
        result[3] += 5380035;
        result[4] += 0;
        result[5] += 849479;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 3463683;
        result[1] += 3078829;
        result[2] += 577280;
        result[3] += 384853;
        result[4] += 38485370;
        result[5] += 7697074;
      } else {
        result[0] += 0;
        result[1] += 455404;
        result[2] += 202401;
        result[3] += 6729861;
        result[4] += 3795034;
        result[5] += 42504388;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52056916;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1630174;
        result[5] += 0;
      } else {
        result[0] += 33762291;
        result[1] += 1900428;
        result[2] += 1336238;
        result[3] += 4810458;
        result[4] += 6473332;
        result[5] += 5404342;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14173392;
        result[3] += 25769803;
        result[4] += 0;
        result[5] += 13743895;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33159673;
        result[3] += 6316128;
        result[4] += 0;
        result[5] += 14211288;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2497074;
        result[1] += 0;
        result[2] += 42575111;
        result[3] += 6866953;
        result[4] += 249707;
        result[5] += 1498244;
      } else {
        result[0] += 191397;
        result[1] += 0;
        result[2] += 51964510;
        result[3] += 1435483;
        result[4] += 0;
        result[5] += 95698;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 950214;
        result[2] += 237553;
        result[3] += 1662874;
        result[4] += 47748253;
        result[5] += 3088195;
      } else {
        result[0] += 2126651;
        result[1] += 217005;
        result[2] += 173604;
        result[3] += 6900765;
        result[4] += 4947718;
        result[5] += 39321345;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 35353387;
        result[1] += 3535338;
        result[2] += 1939743;
        result[3] += 3848200;
        result[4] += 6163378;
        result[5] += 2847042;
      } else {
        result[0] += 128746;
        result[1] += 53429599;
        result[2] += 0;
        result[3] += 0;
        result[4] += 128746;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6403047;
        result[3] += 7388131;
        result[4] += 5910505;
        result[5] += 33985406;
      } else {
        result[0] += 0;
        result[1] += 553475;
        result[2] += 17711205;
        result[3] += 27673758;
        result[4] += 0;
        result[5] += 7748652;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 19272289;
        result[1] += 0;
        result[2] += 11012736;
        result[3] += 8259552;
        result[4] += 8259552;
        result[5] += 6882960;
      } else {
        result[0] += 490541;
        result[1] += 0;
        result[2] += 48291129;
        result[3] += 4087849;
        result[4] += 109009;
        result[5] += 708560;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 365218;
        result[1] += 365218;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48574034;
        result[5] += 4382619;
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
        result[0] += 2584152;
        result[1] += 210951;
        result[2] += 105475;
        result[3] += 3638908;
        result[4] += 2267725;
        result[5] += 44879876;
      } else {
        result[0] += 0;
        result[1] += 438261;
        result[2] += 219130;
        result[3] += 29801813;
        result[4] += 876523;
        result[5] += 22351360;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 200699;
        result[1] += 49572753;
        result[2] += 200699;
        result[3] += 100349;
        result[4] += 3612589;
        result[5] += 0;
      } else {
        result[0] += 39045157;
        result[1] += 1373811;
        result[2] += 1156893;
        result[3] += 3868362;
        result[4] += 5639856;
        result[5] += 2603010;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19500692;
        result[3] += 22630433;
        result[4] += 962997;
        result[5] += 10592968;
      } else {
        result[0] += 1529396;
        result[1] += 685591;
        result[2] += 45459992;
        result[3] += 3797122;
        result[4] += 369164;
        result[5] += 1845823;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7263547;
        result[1] += 315806;
        result[2] += 473709;
        result[3] += 1894838;
        result[4] += 36949350;
        result[5] += 6789838;
      } else {
        result[0] += 0;
        result[1] += 227487;
        result[2] += 227487;
        result[3] += 9281497;
        result[4] += 2820847;
        result[5] += 41129771;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 201831;
        result[1] += 50457792;
        result[2] += 201831;
        result[3] += 0;
        result[4] += 2825636;
        result[5] += 0;
      } else {
        result[0] += 34161607;
        result[1] += 1981309;
        result[2] += 2844137;
        result[3] += 5113056;
        result[4] += 5432622;
        result[5] += 4154358;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7793287;
        result[3] += 34636833;
        result[4] += 0;
        result[5] += 11256970;
      } else {
        result[0] += 2706912;
        result[1] += 0;
        result[2] += 38347922;
        result[3] += 10376496;
        result[4] += 451152;
        result[5] += 1804608;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1244918;
        result[1] += 0;
        result[2] += 44972664;
        result[3] += 5757746;
        result[4] += 0;
        result[5] += 1711762;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52363817;
        result[3] += 1228753;
        result[4] += 0;
        result[5] += 94519;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 182609;
        result[1] += 3286964;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47843598;
        result[5] += 2373918;
      } else {
        result[0] += 2276806;
        result[1] += 683041;
        result[2] += 273216;
        result[3] += 7513460;
        result[4] += 2140197;
        result[5] += 40800367;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42660000))) ) ) {
        result[0] += 442780;
        result[1] += 48595119;
        result[2] += 332085;
        result[3] += 0;
        result[4] += 3763631;
        result[5] += 553475;
      } else {
        result[0] += 34632038;
        result[1] += 1843078;
        result[2] += 2288984;
        result[3] += 4221244;
        result[4] += 5648143;
        result[5] += 5053602;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13657242;
        result[3] += 25901666;
        result[4] += 941878;
        result[5] += 13186303;
      } else {
        result[0] += 2147483;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 6442450;
        result[4] += 0;
        result[5] += 2147483;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 796544;
        result[1] += 0;
        result[2] += 44606485;
        result[3] += 6213046;
        result[4] += 0;
        result[5] += 2071015;
      } else {
        result[0] += 191397;
        result[1] += 0;
        result[2] += 51964510;
        result[3] += 1531182;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6976288;
        result[1] += 909950;
        result[2] += 909950;
        result[3] += 0;
        result[4] += 40037830;
        result[5] += 4853070;
      } else {
        result[0] += 47301;
        result[1] += 520315;
        result[2] += 236507;
        result[3] += 10690116;
        result[4] += 2885385;
        result[5] += 39307465;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 52866546;
        result[2] += 0;
        result[3] += 0;
        result[4] += 820545;
        result[5] += 0;
      } else {
        result[0] += 33394994;
        result[1] += 1826288;
        result[2] += 3884487;
        result[3] += 4116396;
        result[4] += 6493471;
        result[5] += 3971453;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2440322;
        result[3] += 2440322;
        result[4] += 0;
        result[5] += 48806446;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 19426250;
        result[4] += 0;
        result[5] += 7417295;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 21474836;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
        result[5] += 10737418;
      } else {
        result[0] += 254743;
        result[1] += 0;
        result[2] += 49802260;
        result[3] += 2993230;
        result[4] += 0;
        result[5] += 636857;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 816533;
        result[2] += 0;
        result[3] += 408266;
        result[4] += 47563088;
        result[5] += 4899202;
      } else {
        result[0] += 2185419;
        result[1] += 700983;
        result[2] += 700983;
        result[3] += 7999459;
        result[4] += 3257511;
        result[5] += 38842734;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 589968;
        result[1] += 45132554;
        result[2] += 98328;
        result[3] += 491640;
        result[4] += 7276272;
        result[5] += 98328;
      } else {
        result[0] += 38014907;
        result[1] += 1936608;
        result[2] += 2582144;
        result[3] += 3765627;
        result[4] += 3873216;
        result[5] += 3514585;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42870000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3067833;
        result[3] += 0;
        result[4] += 4601750;
        result[5] += 46017506;
      } else {
        result[0] += 0;
        result[1] += 735439;
        result[2] += 8457555;
        result[3] += 25372666;
        result[4] += 3309478;
        result[5] += 15811951;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 2013265;
        result[1] += 2013265;
        result[2] += 17448304;
        result[3] += 14763950;
        result[4] += 2684354;
        result[5] += 14763950;
      } else {
        result[0] += 617093;
        result[1] += 0;
        result[2] += 49255241;
        result[3] += 3197663;
        result[4] += 280496;
        result[5] += 336596;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 14485384;
        result[1] += 4457041;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31199290;
        result[5] += 3545373;
      } else {
        result[0] += 881561;
        result[1] += 220390;
        result[2] += 1851279;
        result[3] += 7272881;
        result[4] += 4804509;
        result[5] += 38656468;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        result[0] += 235987;
        result[1] += 47433430;
        result[2] += 353980;
        result[3] += 117993;
        result[4] += 5309712;
        result[5] += 235987;
      } else {
        result[0] += 35779573;
        result[1] += 2198546;
        result[2] += 3226899;
        result[3] += 6382877;
        result[4] += 2978676;
        result[5] += 3120517;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1154561;
        result[3] += 16741135;
        result[4] += 2309122;
        result[5] += 33482271;
      } else {
        result[0] += 2284557;
        result[1] += 856708;
        result[2] += 28271393;
        result[3] += 11137215;
        result[4] += 3712405;
        result[5] += 7424810;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39505595;
        result[3] += 12493222;
        result[4] += 0;
        result[5] += 1688273;
      } else {
        result[0] += 641998;
        result[1] += 0;
        result[2] += 51038849;
        result[3] += 1845744;
        result[4] += 0;
        result[5] += 160499;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 619466;
        result[1] += 1238932;
        result[2] += 0;
        result[3] += 825955;
        result[4] += 48111893;
        result[5] += 2890843;
      } else {
        result[0] += 2692391;
        result[1] += 1366288;
        result[2] += 803698;
        result[3] += 8036989;
        result[4] += 2210172;
        result[5] += 38577550;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 258732;
        result[1] += 51099761;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2328596;
        result[5] += 0;
      } else {
        result[0] += 33880821;
        result[1] += 1146343;
        result[2] += 3566402;
        result[3] += 4521688;
        result[4] += 7228333;
        result[5] += 3343502;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2718333;
        result[3] += 21746669;
        result[4] += 3397917;
        result[5] += 25824170;
      } else {
        result[0] += 1677721;
        result[1] += 1677721;
        result[2] += 27682406;
        result[3] += 9227468;
        result[4] += 838860;
        result[5] += 12582911;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 1872805;
        result[1] += 3745611;
        result[2] += 24346471;
        result[3] += 10612564;
        result[4] += 2497074;
        result[5] += 10612564;
      } else {
        result[0] += 596523;
        result[1] += 0;
        result[2] += 49869342;
        result[3] += 3101920;
        result[4] += 0;
        result[5] += 119304;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 625723;
        result[1] += 4004631;
        result[2] += 0;
        result[3] += 0;
        result[4] += 44801815;
        result[5] += 4254920;
      } else {
        result[0] += 0;
        result[1] += 52751368;
        result[2] += 0;
        result[3] += 0;
        result[4] += 935722;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        result[0] += 2060037;
        result[1] += 252249;
        result[2] += 42041;
        result[3] += 9165063;
        result[4] += 2270245;
        result[5] += 39897454;
      } else {
        result[0] += 35290815;
        result[1] += 1331084;
        result[2] += 3515429;
        result[3] += 5017166;
        result[4] += 3959124;
        result[5] += 4573471;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5651272;
        result[3] += 33907636;
        result[4] += 0;
        result[5] += 14128181;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32995191;
        result[3] += 10625570;
        result[4] += 559240;
        result[5] += 9507089;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 986895;
        result[1] += 0;
        result[2] += 43818140;
        result[3] += 7697781;
        result[4] += 0;
        result[5] += 1184274;
      } else {
        result[0] += 566832;
        result[1] += 0;
        result[2] += 50448050;
        result[3] += 2591232;
        result[4] += 0;
        result[5] += 80976;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1964161;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50413488;
        result[5] += 1309441;
      } else {
        result[0] += 1301777;
        result[1] += 493777;
        result[2] += 403999;
        result[3] += 8753330;
        result[4] += 3905331;
        result[5] += 38828874;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 51318543;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2368548;
        result[5] += 0;
      } else {
        result[0] += 36326232;
        result[1] += 1283612;
        result[2] += 1732876;
        result[3] += 3562024;
        result[4] += 6642694;
        result[5] += 4139650;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2618882;
        result[3] += 1309441;
        result[4] += 7856647;
        result[5] += 41902119;
      } else {
        result[0] += 0;
        result[1] += 694229;
        result[2] += 14578822;
        result[3] += 25223676;
        result[4] += 925639;
        result[5] += 12264723;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 20878313;
        result[1] += 8947848;
        result[2] += 8947848;
        result[3] += 2982616;
        result[4] += 5965232;
        result[5] += 5965232;
      } else {
        result[0] += 568719;
        result[1] += 0;
        result[2] += 49592313;
        result[3] += 2672980;
        result[4] += 56871;
        result[5] += 796206;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6346397;
        result[1] += 171524;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41851917;
        result[5] += 5317251;
      } else {
        result[0] += 0;
        result[1] += 277931;
        result[2] += 324253;
        result[3] += 8476909;
        result[4] += 3520464;
        result[5] += 41087532;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 31775822;
        result[1] += 2959366;
        result[2] += 3706681;
        result[3] += 5171418;
        result[4] += 6127980;
        result[5] += 3945821;
      } else {
        result[0] += 366882;
        result[1] += 52953326;
        result[2] += 0;
        result[3] += 122294;
        result[4] += 244588;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14128181;
        result[3] += 5651272;
        result[4] += 2825636;
        result[5] += 31082000;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1988410;
        result[3] += 47721858;
        result[4] += 0;
        result[5] += 3976821;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 30910749;
        result[1] += 3253763;
        result[2] += 13015052;
        result[3] += 1626881;
        result[4] += 0;
        result[5] += 4880644;
      } else {
        result[0] += 535799;
        result[1] += 428639;
        result[2] += 48061198;
        result[3] += 3750595;
        result[4] += 0;
        result[5] += 910858;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 222768;
        result[1] += 2004912;
        result[2] += 0;
        result[3] += 1782144;
        result[4] += 47672354;
        result[5] += 2004912;
      } else {
        result[0] += 2948952;
        result[1] += 807932;
        result[2] += 1373484;
        result[3] += 8887253;
        result[4] += 4160850;
        result[5] += 35508617;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 50894121;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2792970;
        result[5] += 0;
      } else {
        result[0] += 35458760;
        result[1] += 1430325;
        result[2] += 2794123;
        result[3] += 3625708;
        result[4] += 5022769;
        result[5] += 5355403;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1451002;
        result[3] += 0;
        result[4] += 8706014;
        result[5] += 43530073;
      } else {
        result[0] += 0;
        result[1] += 8012998;
        result[2] += 8012998;
        result[3] += 20833796;
        result[4] += 0;
        result[5] += 16827297;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 1095654;
        result[1] += 0;
        result[2] += 25747890;
        result[3] += 21365270;
        result[4] += 547827;
        result[5] += 4930447;
      } else {
        result[0] += 1107551;
        result[1] += 0;
        result[2] += 48499087;
        result[3] += 3497530;
        result[4] += 0;
        result[5] += 582921;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 657392;
        result[1] += 1753047;
        result[2] += 438261;
        result[3] += 438261;
        result[4] += 46674899;
        result[5] += 3725226;
      } else {
        result[0] += 2319812;
        result[1] += 828504;
        result[2] += 207126;
        result[3] += 8036493;
        result[4] += 2319812;
        result[5] += 39975341;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 32850180;
        result[1] += 2384768;
        result[2] += 2593435;
        result[3] += 4322392;
        result[4] += 7184113;
        result[5] += 4352201;
      } else {
        result[0] += 116965;
        result[1] += 52634403;
        result[2] += 350896;
        result[3] += 233930;
        result[4] += 350896;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5113056;
        result[3] += 33234865;
        result[4] += 0;
        result[5] += 15339168;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32051994;
        result[3] += 11218198;
        result[4] += 0;
        result[5] += 10416898;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2091704;
        result[1] += 0;
        result[2] += 44274419;
        result[3] += 5926497;
        result[4] += 0;
        result[5] += 1394469;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52362574;
        result[3] += 1236215;
        result[4] += 0;
        result[5] += 88301;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9775395;
        result[1] += 2792970;
        result[2] += 0;
        result[3] += 930990;
        result[4] += 35067290;
        result[5] += 5120445;
      } else {
        result[0] += 334053;
        result[1] += 47721;
        result[2] += 477218;
        result[3] += 7349166;
        result[4] += 2911033;
        result[5] += 42567898;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 51855548;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1831542;
        result[5] += 0;
      } else {
        result[0] += 34870517;
        result[1] += 1227835;
        result[2] += 2824020;
        result[3] += 4512294;
        result[4] += 7029356;
        result[5] += 3223067;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 838860;
        result[1] += 4194303;
        result[2] += 1677721;
        result[3] += 33554431;
        result[4] += 838860;
        result[5] += 12582911;
      } else {
        result[0] += 0;
        result[1] += 950214;
        result[2] += 21854922;
        result[3] += 8076819;
        result[4] += 2375535;
        result[5] += 20429601;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 634099;
        result[1] += 0;
        result[2] += 40371001;
        result[3] += 10356958;
        result[4] += 422733;
        result[5] += 1902298;
      } else {
        result[0] += 760440;
        result[1] += 380220;
        result[2] += 50493241;
        result[3] += 1368792;
        result[4] += 152088;
        result[5] += 532308;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 396214;
        result[1] += 1981073;
        result[2] += 0;
        result[3] += 0;
        result[4] += 46951441;
        result[5] += 4358361;
      } else {
        result[0] += 2183126;
        result[1] += 445536;
        result[2] += 44553;
        result[3] += 7885987;
        result[4] += 3876163;
        result[5] += 39251723;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 33107039;
        result[1] += 3483269;
        result[2] += 2971963;
        result[3] += 3675009;
        result[4] += 7445888;
        result[5] += 3003920;
      } else {
        result[0] += 272523;
        result[1] += 52188213;
        result[2] += 0;
        result[3] += 0;
        result[4] += 545046;
        result[5] += 681308;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 1006632;
        result[2] += 4026531;
        result[3] += 18454937;
        result[4] += 4026531;
        result[5] += 26172456;
      } else {
        result[0] += 17134178;
        result[1] += 3426835;
        result[2] += 22464811;
        result[3] += 7615190;
        result[4] += 380759;
        result[5] += 2665316;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30910749;
        result[3] += 14641933;
        result[4] += 0;
        result[5] += 8134407;
      } else {
        result[0] += 177185;
        result[1] += 0;
        result[2] += 49848080;
        result[3] += 3366517;
        result[4] += 0;
        result[5] += 295308;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 561189;
        result[1] += 1309441;
        result[2] += 0;
        result[3] += 0;
        result[4] += 46765758;
        result[5] += 5050701;
      } else {
        result[0] += 2268468;
        result[1] += 222398;
        result[2] += 1111994;
        result[3] += 8406677;
        result[4] += 2579827;
        result[5] += 39097724;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 53453160;
        result[2] += 0;
        result[3] += 0;
        result[4] += 233930;
        result[5] += 0;
      } else {
        result[0] += 33214495;
        result[1] += 1375025;
        result[2] += 3452840;
        result[3] += 4888978;
        result[4] += 6172334;
        result[5] += 4583417;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10280506;
        result[3] += 1142278;
        result[4] += 6853671;
        result[5] += 35410634;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6479476;
        result[3] += 38876859;
        result[4] += 925639;
        result[5] += 7405116;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 4319651;
        result[1] += 2468372;
        result[2] += 28694824;
        result[3] += 12341860;
        result[4] += 308546;
        result[5] += 5553837;
      } else {
        result[0] += 384853;
        result[1] += 0;
        result[2] += 50479977;
        result[3] += 2565691;
        result[4] += 0;
        result[5] += 256569;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 230416;
        result[2] += 460833;
        result[3] += 0;
        result[4] += 49078757;
        result[5] += 3917083;
      } else {
        result[0] += 2266147;
        result[1] += 1194877;
        result[2] += 535634;
        result[3] += 7952117;
        result[4] += 2554566;
        result[5] += 39183748;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51975948;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1711142;
        result[5] += 0;
      } else {
        result[0] += 32916041;
        result[1] += 1712755;
        result[2] += 3269805;
        result[3] += 4546586;
        result[4] += 7037866;
        result[5] += 4204035;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3463683;
        result[3] += 1731841;
        result[4] += 12122891;
        result[5] += 36368674;
      } else {
        result[0] += 917728;
        result[1] += 458864;
        result[2] += 24778657;
        result[3] += 21566609;
        result[4] += 0;
        result[5] += 5965232;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1118481;
        result[1] += 0;
        result[2] += 44040191;
        result[3] += 7549747;
        result[4] += 139810;
        result[5] += 838860;
      } else {
        result[0] += 302746;
        result[1] += 0;
        result[2] += 52072441;
        result[3] += 1210987;
        result[4] += 0;
        result[5] += 100915;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 735439;
        result[1] += 245146;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48293867;
        result[5] += 4412637;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3463683;
        result[4] += 32904991;
        result[5] += 17318416;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 390167;
        result[1] += 0;
        result[2] += 156067;
        result[3] += 1170503;
        result[4] += 3199376;
        result[5] += 48770976;
      } else {
        result[0] += 4659634;
        result[1] += 810371;
        result[2] += 506481;
        result[3] += 17321684;
        result[4] += 4051855;
        result[5] += 26337063;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 100915;
        result[1] += 48641311;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4944863;
        result[5] += 0;
      } else {
        result[0] += 40695963;
        result[1] += 1435483;
        result[2] += 1148386;
        result[3] += 2942741;
        result[4] += 5167741;
        result[5] += 2296773;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 1689453;
        result[2] += 16706822;
        result[3] += 17645407;
        result[4] += 1501736;
        result[5] += 16143670;
      } else {
        result[0] += 1093423;
        result[1] += 218684;
        result[2] += 47673262;
        result[3] += 3061585;
        result[4] += 382698;
        result[5] += 1257436;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1170746;
        result[1] += 334499;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48669606;
        result[5] += 3512239;
      } else {
        result[0] += 0;
        result[1] += 3463683;
        result[2] += 8659208;
        result[3] += 8659208;
        result[4] += 8659208;
        result[5] += 24245783;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 152954;
        result[1] += 0;
        result[2] += 305909;
        result[3] += 994205;
        result[4] += 994205;
        result[5] += 51239816;
      } else {
        result[0] += 5749029;
        result[1] += 619126;
        result[2] += 530679;
        result[3] += 17070195;
        result[4] += 4068543;
        result[5] += 25649516;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 514244;
        result[1] += 48133254;
        result[2] += 0;
        result[3] += 102848;
        result[4] += 4628197;
        result[5] += 308546;
      } else {
        result[0] += 39864383;
        result[1] += 2558346;
        result[2] += 1794660;
        result[3] += 3131110;
        result[4] += 4887587;
        result[5] += 1451002;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1242756;
        result[1] += 3231167;
        result[2] += 16155837;
        result[3] += 19635556;
        result[4] += 248551;
        result[5] += 13173221;
      } else {
        result[0] += 2839473;
        result[1] += 0;
        result[2] += 46588406;
        result[3] += 3575633;
        result[4] += 105165;
        result[5] += 578411;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 171524;
        result[1] += 2401339;
        result[2] += 0;
        result[3] += 0;
        result[4] += 46140024;
        result[5] += 4974203;
      } else {
        result[0] += 1960358;
        result[1] += 356428;
        result[2] += 801964;
        result[3] += 8687952;
        result[4] += 2004912;
        result[5] += 39875474;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51352869;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2334221;
        result[5] += 0;
      } else {
        result[0] += 33323022;
        result[1] += 1725768;
        result[2] += 3388781;
        result[3] += 4016334;
        result[4] += 7154095;
        result[5] += 4079089;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 2334221;
        result[1] += 10114959;
        result[2] += 3112295;
        result[3] += 5446516;
        result[4] += 7780737;
        result[5] += 24898361;
      } else {
        result[0] += 950214;
        result[1] += 475107;
        result[2] += 25655778;
        result[3] += 18766726;
        result[4] += 0;
        result[5] += 7839265;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11930464;
        result[3] += 5965232;
        result[4] += 0;
        result[5] += 35791394;
      } else {
        result[0] += 322251;
        result[1] += 0;
        result[2] += 49948974;
        result[3] += 3286964;
        result[4] += 0;
        result[5] += 128900;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 189707;
        result[1] += 2086777;
        result[2] += 0;
        result[3] += 948535;
        result[4] += 46857637;
        result[5] += 3604433;
      } else {
        result[0] += 2310115;
        result[1] += 184809;
        result[2] += 0;
        result[3] += 7808191;
        result[4] += 3280364;
        result[5] += 40103610;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 50022105;
        result[2] += 0;
        result[3] += 198107;
        result[4] += 3367824;
        result[5] += 99053;
      } else {
        result[0] += 36726073;
        result[1] += 1949149;
        result[2] += 1778171;
        result[3] += 4137667;
        result[4] += 6086816;
        result[5] += 3009212;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2334221;
        result[3] += 19607459;
        result[4] += 1867377;
        result[5] += 29878033;
      } else {
        result[0] += 0;
        result[1] += 1894838;
        result[2] += 32528061;
        result[3] += 11053224;
        result[4] += 315806;
        result[5] += 7895160;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1855277;
        result[1] += 115954;
        result[2] += 42323516;
        result[3] += 7653019;
        result[4] += 115954;
        result[5] += 1623367;
      } else {
        result[0] += 309138;
        result[1] += 0;
        result[2] += 52244443;
        result[3] += 927416;
        result[4] += 0;
        result[5] += 206092;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 361529;
        result[1] += 361529;
        result[2] += 0;
        result[3] += 1265352;
        result[4] += 43564272;
        result[5] += 8134407;
      } else {
        result[0] += 1975404;
        result[1] += 351182;
        result[2] += 131693;
        result[3] += 8121105;
        result[4] += 3160646;
        result[5] += 39947058;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52929410;
        result[2] += 0;
        result[3] += 108240;
        result[4] += 649440;
        result[5] += 0;
      } else {
        result[0] += 34086555;
        result[1] += 2541944;
        result[2] += 3338216;
        result[3] += 4624501;
        result[4] += 5757657;
        result[5] += 3338216;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11632203;
        result[3] += 25948760;
        result[4] += 0;
        result[5] += 16106127;
      } else {
        result[0] += 3702558;
        result[1] += 1481023;
        result[2] += 37025580;
        result[3] += 3702558;
        result[4] += 0;
        result[5] += 7775371;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20452225;
        result[3] += 15339168;
        result[4] += 7669584;
        result[5] += 10226112;
      } else {
        result[0] += 129210;
        result[1] += 0;
        result[2] += 50263004;
        result[3] += 2907243;
        result[4] += 0;
        result[5] += 387632;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 215610;
        result[3] += 1078054;
        result[4] += 48296820;
        result[5] += 4096605;
      } else {
        result[0] += 747879;
        result[1] += 53419;
        result[2] += 213679;
        result[3] += 5181739;
        result[4] += 3472299;
        result[5] += 44018072;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51236158;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2450932;
        result[5] += 0;
      } else {
        result[0] += 33275971;
        result[1] += 1392300;
        result[2] += 2032758;
        result[3] += 5569200;
        result[4] += 6460272;
        result[5] += 4956588;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 299927;
        result[1] += 2699350;
        result[2] += 6598413;
        result[3] += 28193221;
        result[4] += 1799567;
        result[5] += 14096610;
      } else {
        result[0] += 2368548;
        result[1] += 0;
        result[2] += 33949190;
        result[3] += 7895160;
        result[4] += 2368548;
        result[5] += 7105644;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2662169;
        result[1] += 147898;
        result[2] += 41855225;
        result[3] += 7690712;
        result[4] += 147898;
        result[5] += 1183186;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52284118;
        result[3] += 1402972;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8129759;
        result[1] += 460175;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41722539;
        result[5] += 3374617;
      } else {
        result[0] += 92166;
        result[1] += 230416;
        result[2] += 184333;
        result[3] += 8709751;
        result[4] += 2995417;
        result[5] += 41475006;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 317675;
        result[1] += 51886932;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1482483;
        result[5] += 0;
      } else {
        result[0] += 33967285;
        result[1] += 2137121;
        result[2] += 3140921;
        result[3] += 4403766;
        result[4] += 6443746;
        result[5] += 3594250;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2556528;
        result[4] += 0;
        result[5] += 51130563;
      } else {
        result[0] += 0;
        result[1] += 1234186;
        result[2] += 9873488;
        result[3] += 26534999;
        result[4] += 0;
        result[5] += 16044418;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 236507;
        result[1] += 1655549;
        result[2] += 31455432;
        result[3] += 11115829;
        result[4] += 2365070;
        result[5] += 6858703;
      } else {
        result[0] += 595787;
        result[1] += 0;
        result[2] += 50310960;
        result[3] += 2647945;
        result[4] += 0;
        result[5] += 132397;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5850516;
        result[1] += 1720740;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39921170;
        result[5] += 6194664;
      } else {
        result[0] += 50221;
        result[1] += 251108;
        result[2] += 351552;
        result[3] += 6327945;
        result[4] += 3264416;
        result[5] += 43441846;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 114471;
        result[1] += 52313434;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1259185;
        result[5] += 0;
      } else {
        result[0] += 31000055;
        result[1] += 2029600;
        result[2] += 2863682;
        result[3] += 5977589;
        result[4] += 6088800;
        result[5] += 5727364;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 7953643;
        result[2] += 6628035;
        result[3] += 13918875;
        result[4] += 662803;
        result[5] += 24523733;
      } else {
        result[0] += 2556528;
        result[1] += 0;
        result[2] += 40904450;
        result[3] += 7669584;
        result[4] += 0;
        result[5] += 2556528;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 403662;
        result[1] += 0;
        result[2] += 41779052;
        result[3] += 10495220;
        result[4] += 0;
        result[5] += 1009155;
      } else {
        result[0] += 163680;
        result[1] += 0;
        result[2] += 51313728;
        result[3] += 2046001;
        result[4] += 0;
        result[5] += 163680;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1851279;
        result[2] += 0;
        result[3] += 925639;
        result[4] += 47022486;
        result[5] += 3887685;
      } else {
        result[0] += 2165809;
        result[1] += 83300;
        result[2] += 83300;
        result[3] += 7955185;
        result[4] += 2540661;
        result[5] += 40858833;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 50006927;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3680163;
        result[5] += 0;
      } else {
        result[0] += 33146499;
        result[1] += 1663723;
        result[2] += 3295453;
        result[3] += 5279123;
        result[4] += 6686890;
        result[5] += 3615400;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20971519;
        result[3] += 24326963;
        result[4] += 0;
        result[5] += 8388607;
      } else {
        result[0] += 3355443;
        result[1] += 0;
        result[2] += 37748735;
        result[3] += 7549747;
        result[4] += 1677721;
        result[5] += 3355443;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        result[0] += 550950;
        result[1] += 0;
        result[2] += 50014086;
        result[3] += 2387453;
        result[4] += 0;
        result[5] += 734601;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 789516;
        result[1] += 1381653;
        result[2] += 394758;
        result[3] += 0;
        result[4] += 48357857;
        result[5] += 2763306;
      } else {
        result[0] += 1975954;
        result[1] += 420415;
        result[2] += 966956;
        result[3] += 8912813;
        result[4] += 3657617;
        result[5] += 37753334;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 561189;
        result[1] += 44521002;
        result[2] += 0;
        result[3] += 374126;
        result[4] += 8230773;
        result[5] += 0;
      } else {
        result[0] += 35652585;
        result[1] += 1281314;
        result[2] += 3395484;
        result[3] += 4452569;
        result[4] += 4324437;
        result[5] += 4580700;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 631612;
        result[1] += 5684515;
        result[2] += 6316128;
        result[3] += 22106449;
        result[4] += 631612;
        result[5] += 18316772;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 46976204;
        result[3] += 0;
        result[4] += 0;
        result[5] += 6710886;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37472869;
        result[3] += 13331693;
        result[4] += 0;
        result[5] += 2882528;
      } else {
        result[0] += 621858;
        result[1] += 0;
        result[2] += 50992372;
        result[3] += 1727383;
        result[4] += 0;
        result[5] += 345476;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 835596;
        result[1] += 626697;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48255712;
        result[5] += 3969084;
      } else {
        result[0] += 2992541;
        result[1] += 1161284;
        result[2] += 625307;
        result[3] += 7861005;
        result[4] += 2501228;
        result[5] += 38545723;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        result[0] += 120645;
        result[1] += 52359994;
        result[2] += 0;
        result[3] += 361935;
        result[4] += 844516;
        result[5] += 0;
      } else {
        result[0] += 33751692;
        result[1] += 2544259;
        result[2] += 2544259;
        result[3] += 3961315;
        result[4] += 7664983;
        result[5] += 3220581;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1731841;
        result[3] += 22513941;
        result[4] += 4849156;
        result[5] += 24592151;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32461962;
        result[3] += 12485370;
        result[4] += 0;
        result[5] += 8739759;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 3278600;
        result[1] += 409825;
        result[2] += 27868108;
        result[3] += 13114403;
        result[4] += 2868775;
        result[5] += 6147376;
      } else {
        result[0] += 521796;
        result[1] += 57977;
        result[2] += 49570694;
        result[3] += 3478645;
        result[4] += 0;
        result[5] += 57977;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10471932;
        result[1] += 147492;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37167986;
        result[5] += 5899680;
      } else {
        result[0] += 0;
        result[1] += 215784;
        result[2] += 388411;
        result[3] += 9753442;
        result[4] += 2848350;
        result[5] += 40481102;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 35745478;
        result[1] += 3340377;
        result[2] += 2341707;
        result[3] += 3822493;
        result[4] += 5854269;
        result[5] += 2582765;
      } else {
        result[0] += 0;
        result[1] += 53568314;
        result[2] += 0;
        result[3] += 0;
        result[4] += 118776;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1278264;
        result[3] += 1278264;
        result[4] += 11504376;
        result[5] += 39626186;
      } else {
        result[0] += 0;
        result[1] += 789516;
        result[2] += 17369353;
        result[3] += 26054029;
        result[4] += 0;
        result[5] += 9474192;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        result[0] += 20951059;
        result[1] += 3928323;
        result[2] += 22260501;
        result[3] += 0;
        result[4] += 1964161;
        result[5] += 4583044;
      } else {
        result[0] += 183232;
        result[1] += 61077;
        result[2] += 49106281;
        result[3] += 3847880;
        result[4] += 0;
        result[5] += 488619;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 220934;
        result[1] += 2872148;
        result[2] += 441869;
        result[3] += 441869;
        result[4] += 46396251;
        result[5] += 3314017;
      } else {
        result[0] += 2291248;
        result[1] += 718822;
        result[2] += 179705;
        result[3] += 7278082;
        result[4] += 3144850;
        result[5] += 40074381;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 327360;
        result[1] += 51395569;
        result[2] += 327360;
        result[3] += 545600;
        result[4] += 1091201;
        result[5] += 0;
      } else {
        result[0] += 36729942;
        result[1] += 1993097;
        result[2] += 1107276;
        result[3] += 2942191;
        result[4] += 7497843;
        result[5] += 3416738;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 4818072;
        result[2] += 3441480;
        result[3] += 15830808;
        result[4] += 688296;
        result[5] += 28908433;
      } else {
        result[0] += 1063110;
        result[1] += 0;
        result[2] += 27109323;
        result[3] += 19667548;
        result[4] += 1594666;
        result[5] += 4252442;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2031403;
        result[1] += 0;
        result[2] += 42804572;
        result[3] += 7109912;
        result[4] += 0;
        result[5] += 1741202;
      } else {
        result[0] += 93858;
        result[1] += 0;
        result[2] += 52091495;
        result[3] += 1314019;
        result[4] += 0;
        result[5] += 187717;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 405185;
        result[1] += 202592;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48824864;
        result[5] += 4254448;
      } else {
        result[0] += 2125379;
        result[1] += 807644;
        result[2] += 340060;
        result[3] += 9011609;
        result[4] += 2422932;
        result[5] += 38979463;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 96386;
        result[1] += 45397881;
        result[2] += 0;
        result[3] += 192772;
        result[4] += 7710892;
        result[5] += 289158;
      } else {
        result[0] += 34402662;
        result[1] += 1514979;
        result[2] += 3250893;
        result[3] += 4702749;
        result[4] += 5870546;
        result[5] += 3945259;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3463683;
        result[3] += 8659208;
        result[4] += 1731841;
        result[5] += 39832357;
      } else {
        result[0] += 852176;
        result[1] += 5965232;
        result[2] += 24713105;
        result[3] += 11930464;
        result[4] += 0;
        result[5] += 10226112;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25200063;
        result[3] += 28487027;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 957629;
        result[1] += 0;
        result[2] += 48300426;
        result[3] += 3591109;
        result[4] += 0;
        result[5] += 837925;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7780737;
        result[1] += 155614;
        result[2] += 0;
        result[3] += 2178606;
        result[4] += 38125615;
        result[5] += 5446516;
      } else {
        result[0] += 0;
        result[1] += 96820;
        result[2] += 48410;
        result[3] += 7939299;
        result[4] += 2517338;
        result[5] += 43085221;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 33220575;
        result[1] += 3211022;
        result[2] += 3301050;
        result[3] += 4351385;
        result[4] += 6001910;
        result[5] += 3601146;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 5219578;
        result[2] += 5965232;
        result[3] += 1491308;
        result[4] += 6710886;
        result[5] += 34300086;
      } else {
        result[0] += 256876;
        result[1] += 0;
        result[2] += 19008826;
        result[3] += 23632595;
        result[4] += 1284380;
        result[5] += 9504413;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1217394;
        result[1] += 0;
        result[2] += 48878383;
        result[3] += 3469573;
        result[4] += 60869;
        result[5] += 60869;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 15658734;
        result[1] += 508400;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32740991;
        result[5] += 4778964;
      } else {
        result[0] += 394758;
        result[1] += 131586;
        result[2] += 219310;
        result[3] += 6140680;
        result[4] += 4430062;
        result[5] += 42370694;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 53465243;
        result[2] += 0;
        result[3] += 110923;
        result[4] += 110923;
        result[5] += 0;
      } else {
        result[0] += 34282519;
        result[1] += 1164939;
        result[2] += 4027363;
        result[3] += 6723367;
        result[4] += 3727807;
        result[5] += 3761091;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 2941758;
        result[2] += 10296154;
        result[3] += 10296154;
        result[4] += 735439;
        result[5] += 29417584;
      } else {
        result[0] += 4737096;
        result[1] += 1579032;
        result[2] += 36317738;
        result[3] += 4737096;
        result[4] += 0;
        result[5] += 6316128;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14454216;
        result[3] += 20648881;
        result[4] += 0;
        result[5] += 18583993;
      } else {
        result[0] += 254441;
        result[1] += 0;
        result[2] += 49552421;
        result[3] += 3434956;
        result[4] += 0;
        result[5] += 445272;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 171524;
        result[2] += 0;
        result[3] += 2572863;
        result[4] += 46997645;
        result[5] += 3945057;
      } else {
        result[0] += 3112295;
        result[1] += 204756;
        result[2] += 245707;
        result[3] += 8968324;
        result[4] += 3562758;
        result[5] += 37593249;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
        result[0] += 332085;
        result[1] += 50034155;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3320851;
        result[5] += 0;
      } else {
        result[0] += 36276936;
        result[1] += 1595352;
        result[2] += 3606884;
        result[3] += 3572203;
        result[4] += 5028829;
        result[5] += 3606884;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 1248537;
        result[2] += 0;
        result[3] += 11236833;
        result[4] += 1248537;
        result[5] += 39953184;
      } else {
        result[0] += 5752188;
        result[1] += 7286105;
        result[2] += 18790481;
        result[3] += 5752188;
        result[4] += 8053063;
        result[5] += 8053063;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29324881;
        result[3] += 16241472;
        result[4] += 0;
        result[5] += 8120736;
      } else {
        result[0] += 619228;
        result[1] += 0;
        result[2] += 49476338;
        result[3] += 3405755;
        result[4] += 0;
        result[5] += 185768;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 15957683;
        result[1] += 247405;
        result[2] += 0;
        result[3] += 247405;
        result[4] += 32657585;
        result[5] += 4577010;
      } else {
        result[0] += 179405;
        result[1] += 313959;
        result[2] += 224256;
        result[3] += 5740975;
        result[4] += 5202759;
        result[5] += 42025734;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42640000))) ) ) {
        result[0] += 0;
        result[1] += 53017397;
        result[2] += 0;
        result[3] += 0;
        result[4] += 669693;
        result[5] += 0;
      } else {
        result[0] += 32520137;
        result[1] += 1956339;
        result[2] += 4778600;
        result[3] += 7151864;
        result[4] += 3078829;
        result[5] += 4201319;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5195524;
        result[4] += 8659208;
        result[5] += 39832357;
      } else {
        result[0] += 1438047;
        result[1] += 4793490;
        result[2] += 23008753;
        result[3] += 12463074;
        result[4] += 1438047;
        result[5] += 10545678;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 1405421;
        result[1] += 0;
        result[2] += 42443721;
        result[3] += 8151443;
        result[4] += 0;
        result[5] += 1686505;
      } else {
        result[0] += 684396;
        result[1] += 0;
        result[2] += 51633902;
        result[3] += 1368792;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51421813;
        result[5] += 2265278;
      } else {
        result[0] += 0;
        result[1] += 3158064;
        result[2] += 0;
        result[3] += 22106449;
        result[4] += 0;
        result[5] += 28422577;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 146886;
        result[2] += 146886;
        result[3] += 1836083;
        result[4] += 2350187;
        result[5] += 49207046;
      } else {
        result[0] += 4626535;
        result[1] += 385544;
        result[2] += 192772;
        result[3] += 19277232;
        result[4] += 4819308;
        result[5] += 24385698;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 25565281;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28121809;
        result[5] += 0;
      } else {
        result[0] += 117220;
        result[1] += 53569870;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 37864676;
        result[1] += 2546135;
        result[2] += 1200321;
        result[3] += 2764375;
        result[4] += 6910939;
        result[5] += 2400642;
      } else {
        result[0] += 1777450;
        result[1] += 161586;
        result[2] += 40235020;
        result[3] += 6584647;
        result[4] += 929121;
        result[5] += 3999264;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 201075;
        result[1] += 201075;
        result[2] += 804300;
        result[3] += 1608601;
        result[4] += 47252683;
        result[5] += 3619354;
      } else {
        result[0] += 2552476;
        result[1] += 297788;
        result[2] += 212706;
        result[3] += 8125383;
        result[4] += 3148054;
        result[5] += 39350680;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 47186357;
        result[2] += 224163;
        result[3] += 0;
        result[4] += 6276570;
        result[5] += 0;
      } else {
        result[0] += 35343480;
        result[1] += 1562488;
        result[2] += 4093718;
        result[3] += 4781213;
        result[4] += 4281217;
        result[5] += 3624972;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3501332;
        result[3] += 9336885;
        result[4] += 4668442;
        result[5] += 36180431;
      } else {
        result[0] += 813440;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 21556180;
        result[4] += 0;
        result[5] += 4473924;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 10737418;
        result[2] += 17895697;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 14316557;
      } else {
        result[0] += 177575;
        result[1] += 0;
        result[2] += 50135574;
        result[3] += 2782021;
        result[4] += 177575;
        result[5] += 414343;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 165191;
        result[1] += 2477865;
        result[2] += 0;
        result[3] += 825955;
        result[4] += 46749067;
        result[5] += 3469012;
      } else {
        result[0] += 37760777;
        result[1] += 770628;
        result[2] += 0;
        result[3] += 1027504;
        result[4] += 7706281;
        result[5] += 6421900;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 169538;
        result[1] += 0;
        result[2] += 226050;
        result[3] += 4125429;
        result[4] += 2430047;
        result[5] += 46736025;
      } else {
        result[0] += 4554431;
        result[1] += 1242117;
        result[2] += 276026;
        result[3] += 18079714;
        result[4] += 9384889;
        result[5] += 20149910;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
        result[0] += 535799;
        result[1] += 48007618;
        result[2] += 1071598;
        result[3] += 321479;
        result[4] += 3321955;
        result[5] += 428639;
      } else {
        result[0] += 44175978;
        result[1] += 1689791;
        result[2] += 820755;
        result[3] += 2945065;
        result[4] += 2558827;
        result[5] += 1496672;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 2265278;
        result[1] += 2718333;
        result[2] += 12005973;
        result[3] += 21746669;
        result[4] += 4077500;
        result[5] += 10873334;
      } else {
        result[0] += 1654905;
        result[1] += 0;
        result[2] += 46386036;
        result[3] += 4283285;
        result[4] += 0;
        result[5] += 1362863;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9660509;
        result[1] += 158369;
        result[2] += 0;
        result[3] += 950214;
        result[4] += 36899977;
        result[5] += 6018022;
      } else {
        result[0] += 0;
        result[1] += 228650;
        result[2] += 137190;
        result[3] += 8505791;
        result[4] += 3521214;
        result[5] += 41294244;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 51024041;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2663050;
        result[5] += 0;
      } else {
        result[0] += 33480600;
        result[1] += 2082822;
        result[2] += 2580213;
        result[3] += 5004992;
        result[4] += 6310642;
        result[5] += 4227819;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2359872;
        result[1] += 0;
        result[2] += 14159232;
        result[3] += 31268305;
        result[4] += 0;
        result[5] += 5899680;
      } else {
        result[0] += 1660425;
        result[1] += 0;
        result[2] += 39850212;
        result[3] += 6641702;
        result[4] += 0;
        result[5] += 5534751;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 48937127;
        result[3] += 3874970;
        result[4] += 0;
        result[5] += 874993;
      } else {
        result[0] += 19940919;
        result[1] += 0;
        result[2] += 33746171;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7305521;
        result[1] += 849479;
        result[2] += 339791;
        result[3] += 2038750;
        result[4] += 40435214;
        result[5] += 2718333;
      } else {
        result[0] += 179255;
        result[1] += 627395;
        result[2] += 492953;
        result[3] += 9276484;
        result[4] += 4436579;
        result[5] += 38674423;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 270237;
        result[1] += 42787530;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10269007;
        result[5] += 360316;
      } else {
        result[0] += 36190996;
        result[1] += 1036805;
        result[2] += 2235612;
        result[3] += 5572830;
        result[4] += 3240017;
        result[5] += 5410829;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4051855;
        result[3] += 37479667;
        result[4] += 0;
        result[5] += 12155567;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 46017506;
        result[3] += 0;
        result[4] += 0;
        result[5] += 7669584;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1814774;
        result[1] += 0;
        result[2] += 42042285;
        result[3] += 7259099;
        result[4] += 0;
        result[5] += 2570931;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51853060;
        result[3] += 1750666;
        result[4] += 0;
        result[5] += 83365;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 205697;
        result[1] += 3291162;
        result[2] += 0;
        result[3] += 1234186;
        result[4] += 44842091;
        result[5] += 4113953;
      } else {
        result[0] += 2569505;
        result[1] += 272523;
        result[2] += 622910;
        result[3] += 9771907;
        result[4] += 3854258;
        result[5] += 36595986;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 32949196;
        result[1] += 3349733;
        result[2] += 3349733;
        result[3] += 3380185;
        result[4] += 5968615;
        result[5] += 4689626;
      } else {
        result[0] += 265777;
        result[1] += 52092425;
        result[2] += 0;
        result[3] += 265777;
        result[4] += 1063110;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 706409;
        result[2] += 5651272;
        result[3] += 26843545;
        result[4] += 706409;
        result[5] += 19779454;
      } else {
        result[0] += 0;
        result[1] += 3767515;
        result[2] += 40500788;
        result[3] += 3767515;
        result[4] += 941878;
        result[5] += 4709393;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 2684354;
        result[1] += 0;
        result[2] += 10737418;
        result[3] += 24159191;
        result[4] += 2684354;
        result[5] += 13421772;
      } else {
        result[0] += 495954;
        result[1] += 0;
        result[2] += 49409482;
        result[3] += 3409688;
        result[4] += 0;
        result[5] += 371965;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 355543;
        result[2] += 0;
        result[3] += 1422174;
        result[4] += 48709480;
        result[5] += 3199892;
      } else {
        result[0] += 2897654;
        result[1] += 201225;
        result[2] += 281716;
        result[3] += 8290510;
        result[4] += 3742803;
        result[5] += 38273181;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 35110698;
        result[1] += 3688928;
        result[2] += 3129002;
        result[3] += 3458370;
        result[4] += 5105214;
        result[5] += 3194875;
      } else {
        result[0] += 126026;
        result[1] += 52930934;
        result[2] += 0;
        result[3] += 0;
        result[4] += 630130;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 4129776;
        result[2] += 2581110;
        result[3] += 23229991;
        result[4] += 3613554;
        result[5] += 20132659;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36836398;
        result[3] += 10188791;
        result[4] += 0;
        result[5] += 6661901;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 1032444;
        result[1] += 0;
        result[2] += 35447246;
        result[3] += 11701032;
        result[4] += 688296;
        result[5] += 4818072;
      } else {
        result[0] += 509918;
        result[1] += 0;
        result[2] += 50044819;
        result[3] += 2986663;
        result[4] += 0;
        result[5] += 145690;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 17895697;
        result[4] += 0;
        result[5] += 35791394;
      } else {
        result[0] += 119837;
        result[1] += 52728393;
        result[2] += 0;
        result[3] += 0;
        result[4] += 838860;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 838860;
        result[1] += 251658;
        result[2] += 293601;
        result[3] += 6291455;
        result[4] += 10947133;
        result[5] += 35064381;
      } else {
        result[0] += 30993206;
        result[1] += 2612245;
        result[2] += 2095238;
        result[3] += 5578232;
        result[4] += 6530614;
        result[5] += 5877552;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12912085;
        result[3] += 31940421;
        result[4] += 679583;
        result[5] += 8155001;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40802189;
        result[3] += 8589934;
        result[4] += 0;
        result[5] += 4294967;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1076432;
        result[1] += 0;
        result[2] += 44537411;
        result[3] += 7535030;
        result[4] += 0;
        result[5] += 538216;
      } else {
        result[0] += 180764;
        result[1] += 0;
        result[2] += 52873650;
        result[3] += 451911;
        result[4] += 0;
        result[5] += 180764;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 204912;
        result[1] += 3278600;
        result[2] += 0;
        result[3] += 614737;
        result[4] += 44670938;
        result[5] += 4917901;
      } else {
        result[0] += 1563701;
        result[1] += 347489;
        result[2] += 868723;
        result[3] += 8209433;
        result[4] += 5082030;
        result[5] += 37615712;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 120105;
        result[1] += 51525194;
        result[2] += 0;
        result[3] += 360316;
        result[4] += 1681474;
        result[5] += 0;
      } else {
        result[0] += 36471118;
        result[1] += 2139460;
        result[2] += 2373464;
        result[3] += 3476623;
        result[4] += 6184378;
        result[5] += 3042045;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9121593;
        result[3] += 23194908;
        result[4] += 2606169;
        result[5] += 18764420;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 250874;
        result[1] += 1003497;
        result[2] += 34369773;
        result[3] += 13296335;
        result[4] += 2006994;
        result[5] += 2759616;
      } else {
        result[0] += 1168521;
        result[1] += 0;
        result[2] += 49986771;
        result[3] += 2142290;
        result[4] += 259671;
        result[5] += 129835;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 409825;
        result[2] += 0;
        result[3] += 409825;
        result[4] += 49588839;
        result[5] += 3278600;
      } else {
        result[0] += 2063268;
        result[1] += 126322;
        result[2] += 505290;
        result[3] += 8042536;
        result[4] += 4379182;
        result[5] += 38570490;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        result[0] += 1319342;
        result[1] += 44248717;
        result[2] += 101487;
        result[3] += 608927;
        result[4] += 7408615;
        result[5] += 0;
      } else {
        result[0] += 35980100;
        result[1] += 1604007;
        result[2] += 3459625;
        result[3] += 5346693;
        result[4] += 3648331;
        result[5] += 3648331;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 7669584;
        result[2] += 5752188;
        result[3] += 11504376;
        result[4] += 0;
        result[5] += 28760941;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35448892;
        result[3] += 12843801;
        result[4] += 0;
        result[5] += 5394396;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13421772;
        result[3] += 20132659;
        result[4] += 0;
        result[5] += 20132659;
      } else {
        result[0] += 738197;
        result[1] += 134217;
        result[2] += 50465865;
        result[3] += 2281701;
        result[4] += 0;
        result[5] += 67108;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 691250;
        result[1] += 1152083;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48848340;
        result[5] += 2995417;
      } else {
        result[0] += 607205;
        result[1] += 455404;
        result[2] += 101200;
        result[3] += 7134665;
        result[4] += 2479422;
        result[5] += 42909192;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 30867376;
        result[1] += 2700557;
        result[2] += 3429708;
        result[3] += 5212076;
        result[4] += 6751394;
        result[5] += 4725976;
      } else {
        result[0] += 231909;
        result[1] += 53339226;
        result[2] += 0;
        result[3] += 0;
        result[4] += 115954;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
        result[0] += 4880644;
        result[1] += 11388170;
        result[2] += 9761289;
        result[3] += 0;
        result[4] += 9761289;
        result[5] += 17895697;
      } else {
        result[0] += 574193;
        result[1] += 0;
        result[2] += 20958062;
        result[3] += 23254836;
        result[4] += 574193;
        result[5] += 8325805;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 11671106;
        result[1] += 0;
        result[2] += 14005328;
        result[3] += 9336885;
        result[4] += 0;
        result[5] += 18673770;
      } else {
        result[0] += 133384;
        result[1] += 0;
        result[2] += 50419181;
        result[3] += 2934449;
        result[4] += 0;
        result[5] += 200076;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 440058;
        result[4] += 50166626;
        result[5] += 3080406;
      } else {
        result[0] += 5804009;
        result[1] += 10157017;
        result[2] += 0;
        result[3] += 13059022;
        result[4] += 17412029;
        result[5] += 7255012;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 2846611;
        result[1] += 0;
        result[2] += 170796;
        result[3] += 3131272;
        result[4] += 3359001;
        result[5] += 44179409;
      } else {
        result[0] += 0;
        result[1] += 766958;
        result[2] += 383479;
        result[3] += 27610504;
        result[4] += 1150437;
        result[5] += 23775711;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 221390;
        result[1] += 51583885;
        result[2] += 442780;
        result[3] += 332085;
        result[4] += 1106950;
        result[5] += 0;
      } else {
        result[0] += 37175472;
        result[1] += 2854661;
        result[2] += 1751723;
        result[3] += 3243933;
        result[4] += 6098594;
        result[5] += 2562707;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 575218;
        result[1] += 958698;
        result[2] += 16873085;
        result[3] += 19365700;
        result[4] += 3451313;
        result[5] += 12463074;
      } else {
        result[0] += 1071361;
        result[1] += 238080;
        result[2] += 48151725;
        result[3] += 3273603;
        result[4] += 357120;
        result[5] += 595200;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 679583;
        result[1] += 169895;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48760111;
        result[5] += 4077500;
      } else {
        result[0] += 2332308;
        result[1] += 132017;
        result[2] += 220029;
        result[3] += 8449115;
        result[4] += 2332308;
        result[5] += 40221312;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 299370;
        result[1] += 45105139;
        result[2] += 199580;
        result[3] += 199580;
        result[4] += 7883420;
        result[5] += 0;
      } else {
        result[0] += 35651583;
        result[1] += 1677721;
        result[2] += 4291095;
        result[3] += 4581470;
        result[4] += 3742609;
        result[5] += 3742609;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 2236962;
        result[2] += 2236962;
        result[3] += 0;
        result[4] += 8947848;
        result[5] += 40265318;
      } else {
        result[0] += 1745921;
        result[1] += 1309441;
        result[2] += 26625305;
        result[3] += 15713294;
        result[4] += 0;
        result[5] += 8293127;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 848807;
        result[1] += 0;
        result[2] += 42440388;
        result[3] += 8488077;
        result[4] += 0;
        result[5] += 1909817;
      } else {
        result[0] += 80854;
        result[1] += 0;
        result[2] += 52070010;
        result[3] += 1455372;
        result[4] += 0;
        result[5] += 80854;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 976128;
        result[1] += 976128;
        result[2] += 0;
        result[3] += 780903;
        result[4] += 45487608;
        result[5] += 5466322;
      } else {
        result[0] += 2862758;
        result[1] += 82978;
        result[2] += 290424;
        result[3] += 8214871;
        result[4] += 4314882;
        result[5] += 37921175;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 33693693;
        result[1] += 3041164;
        result[2] += 4125143;
        result[3] += 3763817;
        result[4] += 5510228;
        result[5] += 3553043;
      } else {
        result[0] += 256876;
        result[1] += 53430215;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 2497074;
        result[2] += 7491222;
        result[3] += 18103786;
        result[4] += 2497074;
        result[5] += 23097934;
      } else {
        result[0] += 2618882;
        result[1] += 5237764;
        result[2] += 26843545;
        result[3] += 9166088;
        result[4] += 2618882;
        result[5] += 7201926;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36552913;
        result[3] += 15611139;
        result[4] += 0;
        result[5] += 1523038;
      } else {
        result[0] += 718702;
        result[1] += 0;
        result[2] += 50812280;
        result[3] += 2012367;
        result[4] += 0;
        result[5] += 143740;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 1851279;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51835812;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 53224271;
        result[2] += 0;
        result[3] += 0;
        result[4] += 462819;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
        result[0] += 2238543;
        result[1] += 682945;
        result[2] += 455296;
        result[3] += 5653269;
        result[4] += 10395945;
        result[5] += 34261090;
      } else {
        result[0] += 32269520;
        result[1] += 1460288;
        result[2] += 3206908;
        result[3] += 5411658;
        result[4] += 6843314;
        result[5] += 4495399;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4668442;
        result[4] += 0;
        result[5] += 49018648;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14128181;
        result[3] += 18366636;
        result[4] += 0;
        result[5] += 21192272;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 16617432;
        result[2] += 10226112;
        result[3] += 12782640;
        result[4] += 1278264;
        result[5] += 12782640;
      } else {
        result[0] += 742481;
        result[1] += 0;
        result[2] += 48318382;
        result[3] += 4055088;
        result[4] += 0;
        result[5] += 571139;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 204133;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52462290;
        result[5] += 1020667;
      } else {
        result[0] += 4251325;
        result[1] += 338601;
        result[2] += 413845;
        result[3] += 10158034;
        result[4] += 4063213;
        result[5] += 34462071;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 304463;
        result[1] += 47597818;
        result[2] += 202975;
        result[3] += 202975;
        result[4] += 5378857;
        result[5] += 0;
      } else {
        result[0] += 37530922;
        result[1] += 1930161;
        result[2] += 3860323;
        result[3] += 3288423;
        result[4] += 3896067;
        result[5] += 3181192;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 3286964;
        result[1] += 3286964;
        result[2] += 7669584;
        result[3] += 3286964;
        result[4] += 7669584;
        result[5] += 28487027;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22866724;
        result[3] += 26843545;
        result[4] += 0;
        result[5] += 3976821;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
        result[0] += 23008753;
        result[1] += 0;
        result[2] += 7669584;
        result[3] += 0;
        result[4] += 15339168;
        result[5] += 7669584;
      } else {
        result[0] += 342319;
        result[1] += 0;
        result[2] += 50606216;
        result[3] += 2624448;
        result[4] += 0;
        result[5] += 114106;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 211366;
        result[1] += 422733;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50093860;
        result[5] += 2959131;
      } else {
        result[0] += 2263656;
        result[1] += 213552;
        result[2] += 298973;
        result[3] += 7944151;
        result[4] += 3374129;
        result[5] += 39592628;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 35813218;
        result[1] += 3208131;
        result[2] += 1735009;
        result[3] += 3961059;
        result[4] += 6481734;
        result[5] += 2487938;
      } else {
        result[0] += 238080;
        result[1] += 53449010;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4613734;
        result[3] += 28521267;
        result[4] += 419430;
        result[5] += 20132659;
      } else {
        result[0] += 1988410;
        result[1] += 994205;
        result[2] += 31814572;
        result[3] += 7456540;
        result[4] += 1988410;
        result[5] += 9444951;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 325376;
        result[1] += 1301505;
        result[2] += 33513759;
        result[3] += 13340428;
        result[4] += 0;
        result[5] += 5206020;
      } else {
        result[0] += 913267;
        result[1] += 0;
        result[2] += 49707853;
        result[3] += 2805036;
        result[4] += 0;
        result[5] += 260933;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
        result[0] += 0;
        result[1] += 53072822;
        result[2] += 0;
        result[3] += 0;
        result[4] += 614268;
        result[5] += 0;
      } else {
        result[0] += 822340;
        result[1] += 4934043;
        result[2] += 0;
        result[3] += 0;
        result[4] += 44053958;
        result[5] += 3876748;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1747073;
        result[1] += 472181;
        result[2] += 472181;
        result[3] += 8924239;
        result[4] += 1227673;
        result[5] += 40843741;
      } else {
        result[0] += 34334399;
        result[1] += 760171;
        result[2] += 4402658;
        result[3] += 4909439;
        result[4] += 3674160;
        result[5] += 5606262;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 4473924;
        result[2] += 3728270;
        result[3] += 12676118;
        result[4] += 3728270;
        result[5] += 29080507;
      } else {
        result[0] += 1704352;
        result[1] += 0;
        result[2] += 35223276;
        result[3] += 12214523;
        result[4] += 568117;
        result[5] += 3976821;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 28121809;
        result[1] += 7669584;
        result[2] += 12782640;
        result[3] += 5113056;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 393792;
        result[1] += 65632;
        result[2] += 50077323;
        result[3] += 2756549;
        result[4] += 0;
        result[5] += 393792;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13290956;
        result[1] += 313959;
        result[2] += 523265;
        result[3] += 1255838;
        result[4] += 32128532;
        result[5] += 6174538;
      } else {
        result[0] += 849005;
        result[1] += 299648;
        result[2] += 249707;
        result[3] += 5643387;
        result[4] += 3445962;
        result[5] += 43199380;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 53573587;
        result[2] += 0;
        result[3] += 0;
        result[4] += 113503;
        result[5] += 0;
      } else {
        result[0] += 35272853;
        result[1] += 2532409;
        result[2] += 3111246;
        result[3] += 5969252;
        result[4] += 3907146;
        result[5] += 2894182;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 673896;
        result[1] += 224632;
        result[2] += 9659183;
        result[3] += 23811011;
        result[4] += 3144850;
        result[5] += 16173517;
      } else {
        result[0] += 1052688;
        result[1] += 0;
        result[2] += 42633866;
        result[3] += 5789784;
        result[4] += 2105376;
        result[5] += 2105376;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 11012736;
        result[1] += 2753184;
        result[2] += 16519104;
        result[3] += 1376592;
        result[4] += 5506368;
        result[5] += 16519104;
      } else {
        result[0] += 297930;
        result[1] += 119172;
        result[2] += 50052338;
        result[3] += 2383444;
        result[4] += 0;
        result[5] += 834205;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 218240;
        result[1] += 1309441;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49322287;
        result[5] += 2837122;
      } else {
        result[0] += 2112985;
        result[1] += 43122;
        result[2] += 129366;
        result[3] += 9314386;
        result[4] += 3492895;
        result[5] += 38594334;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 896142;
        result[1] += 42851911;
        result[2] += 0;
        result[3] += 81467;
        result[4] += 9857569;
        result[5] += 0;
      } else {
        result[0] += 37067054;
        result[1] += 838291;
        result[2] += 3826982;
        result[3] += 4191456;
        result[4] += 3462507;
        result[5] += 4300798;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 941878;
        result[1] += 7535030;
        result[2] += 1883757;
        result[3] += 6122212;
        result[4] += 6122212;
        result[5] += 31082000;
      } else {
        result[0] += 3059886;
        result[1] += 0;
        result[2] += 21975545;
        result[3] += 22253716;
        result[4] += 0;
        result[5] += 6397943;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
        result[0] += 44739242;
        result[1] += 0;
        result[2] += 8947848;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 430974;
        result[1] += 0;
        result[2] += 48823237;
        result[3] += 4001904;
        result[4] += 0;
        result[5] += 430974;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0;
        result[1] += 13421772;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40265318;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 53561360;
        result[2] += 0;
        result[3] += 0;
        result[4] += 125730;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 6974377;
        result[1] += 1092999;
        result[2] += 156142;
        result[3] += 7078472;
        result[4] += 11346375;
        result[5] += 27038724;
      } else {
        result[0] += 39112885;
        result[1] += 1815955;
        result[2] += 5447866;
        result[3] += 2514399;
        result[4] += 3305970;
        result[5] += 1490014;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 610080;
        result[1] += 7320966;
        result[2] += 5490725;
        result[3] += 4270564;
        result[4] += 9151208;
        result[5] += 26843545;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22152440;
        result[3] += 21370589;
        result[4] += 781850;
        result[5] += 9382210;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 28908433;
        result[1] += 6194664;
        result[2] += 16519104;
        result[3] += 0;
        result[4] += 0;
        result[5] += 2064888;
      } else {
        result[0] += 562495;
        result[1] += 0;
        result[2] += 49999619;
        result[3] += 2812478;
        result[4] += 0;
        result[5] += 312497;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 403662;
        result[1] += 1816480;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50457792;
        result[5] += 1009155;
      } else {
        result[0] += 1789569;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
        result[5] += 23264406;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1364245;
        result[4] += 1925994;
        result[5] += 50396850;
      } else {
        result[0] += 6373809;
        result[1] += 1552594;
        result[2] += 653724;
        result[3] += 18059128;
        result[4] += 3513767;
        result[5] += 23534067;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        result[0] += 330043;
        result[1] += 48956466;
        result[2] += 330043;
        result[3] += 0;
        result[4] += 4070537;
        result[5] += 0;
      } else {
        result[0] += 39654823;
        result[1] += 911186;
        result[2] += 1603687;
        result[3] += 3316717;
        result[4] += 5758696;
        result[5] += 2441979;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1162058;
        result[1] += 929646;
        result[2] += 25332869;
        result[3] += 14409522;
        result[4] += 1859293;
        result[5] += 9993700;
      } else {
        result[0] += 710725;
        result[1] += 273355;
        result[2] += 48383987;
        result[3] += 3717639;
        result[4] += 0;
        result[5] += 601382;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2386092;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49392123;
        result[5] += 1908874;
      } else {
        result[0] += 2066544;
        result[1] += 861060;
        result[2] += 0;
        result[3] += 8093964;
        result[4] += 2152650;
        result[5] += 40512873;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51860999;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1826091;
        result[5] += 0;
      } else {
        result[0] += 31732270;
        result[1] += 1451803;
        result[2] += 4799839;
        result[3] += 4859096;
        result[4] += 7229387;
        result[5] += 3614693;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4645998;
        result[3] += 15486660;
        result[4] += 1548666;
        result[5] += 32005765;
      } else {
        result[0] += 0;
        result[1] += 3579139;
        result[2] += 33643910;
        result[3] += 7874106;
        result[4] += 715827;
        result[5] += 7874106;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 6464937;
        result[1] += 0;
        result[2] += 35978783;
        result[3] += 10119032;
        result[4] += 281084;
        result[5] += 843252;
      } else {
        result[0] += 293773;
        result[1] += 0;
        result[2] += 50529027;
        result[3] += 2790847;
        result[4] += 0;
        result[5] += 73443;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 15935391;
        result[1] += 2561044;
        result[2] += 284560;
        result[3] += 1517656;
        result[4] += 28740615;
        result[5] += 4647822;
      } else {
        result[0] += 1365587;
        result[1] += 156067;
        result[2] += 1404604;
        result[3] += 11197816;
        result[4] += 4408896;
        result[5] += 35154120;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 49628671;
        result[2] += 0;
        result[3] += 463819;
        result[4] += 3130780;
        result[5] += 463819;
      } else {
        result[0] += 38522976;
        result[1] += 3025164;
        result[2] += 2374179;
        result[3] += 2335886;
        result[4] += 4135667;
        result[5] += 3293216;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3038891;
        result[3] += 20259279;
        result[4] += 0;
        result[5] += 30388919;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35791394;
        result[3] += 7953643;
        result[4] += 0;
        result[5] += 9942053;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 4129776;
        result[2] += 17895697;
        result[3] += 26155249;
        result[4] += 0;
        result[5] += 5506368;
      } else {
        result[0] += 298261;
        result[1] += 417566;
        result[2] += 49809690;
        result[3] += 2505397;
        result[4] += 238609;
        result[5] += 417566;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 436480;
        result[2] += 218240;
        result[3] += 0;
        result[4] += 49104046;
        result[5] += 3928323;
      } else {
        result[0] += 2492162;
        result[1] += 887040;
        result[2] += 633600;
        result[3] += 7054086;
        result[4] += 2365442;
        result[5] += 40254758;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 181682;
        result[1] += 43422046;
        result[2] += 0;
        result[3] += 1362616;
        result[4] += 7994016;
        result[5] += 726728;
      } else {
        result[0] += 38625075;
        result[1] += 1587331;
        result[2] += 2081168;
        result[3] += 3985966;
        result[4] += 4338707;
        result[5] += 3068841;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 1376592;
        result[2] += 4129776;
        result[3] += 22025473;
        result[4] += 2753184;
        result[5] += 23402065;
      } else {
        result[0] += 7158278;
        result[1] += 2863311;
        result[2] += 20043180;
        result[3] += 715827;
        result[4] += 10737418;
        result[5] += 12169074;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16106127;
        result[3] += 23622320;
        result[4] += 0;
        result[5] += 13958643;
      } else {
        result[0] += 337654;
        result[1] += 56275;
        result[2] += 47553031;
        result[3] += 4783441;
        result[4] += 112551;
        result[5] += 844136;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 688296;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 45656970;
        result[5] += 7341824;
      } else {
        result[0] += 26843545;
        result[1] += 654720;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26188824;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2929473;
        result[4] += 3527325;
        result[5] += 47230291;
      } else {
        result[0] += 0;
        result[1] += 307662;
        result[2] += 461493;
        result[3] += 23536174;
        result[4] += 3538117;
        result[5] += 25843642;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 52396018;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1291072;
        result[5] += 0;
      } else {
        result[0] += 38196349;
        result[1] += 1308578;
        result[2] += 1556147;
        result[3] += 3925735;
        result[4] += 6259957;
        result[5] += 2440322;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 438261;
        result[1] += 438261;
        result[2] += 19502657;
        result[3] += 16215692;
        result[4] += 438261;
        result[5] += 16653954;
      } else {
        result[0] += 1394469;
        result[1] += 858135;
        result[2] += 46661108;
        result[3] += 3378907;
        result[4] += 482701;
        result[5] += 911768;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7791002;
        result[1] += 1416545;
        result[2] += 0;
        result[3] += 566618;
        result[4] += 38813358;
        result[5] += 5099565;
      } else {
        result[0] += 136724;
        result[1] += 455747;
        result[2] += 45574;
        result[3] += 7428689;
        result[4] += 3873856;
        result[5] += 41746498;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 760171;
        result[1] += 44850100;
        result[2] += 190042;
        result[3] += 380085;
        result[4] += 7316647;
        result[5] += 190042;
      } else {
        result[0] += 34862173;
        result[1] += 2164537;
        result[2] += 2951642;
        result[3] += 5148975;
        result[4] += 4788219;
        result[5] += 3771542;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 3441480;
        result[2] += 11701032;
        result[3] += 32349913;
        result[4] += 688296;
        result[5] += 5506368;
      } else {
        result[0] += 1590728;
        result[1] += 1193046;
        result[2] += 37382122;
        result[3] += 7158278;
        result[4] += 397682;
        result[5] += 5965232;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 9942053;
        result[1] += 0;
        result[2] += 19884107;
        result[3] += 3976821;
        result[4] += 0;
        result[5] += 19884107;
      } else {
        result[0] += 389507;
        result[1] += 0;
        result[2] += 49662182;
        result[3] += 2921304;
        result[4] += 0;
        result[5] += 714096;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 445536;
        result[1] += 445536;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50122802;
        result[5] += 2673216;
      } else {
        result[0] += 2136799;
        result[1] += 311616;
        result[2] += 133549;
        result[3] += 7701382;
        result[4] += 2581966;
        result[5] += 40821776;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 763840;
        result[1] += 51941169;
        result[2] += 0;
        result[3] += 109120;
        result[4] += 872960;
        result[5] += 0;
      } else {
        result[0] += 33914296;
        result[1] += 2784009;
        result[2] += 2562554;
        result[3] += 3891285;
        result[4] += 6865114;
        result[5] += 3669830;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 610080;
        result[2] += 3660483;
        result[3] += 4880644;
        result[4] += 7931047;
        result[5] += 36604834;
      } else {
        result[0] += 0;
        result[1] += 2191309;
        result[2] += 13147859;
        result[3] += 29582682;
        result[4] += 547827;
        result[5] += 8217411;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 662803;
        result[2] += 31151768;
        result[3] += 15244482;
        result[4] += 3976821;
        result[5] += 2651214;
      } else {
        result[0] += 2035805;
        result[1] += 465326;
        result[2] += 47579675;
        result[3] += 2908293;
        result[4] += 0;
        result[5] += 697990;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
        result[0] += 208899;
        result[1] += 417798;
        result[2] += 0;
        result[3] += 626697;
        result[4] += 50762502;
        result[5] += 1671193;
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 2489836;
        result[1] += 51871;
        result[2] += 0;
        result[3] += 3319781;
        result[4] += 3475396;
        result[5] += 44350205;
      } else {
        result[0] += 236507;
        result[1] += 236507;
        result[2] += 473014;
        result[3] += 33347488;
        result[4] += 236507;
        result[5] += 19157067;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 811683;
        result[1] += 50556310;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2319096;
        result[5] += 0;
      } else {
        result[0] += 37844415;
        result[1] += 2563309;
        result[2] += 783233;
        result[3] += 2314098;
        result[4] += 7832334;
        result[5] += 2349700;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1804608;
        result[1] += 1654224;
        result[2] += 17594929;
        result[3] += 16391856;
        result[4] += 3759600;
        result[5] += 12481872;
      } else {
        result[0] += 2585341;
        result[1] += 110014;
        result[2] += 46096088;
        result[3] += 4015530;
        result[4] += 0;
        result[5] += 880116;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 206488;
        result[1] += 206488;
        result[2] += 412977;
        result[3] += 206488;
        result[4] += 49970292;
        result[5] += 2684354;
      } else {
        result[0] += 2290179;
        result[1] += 352335;
        result[2] += 132125;
        result[3] += 8103711;
        result[4] += 2686556;
        result[5] += 40122182;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 347114;
        result[1] += 52182926;
        result[2] += 0;
        result[3] += 115704;
        result[4] += 1041344;
        result[5] += 0;
      } else {
        result[0] += 34598347;
        result[1] += 2919824;
        result[2] += 1883757;
        result[3] += 3924494;
        result[4] += 6593151;
        result[5] += 3767515;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
        result[0] += 783753;
        result[1] += 1959382;
        result[2] += 7053778;
        result[3] += 25863854;
        result[4] += 3918765;
        result[5] += 14107556;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42298920;
        result[3] += 4880644;
        result[4] += 0;
        result[5] += 6507526;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 18790481;
        result[1] += 24159191;
        result[2] += 2684354;
        result[3] += 0;
        result[4] += 8053063;
        result[5] += 0;
      } else {
        result[0] += 764617;
        result[1] += 0;
        result[2] += 48935537;
        result[3] += 3058471;
        result[4] += 109231;
        result[5] += 819233;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5000989;
        result[1] += 4706813;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39272474;
        result[5] += 4706813;
      } else {
        result[0] += 103543;
        result[1] += 51771;
        result[2] += 51771;
        result[3] += 8594076;
        result[4] += 3882865;
        result[5] += 41003062;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 50086127;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3600963;
        result[5] += 0;
      } else {
        result[0] += 33333193;
        result[1] += 1150437;
        result[2] += 3805293;
        result[3] += 5634194;
        result[4] += 4395261;
        result[5] += 5368709;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 3976821;
        result[2] += 0;
        result[3] += 3976821;
        result[4] += 7953643;
        result[5] += 37779804;
      } else {
        result[0] += 0;
        result[1] += 970248;
        result[2] += 24256215;
        result[3] += 21668886;
        result[4] += 1293664;
        result[5] += 5498075;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 39558909;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 14128181;
      } else {
        result[0] += 596523;
        result[1] += 0;
        result[2] += 49451776;
        result[3] += 3101920;
        result[4] += 59652;
        result[5] += 477218;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428d0000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1101273;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52585817;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 26843545;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 702557;
        result[1] += 936743;
        result[2] += 0;
        result[3] += 2458950;
        result[4] += 2576043;
        result[5] += 47012796;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3438089;
        result[3] += 29091527;
        result[4] += 1322342;
        result[5] += 19835132;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 32375034;
        result[1] += 3225445;
        result[2] += 1175629;
        result[3] += 4823096;
        result[4] += 7807387;
        result[5] += 4280498;
      } else {
        result[0] += 409825;
        result[1] += 52184399;
        result[2] += 0;
        result[3] += 819650;
        result[4] += 273216;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 3193849;
        result[1] += 2585497;
        result[2] += 19467273;
        result[3] += 17033864;
        result[4] += 2129233;
        result[5] += 9277372;
      } else {
        result[0] += 1500570;
        result[1] += 0;
        result[2] += 48073844;
        result[3] += 3834792;
        result[4] += 0;
        result[5] += 277883;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5181595;
        result[1] += 143933;
        result[2] += 0;
        result[3] += 863599;
        result[4] += 41308834;
        result[5] += 6189128;
      } else {
        result[0] += 0;
        result[1] += 146552;
        result[2] += 390806;
        result[3] += 7620733;
        result[4] += 3224156;
        result[5] += 42304841;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
        result[0] += 1775908;
        result[1] += 51091532;
        result[2] += 0;
        result[3] += 0;
        result[4] += 819650;
        result[5] += 0;
      } else {
        result[0] += 33985987;
        result[1] += 4782743;
        result[2] += 2692273;
        result[3] += 3610813;
        result[4] += 5542915;
        result[5] += 3072358;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1952257;
        result[3] += 4880644;
        result[4] += 3904515;
        result[5] += 42949672;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11686985;
        result[3] += 26660936;
        result[4] += 0;
        result[5] += 15339168;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 447392;
        result[1] += 447392;
        result[2] += 24606583;
        result[3] += 21474836;
        result[4] += 894784;
        result[5] += 5816101;
      } else {
        result[0] += 341231;
        result[1] += 56871;
        result[2] += 48909850;
        result[3] += 2957339;
        result[4] += 568719;
        result[5] += 853078;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9154735;
        result[1] += 930990;
        result[2] += 465495;
        result[3] += 0;
        result[4] += 37705095;
        result[5] += 5430775;
      } else {
        result[0] += 177919;
        result[1] += 533757;
        result[2] += 934075;
        result[3] += 9963470;
        result[4] += 2579827;
        result[5] += 39498042;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 49618174;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4068916;
        result[5] += 0;
      } else {
        result[0] += 33990305;
        result[1] += 2230417;
        result[2] += 2890118;
        result[3] += 5089121;
        result[4] += 5811651;
        result[5] += 3675476;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3463683;
        result[3] += 12122891;
        result[4] += 0;
        result[5] += 38100516;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29582682;
        result[3] += 10956549;
        result[4] += 0;
        result[5] += 13147859;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1731841;
        result[1] += 1113326;
        result[2] += 42801229;
        result[3] += 6432554;
        result[4] += 247405;
        result[5] += 1360732;
      } else {
        result[0] += 186737;
        result[1] += 0;
        result[2] += 52473296;
        result[3] += 933688;
        result[4] += 0;
        result[5] += 93368;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 221847;
        result[1] += 221847;
        result[2] += 665542;
        result[3] += 0;
        result[4] += 49693836;
        result[5] += 2884017;
      } else {
        result[0] += 1297438;
        result[1] += 1610612;
        result[2] += 850045;
        result[3] += 7560932;
        result[4] += 2818572;
        result[5] += 39549490;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51998059;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1689032;
        result[5] += 0;
      } else {
        result[0] += 33204980;
        result[1] += 1426330;
        result[2] += 2053916;
        result[3] += 4992157;
        result[4] += 7331340;
        result[5] += 4678365;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 10737418;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6710886;
        result[3] += 14260633;
        result[4] += 0;
        result[5] += 32715571;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2137981;
        result[1] += 0;
        result[2] += 36345685;
        result[3] += 11877675;
        result[4] += 0;
        result[5] += 3325749;
      } else {
        result[0] += 496446;
        result[1] += 0;
        result[2] += 50992098;
        result[3] += 1914863;
        result[4] += 0;
        result[5] += 283683;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 7669584;
        result[2] += 0;
        result[3] += 0;
        result[4] += 23008753;
        result[5] += 23008753;
      } else {
        result[0] += 240210;
        result[1] += 53446880;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        result[0] += 2055008;
        result[1] += 403662;
        result[2] += 110089;
        result[3] += 7706281;
        result[4] += 9284233;
        result[5] += 34127815;
      } else {
        result[0] += 33648072;
        result[1] += 2528287;
        result[2] += 2465860;
        result[3] += 3651970;
        result[4] += 7303941;
        result[5] += 4088958;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1012963;
        result[1] += 3038891;
        result[2] += 6077783;
        result[3] += 18233351;
        result[4] += 5064819;
        result[5] += 20259279;
      } else {
        result[0] += 7381975;
        result[1] += 1342177;
        result[2] += 28856811;
        result[3] += 10737418;
        result[4] += 335544;
        result[5] += 5033164;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23402065;
        result[3] += 20648881;
        result[4] += 0;
        result[5] += 9636144;
      } else {
        result[0] += 546588;
        result[1] += 0;
        result[2] += 49921706;
        result[3] += 3097332;
        result[4] += 0;
        result[5] += 121464;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 287096;
        result[1] += 4593547;
        result[2] += 0;
        result[3] += 0;
        result[4] += 45648382;
        result[5] += 3158064;
      } else {
        result[0] += 7267822;
        result[1] += 126396;
        result[2] += 1390366;
        result[3] += 10680539;
        result[4] += 3381117;
        result[5] += 30840848;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42520000))) ) ) {
        result[0] += 3093083;
        result[1] += 49268400;
        result[2] += 0;
        result[3] += 110467;
        result[4] += 1215139;
        result[5] += 0;
      } else {
        result[0] += 39657212;
        result[1] += 2519297;
        result[2] += 3388020;
        result[3] += 1998063;
        result[4] += 4300179;
        result[5] += 1824318;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 1651910;
        result[1] += 1651910;
        result[2] += 12389328;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 27256523;
      } else {
        result[0] += 1760232;
        result[1] += 4400581;
        result[2] += 39605231;
        result[3] += 5280697;
        result[4] += 0;
        result[5] += 2640348;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 149546;
        result[1] += 0;
        result[2] += 43966587;
        result[3] += 7776403;
        result[4] += 149546;
        result[5] += 1645008;
      } else {
        result[0] += 393312;
        result[1] += 0;
        result[2] += 52408827;
        result[3] += 786624;
        result[4] += 0;
        result[5] += 98328;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1745921;
        result[2] += 218240;
        result[3] += 1527681;
        result[4] += 48231085;
        result[5] += 1964161;
      } else {
        result[0] += 2064888;
        result[1] += 589968;
        result[2] += 884952;
        result[3] += 9102363;
        result[4] += 3961213;
        result[5] += 37083705;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 50077874;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3609216;
        result[5] += 0;
      } else {
        result[0] += 33588382;
        result[1] += 1267486;
        result[2] += 3470497;
        result[3] += 4315488;
        result[4] += 6699569;
        result[5] += 4345666;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3702558;
        result[3] += 0;
        result[4] += 1851279;
        result[5] += 48133254;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14572210;
        result[3] += 20707878;
        result[4] += 2300875;
        result[5] += 16106127;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1278264;
        result[1] += 9586980;
        result[2] += 21730489;
        result[3] += 11504376;
        result[4] += 1278264;
        result[5] += 8308716;
      } else {
        result[0] += 1113326;
        result[1] += 0;
        result[2] += 49110081;
        result[3] += 3339980;
        result[4] += 0;
        result[5] += 123702;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 213892;
        result[1] += 213892;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51762056;
        result[5] += 1497249;
      } else {
        result[0] += 2467321;
        result[1] += 228455;
        result[2] += 365529;
        result[3] += 8133023;
        result[4] += 3015615;
        result[5] += 39477146;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 51227324;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2459767;
        result[5] += 0;
      } else {
        result[0] += 37772467;
        result[1] += 1419769;
        result[2] += 2212198;
        result[3] += 3664985;
        result[4] += 5877184;
        result[5] += 2740484;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 778073;
        result[1] += 0;
        result[2] += 2334221;
        result[3] += 7780737;
        result[4] += 6224590;
        result[5] += 36569467;
      } else {
        result[0] += 742217;
        result[1] += 2226653;
        result[2] += 16328792;
        result[3] += 25482812;
        result[4] += 494811;
        result[5] += 8411802;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2547861;
        result[1] += 0;
        result[2] += 41857732;
        result[3] += 8371546;
        result[4] += 0;
        result[5] += 909950;
      } else {
        result[0] += 466168;
        result[1] += 0;
        result[2] += 50579300;
        result[3] += 2330843;
        result[4] += 0;
        result[5] += 310779;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51392771;
        result[5] += 2294320;
      } else {
        result[0] += 2236962;
        result[1] += 1008826;
        result[2] += 789516;
        result[3] += 7939022;
        result[4] += 2543996;
        result[5] += 39168768;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 33278846;
        result[1] += 3366615;
        result[2] += 2562203;
        result[3] += 3843304;
        result[4] += 6852403;
        result[5] += 3783718;
      } else {
        result[0] += 402653;
        result[1] += 52747567;
        result[2] += 0;
        result[3] += 536870;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 7255012;
        result[2] += 6287677;
        result[3] += 16928362;
        result[4] += 5804009;
        result[5] += 17412029;
      } else {
        result[0] += 6194664;
        result[1] += 2753184;
        result[2] += 25466953;
        result[3] += 688296;
        result[4] += 1376592;
        result[5] += 17207401;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 1342177;
        result[2] += 17448304;
        result[3] += 25501368;
        result[4] += 0;
        result[5] += 9395240;
      } else {
        result[0] += 572967;
        result[1] += 0;
        result[2] += 49275238;
        result[3] += 3552400;
        result[4] += 0;
        result[5] += 286483;
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
