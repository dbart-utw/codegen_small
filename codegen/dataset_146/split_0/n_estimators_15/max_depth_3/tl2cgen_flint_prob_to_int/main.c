
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
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
        result[0] += 0;
        result[1] += 5990191;
        result[2] += 0;
        result[3] += 4792153;
        result[4] += 273152731;
        result[5] += 2396076;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 17353403;
        result[4] += 156180628;
        result[5] += 112797120;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 13705757;
        result[1] += 1191805;
        result[2] += 0;
        result[3] += 8640586;
        result[4] += 22346343;
        result[5] += 240446660;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2744388;
        result[3] += 159174506;
        result[4] += 914796;
        result[5] += 123497462;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        result[0] += 3247612;
        result[1] += 241405849;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41136422;
        result[5] += 541268;
      } else {
        result[0] += 211686779;
        result[1] += 12440728;
        result[2] += 4859659;
        result[3] += 17106002;
        result[4] += 29546731;
        result[5] += 10691251;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 2548942;
        result[1] += 0;
        result[2] += 125747806;
        result[3] += 98559091;
        result[4] += 849647;
        result[5] += 58625666;
      } else {
        result[0] += 7911381;
        result[1] += 0;
        result[2] += 252251355;
        result[3] += 19778453;
        result[4] += 2129987;
        result[5] += 4259974;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 2160989;
        result[2] += 0;
        result[3] += 4321979;
        result[4] += 264721254;
        result[5] += 15126928;
      } else {
        result[0] += 0;
        result[1] += 167026505;
        result[2] += 0;
        result[3] += 47721858;
        result[4] += 0;
        result[5] += 71582788;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 16135184;
        result[1] += 1367388;
        result[2] += 820433;
        result[3] += 14767795;
        result[4] += 16135184;
        result[5] += 237105166;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3869339;
        result[3] += 179279415;
        result[4] += 10318239;
        result[5] += 92864157;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 1198038;
        result[1] += 268959597;
        result[2] += 0;
        result[3] += 1797057;
        result[4] += 11980382;
        result[5] += 2396076;
      } else {
        result[0] += 200632805;
        result[1] += 14983506;
        result[2] += 3471788;
        result[3] += 15348957;
        result[4] += 39834199;
        result[5] += 12059895;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 125337410;
        result[3] += 94003057;
        result[4] += 2160989;
        result[5] += 64829695;
      } else {
        result[0] += 9150789;
        result[1] += 0;
        result[2] += 247366501;
        result[3] += 22434193;
        result[4] += 1180747;
        result[5] += 6198921;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 12773136;
        result[2] += 0;
        result[3] += 8515424;
        result[4] += 251205026;
        result[5] += 13837565;
      } else {
        result[0] += 18736064;
        result[1] += 2204242;
        result[2] += 220424;
        result[3] += 43644009;
        result[4] += 16531821;
        result[5] += 204994589;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 240881763;
        result[2] += 0;
        result[3] += 504993;
        result[4] += 44944396;
        result[5] += 0;
      } else {
        result[0] += 215568797;
        result[1] += 4307273;
        result[2] += 12716713;
        result[3] += 19895502;
        result[4] += 18869961;
        result[5] += 14972904;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 47721858;
        result[3] += 152709948;
        result[4] += 4772185;
        result[5] += 81127160;
      } else {
        result[0] += 2556528;
        result[1] += 0;
        result[2] += 194296139;
        result[3] += 66469731;
        result[4] += 0;
        result[5] += 23008753;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 27126109;
        result[1] += 30140121;
        result[2] += 96448388;
        result[3] += 39182157;
        result[4] += 9042036;
        result[5] += 84392339;
      } else {
        result[0] += 1892056;
        result[1] += 0;
        result[2] += 259842367;
        result[3] += 19235903;
        result[4] += 2838084;
        result[5] += 2522741;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 2416296;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3624444;
        result[4] += 254919296;
        result[5] += 25371114;
      } else {
        result[0] += 10279652;
        result[1] += 2355753;
        result[2] += 642478;
        result[3] += 41546928;
        result[4] += 17989391;
        result[5] += 213516948;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 261680126;
        result[2] += 0;
        result[3] += 2528310;
        result[4] += 20858560;
        result[5] += 1264155;
      } else {
        result[0] += 189195584;
        result[1] += 9976085;
        result[2] += 13476466;
        result[3] += 21002285;
        result[4] += 36929017;
        result[5] += 15751713;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 8421504;
        result[2] += 42107522;
        result[3] += 46318274;
        result[4] += 8421504;
        result[5] += 181062346;
      } else {
        result[0] += 12526987;
        result[1] += 8947848;
        result[2] += 78741067;
        result[3] += 148534285;
        result[4] += 0;
        result[5] += 37580963;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 15184227;
        result[1] += 0;
        result[2] += 214748364;
        result[3] += 49891034;
        result[4] += 0;
        result[5] += 6507526;
      } else {
        result[0] += 5547399;
        result[1] += 0;
        result[2] += 267555339;
        result[3] += 11948244;
        result[4] += 0;
        result[5] += 1280169;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 4195328;
        result[1] += 10488320;
        result[2] += 0;
        result[3] += 0;
        result[4] += 256963855;
        result[5] += 14683648;
      } else {
        result[0] += 12016792;
        result[1] += 2693418;
        result[2] += 621558;
        result[3] += 47652796;
        result[4] += 18025188;
        result[5] += 205321398;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 273013424;
        result[2] += 0;
        result[3] += 0;
        result[4] += 12712376;
        result[5] += 605351;
      } else {
        result[0] += 179340906;
        result[1] += 8702555;
        result[2] += 16210643;
        result[3] += 27131497;
        result[4] += 36345968;
        result[5] += 18599580;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 72651188;
        result[3] += 175217571;
        result[4] += 4273599;
        result[5] += 34188794;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 207486342;
        result[3] += 49796722;
        result[4] += 0;
        result[5] += 29048087;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 101408950;
        result[3] += 113339414;
        result[4] += 0;
        result[5] += 71582788;
      } else {
        result[0] += 8220033;
        result[1] += 0;
        result[2] += 259958546;
        result[3] += 16782567;
        result[4] += 0;
        result[5] += 1370005;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1250354;
        result[1] += 15004252;
        result[2] += 0;
        result[3] += 0;
        result[4] += 267575837;
        result[5] += 2500708;
      } else {
        result[0] += 10839034;
        result[1] += 3613011;
        result[2] += 2483945;
        result[3] += 47420774;
        result[4] += 14677858;
        result[5] += 207296528;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 171281958;
        result[1] += 13678239;
        result[2] += 17781711;
        result[3] += 22797066;
        result[4] += 37691149;
        result[5] += 23101027;
      } else {
        result[0] += 0;
        result[1] += 286331153;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39493952;
        result[3] += 202406504;
        result[4] += 0;
        result[5] += 44430696;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 192722891;
        result[3] += 33038209;
        result[4] += 0;
        result[5] += 60570051;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33686018;
        result[3] += 84215045;
        result[4] += 16843009;
        result[5] += 151587081;
      } else {
        result[0] += 949164;
        result[1] += 949164;
        result[2] += 258489007;
        result[3] += 21197996;
        result[4] += 1265552;
        result[5] += 3480268;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 263256847;
        result[5] += 23074305;
      } else {
        result[0] += 0;
        result[1] += 195225786;
        result[2] += 0;
        result[3] += 78090314;
        result[4] += 13015052;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 22984738;
        result[1] += 1956147;
        result[2] += 1222592;
        result[3] += 20784071;
        result[4] += 21273108;
        result[5] += 218110494;
      } else {
        result[0] += 2074863;
        result[1] += 6224590;
        result[2] += 5187158;
        result[3] += 175325959;
        result[4] += 6224590;
        result[5] += 91293990;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1152238;
        result[1] += 232175965;
        result[2] += 576119;
        result[3] += 4608952;
        result[4] += 45513402;
        result[5] += 2304476;
      } else {
        result[0] += 223477973;
        result[1] += 10369716;
        result[2] += 6772059;
        result[3] += 13332492;
        result[4] += 19681298;
        result[5] += 12697612;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 1745921;
        result[1] += 0;
        result[2] += 83804239;
        result[3] += 108247143;
        result[4] += 13967373;
        result[5] += 78566474;
      } else {
        result[0] += 8027976;
        result[1] += 1070396;
        result[2] += 238966093;
        result[3] += 26492321;
        result[4] += 4816785;
        result[5] += 6957579;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 8752480;
        result[2] += 0;
        result[3] += 0;
        result[4] += 268826191;
        result[5] += 8752480;
      } else {
        result[0] += 10699620;
        result[1] += 4419408;
        result[2] += 1395602;
        result[3] += 47915692;
        result[4] += 11397422;
        result[5] += 210503406;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1967911;
        result[1] += 232213581;
        result[2] += 0;
        result[3] += 3443845;
        result[4] += 43786035;
        result[5] += 4919779;
      } else {
        result[0] += 201526066;
        result[1] += 4924166;
        result[2] += 12219227;
        result[3] += 19879041;
        result[4] += 26991726;
        result[5] += 20790924;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 12897799;
        result[2] += 12897799;
        result[3] += 157353156;
        result[4] += 7738679;
        result[5] += 95443717;
      } else {
        result[0] += 22457345;
        result[1] += 5614336;
        result[2] += 148779912;
        result[3] += 42107522;
        result[4] += 5614336;
        result[5] += 61757699;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 150323855;
        result[3] += 118111600;
        result[4] += 0;
        result[5] += 17895697;
      } else {
        result[0] += 5596048;
        result[1] += 0;
        result[2] += 266744982;
        result[3] += 13368338;
        result[4] += 0;
        result[5] += 621783;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 4321979;
        result[1] += 15126928;
        result[2] += 3241484;
        result[3] += 4321979;
        result[4] += 245272346;
        result[5] += 14046433;
      } else {
        result[0] += 12538386;
        result[1] += 2051735;
        result[2] += 2735647;
        result[3] += 41262690;
        result[4] += 19377506;
        result[5] += 208365186;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 280487660;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5843492;
        result[5] += 0;
      } else {
        result[0] += 181151629;
        result[1] += 6563464;
        result[2] += 18869961;
        result[3] += 26582032;
        result[4] += 31176457;
        result[5] += 21987607;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25514657;
        result[3] += 62369162;
        result[4] += 34019542;
        result[5] += 164427790;
      } else {
        result[0] += 1812222;
        result[1] += 0;
        result[2] += 163100023;
        result[3] += 94235569;
        result[4] += 0;
        result[5] += 27183337;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 181343063;
        result[1] += 14316557;
        result[2] += 71582788;
        result[3] += 14316557;
        result[4] += 0;
        result[5] += 4772185;
      } else {
        result[0] += 1011770;
        result[1] += 674513;
        result[2] += 263397680;
        result[3] += 21247188;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 3266134;
        result[1] += 3266134;
        result[2] += 0;
        result[3] += 4354846;
        result[4] += 258024651;
        result[5] += 17419385;
      } else {
        result[0] += 10243533;
        result[1] += 0;
        result[2] += 1951149;
        result[3] += 39266878;
        result[4] += 21950429;
        result[5] += 212919162;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 279316358;
        result[2] += 0;
        result[3] += 1275417;
        result[4] += 5739377;
        result[5] += 0;
      } else {
        result[0] += 197317203;
        result[1] += 9910101;
        result[2] += 10794932;
        result[3] += 19289305;
        result[4] += 32738728;
        result[5] += 16280881;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 1859293;
        result[1] += 14874345;
        result[2] += 29748691;
        result[3] += 156180628;
        result[4] += 1859293;
        result[5] += 81808900;
      } else {
        result[0] += 7866240;
        result[1] += 1573248;
        result[2] += 127433095;
        result[3] += 23598721;
        result[4] += 33038209;
        result[5] += 92821637;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 3217203;
        result[1] += 0;
        result[2] += 215552665;
        result[3] += 55764868;
        result[4] += 0;
        result[5] += 11796414;
      } else {
        result[0] += 3982352;
        result[1] += 0;
        result[2] += 266817625;
        result[3] += 14734704;
        result[4] += 796470;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 3702558;
        result[1] += 0;
        result[2] += 3702558;
        result[3] += 0;
        result[4] += 278926036;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5784467;
        result[3] += 40491274;
        result[4] += 135934991;
        result[5] += 104120419;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 15854438;
        result[1] += 2536710;
        result[2] += 0;
        result[3] += 10146840;
        result[4] += 16488615;
        result[5] += 241304548;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10727103;
        result[3] += 138627186;
        result[4] += 5776132;
        result[5] += 131200730;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 4877873;
        result[1] += 227308888;
        result[2] += 0;
        result[3] += 487787;
        result[4] += 53656604;
        result[5] += 0;
      } else {
        result[0] += 221370561;
        result[1] += 4625025;
        result[2] += 7357995;
        result[3] += 21653530;
        result[4] += 17028504;
        result[5] += 14295534;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 4588640;
        result[1] += 917728;
        result[2] += 100950085;
        result[3] += 98196901;
        result[4] += 4588640;
        result[5] += 77089156;
      } else {
        result[0] += 7856647;
        result[1] += 872960;
        result[2] += 247047915;
        result[3] += 22696981;
        result[4] += 2909869;
        result[5] += 4946778;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2396076;
        result[2] += 1198038;
        result[3] += 1198038;
        result[4] += 273152731;
        result[5] += 8386268;
      } else {
        result[0] += 12317817;
        result[1] += 6275114;
        result[2] += 2556528;
        result[3] += 39045157;
        result[4] += 14177110;
        result[5] += 211959424;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 266808574;
        result[2] += 0;
        result[3] += 7099119;
        result[4] += 12423459;
        result[5] += 0;
      } else {
        result[0] += 182933792;
        result[1] += 9897867;
        result[2] += 14670052;
        result[3] += 19618986;
        result[4] += 40651953;
        result[5] += 18558500;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 15477359;
        result[2] += 0;
        result[3] += 15477359;
        result[4] += 85125477;
        result[5] += 170250955;
      } else {
        result[0] += 6448899;
        result[1] += 0;
        result[2] += 83835697;
        result[3] += 136716676;
        result[4] += 3869339;
        result[5] += 55460538;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 29367297;
        result[1] += 0;
        result[2] += 193824165;
        result[3] += 52861135;
        result[4] += 0;
        result[5] += 10278554;
      } else {
        result[0] += 376751;
        result[1] += 0;
        result[2] += 267116825;
        result[3] += 16200315;
        result[4] += 0;
        result[5] += 2637260;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 2744388;
        result[1] += 2744388;
        result[2] += 0;
        result[3] += 0;
        result[4] += 275353600;
        result[5] += 5488776;
      } else {
        result[0] += 21103569;
        result[1] += 1302689;
        result[2] += 1042151;
        result[3] += 19019266;
        result[4] += 23708948;
        result[5] += 220154526;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 273289154;
        result[2] += 0;
        result[3] += 2371272;
        result[4] += 10670726;
        result[5] += 0;
      } else {
        result[0] += 163989660;
        result[1] += 10105805;
        result[2] += 18527309;
        result[3] += 40729458;
        result[4] += 24498922;
        result[5] += 28479997;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 6658864;
        result[2] += 0;
        result[3] += 59929776;
        result[4] += 19976592;
        result[5] += 199765920;
      } else {
        result[0] += 21053761;
        result[1] += 4210752;
        result[2] += 168430090;
        result[3] += 21053761;
        result[4] += 29475265;
        result[5] += 42107522;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 141353354;
        result[3] += 105108904;
        result[4] += 0;
        result[5] += 39868894;
      } else {
        result[0] += 986215;
        result[1] += 0;
        result[2] += 261347034;
        result[3] += 22682950;
        result[4] += 0;
        result[5] += 1314953;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 27709466;
        result[2] += 0;
        result[3] += 0;
        result[4] += 258621686;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 284503507;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1827645;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 1279406;
        result[1] += 1791168;
        result[2] += 2814694;
        result[3] += 23029315;
        result[4] += 53479187;
        result[5] += 203937380;
      } else {
        result[0] += 100185421;
        result[1] += 14631542;
        result[2] += 9754361;
        result[3] += 56697226;
        result[4] += 56290794;
        result[5] += 48771807;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 190887435;
        result[3] += 95443717;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 278772721;
        result[1] += 0;
        result[2] += 3112295;
        result[3] += 1778454;
        result[4] += 2667681;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 84955397;
        result[1] += 0;
        result[2] += 122713351;
        result[3] += 37757954;
        result[4] += 3146496;
        result[5] += 37757954;
      } else {
        result[0] += 4350710;
        result[1] += 0;
        result[2] += 256691935;
        result[3] += 21753553;
        result[4] += 0;
        result[5] += 3534952;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 14514482;
        result[2] += 0;
        result[3] += 0;
        result[4] += 261260683;
        result[5] += 10555987;
      } else {
        result[0] += 3569578;
        result[1] += 2549698;
        result[2] += 7649095;
        result[3] += 34930870;
        result[4] += 13258432;
        result[5] += 224373476;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 164118417;
        result[1] += 10804949;
        result[2] += 10658936;
        result[3] += 29494590;
        result[4] += 40883591;
        result[5] += 30370667;
      } else {
        result[0] += 694978;
        result[1] += 285636174;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 3291162;
        result[2] += 39493952;
        result[3] += 103671624;
        result[4] += 31266045;
        result[5] += 108608368;
      } else {
        result[0] += 4979672;
        result[1] += 0;
        result[2] += 179268200;
        result[3] += 87144263;
        result[4] += 2489836;
        result[5] += 12449180;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        result[0] += 65075262;
        result[1] += 6507526;
        result[2] += 123642997;
        result[3] += 0;
        result[4] += 39045157;
        result[5] += 52060209;
      } else {
        result[0] += 1101273;
        result[1] += 367091;
        result[2] += 267609500;
        result[3] += 13582375;
        result[4] += 0;
        result[5] += 3670912;
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
