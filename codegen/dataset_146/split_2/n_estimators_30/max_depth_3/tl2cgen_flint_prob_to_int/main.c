
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 11228672;
        result[2] += 561433;
        result[3] += 0;
        result[4] += 129691169;
        result[5] += 1684300;
      } else {
        result[0] += 5609936;
        result[1] += 2692769;
        result[2] += 1907378;
        result[3] += 17503001;
        result[4] += 8863699;
        result[5] += 106588791;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 117088058;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26077518;
        result[5] += 0;
      } else {
        result[0] += 104569810;
        result[1] += 2091396;
        result[2] += 4087728;
        result[3] += 11312552;
        result[4] += 9791536;
        result[5] += 11312552;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 2236962;
        result[2] += 4473924;
        result[3] += 4473924;
        result[4] += 33554431;
        result[5] += 98426333;
      } else {
        result[0] += 1131743;
        result[1] += 3395231;
        result[2] += 45269747;
        result[3] += 64509390;
        result[4] += 1131743;
        result[5] += 27727720;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 11453246;
        result[1] += 0;
        result[2] += 71582788;
        result[3] += 28633115;
        result[4] += 5726623;
        result[5] += 25769803;
      } else {
        result[0] += 2623882;
        result[1] += 0;
        result[2] += 130538143;
        result[3] += 8527617;
        result[4] += 0;
        result[5] += 1475933;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 540247;
        result[1] += 1620742;
        result[2] += 0;
        result[3] += 2160989;
        result[4] += 126417905;
        result[5] += 12425691;
      } else {
        result[0] += 0;
        result[1] += 108608368;
        result[2] += 0;
        result[3] += 7405116;
        result[4] += 17278604;
        result[5] += 9873488;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
        result[0] += 120926263;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2779914;
        result[4] += 16679484;
        result[5] += 2779914;
      } else {
        result[0] += 1503614;
        result[1] += 644406;
        result[2] += 2362822;
        result[3] += 26205851;
        result[4] += 6014457;
        result[5] += 106434423;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 100879973;
        result[1] += 5566465;
        result[2] += 4101605;
        result[3] += 6445380;
        result[4] += 18554883;
        result[5] += 7617268;
      } else {
        result[0] += 715827;
        result[1] += 140302264;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2147483;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 13440033;
        result[1] += 6427842;
        result[2] += 59019278;
        result[3] += 41488799;
        result[4] += 4090445;
        result[5] += 18699177;
      } else {
        result[0] += 748773;
        result[1] += 0;
        result[2] += 131484703;
        result[3] += 9734061;
        result[4] += 0;
        result[5] += 1198038;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 66076419;
        result[1] += 6927366;
        result[2] += 355249;
        result[3] += 1776247;
        result[4] += 58083304;
        result[5] += 9946987;
      } else {
        result[0] += 9318469;
        result[1] += 2387376;
        result[2] += 4928777;
        result[3] += 27801384;
        result[4] += 14555295;
        result[5] += 84174273;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
      } else {
        result[0] += 345810;
        result[1] += 141090713;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1729052;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 138719440;
        result[1] += 0;
        result[2] += 2000761;
        result[3] += 444613;
        result[4] += 1778454;
        result[5] += 222306;
      } else {
        result[0] += 31236125;
        result[1] += 0;
        result[2] += 78090314;
        result[3] += 28633115;
        result[4] += 0;
        result[5] += 5206020;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 98250885;
        result[1] += 0;
        result[2] += 28071681;
        result[3] += 16843009;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1151080;
        result[1] += 0;
        result[2] += 126474916;
        result[3] += 13956845;
        result[4] += 0;
        result[5] += 1582735;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 672138;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 137788465;
        result[5] += 4704971;
      } else {
        result[0] += 4786691;
        result[1] += 326365;
        result[2] += 435153;
        result[3] += 18385245;
        result[4] += 9029439;
        result[5] += 110202681;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 139486803;
        result[2] += 306564;
        result[3] += 613128;
        result[4] += 2759079;
        result[5] += 0;
      } else {
        result[0] += 91825815;
        result[1] += 8183351;
        result[2] += 4048605;
        result[3] += 10250724;
        result[4] += 18864778;
        result[5] += 9992302;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13134456;
        result[3] += 102448761;
        result[4] += 0;
        result[5] += 27582358;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 73688164;
        result[3] += 44212898;
        result[4] += 0;
        result[5] += 25264513;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 7234430;
        result[1] += 0;
        result[2] += 109277979;
        result[3] += 19799494;
        result[4] += 380759;
        result[5] += 6472911;
      } else {
        result[0] += 232789;
        result[1] += 0;
        result[2] += 138044206;
        result[3] += 4423001;
        result[4] += 0;
        result[5] += 465579;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 6401712;
        result[2] += 0;
        result[3] += 0;
        result[4] += 125124385;
        result[5] += 11639477;
      } else {
        result[0] += 2517987;
        result[1] += 599520;
        result[2] += 1558754;
        result[3] += 16426871;
        result[4] += 10311758;
        result[5] += 111750684;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 252052;
        result[1] += 113675484;
        result[2] += 0;
        result[3] += 252052;
        result[4] += 27725727;
        result[5] += 1260260;
      } else {
        result[0] += 92273100;
        result[1] += 2357638;
        result[2] += 7072916;
        result[3] += 15527896;
        result[4] += 10568725;
        result[5] += 15365300;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2533904;
        result[1] += 0;
        result[2] += 63981076;
        result[3] += 63981076;
        result[4] += 0;
        result[5] += 12669520;
      } else {
        result[0] += 8227906;
        result[1] += 0;
        result[2] += 126709763;
        result[3] += 8227906;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 143165576;
      } else {
        result[0] += 964727;
        result[1] += 0;
        result[2] += 133325354;
        result[3] += 7138984;
        result[4] += 0;
        result[5] += 1736509;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 4843948;
        result[2] += 0;
        result[3] += 538216;
        result[4] += 125942650;
        result[5] += 11840761;
      } else {
        result[0] += 5051552;
        result[1] += 229616;
        result[2] += 0;
        result[3] += 22272752;
        result[4] += 7692136;
        result[5] += 107919520;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 1066410;
        result[1] += 117038525;
        result[2] += 533205;
        result[3] += 0;
        result[4] += 24260833;
        result[5] += 266602;
      } else {
        result[0] += 95009092;
        result[1] += 3737777;
        result[2] += 9996382;
        result[3] += 13038759;
        result[4] += 10952557;
        result[5] += 10431007;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 9236488;
        result[2] += 10775903;
        result[3] += 32327710;
        result[4] += 6157659;
        result[5] += 84667814;
      } else {
        result[0] += 18747873;
        result[1] += 0;
        result[2] += 81808900;
        result[3] += 30678337;
        result[4] += 3408704;
        result[5] += 8521760;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 9147960;
        result[1] += 457398;
        result[2] += 102457153;
        result[3] += 26986482;
        result[4] += 0;
        result[5] += 4116582;
      } else {
        result[0] += 448092;
        result[1] += 0;
        result[2] += 136444187;
        result[3] += 5601157;
        result[4] += 0;
        result[5] += 672138;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 579617;
        result[1] += 1738853;
        result[2] += 0;
        result[3] += 0;
        result[4] += 137369399;
        result[5] += 3477706;
      } else {
        result[0] += 0;
        result[1] += 125269879;
        result[2] += 0;
        result[3] += 0;
        result[4] += 17895697;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6329817;
        result[4] += 6329817;
        result[5] += 130505941;
      } else {
        result[0] += 16194138;
        result[1] += 1173488;
        result[2] += 938790;
        result[3] += 52572277;
        result[4] += 8214418;
        result[5] += 64072462;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 543322;
        result[1] += 111924511;
        result[2] += 1086645;
        result[3] += 814984;
        result[4] += 26079497;
        result[5] += 2716614;
      } else {
        result[0] += 111250404;
        result[1] += 4753323;
        result[2] += 4300626;
        result[3] += 7582682;
        result[4] += 10751565;
        result[5] += 4526974;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1080494;
        result[1] += 5942722;
        result[2] += 37817322;
        result[3] += 56185735;
        result[4] += 3241484;
        result[5] += 38897817;
      } else {
        result[0] += 7189813;
        result[1] += 0;
        result[2] += 124118878;
        result[3] += 9460280;
        result[4] += 504548;
        result[5] += 1892056;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
        result[0] += 1614649;
        result[1] += 538216;
        result[2] += 0;
        result[3] += 0;
        result[4] += 129171948;
        result[5] += 11840761;
      } else {
        result[0] += 0;
        result[1] += 127258290;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15907286;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 3287727;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8817086;
        result[4] += 7322665;
        result[5] += 123738097;
      } else {
        result[0] += 18553372;
        result[1] += 1938412;
        result[2] += 2492244;
        result[3] += 57044697;
        result[4] += 7199816;
        result[5] += 55937033;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0;
        result[1] += 68558163;
        result[2] += 4032833;
        result[3] += 6049249;
        result[4] += 60492497;
        result[5] += 4032833;
      } else {
        result[0] += 0;
        result[1] += 142823075;
        result[2] += 0;
        result[3] += 0;
        result[4] += 342501;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 69031322;
        result[1] += 5669923;
        result[2] += 20695221;
        result[3] += 19986481;
        result[4] += 16868023;
        result[5] += 10914603;
      } else {
        result[0] += 51292676;
        result[1] += 363133;
        result[2] += 80071045;
        result[3] += 8170514;
        result[4] += 998618;
        result[5] += 2269587;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 16868451;
        result[1] += 8217963;
        result[2] += 0;
        result[3] += 0;
        result[4] += 96885465;
        result[5] += 21193695;
      } else {
        result[0] += 0;
        result[1] += 1571808;
        result[2] += 1047872;
        result[3] += 23184178;
        result[4] += 6549202;
        result[5] += 110812513;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 82280792;
        result[1] += 6906781;
        result[2] += 8107961;
        result[3] += 14639374;
        result[4] += 19594239;
        result[5] += 11636425;
      } else {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 3253763;
        result[2] += 39045157;
        result[3] += 39045157;
        result[4] += 6507526;
        result[5] += 55313972;
      } else {
        result[0] += 2386092;
        result[1] += 0;
        result[2] += 109760275;
        result[3] += 28633115;
        result[4] += 0;
        result[5] += 2386092;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 7279605;
        result[1] += 0;
        result[2] += 87355267;
        result[3] += 41251098;
        result[4] += 0;
        result[5] += 7279605;
      } else {
        result[0] += 519971;
        result[1] += 0;
        result[2] += 133286111;
        result[3] += 8146225;
        result[4] += 0;
        result[5] += 1213267;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1738853;
        result[1] += 8694265;
        result[2] += 0;
        result[3] += 579617;
        result[4] += 127515898;
        result[5] += 4636941;
      } else {
        result[0] += 4224953;
        result[1] += 1810694;
        result[2] += 603564;
        result[3] += 18469083;
        result[4] += 11347018;
        result[5] += 106710261;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1483581;
        result[1] += 114235744;
        result[2] += 0;
        result[3] += 3708952;
        result[4] += 21511926;
        result[5] += 2225371;
      } else {
        result[0] += 105658639;
        result[1] += 5264131;
        result[2] += 1692042;
        result[3] += 8460211;
        result[4] += 8930223;
        result[5] += 13160328;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11779446;
        result[3] += 98766125;
        result[4] += 0;
        result[5] += 32620004;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 78465748;
        result[3] += 38544578;
        result[4] += 0;
        result[5] += 26155249;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 8122869;
        result[1] += 0;
        result[2] += 111351003;
        result[3] += 21322532;
        result[4] += 0;
        result[5] += 2369170;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 137259405;
        result[3] += 4488689;
        result[4] += 0;
        result[5] += 1417480;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 5436667;
        result[2] += 2416296;
        result[3] += 0;
        result[4] += 133500389;
        result[5] += 1812222;
      } else {
        result[0] += 4440082;
        result[1] += 2490777;
        result[2] += 1299536;
        result[3] += 22525294;
        result[4] += 7039154;
        result[5] += 105370730;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 136058065;
        result[2] += 1353811;
        result[3] += 1692264;
        result[4] += 4061434;
        result[5] += 0;
      } else {
        result[0] += 87023810;
        result[1] += 4726012;
        result[2] += 6926052;
        result[3] += 11733547;
        result[4] += 16785491;
        result[5] += 15970661;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 3253763;
        result[1] += 0;
        result[2] += 47721858;
        result[3] += 79174902;
        result[4] += 0;
        result[5] += 13015052;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 117993607;
        result[3] += 18878977;
        result[4] += 0;
        result[5] += 6292992;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 1564651;
        result[1] += 0;
        result[2] += 106396275;
        result[3] += 29728371;
        result[4] += 0;
        result[5] += 5476278;
      } else {
        result[0] += 1471599;
        result[1] += 0;
        result[2] += 138330322;
        result[3] += 2943198;
        result[4] += 0;
        result[5] += 420456;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 12341860;
        result[2] += 0;
        result[3] += 987348;
        result[4] += 111570414;
        result[5] += 18265952;
      } else {
        result[0] += 6168923;
        result[1] += 465579;
        result[2] += 1862316;
        result[3] += 18855953;
        result[4] += 6867291;
        result[5] += 108945511;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 95887229;
        result[1] += 7717103;
        result[2] += 4967331;
        result[3] += 9757257;
        result[4] += 15966421;
        result[5] += 8870233;
      } else {
        result[0] += 1104104;
        result[1] += 142061471;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7535030;
        result[3] += 3767515;
        result[4] += 7535030;
        result[5] += 124328000;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 55027811;
        result[3] += 67152583;
        result[4] += 932674;
        result[5] += 20052507;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 30510696;
        result[1] += 14081859;
        result[2] += 28163719;
        result[3] += 4693953;
        result[4] += 35204649;
        result[5] += 30510696;
      } else {
        result[0] += 638419;
        result[1] += 0;
        result[2] += 133429678;
        result[3] += 7980243;
        result[4] += 0;
        result[5] += 1117234;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 33256592;
        result[1] += 1622272;
        result[2] += 1216704;
        result[3] += 0;
        result[4] += 101797619;
        result[5] += 5272386;
      } else {
        result[0] += 761519;
        result[1] += 888438;
        result[2] += 0;
        result[3] += 10407426;
        result[4] += 15103460;
        result[5] += 116004731;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 129834368;
        result[2] += 0;
        result[3] += 1449044;
        result[4] += 11882163;
        result[5] += 0;
      } else {
        result[0] += 83125813;
        result[1] += 4328634;
        result[2] += 11062065;
        result[3] += 22605091;
        result[4] += 7214390;
        result[5] += 14829580;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6817408;
        result[3] += 88626309;
        result[4] += 3408704;
        result[5] += 44313154;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 76951497;
        result[3] += 10737418;
        result[4] += 5368709;
        result[5] += 50107951;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 935722;
        result[1] += 2807168;
        result[2] += 105736667;
        result[3] += 28539543;
        result[4] += 0;
        result[5] += 5146474;
      } else {
        result[0] += 449499;
        result[1] += 0;
        result[2] += 137546833;
        result[3] += 4719744;
        result[4] += 0;
        result[5] += 449499;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1533916;
        result[1] += 511305;
        result[2] += 0;
        result[3] += 511305;
        result[4] += 130894241;
        result[5] += 9714806;
      } else {
        result[0] += 0;
        result[1] += 108458770;
        result[2] += 0;
        result[3] += 8676701;
        result[4] += 17353403;
        result[5] += 8676701;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 365684;
        result[3] += 6582325;
        result[4] += 6582325;
        result[5] += 129635241;
      } else {
        result[0] += 17112383;
        result[1] += 241019;
        result[2] += 6748545;
        result[3] += 44588605;
        result[4] += 14702188;
        result[5] += 59772833;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 853870;
        result[1] += 122672690;
        result[2] += 0;
        result[3] += 284623;
        result[4] += 18785145;
        result[5] += 569246;
      } else {
        result[0] += 110910457;
        result[1] += 6322431;
        result[2] += 2143197;
        result[3] += 7072550;
        result[4] += 10930305;
        result[5] += 5786632;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 4228519;
        result[1] += 8457038;
        result[2] += 35640375;
        result[3] += 30807782;
        result[4] += 6040741;
        result[5] += 57991119;
      } else {
        result[0] += 3781732;
        result[1] += 0;
        result[2] += 121555678;
        result[3] += 14046433;
        result[4] += 0;
        result[5] += 3781732;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 563644;
        result[1] += 1690932;
        result[2] += 0;
        result[3] += 0;
        result[4] += 131892696;
        result[5] += 9018304;
      } else {
        result[0] += 4375750;
        result[1] += 673192;
        result[2] += 0;
        result[3] += 20981162;
        result[4] += 10883276;
        result[5] += 106252195;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 140025980;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3139595;
        result[5] += 0;
      } else {
        result[0] += 89244043;
        result[1] += 5314006;
        result[2] += 9143216;
        result[3] += 13519456;
        result[4] += 16332754;
        result[5] += 9612099;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 7535030;
        result[2] += 7535030;
        result[3] += 94187879;
        result[4] += 0;
        result[5] += 33907636;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 93608261;
        result[3] += 27531841;
        result[4] += 0;
        result[5] += 22025473;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 8227906;
        result[2] += 57595346;
        result[3] += 13164650;
        result[4] += 11519069;
        result[5] += 52658602;
      } else {
        result[0] += 835271;
        result[1] += 0;
        result[2] += 132307043;
        result[3] += 9187989;
        result[4] += 0;
        result[5] += 835271;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 534199;
        result[1] += 3739399;
        result[2] += 0;
        result[3] += 2670999;
        result[4] += 129810578;
        result[5] += 6410398;
      } else {
        result[0] += 5764267;
        result[1] += 1058742;
        result[2] += 0;
        result[3] += 17880992;
        result[4] += 11175620;
        result[5] += 107285953;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 130744818;
        result[2] += 0;
        result[3] += 653724;
        result[4] += 11113309;
        result[5] += 653724;
      } else {
        result[0] += 97700832;
        result[1] += 5276372;
        result[2] += 7474861;
        result[3] += 10728624;
        result[4] += 13542689;
        result[5] += 8442196;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7809031;
        result[3] += 5206020;
        result[4] += 23427094;
        result[5] += 106723429;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18311876;
        result[3] += 80738726;
        result[4] += 4994148;
        result[5] += 39120826;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 77828266;
        result[3] += 56689724;
        result[4] += 2882528;
        result[5] += 5765056;
      } else {
        result[0] += 1751747;
        result[1] += 318499;
        result[2] += 129788592;
        result[3] += 8121740;
        result[4] += 1910997;
        result[5] += 1273998;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
        result[0] += 0;
        result[1] += 103397360;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3976821;
        result[5] += 35791394;
      } else {
        result[0] += 617093;
        result[1] += 2468372;
        result[2] += 0;
        result[3] += 0;
        result[4] += 133909181;
        result[5] += 6170930;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2383610;
        result[1] += 0;
        result[2] += 744878;
        result[3] += 8938537;
        result[4] += 8789561;
        result[5] += 122308988;
      } else {
        result[0] += 12742485;
        result[1] += 374778;
        result[2] += 7120800;
        result[3] += 63712429;
        result[4] += 5246905;
        result[5] += 53968175;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 93883410;
        result[1] += 7683778;
        result[2] += 3621091;
        result[3] += 8566971;
        result[4] += 19253606;
        result[5] += 10156718;
      } else {
        result[0] += 356133;
        result[1] += 139960377;
        result[2] += 356133;
        result[3] += 712266;
        result[4] += 1780666;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 27561287;
        result[1] += 8421504;
        result[2] += 24498922;
        result[3] += 47466661;
        result[4] += 9187095;
        result[5] += 26030104;
      } else {
        result[0] += 2421706;
        result[1] += 142453;
        result[2] += 121797580;
        result[3] += 15812317;
        result[4] += 0;
        result[5] += 2991519;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1908874;
        result[1] += 8017272;
        result[2] += 0;
        result[3] += 381774;
        result[4] += 122931508;
        result[5] += 9926146;
      } else {
        result[0] += 13871944;
        result[1] += 1600608;
        result[2] += 1600608;
        result[3] += 27299274;
        result[4] += 10048267;
        result[5] += 88744872;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 97240630;
        result[1] += 9537460;
        result[2] += 9848464;
        result[3] += 6323751;
        result[4] += 13787850;
        result[5] += 6427419;
      } else {
        result[0] += 1136234;
        result[1] += 138620637;
        result[2] += 0;
        result[3] += 1514979;
        result[4] += 1893724;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 1266952;
        result[2] += 39275512;
        result[3] += 58279792;
        result[4] += 5067808;
        result[5] += 39275512;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 94591541;
        result[3] += 47295770;
        result[4] += 0;
        result[5] += 1278264;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
        result[0] += 52060209;
        result[1] += 52060209;
        result[2] += 39045157;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 2199943;
        result[1] += 169226;
        result[2] += 133688895;
        result[3] += 6430605;
        result[4] += 0;
        result[5] += 676905;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 4280698;
        result[2] += 0;
        result[3] += 3329432;
        result[4] += 129847848;
        result[5] += 5707597;
      } else {
        result[0] += 11540082;
        result[1] += 342774;
        result[2] += 114258;
        result[3] += 13025439;
        result[4] += 12796923;
        result[5] += 105346098;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 139682229;
        result[2] += 696669;
        result[3] += 0;
        result[4] += 2786677;
        result[5] += 0;
      } else {
        result[0] += 83594968;
        result[1] += 4576068;
        result[2] += 10704732;
        result[3] += 18140843;
        result[4] += 12257326;
        result[5] += 13891636;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 1313445;
        result[1] += 3940336;
        result[2] += 15761347;
        result[3] += 61731945;
        result[4] += 17074793;
        result[5] += 43343706;
      } else {
        result[0] += 9544371;
        result[1] += 0;
        result[2] += 114532461;
        result[3] += 14316557;
        result[4] += 0;
        result[5] += 4772185;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 7469508;
        result[1] += 7469508;
        result[2] += 92123936;
        result[3] += 11204262;
        result[4] += 3734754;
        result[5] += 21163606;
      } else {
        result[0] += 334890;
        result[1] += 0;
        result[2] += 134123540;
        result[3] += 8539701;
        result[4] += 0;
        result[5] += 167445;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2160989;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 123716667;
        result[5] += 17287918;
      } else {
        result[0] += 61967189;
        result[1] += 12820797;
        result[2] += 0;
        result[3] += 0;
        result[4] += 66240789;
        result[5] += 2136799;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 694978;
        result[1] += 138995;
        result[2] += 138995;
        result[3] += 8617733;
        result[4] += 7505768;
        result[5] += 126069104;
      } else {
        result[0] += 1319498;
        result[1] += 0;
        result[2] += 659749;
        result[3] += 79169904;
        result[4] += 4618244;
        result[5] += 57398180;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1022611;
        result[1] += 115043766;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26587892;
        result[5] += 511305;
      } else {
        result[0] += 103397360;
        result[1] += 3314017;
        result[2] += 6817408;
        result[3] += 10699543;
        result[4] += 10415485;
        result[5] += 8521760;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 633476;
        result[1] += 10769092;
        result[2] += 38008560;
        result[3] += 48777652;
        result[4] += 4434332;
        result[5] += 40542464;
      } else {
        result[0] += 5129219;
        result[1] += 0;
        result[2] += 127174479;
        result[3] += 9956720;
        result[4] += 0;
        result[5] += 905156;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 16679484;
        result[1] += 11119656;
        result[2] += 0;
        result[3] += 0;
        result[4] += 109806607;
        result[5] += 5559828;
      } else {
        result[0] += 235276;
        result[1] += 1882209;
        result[2] += 3882057;
        result[3] += 22233602;
        result[4] += 8352305;
        result[5] += 106580125;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 141195408;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1970168;
        result[5] += 0;
      } else {
        result[0] += 87756799;
        result[1] += 2912109;
        result[2] += 9208560;
        result[3] += 12120670;
        result[4] += 17079125;
        result[5] += 14088311;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 10604857;
        result[2] += 7953643;
        result[3] += 50373073;
        result[4] += 13256071;
        result[5] += 60977930;
      } else {
        result[0] += 3976821;
        result[1] += 994205;
        result[2] += 85501663;
        result[3] += 34797188;
        result[4] += 3976821;
        result[5] += 13918875;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9544371;
        result[3] += 104988089;
        result[4] += 0;
        result[5] += 28633115;
      } else {
        result[0] += 172074;
        result[1] += 0;
        result[2] += 132324913;
        result[3] += 9291996;
        result[4] += 0;
        result[5] += 1376592;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1507006;
        result[2] += 502335;
        result[3] += 4018682;
        result[4] += 126086174;
        result[5] += 11051377;
      } else {
        result[0] += 4991509;
        result[1] += 113443;
        result[2] += 340330;
        result[3] += 22575237;
        result[4] += 8394811;
        result[5] += 106750243;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 647808;
        result[1] += 136039688;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6478080;
        result[5] += 0;
      } else {
        result[0] += 88729084;
        result[1] += 5435655;
        result[2] += 9912077;
        result[3] += 13349330;
        result[4] += 15507605;
        result[5] += 10231822;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 6817408;
        result[2] += 45165330;
        result[3] += 58800147;
        result[4] += 1704352;
        result[5] += 30678337;
      } else {
        result[0] += 30788296;
        result[1] += 3078829;
        result[2] += 98522547;
        result[3] += 3078829;
        result[4] += 1539414;
        result[5] += 6157659;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 80919673;
        result[3] += 62245902;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 135838204;
        result[3] += 6575846;
        result[4] += 0;
        result[5] += 751525;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 31442906;
        result[1] += 6689980;
        result[2] += 0;
        result[3] += 2341493;
        result[4] += 89980233;
        result[5] += 12710962;
      } else {
        result[0] += 752842;
        result[1] += 376421;
        result[2] += 501895;
        result[3] += 11167165;
        result[4] += 10790744;
        result[5] += 119576506;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 141461224;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1704352;
        result[5] += 0;
      } else {
        result[0] += 80934065;
        result[1] += 6289354;
        result[2] += 6868637;
        result[3] += 22923043;
        result[4] += 12495954;
        result[5] += 13654520;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22369621;
        result[3] += 92461101;
        result[4] += 0;
        result[5] += 28334853;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 111669149;
        result[3] += 20043180;
        result[4] += 0;
        result[5] += 11453246;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 6718962;
        result[1] += 0;
        result[2] += 115256041;
        result[3] += 20673729;
        result[4] += 0;
        result[5] += 516843;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 138770142;
        result[3] += 3976821;
        result[4] += 0;
        result[5] += 418612;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 6170930;
        result[2] += 617093;
        result[3] += 617093;
        result[4] += 135143367;
        result[5] += 617093;
      } else {
        result[0] += 4534143;
        result[1] += 2040364;
        result[2] += 793475;
        result[3] += 20063584;
        result[4] += 8048104;
        result[5] += 107685904;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 81368027;
        result[1] += 7527107;
        result[2] += 10011052;
        result[3] += 13624063;
        result[4] += 18667225;
        result[5] += 11968100;
      } else {
        result[0] += 1640866;
        result[1] += 139473627;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1640866;
        result[5] += 410216;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
        result[0] += 0;
        result[1] += 137438953;
        result[2] += 5726623;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 9706140;
        result[1] += 0;
        result[2] += 42059943;
        result[3] += 39633408;
        result[4] += 2426535;
        result[5] += 49339548;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 69413612;
        result[3] += 26030104;
        result[4] += 0;
        result[5] += 47721858;
      } else {
        result[0] += 847133;
        result[1] += 0;
        result[2] += 132830546;
        result[3] += 8640762;
        result[4] += 0;
        result[5] += 847133;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 23980234;
        result[1] += 8947848;
        result[2] += 0;
        result[3] += 0;
        result[4] += 98426333;
        result[5] += 11811160;
      } else {
        result[0] += 1050114;
        result[1] += 466717;
        result[2] += 4550495;
        result[3] += 24152627;
        result[4] += 8517593;
        result[5] += 104428028;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 274263;
        result[1] += 122870073;
        result[2] += 0;
        result[3] += 0;
        result[4] += 19746976;
        result[5] += 274263;
      } else {
        result[0] += 108236940;
        result[1] += 2928149;
        result[2] += 4392223;
        result[3] += 9830214;
        result[4] += 9621061;
        result[5] += 8156986;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25090874;
        result[3] += 19187139;
        result[4] += 7379668;
        result[5] += 91507894;
      } else {
        result[0] += 0;
        result[1] += 1745921;
        result[2] += 32299550;
        result[3] += 79439435;
        result[4] += 3491843;
        result[5] += 26188824;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 63161283;
        result[2] += 21053761;
        result[3] += 16843009;
        result[4] += 8421504;
        result[5] += 33686018;
      } else {
        result[0] += 5370475;
        result[1] += 0;
        result[2] += 124086254;
        result[3] += 11023608;
        result[4] += 423984;
        result[5] += 2261252;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 9747443;
        result[2] += 0;
        result[3] += 0;
        result[4] += 131590487;
        result[5] += 1827645;
      } else {
        result[0] += 4496711;
        result[1] += 1579925;
        result[2] += 850729;
        result[3] += 22848156;
        result[4] += 7778095;
        result[5] += 105611957;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 82771106;
        result[1] += 7034795;
        result[2] += 10327678;
        result[3] += 13470885;
        result[4] += 15042488;
        result[5] += 14518620;
      } else {
        result[0] += 2841996;
        result[1] += 137126333;
        result[2] += 0;
        result[3] += 710499;
        result[4] += 710499;
        result[5] += 1776247;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 8676701;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82428665;
        result[5] += 52060209;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17895697;
        result[3] += 71582788;
        result[4] += 0;
        result[5] += 53687091;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 1626881;
        result[1] += 4880644;
        result[2] += 37418275;
        result[3] += 74836551;
        result[4] += 1626881;
        result[5] += 22776341;
      } else {
        result[0] += 2753184;
        result[1] += 764773;
        result[2] += 128634882;
        result[3] += 10553872;
        result[4] += 0;
        result[5] += 458864;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 426088;
        result[1] += 10652200;
        result[2] += 852176;
        result[3] += 4686968;
        result[4] += 113339414;
        result[5] += 13208728;
      } else {
        result[0] += 5755400;
        result[1] += 0;
        result[2] += 2997604;
        result[3] += 22062366;
        result[4] += 7913675;
        result[5] += 104436530;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 312588;
        result[1] += 127223558;
        result[2] += 0;
        result[3] += 1250354;
        result[4] += 13753898;
        result[5] += 625177;
      } else {
        result[0] += 91256616;
        result[1] += 6821369;
        result[2] += 5739933;
        result[3] += 10481616;
        result[4] += 13476364;
        result[5] += 15389675;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50758704;
        result[3] += 72884293;
        result[4] += 0;
        result[5] += 19522578;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 111669149;
        result[3] += 20043180;
        result[4] += 0;
        result[5] += 11453246;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 752710;
        result[1] += 0;
        result[2] += 132326542;
        result[3] += 9634697;
        result[4] += 0;
        result[5] += 451626;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 33339928;
        result[1] += 2941758;
        result[2] += 0;
        result[3] += 2288034;
        result[4] += 91194511;
        result[5] += 13401343;
      } else {
        result[0] += 326613;
        result[1] += 544355;
        result[2] += 762098;
        result[3] += 27000047;
        result[4] += 9362919;
        result[5] += 105169541;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 275848;
        result[1] += 132683318;
        result[2] += 0;
        result[3] += 275848;
        result[4] += 9930560;
        result[5] += 0;
      } else {
        result[0] += 104782047;
        result[1] += 7078520;
        result[2] += 5184268;
        result[3] += 6580033;
        result[4] += 13857949;
        result[5] += 5682756;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36073216;
        result[3] += 76655584;
        result[4] += 0;
        result[5] += 30436776;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 104120419;
        result[3] += 27476221;
        result[4] += 1446116;
        result[5] += 10122818;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 41564199;
        result[1] += 0;
        result[2] += 78510154;
        result[3] += 18472977;
        result[4] += 0;
        result[5] += 4618244;
      } else {
        result[0] += 498834;
        result[1] += 0;
        result[2] += 131692376;
        result[3] += 9644138;
        result[4] += 0;
        result[5] += 1330226;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1018972;
        result[1] += 4075888;
        result[2] += 2037944;
        result[3] += 509486;
        result[4] += 132466369;
        result[5] += 3056916;
      } else {
        result[0] += 11237853;
        result[1] += 351182;
        result[2] += 0;
        result[3] += 12525524;
        result[4] += 12174341;
        result[5] += 106876673;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 140060780;
        result[2] += 0;
        result[3] += 344977;
        result[4] += 2759818;
        result[5] += 0;
      } else {
        result[0] += 81991204;
        result[1] += 5423542;
        result[2] += 11644665;
        result[3] += 21375138;
        result[4] += 10129263;
        result[5] += 12601761;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 10226112;
        result[2] += 6817408;
        result[3] += 10226112;
        result[4] += 6817408;
        result[5] += 109078534;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40002146;
        result[3] += 63161283;
        result[4] += 0;
        result[5] += 40002146;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 15907286;
        result[1] += 14581679;
        result[2] += 72908395;
        result[3] += 35791394;
        result[4] += 0;
        result[5] += 3976821;
      } else {
        result[0] += 320280;
        result[1] += 0;
        result[2] += 132596305;
        result[3] += 7846882;
        result[4] += 0;
        result[5] += 2402106;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 990765;
        result[1] += 11889182;
        result[2] += 0;
        result[3] += 0;
        result[4] += 120377976;
        result[5] += 9907652;
      } else {
        result[0] += 4983611;
        result[1] += 1019375;
        result[2] += 566319;
        result[3] += 22652781;
        result[4] += 4304028;
        result[5] += 109639460;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 133303059;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9862517;
        result[5] += 0;
      } else {
        result[0] += 89803100;
        result[1] += 2596918;
        result[2] += 8712241;
        result[3] += 12649503;
        result[4] += 15581508;
        result[5] += 13822305;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 21474836;
        result[1] += 14316557;
        result[2] += 11930464;
        result[3] += 11930464;
        result[4] += 9544371;
        result[5] += 73968881;
      } else {
        result[0] += 6049249;
        result[1] += 0;
        result[2] += 56459663;
        result[3] += 56459663;
        result[4] += 0;
        result[5] += 24196998;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 4040963;
        result[1] += 0;
        result[2] += 105642340;
        result[3] += 30595869;
        result[4] += 0;
        result[5] += 2886402;
      } else {
        result[0] += 1168698;
        result[1] += 0;
        result[2] += 135958601;
        result[3] += 5843492;
        result[4] += 0;
        result[5] += 194783;
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
