
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 67936480;
        result[1] += 34543972;
        result[2] += 0;
        result[3] += 5757328;
        result[4] += 264837125;
        result[5] += 56421822;
      } else {
        result[0] += 3016658;
        result[1] += 377082;
        result[2] += 1885411;
        result[3] += 73531046;
        result[4] += 25641595;
        result[5] += 325044934;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 400562212;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28934516;
        result[5] += 0;
      } else {
        result[0] += 273665889;
        result[1] += 11783504;
        result[2] += 22364611;
        result[3] += 41362506;
        result[4] += 43767303;
        result[5] += 36552913;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 82595524;
        result[3] += 297343889;
        result[4] += 0;
        result[5] += 49557314;
      } else {
        result[0] += 0;
        result[1] += 19522578;
        result[2] += 279823626;
        result[3] += 78090314;
        result[4] += 0;
        result[5] += 52060209;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 28633115;
        result[4] += 28633115;
        result[5] += 343597383;
      } else {
        result[0] += 5220402;
        result[1] += 1423746;
        result[2] += 392004749;
        result[3] += 24678265;
        result[4] += 474582;
        result[5] += 5694984;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 84342258;
        result[1] += 20761171;
        result[2] += 0;
        result[3] += 0;
        result[4] += 288061250;
        result[5] += 36332049;
      } else {
        result[0] += 2071527;
        result[1] += 3107291;
        result[2] += 10012383;
        result[3] += 63181592;
        result[4] += 28656132;
        result[5] += 322467801;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        result[0] += 4329604;
        result[1] += 340306884;
        result[2] += 865920;
        result[3] += 1731841;
        result[4] += 74469191;
        result[5] += 7793287;
      } else {
        result[0] += 314127392;
        result[1] += 14346446;
        result[2] += 20623016;
        result[3] += 27796239;
        result[4] += 34371693;
        result[5] += 18231941;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 8155001;
        result[2] += 27183337;
        result[3] += 157663356;
        result[4] += 16310002;
        result[5] += 220185032;
      } else {
        result[0] += 79536431;
        result[1] += 15907286;
        result[2] += 164375291;
        result[3] += 5302428;
        result[4] += 53024287;
        result[5] += 111351003;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 206622750;
        result[3] += 167155483;
        result[4] += 6964811;
        result[5] += 48753682;
      } else {
        result[0] += 480421;
        result[1] += 0;
        result[2] += 390102174;
        result[3] += 33149076;
        result[4] += 0;
        result[5] += 5765056;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 111400714;
        result[1] += 9395240;
        result[2] += 0;
        result[3] += 0;
        result[4] += 292594646;
        result[5] += 16106127;
      } else {
        result[0] += 335806;
        result[1] += 8059360;
        result[2] += 12424846;
        result[3] += 68168753;
        result[4] += 22834853;
        result[5] += 317673108;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 384975727;
        result[2] += 0;
        result[3] += 12221451;
        result[4] += 32299550;
        result[5] += 0;
      } else {
        result[0] += 284783417;
        result[1] += 12639843;
        result[2] += 28375159;
        result[3] += 38177487;
        result[4] += 39209311;
        result[5] += 26311511;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 6135667;
        result[2] += 42949672;
        result[3] += 177934359;
        result[4] += 36814005;
        result[5] += 165663024;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 232509507;
        result[3] += 125942650;
        result[4] += 9687896;
        result[5] += 61356675;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 180840728;
        result[3] += 90420364;
        result[4] += 0;
        result[5] += 158235637;
      } else {
        result[0] += 4051855;
        result[1] += 0;
        result[2] += 392017062;
        result[3] += 30895401;
        result[4] += 1519445;
        result[5] += 1012963;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 9544371;
        result[2] += 0;
        result[3] += 0;
        result[4] += 415180171;
        result[5] += 4772185;
      } else {
        result[0] += 18480337;
        result[1] += 1711142;
        result[2] += 1711142;
        result[3] += 54072098;
        result[4] += 21902622;
        result[5] += 331619387;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 2882528;
        result[1] += 358154151;
        result[2] += 4323792;
        result[3] += 720632;
        result[4] += 61974360;
        result[5] += 1441264;
      } else {
        result[0] += 294713874;
        result[1] += 18649200;
        result[2] += 13280490;
        result[3] += 38146091;
        result[4] += 35320454;
        result[5] += 29386618;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 83715464;
        result[3] += 236587181;
        result[4] += 0;
        result[5] += 109194083;
      } else {
        result[0] += 14114915;
        result[1] += 0;
        result[2] += 282298319;
        result[3] += 84689495;
        result[4] += 2016416;
        result[5] += 46377581;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 32111905;
        result[1] += 0;
        result[2] += 309077085;
        result[3] += 68237798;
        result[4] += 0;
        result[5] += 20069940;
      } else {
        result[0] += 1342177;
        result[1] += 0;
        result[2] += 410035158;
        result[3] += 14092861;
        result[4] += 0;
        result[5] += 4026531;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 10814665;
        result[2] += 7724761;
        result[3] += 12359618;
        result[4] += 363063782;
        result[5] += 35533902;
      } else {
        result[0] += 17551549;
        result[1] += 5850516;
        result[2] += 4818072;
        result[3] += 67108863;
        result[4] += 23057917;
        result[5] += 311109810;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 400986239;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28510489;
        result[5] += 0;
      } else {
        result[0] += 263262945;
        result[1] += 14506810;
        result[2] += 26159822;
        result[3] += 41142267;
        result[4] += 46374231;
        result[5] += 38050651;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11608019;
        result[3] += 34824059;
        result[4] += 23216039;
        result[5] += 359848611;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 169538182;
        result[3] += 158235637;
        result[4] += 0;
        result[5] += 101722909;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 7669584;
        result[2] += 276105040;
        result[3] += 122713351;
        result[4] += 2556528;
        result[5] += 20452225;
      } else {
        result[0] += 5478274;
        result[1] += 547827;
        result[2] += 396627081;
        result[3] += 24104408;
        result[4] += 0;
        result[5] += 2739137;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 67492343;
        result[1] += 30678337;
        result[2] += 0;
        result[3] += 0;
        result[4] += 299113793;
        result[5] += 32212254;
      } else {
        result[0] += 366777;
        result[1] += 2934221;
        result[2] += 3667777;
        result[3] += 59417993;
        result[4] += 24574108;
        result[5] += 338535850;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 360223063;
        result[2] += 0;
        result[3] += 0;
        result[4] += 68544469;
        result[5] += 729196;
      } else {
        result[0] += 305667802;
        result[1] += 9203501;
        result[2] += 5856773;
        result[3] += 25937140;
        result[4] += 43507460;
        result[5] += 39324051;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 69026260;
        result[3] += 263322399;
        result[4] += 0;
        result[5] += 97148069;
      } else {
        result[0] += 2006994;
        result[1] += 0;
        result[2] += 293021133;
        result[3] += 80279762;
        result[4] += 10034970;
        result[5] += 44153869;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 156180628;
        result[3] += 0;
        result[4] += 0;
        result[5] += 273316100;
      } else {
        result[0] += 13262369;
        result[1] += 510091;
        result[2] += 388689439;
        result[3] += 23464191;
        result[4] += 510091;
        result[5] += 3060546;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 109326440;
        result[1] += 8924607;
        result[2] += 0;
        result[3] += 8924607;
        result[4] += 261044765;
        result[5] += 41276309;
      } else {
        result[0] += 0;
        result[1] += 2791529;
        result[2] += 797579;
        result[3] += 33099562;
        result[4] += 44265679;
        result[5] += 348542378;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 927638;
        result[1] += 419292703;
        result[2] += 0;
        result[3] += 3710554;
        result[4] += 5565832;
        result[5] += 0;
      } else {
        result[0] += 255430899;
        result[1] += 19396626;
        result[2] += 18137105;
        result[3] += 50632752;
        result[4] += 39297061;
        result[5] += 46602284;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20211610;
        result[3] += 237486426;
        result[4] += 0;
        result[5] += 171798691;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 207343248;
        result[3] += 162912552;
        result[4] += 0;
        result[5] += 59240928;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 11012736;
        result[1] += 0;
        result[2] += 216583820;
        result[3] += 161520137;
        result[4] += 0;
        result[5] += 40380034;
      } else {
        result[0] += 8456412;
        result[1] += 0;
        result[2] += 390775262;
        result[3] += 23588939;
        result[4] += 0;
        result[5] += 6676114;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7128576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 420586008;
        result[5] += 1782144;
      } else {
        result[0] += 2713426;
        result[1] += 1162897;
        result[2] += 1938162;
        result[3] += 50779847;
        result[4] += 24420842;
        result[5] += 348481552;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 2869688;
        result[1] += 408452346;
        result[2] += 956562;
        result[3] += 4782814;
        result[4] += 12435317;
        result[5] += 0;
      } else {
        result[0] += 238632370;
        result[1] += 16199586;
        result[2] += 23676318;
        result[3] += 57321613;
        result[4] += 50467942;
        result[5] += 43198897;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 20951059;
        result[1] += 10475529;
        result[2] += 104755299;
        result[3] += 146657419;
        result[4] += 5237764;
        result[5] += 141419654;
      } else {
        result[0] += 22977191;
        result[1] += 8837381;
        result[2] += 309308344;
        result[3] += 79536431;
        result[4] += 0;
        result[5] += 8837381;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 71582788;
        result[1] += 0;
        result[2] += 214748364;
        result[3] += 71582788;
        result[4] += 0;
        result[5] += 71582788;
      } else {
        result[0] += 1378801;
        result[1] += 0;
        result[2] += 412951109;
        result[3] += 15166818;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 49743971;
        result[1] += 31544957;
        result[2] += 0;
        result[3] += 0;
        result[4] += 315449575;
        result[5] += 32758225;
      } else {
        result[0] += 2939241;
        result[1] += 1102215;
        result[2] += 6245889;
        result[3] += 61724080;
        result[4] += 28290203;
        result[5] += 329195098;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 385423624;
        result[2] += 0;
        result[3] += 8641785;
        result[4] += 31110427;
        result[5] += 4320892;
      } else {
        result[0] += 298892555;
        result[1] += 11873106;
        result[2] += 16260993;
        result[3] += 30457099;
        result[4] += 41555873;
        result[5] += 30457099;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 14316557;
        result[2] += 14316557;
        result[3] += 133621204;
        result[4] += 19088743;
        result[5] += 248153665;
      } else {
        result[0] += 4521018;
        result[1] += 4521018;
        result[2] += 207966837;
        result[3] += 162756655;
        result[4] += 0;
        result[5] += 49731200;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 31360078;
        result[1] += 4090445;
        result[2] += 274059817;
        result[3] += 87262827;
        result[4] += 4090445;
        result[5] += 28633115;
      } else {
        result[0] += 668998;
        result[1] += 0;
        result[2] += 405412800;
        result[3] += 23414930;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1367823;
        result[1] += 27356479;
        result[2] += 6839119;
        result[3] += 15046063;
        result[4] += 350162938;
        result[5] += 28724303;
      } else {
        result[0] += 16200919;
        result[1] += 689400;
        result[2] += 6204607;
        result[3] += 70663587;
        result[4] += 28265434;
        result[5] += 307472779;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
        result[0] += 1827645;
        result[1] += 402995867;
        result[2] += 0;
        result[3] += 913822;
        result[4] += 21931747;
        result[5] += 1827645;
      } else {
        result[0] += 274448165;
        result[1] += 15626941;
        result[2] += 25637951;
        result[3] += 35893132;
        result[4] += 34672277;
        result[5] += 43218261;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 62245902;
        result[3] += 174288527;
        result[4] += 12449180;
        result[5] += 180513118;
      } else {
        result[0] += 0;
        result[1] += 21838816;
        result[2] += 283904617;
        result[3] += 83715464;
        result[4] += 0;
        result[5] += 40037830;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 143165576;
        result[3] += 143165576;
        result[4] += 0;
        result[5] += 143165576;
      } else {
        result[0] += 3097332;
        result[1] += 1548666;
        result[2] += 394909853;
        result[3] += 25294879;
        result[4] += 1032444;
        result[5] += 3613554;
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
