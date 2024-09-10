
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 3193284;
        result[1] += 52689189;
        result[2] += 0;
        result[3] += 7983210;
        result[4] += 327311634;
        result[5] += 38319410;
      } else {
        result[0] += 13582375;
        result[1] += 1101273;
        result[2] += 6607641;
        result[3] += 64608055;
        result[4] += 26063476;
        result[5] += 317533906;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 411945180;
        result[2] += 0;
        result[3] += 0;
        result[4] += 17551549;
        result[5] += 0;
      } else {
        result[0] += 264217389;
        result[1] += 8263967;
        result[2] += 27546556;
        result[3] += 41090280;
        result[4] += 49813356;
        result[5] += 38565179;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 17530478;
        result[1] += 35060957;
        result[2] += 140243830;
        result[3] += 0;
        result[4] += 52591436;
        result[5] += 184070026;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 94394885;
        result[3] += 264305679;
        result[4] += 9439488;
        result[5] += 61356675;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 67815273;
        result[1] += 79117818;
        result[2] += 124328000;
        result[3] += 11302545;
        result[4] += 11302545;
        result[5] += 135630546;
      } else {
        result[0] += 1863326;
        result[1] += 0;
        result[2] += 396888517;
        result[3] += 28415727;
        result[4] += 0;
        result[5] += 2329157;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 104018739;
        result[1] += 8947848;
        result[2] += 0;
        result[3] += 2236962;
        result[4] += 268435455;
        result[5] += 45857723;
      } else {
        result[0] += 1265086;
        result[1] += 2213900;
        result[2] += 3162715;
        result[3] += 68947192;
        result[4] += 29729523;
        result[5] += 324178312;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 2435709;
        result[1] += 371851610;
        result[2] += 0;
        result[3] += 811903;
        result[4] += 54397506;
        result[5] += 0;
      } else {
        result[0] += 327378625;
        result[1] += 13515631;
        result[2] += 18621536;
        result[3] += 20723968;
        result[4] += 31836820;
        result[5] += 17420147;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 89140830;
        result[3] += 194489085;
        result[4] += 0;
        result[5] += 145866813;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 301435778;
        result[3] += 112299603;
        result[4] += 0;
        result[5] += 15761347;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2045222;
        result[1] += 0;
        result[2] += 353823496;
        result[3] += 71582788;
        result[4] += 0;
        result[5] += 2045222;
      } else {
        result[0] += 6540559;
        result[1] += 0;
        result[2] += 411328509;
        result[3] += 8720745;
        result[4] += 0;
        result[5] += 2906915;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 4825805;
        result[1] += 1608601;
        result[2] += 0;
        result[3] += 0;
        result[4] += 378021466;
        result[5] += 45040855;
      } else {
        result[0] += 5888894;
        result[1] += 4318522;
        result[2] += 3533336;
        result[3] += 51429681;
        result[4] += 19629649;
        result[5] += 344696643;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 414583648;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14913080;
        result[5] += 0;
      } else {
        result[0] += 259734240;
        result[1] += 14206066;
        result[2] += 9944246;
        result[3] += 51852140;
        result[4] += 52562444;
        result[5] += 41197591;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 45691141;
        result[3] += 246732163;
        result[4] += 0;
        result[5] += 137073424;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 248153665;
        result[3] += 57266230;
        result[4] += 38177487;
        result[5] += 85899345;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 18673770;
        result[1] += 0;
        result[2] += 333930961;
        result[3] += 63710512;
        result[4] += 0;
        result[5] += 13181485;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 412042580;
        result[3] += 17454148;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 417454765;
        result[5] += 12041964;
      } else {
        result[0] += 138635020;
        result[1] += 5436667;
        result[2] += 2718333;
        result[3] += 38056672;
        result[4] += 119606684;
        result[5] += 125043351;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 1810312;
        result[2] += 3168047;
        result[3] += 35753679;
        result[4] += 23986645;
        result[5] += 364778044;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3422284;
        result[3] += 227581932;
        result[4] += 11977996;
        result[5] += 186514515;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 295660006;
        result[1] += 23830141;
        result[2] += 13577638;
        result[3] += 27155277;
        result[4] += 49599944;
        result[5] += 19673721;
      } else {
        result[0] += 0;
        result[1] += 429496729;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 17388531;
        result[2] += 133891693;
        result[3] += 159974490;
        result[4] += 5216559;
        result[5] += 113025455;
      } else {
        result[0] += 15294878;
        result[1] += 826750;
        result[2] += 372037590;
        result[3] += 32243257;
        result[4] += 2066875;
        result[5] += 7027376;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4071059;
        result[3] += 0;
        result[4] += 403034845;
        result[5] += 22390824;
      } else {
        result[0] += 13763658;
        result[1] += 10587429;
        result[2] += 13057829;
        result[3] += 54701719;
        result[4] += 18351544;
        result[5] += 319034546;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 361237427;
        result[2] += 0;
        result[3] += 0;
        result[4] += 68259301;
        result[5] += 0;
      } else {
        result[0] += 308392733;
        result[1] += 7885841;
        result[2] += 17461506;
        result[3] += 31543366;
        result[4] += 31825003;
        result[5] += 32388277;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23729101;
        result[3] += 177968258;
        result[4] += 47458202;
        result[5] += 180341168;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 322122547;
        result[3] += 11930464;
        result[4] += 0;
        result[5] += 95443717;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 169057223;
        result[3] += 182764565;
        result[4] += 22845570;
        result[5] += 54829369;
      } else {
        result[0] += 4715033;
        result[1] += 1285918;
        result[2] += 384489587;
        result[3] += 33005237;
        result[4] += 857278;
        result[5] += 5143673;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 5033164;
        result[2] += 0;
        result[3] += 0;
        result[4] += 416074956;
        result[5] += 8388607;
      } else {
        result[0] += 22884381;
        result[1] += 5306523;
        result[2] += 663315;
        result[3] += 62351648;
        result[4] += 23216039;
        result[5] += 315074820;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 891072;
        result[1] += 391180631;
        result[2] += 0;
        result[3] += 1782144;
        result[4] += 35642882;
        result[5] += 0;
      } else {
        result[0] += 310175992;
        result[1] += 11294924;
        result[2] += 19404100;
        result[3] += 17666419;
        result[4] += 43731629;
        result[5] += 27223663;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 3329432;
        result[1] += 4994148;
        result[2] += 66588640;
        result[3] += 173130464;
        result[4] += 21641308;
        result[5] += 159812736;
      } else {
        result[0] += 126164664;
        result[1] += 2684354;
        result[2] += 222801428;
        result[3] += 67108863;
        result[4] += 2684354;
        result[5] += 8053063;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 6157659;
        result[1] += 0;
        result[2] += 326355937;
        result[3] += 81588984;
        result[4] += 0;
        result[5] += 15394148;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 414082491;
        result[3] += 15414238;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 110545571;
        result[1] += 19028336;
        result[2] += 0;
        result[3] += 5436667;
        result[4] += 258241704;
        result[5] += 36244449;
      } else {
        result[0] += 10097320;
        result[1] += 2524330;
        result[2] += 0;
        result[3] += 54453405;
        result[4] += 34258765;
        result[5] += 328162908;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 2624216;
        result[1] += 377012404;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49860109;
        result[5] += 0;
      } else {
        result[0] += 273514425;
        result[1] += 4363141;
        result[2] += 36268612;
        result[3] += 56448141;
        result[4] += 19906832;
        result[5] += 38995576;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 4382619;
        result[1] += 8765239;
        result[2] += 92035013;
        result[3] += 113948111;
        result[4] += 8765239;
        result[5] += 201600505;
      } else {
        result[0] += 7087404;
        result[1] += 0;
        result[2] += 304758405;
        result[3] += 106311071;
        result[4] += 0;
        result[5] += 11339847;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 245426702;
        result[2] += 61356675;
        result[3] += 122713351;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 412616945;
        result[3] += 14379075;
        result[4] += 0;
        result[5] += 2500708;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 22883022;
        result[2] += 0;
        result[3] += 3520464;
        result[4] += 394292079;
        result[5] += 8801162;
      } else {
        result[0] += 11833783;
        result[1] += 696104;
        result[2] += 6264944;
        result[3] += 61257232;
        result[4] += 33413035;
        result[5] += 316031629;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 276236707;
        result[1] += 23173336;
        result[2] += 16063335;
        result[3] += 26596670;
        result[4] += 58986675;
        result[5] += 28440004;
      } else {
        result[0] += 3181457;
        result[1] += 426315272;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 9817068;
        result[1] += 0;
        result[2] += 31905471;
        result[3] += 137438953;
        result[4] += 22088403;
        result[5] += 228246833;
      } else {
        result[0] += 33839136;
        result[1] += 49457199;
        result[2] += 231667932;
        result[3] += 93708377;
        result[4] += 2603010;
        result[5] += 18221073;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 228753692;
        result[3] += 177400823;
        result[4] += 0;
        result[5] += 23342213;
      } else {
        result[0] += 2440322;
        result[1] += 0;
        result[2] += 401677054;
        result[3] += 22450965;
        result[4] += 0;
        result[5] += 2928386;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 39193617;
        result[2] += 0;
        result[3] += 0;
        result[4] += 373972437;
        result[5] += 16330674;
      } else {
        result[0] += 16632833;
        result[1] += 4805040;
        result[2] += 1478474;
        result[3] += 62835149;
        result[4] += 20329019;
        result[5] += 323416211;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 2313267;
        result[1] += 336194926;
        result[2] += 0;
        result[3] += 0;
        result[4] += 90988535;
        result[5] += 0;
      } else {
        result[0] += 304016312;
        result[1] += 6175769;
        result[2] += 17685159;
        result[3] += 29194548;
        result[4] += 34528168;
        result[5] += 37896770;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 3520464;
        result[1] += 3520464;
        result[2] += 68649067;
        result[3] += 198906272;
        result[4] += 21122789;
        result[5] += 133777669;
      } else {
        result[0] += 71996561;
        result[1] += 32274320;
        result[2] += 233368165;
        result[3] += 32274320;
        result[4] += 2482640;
        result[5] += 57100721;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 21746669;
        result[1] += 0;
        result[2] += 228340033;
        result[3] += 152226688;
        result[4] += 0;
        result[5] += 27183337;
      } else {
        result[0] += 2100228;
        result[1] += 0;
        result[2] += 398518359;
        result[3] += 27302970;
        result[4] += 0;
        result[5] += 1575171;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 95907036;
        result[1] += 9382210;
        result[2] += 0;
        result[3] += 0;
        result[4] += 281466303;
        result[5] += 42741179;
      } else {
        result[0] += 793161;
        result[1] += 2379483;
        result[2] += 1189741;
        result[3] += 38071732;
        result[4] += 33312765;
        result[5] += 353749845;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 418530855;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10965873;
        result[5] += 0;
      } else {
        result[0] += 245699854;
        result[1] += 12428397;
        result[2] += 35373130;
        result[3] += 61663971;
        result[4] += 33461069;
        result[5] += 40870306;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 3089904;
        result[2] += 117416372;
        result[3] += 207023603;
        result[4] += 9269713;
        result[5] += 92697135;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 410822958;
        result[3] += 0;
        result[4] += 18673770;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 24542670;
        result[2] += 122713351;
        result[3] += 61356675;
        result[4] += 24542670;
        result[5] += 196341362;
      } else {
        result[0] += 2972295;
        result[1] += 1981530;
        result[2] += 391847650;
        result[3] += 28732191;
        result[4] += 495382;
        result[5] += 3467678;
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
