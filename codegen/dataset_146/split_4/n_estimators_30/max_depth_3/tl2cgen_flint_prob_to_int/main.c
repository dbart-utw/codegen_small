
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
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1684300;
        result[1] += 561433;
        result[2] += 0;
        result[3] += 0;
        result[4] += 119585363;
        result[5] += 21334478;
      } else {
        result[0] += 4168606;
        result[1] += 3386992;
        result[2] += 1042151;
        result[3] += 19670611;
        result[4] += 6904254;
        result[5] += 107992959;
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 87106288;
        result[1] += 7463984;
        result[2] += 3890800;
        result[3] += 11592997;
        result[4] += 20327447;
        result[5] += 12784058;
      } else {
        result[0] += 1236851;
        result[1] += 141001086;
        result[2] += 0;
        result[3] += 0;
        result[4] += 927638;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1145324;
        result[1] += 0;
        result[2] += 21761167;
        result[3] += 85899345;
        result[4] += 1145324;
        result[5] += 33214413;
      } else {
        result[0] += 6882960;
        result[1] += 0;
        result[2] += 94984853;
        result[3] += 34414802;
        result[4] += 0;
        result[5] += 6882960;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 11348490;
        result[1] += 0;
        result[2] += 104755299;
        result[3] += 11348490;
        result[4] += 0;
        result[5] += 15713294;
      } else {
        result[0] += 1232667;
        result[1] += 0;
        result[2] += 135593473;
        result[3] += 6163339;
        result[4] += 0;
        result[5] += 176095;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 544355;
        result[1] += 4354846;
        result[2] += 0;
        result[3] += 1633067;
        result[4] += 122480055;
        result[5] += 14153250;
      } else {
        result[0] += 7118730;
        result[1] += 451982;
        result[2] += 338987;
        result[3] += 21921169;
        result[4] += 7457717;
        result[5] += 105876989;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 137140572;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5738099;
        result[5] += 286904;
      } else {
        result[0] += 88853308;
        result[1] += 4845123;
        result[2] += 11800219;
        result[3] += 13050573;
        result[4] += 15082399;
        result[5] += 9533952;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 3579139;
        result[1] += 3579139;
        result[2] += 7158278;
        result[3] += 25053975;
        result[4] += 25053975;
        result[5] += 78741067;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 100602837;
        result[3] += 15477359;
        result[4] += 0;
        result[5] += 27085379;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22605091;
        result[3] += 45210182;
        result[4] += 0;
        result[5] += 75350303;
      } else {
        result[0] += 658989;
        result[1] += 0;
        result[2] += 130315271;
        result[3] += 11861819;
        result[4] += 0;
        result[5] += 329494;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2970240;
        result[2] += 594048;
        result[3] += 4158336;
        result[4] += 125344135;
        result[5] += 10098816;
      } else {
        result[0] += 5927949;
        result[1] += 1789569;
        result[2] += 2236962;
        result[3] += 23264406;
        result[4] += 7829367;
        result[5] += 102117321;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 86581842;
        result[1] += 5634565;
        result[2] += 10316809;
        result[3] += 13888013;
        result[4] += 16506895;
        result[5] += 10237449;
      } else {
        result[0] += 1939037;
        result[1] += 141226539;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6224590;
        result[4] += 21786065;
        result[5] += 115154920;
      } else {
        result[0] += 3639802;
        result[1] += 20625549;
        result[2] += 52170506;
        result[3] += 41251098;
        result[4] += 4853070;
        result[5] += 20625549;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 33172511;
        result[1] += 0;
        result[2] += 89042004;
        result[3] += 13967373;
        result[4] += 0;
        result[5] += 6983686;
      } else {
        result[0] += 1057873;
        result[1] += 0;
        result[2] += 133115776;
        result[3] += 8991926;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 542293;
        result[1] += 542293;
        result[2] += 1084587;
        result[3] += 0;
        result[4] += 131235111;
        result[5] += 9761289;
      } else {
        result[0] += 6850583;
        result[1] += 2670566;
        result[2] += 1161115;
        result[3] += 20087303;
        result[4] += 6850583;
        result[5] += 105545425;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 112944578;
        result[2] += 0;
        result[3] += 5634423;
        result[4] += 23818244;
        result[5] += 768330;
      } else {
        result[0] += 95981934;
        result[1] += 4036623;
        result[2] += 7624733;
        result[3] += 12109870;
        result[4] += 12737789;
        result[5] += 10674626;
      }
    }
  } else {
    if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12098499;
        result[3] += 26213415;
        result[4] += 0;
        result[5] += 104853661;
      } else {
        result[0] += 15070060;
        result[1] += 26372606;
        result[2] += 75350303;
        result[3] += 0;
        result[4] += 11302545;
        result[5] += 15070060;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 87490074;
        result[3] += 44540401;
        result[4] += 0;
        result[5] += 11135100;
      } else {
        result[0] += 2911842;
        result[1] += 0;
        result[2] += 130385824;
        result[3] += 7603143;
        result[4] += 0;
        result[5] += 2264766;
      }
    }
  }
  if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3526245;
        result[2] += 0;
        result[3] += 0;
        result[4] += 138228832;
        result[5] += 1410498;
      } else {
        result[0] += 13421772;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82767598;
        result[5] += 46976204;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 4846030;
        result[1] += 1938412;
        result[2] += 0;
        result[3] += 10384350;
        result[4] += 9553602;
        result[5] += 116443181;
      } else {
        result[0] += 609215;
        result[1] += 0;
        result[2] += 12793519;
        result[3] += 91991498;
        result[4] += 2436860;
        result[5] += 35334482;
      }
    }
  } else {
    if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 278532;
        result[1] += 128960431;
        result[2] += 835596;
        result[3] += 0;
        result[4] += 13091015;
        result[5] += 0;
      } else {
        result[0] += 100934916;
        result[1] += 3094487;
        result[2] += 4641731;
        result[3] += 7190133;
        result[4] += 14562296;
        result[5] += 12742009;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2236962;
        result[1] += 14540253;
        result[2] += 41943039;
        result[3] += 44180002;
        result[4] += 13981013;
        result[5] += 26284305;
      } else {
        result[0] += 6500654;
        result[1] += 0;
        result[2] += 127594241;
        result[3] += 8617146;
        result[4] += 0;
        result[5] += 453534;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 7304366;
        result[2] += 0;
        result[3] += 0;
        result[4] += 124661182;
        result[5] += 11200028;
      } else {
        result[0] += 5970016;
        result[1] += 344424;
        result[2] += 1722120;
        result[3] += 23650448;
        result[4] += 6429248;
        result[5] += 105049320;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 139843168;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3322407;
        result[5] += 0;
      } else {
        result[0] += 89266952;
        result[1] += 4653727;
        result[2] += 7107510;
        result[3] += 12015077;
        result[4] += 15653446;
        result[5] += 14468861;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 749557;
        result[1] += 0;
        result[2] += 68209777;
        result[3] += 54717733;
        result[4] += 0;
        result[5] += 19488507;
      } else {
        result[0] += 2556528;
        result[1] += 0;
        result[2] += 120156823;
        result[3] += 15339168;
        result[4] += 0;
        result[5] += 5113056;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35791394;
        result[3] += 0;
        result[4] += 0;
        result[5] += 107374182;
      } else {
        result[0] += 1763122;
        result[1] += 0;
        result[2] += 135584148;
        result[3] += 5818305;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 140195336;
        result[5] += 2970240;
      } else {
        result[0] += 59381176;
        result[1] += 2440322;
        result[2] += 0;
        result[3] += 7320966;
        result[4] += 45552683;
        result[5] += 28470427;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 601536;
        result[2] += 300768;
        result[3] += 9774960;
        result[4] += 10677264;
        result[5] += 121811047;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4197036;
        result[3] += 80210029;
        result[4] += 0;
        result[5] += 58758510;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 138228832;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4936744;
        result[5] += 0;
      } else {
        result[0] += 100760824;
        result[1] += 4161213;
        result[2] += 5845514;
        result[3] += 8223351;
        result[4] += 15455937;
        result[5] += 8718734;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 4169871;
        result[1] += 4169871;
        result[2] += 42393690;
        result[3] += 59073174;
        result[4] += 3474892;
        result[5] += 29884076;
      } else {
        result[0] += 6261715;
        result[1] += 0;
        result[2] += 127226665;
        result[3] += 8965637;
        result[4] += 284623;
        result[5] += 426935;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 862443;
        result[1] += 6468324;
        result[2] += 0;
        result[3] += 0;
        result[4] += 123329382;
        result[5] += 12505426;
      } else {
        result[0] += 5925727;
        result[1] += 829601;
        result[2] += 2251776;
        result[3] += 22280735;
        result[4] += 7229387;
        result[5] += 104648347;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 134199047;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8966528;
        result[5] += 0;
      } else {
        result[0] += 103418046;
        result[1] += 5026619;
        result[2] += 2885652;
        result[3] += 8098442;
        result[4] += 14986773;
        result[5] += 8750041;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12917194;
        result[3] += 78579602;
        result[4] += 4305731;
        result[5] += 47363047;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 71582788;
        result[3] += 0;
        result[4] += 0;
        result[5] += 71582788;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1475933;
        result[1] += 10331536;
        result[2] += 53133616;
        result[3] += 29518675;
        result[4] += 13283404;
        result[5] += 35422410;
      } else {
        result[0] += 3090915;
        result[1] += 0;
        result[2] += 127711000;
        result[3] += 10958699;
        result[4] += 280992;
        result[5] += 1123969;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2211051;
        result[2] += 0;
        result[3] += 2763814;
        result[4] += 129899268;
        result[5] += 8291442;
      } else {
        result[0] += 6867291;
        result[1] += 814763;
        result[2] += 0;
        result[3] += 21533033;
        result[4] += 7798450;
        result[5] += 106152037;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 120844061;
        result[2] += 0;
        result[3] += 769707;
        result[4] += 20525530;
        result[5] += 1026276;
      } else {
        result[0] += 91572103;
        result[1] += 4124111;
        result[2] += 10268195;
        result[3] += 15402293;
        result[4] += 12708995;
        result[5] += 9089877;
      }
    }
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34359738;
        result[3] += 38177487;
        result[4] += 0;
        result[5] += 70628351;
      } else {
        result[0] += 19442238;
        result[1] += 7069905;
        result[2] += 104281098;
        result[3] += 7069905;
        result[4] += 0;
        result[5] += 5302428;
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 77309411;
        result[3] += 40086361;
        result[4] += 2863311;
        result[5] += 22906492;
      } else {
        result[0] += 164180;
        result[1] += 0;
        result[2] += 134135637;
        result[3] += 8044854;
        result[4] += 0;
        result[5] += 820903;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 142865439;
        result[2] += 0;
        result[3] += 0;
        result[4] += 300137;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        result[0] += 5734143;
        result[1] += 1598039;
        result[2] += 2162054;
        result[3] += 19082476;
        result[4] += 28858720;
        result[5] += 85730141;
      } else {
        result[0] += 89896516;
        result[1] += 4936744;
        result[2] += 8917989;
        result[3] += 11943735;
        result[4] += 18950727;
        result[5] += 8519864;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 3491843;
        result[1] += 17459216;
        result[2] += 10475529;
        result[3] += 0;
        result[4] += 20951059;
        result[5] += 90787926;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 60873552;
        result[3] += 59746264;
        result[4] += 0;
        result[5] += 22545760;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 110627945;
        result[3] += 29645397;
        result[4] += 0;
        result[5] += 2892233;
      } else {
        result[0] += 866357;
        result[1] += 433178;
        result[2] += 136234716;
        result[3] += 4764966;
        result[4] += 0;
        result[5] += 866357;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 3604888;
        result[2] += 0;
        result[3] += 0;
        result[4] += 135440815;
        result[5] += 4119872;
      } else {
        result[0] += 8329633;
        result[1] += 2811251;
        result[2] += 0;
        result[3] += 25093021;
        result[4] += 8225513;
        result[5] += 98706157;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1234186;
        result[1] += 120456554;
        result[2] += 493674;
        result[3] += 1234186;
        result[4] += 18759627;
        result[5] += 987348;
      } else {
        result[0] += 96839271;
        result[1] += 3640574;
        result[2] += 9101435;
        result[3] += 14289253;
        result[4] += 11103751;
        result[5] += 8191291;
      }
    }
  } else {
    if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6362914;
        result[3] += 50903316;
        result[4] += 0;
        result[5] += 85899345;
      } else {
        result[0] += 3976821;
        result[1] += 35791394;
        result[2] += 79536431;
        result[3] += 15907286;
        result[4] += 0;
        result[5] += 7953643;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3670912;
        result[1] += 0;
        result[2] += 95443717;
        result[3] += 29367297;
        result[4] += 1835456;
        result[5] += 12848192;
      } else {
        result[0] += 365684;
        result[1] += 0;
        result[2] += 135486196;
        result[3] += 6399482;
        result[4] += 0;
        result[5] += 914211;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 38028356;
        result[1] += 5752188;
        result[2] += 0;
        result[3] += 639132;
        result[4] += 81489334;
        result[5] += 17256565;
      } else {
        result[0] += 692290;
        result[1] += 0;
        result[2] += 276916;
        result[3] += 13153510;
        result[4] += 13430426;
        result[5] += 115612433;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 135706047;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7459529;
        result[5] += 0;
      } else {
        result[0] += 96122812;
        result[1] += 2592908;
        result[2] += 6945289;
        result[3] += 13612768;
        result[4] += 8704763;
        result[5] += 15187033;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12707003;
        result[3] += 77089156;
        result[4] += 11012736;
        result[5] += 42356679;
      } else {
        result[0] += 0;
        result[1] += 14477417;
        result[2] += 81234400;
        result[3] += 24933330;
        result[4] += 4021504;
        result[5] += 18498922;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 17318416;
        result[1] += 5772805;
        result[2] += 84282960;
        result[3] += 10391049;
        result[4] += 16163855;
        result[5] += 9236488;
      } else {
        result[0] += 3112295;
        result[1] += 0;
        result[2] += 132099638;
        result[3] += 7953643;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 30446977;
        result[1] += 323904;
        result[2] += 0;
        result[3] += 2915136;
        result[4] += 95551685;
        result[5] += 13927872;
      } else {
        result[0] += 1285918;
        result[1] += 428639;
        result[2] += 285759;
        result[3] += 11287505;
        result[4] += 15573900;
        result[5] += 114303853;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 762871;
        result[1] += 129433887;
        result[2] += 0;
        result[3] += 0;
        result[4] += 12968817;
        result[5] += 0;
      } else {
        result[0] += 92413758;
        result[1] += 2861628;
        result[2] += 8669050;
        result[3] += 19947231;
        result[4] += 5639090;
        result[5] += 13634816;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 1961172;
        result[2] += 9805861;
        result[3] += 3922344;
        result[4] += 23534067;
        result[5] += 103942130;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41756626;
        result[3] += 68600172;
        result[4] += 994205;
        result[5] += 31814572;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 50529027;
        result[1] += 0;
        result[2] += 50529027;
        result[3] += 25264513;
        result[4] += 4210752;
        result[5] += 12632256;
      } else {
        result[0] += 330255;
        result[1] += 0;
        result[2] += 132267158;
        result[3] += 10237907;
        result[4] += 0;
        result[5] += 330255;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 33038209;
        result[2] += 0;
        result[3] += 33038209;
        result[4] += 44050946;
        result[5] += 33038209;
      } else {
        result[0] += 314649;
        result[1] += 141277678;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1573248;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        result[0] += 3270020;
        result[1] += 817505;
        result[2] += 715316;
        result[3] += 19006993;
        result[4] += 29941123;
        result[5] += 89414617;
      } else {
        result[0] += 86317129;
        result[1] += 7236613;
        result[2] += 6192153;
        result[3] += 10519200;
        result[4] += 17158979;
        result[5] += 15741499;
      }
    }
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 2386092;
        result[1] += 0;
        result[2] += 38177487;
        result[3] += 77548020;
        result[4] += 1193046;
        result[5] += 23860929;
      } else {
        result[0] += 688296;
        result[1] += 0;
        result[2] += 115633734;
        result[3] += 22025473;
        result[4] += 0;
        result[5] += 4818072;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 23860929;
        result[1] += 0;
        result[2] += 92792503;
        result[3] += 13256071;
        result[4] += 0;
        result[5] += 13256071;
      } else {
        result[0] += 872960;
        result[1] += 0;
        result[2] += 137927811;
        result[3] += 4364804;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 7450996;
        result[2] += 0;
        result[3] += 0;
        result[4] += 131989081;
        result[5] += 3725498;
      } else {
        result[0] += 7039068;
        result[1] += 1816533;
        result[2] += 227066;
        result[3] += 22025473;
        result[4] += 6357868;
        result[5] += 105699565;
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 88548440;
        result[1] += 9320888;
        result[2] += 4905730;
        result[3] += 9729699;
        result[4] += 19050587;
        result[5] += 11610229;
      } else {
        result[0] += 2079887;
        result[1] += 137619210;
        result[2] += 0;
        result[3] += 2426535;
        result[4] += 1039943;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20452225;
        result[3] += 87944568;
        result[4] += 0;
        result[5] += 34768782;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 77212895;
        result[3] += 35389243;
        result[4] += 0;
        result[5] += 30563437;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 13634816;
        result[1] += 0;
        result[2] += 54539267;
        result[3] += 44313154;
        result[4] += 10226112;
        result[5] += 20452225;
      } else {
        result[0] += 1691537;
        result[1] += 0;
        result[2] += 131171038;
        result[3] += 9226567;
        result[4] += 0;
        result[5] += 1076432;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 43745037;
        result[1] += 3059093;
        result[2] += 1529546;
        result[3] += 1835456;
        result[4] += 87184165;
        result[5] += 5812277;
      } else {
        result[0] += 2430458;
        result[1] += 1736041;
        result[2] += 347208;
        result[3] += 16434528;
        result[4] += 13425389;
        result[5] += 108791949;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        result[0] += 1171088;
        result[1] += 126477564;
        result[2] += 0;
        result[3] += 3220493;
        result[4] += 12296429;
        result[5] += 0;
      } else {
        result[0] += 85650052;
        result[1] += 4184565;
        result[2] += 10594964;
        result[3] += 19231196;
        result[4] += 8369131;
        result[5] += 15135664;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 1376592;
        result[1] += 12389328;
        result[2] += 35791394;
        result[3] += 52310499;
        result[4] += 5506368;
        result[5] += 35791394;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 86495869;
        result[3] += 0;
        result[4] += 0;
        result[5] += 2982616;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42db0000))) ) ) {
        result[0] += 1816822;
        result[1] += 0;
        result[2] += 119910254;
        result[3] += 18894949;
        result[4] += 0;
        result[5] += 2543550;
      } else {
        result[0] += 599019;
        result[1] += 0;
        result[2] += 138672932;
        result[3] += 2995095;
        result[4] += 0;
        result[5] += 898528;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 10394860;
        result[2] += 944987;
        result[3] += 0;
        result[4] += 122375855;
        result[5] += 9449873;
      } else {
        result[0] += 4957591;
        result[1] += 241833;
        result[2] += 604584;
        result[3] += 21281369;
        result[4] += 9673349;
        result[5] += 106406847;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 544355;
        result[1] += 129556681;
        result[2] += 0;
        result[3] += 816533;
        result[4] += 10887116;
        result[5] += 1360889;
      } else {
        result[0] += 94848257;
        result[1] += 3572759;
        result[2] += 6805256;
        result[3] += 11568935;
        result[4] += 10207884;
        result[5] += 16162483;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 28256363;
        result[1] += 5651272;
        result[2] += 16953818;
        result[3] += 0;
        result[4] += 11302545;
        result[5] += 81001576;
      } else {
        result[0] += 6092152;
        result[1] += 7615190;
        result[2] += 60921521;
        result[3] += 47214179;
        result[4] += 0;
        result[5] += 21322532;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17895697;
        result[3] += 98426333;
        result[4] += 0;
        result[5] += 26843545;
      } else {
        result[0] += 303316;
        result[1] += 0;
        result[2] += 130881242;
        result[3] += 11222725;
        result[4] += 0;
        result[5] += 758292;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 2225371;
        result[2] += 0;
        result[3] += 0;
        result[4] += 137973042;
        result[5] += 2967162;
      } else {
        result[0] += 0;
        result[1] += 19976592;
        result[2] += 0;
        result[3] += 13317728;
        result[4] += 76576936;
        result[5] += 33294320;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 5410327;
        result[1] += 554905;
        result[2] += 0;
        result[3] += 7768674;
        result[4] += 9849569;
        result[5] += 119582099;
      } else {
        result[0] += 3520464;
        result[1] += 0;
        result[2] += 1173488;
        result[3] += 79797206;
        result[4] += 1760232;
        result[5] += 56914184;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1084587;
        result[1] += 113881708;
        result[2] += 271146;
        result[3] += 2440322;
        result[4] += 23318635;
        result[5] += 2169175;
      } else {
        result[0] += 103661963;
        result[1] += 4856236;
        result[2] += 2054561;
        result[3] += 9525693;
        result[4] += 13914984;
        result[5] += 9152137;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2016416;
        result[1] += 672138;
        result[2] += 47721858;
        result[3] += 49738275;
        result[4] += 4032833;
        result[5] += 38984053;
      } else {
        result[0] += 3854457;
        result[1] += 0;
        result[2] += 126371153;
        result[3] += 11012736;
        result[4] += 0;
        result[5] += 1927228;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 2376192;
        result[1] += 594048;
        result[2] += 594048;
        result[3] += 0;
        result[4] += 133660807;
        result[5] += 5940480;
      } else {
        result[0] += 5253782;
        result[1] += 766176;
        result[2] += 218907;
        result[3] += 22875845;
        result[4] += 7333404;
        result[5] += 106717459;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        result[0] += 858993;
        result[1] += 132571323;
        result[2] += 0;
        result[3] += 572662;
        result[4] += 9162596;
        result[5] += 0;
      } else {
        result[0] += 89550109;
        result[1] += 7203299;
        result[2] += 8103711;
        result[3] += 13669897;
        result[4] += 14406598;
        result[5] += 10231959;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12820797;
        result[3] += 61967189;
        result[4] += 0;
        result[5] += 68377588;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 108169546;
        result[3] += 3181457;
        result[4] += 0;
        result[5] += 31814572;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1539414;
        result[1] += 1154561;
        result[2] += 112762134;
        result[3] += 24245783;
        result[4] += 0;
        result[5] += 3463683;
      } else {
        result[0] += 789516;
        result[1] += 0;
        result[2] += 140007512;
        result[3] += 2368548;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 1690932;
        result[2] += 0;
        result[3] += 0;
        result[4] += 139220068;
        result[5] += 2254576;
      } else {
        result[0] += 6817408;
        result[1] += 10226112;
        result[2] += 0;
        result[3] += 40904450;
        result[4] += 34087042;
        result[5] += 51130563;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 5285648;
        result[1] += 0;
        result[2] += 302037;
        result[3] += 6342778;
        result[4] += 12685557;
        result[5] += 118549554;
      } else {
        result[0] += 11123140;
        result[1] += 2152865;
        result[2] += 2870487;
        result[3] += 64227163;
        result[4] += 8252652;
        result[5] += 54539267;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
      if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 82885333;
        result[2] += 0;
        result[3] += 0;
        result[4] += 60280242;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 108948583;
        result[1] += 4093443;
        result[2] += 5877765;
        result[3] += 5772805;
        result[4] += 11860491;
        result[5] += 6612486;
      } else {
        result[0] += 5771015;
        result[1] += 998829;
        result[2] += 107984578;
        result[3] += 17424027;
        result[4] += 665886;
        result[5] += 10321239;
      }
    }
  }
  if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1168698;
        result[1] += 12271335;
        result[2] += 0;
        result[3] += 1753047;
        result[4] += 119207255;
        result[5] += 8765239;
      } else {
        result[0] += 52426830;
        result[1] += 0;
        result[2] += 10082082;
        result[3] += 8065666;
        result[4] += 36295498;
        result[5] += 36295498;
      }
    } else {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 170435;
        result[1] += 170435;
        result[2] += 340870;
        result[3] += 8010454;
        result[4] += 12612205;
        result[5] += 121861175;
      } else {
        result[0] += 0;
        result[1] += 6179809;
        result[2] += 14934538;
        result[3] += 59738154;
        result[4] += 6694793;
        result[5] += 55618281;
      }
    }
  } else {
    if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
        result[0] += 1258598;
        result[1] += 135928635;
        result[2] += 1258598;
        result[3] += 943948;
        result[4] += 3461145;
        result[5] += 314649;
      } else {
        result[0] += 90903987;
        result[1] += 5660988;
        result[2] += 2953559;
        result[3] += 11568106;
        result[4] += 20674914;
        result[5] += 11404020;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7248889;
        result[1] += 3624444;
        result[2] += 53913618;
        result[3] += 42587228;
        result[4] += 3171389;
        result[5] += 32620004;
      } else {
        result[0] += 653724;
        result[1] += 0;
        result[2] += 130254525;
        result[3] += 10459585;
        result[4] += 0;
        result[5] += 1797741;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2454267;
        result[4] += 117804817;
        result[5] += 22906492;
      } else {
        result[0] += 5371832;
        result[1] += 749557;
        result[2] += 999410;
        result[3] += 20987623;
        result[4] += 8245137;
        result[5] += 106812013;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 94858686;
        result[1] += 9360504;
        result[2] += 5683163;
        result[3] += 9360504;
        result[4] += 15294396;
        result[5] += 8608321;
      } else {
        result[0] += 1337996;
        result[1] += 140489584;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1337996;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17895697;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 98426333;
      } else {
        result[0] += 0;
        result[1] += 1052688;
        result[2] += 20001073;
        result[3] += 91583861;
        result[4] += 0;
        result[5] += 30527953;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 4668442;
        result[1] += 15561475;
        result[2] += 42015984;
        result[3] += 28010656;
        result[4] += 15561475;
        result[5] += 37347541;
      } else {
        result[0] += 1695179;
        result[1] += 0;
        result[2] += 129295929;
        result[3] += 11095717;
        result[4] += 616428;
        result[5] += 462321;
      }
    }
  }
  if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1344277;
        result[2] += 0;
        result[3] += 0;
        result[4] += 136444187;
        result[5] += 5377110;
      } else {
        result[0] += 5506368;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 77089156;
        result[5] += 60570051;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 6446479;
        result[1] += 3626144;
        result[2] += 268603;
        result[3] += 10878434;
        result[4] += 8863909;
        result[5] += 113082003;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8994695;
        result[3] += 89197401;
        result[4] += 1499115;
        result[5] += 43474363;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 3341386;
        result[1] += 109494677;
        result[2] += 1028119;
        result[3] += 1028119;
        result[4] += 26474065;
        result[5] += 1799208;
      } else {
        result[0] += 102341383;
        result[1] += 5243474;
        result[2] += 1591768;
        result[3] += 8895179;
        result[4] += 14513187;
        result[5] += 10580582;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 7396007;
        result[1] += 0;
        result[2] += 50715480;
        result[3] += 55998343;
        result[4] += 2641431;
        result[5] += 26414313;
      } else {
        result[0] += 2648489;
        result[1] += 0;
        result[2] += 126097532;
        result[3] += 11329649;
        result[4] += 0;
        result[5] += 3089904;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 532214;
        result[1] += 2128856;
        result[2] += 0;
        result[3] += 1064428;
        result[4] += 121877014;
        result[5] += 17563063;
      } else {
        result[0] += 4182971;
        result[1] += 1214411;
        result[2] += 1349345;
        result[3] += 19700446;
        result[4] += 9040616;
        result[5] += 107677785;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 135078817;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8086758;
        result[5] += 0;
      } else {
        result[0] += 86675986;
        result[1] += 4029737;
        result[2] += 9378297;
        result[3] += 12235747;
        result[4] += 16558556;
        result[5] += 14287250;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 0;
        result[4] += 21474836;
        result[5] += 93057624;
      } else {
        result[0] += 1001157;
        result[1] += 12013894;
        result[2] += 47054420;
        result[3] += 61070630;
        result[4] += 4004631;
        result[5] += 18020841;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1149264;
        result[1] += 0;
        result[2] += 130195300;
        result[3] += 10507565;
        result[4] += 0;
        result[5] += 1313445;
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 20452225;
        result[2] += 0;
        result[3] += 0;
        result[4] += 92035013;
        result[5] += 30678337;
      } else {
        result[0] += 0;
        result[1] += 142510356;
        result[2] += 0;
        result[3] += 0;
        result[4] += 655220;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 69144445;
        result[1] += 7837531;
        result[2] += 0;
        result[3] += 2264175;
        result[4] += 56256059;
        result[5] += 7663364;
      } else {
        result[0] += 10497794;
        result[1] += 4792471;
        result[2] += 5020684;
        result[3] += 28070190;
        result[4] += 14681698;
        result[5] += 80102737;
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 141204404;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1225732;
        result[4] += 735439;
        result[5] += 0;
      } else {
        result[0] += 16953818;
        result[1] += 0;
        result[2] += 97955394;
        result[3] += 18837575;
        result[4] += 0;
        result[5] += 9418787;
      }
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 76017120;
        result[3] += 53211984;
        result[4] += 0;
        result[5] += 13936472;
      } else {
        result[0] += 6695940;
        result[1] += 0;
        result[2] += 129454842;
        result[3] += 6217658;
        result[4] += 0;
        result[5] += 797135;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 2489836;
        result[1] += 1867377;
        result[2] += 0;
        result[3] += 0;
        result[4] += 128849018;
        result[5] += 9959344;
      } else {
        result[0] += 6367968;
        result[1] += 2842843;
        result[2] += 2842843;
        result[3] += 21605607;
        result[4] += 6026827;
        result[5] += 103479487;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
        result[0] += 1050756;
        result[1] += 129505741;
        result[2] += 0;
        result[3] += 0;
        result[4] += 12609078;
        result[5] += 0;
      } else {
        result[0] += 100179704;
        result[1] += 2624400;
        result[2] += 6787242;
        result[3] += 10678595;
        result[4] += 13845975;
        result[5] += 9049657;
      }
    }
  } else {
    if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( LIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 2346976;
        result[1] += 1173488;
        result[2] += 9387906;
        result[3] += 75103253;
        result[4] += 4693953;
        result[5] += 50459998;
      } else {
        result[0] += 7953643;
        result[1] += 34465786;
        result[2] += 66280359;
        result[3] += 10604857;
        result[4] += 5302428;
        result[5] += 18558500;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 7738679;
        result[1] += 0;
        result[2] += 34824059;
        result[3] += 3869339;
        result[4] += 23216039;
        result[5] += 73517458;
      } else {
        result[0] += 1292367;
        result[1] += 0;
        result[2] += 126795590;
        result[3] += 12349287;
        result[4] += 143596;
        result[5] += 2584734;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 574962;
        result[1] += 4599697;
        result[2] += 0;
        result[3] += 1149924;
        result[4] += 126491674;
        result[5] += 10349318;
      } else {
        result[0] += 6885243;
        result[1] += 3086488;
        result[2] += 2018088;
        result[3] += 20418307;
        result[4] += 7241376;
        result[5] += 103516071;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 134446258;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8156781;
        result[5] += 562536;
      } else {
        result[0] += 98956618;
        result[1] += 4108307;
        result[2] += 4554862;
        result[3] += 9824212;
        result[4] += 18308760;
        result[5] += 7412815;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15907286;
        result[3] += 81303907;
        result[4] += 0;
        result[5] += 45954382;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 96553528;
        result[3] += 26635456;
        result[4] += 3329432;
        result[5] += 16647160;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 6275751;
        result[1] += 3137875;
        result[2] += 98058614;
        result[3] += 24318536;
        result[4] += 1568937;
        result[5] += 9805861;
      } else {
        result[0] += 831149;
        result[1] += 207787;
        result[2] += 135061864;
        result[3] += 4571324;
        result[4] += 207787;
        result[5] += 2285662;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 483667;
        result[1] += 5320342;
        result[2] += 0;
        result[3] += 2902004;
        result[4] += 120916872;
        result[5] += 13542689;
      } else {
        result[0] += 6383931;
        result[1] += 354662;
        result[2] += 118220;
        result[3] += 23998853;
        result[4] += 6502152;
        result[5] += 105807754;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 509486;
        result[1] += 119474475;
        result[2] += 0;
        result[3] += 2037944;
        result[4] += 20379441;
        result[5] += 764229;
      } else {
        result[0] += 92313961;
        result[1] += 3406725;
        result[2] += 13128358;
        result[3] += 13626903;
        result[4] += 10469450;
        result[5] += 10220177;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
      if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 3217203;
        result[2] += 27346233;
        result[3] += 69169885;
        result[4] += 8043009;
        result[5] += 35389243;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 93143869;
        result[3] += 18973751;
        result[4] += 6899545;
        result[5] += 24148410;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1301505;
        result[1] += 0;
        result[2] += 116267801;
        result[3] += 20390248;
        result[4] += 0;
        result[5] += 5206020;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 139667169;
        result[3] += 3498406;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 46248961;
        result[1] += 2356635;
        result[2] += 0;
        result[3] += 883738;
        result[4] += 83365963;
        result[5] += 10310278;
      } else {
        result[0] += 836526;
        result[1] += 478015;
        result[2] += 0;
        result[3] += 14579466;
        result[4] += 14101450;
        result[5] += 113170117;
      }
    } else {
      if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 97652762;
        result[1] += 8966121;
        result[2] += 5262723;
        result[3] += 13449182;
        result[4] += 8966121;
        result[5] += 8868664;
      } else {
        result[0] += 1373290;
        result[1] += 141792285;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 1556147;
        result[2] += 18673770;
        result[3] += 71582788;
        result[4] += 7002664;
        result[5] += 44350205;
      } else {
        result[0] += 3734754;
        result[1] += 0;
        result[2] += 94613772;
        result[3] += 34857705;
        result[4] += 0;
        result[5] += 9959344;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 20114171;
        result[1] += 11831865;
        result[2] += 85189433;
        result[3] += 14198238;
        result[4] += 0;
        result[5] += 11831865;
      } else {
        result[0] += 2226258;
        result[1] += 0;
        result[2] += 134774292;
        result[3] += 5993774;
        result[4] += 0;
        result[5] += 171250;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 4693953;
        result[2] += 0;
        result[3] += 0;
        result[4] += 133190925;
        result[5] += 5280697;
      } else {
        result[0] += 5082161;
        result[1] += 1297573;
        result[2] += 2270753;
        result[3] += 24653890;
        result[4] += 8650488;
        result[5] += 101210709;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 136672105;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6493471;
        result[5] += 0;
      } else {
        result[0] += 85602548;
        result[1] += 5545420;
        result[2] += 9684959;
        result[3] += 13433976;
        result[4] += 17417306;
        result[5] += 11481363;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15907286;
        result[3] += 10604857;
        result[4] += 0;
        result[5] += 116653432;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 143165576;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 1266952;
        result[1] += 633476;
        result[2] += 110224824;
        result[3] += 24072088;
        result[4] += 0;
        result[5] += 6968236;
      } else {
        result[0] += 1018247;
        result[1] += 203649;
        result[2] += 137870690;
        result[3] += 3665690;
        result[4] += 0;
        result[5] += 407298;
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_4/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
