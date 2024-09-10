
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 3316577;
        result[1] += 1658288;
        result[2] += 13266308;
        result[3] += 0;
        result[4] += 404622401;
        result[5] += 6633154;
      } else {
        result[0] += 16869470;
        result[1] += 1349557;
        result[2] += 2361725;
        result[3] += 63429210;
        result[4] += 24629427;
        result[5] += 320857336;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 267210541;
        result[1] += 23183741;
        result[2] += 20315649;
        result[3] += 31310000;
        result[4] += 57600841;
        result[5] += 29875955;
      } else {
        result[0] += 3742890;
        result[1] += 419203779;
        result[2] += 0;
        result[3] += 2807168;
        result[4] += 3742890;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 114935744;
        result[3] += 211723739;
        result[4] += 18147749;
        result[5] += 84689495;
      } else {
        result[0] += 14316557;
        result[1] += 0;
        result[2] += 323554202;
        result[3] += 80172722;
        result[4] += 0;
        result[5] += 11453246;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 231267469;
        result[3] += 66076419;
        result[4] += 0;
        result[5] += 132152839;
      } else {
        result[0] += 3739399;
        result[1] += 0;
        result[2] += 400115734;
        result[3] += 24573195;
        result[4] += 0;
        result[5] += 1068399;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 57615414;
        result[1] += 26188824;
        result[2] += 0;
        result[3] += 0;
        result[4] += 303790369;
        result[5] += 41902119;
      } else {
        result[0] += 731058;
        result[1] += 2193174;
        result[2] += 1827645;
        result[3] += 72374768;
        result[4] += 17910927;
        result[5] += 334459155;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 400683531;
        result[2] += 900412;
        result[3] += 0;
        result[4] += 27912785;
        result[5] += 0;
      } else {
        result[0] += 269272448;
        result[1] += 10761332;
        result[2] += 27979464;
        result[3] += 36827670;
        result[4] += 44480173;
        result[5] += 40175640;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 4772185;
        result[1] += 4772185;
        result[2] += 62038416;
        result[3] += 195659621;
        result[4] += 9544371;
        result[5] += 152709948;
      } else {
        result[0] += 8589934;
        result[1] += 0;
        result[2] += 335007449;
        result[3] += 25769803;
        result[4] += 8589934;
        result[5] += 51539607;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 13421772;
        result[1] += 0;
        result[2] += 339570851;
        result[3] += 63082332;
        result[4] += 0;
        result[5] += 13421772;
      } else {
        result[0] += 8007566;
        result[1] += 0;
        result[2] += 405474031;
        result[3] += 15287171;
        result[4] += 0;
        result[5] += 727960;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 44570415;
        result[1] += 25661754;
        result[2] += 0;
        result[3] += 0;
        result[4] += 310642288;
        result[5] += 48622271;
      } else {
        result[0] += 0;
        result[1] += 4391582;
        result[2] += 2634949;
        result[3] += 59286358;
        result[4] += 27666967;
        result[5] += 335516872;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 412977624;
        result[2] += 0;
        result[3] += 0;
        result[4] += 16519104;
        result[5] += 0;
      } else {
        result[0] += 285036708;
        result[1] += 12426668;
        result[2] += 11132223;
        result[3] += 23558892;
        result[4] += 61874453;
        result[5] += 35467782;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 18171015;
        result[2] += 29734388;
        result[3] += 189969707;
        result[4] += 6607641;
        result[5] += 185013975;
      } else {
        result[0] += 11930464;
        result[1] += 2982616;
        result[2] += 235626677;
        result[3] += 131235111;
        result[4] += 0;
        result[5] += 47721858;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 12110683;
        result[1] += 1297573;
        result[2] += 382784094;
        result[3] += 24221366;
        result[4] += 2162622;
        result[5] += 6920390;
      } else {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 187904819;
        result[3] += 26843545;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 11431471;
        result[2] += 0;
        result[3] += 4899202;
        result[4] += 398468448;
        result[5] += 14697606;
      } else {
        result[0] += 18392405;
        result[1] += 1362400;
        result[2] += 681200;
        result[3] += 65054619;
        result[4] += 21457806;
        result[5] += 322548297;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 357509518;
        result[2] += 0;
        result[3] += 0;
        result[4] += 69560675;
        result[5] += 2426535;
      } else {
        result[0] += 294773790;
        result[1] += 5119471;
        result[2] += 28830708;
        result[3] += 37991868;
        result[4] += 32602951;
        result[5] += 30177938;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 4643207;
        result[2] += 67326514;
        result[3] += 164833879;
        result[4] += 13929623;
        result[5] += 178763503;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 330923709;
        result[3] += 98573019;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        result[0] += 112329913;
        result[1] += 66076419;
        result[2] += 151975765;
        result[3] += 46253493;
        result[4] += 19822925;
        result[5] += 33038209;
      } else {
        result[0] += 2479773;
        result[1] += 0;
        result[2] += 392796085;
        result[3] += 28269415;
        result[4] += 0;
        result[5] += 5951455;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 11875485;
        result[2] += 0;
        result[3] += 3958495;
        result[4] += 403766510;
        result[5] += 9896238;
      } else {
        result[0] += 11579568;
        result[1] += 3859856;
        result[2] += 5614336;
        result[3] += 64564867;
        result[4] += 21755553;
        result[5] += 322122547;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 741790;
        result[1] += 351608721;
        result[2] += 0;
        result[3] += 0;
        result[4] += 76404426;
        result[5] += 741790;
      } else {
        result[0] += 297525529;
        result[1] += 8658150;
        result[2] += 19152877;
        result[3] += 39092860;
        result[4] += 32008919;
        result[5] += 33058392;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9138228;
        result[3] += 27414684;
        result[4] += 155349880;
        result[5] += 237593935;
      } else {
        result[0] += 3922344;
        result[1] += 13728205;
        result[2] += 143165576;
        result[3] += 176505505;
        result[4] += 7844689;
        result[5] += 84330408;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 20132659;
        result[1] += 0;
        result[2] += 261724569;
        result[3] += 93952409;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        result[0] += 1535745;
        result[1] += 1023830;
        result[2] += 400829486;
        result[3] += 24060007;
        result[4] += 0;
        result[5] += 2047660;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 31647127;
        result[1] += 28256363;
        result[2] += 2260509;
        result[3] += 12432800;
        result[4] += 313080510;
        result[5] += 41819418;
      } else {
        result[0] += 403283;
        result[1] += 2822983;
        result[2] += 3629549;
        result[3] += 66945030;
        result[4] += 20567449;
        result[5] += 335128434;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 418458262;
        result[2] += 0;
        result[3] += 0;
        result[4] += 11038467;
        result[5] += 0;
      } else {
        result[0] += 278279661;
        result[1] += 11825627;
        result[2] += 21638382;
        result[3] += 28683437;
        result[4] += 52837910;
        result[5] += 36231710;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 23111931;
        result[1] += 13481960;
        result[2] += 65483806;
        result[3] += 154079544;
        result[4] += 23111931;
        result[5] += 150227555;
      } else {
        result[0] += 104391566;
        result[1] += 0;
        result[2] += 277383304;
        result[3] += 44739242;
        result[4] += 0;
        result[5] += 2982616;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 143165576;
        result[3] += 238609294;
        result[4] += 0;
        result[5] += 47721858;
      } else {
        result[0] += 2494173;
        result[1] += 0;
        result[2] += 395077130;
        result[3] += 28433581;
        result[4] += 0;
        result[5] += 3491843;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 3193284;
        result[1] += 15966421;
        result[2] += 0;
        result[3] += 0;
        result[4] += 397563887;
        result[5] += 12773136;
      } else {
        result[0] += 21756166;
        result[1] += 1875531;
        result[2] += 2625744;
        result[3] += 58141478;
        result[4] += 20255740;
        result[5] += 324842067;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1590728;
        result[1] += 349164933;
        result[2] += 0;
        result[3] += 1590728;
        result[4] += 71582788;
        result[5] += 5567550;
      } else {
        result[0] += 298513565;
        result[1] += 10403958;
        result[2] += 16272857;
        result[3] += 32278946;
        result[4] += 28544192;
        result[5] += 43483209;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
        result[0] += 14477417;
        result[1] += 14477417;
        result[2] += 28954835;
        result[3] += 28954835;
        result[4] += 82038701;
        result[5] += 260593521;
      } else {
        result[0] += 6049249;
        result[1] += 2016416;
        result[2] += 112919327;
        result[3] += 227855072;
        result[4] += 8065666;
        result[5] += 72590996;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 17436833;
        result[1] += 0;
        result[2] += 331299827;
        result[3] += 71582788;
        result[4] += 0;
        result[5] += 9177280;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 423386003;
        result[3] += 5237764;
        result[4] += 0;
        result[5] += 872960;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 375809638;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 429496729;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 6942636;
        result[1] += 4418041;
        result[2] += 1262297;
        result[3] += 57750111;
        result[4] += 82049338;
        result[5] += 277074304;
      } else {
        result[0] += 252151983;
        result[1] += 13327726;
        result[2] += 25580636;
        result[3] += 47291932;
        result[4] += 50301418;
        result[5] += 40843032;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 96636764;
        result[4] += 10737418;
        result[5] += 322122547;
      } else {
        result[0] += 3670912;
        result[1] += 51392771;
        result[2] += 139494664;
        result[3] += 161520137;
        result[4] += 11012736;
        result[5] += 62405507;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 23008753;
        result[1] += 0;
        result[2] += 334393882;
        result[3] += 65958426;
        result[4] += 0;
        result[5] += 6135667;
      } else {
        result[0] += 749557;
        result[1] += 0;
        result[2] += 413006453;
        result[3] += 15740717;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 1819901;
        result[2] += 0;
        result[3] += 0;
        result[4] += 416757419;
        result[5] += 10919408;
      } else {
        result[0] += 15853906;
        result[1] += 11169797;
        result[2] += 10088849;
        result[3] += 65217204;
        result[4] += 16574538;
        result[5] += 310592433;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 407833517;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21663212;
        result[5] += 0;
      } else {
        result[0] += 265391195;
        result[1] += 7738679;
        result[2] += 26402554;
        result[3] += 38465790;
        result[4] += 52349892;
        result[5] += 39148615;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 33907636;
        result[2] += 33907636;
        result[3] += 124328000;
        result[4] += 11302545;
        result[5] += 226050910;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 239719104;
        result[3] += 166471600;
        result[4] += 3329432;
        result[5] += 19976592;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 26030104;
        result[1] += 0;
        result[2] += 273316100;
        result[3] += 0;
        result[4] += 0;
        result[5] += 130150524;
      } else {
        result[0] += 3516347;
        result[1] += 1004670;
        result[2] += 395337925;
        result[3] += 27628444;
        result[4] += 0;
        result[5] += 2009341;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1590728;
        result[1] += 7953643;
        result[2] += 0;
        result[3] += 0;
        result[4] += 408817257;
        result[5] += 11135100;
      } else {
        result[0] += 16817643;
        result[1] += 2263913;
        result[2] += 1617081;
        result[3] += 68564236;
        result[4] += 24256215;
        result[5] += 315977639;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 2928386;
        result[1] += 409974150;
        result[2] += 2928386;
        result[3] += 0;
        result[4] += 13665805;
        result[5] += 0;
      } else {
        result[0] += 274152136;
        result[1] += 17647145;
        result[2] += 22866724;
        result[3] += 34797188;
        result[4] += 50953026;
        result[5] += 29080507;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 17179869;
        result[1] += 2863311;
        result[2] += 154618822;
        result[3] += 146028888;
        result[4] += 17179869;
        result[5] += 91625968;
      } else {
        result[0] += 41667593;
        result[1] += 0;
        result[2] += 309301749;
        result[3] += 56090990;
        result[4] += 0;
        result[5] += 22436396;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 260765871;
        result[3] += 138052520;
        result[4] += 0;
        result[5] += 30678337;
      } else {
        result[0] += 0;
        result[1] += 1399012;
        result[2] += 409211053;
        result[3] += 16788145;
        result[4] += 0;
        result[5] += 2098518;
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
