
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
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 209510;
        result[1] += 419021;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41064077;
        result[5] += 1257063;
      } else {
        result[0] += 0;
        result[1] += 38177487;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4772185;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 868344;
        result[4] += 1536302;
        result[5] += 40545025;
      } else {
        result[0] += 613566;
        result[1] += 981706;
        result[2] += 1349846;
        result[3] += 7117374;
        result[4] += 5522100;
        result[5] += 27365077;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 26055836;
        result[1] += 1966478;
        result[2] += 737429;
        result[3] += 4201112;
        result[4] += 5541893;
        result[5] += 4446922;
      } else {
        result[0] += 102996;
        result[1] += 42022701;
        result[2] += 0;
        result[3] += 0;
        result[4] += 411987;
        result[5] += 411987;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 166471;
        result[1] += 665886;
        result[2] += 7657693;
        result[3] += 23638967;
        result[4] += 2330602;
        result[5] += 8490051;
      } else {
        result[0] += 1260753;
        result[1] += 0;
        result[2] += 37654507;
        result[3] += 3319984;
        result[4] += 84050;
        result[5] += 630376;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1110767;
        result[2] += 370255;
        result[3] += 370255;
        result[4] += 38691731;
        result[5] += 2406662;
      } else {
        result[0] += 1330450;
        result[1] += 477597;
        result[2] += 341141;
        result[3] += 7436877;
        result[4] += 2524444;
        result[5] += 30839161;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 25913268;
        result[1] += 1972636;
        result[2] += 3407280;
        result[3] += 3407280;
        result[4] += 4998839;
        result[5] += 3250366;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42860000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35791394;
        result[5] += 7158278;
      } else {
        result[0] += 2863311;
        result[1] += 0;
        result[2] += 8017272;
        result[3] += 14889219;
        result[4] += 572662;
        result[5] += 16607206;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 1120426;
        result[1] += 0;
        result[2] += 22408525;
        result[3] += 17553344;
        result[4] += 0;
        result[5] += 1867377;
      } else {
        result[0] += 209510;
        result[1] += 0;
        result[2] += 39911769;
        result[3] += 2252238;
        result[4] += 0;
        result[5] += 576154;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 19071326;
        result[1] += 2664760;
        result[2] += 0;
        result[3] += 731502;
        result[4] += 17869571;
        result[5] += 2612510;
      } else {
        result[0] += 3016273;
        result[1] += 876523;
        result[2] += 1289005;
        result[3] += 7759814;
        result[4] += 4047478;
        result[5] += 25960576;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42860000))) ) ) {
        result[0] += 0;
        result[1] += 42848852;
        result[2] += 0;
        result[3] += 0;
        result[4] += 100820;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 15032385;
        result[2] += 0;
        result[3] += 0;
        result[4] += 27917287;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 41787022;
        result[1] += 136782;
        result[2] += 205173;
        result[3] += 410347;
        result[4] += 410347;
        result[5] += 0;
      } else {
        result[0] += 7809031;
        result[1] += 0;
        result[2] += 18102754;
        result[3] += 7099119;
        result[4] += 1419823;
        result[5] += 8518943;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 11430154;
        result[1] += 0;
        result[2] += 14547469;
        result[3] += 9005576;
        result[4] += 1731841;
        result[5] += 6234629;
      } else {
        result[0] += 168595;
        result[1] += 0;
        result[2] += 37891811;
        result[3] += 4214884;
        result[4] += 0;
        result[5] += 674381;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2480847;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36127342;
        result[5] += 4341483;
      } else {
        result[0] += 17949117;
        result[1] += 641039;
        result[2] += 2564159;
        result[3] += 0;
        result[4] += 17949117;
        result[5] += 3846239;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 212885;
        result[2] += 159664;
        result[3] += 1543420;
        result[4] += 2661070;
        result[5] += 38372632;
      } else {
        result[0] += 0;
        result[1] += 545046;
        result[2] += 327027;
        result[3] += 20384743;
        result[4] += 2398205;
        result[5] += 19294650;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 35388110;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7561562;
        result[5] += 0;
      } else {
        result[0] += 32373201;
        result[1] += 797067;
        result[2] += 1594134;
        result[3] += 2268576;
        result[4] += 3280239;
        result[5] += 2636453;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 6189254;
        result[1] += 1312872;
        result[2] += 17348667;
        result[3] += 11065636;
        result[4] += 750212;
        result[5] += 6283030;
      } else {
        result[0] += 50292;
        result[1] += 201169;
        result[2] += 39077161;
        result[3] += 3621049;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 615765;
        result[1] += 307882;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39409018;
        result[5] += 2617005;
      } else {
        result[0] += 1658697;
        result[1] += 176457;
        result[2] += 635245;
        result[3] += 6564206;
        result[4] += 2258651;
        result[5] += 31656414;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        result[0] += 91577;
        result[1] += 40385513;
        result[2] += 0;
        result[3] += 183154;
        result[4] += 2289428;
        result[5] += 0;
      } else {
        result[0] += 26960061;
        result[1] += 1673053;
        result[2] += 2963694;
        result[3] += 3776320;
        result[4] += 4612847;
        result[5] += 2963694;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5302428;
        result[3] += 19618986;
        result[4] += 0;
        result[5] += 18028257;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36168145;
        result[3] += 2260509;
        result[4] += 0;
        result[5] += 4521018;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1529365;
        result[1] += 127447;
        result[2] += 33773481;
        result[3] += 5607672;
        result[4] += 509788;
        result[5] += 1401918;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41511167;
        result[3] += 1233004;
        result[4] += 68500;
        result[5] += 137000;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 344977;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40534831;
        result[5] += 2069863;
      } else {
        result[0] += 1445760;
        result[1] += 35262;
        result[2] += 176312;
        result[3] += 6100405;
        result[4] += 2327322;
        result[5] += 32864610;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 278893;
        result[1] += 42112991;
        result[2] += 0;
        result[3] += 0;
        result[4] += 557787;
        result[5] += 0;
      } else {
        result[0] += 26774135;
        result[1] += 1545125;
        result[2] += 3066109;
        result[3] += 3355820;
        result[4] += 5383798;
        result[5] += 2824683;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 9203501;
        result[2] += 3067833;
        result[3] += 2045222;
        result[4] += 2045222;
        result[5] += 26587892;
      } else {
        result[0] += 1321528;
        result[1] += 330382;
        result[2] += 16849487;
        result[3] += 16188722;
        result[4] += 2312674;
        result[5] += 5946877;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32906714;
        result[3] += 8547198;
        result[4] += 0;
        result[5] += 1495759;
      } else {
        result[0] += 172951;
        result[1] += 0;
        result[2] += 41047204;
        result[3] += 1614215;
        result[4] += 0;
        result[5] += 115301;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 151231;
        result[1] += 3327087;
        result[2] += 453693;
        result[3] += 151231;
        result[4] += 37202885;
        result[5] += 1663543;
      } else {
        result[0] += 1625513;
        result[1] += 72245;
        result[2] += 758572;
        result[3] += 6863278;
        result[4] += 3142658;
        result[5] += 30487404;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 27921013;
        result[1] += 2459235;
        result[2] += 1962419;
        result[3] += 3080254;
        result[4] += 4694903;
        result[5] += 2831846;
      } else {
        result[0] += 0;
        result[1] += 42054888;
        result[2] += 0;
        result[3] += 497102;
        result[4] += 198841;
        result[5] += 198841;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 251167;
        result[2] += 5776856;
        result[3] += 21851587;
        result[4] += 753503;
        result[5] += 14316557;
      } else {
        result[0] += 1431655;
        result[1] += 0;
        result[2] += 27559373;
        result[3] += 12884901;
        result[4] += 715827;
        result[5] += 357913;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 9153208;
        result[1] += 2112278;
        result[2] += 15490045;
        result[3] += 2112278;
        result[4] += 1408185;
        result[5] += 12673673;
      } else {
        result[0] += 409044;
        result[1] += 0;
        result[2] += 39268272;
        result[3] += 2965572;
        result[4] += 0;
        result[5] += 306783;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1006632;
        result[1] += 0;
        result[2] += 838860;
        result[3] += 0;
        result[4] += 39929774;
        result[5] += 1174405;
      } else {
        result[0] += 1379909;
        result[1] += 103493;
        result[2] += 206986;
        result[3] += 5864613;
        result[4] += 2656325;
        result[5] += 32738345;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 28905974;
        result[1] += 3171982;
        result[2] += 1509249;
        result[3] += 2532470;
        result[4] += 5167262;
        result[5] += 1662733;
      } else {
        result[0] += 0;
        result[1] += 42639193;
        result[2] += 0;
        result[3] += 310479;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 4601750;
        result[2] += 4601750;
        result[3] += 3834792;
        result[4] += 5368709;
        result[5] += 24542670;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11811160;
        result[3] += 22548578;
        result[4] += 2415919;
        result[5] += 6174015;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30698927;
        result[3] += 9944722;
        result[4] += 0;
        result[5] += 2306022;
      } else {
        result[0] += 1138136;
        result[1] += 0;
        result[2] += 39175852;
        result[3] += 2515880;
        result[4] += 59901;
        result[5] += 59901;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1135233;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40111588;
        result[5] += 1702850;
      } else {
        result[0] += 0;
        result[1] += 5368709;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8947848;
        result[5] += 28633115;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 887969;
        result[1] += 46735;
        result[2] += 0;
        result[3] += 2290026;
        result[4] += 4159435;
        result[5] += 35565507;
      } else {
        result[0] += 3197246;
        result[1] += 1492048;
        result[2] += 2131497;
        result[3] += 18330877;
        result[4] += 2877521;
        result[5] += 14920481;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 42482828;
        result[2] += 0;
        result[3] += 0;
        result[4] += 466844;
        result[5] += 0;
      } else {
        result[0] += 29449682;
        result[1] += 1304732;
        result[2] += 798815;
        result[3] += 2236684;
        result[4] += 5644966;
        result[5] += 3514790;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 583027;
        result[1] += 0;
        result[2] += 17102132;
        result[3] += 16907789;
        result[4] += 1360396;
        result[5] += 6996326;
      } else {
        result[0] += 2418438;
        result[1] += 268715;
        result[2] += 36858791;
        result[3] += 2687153;
        result[4] += 0;
        result[5] += 716574;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1558657;
        result[2] += 0;
        result[3] += 1385473;
        result[4] += 37754147;
        result[5] += 2251394;
      } else {
        result[0] += 2238756;
        result[1] += 378866;
        result[2] += 34442;
        result[3] += 6337401;
        result[4] += 2755392;
        result[5] += 31204814;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41861086;
        result[2] += 0;
        result[3] += 197924;
        result[4] += 890661;
        result[5] += 0;
      } else {
        result[0] += 26704098;
        result[1] += 1719846;
        result[2] += 2719216;
        result[3] += 3486174;
        result[4] += 5229262;
        result[5] += 3091074;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 1610612;
        result[2] += 5368709;
        result[3] += 13958643;
        result[4] += 1610612;
        result[5] += 20401094;
      } else {
        result[0] += 0;
        result[1] += 1301505;
        result[2] += 29934620;
        result[3] += 6507526;
        result[4] += 0;
        result[5] += 5206020;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31615731;
        result[3] += 10936259;
        result[4] += 0;
        result[5] += 397682;
      } else {
        result[0] += 477218;
        result[1] += 0;
        result[2] += 40563580;
        result[3] += 1789569;
        result[4] += 0;
        result[5] += 119304;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 142217;
        result[3] += 0;
        result[4] += 38825366;
        result[5] += 3982088;
      } else {
        result[0] += 2891970;
        result[1] += 1094259;
        result[2] += 234484;
        result[3] += 3478180;
        result[4] += 2579325;
        result[5] += 32671452;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 40620514;
        result[2] += 0;
        result[3] += 838496;
        result[4] += 1397494;
        result[5] += 93166;
      } else {
        result[0] += 24790972;
        result[1] += 1006275;
        result[2] += 2286990;
        result[3] += 6060523;
        result[4] += 4047972;
        result[5] += 4756939;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 842150;
        result[1] += 421075;
        result[2] += 8421504;
        result[3] += 23159137;
        result[4] += 2105376;
        result[5] += 8000429;
      } else {
        result[0] += 0;
        result[1] += 2656680;
        result[2] += 25681247;
        result[3] += 10183943;
        result[4] += 0;
        result[5] += 4427801;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 4601750;
        result[1] += 0;
        result[2] += 23008753;
        result[3] += 13805252;
        result[4] += 0;
        result[5] += 1533916;
      } else {
        result[0] += 1199990;
        result[1] += 0;
        result[2] += 38949703;
        result[3] += 2549980;
        result[4] += 0;
        result[5] += 249998;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 132971;
        result[1] += 132971;
        result[2] += 0;
        result[3] += 797826;
        result[4] += 37231914;
        result[5] += 4653989;
      } else {
        result[0] += 1386591;
        result[1] += 207988;
        result[2] += 381312;
        result[3] += 6655639;
        result[4] += 2426535;
        result[5] += 31891605;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 502335;
        result[1] += 36586758;
        result[2] += 0;
        result[3] += 167445;
        result[4] += 5693134;
        result[5] += 0;
      } else {
        result[0] += 29047475;
        result[1] += 1116234;
        result[2] += 3044276;
        result[3] += 3906821;
        result[4] += 3069645;
        result[5] += 2765218;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4443069;
        result[3] += 14810232;
        result[4] += 740511;
        result[5] += 22955859;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26259385;
        result[3] += 12462081;
        result[4] += 445074;
        result[5] += 3783131;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 431113;
        result[1] += 107778;
        result[2] += 39608544;
        result[3] += 2371123;
        result[4] += 0;
        result[5] += 431113;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1321528;
        result[2] += 0;
        result[3] += 1486719;
        result[4] += 38324323;
        result[5] += 1817101;
      } else {
        result[0] += 2098518;
        result[1] += 174876;
        result[2] += 69950;
        result[3] += 6540381;
        result[4] += 2553197;
        result[5] += 31512748;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41380735;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1568937;
        result[5] += 0;
      } else {
        result[0] += 28712504;
        result[1] += 1137914;
        result[2] += 1878882;
        result[3] += 3598986;
        result[4] += 4975069;
        result[5] += 2646313;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 508280;
        result[2] += 6353501;
        result[3] += 22364326;
        result[4] += 1270700;
        result[5] += 12452863;
      } else {
        result[0] += 315806;
        result[1] += 0;
        result[2] += 29685803;
        result[3] += 11369031;
        result[4] += 0;
        result[5] += 1579032;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 14316557;
        result[1] += 6135667;
        result[2] += 12271335;
        result[3] += 4090445;
        result[4] += 0;
        result[5] += 6135667;
      } else {
        result[0] += 692736;
        result[1] += 0;
        result[2] += 39485989;
        result[3] += 2678581;
        result[4] += 0;
        result[5] += 92364;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7058581;
        result[1] += 239273;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31105612;
        result[5] += 4546204;
      } else {
        result[0] += 0;
        result[1] += 444690;
        result[2] += 518805;
        result[3] += 7226217;
        result[4] += 2038163;
        result[5] += 32721795;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 400649;
        result[1] += 36619403;
        result[2] += 0;
        result[3] += 320519;
        result[4] += 5609099;
        result[5] += 0;
      } else {
        result[0] += 31198510;
        result[1] += 1461999;
        result[2] += 2537809;
        result[3] += 2703319;
        result[4] += 3034337;
        result[5] += 2013696;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 949164;
        result[2] += 1898328;
        result[3] += 16610370;
        result[4] += 4271238;
        result[5] += 19220571;
      } else {
        result[0] += 671088;
        result[1] += 0;
        result[2] += 22817013;
        result[3] += 17112760;
        result[4] += 0;
        result[5] += 2348810;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 20541147;
        result[1] += 0;
        result[2] += 7469508;
        result[3] += 0;
        result[4] += 13071639;
        result[5] += 1867377;
      } else {
        result[0] += 145921;
        result[1] += 0;
        result[2] += 38474735;
        result[3] += 3793968;
        result[4] += 48640;
        result[5] += 486406;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5198519;
        result[1] += 123774;
        result[2] += 371322;
        result[3] += 0;
        result[4] += 33171505;
        result[5] += 4084551;
      } else {
        result[0] += 0;
        result[1] += 181528;
        result[2] += 36305;
        result[3] += 7115922;
        result[4] += 2142037;
        result[5] += 33473878;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 41512026;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1437645;
        result[5] += 0;
      } else {
        result[0] += 26507619;
        result[1] += 1441428;
        result[2] += 3371476;
        result[3] += 3933388;
        result[4] += 4715180;
        result[5] += 2980580;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 622459;
        result[2] += 1244918;
        result[3] += 4357213;
        result[4] += 6224590;
        result[5] += 30500492;
      } else {
        result[0] += 0;
        result[1] += 2440322;
        result[2] += 18058385;
        result[3] += 17082256;
        result[4] += 0;
        result[5] += 5368709;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 3067833;
        result[1] += 0;
        result[2] += 23775711;
        result[3] += 15339168;
        result[4] += 766958;
        result[5] += 0;
      } else {
        result[0] += 709911;
        result[1] += 0;
        result[2] += 39856485;
        result[3] += 2180443;
        result[4] += 0;
        result[5] += 202831;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 12632256;
        result[2] += 0;
        result[3] += 0;
        result[4] += 25264513;
        result[5] += 5052902;
      } else {
        result[0] += 0;
        result[1] += 42849557;
        result[2] += 0;
        result[3] += 0;
        result[4] += 100115;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1612445;
        result[1] += 732929;
        result[2] += 58634;
        result[3] += 5892753;
        result[4] += 8296762;
        result[5] += 26356147;
      } else {
        result[0] += 27536282;
        result[1] += 2152431;
        result[2] += 1533916;
        result[3] += 2993611;
        result[4] += 5739818;
        result[5] += 2993611;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8003044;
        result[3] += 20007611;
        result[4] += 533536;
        result[5] += 14405480;
      } else {
        result[0] += 2966493;
        result[1] += 0;
        result[2] += 31857565;
        result[3] += 7609701;
        result[4] += 0;
        result[5] += 515911;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32843867;
        result[3] += 8084644;
        result[4] += 0;
        result[5] += 2021161;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41016937;
        result[3] += 1789569;
        result[4] += 0;
        result[5] += 143165;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 3889143;
        result[2] += 0;
        result[3] += 1183652;
        result[4] += 36693224;
        result[5] += 1183652;
      } else {
        result[0] += 1162897;
        result[1] += 193816;
        result[2] += 465158;
        result[3] += 5039221;
        result[4] += 2325794;
        result[5] += 33762784;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 177112;
        result[1] += 39584543;
        result[2] += 619892;
        result[3] += 177112;
        result[4] += 2302456;
        result[5] += 88556;
      } else {
        result[0] += 26096307;
        result[1] += 1296412;
        result[2] += 2016641;
        result[3] += 4273360;
        result[4] += 4945574;
        result[5] += 4321375;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 260301;
        result[1] += 1822107;
        result[2] += 5986924;
        result[3] += 17700471;
        result[4] += 2603010;
        result[5] += 14576858;
      } else {
        result[0] += 968789;
        result[1] += 1291719;
        result[2] += 25188530;
        result[3] += 6458597;
        result[4] += 1291719;
        result[5] += 7750316;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        result[0] += 31236125;
        result[1] += 0;
        result[2] += 11713547;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 243755;
        result[1] += 0;
        result[2] += 38805833;
        result[3] += 3266320;
        result[4] += 48751;
        result[5] += 585012;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2008437;
        result[2] += 772476;
        result[3] += 154495;
        result[4] += 36769863;
        result[5] += 3244399;
      } else {
        result[0] += 1276786;
        result[1] += 425595;
        result[2] += 283730;
        result[3] += 6703128;
        result[4] += 3830358;
        result[5] += 30430073;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
        result[0] += 2890843;
        result[1] += 39542607;
        result[2] += 0;
        result[3] += 0;
        result[4] += 516222;
        result[5] += 0;
      } else {
        result[0] += 25081297;
        result[1] += 2810229;
        result[2] += 2107672;
        result[3] += 3653298;
        result[4] += 4871064;
        result[5] += 4426111;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17772278;
        result[3] += 19623557;
        result[4] += 0;
        result[5] += 5553837;
      } else {
        result[0] += 3609216;
        result[1] += 0;
        result[2] += 32482945;
        result[3] += 5413824;
        result[4] += 0;
        result[5] += 1443686;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 299300;
        result[1] += 0;
        result[2] += 36514704;
        result[3] += 5387415;
        result[4] += 0;
        result[5] += 748252;
      } else {
        result[0] += 152034;
        result[1] += 0;
        result[2] += 41809416;
        result[3] += 836188;
        result[4] += 0;
        result[5] += 152034;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1466574;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40226035;
        result[5] += 1257063;
      } else {
        result[0] += 1110169;
        result[1] += 416313;
        result[2] += 659162;
        result[3] += 6626322;
        result[4] += 1838717;
        result[5] += 32298986;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25124010;
        result[1] += 2344317;
        result[2] += 2897223;
        result[3] += 3560709;
        result[4] += 5617516;
        result[5] += 3405895;
      } else {
        result[0] += 298261;
        result[1] += 42551990;
        result[2] += 99420;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        result[0] += 290200;
        result[1] += 0;
        result[2] += 17702230;
        result[3] += 16541428;
        result[4] += 580400;
        result[5] += 7835413;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 9042036;
        result[1] += 6781527;
        result[2] += 9042036;
        result[3] += 0;
        result[4] += 13563054;
        result[5] += 4521018;
      } else {
        result[0] += 312740;
        result[1] += 0;
        result[2] += 39301035;
        result[3] += 2866786;
        result[4] += 0;
        result[5] += 469110;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
        result[0] += 0;
        result[1] += 416987;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41907205;
        result[5] += 625480;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1867377;
        result[3] += 3734754;
        result[4] += 22408525;
        result[5] += 14939016;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 2062301;
        result[1] += 537991;
        result[2] += 44832;
        result[3] += 986318;
        result[4] += 2555460;
        result[5] += 36762768;
      } else {
        result[0] += 239273;
        result[1] += 358910;
        result[2] += 2033828;
        result[3] += 21773928;
        result[4] += 717821;
        result[5] += 17825908;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41380735;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1568937;
        result[5] += 0;
      } else {
        result[0] += 29241767;
        result[1] += 2037661;
        result[2] += 291094;
        result[3] += 2778629;
        result[4] += 6086521;
        result[5] += 2513998;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 648786;
        result[1] += 0;
        result[2] += 20112384;
        result[3] += 13754275;
        result[4] += 259514;
        result[5] += 8174711;
      } else {
        result[0] += 1402635;
        result[1] += 0;
        result[2] += 38596665;
        result[3] += 2176503;
        result[4] += 145100;
        result[5] += 628767;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 157324;
        result[1] += 1258598;
        result[2] += 0;
        result[3] += 157324;
        result[4] += 39331202;
        result[5] += 2045222;
      } else {
        result[0] += 1377069;
        result[1] += 483835;
        result[2] += 223308;
        result[3] += 6178202;
        result[4] += 3386845;
        result[5] += 31300411;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 229268;
        result[1] += 36148034;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6572369;
        result[5] += 0;
      } else {
        result[0] += 29504787;
        result[1] += 686772;
        result[2] += 2033902;
        result[3] += 3486689;
        result[4] += 2852745;
        result[5] += 4384775;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 7405116;
        result[2] += 7405116;
        result[3] += 1481023;
        result[4] += 1481023;
        result[5] += 25177394;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7635497;
        result[3] += 21952055;
        result[4] += 636291;
        result[5] += 12725829;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 1385473;
        result[1] += 0;
        result[2] += 27313616;
        result[3] += 12271335;
        result[4] += 0;
        result[5] += 1979247;
      } else {
        result[0] += 1345411;
        result[1] += 0;
        result[2] += 39379157;
        result[3] += 2173356;
        result[4] += 0;
        result[5] += 51746;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5710759;
        result[1] += 2022560;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30576359;
        result[5] += 4639992;
      } else {
        result[0] += 153118;
        result[1] += 76559;
        result[2] += 114838;
        result[3] += 7273117;
        result[4] += 2411612;
        result[5] += 32920426;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42420000))) ) ) {
        result[0] += 1717986;
        result[1] += 40888088;
        result[2] += 0;
        result[3] += 0;
        result[4] += 343597;
        result[5] += 0;
      } else {
        result[0] += 25819851;
        result[1] += 3435063;
        result[2] += 2138384;
        result[3] += 3275822;
        result[4] += 5527950;
        result[5] += 2752600;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4294967;
        result[3] += 23192823;
        result[4] += 0;
        result[5] += 15461882;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26178848;
        result[3] += 14316557;
        result[4] += 0;
        result[5] += 2454267;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2112278;
        result[1] += 0;
        result[2] += 34500556;
        result[3] += 5045999;
        result[4] += 117348;
        result[5] += 1173488;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41566678;
        result[3] += 1382994;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 5567550;
        result[1] += 1749801;
        result[2] += 0;
        result[3] += 0;
        result[4] += 33723446;
        result[5] += 1908874;
      } else {
        result[0] += 0;
        result[1] += 630453;
        result[2] += 433437;
        result[3] += 6068118;
        result[4] += 2482412;
        result[5] += 33335250;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0;
        result[1] += 40988927;
        result[2] += 0;
        result[3] += 1120426;
        result[4] += 840319;
        result[5] += 0;
      } else {
        result[0] += 27923203;
        result[1] += 1017540;
        result[2] += 1893098;
        result[3] += 3762533;
        result[4] += 4803737;
        result[5] += 3549559;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 753503;
        result[1] += 941878;
        result[2] += 10737418;
        result[3] += 14504933;
        result[4] += 4332642;
        result[5] += 11679297;
      } else {
        result[0] += 2213900;
        result[1] += 3099460;
        result[2] += 32322949;
        result[3] += 4427801;
        result[4] += 885560;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7158278;
        result[3] += 3579139;
        result[4] += 0;
        result[5] += 32212254;
      } else {
        result[0] += 402338;
        result[1] += 0;
        result[2] += 39580085;
        result[3] += 2766079;
        result[4] += 0;
        result[5] += 201169;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 152303;
        result[1] += 3807595;
        result[2] += 0;
        result[3] += 1675341;
        result[4] += 35486786;
        result[5] += 1827645;
      } else {
        result[0] += 2030895;
        result[1] += 300873;
        result[2] += 413700;
        result[3] += 6656823;
        result[4] += 2294159;
        result[5] += 31253220;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 268855;
        result[1] += 33203659;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9141088;
        result[5] += 336069;
      } else {
        result[0] += 30584124;
        result[1] += 522100;
        result[2] += 1154117;
        result[3] += 3187563;
        result[4] += 3682185;
        result[5] += 3819580;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6841540;
        result[3] += 28886505;
        result[4] += 0;
        result[5] += 7221626;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25329294;
        result[3] += 9911462;
        result[4] += 0;
        result[5] += 7708915;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14810232;
        result[3] += 13329208;
        result[4] += 0;
        result[5] += 14810232;
      } else {
        result[0] += 832697;
        result[1] += 0;
        result[2] += 38128791;
        result[3] += 3199312;
        result[4] += 175304;
        result[5] += 613566;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 12461454;
        result[1] += 362954;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28310488;
        result[5] += 1814774;
      } else {
        result[0] += 113025;
        result[1] += 226050;
        result[2] += 75350;
        result[3] += 4068916;
        result[4] += 4860094;
        result[5] += 33606235;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 39150278;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3799394;
        result[5] += 0;
      } else {
        result[0] += 28913282;
        result[1] += 448267;
        result[2] += 2437456;
        result[3] += 5211114;
        result[4] += 2213323;
        result[5] += 3726227;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3221225;
        result[4] += 10737418;
        result[5] += 28991029;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7678153;
        result[3] += 23034461;
        result[4] += 719826;
        result[5] += 11517230;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 704092;
        result[1] += 1173488;
        result[2] += 23939161;
        result[3] += 14316557;
        result[4] += 0;
        result[5] += 2816371;
      } else {
        result[0] += 980586;
        result[1] += 0;
        result[2] += 38389947;
        result[3] += 2451465;
        result[4] += 539322;
        result[5] += 588351;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 42853588;
        result[2] += 0;
        result[3] += 0;
        result[4] += 96084;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 631612;
        result[1] += 140358;
        result[2] += 245627;
        result[3] += 4140573;
        result[4] += 9298744;
        result[5] += 28492756;
      } else {
        result[0] += 23487134;
        result[1] += 1960701;
        result[2] += 2992649;
        result[3] += 5655074;
        result[4] += 5015266;
        result[5] += 3838846;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 34896609;
        result[4] += 0;
        result[5] += 8053063;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12389328;
        result[3] += 9911462;
        result[4] += 0;
        result[5] += 20648881;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1203072;
        result[1] += 481228;
        result[2] += 31520488;
        result[3] += 7579354;
        result[4] += 601536;
        result[5] += 1563993;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40839625;
        result[3] += 1769717;
        result[4] += 0;
        result[5] += 340330;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 191739;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41799235;
        result[5] += 958698;
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1085806;
        result[1] += 683655;
        result[2] += 804300;
        result[3] += 2975913;
        result[4] += 2010752;
        result[5] += 35389243;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 926971;
        result[3] += 29354093;
        result[4] += 308990;
        result[5] += 12359618;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 19522578;
        result[2] += 0;
        result[3] += 0;
        result[4] += 23427094;
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 29138815;
        result[1] += 1386317;
        result[2] += 680080;
        result[3] += 2432594;
        result[4] += 6094563;
        result[5] += 3217301;
      } else {
        result[0] += 2009148;
        result[1] += 296431;
        result[2] += 31586454;
        result[3] += 6323878;
        result[4] += 296431;
        result[5] += 2437328;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 4048534;
        result[2] += 1408185;
        result[3] += 0;
        result[4] += 35028626;
        result[5] += 2464325;
      } else {
        result[0] += 1188785;
        result[1] += 421827;
        result[2] += 268435;
        result[3] += 6058971;
        result[4] += 2684354;
        result[5] += 32327298;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 40684394;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2265278;
        result[5] += 0;
      } else {
        result[0] += 24893014;
        result[1] += 976622;
        result[2] += 1866433;
        result[3] += 4535867;
        result[4] += 5859733;
        result[5] += 4818002;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 335544;
        result[1] += 0;
        result[2] += 13086228;
        result[3] += 23823646;
        result[4] += 0;
        result[5] += 5704253;
      } else {
        result[0] += 1091940;
        result[1] += 0;
        result[2] += 34760116;
        result[3] += 6187664;
        result[4] += 0;
        result[5] += 909950;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 6607641;
        result[1] += 0;
        result[2] += 23126746;
        result[3] += 8259552;
        result[4] += 0;
        result[5] += 4955731;
      } else {
        result[0] += 208156;
        result[1] += 0;
        result[2] += 41353804;
        result[3] += 1387711;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 315806;
        result[1] += 1579032;
        result[2] += 157903;
        result[3] += 631612;
        result[4] += 38686286;
        result[5] += 1579032;
      } else {
        result[0] += 2011611;
        result[1] += 705828;
        result[2] += 35291;
        result[3] += 6634789;
        result[4] += 2082194;
        result[5] += 31479957;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 340195;
        result[1] += 37676643;
        result[2] += 0;
        result[3] += 425244;
        result[4] += 4507589;
        result[5] += 0;
      } else {
        result[0] += 27799533;
        result[1] += 946883;
        result[2] += 2719255;
        result[3] += 3617581;
        result[4] += 3811813;
        result[5] += 4054604;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2006994;
        result[1] += 1204196;
        result[2] += 6020982;
        result[3] += 13647559;
        result[4] += 2006994;
        result[5] += 18062946;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34107093;
        result[3] += 6316128;
        result[4] += 0;
        result[5] += 2526451;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1435072;
        result[1] += 307515;
        result[2] += 33416690;
        result[3] += 7482878;
        result[4] += 0;
        result[5] += 307515;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42351963;
        result[3] += 597709;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7632622;
        result[1] += 517465;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31953521;
        result[5] += 2846062;
      } else {
        result[0] += 171250;
        result[1] += 239750;
        result[2] += 0;
        result[3] += 7089778;
        result[4] += 3048262;
        result[5] += 32400630;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 40931903;
        result[2] += 0;
        result[3] += 192168;
        result[4] += 1633432;
        result[5] += 192168;
      } else {
        result[0] += 27451260;
        result[1] += 2632312;
        result[2] += 2095105;
        result[3] += 2739753;
        result[4] += 5560088;
        result[5] += 2471150;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c20000))) ) ) {
        result[0] += 687194;
        result[1] += 2405181;
        result[2] += 3435973;
        result[3] += 15805479;
        result[4] += 1717986;
        result[5] += 18897856;
      } else {
        result[0] += 11833073;
        result[1] += 0;
        result[2] += 23227884;
        result[3] += 2191309;
        result[4] += 876523;
        result[5] += 4820881;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2153818;
        result[1] += 0;
        result[2] += 30153457;
        result[3] += 8741968;
        result[4] += 0;
        result[5] += 1900428;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40910922;
        result[3] += 2038750;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7540782;
        result[1] += 2076447;
        result[2] += 0;
        result[3] += 765006;
        result[4] += 26775241;
        result[5] += 5792195;
      } else {
        result[0] += 391241;
        result[1] += 43471;
        result[2] += 86942;
        result[3] += 2738693;
        result[4] += 4042833;
        result[5] += 35646489;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        result[0] += 288252;
        result[1] += 39586723;
        result[2] += 0;
        result[3] += 672589;
        result[4] += 2113854;
        result[5] += 288252;
      } else {
        result[0] += 26315426;
        result[1] += 1424412;
        result[2] += 1907264;
        result[3] += 5142372;
        result[4] += 4031813;
        result[5] += 4128383;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 216917;
        result[2] += 4772185;
        result[3] += 21257918;
        result[4] += 3253763;
        result[5] += 13448887;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28185722;
        result[3] += 4026531;
        result[4] += 6039797;
        result[5] += 4697620;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 357913;
        result[1] += 1789569;
        result[2] += 25769803;
        result[3] += 9663676;
        result[4] += 715827;
        result[5] += 4652881;
      } else {
        result[0] += 461824;
        result[1] += 0;
        result[2] += 38793252;
        result[3] += 3335398;
        result[4] += 102627;
        result[5] += 256569;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 307882;
        result[2] += 0;
        result[3] += 1231531;
        result[4] += 39562960;
        result[5] += 1847297;
      } else {
        result[0] += 1938490;
        result[1] += 90866;
        result[2] += 393755;
        result[3] += 7663093;
        result[4] += 2301957;
        result[5] += 30561509;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 41486667;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1463005;
        result[5] += 0;
      } else {
        result[0] += 27734089;
        result[1] += 1730200;
        result[2] += 3205958;
        result[3] += 3689397;
        result[4] += 4503609;
        result[5] += 2086417;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 2603010;
        result[2] += 5206020;
        result[3] += 9110536;
        result[4] += 2603010;
        result[5] += 23427094;
      } else {
        result[0] += 383479;
        result[1] += 0;
        result[2] += 30103118;
        result[3] += 11120897;
        result[4] += 0;
        result[5] += 1342177;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 3579139;
        result[1] += 0;
        result[2] += 10737418;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 17895697;
      } else {
        result[0] += 235987;
        result[1] += 235987;
        result[2] += 39763845;
        result[3] += 2477865;
        result[4] += 58996;
        result[5] += 176990;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 268435;
        result[1] += 1476395;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39057358;
        result[5] += 2147483;
      } else {
        result[0] += 0;
        result[1] += 5237764;
        result[2] += 0;
        result[3] += 11523082;
        result[4] += 4190211;
        result[5] += 21998612;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
        result[0] += 38051903;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3767515;
        result[5] += 1130254;
      } else {
        result[0] += 490293;
        result[1] += 424920;
        result[2] += 98058;
        result[3] += 8956020;
        result[4] += 2059230;
        result[5] += 30921149;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 38096085;
        result[2] += 183154;
        result[3] += 366308;
        result[4] += 3846239;
        result[5] += 457885;
      } else {
        result[0] += 32560119;
        result[1] += 1515143;
        result[2] += 649347;
        result[3] += 2040805;
        result[4] += 4298059;
        result[5] += 1886198;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 533536;
        result[1] += 0;
        result[2] += 17339930;
        result[3] += 16006089;
        result[4] += 0;
        result[5] += 9070117;
      } else {
        result[0] += 1307897;
        result[1] += 0;
        result[2] += 37253989;
        result[3] += 3079888;
        result[4] += 168760;
        result[5] += 1139136;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 539117;
        result[1] += 359411;
        result[2] += 359411;
        result[3] += 718822;
        result[4] += 37738206;
        result[5] += 3234703;
      } else {
        result[0] += 1303700;
        result[1] += 36213;
        result[2] += 72427;
        result[3] += 7206564;
        result[4] += 3404105;
        result[5] += 30926661;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41880789;
        result[2] += 0;
        result[3] += 291513;
        result[4] += 777369;
        result[5] += 0;
      } else {
        result[0] += 27808957;
        result[1] += 2192090;
        result[2] += 2243068;
        result[3] += 2829325;
        result[4] += 4639074;
        result[5] += 3237156;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2231151;
        result[3] += 1673363;
        result[4] += 2231151;
        result[5] += 36814005;
      } else {
        result[0] += 602098;
        result[1] += 602098;
        result[2] += 15052455;
        result[3] += 19668541;
        result[4] += 1003497;
        result[5] += 6020982;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 226050;
        result[1] += 0;
        result[2] += 31873178;
        result[3] += 7685730;
        result[4] += 0;
        result[5] += 3164712;
      } else {
        result[0] += 2112278;
        result[1] += 216643;
        result[2] += 38508470;
        result[3] += 2003956;
        result[4] += 108321;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2019001;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39645851;
        result[5] += 1284819;
      } else {
        result[0] += 1515041;
        result[1] += 352335;
        result[2] += 140934;
        result[3] += 6447735;
        result[4] += 1937844;
        result[5] += 32555781;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 384853;
        result[1] += 34251979;
        result[2] += 230912;
        result[3] += 230912;
        result[4] += 7466161;
        result[5] += 384853;
      } else {
        result[0] += 31826808;
        result[1] += 550636;
        result[2] += 1293996;
        result[3] += 3193693;
        result[4] += 3056034;
        result[5] += 3028502;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
        result[0] += 0;
        result[1] += 2726963;
        result[2] += 3067833;
        result[3] += 14998298;
        result[4] += 5113056;
        result[5] += 17043521;
      } else {
        result[0] += 8589934;
        result[1] += 0;
        result[2] += 20401094;
        result[3] += 5368709;
        result[4] += 2684354;
        result[5] += 5905580;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 325376;
        result[2] += 24240535;
        result[3] += 13340428;
        result[4] += 0;
        result[5] += 5043332;
      } else {
        result[0] += 875407;
        result[1] += 0;
        result[2] += 39502756;
        result[3] += 2516796;
        result[4] += 0;
        result[5] += 54712;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3643052;
        result[2] += 0;
        result[3] += 575218;
        result[4] += 36238786;
        result[5] += 2492614;
      } else {
        result[0] += 1289564;
        result[1] += 0;
        result[2] += 752246;
        result[3] += 6232896;
        result[4] += 2292559;
        result[5] += 32382405;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 40757346;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2192326;
        result[5] += 0;
      } else {
        result[0] += 27731284;
        result[1] += 1256120;
        result[2] += 2270680;
        result[3] += 3140302;
        result[4] += 5869949;
        result[5] += 2681335;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 284434;
        result[1] += 853304;
        result[2] += 5119828;
        result[3] += 17634965;
        result[4] += 3128784;
        result[5] += 15928355;
      } else {
        result[0] += 0;
        result[1] += 780903;
        result[2] += 23427094;
        result[3] += 12103998;
        result[4] += 390451;
        result[5] += 6247225;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2825636;
        result[1] += 0;
        result[2] += 24865600;
        result[3] += 6781527;
        result[4] += 1130254;
        result[5] += 7346654;
      } else {
        result[0] += 801860;
        result[1] += 100232;
        result[2] += 38840135;
        result[3] += 2956861;
        result[4] += 0;
        result[5] += 250581;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7645491;
        result[1] += 2023806;
        result[2] += 0;
        result[3] += 674602;
        result[4] += 29120327;
        result[5] += 3485444;
      } else {
        result[0] += 314485;
        result[1] += 224632;
        result[2] += 134779;
        result[3] += 2965144;
        result[4] += 3549188;
        result[5] += 35761443;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41997352;
        result[2] += 0;
        result[3] += 0;
        result[4] += 952320;
        result[5] += 0;
      } else {
        result[0] += 26345417;
        result[1] += 1229944;
        result[2] += 1008554;
        result[3] += 4919779;
        result[4] += 5018174;
        result[5] += 4427801;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 373475;
        result[1] += 1867377;
        result[2] += 6535819;
        result[3] += 22035049;
        result[4] += 2240852;
        result[5] += 9897098;
      } else {
        result[0] += 3616814;
        result[1] += 2712610;
        result[2] += 31647127;
        result[3] += 2260509;
        result[4] += 0;
        result[5] += 2712610;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 35433480;
        result[1] += 1073741;
        result[2] += 5368709;
        result[3] += 0;
        result[4] += 1073741;
        result[5] += 0;
      } else {
        result[0] += 185527;
        result[1] += 0;
        result[2] += 38450625;
        result[3] += 3664172;
        result[4] += 0;
        result[5] += 649347;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 346368;
        result[1] += 346368;
        result[2] += 519552;
        result[3] += 0;
        result[4] += 40525094;
        result[5] += 1212289;
      } else {
        result[0] += 1471124;
        result[1] += 466454;
        result[2] += 143524;
        result[3] += 5740975;
        result[4] += 2332271;
        result[5] += 32795322;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 142453;
        result[1] += 36111914;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6695305;
        result[5] += 0;
      } else {
        result[0] += 30784406;
        result[1] += 485468;
        result[2] += 2084658;
        result[3] += 3341164;
        result[4] += 3769519;
        result[5] += 2484455;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6817408;
        result[3] += 3408704;
        result[4] += 5453926;
        result[5] += 27269633;
      } else {
        result[0] += 1087333;
        result[1] += 724888;
        result[2] += 12504335;
        result[3] += 22834003;
        result[4] += 362444;
        result[5] += 5436667;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
        result[0] += 14489046;
        result[1] += 5692125;
        result[2] += 12419182;
        result[3] += 2069863;
        result[4] += 1552397;
        result[5] += 6727057;
      } else {
        result[0] += 241019;
        result[1] += 0;
        result[2] += 38466710;
        result[3] += 3470680;
        result[4] += 48203;
        result[5] += 723058;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5351106;
        result[1] += 1971460;
        result[2] += 0;
        result[3] += 563274;
        result[4] += 29431087;
        result[5] += 5632743;
      } else {
        result[0] += 0;
        result[1] += 396580;
        result[2] += 396580;
        result[3] += 6702211;
        result[4] += 2498457;
        result[5] += 32955843;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41014172;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1935500;
        result[5] += 0;
      } else {
        result[0] += 26776991;
        result[1] += 1020498;
        result[2] += 2684354;
        result[3] += 4592242;
        result[4] += 4969383;
        result[5] += 2906202;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1789569;
        result[3] += 0;
        result[4] += 3579139;
        result[5] += 37580963;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16361780;
        result[3] += 24542670;
        result[4] += 0;
        result[5] += 2045222;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3435973;
        result[3] += 20615843;
        result[4] += 0;
        result[5] += 18897856;
      } else {
        result[0] += 311229;
        result[1] += 133384;
        result[2] += 37836616;
        result[3] += 3823676;
        result[4] += 133384;
        result[5] += 711381;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 0;
        result[1] += 41772969;
        result[2] += 0;
        result[3] += 98058;
        result[4] += 1078644;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        result[0] += 2128622;
        result[1] += 673614;
        result[2] += 646670;
        result[3] += 5496695;
        result[4] += 8137265;
        result[5] += 25866804;
      } else {
        result[0] += 27796987;
        result[1] += 1945277;
        result[2] += 2380404;
        result[3] += 3045894;
        result[4] += 5579874;
        result[5] += 2201234;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 998829;
        result[2] += 5493562;
        result[3] += 14982444;
        result[4] += 3495903;
        result[5] += 17978932;
      } else {
        result[0] += 530242;
        result[1] += 795364;
        result[2] += 29163358;
        result[3] += 9544371;
        result[4] += 265121;
        result[5] += 2651214;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4772185;
        result[3] += 0;
        result[4] += 38177487;
        result[5] += 0;
      } else {
        result[0] += 352459;
        result[1] += 100702;
        result[2] += 39475432;
        result[3] += 2718971;
        result[4] += 0;
        result[5] += 302107;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6598736;
        result[1] += 1968044;
        result[2] += 0;
        result[3] += 578836;
        result[4] += 29289130;
        result[5] += 4514925;
      } else {
        result[0] += 208493;
        result[1] += 277991;
        result[2] += 799225;
        result[3] += 7193027;
        result[4] += 3127403;
        result[5] += 31343531;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
        result[0] += 154773;
        result[1] += 35520540;
        result[2] += 0;
        result[3] += 232160;
        result[4] += 7042198;
        result[5] += 0;
      } else {
        result[0] += 32190024;
        result[1] += 1808095;
        result[2] += 1007790;
        result[3] += 2460195;
        result[4] += 3408704;
        result[5] += 2074863;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3473870;
        result[3] += 23053868;
        result[4] += 0;
        result[5] += 16421933;
      } else {
        result[0] += 543666;
        result[1] += 3805667;
        result[2] += 18484669;
        result[3] += 8155001;
        result[4] += 3805667;
        result[5] += 8155001;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1168698;
        result[1] += 0;
        result[2] += 33307909;
        result[3] += 6720016;
        result[4] += 194783;
        result[5] += 1558264;
      } else {
        result[0] += 307332;
        result[1] += 0;
        result[2] += 41182512;
        result[3] += 1306161;
        result[4] += 0;
        result[5] += 153666;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6652530;
        result[1] += 466844;
        result[2] += 0;
        result[3] += 0;
        result[4] += 31045144;
        result[5] += 4785153;
      } else {
        result[0] += 36521;
        result[1] += 730436;
        result[2] += 328696;
        result[3] += 7706106;
        result[4] += 2337397;
        result[5] += 31810514;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 27182055;
        result[1] += 2556226;
        result[2] += 2556226;
        result[3] += 2910555;
        result[4] += 4327869;
        result[5] += 3416738;
      } else {
        result[0] += 418001;
        result[1] += 42218170;
        result[2] += 0;
        result[3] += 0;
        result[4] += 313501;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2260509;
        result[3] += 1130254;
        result[4] += 13563054;
        result[5] += 25995854;
      } else {
        result[0] += 0;
        result[1] += 454493;
        result[2] += 16134533;
        result[3] += 17725261;
        result[4] += 1136234;
        result[5] += 7499149;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
        result[0] += 20924199;
        result[1] += 7708915;
        result[2] += 11012736;
        result[3] += 0;
        result[4] += 2202547;
        result[5] += 1101273;
      } else {
        result[0] += 236507;
        result[1] += 189205;
        result[2] += 39023656;
        result[3] += 2648878;
        result[4] += 189205;
        result[5] += 662219;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 470251;
        result[1] += 2351259;
        result[2] += 0;
        result[3] += 627002;
        result[4] += 36993148;
        result[5] += 2508010;
      } else {
        result[0] += 2172310;
        result[1] += 434462;
        result[2] += 93099;
        result[3] += 6796227;
        result[4] += 2637805;
        result[5] += 30815769;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 42546389;
        result[2] += 0;
        result[3] += 0;
        result[4] += 403283;
        result[5] += 0;
      } else {
        result[0] += 28513963;
        result[1] += 2529686;
        result[2] += 1402326;
        result[3] += 2612176;
        result[4] += 5499317;
        result[5] += 2392203;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11471030;
        result[3] += 21874988;
        result[4] += 0;
        result[5] += 9603653;
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
        result[2] += 21474836;
        result[3] += 14810232;
        result[4] += 0;
        result[5] += 6664604;
      } else {
        result[0] += 689032;
        result[1] += 0;
        result[2] += 38539866;
        result[3] += 3445160;
        result[4] += 0;
        result[5] += 275612;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 709911;
        result[2] += 0;
        result[3] += 709911;
        result[4] += 39222635;
        result[5] += 2307213;
      } else {
        result[0] += 1642298;
        result[1] += 714042;
        result[2] += 0;
        result[3] += 6890512;
        result[4] += 1820809;
        result[5] += 31882009;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 41415756;
        result[2] += 0;
        result[3] += 575218;
        result[4] += 958698;
        result[5] += 0;
      } else {
        result[0] += 24555662;
        result[1] += 1682517;
        result[2] += 3751559;
        result[3] += 3819769;
        result[4] += 6138915;
        result[5] += 3001247;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 499414;
        result[2] += 3995318;
        result[3] += 10987125;
        result[4] += 2996488;
        result[5] += 24471325;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24159191;
        result[3] += 14763950;
        result[4] += 0;
        result[5] += 4026531;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 985084;
        result[1] += 985084;
        result[2] += 30143577;
        result[3] += 9259791;
        result[4] += 0;
        result[5] += 1576134;
      } else {
        result[0] += 970614;
        result[1] += 60663;
        result[2] += 39249206;
        result[3] += 2062554;
        result[4] += 0;
        result[5] += 606633;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 750868;
        result[2] += 0;
        result[3] += 1802084;
        result[4] += 37092899;
        result[5] += 3303820;
      } else {
        result[0] += 2761264;
        result[1] += 300137;
        result[2] += 240109;
        result[3] += 7743546;
        result[4] += 2731251;
        result[5] += 29173362;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 239051;
        result[1] += 37292109;
        result[2] += 0;
        result[3] += 159367;
        result[4] += 5020091;
        result[5] += 239051;
      } else {
        result[0] += 32598833;
        result[1] += 725821;
        result[2] += 1767216;
        result[3] += 2777054;
        result[4] += 3345088;
        result[5] += 1735659;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5368709;
        result[3] += 1789569;
        result[4] += 0;
        result[5] += 35791394;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15240206;
        result[3] += 21890478;
        result[4] += 0;
        result[5] += 5818987;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1903357;
        result[1] += 0;
        result[2] += 34425942;
        result[3] += 5296298;
        result[4] += 165509;
        result[5] += 1158565;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41857019;
        result[3] += 840502;
        result[4] += 0;
        result[5] += 252150;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 4538078;
        result[2] += 0;
        result[3] += 1134519;
        result[4] += 35332183;
        result[5] += 1944890;
      } else {
        result[0] += 1724750;
        result[1] += 33818;
        result[2] += 541098;
        result[3] += 5816806;
        result[4] += 2840765;
        result[5] += 31992433;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 39482883;
        result[2] += 0;
        result[3] += 866697;
        result[4] += 2311193;
        result[5] += 288899;
      } else {
        result[0] += 26663469;
        result[1] += 903432;
        result[2] += 3174222;
        result[3] += 4443911;
        result[4] += 4370660;
        result[5] += 3393976;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 1908874;
        result[2] += 7635497;
        result[3] += 4772185;
        result[4] += 3817748;
        result[5] += 24815366;
      } else {
        result[0] += 1610612;
        result[1] += 0;
        result[2] += 20401094;
        result[3] += 18253611;
        result[4] += 0;
        result[5] += 2684354;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 12884901;
        result[2] += 4294967;
        result[3] += 0;
        result[4] += 0;
        result[5] += 25769803;
      } else {
        result[0] += 838282;
        result[1] += 0;
        result[2] += 39448608;
        result[3] += 2514848;
        result[4] += 0;
        result[5] += 147932;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 273564;
        result[1] += 41490660;
        result[2] += 455941;
        result[3] += 455941;
        result[4] += 273564;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        result[0] += 1742722;
        result[1] += 168650;
        result[2] += 196758;
        result[3] += 5621684;
        result[4] += 8516852;
        result[5] += 26703003;
      } else {
        result[0] += 25687487;
        result[1] += 2009483;
        result[2] += 2735802;
        result[3] += 3486331;
        result[4] += 6101080;
        result[5] += 2929487;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 2454267;
        result[2] += 8589934;
        result[3] += 10430634;
        result[4] += 0;
        result[5] += 21474836;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 12371373;
        result[4] += 233422;
        result[5] += 3501332;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 780903;
        result[1] += 1561806;
        result[2] += 24988900;
        result[3] += 8589934;
        result[4] += 780903;
        result[5] += 6247225;
      } else {
        result[0] += 233739;
        result[1] += 0;
        result[2] += 40787580;
        result[3] += 1869917;
        result[4] += 0;
        result[5] += 58434;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5658040;
        result[1] += 3729163;
        result[2] += 0;
        result[3] += 257183;
        result[4] += 29061754;
        result[5] += 4243530;
      } else {
        result[0] += 111557;
        result[1] += 185929;
        result[2] += 855274;
        result[3] += 6656269;
        result[4] += 2863311;
        result[5] += 32277329;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 95656;
        result[1] += 41036547;
        result[2] += 0;
        result[3] += 286968;
        result[4] += 1147875;
        result[5] += 382625;
      } else {
        result[0] += 29265891;
        result[1] += 843701;
        result[2] += 975529;
        result[3] += 2926589;
        result[4] += 5800446;
        result[5] += 3137514;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3681400;
        result[3] += 0;
        result[4] += 3681400;
        result[5] += 35586871;
      } else {
        result[0] += 155614;
        result[1] += 778073;
        result[2] += 13071639;
        result[3] += 21163606;
        result[4] += 1711762;
        result[5] += 6068975;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1348661;
        result[1] += 0;
        result[2] += 34961448;
        result[3] += 5394644;
        result[4] += 311229;
        result[5] += 933688;
      } else {
        result[0] += 160860;
        result[1] += 0;
        result[2] += 41823651;
        result[3] += 965161;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8951816;
        result[1] += 95232;
        result[2] += 0;
        result[3] += 1238017;
        result[4] += 27998234;
        result[5] += 4666372;
      } else {
        result[0] += 98508;
        result[1] += 262689;
        result[2] += 394033;
        result[3] += 8307543;
        result[4] += 3020925;
        result[5] += 30865972;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        result[0] += 181605;
        result[1] += 40679605;
        result[2] += 0;
        result[3] += 181605;
        result[4] += 1906856;
        result[5] += 0;
      } else {
        result[0] += 31203520;
        result[1] += 2241632;
        result[2] += 1165648;
        result[3] += 2719847;
        result[4] += 3915384;
        result[5] += 1703640;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8033751;
        result[3] += 19775388;
        result[4] += 308990;
        result[5] += 14831541;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32641751;
        result[3] += 1717986;
        result[4] += 0;
        result[5] += 8589934;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1758173;
        result[1] += 0;
        result[2] += 33405301;
        result[3] += 6781527;
        result[4] += 0;
        result[5] += 1004670;
      } else {
        result[0] += 197924;
        result[1] += 0;
        result[2] += 40508600;
        result[3] += 1913272;
        result[4] += 0;
        result[5] += 329874;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 171114;
        result[1] += 1882256;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40382959;
        result[5] += 513342;
      } else {
        result[0] += 24024973;
        result[1] += 1073741;
        result[2] += 0;
        result[3] += 1342177;
        result[4] += 10468982;
        result[5] += 6039797;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 206488;
        result[2] += 51622;
        result[3] += 1600288;
        result[4] += 3510309;
        result[5] += 37580963;
      } else {
        result[0] += 2106273;
        result[1] += 366308;
        result[2] += 183154;
        result[3] += 15934420;
        result[4] += 3296776;
        result[5] += 21062739;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 352046;
        result[1] += 39693242;
        result[2] += 0;
        result[3] += 264034;
        result[4] += 2552337;
        result[5] += 88011;
      } else {
        result[0] += 34247206;
        result[1] += 1425403;
        result[2] += 862744;
        result[3] += 2550722;
        result[4] += 2625744;
        result[5] += 1237850;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 2409717;
        result[1] += 1984473;
        result[2] += 12048588;
        result[3] += 14600053;
        result[4] += 1559229;
        result[5] += 10347610;
      } else {
        result[0] += 1814180;
        result[1] += 84380;
        result[2] += 36367994;
        result[3] += 3754932;
        result[4] += 42190;
        result[5] += 885995;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3490609;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38852000;
        result[5] += 607062;
      } else {
        result[0] += 1494852;
        result[1] += 182299;
        result[2] += 72919;
        result[3] += 6125250;
        result[4] += 2734486;
        result[5] += 32339864;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41695667;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1254005;
        result[5] += 0;
      } else {
        result[0] += 28524020;
        result[1] += 1233607;
        result[2] += 1737120;
        result[3] += 2794498;
        result[4] += 5009955;
        result[5] += 3650470;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 433835;
        result[3] += 18221073;
        result[4] += 2169175;
        result[5] += 22125589;
      } else {
        result[0] += 0;
        result[1] += 780903;
        result[2] += 17179869;
        result[3] += 18741675;
        result[4] += 1301505;
        result[5] += 4945719;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
        result[0] += 5153960;
        result[1] += 0;
        result[2] += 8589934;
        result[3] += 1717986;
        result[4] += 24051816;
        result[5] += 3435973;
      } else {
        result[0] += 447858;
        result[1] += 44785;
        result[2] += 37799295;
        result[3] += 3985944;
        result[4] += 0;
        result[5] += 671788;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 8142874;
        result[1] += 638656;
        result[2] += 798321;
        result[3] += 0;
        result[4] += 31613513;
        result[5] += 1756306;
      } else {
        result[0] += 0;
        result[1] += 502531;
        result[2] += 770547;
        result[3] += 7370458;
        result[4] += 2680166;
        result[5] += 31625968;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 41889187;
        result[2] += 0;
        result[3] += 636291;
        result[4] += 424194;
        result[5] += 0;
      } else {
        result[0] += 25803470;
        result[1] += 1466926;
        result[2] += 2356700;
        result[3] += 3775531;
        result[4] += 6276519;
        result[5] += 3270523;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4555268;
        result[3] += 14316557;
        result[4] += 0;
        result[5] += 24077846;
      } else {
        result[0] += 376751;
        result[1] += 376751;
        result[2] += 29009866;
        result[3] += 9042036;
        result[4] += 1507006;
        result[5] += 2637260;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 4294967;
        result[1] += 5726623;
        result[2] += 17179869;
        result[3] += 5726623;
        result[4] += 0;
        result[5] += 10021590;
      } else {
        result[0] += 98283;
        result[1] += 0;
        result[2] += 39952041;
        result[3] += 2850207;
        result[4] += 0;
        result[5] += 49141;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 519552;
        result[1] += 3117314;
        result[2] += 0;
        result[3] += 865920;
        result[4] += 36715043;
        result[5] += 1731841;
      } else {
        result[0] += 1443109;
        result[1] += 34359;
        result[2] += 206158;
        result[3] += 6219112;
        result[4] += 2576980;
        result[5] += 32469952;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41405415;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1544257;
        result[5] += 0;
      } else {
        result[0] += 27087725;
        result[1] += 885560;
        result[2] += 2057625;
        result[3] += 2969231;
        result[4] += 6667747;
        result[5] += 3281782;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 273564;
        result[2] += 5744860;
        result[3] += 22158748;
        result[4] += 1641388;
        result[5] += 13131110;
      } else {
        result[0] += 394033;
        result[1] += 0;
        result[2] += 33098830;
        result[3] += 7092606;
        result[4] += 0;
        result[5] += 2364202;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 18084072;
        result[1] += 15823563;
        result[2] += 4521018;
        result[3] += 4521018;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 995672;
        result[1] += 0;
        result[2] += 39238531;
        result[3] += 2534438;
        result[4] += 0;
        result[5] += 181031;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7487936;
        result[1] += 282563;
        result[2] += 282563;
        result[3] += 423845;
        result[4] += 30375591;
        result[5] += 4097172;
      } else {
        result[0] += 324284;
        result[1] += 684600;
        result[2] += 684600;
        result[3] += 6809973;
        result[4] += 1981738;
        result[5] += 32464475;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41408416;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1541256;
        result[5] += 0;
      } else {
        result[0] += 26828640;
        result[1] += 1359317;
        result[2] += 2766330;
        result[3] += 3362522;
        result[4] += 5222642;
        result[5] += 3410218;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 1263225;
        result[2] += 17685159;
        result[3] += 16106127;
        result[4] += 947419;
        result[5] += 6947741;
      } else {
        result[0] += 2045222;
        result[1] += 1168698;
        result[2] += 33600084;
        result[3] += 3213921;
        result[4] += 1753047;
        result[5] += 1168698;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37784838;
        result[3] += 5164834;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 80430;
        result[1] += 0;
        result[2] += 41904081;
        result[3] += 965161;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7362801;
        result[1] += 306783;
        result[2] += 0;
        result[3] += 0;
        result[4] += 33592779;
        result[5] += 1687308;
      } else {
        result[0] += 0;
        result[1] += 247854;
        result[2] += 35407;
        result[3] += 6196366;
        result[4] += 2726401;
        result[5] += 33743642;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        result[0] += 523776;
        result[1] += 40592678;
        result[2] += 0;
        result[3] += 349184;
        result[4] += 1484033;
        result[5] += 0;
      } else {
        result[0] += 28117053;
        result[1] += 1822864;
        result[2] += 2072571;
        result[3] += 3470932;
        result[4] += 4819352;
        result[5] += 2646898;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2551465;
        result[3] += 25089412;
        result[4] += 425244;
        result[5] += 14883550;
      } else {
        result[0] += 292174;
        result[1] += 876523;
        result[2] += 26587892;
        result[3] += 10226112;
        result[4] += 0;
        result[5] += 4966968;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 9203501;
        result[1] += 1533916;
        result[2] += 19940919;
        result[3] += 4601750;
        result[4] += 1533916;
        result[5] += 6135667;
      } else {
        result[0] += 946259;
        result[1] += 0;
        result[2] += 38954354;
        result[3] += 2733638;
        result[4] += 0;
        result[5] += 315419;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 712857;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39920027;
        result[5] += 2316787;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 60237;
        result[3] += 1626425;
        result[4] += 1746901;
        result[5] += 39516108;
      } else {
        result[0] += 3491843;
        result[1] += 1047552;
        result[2] += 1187226;
        result[3] += 12221451;
        result[4] += 4120375;
        result[5] += 20881223;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41524802;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1424870;
        result[5] += 0;
      } else {
        result[0] += 30263083;
        result[1] += 1657134;
        result[2] += 733485;
        result[3] += 2689448;
        result[4] += 4509579;
        result[5] += 3096940;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 318145;
        result[1] += 0;
        result[2] += 15907286;
        result[3] += 19088743;
        result[4] += 477218;
        result[5] += 7158278;
      } else {
        result[0] += 1665395;
        result[1] += 87652;
        result[2] += 37033136;
        result[3] += 3374617;
        result[4] += 43826;
        result[5] += 745045;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4673934;
        result[1] += 1136903;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32085932;
        result[5] += 5052902;
      } else {
        result[0] += 305148;
        result[1] += 343292;
        result[2] += 495866;
        result[3] += 7895721;
        result[4] += 2708194;
        result[5] += 31201449;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 93166;
        result[1] += 40527348;
        result[2] += 0;
        result[3] += 931663;
        result[4] += 1397494;
        result[5] += 0;
      } else {
        result[0] += 26596947;
        result[1] += 1307267;
        result[2] += 2566997;
        result[3] += 3208747;
        result[4] += 4682393;
        result[5] += 4587319;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 2816371;
        result[2] += 3520464;
        result[3] += 23939161;
        result[4] += 2112278;
        result[5] += 10561394;
      } else {
        result[0] += 3181457;
        result[1] += 0;
        result[2] += 20149229;
        result[3] += 7953643;
        result[4] += 0;
        result[5] += 11665343;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1590728;
        result[1] += 0;
        result[2] += 33007619;
        result[3] += 7953643;
        result[4] += 0;
        result[5] += 397682;
      } else {
        result[0] += 165828;
        result[1] += 0;
        result[2] += 41208469;
        result[3] += 1326630;
        result[4] += 0;
        result[5] += 248743;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 202592;
        result[1] += 2532409;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37682260;
        result[5] += 2532409;
      } else {
        result[0] += 0;
        result[1] += 42484849;
        result[2] += 0;
        result[3] += 0;
        result[4] += 464823;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 1039749;
        result[1] += 39990;
        result[2] += 679836;
        result[3] += 5398701;
        result[4] += 2119490;
        result[5] += 33671903;
      } else {
        result[0] += 27298725;
        result[1] += 675233;
        result[2] += 2676818;
        result[3] += 5184828;
        result[4] += 2845626;
        result[5] += 4268440;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3579139;
        result[3] += 16106127;
        result[4] += 4026531;
        result[5] += 19237874;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31036624;
        result[3] += 8778035;
        result[4] += 0;
        result[5] += 3135012;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 25769803;
        result[1] += 5368709;
        result[2] += 9663676;
        result[3] += 1073741;
        result[4] += 1073741;
        result[5] += 0;
      } else {
        result[0] += 687617;
        result[1] += 0;
        result[2] += 38612390;
        result[3] += 3490983;
        result[4] += 0;
        result[5] += 158681;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 818089;
        result[1] += 2317918;
        result[2] += 0;
        result[3] += 681740;
        result[4] += 35723220;
        result[5] += 3408704;
      } else {
        result[0] += 33444417;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3168418;
        result[5] += 6336836;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 48695;
        result[1] += 292174;
        result[2] += 194783;
        result[3] += 1704352;
        result[4] += 2678267;
        result[5] += 38031399;
      } else {
        result[0] += 813783;
        result[1] += 452101;
        result[2] += 904203;
        result[3] += 20073320;
        result[4] += 2350929;
        result[5] += 18355333;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 347770;
        result[1] += 37037572;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5477387;
        result[5] += 86942;
      } else {
        result[0] += 33609823;
        result[1] += 1158959;
        result[2] += 1193046;
        result[3] += 1874787;
        result[4] += 3715487;
        result[5] += 1397568;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 13634816;
        result[1] += 3181457;
        result[2] += 7726396;
        result[3] += 6135667;
        result[4] += 2954210;
        result[5] += 9317124;
      } else {
        result[0] += 552153;
        result[1] += 0;
        result[2] += 35574476;
        result[3] += 5166581;
        result[4] += 39439;
        result[5] += 1617021;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2109135;
        result[2] += 0;
        result[3] += 1917396;
        result[4] += 37197484;
        result[5] += 1725656;
      } else {
        result[0] += 1809112;
        result[1] += 201012;
        result[2] += 0;
        result[3] += 6030375;
        result[4] += 2445652;
        result[5] += 32463520;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 41714980;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1234692;
        result[5] += 0;
      } else {
        result[0] += 26021867;
        result[1] += 1556863;
        result[2] += 3138439;
        result[3] += 4052788;
        result[4] += 5016561;
        result[5] += 3163151;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3904515;
        result[3] += 16398966;
        result[4] += 780903;
        result[5] += 21865288;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 27790964;
        result[3] += 6316128;
        result[4] += 0;
        result[5] += 8842579;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16421933;
        result[3] += 22738062;
        result[4] += 0;
        result[5] += 3789677;
      } else {
        result[0] += 574429;
        result[1] += 220934;
        result[2] += 39061225;
        result[3] += 2783775;
        result[4] += 88373;
        result[5] += 220934;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13238428;
        result[1] += 1278711;
        result[2] += 0;
        result[3] += 902620;
        result[4] += 24521179;
        result[5] += 3008733;
      } else {
        result[0] += 827865;
        result[1] += 562948;
        result[2] += 132458;
        result[3] += 5695716;
        result[4] += 3708838;
        result[5] += 32021845;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 282563;
        result[1] += 39558909;
        result[2] += 0;
        result[3] += 282563;
        result[4] += 2637260;
        result[5] += 188375;
      } else {
        result[0] += 30440376;
        result[1] += 1241131;
        result[2] += 2743553;
        result[3] += 3494764;
        result[4] += 2939521;
        result[5] += 2090326;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1676084;
        result[1] += 628531;
        result[2] += 8380423;
        result[3] += 19693996;
        result[4] += 628531;
        result[5] += 11942104;
      } else {
        result[0] += 6053309;
        result[1] += 0;
        result[2] += 29690042;
        result[3] += 6053309;
        result[4] += 0;
        result[5] += 1153011;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22667882;
        result[3] += 20281790;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 485002;
        result[1] += 0;
        result[2] += 39877989;
        result[3] += 2209456;
        result[4] += 0;
        result[5] += 377224;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 180460;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41145064;
        result[5] += 1624147;
      } else {
        result[0] += 18142534;
        result[1] += 370255;
        result[2] += 740511;
        result[3] += 2591790;
        result[4] += 7034860;
        result[5] += 14069720;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 122538;
        result[3] += 1102844;
        result[4] += 1347921;
        result[5] += 40376368;
      } else {
        result[0] += 0;
        result[1] += 680390;
        result[2] += 425244;
        result[3] += 14628403;
        result[4] += 4677687;
        result[5] += 22537947;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 29787233;
        result[1] += 3187563;
        result[2] += 384705;
        result[3] += 2115882;
        result[4] += 5907984;
        result[5] += 1566302;
      } else {
        result[0] += 427359;
        result[1] += 41881273;
        result[2] += 0;
        result[3] += 106839;
        result[4] += 534199;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 2354696;
        result[1] += 94187;
        result[2] += 19685266;
        result[3] += 14410745;
        result[4] += 282563;
        result[5] += 6122212;
      } else {
        result[0] += 152484;
        result[1] += 0;
        result[2] += 38324323;
        result[3] += 3557961;
        result[4] += 0;
        result[5] += 914904;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 505290;
        result[2] += 0;
        result[3] += 336860;
        result[4] += 38233630;
        result[5] += 3873892;
      } else {
        result[0] += 1742108;
        result[1] += 569535;
        result[2] += 502531;
        result[3] += 6331894;
        result[4] += 2110631;
        result[5] += 31692972;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 38384156;
        result[2] += 0;
        result[3] += 253639;
        result[4] += 4311876;
        result[5] += 0;
      } else {
        result[0] += 27455490;
        result[1] += 1413150;
        result[2] += 2725361;
        result[3] += 3532875;
        result[4] += 4668442;
        result[5] += 3154353;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8518943;
        result[3] += 23072138;
        result[4] += 2484691;
        result[5] += 8873899;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 27487790;
        result[3] += 9448928;
        result[4] += 429496;
        result[5] += 5583457;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 18084072;
        result[2] += 4521018;
        result[3] += 0;
        result[4] += 4521018;
        result[5] += 15823563;
      } else {
        result[0] += 870255;
        result[1] += 0;
        result[2] += 38905544;
        result[3] += 2969107;
        result[4] += 0;
        result[5] += 204766;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7136253;
        result[1] += 925069;
        result[2] += 264305;
        result[3] += 1717986;
        result[4] += 29205777;
        result[5] += 3700279;
      } else {
        result[0] += 36584;
        result[1] += 292672;
        result[2] += 146336;
        result[3] += 6914385;
        result[4] += 2597467;
        result[5] += 32962227;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 39771397;
        result[2] += 0;
        result[3] += 429496;
        result[4] += 2576980;
        result[5] += 171798;
      } else {
        result[0] += 27123460;
        result[1] += 1434171;
        result[2] += 3195435;
        result[3] += 3497366;
        result[4] += 4403159;
        result[5] += 3296079;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 2526451;
        result[2] += 1263225;
        result[3] += 2526451;
        result[4] += 10105805;
        result[5] += 26527739;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16291255;
        result[3] += 19253301;
        result[4] += 0;
        result[5] += 7405116;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 505290;
        result[1] += 126322;
        result[2] += 32717544;
        result[3] += 7705676;
        result[4] += 505290;
        result[5] += 1389548;
      } else {
        result[0] += 142927;
        result[1] += 0;
        result[2] += 41234544;
        result[3] += 1214882;
        result[4] += 71463;
        result[5] += 285854;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 315806;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41212737;
        result[5] += 1421128;
      } else {
        result[0] += 1826151;
        result[1] += 1194021;
        result[2] += 597010;
        result[3] += 6707594;
        result[4] += 1931506;
        result[5] += 30693388;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 27535593;
        result[1] += 2146264;
        result[2] += 2048706;
        result[3] += 2853555;
        result[4] += 5853447;
        result[5] += 2512104;
      } else {
        result[0] += 216917;
        result[1] += 42732755;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5466322;
        result[3] += 780903;
        result[4] += 9370837;
        result[5] += 27331610;
      } else {
        result[0] += 0;
        result[1] += 1789569;
        result[2] += 11333941;
        result[3] += 25650499;
        result[4] += 0;
        result[5] += 4175662;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16577066;
        result[3] += 9042036;
        result[4] += 753503;
        result[5] += 16577066;
      } else {
        result[0] += 911053;
        result[1] += 43383;
        result[2] += 37960569;
        result[3] += 3600831;
        result[4] += 0;
        result[5] += 433835;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 352046;
        result[2] += 0;
        result[3] += 352046;
        result[4] += 39957277;
        result[5] += 2288302;
      } else {
        result[0] += 0;
        result[1] += 25769803;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 17179869;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2585745;
        result[1] += 657392;
        result[2] += 87652;
        result[3] += 2016005;
        result[4] += 3111659;
        result[5] += 34491216;
      } else {
        result[0] += 1431655;
        result[1] += 390451;
        result[2] += 5466322;
        result[3] += 22255739;
        result[4] += 1301505;
        result[5] += 12103998;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 3435973;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39513699;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 41175664;
        result[2] += 0;
        result[3] += 373475;
        result[4] += 1027057;
        result[5] += 373475;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 31880460;
        result[1] += 1298938;
        result[2] += 508280;
        result[3] += 2174309;
        result[4] += 4122716;
        result[5] += 2964967;
      } else {
        result[0] += 991672;
        result[1] += 410347;
        result[2] += 32998753;
        result[3] += 5060948;
        result[4] += 376151;
        result[5] += 3111799;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 583555;
        result[1] += 3151198;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36880697;
        result[5] += 2334221;
      } else {
        result[0] += 0;
        result[1] += 41070037;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1879635;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1820809;
        result[1] += 392723;
        result[2] += 606936;
        result[3] += 6569193;
        result[4] += 3248894;
        result[5] += 30311115;
      } else {
        result[0] += 27226143;
        result[1] += 814562;
        result[2] += 3036097;
        result[3] += 4196232;
        result[4] += 3184199;
        result[5] += 4492437;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 390451;
        result[1] += 0;
        result[2] += 7809031;
        result[3] += 17570320;
        result[4] += 1952257;
        result[5] += 15227611;
      } else {
        result[0] += 4190211;
        result[1] += 0;
        result[2] += 32736031;
        result[3] += 6023429;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 390451;
        result[1] += 0;
        result[2] += 33774061;
        result[3] += 6637676;
        result[4] += 390451;
        result[5] += 1757032;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41731242;
        result[3] += 1142278;
        result[4] += 0;
        result[5] += 76151;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 493674;
        result[1] += 2468372;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37683812;
        result[5] += 2303813;
      } else {
        result[0] += 1478595;
        result[1] += 387251;
        result[2] += 105613;
        result[3] += 6477655;
        result[4] += 3062804;
        result[5] += 31437752;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 289548;
        result[1] += 39282060;
        result[2] += 0;
        result[3] += 386064;
        result[4] += 2991999;
        result[5] += 0;
      } else {
        result[0] += 25256040;
        result[1] += 1536489;
        result[2] += 3361069;
        result[3] += 4321375;
        result[4] += 4273360;
        result[5] += 4201337;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2102431;
        result[1] += 2703126;
        result[2] += 8710073;
        result[3] += 11713547;
        result[4] += 4805557;
        result[5] += 12914936;
      } else {
        result[0] += 580400;
        result[1] += 0;
        result[2] += 35984861;
        result[3] += 3482405;
        result[4] += 0;
        result[5] += 2902004;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 444306;
        result[1] += 0;
        result[2] += 31841998;
        result[3] += 9922855;
        result[4] += 0;
        result[5] += 740511;
      } else {
        result[0] += 142217;
        result[1] += 0;
        result[2] += 41171954;
        result[3] += 1564392;
        result[4] += 0;
        result[5] += 71108;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 307882;
        result[1] += 2463063;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36484130;
        result[5] += 3694595;
      } else {
        result[0] += 886866;
        result[1] += 126695;
        result[2] += 126695;
        result[3] += 5110039;
        result[4] += 2069354;
        result[5] += 34630021;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 26747934;
        result[1] += 2155596;
        result[2] += 1043030;
        result[3] += 3360875;
        result[4] += 5701899;
        result[5] += 3940336;
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
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 1507006;
        result[2] += 5776856;
        result[3] += 23860929;
        result[4] += 1255838;
        result[5] += 10549042;
      } else {
        result[0] += 2634949;
        result[1] += 1053979;
        result[2] += 26612987;
        result[3] += 6587373;
        result[4] += 1317474;
        result[5] += 4742908;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1301505;
        result[1] += 0;
        result[2] += 14316557;
        result[3] += 10412041;
        result[4] += 1301505;
        result[5] += 15618062;
      } else {
        result[0] += 1884181;
        result[1] += 0;
        result[2] += 37297128;
        result[3] += 3285239;
        result[4] += 0;
        result[5] += 483123;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 941878;
        result[2] += 376751;
        result[3] += 941878;
        result[4] += 39747285;
        result[5] += 941878;
      } else {
        result[0] += 1306453;
        result[1] += 457258;
        result[2] += 881856;
        result[3] += 6303640;
        result[4] += 2906859;
        result[5] += 31093603;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 39165173;
        result[2] += 0;
        result[3] += 88011;
        result[4] += 3696488;
        result[5] += 0;
      } else {
        result[0] += 28282096;
        result[1] += 651892;
        result[2] += 2607569;
        result[3] += 3585407;
        result[4] += 4187154;
        result[5] += 3635553;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5672598;
        result[3] += 19448908;
        result[4] += 2431113;
        result[5] += 15397052;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28925289;
        result[3] += 2629571;
        result[4] += 0;
        result[5] += 11394811;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 1952257;
        result[1] += 0;
        result[2] += 13665805;
        result[3] += 21474836;
        result[4] += 5856773;
        result[5] += 0;
      } else {
        result[0] += 313828;
        result[1] += 89665;
        result[2] += 38959567;
        result[3] += 3048619;
        result[4] += 0;
        result[5] += 537991;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1934669;
        result[2] += 580400;
        result[3] += 193466;
        result[4] += 36758729;
        result[5] += 3482405;
      } else {
        result[0] += 482580;
        result[1] += 442365;
        result[2] += 201075;
        result[3] += 4664945;
        result[4] += 3257419;
        result[5] += 33901286;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 39149599;
        result[2] += 0;
        result[3] += 706990;
        result[4] += 3004709;
        result[5] += 88373;
      } else {
        result[0] += 25002845;
        result[1] += 1468177;
        result[2] += 2147483;
        result[3] += 4908534;
        result[4] += 4864707;
        result[5] += 4557924;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1902833;
        result[1] += 815500;
        result[2] += 10601501;
        result[3] += 17941002;
        result[4] += 1359166;
        result[5] += 10329668;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        result[0] += 14621165;
        result[1] += 0;
        result[2] += 19190279;
        result[3] += 3655291;
        result[4] += 0;
        result[5] += 5482936;
      } else {
        result[0] += 150700;
        result[1] += 0;
        result[2] += 38930990;
        result[3] += 3667048;
        result[4] += 0;
        result[5] += 200934;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9190104;
        result[1] += 187553;
        result[2] += 0;
        result[3] += 281329;
        result[4] += 28789409;
        result[5] += 4501275;
      } else {
        result[0] += 233000;
        result[1] += 116500;
        result[2] += 155333;
        result[3] += 3922167;
        result[4] += 3844500;
        result[5] += 34678171;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 40236077;
        result[2] += 280716;
        result[3] += 748578;
        result[4] += 1684300;
        result[5] += 0;
      } else {
        result[0] += 25412705;
        result[1] += 1345234;
        result[2] += 2861680;
        result[3] += 6065785;
        result[4] += 3253021;
        result[5] += 4011245;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 4026531;
        result[2] += 4697620;
        result[3] += 14092861;
        result[4] += 4026531;
        result[5] += 16106127;
      } else {
        result[0] += 795364;
        result[1] += 0;
        result[2] += 36586758;
        result[3] += 3181457;
        result[4] += 0;
        result[5] += 2386092;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 353495;
        result[1] += 0;
        result[2] += 31107582;
        result[3] += 9014128;
        result[4] += 0;
        result[5] += 2474466;
      } else {
        result[0] += 125217;
        result[1] += 0;
        result[2] += 41008798;
        result[3] += 1815656;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 743717;
        result[2] += 371858;
        result[3] += 371858;
        result[4] += 39788874;
        result[5] += 1673363;
      } else {
        result[0] += 1485903;
        result[1] += 778330;
        result[2] += 176893;
        result[3] += 5695961;
        result[4] += 2370369;
        result[5] += 32442215;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25865096;
        result[1] += 2019292;
        result[2] += 1905849;
        result[3] += 3789009;
        result[4] += 5853679;
        result[5] += 3516745;
      } else {
        result[0] += 310479;
        result[1] += 42639193;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 412977;
        result[1] += 0;
        result[2] += 13628261;
        result[3] += 21474836;
        result[4] += 412977;
        result[5] += 7020619;
      } else {
        result[0] += 4706813;
        result[1] += 0;
        result[2] += 28829232;
        result[3] += 4706813;
        result[4] += 0;
        result[5] += 4706813;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1193046;
        result[1] += 0;
        result[2] += 34863469;
        result[3] += 6097793;
        result[4] += 0;
        result[5] += 795364;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41598109;
        result[3] += 1201389;
        result[4] += 0;
        result[5] += 150173;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3872511;
        result[2] += 0;
        result[3] += 528069;
        result[4] += 37492952;
        result[5] += 1056139;
      } else {
        result[0] += 1583242;
        result[1] += 101058;
        result[2] += 202116;
        result[3] += 6871947;
        result[4] += 2391707;
        result[5] += 31799600;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 39415839;
        result[2] += 0;
        result[3] += 181222;
        result[4] += 3352611;
        result[5] += 0;
      } else {
        result[0] += 26461326;
        result[1] += 1646482;
        result[2] += 2493244;
        result[3] += 4210291;
        result[4] += 4774799;
        result[5] += 3363528;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 3817748;
        result[2] += 1908874;
        result[3] += 14316557;
        result[4] += 954437;
        result[5] += 21952055;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23646449;
        result[3] += 17855482;
        result[4] += 0;
        result[5] += 1447741;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13665805;
        result[3] += 11713547;
        result[4] += 0;
        result[5] += 17570320;
      } else {
        result[0] += 706575;
        result[1] += 100939;
        result[2] += 39063509;
        result[3] += 2573952;
        result[4] += 50469;
        result[5] += 454226;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 1275732;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41248695;
        result[5] += 425244;
      } else {
        result[0] += 13542689;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 13155755;
        result[5] += 16251227;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 932337;
        result[4] += 994493;
        result[5] += 41022842;
      } else {
        result[0] += 0;
        result[1] += 1800285;
        result[2] += 1371646;
        result[3] += 15516748;
        result[4] += 2143197;
        result[5] += 22117795;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 156750;
        result[1] += 33152758;
        result[2] += 0;
        result[3] += 548627;
        result[4] += 8151032;
        result[5] += 940503;
      } else {
        result[0] += 31861265;
        result[1] += 1547219;
        result[2] += 888218;
        result[3] += 2607351;
        result[4] += 3782092;
        result[5] += 2263525;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 400152;
        result[1] += 266768;
        result[2] += 13205023;
        result[3] += 12271335;
        result[4] += 4134906;
        result[5] += 12671487;
      } else {
        result[0] += 947419;
        result[1] += 45115;
        result[2] += 37265157;
        result[3] += 3699446;
        result[4] += 135345;
        result[5] += 857188;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 478992;
        result[1] += 159664;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39916052;
        result[5] += 2394963;
      } else {
        result[0] += 1601041;
        result[1] += 278441;
        result[2] += 34805;
        result[3] += 6369359;
        result[4] += 2297146;
        result[5] += 32368878;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 268435;
        result[1] += 39012619;
        result[2] += 178956;
        result[3] += 357913;
        result[4] += 3131746;
        result[5] += 0;
      } else {
        result[0] += 28204956;
        result[1] += 1846434;
        result[2] += 2167553;
        result[3] += 3157670;
        result[4] += 4870305;
        result[5] += 2702752;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9250698;
        result[3] += 24448275;
        result[4] += 991146;
        result[5] += 8259552;
      } else {
        result[0] += 479884;
        result[1] += 0;
        result[2] += 23754288;
        result[3] += 10797403;
        result[4] += 719826;
        result[5] += 7198269;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 13029676;
        result[1] += 0;
        result[2] += 24611610;
        result[3] += 4343225;
        result[4] += 0;
        result[5] += 965161;
      } else {
        result[0] += 255652;
        result[1] += 204522;
        result[2] += 39932969;
        result[3] += 2300875;
        result[4] += 0;
        result[5] += 255652;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 518715;
        result[1] += 2697322;
        result[2] += 0;
        result[3] += 0;
        result[4] += 36828825;
        result[5] += 2904808;
      } else {
        result[0] += 0;
        result[1] += 41520993;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1428679;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1303829;
        result[1] += 38347;
        result[2] += 421827;
        result[3] += 6710886;
        result[4] += 2147483;
        result[5] += 32327298;
      } else {
        result[0] += 29535961;
        result[1] += 825459;
        result[2] += 1135006;
        result[3] += 3508201;
        result[4] += 3276041;
        result[5] += 4669003;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5482936;
        result[3] += 28785419;
        result[4] += 0;
        result[5] += 8681316;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29527900;
        result[3] += 5368709;
        result[4] += 0;
        result[5] += 8053063;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21904333;
        result[3] += 15032385;
        result[4] += 0;
        result[5] += 6012954;
      } else {
        result[0] += 1092746;
        result[1] += 0;
        result[2] += 38911263;
        result[3] += 2613088;
        result[4] += 237553;
        result[5] += 95021;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1690932;
        result[2] += 0;
        result[3] += 507279;
        result[4] += 37538690;
        result[5] += 3212770;
      } else {
        result[0] += 1682281;
        result[1] += 171661;
        result[2] += 137329;
        result[3] += 6729125;
        result[4] += 2197265;
        result[5] += 32032010;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41369273;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1580399;
        result[5] += 0;
      } else {
        result[0] += 26023575;
        result[1] += 1340680;
        result[2] += 3351702;
        result[3] += 3806576;
        result[4] += 5410605;
        result[5] += 3016532;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 1847297;
        result[2] += 3694595;
        result[3] += 16625679;
        result[4] += 923648;
        result[5] += 19858450;
      } else {
        result[0] += 3579139;
        result[1] += 0;
        result[2] += 29826161;
        result[3] += 0;
        result[4] += 8351325;
        result[5] += 1193046;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 620211;
        result[1] += 0;
        result[2] += 29615117;
        result[3] += 10543602;
        result[4] += 155052;
        result[5] += 2015688;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40864104;
        result[3] += 2020394;
        result[4] += 0;
        result[5] += 65174;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4786559;
        result[1] += 2457963;
        result[2] += 0;
        result[3] += 776198;
        result[4] += 31177322;
        result[5] += 3751628;
      } else {
        result[0] += 110790;
        result[1] += 73860;
        result[2] += 406230;
        result[3] += 7164433;
        result[4] += 2141944;
        result[5] += 33052413;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 40374531;
        result[2] += 0;
        result[3] += 827723;
        result[4] += 1747417;
        result[5] += 0;
      } else {
        result[0] += 25263133;
        result[1] += 1501244;
        result[2] += 2251867;
        result[3] += 4386449;
        result[4] += 5512382;
        result[5] += 4034595;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9761289;
        result[3] += 24891287;
        result[4] += 488064;
        result[5] += 7809031;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25419194;
        result[3] += 9641763;
        result[4] += 0;
        result[5] += 7888715;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1798939;
        result[1] += 0;
        result[2] += 33730109;
        result[3] += 6408720;
        result[4] += 0;
        result[5] += 1011903;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41696277;
        result[3] += 1253395;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 519029;
        result[1] += 3503447;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35553505;
        result[5] += 3373690;
      } else {
        result[0] += 2196085;
        result[1] += 288011;
        result[2] += 72002;
        result[3] += 6876267;
        result[4] += 4068158;
        result[5] += 29449147;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 421075;
        result[1] += 33194763;
        result[2] += 0;
        result[3] += 561433;
        result[4] += 7719712;
        result[5] += 1052688;
      } else {
        result[0] += 31693896;
        result[1] += 829372;
        result[2] += 1866089;
        result[3] += 2665841;
        result[4] += 2517739;
        result[5] += 3376732;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2260509;
        result[3] += 7535030;
        result[4] += 4521018;
        result[5] += 28633115;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17103852;
        result[3] += 20524622;
        result[4] += 0;
        result[5] += 5321198;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 9448928;
        result[1] += 5153960;
        result[2] += 8589934;
        result[3] += 1717986;
        result[4] += 10307921;
        result[5] += 7730941;
      } else {
        result[0] += 520889;
        result[1] += 0;
        result[2] += 38782560;
        result[3] += 3125334;
        result[4] += 0;
        result[5] += 520889;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 468541;
        result[1] += 0;
        result[2] += 156180;
        result[3] += 0;
        result[4] += 40919324;
        result[5] += 1405625;
      } else {
        result[0] += 1323178;
        result[1] += 107284;
        result[2] += 250331;
        result[3] += 6043709;
        result[4] += 2717881;
        result[5] += 32507287;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 40945354;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2004318;
        result[5] += 0;
      } else {
        result[0] += 29297520;
        result[1] += 1474432;
        result[2] += 1638258;
        result[3] += 2894256;
        result[4] += 5078600;
        result[5] += 2566604;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
        result[0] += 1533916;
        result[1] += 1022611;
        result[2] += 4090445;
        result[3] += 511305;
        result[4] += 10737418;
        result[5] += 25053975;
      } else {
        result[0] += 399531;
        result[1] += 199765;
        result[2] += 13783848;
        result[3] += 19776826;
        result[4] += 1198595;
        result[5] += 7591104;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
        result[0] += 35791394;
        result[1] += 0;
        result[2] += 3579139;
        result[3] += 3579139;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 507279;
        result[1] += 0;
        result[2] += 38849162;
        result[3] += 3212770;
        result[4] += 0;
        result[5] += 380459;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1002159;
        result[1] += 0;
        result[2] += 429496;
        result[3] += 143165;
        result[4] += 38225208;
        result[5] += 3149642;
      } else {
        result[0] += 1111066;
        result[1] += 347208;
        result[2] += 104162;
        result[3] += 6492796;
        result[4] += 1770762;
        result[5] += 33123676;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 277094;
        result[1] += 34567559;
        result[2] += 0;
        result[3] += 138547;
        result[4] += 7620103;
        result[5] += 346368;
      } else {
        result[0] += 32768789;
        result[1] += 1632503;
        result[2] += 742046;
        result[3] += 2374549;
        result[4] += 3175960;
        result[5] += 2255822;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 773867;
        result[1] += 0;
        result[2] += 10640684;
        result[3] += 22635638;
        result[4] += 773867;
        result[5] += 8125613;
      } else {
        result[0] += 4772185;
        result[1] += 0;
        result[2] += 31814572;
        result[3] += 2120971;
        result[4] += 0;
        result[5] += 4241943;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14967310;
        result[3] += 16268815;
        result[4] += 3253763;
        result[5] += 8459784;
      } else {
        result[0] += 1208431;
        result[1] += 0;
        result[2] += 38418054;
        result[3] += 2970727;
        result[4] += 0;
        result[5] += 352459;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 42350375;
        result[2] += 0;
        result[3] += 99882;
        result[4] += 299648;
        result[5] += 199765;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 3531185;
        result[1] += 732393;
        result[2] += 444667;
        result[3] += 3975852;
        result[4] += 11352106;
        result[5] += 22913467;
      } else {
        result[0] += 27608508;
        result[1] += 1592798;
        result[2] += 2235506;
        result[3] += 4638676;
        result[4] += 3744473;
        result[5] += 3129709;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 1227133;
        result[1] += 2454267;
        result[2] += 3272356;
        result[3] += 6135667;
        result[4] += 4499489;
        result[5] += 25360759;
      } else {
        result[0] += 800304;
        result[1] += 266768;
        result[2] += 16006089;
        result[3] += 17873466;
        result[4] += 0;
        result[5] += 8003044;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
        result[0] += 814211;
        result[1] += 0;
        result[2] += 38471507;
        result[3] += 3511288;
        result[4] += 50888;
        result[5] += 101776;
      } else {
        result[0] += 12757328;
        result[1] += 0;
        result[2] += 28491367;
        result[3] += 425244;
        result[4] += 0;
        result[5] += 1275732;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 967334;
        result[1] += 221105;
        result[2] += 193466;
        result[3] += 5610542;
        result[4] += 8899481;
        result[5] += 27057741;
      } else {
        result[0] += 27057804;
        result[1] += 1958936;
        result[2] += 2032396;
        result[3] += 3770951;
        result[4] += 5338100;
        result[5] += 2791483;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9067153;
        result[3] += 28155896;
        result[4] += 477218;
        result[5] += 5249404;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34896609;
        result[3] += 2684354;
        result[4] += 0;
        result[5] += 5368709;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33478719;
        result[3] += 8149425;
        result[4] += 0;
        result[5] += 1321528;
      } else {
        result[0] += 1142278;
        result[1] += 0;
        result[2] += 40493774;
        result[3] += 1256506;
        result[4] += 0;
        result[5] += 57113;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 678152;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42045469;
        result[5] += 226050;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3789677;
        result[3] += 7579354;
        result[4] += 18948385;
        result[5] += 12632256;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 761294;
        result[4] += 1332264;
        result[5] += 40856114;
      } else {
        result[0] += 2652123;
        result[1] += 810371;
        result[2] += 2283773;
        result[3] += 13039609;
        result[4] += 3388824;
        result[5] += 20774970;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 3067833;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39881839;
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
        result[0] += 33226344;
        result[1] += 1491308;
        result[2] += 924611;
        result[3] += 1252698;
        result[4] += 4772185;
        result[5] += 1282524;
      } else {
        result[0] += 1826392;
        result[1] += 265121;
        result[2] += 27395881;
        result[3] += 7865269;
        result[4] += 1590728;
        result[5] += 4006279;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 286331;
        result[1] += 2576980;
        result[2] += 143165;
        result[3] += 286331;
        result[4] += 38511540;
        result[5] += 1145324;
      } else {
        result[0] += 2904070;
        result[1] += 244553;
        result[2] += 61138;
        result[3] += 7764567;
        result[4] += 1956426;
        result[5] += 30018917;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 37340261;
        result[2] += 83722;
        result[3] += 0;
        result[4] += 5107076;
        result[5] += 418612;
      } else {
        result[0] += 28998566;
        result[1] += 1726757;
        result[2] += 2576432;
        result[3] += 3014973;
        result[4] += 4330598;
        result[5] += 2302343;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7754802;
        result[3] += 29229638;
        result[4] += 0;
        result[5] += 5965232;
      } else {
        result[0] += 3152269;
        result[1] += 0;
        result[2] += 29946560;
        result[3] += 7092606;
        result[4] += 788067;
        result[5] += 1970168;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1771120;
        result[1] += 0;
        result[2] += 32765729;
        result[3] += 7305872;
        result[4] += 0;
        result[5] += 1106950;
      } else {
        result[0] += 386933;
        result[1] += 0;
        result[2] += 40692558;
        result[3] += 1870180;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 478992;
        result[2] += 0;
        result[3] += 1117649;
        result[4] += 38638739;
        result[5] += 2714291;
      } else {
        result[0] += 1236215;
        result[1] += 105961;
        result[2] += 247243;
        result[3] += 6216400;
        result[4] += 2790315;
        result[5] += 32353536;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 28843776;
        result[1] += 2426820;
        result[2] += 1263969;
        result[3] += 2806011;
        result[4] += 5510905;
        result[5] += 2098188;
      } else {
        result[0] += 104246;
        result[1] += 42845426;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 757935;
        result[2] += 4800257;
        result[3] += 22990707;
        result[4] += 757935;
        result[5] += 13642837;
      } else {
        result[0] += 584349;
        result[1] += 2045222;
        result[2] += 23081797;
        result[3] += 3798270;
        result[4] += 2045222;
        result[5] += 11394811;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2863311;
        result[1] += 0;
        result[2] += 30822706;
        result[3] += 7410923;
        result[4] += 168430;
        result[5] += 1684300;
      } else {
        result[0] += 522184;
        result[1] += 0;
        result[2] += 39947112;
        result[3] += 2349830;
        result[4] += 0;
        result[5] += 130546;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 2475861;
        result[1] += 338802;
        result[2] += 104246;
        result[3] += 6046313;
        result[4] += 8000940;
        result[5] += 25983509;
      } else {
        result[0] += 29626171;
        result[1] += 2179206;
        result[2] += 1406829;
        result[3] += 1958527;
        result[4] += 5654902;
        result[5] += 2124036;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 335544;
        result[1] += 0;
        result[2] += 7381975;
        result[3] += 26508001;
        result[4] += 0;
        result[5] += 8724152;
      } else {
        result[0] += 894784;
        result[1] += 0;
        result[2] += 25053975;
        result[3] += 13720034;
        result[4] += 0;
        result[5] += 3280877;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 8007566;
        result[1] += 0;
        result[2] += 21838816;
        result[3] += 5095723;
        result[4] += 0;
        result[5] += 8007566;
      } else {
        result[0] += 152303;
        result[1] += 0;
        result[2] += 39802060;
        result[3] += 2690700;
        result[4] += 0;
        result[5] += 304607;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 925639;
        result[1] += 370255;
        result[2] += 740511;
        result[3] += 185127;
        result[4] += 39987626;
        result[5] += 740511;
      } else {
        result[0] += 1479836;
        result[1] += 344148;
        result[2] += 172074;
        result[3] += 6057005;
        result[4] += 2409036;
        result[5] += 32487573;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 38512377;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4437295;
        result[5] += 0;
      } else {
        result[0] += 29416522;
        result[1] += 1213851;
        result[2] += 2014476;
        result[3] += 3434940;
        result[4] += 4209739;
        result[5] += 2660142;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 1101273;
        result[2] += 2202547;
        result[3] += 3303820;
        result[4] += 12114010;
        result[5] += 24228020;
      } else {
        result[0] += 517465;
        result[1] += 1034931;
        result[2] += 17335108;
        result[3] += 18887506;
        result[4] += 0;
        result[5] += 5174659;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e30000))) ) ) {
        result[0] += 352624;
        result[1] += 0;
        result[2] += 37166629;
        result[3] += 4795694;
        result[4] += 0;
        result[5] += 634724;
      } else {
        result[0] += 541951;
        result[1] += 0;
        result[2] += 41865769;
        result[3] += 541951;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 19776118;
        result[1] += 1977611;
        result[2] += 304247;
        result[3] += 862035;
        result[4] += 17240718;
        result[5] += 2788939;
      } else {
        result[0] += 2691668;
        result[1] += 1146884;
        result[2] += 1591595;
        result[3] += 9479355;
        result[4] += 3440654;
        result[5] += 24599512;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 99190;
        result[1] += 42453718;
        result[2] += 0;
        result[3] += 198381;
        result[4] += 198381;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 14316557;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 41603489;
        result[1] += 0;
        result[2] += 641039;
        result[3] += 384623;
        result[4] += 256415;
        result[5] += 64103;
      } else {
        result[0] += 9698313;
        result[1] += 0;
        result[2] += 31865886;
        result[3] += 1385473;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1781754;
        result[1] += 0;
        result[2] += 33196908;
        result[3] += 7033243;
        result[4] += 0;
        result[5] += 937765;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41612412;
        result[3] += 1022611;
        result[4] += 0;
        result[5] += 314649;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7454995;
        result[1] += 1780297;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28484757;
        result[5] += 5229623;
      } else {
        result[0] += 355838;
        result[1] += 142335;
        result[2] += 142335;
        result[3] += 7970776;
        result[4] += 2277364;
        result[5] += 32061023;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 38437450;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4512222;
        result[5] += 0;
      } else {
        result[0] += 27695506;
        result[1] += 1352319;
        result[2] += 3543077;
        result[3] += 2839871;
        result[4] += 4219237;
        result[5] += 3299660;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 2556528;
        result[1] += 1533916;
        result[2] += 7158278;
        result[3] += 3579139;
        result[4] += 11248723;
        result[5] += 16873085;
      } else {
        result[0] += 2643056;
        result[1] += 0;
        result[2] += 13876048;
        result[3] += 20483690;
        result[4] += 0;
        result[5] += 5946877;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1908874;
        result[1] += 0;
        result[2] += 27201459;
        result[3] += 10021590;
        result[4] += 0;
        result[5] += 3817748;
      } else {
        result[0] += 240749;
        result[1] += 0;
        result[2] += 40445880;
        result[3] += 2022294;
        result[4] += 0;
        result[5] += 240749;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 263494;
        result[1] += 3161939;
        result[2] += 131747;
        result[3] += 0;
        result[4] += 38602006;
        result[5] += 790484;
      } else {
        result[0] += 4221549;
        result[1] += 61181;
        result[2] += 336500;
        result[3] += 4955731;
        result[4] += 3762685;
        result[5] += 29612025;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 38867327;
        result[2] += 170097;
        result[3] += 510293;
        result[4] += 2551465;
        result[5] += 850488;
      } else {
        result[0] += 30912599;
        result[1] += 1360712;
        result[2] += 1011811;
        result[3] += 4082137;
        result[4] += 3454116;
        result[5] += 2128294;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2770946;
        result[3] += 6003717;
        result[4] += 5080068;
        result[5] += 29094939;
      } else {
        result[0] += 2426535;
        result[1] += 363980;
        result[2] += 16743092;
        result[3] += 16985746;
        result[4] += 363980;
        result[5] += 6066337;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 11150395;
        result[1] += 825955;
        result[2] += 21061858;
        result[3] += 5781686;
        result[4] += 412977;
        result[5] += 3716798;
      } else {
        result[0] += 796347;
        result[1] += 0;
        result[2] += 38543217;
        result[3] += 3503928;
        result[4] += 0;
        result[5] += 106179;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3728270;
        result[2] += 0;
        result[3] += 894784;
        result[4] += 36686178;
        result[5] += 1640438;
      } else {
        result[0] += 1764571;
        result[1] += 0;
        result[2] += 423497;
        result[3] += 6634789;
        result[4] += 2152777;
        result[5] += 31974037;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 28421831;
        result[1] += 1698717;
        result[2] += 2104381;
        result[3] += 3219957;
        result[4] += 5704649;
        result[5] += 1800133;
      } else {
        result[0] += 0;
        result[1] += 42569587;
        result[2] += 0;
        result[3] += 285064;
        result[4] += 95021;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5823684;
        result[3] += 1455921;
        result[4] += 8735526;
        result[5] += 26934540;
      } else {
        result[0] += 419021;
        result[1] += 0;
        result[2] += 19065464;
        result[3] += 19693996;
        result[4] += 0;
        result[5] += 3771190;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 8589934;
        result[1] += 5368709;
        result[2] += 15569256;
        result[3] += 1073741;
        result[4] += 6979321;
        result[5] += 5368709;
      } else {
        result[0] += 310105;
        result[1] += 0;
        result[2] += 39900297;
        result[3] += 2480847;
        result[4] += 0;
        result[5] += 258421;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6079030;
        result[1] += 2114445;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30659458;
        result[5] += 4096738;
      } else {
        result[0] += 79832;
        result[1] += 119748;
        result[2] += 79832;
        result[3] += 6905477;
        result[4] += 2355047;
        result[5] += 33409736;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 372665;
        result[1] += 39968350;
        result[2] += 0;
        result[3] += 372665;
        result[4] += 2235991;
        result[5] += 0;
      } else {
        result[0] += 28883525;
        result[1] += 1450652;
        result[2] += 1787410;
        result[3] += 3160349;
        result[4] += 3937485;
        result[5] += 3730249;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 447392;
        result[2] += 5816101;
        result[3] += 4473924;
        result[4] += 8053063;
        result[5] += 24159191;
      } else {
        result[0] += 159664;
        result[1] += 0;
        result[2] += 14369779;
        result[3] += 22512653;
        result[4] += 319328;
        result[5] += 5588247;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42860000))) ) ) {
        result[0] += 0;
        result[1] += 21474836;
        result[2] += 3579139;
        result[3] += 7158278;
        result[4] += 10737418;
        result[5] += 0;
      } else {
        result[0] += 1030417;
        result[1] += 0;
        result[2] += 38312794;
        result[3] += 2810229;
        result[4] += 46837;
        result[5] += 749394;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 689954;
        result[1] += 689954;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39672388;
        result[5] += 1897375;
      } else {
        result[0] += 3069962;
        result[1] += 506692;
        result[2] += 387471;
        result[3] += 6825451;
        result[4] += 2742102;
        result[5] += 29417992;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 37415772;
        result[2] += 165191;
        result[3] += 82595;
        result[4] += 4955731;
        result[5] += 330382;
      } else {
        result[0] += 31211500;
        result[1] += 1444698;
        result[2] += 2197145;
        result[3] += 2468026;
        result[4] += 4213703;
        result[5] += 1414600;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2260509;
        result[3] += 26560981;
        result[4] += 1130254;
        result[5] += 12997927;
      } else {
        result[0] += 0;
        result[1] += 1130254;
        result[2] += 12432800;
        result[3] += 10172290;
        result[4] += 1130254;
        result[5] += 18084072;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 25769803;
        result[1] += 1431655;
        result[2] += 5726623;
        result[3] += 10021590;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 597115;
        result[1] += 0;
        result[2] += 38300701;
        result[3] += 3369438;
        result[4] += 0;
        result[5] += 682417;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5442658;
        result[1] += 354955;
        result[2] += 591593;
        result[3] += 0;
        result[4] += 33010905;
        result[5] += 3549559;
      } else {
        result[0] += 113723;
        result[1] += 606526;
        result[2] += 682342;
        result[3] += 6899241;
        result[4] += 2350291;
        result[5] += 32297547;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 71942;
        result[1] += 36618732;
        result[2] += 0;
        result[3] += 287770;
        result[4] += 5971227;
        result[5] += 0;
      } else {
        result[0] += 32329603;
        result[1] += 1144151;
        result[2] += 1114813;
        result[3] += 2816371;
        result[4] += 3197755;
        result[5] += 2346976;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12271335;
        result[4] += 2788939;
        result[5] += 27889398;
      } else {
        result[0] += 0;
        result[1] += 1962167;
        result[2] += 13735174;
        result[3] += 19185640;
        result[4] += 2398205;
        result[5] += 5668484;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1408185;
        result[1] += 0;
        result[2] += 33192955;
        result[3] += 6940345;
        result[4] += 201169;
        result[5] += 1207016;
      } else {
        result[0] += 529309;
        result[1] += 0;
        result[2] += 41059282;
        result[3] += 1209849;
        result[4] += 0;
        result[5] += 151231;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1510792;
        result[1] += 3884895;
        result[2] += 0;
        result[3] += 1294965;
        result[4] += 33669090;
        result[5] += 2589930;
      } else {
        result[0] += 38469311;
        result[1] += 0;
        result[2] += 154495;
        result[3] += 0;
        result[4] += 2008437;
        result[5] += 2317428;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 138398;
        result[1] += 184531;
        result[2] += 92265;
        result[3] += 2583438;
        result[4] += 3459962;
        result[5] += 36491075;
      } else {
        result[0] += 2045222;
        result[1] += 1295307;
        result[2] += 1772526;
        result[3] += 19634136;
        result[4] += 3749574;
        result[5] += 14452905;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        result[0] += 98283;
        result[1] += 42261691;
        result[2] += 0;
        result[3] += 98283;
        result[4] += 491415;
        result[5] += 0;
      } else {
        result[0] += 37637715;
        result[1] += 227006;
        result[2] += 1679849;
        result[3] += 817224;
        result[4] += 2043060;
        result[5] += 544816;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3358204;
        result[1] += 1325607;
        result[2] += 24921415;
        result[3] += 7776895;
        result[4] += 1590728;
        result[5] += 3976821;
      } else {
        result[0] += 119304;
        result[1] += 178956;
        result[2] += 40026709;
        result[3] += 2028179;
        result[4] += 0;
        result[5] += 596523;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 4772185;
        result[1] += 1431655;
        result[2] += 477218;
        result[3] += 0;
        result[4] += 31138512;
        result[5] += 5130099;
      } else {
        result[0] += 550133;
        result[1] += 235771;
        result[2] += 825199;
        result[3] += 6798072;
        result[4] += 2475598;
        result[5] += 32064897;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 42094480;
        result[2] += 0;
        result[3] += 0;
        result[4] += 855192;
        result[5] += 0;
      } else {
        result[0] += 29358344;
        result[1] += 1504178;
        result[2] += 1101273;
        result[3] += 2981496;
        result[4] += 4942301;
        result[5] += 3062077;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 5873459;
        result[2] += 734182;
        result[3] += 11746919;
        result[4] += 4038003;
        result[5] += 20557108;
      } else {
        result[0] += 1887897;
        result[1] += 707961;
        result[2] += 14395220;
        result[3] += 20294900;
        result[4] += 0;
        result[5] += 5663693;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
        result[0] += 36442146;
        result[1] += 0;
        result[2] += 6507526;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 563985;
        result[1] += 0;
        result[2] += 38090720;
        result[3] += 3947899;
        result[4] += 0;
        result[5] += 347068;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 641039;
        result[2] += 0;
        result[3] += 1121819;
        result[4] += 37981613;
        result[5] += 3205199;
      } else {
        result[0] += 1978418;
        result[1] += 143885;
        result[2] += 107913;
        result[3] += 5503601;
        result[4] += 3201441;
        result[5] += 32014412;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 41468649;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1481023;
        result[5] += 0;
      } else {
        result[0] += 27338444;
        result[1] += 1428314;
        result[2] += 2530873;
        result[3] += 3733664;
        result[4] += 4961514;
        result[5] += 2956861;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 409044;
        result[1] += 1636178;
        result[2] += 2454267;
        result[3] += 8180890;
        result[4] += 5726623;
        result[5] += 24542670;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17022736;
        result[3] += 20427283;
        result[4] += 0;
        result[5] += 5499653;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 1130254;
        result[1] += 753503;
        result[2] += 32589006;
        result[3] += 6216400;
        result[4] += 0;
        result[5] += 2260509;
      } else {
        result[0] += 1371397;
        result[1] += 0;
        result[2] += 39770524;
        result[3] += 1745414;
        result[4] += 62336;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5823684;
        result[1] += 2911842;
        result[2] += 0;
        result[3] += 242653;
        result[4] += 27055867;
        result[5] += 6915625;
      } else {
        result[0] += 273316;
        result[1] += 39045;
        result[2] += 156180;
        result[3] += 7809031;
        result[4] += 3553109;
        result[5] += 31118990;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 25313545;
        result[1] += 2347096;
        result[2] += 3092902;
        result[3] += 3860644;
        result[4] += 4584515;
        result[5] += 3750967;
      } else {
        result[0] += 1109810;
        result[1] += 40841032;
        result[2] += 221962;
        result[3] += 0;
        result[4] += 776867;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 876523;
        result[3] += 28925289;
        result[4] += 876523;
        result[5] += 12271335;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23860929;
        result[3] += 3579139;
        result[4] += 0;
        result[5] += 15509604;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1509413;
        result[1] += 274438;
        result[2] += 33618753;
        result[3] += 6037653;
        result[4] += 137219;
        result[5] += 1372194;
      } else {
        result[0] += 136564;
        result[1] += 0;
        result[2] += 41174328;
        result[3] += 1638779;
        result[4] += 0;
        result[5] += 0;
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
