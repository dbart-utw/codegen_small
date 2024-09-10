
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 1970168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139225239;
          result[5] += 1970168;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 57266230;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 174592;
          result[1] += 0;
          result[2] += 523776;
          result[3] += 7856647;
          result[4] += 8555016;
          result[5] += 126055544;
        } else {
          result[0] += 19422900;
          result[1] += 7518542;
          result[2] += 8458360;
          result[3] += 49183797;
          result[4] += 4699088;
          result[5] += 53882886;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 67815273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75350303;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 110334372;
          result[1] += 4521018;
          result[2] += 215286;
          result[3] += 2475795;
          result[4] += 20021652;
          result[5] += 5597451;
        } else {
          result[0] += 28331714;
          result[1] += 1808407;
          result[2] += 39182157;
          result[3] += 40689163;
          result[4] += 8137832;
          result[5] += 25016300;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 16519104;
          result[4] += 60570051;
          result[5] += 33038209;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 3869339;
          result[2] += 30954719;
          result[3] += 75452128;
          result[4] += 0;
          result[5] += 32889389;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 112329913;
          result[3] += 19822925;
          result[4] += 0;
          result[5] += 11012736;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 964077;
          result[1] += 0;
          result[2] += 117617510;
          result[3] += 20727676;
          result[4] += 482038;
          result[5] += 3374272;
        } else {
          result[0] += 495382;
          result[1] += 0;
          result[2] += 139697898;
          result[3] += 2724604;
          result[4] += 0;
          result[5] += 247691;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1193046;
          result[1] += 596523;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137200344;
          result[5] += 4175662;
        } else {
          result[0] += 0;
          result[1] += 86921957;
          result[2] += 0;
          result[3] += 0;
          result[4] += 56243619;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 205697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4113953;
          result[4] += 2879767;
          result[5] += 135966158;
        } else {
          result[0] += 15462948;
          result[1] += 3732435;
          result[2] += 533205;
          result[3] += 40790192;
          result[4] += 11197307;
          result[5] += 71449486;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 94428358;
          result[2] += 0;
          result[3] += 6092152;
          result[4] += 36552913;
          result[5] += 6092152;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
          result[0] += 34722994;
          result[1] += 20833796;
          result[2] += 3205199;
          result[3] += 1602599;
          result[4] += 72116988;
          result[5] += 10683998;
        } else {
          result[0] += 112821972;
          result[1] += 702940;
          result[2] += 4686270;
          result[3] += 8318130;
          result[4] += 5154898;
          result[5] += 11481363;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 17895697;
          result[4] += 10737418;
          result[5] += 93057624;
        } else {
          result[0] += 0;
          result[1] += 761519;
          result[2] += 23607089;
          result[3] += 86813168;
          result[4] += 6092152;
          result[5] += 25891646;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 14771051;
          result[1] += 3408704;
          result[2] += 77263961;
          result[3] += 27269633;
          result[4] += 3408704;
          result[5] += 17043521;
        } else {
          result[0] += 0;
          result[1] += 132939463;
          result[2] += 0;
          result[3] += 10226112;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 2489836;
          result[1] += 0;
          result[2] += 121586996;
          result[3] += 17013880;
          result[4] += 0;
          result[5] += 2074863;
        } else {
          result[0] += 119304647;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 129310843;
          result[3] += 13854733;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 300768;
          result[1] += 0;
          result[2] += 141060200;
          result[3] += 1804608;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 2169175;
          result[1] += 2169175;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136115756;
          result[5] += 2711469;
        } else {
          result[0] += 0;
          result[1] += 4338350;
          result[2] += 0;
          result[3] += 39045157;
          result[4] += 60736911;
          result[5] += 39045157;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 100866656;
          result[1] += 1084587;
          result[2] += 2169175;
          result[3] += 0;
          result[4] += 37960569;
          result[5] += 1084587;
        } else {
          result[0] += 767643;
          result[1] += 639703;
          result[2] += 383821;
          result[3] += 12410242;
          result[4] += 12026420;
          result[5] += 116937745;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 113025455;
          result[1] += 30140121;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 22323114;
          result[1] += 10715095;
          result[2] += 7143396;
          result[3] += 50003777;
          result[4] += 9524528;
          result[5] += 43455663;
        } else {
          result[0] += 99897757;
          result[1] += 9120177;
          result[2] += 10392760;
          result[3] += 7953643;
          result[4] += 11665343;
          result[5] += 4135894;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 137200344;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41869178;
          result[3] += 91842067;
          result[4] += 0;
          result[5] += 9454330;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122383476;
          result[3] += 9236488;
          result[4] += 2309122;
          result[5] += 9236488;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 26030104;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 78090314;
        } else {
          result[0] += 0;
          result[1] += 906111;
          result[2] += 113263905;
          result[3] += 23558892;
          result[4] += 0;
          result[5] += 5436667;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 71582788;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 138782956;
          result[3] += 3798270;
          result[4] += 0;
          result[5] += 584349;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 14600455;
          result[1] += 1622272;
          result[2] += 405568;
          result[3] += 0;
          result[4] += 112342392;
          result[5] += 14194887;
        } else {
          result[0] += 6817408;
          result[1] += 129530759;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6817408;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 869426;
          result[3] += 12316876;
          result[4] += 10433118;
          result[5] += 119546154;
        } else {
          result[0] += 1001157;
          result[1] += 1001157;
          result[2] += 1001157;
          result[3] += 94108840;
          result[4] += 9010420;
          result[5] += 37042841;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 28121809;
          result[2] += 0;
          result[3] += 0;
          result[4] += 115043766;
          result[5] += 0;
        } else {
          result[0] += 296409;
          result[1] += 135755349;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7113817;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 122167958;
          result[1] += 3256315;
          result[2] += 2021161;
          result[3] += 3480888;
          result[4] += 7972357;
          result[5] += 4266895;
        } else {
          result[0] += 24809943;
          result[1] += 1220161;
          result[2] += 23996502;
          result[3] += 36198114;
          result[4] += 9354568;
          result[5] += 47586285;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 138393390;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16428836;
          result[3] += 77450229;
          result[4] += 0;
          result[5] += 49286509;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 100215903;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 131235111;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8676701;
          result[3] += 108458770;
          result[4] += 0;
          result[5] += 26030104;
        } else {
          result[0] += 13015052;
          result[1] += 0;
          result[2] += 117135471;
          result[3] += 0;
          result[4] += 0;
          result[5] += 13015052;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3003473;
          result[1] += 1501736;
          result[2] += 102118103;
          result[3] += 29534157;
          result[4] += 4004631;
          result[5] += 3003473;
        } else {
          result[0] += 603225;
          result[1] += 402150;
          result[2] += 135524717;
          result[3] += 4624730;
          result[4] += 0;
          result[5] += 2010752;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1325607;
          result[1] += 0;
          result[2] += 662803;
          result[3] += 0;
          result[4] += 139851558;
          result[5] += 1325607;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 93368854;
          result[5] += 49796722;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22605091;
          result[3] += 15070060;
          result[4] += 37675151;
          result[5] += 67815273;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 15907286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 111351003;
          result[5] += 15907286;
        } else {
          result[0] += 0;
          result[1] += 398789;
          result[2] += 398789;
          result[3] += 2392739;
          result[4] += 2592134;
          result[5] += 137383122;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
          result[0] += 131235111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11930464;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 3422284;
          result[2] += 855571;
          result[3] += 44774891;
          result[4] += 14259519;
          result[5] += 79853309;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 117901063;
          result[2] += 0;
          result[3] += 4210752;
          result[4] += 21053761;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          result[0] += 18721652;
          result[1] += 29734388;
          result[2] += 0;
          result[3] += 3303820;
          result[4] += 91405714;
          result[5] += 0;
        } else {
          result[0] += 112350120;
          result[1] += 2929994;
          result[2] += 3233096;
          result[3] += 8082742;
          result[4] += 10911702;
          result[5] += 5657919;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 2128856;
          result[2] += 35658340;
          result[3] += 56414688;
          result[4] += 2661070;
          result[5] += 46302621;
        } else {
          result[0] += 5766000;
          result[1] += 984439;
          result[2] += 119960939;
          result[3] += 10688196;
          result[4] += 2109512;
          result[5] += 3656488;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 8576739;
          result[2] += 0;
          result[3] += 0;
          result[4] += 134588836;
          result[5] += 0;
        } else {
          result[0] += 44050946;
          result[1] += 10278554;
          result[2] += 2202547;
          result[3] += 7341824;
          result[4] += 44785129;
          result[5] += 34506574;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3854457;
          result[4] += 6240550;
          result[5] += 133070567;
        } else {
          result[0] += 3253763;
          result[1] += 0;
          result[2] += 7727687;
          result[3] += 65481982;
          result[4] += 16675535;
          result[5] += 50026607;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 109051903;
          result[1] += 9059696;
          result[2] += 1006632;
          result[3] += 4026531;
          result[4] += 15994279;
          result[5] += 4026531;
        } else {
          result[0] += 23960765;
          result[1] += 5391172;
          result[2] += 11381363;
          result[3] += 34144091;
          result[4] += 13777440;
          result[5] += 54510742;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 142831077;
          result[2] += 334499;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 2675992;
          result[2] += 2675992;
          result[3] += 32111905;
          result[4] += 6689980;
          result[5] += 99011707;
        } else {
          result[0] += 0;
          result[1] += 8947848;
          result[2] += 89478485;
          result[3] += 8947848;
          result[4] += 17895697;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13215283;
          result[3] += 99114629;
          result[4] += 0;
          result[5] += 30835662;
        } else {
          result[0] += 9922366;
          result[1] += 0;
          result[2] += 79378933;
          result[3] += 45359390;
          result[4] += 1417480;
          result[5] += 7087404;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 45552683;
          result[1] += 13015052;
          result[2] += 84597840;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 127258290;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 0;
          result[4] += 7953643;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 5965232;
          result[4] += 0;
          result[5] += 131235111;
        } else {
          result[0] += 731930;
          result[1] += 439158;
          result[2] += 130429988;
          result[3] += 9807866;
          result[4] += 439158;
          result[5] += 1317474;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 749557;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 142416018;
          result[5] += 0;
        } else {
          result[0] += 7341824;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80760068;
          result[5] += 55063683;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 200512;
          result[3] += 4611776;
          result[4] += 4812288;
          result[5] += 133540999;
        } else {
          result[0] += 8797884;
          result[1] += 7198269;
          result[2] += 1333012;
          result[3] += 50121281;
          result[4] += 9597692;
          result[5] += 66117435;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 906111;
          result[1] += 30807782;
          result[2] += 3624444;
          result[3] += 1812222;
          result[4] += 103296681;
          result[5] += 2718333;
        } else {
          result[0] += 1435243;
          result[1] += 137424601;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4305731;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 116383270;
          result[1] += 6314527;
          result[2] += 653226;
          result[3] += 4572588;
          result[4] += 12193570;
          result[5] += 3048392;
        } else {
          result[0] += 21015130;
          result[1] += 1641807;
          result[2] += 27582358;
          result[3] += 37433201;
          result[4] += 11492649;
          result[5] += 44000429;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2701237;
          result[3] += 126958152;
          result[4] += 0;
          result[5] += 13506186;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79536431;
          result[3] += 15907286;
          result[4] += 47721858;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7535030;
          result[3] += 67815273;
          result[4] += 0;
          result[5] += 67815273;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 129847848;
          result[3] += 13317728;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 113025455;
          result[3] += 29560503;
          result[4] += 0;
          result[5] += 579617;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42910000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1735340;
          result[1] += 0;
          result[2] += 135790380;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 867670;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1823765;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 141341811;
          result[5] += 0;
        } else {
          result[0] += 37599040;
          result[1] += 1446116;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75198080;
          result[5] += 28922338;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 640561;
          result[2] += 0;
          result[3] += 5765056;
          result[4] += 8167163;
          result[5] += 128592794;
        } else {
          result[0] += 938790;
          result[1] += 6102139;
          result[2] += 5163348;
          result[3] += 71348090;
          result[4] += 7979720;
          result[5] += 51633486;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 39768215;
          result[2] += 0;
          result[3] += 1325607;
          result[4] += 99420539;
          result[5] += 2651214;
        } else {
          result[0] += 615765;
          result[1] += 137007917;
          result[2] += 615765;
          result[3] += 0;
          result[4] += 4926127;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 120676409;
          result[1] += 5100635;
          result[2] += 231847;
          result[3] += 1738853;
          result[4] += 11592354;
          result[5] += 3825476;
        } else {
          result[0] += 14810232;
          result[1] += 5227140;
          result[2] += 31943637;
          result[3] += 41526729;
          result[4] += 4646347;
          result[5] += 45011489;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 16843009;
          result[1] += 33686018;
          result[2] += 0;
          result[3] += 8421504;
          result[4] += 16843009;
          result[5] += 67372036;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17459216;
          result[3] += 108247143;
          result[4] += 0;
          result[5] += 17459216;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 3491843;
          result[1] += 13967373;
          result[2] += 10475529;
          result[3] += 13967373;
          result[4] += 10475529;
          result[5] += 90787926;
        } else {
          result[0] += 3491843;
          result[1] += 0;
          result[2] += 76820553;
          result[3] += 48885806;
          result[4] += 0;
          result[5] += 13967373;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 116029617;
          result[3] += 24328790;
          result[4] += 0;
          result[5] += 2807168;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 135823752;
          result[3] += 7341824;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 100215903;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1645581;
          result[1] += 0;
          result[2] += 136113085;
          result[3] += 5171827;
          result[4] += 0;
          result[5] += 235083;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 584349;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135569035;
          result[5] += 7012191;
        } else {
          result[0] += 0;
          result[1] += 114532461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
          result[0] += 196386;
          result[1] += 0;
          result[2] += 392772;
          result[3] += 4909656;
          result[4] += 4320497;
          result[5] += 133346263;
        } else {
          result[0] += 12279308;
          result[1] += 1116300;
          result[2] += 1116300;
          result[3] += 46047407;
          result[4] += 9488556;
          result[5] += 73117701;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 142520686;
          result[2] += 0;
          result[3] += 0;
          result[4] += 644889;
          result[5] += 0;
        } else {
          result[0] += 8892271;
          result[1] += 41793677;
          result[2] += 13338407;
          result[3] += 3556908;
          result[4] += 65802811;
          result[5] += 9781499;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 61648471;
          result[1] += 11141290;
          result[2] += 11512666;
          result[3] += 23582397;
          result[4] += 15597806;
          result[5] += 19682945;
        } else {
          result[0] += 127294279;
          result[1] += 1943424;
          result[2] += 4048800;
          result[3] += 2267328;
          result[4] += 6963936;
          result[5] += 647808;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 9544371;
          result[2] += 19088743;
          result[3] += 83513252;
          result[4] += 2386092;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5113056;
          result[3] += 40904450;
          result[4] += 0;
          result[5] += 97148069;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 2386092;
          result[1] += 4772185;
          result[2] += 116918554;
          result[3] += 9544371;
          result[4] += 4772185;
          result[5] += 4772185;
        } else {
          result[0] += 107374182;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40086361;
          result[3] += 62992853;
          result[4] += 0;
          result[5] += 40086361;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 112230301;
          result[3] += 28777000;
          result[4] += 0;
          result[5] += 2158275;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 209612;
          result[1] += 0;
          result[2] += 136457965;
          result[3] += 6288385;
          result[4] += 0;
          result[5] += 209612;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 95443717;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44050946;
          result[5] += 99114629;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 85217605;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6817408;
          result[4] += 20452225;
          result[5] += 30678337;
        } else {
          result[0] += 435595;
          result[1] += 580793;
          result[2] += 435595;
          result[3] += 7840711;
          result[4] += 7405116;
          result[5] += 126467765;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15907286;
          result[3] += 10604857;
          result[4] += 0;
          result[5] += 116653432;
        } else {
          result[0] += 0;
          result[1] += 1446116;
          result[2] += 0;
          result[3] += 107012653;
          result[4] += 2892233;
          result[5] += 31814572;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          result[0] += 15394148;
          result[1] += 36945955;
          result[2] += 2052553;
          result[3] += 2052553;
          result[4] += 78510154;
          result[5] += 8210212;
        } else {
          result[0] += 106332185;
          result[1] += 2035529;
          result[2] += 3198689;
          result[3] += 11728527;
          result[4] += 10177647;
          result[5] += 9692997;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 1943424;
          result[1] += 140574344;
          result[2] += 0;
          result[3] += 323904;
          result[4] += 323904;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 6424096;
          result[2] += 17436833;
          result[3] += 75253700;
          result[4] += 2753184;
          result[5] += 41297762;
        } else {
          result[0] += 23958320;
          result[1] += 2921746;
          result[2] += 68368867;
          result[3] += 15193081;
          result[4] += 6427842;
          result[5] += 26295718;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 86305489;
          result[3] += 46706500;
          result[4] += 0;
          result[5] += 10153586;
        } else {
          result[0] += 809989;
          result[1] += 202497;
          result[2] += 132838215;
          result[3] += 8707383;
          result[4] += 0;
          result[5] += 607491;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 2526451;
          result[2] += 0;
          result[3] += 0;
          result[4] += 138112673;
          result[5] += 2526451;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83924648;
          result[5] += 59240928;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 1041745;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10715095;
          result[4] += 6696934;
          result[5] += 124711801;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6949785;
          result[3] += 93127122;
          result[4] += 6949785;
          result[5] += 36138883;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 141406785;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1758790;
          result[5] += 0;
        } else {
          result[0] += 4497347;
          result[1] += 39726573;
          result[2] += 4497347;
          result[3] += 3747789;
          result[4] += 86948727;
          result[5] += 3747789;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 115068661;
          result[1] += 5576486;
          result[2] += 0;
          result[3] += 3217203;
          result[4] += 13405016;
          result[5] += 5898207;
        } else {
          result[0] += 24064001;
          result[1] += 1827645;
          result[2] += 26805469;
          result[3] += 51478686;
          result[4] += 3046076;
          result[5] += 35943697;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 8547198;
          result[2] += 2136799;
          result[3] += 23504796;
          result[4] += 8547198;
          result[5] += 100429583;
        } else {
          result[0] += 1590728;
          result[1] += 3181457;
          result[2] += 22270200;
          result[3] += 92262260;
          result[4] += 0;
          result[5] += 23860929;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 12389328;
          result[1] += 11012736;
          result[2] += 90855077;
          result[3] += 23402065;
          result[4] += 2753184;
          result[5] += 2753184;
        } else {
          result[0] += 122111815;
          result[1] += 0;
          result[2] += 16843009;
          result[3] += 0;
          result[4] += 4210752;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11012736;
          result[3] += 0;
          result[4] += 22025473;
          result[5] += 110127366;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30140121;
          result[3] += 105490424;
          result[4] += 0;
          result[5] += 7535030;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 604074;
          result[1] += 0;
          result[2] += 115378165;
          result[3] += 22954818;
          result[4] += 0;
          result[5] += 4228519;
        } else {
          result[0] += 962457;
          result[1] += 0;
          result[2] += 136187758;
          result[3] += 6015360;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2055008;
          result[2] += 0;
          result[3] += 0;
          result[4] += 140425565;
          result[5] += 685002;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 5124147;
          result[1] += 776385;
          result[2] += 621108;
          result[3] += 6055810;
          result[4] += 6987473;
          result[5] += 123600649;
        } else {
          result[0] += 7901996;
          result[1] += 1394469;
          result[2] += 464823;
          result[3] += 67399378;
          result[4] += 12085405;
          result[5] += 53919502;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 111258317;
          result[1] += 8028950;
          result[2] += 625632;
          result[3] += 2606802;
          result[4] += 16474989;
          result[5] += 4170883;
        } else {
          result[0] += 23464897;
          result[1] += 1485120;
          result[2] += 33563713;
          result[3] += 31187521;
          result[4] += 8910720;
          result[5] += 44553602;
        }
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
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 100215903;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13015052;
          result[5] += 130150524;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24898361;
          result[3] += 87144263;
          result[4] += 2074863;
          result[5] += 29048087;
        } else {
          result[0] += 1109810;
          result[1] += 2219621;
          result[2] += 93224096;
          result[3] += 37733562;
          result[4] += 1109810;
          result[5] += 7768674;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 104120419;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13015052;
          result[5] += 26030104;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 52745212;
          result[1] += 11302545;
          result[2] += 67815273;
          result[3] += 11302545;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 510091;
          result[1] += 170030;
          result[2] += 132623693;
          result[3] += 8671549;
          result[4] += 170030;
          result[5] += 1020182;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
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
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          result[0] += 5532969;
          result[1] += 15215665;
          result[2] += 1037431;
          result[3] += 1729052;
          result[4] += 108238708;
          result[5] += 11411748;
        } else {
          result[0] += 134805542;
          result[1] += 3483347;
          result[2] += 0;
          result[3] += 696669;
          result[4] += 2090008;
          result[5] += 2090008;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 296409;
          result[1] += 0;
          result[2] += 148204;
          result[3] += 9929703;
          result[4] += 11411748;
          result[5] += 121379510;
        } else {
          result[0] += 20654945;
          result[1] += 8514252;
          result[2] += 11825350;
          result[3] += 44147975;
          result[4] += 17659190;
          result[5] += 40363862;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 71582788;
        } else {
          result[0] += 141628915;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1536660;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 3181457;
          result[1] += 0;
          result[2] += 114532461;
          result[3] += 12725829;
          result[4] += 0;
          result[5] += 12725829;
        } else {
          result[0] += 124491805;
          result[1] += 0;
          result[2] += 15561475;
          result[3] += 0;
          result[4] += 3112295;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 7615190;
          result[1] += 0;
          result[2] += 77674940;
          result[3] += 45691141;
          result[4] += 1523038;
          result[5] += 10661266;
        } else {
          result[0] += 3819785;
          result[1] += 0;
          result[2] += 130789470;
          result[3] += 8097946;
          result[4] += 0;
          result[5] += 458374;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 5545145;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137116326;
          result[5] += 504104;
        } else {
          result[0] += 3078829;
          result[1] += 15394148;
          result[2] += 6157659;
          result[3] += 1539414;
          result[4] += 86207228;
          result[5] += 30788296;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
          result[0] += 322444;
          result[1] += 142843131;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 11012736;
          result[1] += 40380034;
          result[2] += 0;
          result[3] += 7341824;
          result[4] += 84430981;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 119304647;
          result[1] += 2272469;
          result[2] += 0;
          result[3] += 2272469;
          result[4] += 11362347;
          result[5] += 7953643;
        } else {
          result[0] += 307222;
          result[1] += 768055;
          result[2] += 0;
          result[3] += 10752779;
          result[4] += 7987778;
          result[5] += 123349740;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 117477973;
          result[1] += 2740011;
          result[2] += 456668;
          result[3] += 7535030;
          result[4] += 9133370;
          result[5] += 5822523;
        } else {
          result[0] += 20888092;
          result[1] += 4928650;
          result[2] += 25582045;
          result[3] += 43419068;
          result[4] += 7040929;
          result[5] += 41306789;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 31814572;
          result[2] += 15907286;
          result[3] += 0;
          result[4] += 95443717;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 3869339;
          result[2] += 0;
          result[3] += 34824059;
          result[4] += 3869339;
          result[5] += 100602837;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 4032833;
          result[2] += 42344747;
          result[3] += 76623829;
          result[4] += 0;
          result[5] += 20164165;
        } else {
          result[0] += 10475529;
          result[1] += 3491843;
          result[2] += 96025691;
          result[3] += 19205138;
          result[4] += 0;
          result[5] += 13967373;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 47721858;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 859853;
          result[1] += 0;
          result[2] += 119949537;
          result[3] += 19346699;
          result[4] += 0;
          result[5] += 3009486;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 138870609;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1778454;
          result[2] += 0;
          result[3] += 0;
          result[4] += 140497894;
          result[5] += 889227;
        } else {
          result[0] += 2921746;
          result[1] += 23373971;
          result[2] += 0;
          result[3] += 0;
          result[4] += 49669689;
          result[5] += 67200168;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 478015;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3585114;
          result[4] += 5019160;
          result[5] += 134083286;
        } else {
          result[0] += 5984413;
          result[1] += 920678;
          result[2] += 460339;
          result[3] += 34985800;
          result[4] += 7365431;
          result[5] += 93448913;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 138052520;
          result[5] += 5113056;
        } else {
          result[0] += 0;
          result[1] += 142840200;
          result[2] += 0;
          result[3] += 0;
          result[4] += 325376;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 103413965;
          result[1] += 3586611;
          result[2] += 1195537;
          result[3] += 4981404;
          result[4] += 21420041;
          result[5] += 8568016;
        } else {
          result[0] += 21053761;
          result[1] += 5965232;
          result[2] += 23510033;
          result[3] += 40353042;
          result[4] += 9474192;
          result[5] += 42809314;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 91105366;
          result[3] += 0;
          result[4] += 52060209;
          result[5] += 0;
        } else {
          result[0] += 1908874;
          result[1] += 3817748;
          result[2] += 0;
          result[3] += 1908874;
          result[4] += 9544371;
          result[5] += 125985707;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18293379;
          result[3] += 92262260;
          result[4] += 1590728;
          result[5] += 31019208;
        } else {
          result[0] += 12221451;
          result[1] += 15713294;
          result[2] += 71582788;
          result[3] += 22696981;
          result[4] += 6983686;
          result[5] += 13967373;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42800000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 83235800;
          result[1] += 0;
          result[2] += 56600344;
          result[3] += 3329432;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1009223;
          result[1] += 0;
          result[2] += 130766543;
          result[3] += 10957284;
          result[4] += 0;
          result[5] += 432524;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 614444;
          result[1] += 0;
          result[2] += 0;
          result[3] += 614444;
          result[4] += 139478909;
          result[5] += 2457778;
        } else {
          result[0] += 0;
          result[1] += 118267215;
          result[2] += 12449180;
          result[3] += 0;
          result[4] += 6224590;
          result[5] += 6224590;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 5828985;
          result[1] += 2559066;
          result[2] += 0;
          result[3] += 5260304;
          result[4] += 12653164;
          result[5] += 116864055;
        } else {
          result[0] += 3686667;
          result[1] += 614444;
          result[2] += 0;
          result[3] += 88480012;
          result[4] += 1228889;
          result[5] += 49155562;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 106804492;
          result[1] += 5449208;
          result[2] += 99076;
          result[3] += 3467678;
          result[4] += 20310687;
          result[5] += 7034433;
        } else {
          result[0] += 24442903;
          result[1] += 2539522;
          result[2] += 33013791;
          result[3] += 45076522;
          result[4] += 4444164;
          result[5] += 33648672;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 55778796;
          result[4] += 1859293;
          result[5] += 65075262;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 125269879;
          result[3] += 0;
          result[4] += 0;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42107522;
          result[3] += 50529027;
          result[4] += 16843009;
          result[5] += 33686018;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 134744072;
          result[3] += 8421504;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81808900;
          result[3] += 51130563;
          result[4] += 10226112;
          result[5] += 0;
        } else {
          result[0] += 497678;
          result[1] += 165892;
          result[2] += 131884859;
          result[3] += 8792323;
          result[4] += 0;
          result[5] += 1824821;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 691621;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 133482880;
          result[5] += 8991074;
        } else {
          result[0] += 50758704;
          result[1] += 18221073;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 35140641;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 679314;
          result[2] += 339657;
          result[3] += 6453489;
          result[4] += 6453489;
          result[5] += 129239624;
        } else {
          result[0] += 0;
          result[1] += 6283128;
          result[2] += 4039154;
          result[3] += 68665621;
          result[4] += 3141564;
          result[5] += 61036107;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 29826161;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 59652323;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 6771344;
          result[1] += 46432078;
          result[2] += 1934669;
          result[3] += 967334;
          result[4] += 83190807;
          result[5] += 3869339;
        } else {
          result[0] += 106482915;
          result[1] += 2439256;
          result[2] += 4597059;
          result[3] += 9850842;
          result[4] += 10038477;
          result[5] += 9757024;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15339168;
          result[4] += 0;
          result[5] += 127826407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8521760;
          result[3] += 109078534;
          result[4] += 0;
          result[5] += 25565281;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25264513;
          result[3] += 11228672;
          result[4] += 11228672;
          result[5] += 95443717;
        } else {
          result[0] += 0;
          result[1] += 10226112;
          result[2] += 81808900;
          result[3] += 10226112;
          result[4] += 20452225;
          result[5] += 20452225;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 5005789;
          result[1] += 0;
          result[2] += 57065999;
          result[3] += 55063683;
          result[4] += 8009263;
          result[5] += 18020841;
        } else {
          result[0] += 7158278;
          result[1] += 447392;
          result[2] += 108716359;
          result[3] += 23264406;
          result[4] += 0;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 12449180;
          result[1] += 24898361;
          result[2] += 62245902;
          result[3] += 43572131;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 518715;
          result[1] += 0;
          result[2] += 138756491;
          result[3] += 3890368;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 2533904;
          result[1] += 10769092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 126695200;
          result[5] += 3167380;
        } else {
          result[0] += 73589782;
          result[1] += 1337996;
          result[2] += 1337996;
          result[3] += 1337996;
          result[4] += 29435912;
          result[5] += 36125893;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5784467;
          result[4] += 8315172;
          result[5] += 129065936;
        } else {
          result[0] += 799807;
          result[1] += 3599134;
          result[2] += 3999038;
          result[3] += 48388365;
          result[4] += 10797403;
          result[5] += 75581826;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2735647;
          result[1] += 39210954;
          result[2] += 4559413;
          result[3] += 10942591;
          result[4] += 79333790;
          result[5] += 6383178;
        } else {
          result[0] += 105944533;
          result[1] += 4113376;
          result[2] += 5016313;
          result[3] += 9029363;
          result[4] += 9129689;
          result[5] += 9932299;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 1763122;
          result[1] += 141402453;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 18673770;
          result[2] += 6224590;
          result[3] += 0;
          result[4] += 99593444;
          result[5] += 18673770;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7379668;
          result[3] += 30994609;
          result[4] += 5903735;
          result[5] += 98887563;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 69477412;
          result[1] += 33686018;
          result[2] += 18948385;
          result[3] += 6316128;
          result[4] += 2105376;
          result[5] += 12632256;
        } else {
          result[0] += 1278264;
          result[1] += 639132;
          result[2] += 65830599;
          result[3] += 52408827;
          result[4] += 639132;
          result[5] += 22369621;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 66541746;
          result[3] += 60492497;
          result[4] += 0;
          result[5] += 16131332;
        } else {
          result[0] += 3817748;
          result[1] += 0;
          result[2] += 113259878;
          result[3] += 22270200;
          result[4] += 0;
          result[5] += 3817748;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 138635020;
          result[3] += 4530556;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 139715803;
          result[5] += 3449772;
        } else {
          result[0] += 4032833;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82673079;
          result[5] += 56459663;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3487792;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7307755;
          result[4] += 5314731;
          result[5] += 127055297;
        } else {
          result[0] += 8614547;
          result[1] += 9024764;
          result[2] += 6563464;
          result[3] += 59071183;
          result[4] += 4922598;
          result[5] += 54969017;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          result[0] += 10654182;
          result[1] += 43282616;
          result[2] += 1331772;
          result[3] += 1331772;
          result[4] += 80572254;
          result[5] += 5992977;
        } else {
          result[0] += 101321226;
          result[1] += 1579032;
          result[2] += 7807436;
          result[3] += 12632256;
          result[4] += 7982884;
          result[5] += 11842740;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 141542384;
          result[2] += 0;
          result[3] += 649276;
          result[4] += 973915;
          result[5] += 0;
        } else {
          result[0] += 17895697;
          result[1] += 80530636;
          result[2] += 0;
          result[3] += 44739242;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 107374182;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16843009;
          result[4] += 0;
          result[5] += 126322567;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14810232;
          result[3] += 118481856;
          result[4] += 0;
          result[5] += 9873488;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 84597840;
          result[3] += 26030104;
          result[4] += 0;
          result[5] += 32537631;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 60845370;
          result[4] += 3579139;
          result[5] += 35791394;
        } else {
          result[0] += 4894549;
          result[1] += 0;
          result[2] += 89325530;
          result[3] += 44050946;
          result[4] += 2447274;
          result[5] += 2447274;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 39045157;
          result[2] += 26030104;
          result[3] += 65075262;
          result[4] += 0;
          result[5] += 13015052;
        } else {
          result[0] += 1226632;
          result[1] += 0;
          result[2] += 133352513;
          result[3] += 7710263;
          result[4] += 175233;
          result[5] += 700933;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1579032;
          result[1] += 1579032;
          result[2] += 0;
          result[3] += 5789784;
          result[4] += 130006975;
          result[5] += 4210752;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 137742637;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5422938;
          result[5] += 0;
        } else {
          result[0] += 2324116;
          result[1] += 232411;
          result[2] += 697234;
          result[3] += 16966050;
          result[4] += 14874345;
          result[5] += 108071417;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 341683;
          result[1] += 141798840;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1025051;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 64564867;
          result[2] += 2807168;
          result[3] += 11228672;
          result[4] += 64564867;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 50518953;
          result[1] += 7877531;
          result[2] += 9932539;
          result[3] += 34763889;
          result[4] += 14727559;
          result[5] += 25345102;
        } else {
          result[0] += 127525639;
          result[1] += 2406144;
          result[2] += 4124818;
          result[3] += 171867;
          result[4] += 8593371;
          result[5] += 343734;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 105137220;
          result[4] += 0;
          result[5] += 20132659;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 125269879;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 6507526;
          result[1] += 0;
          result[2] += 112797120;
          result[3] += 10845877;
          result[4] += 2169175;
          result[5] += 10845877;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10226112;
          result[3] += 51130563;
          result[4] += 0;
          result[5] += 81808900;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 103079215;
          result[3] += 22906492;
          result[4] += 0;
          result[5] += 17179869;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 112329913;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 2202547;
        } else {
          result[0] += 2599374;
          result[1] += 0;
          result[2] += 136167259;
          result[3] += 3999038;
          result[4] += 0;
          result[5] += 399903;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1424533;
          result[1] += 4985865;
          result[2] += 0;
          result[3] += 0;
          result[4] += 133906111;
          result[5] += 2849066;
        } else {
          result[0] += 0;
          result[1] += 2309122;
          result[2] += 0;
          result[3] += 41564199;
          result[4] += 39255077;
          result[5] += 60037177;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2661070;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5144735;
          result[4] += 6386568;
          result[5] += 128973202;
        } else {
          result[0] += 8886139;
          result[1] += 3291162;
          result[2] += 329116;
          result[3] += 44759812;
          result[4] += 10202604;
          result[5] += 75696741;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 33172511;
          result[2] += 3491843;
          result[3] += 0;
          result[4] += 106501221;
          result[5] += 0;
        } else {
          result[0] += 1464609;
          result[1] += 141700967;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 116685987;
          result[1] += 4394952;
          result[2] += 219747;
          result[3] += 3735709;
          result[4] += 15711955;
          result[5] += 2417223;
        } else {
          result[0] += 24728599;
          result[1] += 0;
          result[2] += 37743651;
          result[3] += 46854188;
          result[4] += 2603010;
          result[5] += 31236125;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1934669;
          result[3] += 30954719;
          result[4] += 11608019;
          result[5] += 98668167;
        } else {
          result[0] += 0;
          result[1] += 5506368;
          result[2] += 25696385;
          result[3] += 82595524;
          result[4] += 0;
          result[5] += 29367297;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42960000))) ) ) {
          result[0] += 58567735;
          result[1] += 58567735;
          result[2] += 13015052;
          result[3] += 0;
          result[4] += 13015052;
          result[5] += 0;
        } else {
          result[0] += 2701237;
          result[1] += 0;
          result[2] += 113451966;
          result[3] += 18908661;
          result[4] += 5402474;
          result[5] += 2701237;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 42562738;
          result[1] += 0;
          result[2] += 30954719;
          result[3] += 30954719;
          result[4] += 0;
          result[5] += 38693399;
        } else {
          result[0] += 4564699;
          result[1] += 0;
          result[2] += 111627652;
          result[3] += 22823497;
          result[4] += 0;
          result[5] += 4149726;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2055008;
          result[1] += 685002;
          result[2] += 123300496;
          result[3] += 15755063;
          result[4] += 0;
          result[5] += 1370005;
        } else {
          result[0] += 360618;
          result[1] += 0;
          result[2] += 139559390;
          result[3] += 3245567;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 450206;
          result[1] += 2701237;
          result[2] += 0;
          result[3] += 0;
          result[4] += 136862689;
          result[5] += 3151443;
        } else {
          result[0] += 5436667;
          result[1] += 30807782;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79737789;
          result[5] += 27183337;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 142544467;
          result[2] += 0;
          result[3] += 0;
          result[4] += 621108;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 65617555;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77548020;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 214319;
          result[1] += 428639;
          result[2] += 0;
          result[3] += 3429115;
          result[4] += 4500714;
          result[5] += 134592787;
        } else {
          result[0] += 9118826;
          result[1] += 1823765;
          result[2] += 0;
          result[3] += 49849585;
          result[4] += 6991100;
          result[5] += 75382299;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 119304647;
          result[1] += 2305403;
          result[2] += 230540;
          result[3] += 3919186;
          result[4] += 12218640;
          result[5] += 5187158;
        } else {
          result[0] += 23485588;
          result[1] += 8686450;
          result[2] += 34424082;
          result[3] += 38284727;
          result[4] += 8364730;
          result[5] += 29919996;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11362347;
          result[3] += 22724694;
          result[4] += 18179755;
          result[5] += 90898778;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 133621204;
          result[4] += 0;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 89478485;
        } else {
          result[0] += 0;
          result[1] += 6763728;
          result[2] += 78910160;
          result[3] += 50727960;
          result[4] += 0;
          result[5] += 6763728;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 47721858;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 2090008;
          result[1] += 0;
          result[2] += 117040471;
          result[3] += 21945088;
          result[4] += 1045004;
          result[5] += 1045004;
        } else {
          result[0] += 2704882;
          result[1] += 0;
          result[2] += 135244134;
          result[3] += 5216559;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 636291;
          result[1] += 8271788;
          result[2] += 0;
          result[3] += 0;
          result[4] += 125985707;
          result[5] += 8271788;
        } else {
          result[0] += 47009592;
          result[1] += 0;
          result[2] += 4273599;
          result[3] += 0;
          result[4] += 55556790;
          result[5] += 36325594;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6046502;
          result[4] += 6631647;
          result[5] += 130487425;
        } else {
          result[0] += 0;
          result[1] += 11752398;
          result[2] += 6944598;
          result[3] += 49680591;
          result[4] += 6410398;
          result[5] += 68377588;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 21503130;
          result[1] += 29991207;
          result[2] += 0;
          result[3] += 5092846;
          result[4] += 82051417;
          result[5] += 4526974;
        } else {
          result[0] += 101509011;
          result[1] += 1108378;
          result[2] += 4525879;
          result[3] += 12469259;
          result[4] += 9236488;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 140022917;
          result[2] += 0;
          result[3] += 1047552;
          result[4] += 1745921;
          result[5] += 349184;
        } else {
          result[0] += 53687091;
          result[1] += 35791394;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 8259552;
          result[1] += 11012736;
          result[2] += 5506368;
          result[3] += 35791394;
          result[4] += 8259552;
          result[5] += 74335972;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9651611;
          result[3] += 98124720;
          result[4] += 6434407;
          result[5] += 28954835;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 2236962;
          result[2] += 2236962;
          result[3] += 24606583;
          result[4] += 17895697;
          result[5] += 96189371;
        } else {
          result[0] += 1431655;
          result[1] += 1431655;
          result[2] += 100215903;
          result[3] += 24338148;
          result[4] += 4294967;
          result[5] += 11453246;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 104184850;
          result[3] += 36145764;
          result[4] += 0;
          result[5] += 2834961;
        } else {
          result[0] += 3046076;
          result[1] += 0;
          result[2] += 132504310;
          result[3] += 7615190;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 92035013;
          result[1] += 0;
          result[2] += 51130563;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 822790;
          result[1] += 0;
          result[2] += 137406041;
          result[3] += 4113953;
          result[4] += 0;
          result[5] += 822790;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 131235111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11930464;
          result[5] += 0;
        } else {
          result[0] += 1092866;
          result[1] += 2732167;
          result[2] += 0;
          result[3] += 0;
          result[4] += 132783340;
          result[5] += 6557201;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 119949537;
          result[1] += 967334;
          result[2] += 0;
          result[3] += 4836674;
          result[4] += 10640684;
          result[5] += 6771344;
        } else {
          result[0] += 3028726;
          result[1] += 1048405;
          result[2] += 116489;
          result[3] += 16425017;
          result[4] += 10484053;
          result[5] += 112062884;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 6507526;
          result[1] += 52060209;
          result[2] += 0;
          result[3] += 13015052;
          result[4] += 71582788;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 142839459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 326117;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 114318781;
          result[1] += 5816843;
          result[2] += 949688;
          result[3] += 4392310;
          result[4] += 14007908;
          result[5] += 3680043;
        } else {
          result[0] += 23390432;
          result[1] += 2419699;
          result[2] += 27019982;
          result[3] += 51620264;
          result[4] += 8065666;
          result[5] += 30649531;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 11930464;
          result[3] += 17895697;
          result[4] += 77548020;
          result[5] += 17895697;
        } else {
          result[0] += 3976821;
          result[1] += 5965232;
          result[2] += 9942053;
          result[3] += 49710269;
          result[4] += 11930464;
          result[5] += 61640734;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6224590;
          result[3] += 93368854;
          result[4] += 0;
          result[5] += 43572131;
        } else {
          result[0] += 2951867;
          result[1] += 0;
          result[2] += 87080092;
          result[3] += 44278013;
          result[4] += 0;
          result[5] += 8855602;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 40904450;
          result[1] += 0;
          result[2] += 40904450;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 40904450;
        } else {
          result[0] += 1209849;
          result[1] += 0;
          result[2] += 117355444;
          result[3] += 22583865;
          result[4] += 0;
          result[5] += 2016416;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 92035013;
          result[1] += 0;
          result[2] += 51130563;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 798321;
          result[1] += 0;
          result[2] += 138375650;
          result[3] += 3991605;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 1767476;
          result[1] += 1767476;
          result[2] += 0;
          result[3] += 0;
          result[4] += 128583897;
          result[5] += 11046726;
        } else {
          result[0] += 0;
          result[1] += 125985707;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 141931390;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1234186;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 92208337;
          result[2] += 0;
          result[3] += 0;
          result[4] += 48530703;
          result[5] += 2426535;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 4909439;
          result[1] += 0;
          result[2] += 158369;
          result[3] += 4592701;
          result[4] += 4117594;
          result[5] += 129387473;
        } else {
          result[0] += 8374588;
          result[1] += 5583058;
          result[2] += 1196369;
          result[3] += 66996704;
          result[4] += 3190319;
          result[5] += 57824536;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 117880405;
          result[1] += 2692402;
          result[2] += 936487;
          result[3] += 4682439;
          result[4] += 9716061;
          result[5] += 7257780;
        } else {
          result[0] += 27733645;
          result[1] += 3373010;
          result[2] += 31106656;
          result[3] += 41975247;
          result[4] += 7495579;
          result[5] += 31481435;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30563437;
          result[3] += 85255905;
          result[4] += 1608601;
          result[5] += 25737631;
        } else {
          result[0] += 11930464;
          result[1] += 0;
          result[2] += 83513252;
          result[3] += 19884107;
          result[4] += 0;
          result[5] += 27837750;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81808900;
          result[3] += 46017506;
          result[4] += 0;
          result[5] += 15339168;
        } else {
          result[0] += 6410398;
          result[1] += 0;
          result[2] += 127139579;
          result[3] += 9615598;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 107374182;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 107374182;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 594048;
          result[1] += 0;
          result[2] += 135640968;
          result[3] += 6534528;
          result[4] += 0;
          result[5] += 396032;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 141481275;
          result[5] += 1684300;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82187645;
          result[5] += 60977930;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3512239;
          result[1] += 836247;
          result[2] += 1003497;
          result[3] += 5686483;
          result[4] += 10871217;
          result[5] += 121255891;
        } else {
          result[0] += 4700959;
          result[1] += 1282079;
          result[2] += 854719;
          result[3] += 67095508;
          result[4] += 7265118;
          result[5] += 61967189;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 323172;
          result[1] += 142196057;
          result[2] += 0;
          result[3] += 323172;
          result[4] += 323172;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 111107347;
          result[1] += 7622966;
          result[2] += 730969;
          result[3] += 2297332;
          result[4] += 17125568;
          result[5] += 4281392;
        } else {
          result[0] += 22128012;
          result[1] += 8264679;
          result[2] += 30925897;
          result[3] += 41856602;
          result[4] += 10397499;
          result[5] += 29592884;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3253763;
          result[3] += 19522578;
          result[4] += 3253763;
          result[5] += 117135471;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 95443717;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27152092;
          result[3] += 91329764;
          result[4] += 0;
          result[5] += 24683720;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 124076832;
          result[3] += 0;
          result[4] += 0;
          result[5] += 19088743;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41564199;
          result[3] += 96983132;
          result[4] += 0;
          result[5] += 4618244;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 103865222;
          result[3] += 32282433;
          result[4] += 0;
          result[5] += 7017920;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 9089877;
          result[1] += 9089877;
          result[2] += 97716187;
          result[3] += 0;
          result[4] += 4544938;
          result[5] += 22724694;
        } else {
          result[0] += 578836;
          result[1] += 192945;
          result[2] += 134483028;
          result[3] += 7717820;
          result[4] += 0;
          result[5] += 192945;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1307448;
          result[2] += 0;
          result[3] += 653724;
          result[4] += 139243231;
          result[5] += 1961172;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41564199;
          result[5] += 101601376;
        } else {
          result[0] += 0;
          result[1] += 93798136;
          result[2] += 0;
          result[3] += 29620464;
          result[4] += 0;
          result[5] += 19746976;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 43145790;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 70602202;
          result[5] += 29417584;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 174379;
          result[3] += 7149559;
          result[4] += 2964451;
          result[5] += 132877185;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 20557108;
          result[1] += 0;
          result[2] += 2202547;
          result[3] += 19822925;
          result[4] += 11746919;
          result[5] += 88836075;
        } else {
          result[0] += 3146496;
          result[1] += 0;
          result[2] += 6292992;
          result[3] += 106980870;
          result[4] += 786624;
          result[5] += 25958593;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 119304647;
          result[5] += 0;
        } else {
          result[0] += 927638;
          result[1] += 140691873;
          result[2] += 0;
          result[3] += 309212;
          result[4] += 927638;
          result[5] += 309212;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 21888951;
          result[1] += 35495597;
          result[2] += 4141153;
          result[3] += 591593;
          result[4] += 73949161;
          result[5] += 7099119;
        } else {
          result[0] += 109627520;
          result[1] += 1048064;
          result[2] += 2620160;
          result[3] += 7650869;
          result[4] += 9432578;
          result[5] += 12786383;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31122951;
          result[3] += 87144263;
          result[4] += 0;
          result[5] += 24898361;
        } else {
          result[0] += 3253763;
          result[1] += 0;
          result[2] += 97612893;
          result[3] += 13015052;
          result[4] += 6507526;
          result[5] += 22776341;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          result[0] += 122713351;
          result[1] += 10226112;
          result[2] += 10226112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2111586;
          result[1] += 0;
          result[2] += 126835972;
          result[3] += 11121023;
          result[4] += 422317;
          result[5] += 2674676;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1331772;
          result[1] += 3995318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 133843166;
          result[5] += 3995318;
        } else {
          result[0] += 80222090;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40728138;
          result[5] += 22215348;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 183076;
          result[2] += 183076;
          result[3] += 2929218;
          result[4] += 7689199;
          result[5] += 132181005;
        } else {
          result[0] += 1004670;
          result[1] += 4018682;
          result[2] += 1255838;
          result[3] += 52242877;
          result[4] += 10800210;
          result[5] += 73843297;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42580000))) ) ) {
          result[0] += 637708;
          result[1] += 136788490;
          result[2] += 0;
          result[3] += 318854;
          result[4] += 5420522;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 27962026;
          result[2] += 3355443;
          result[3] += 3355443;
          result[4] += 100663295;
          result[5] += 7829367;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 58400215;
          result[1] += 3401954;
          result[2] += 17293267;
          result[3] += 27215634;
          result[4] += 10489359;
          result[5] += 26365145;
        } else {
          result[0] += 120825752;
          result[1] += 4222771;
          result[2] += 7219577;
          result[3] += 1634621;
          result[4] += 7219577;
          result[5] += 2043276;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 35791394;
          result[4] += 7158278;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22776341;
          result[3] += 110627945;
          result[4] += 0;
          result[5] += 9761289;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 88994817;
          result[3] += 38693399;
          result[4] += 0;
          result[5] += 15477359;
        } else {
          result[0] += 9236488;
          result[1] += 0;
          result[2] += 133929087;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 127258290;
          result[4] += 0;
          result[5] += 15907286;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 115001856;
          result[3] += 22687441;
          result[4] += 0;
          result[5] += 5476278;
        } else {
          result[0] += 1255838;
          result[1] += 0;
          result[2] += 136677078;
          result[3] += 4814047;
          result[4] += 0;
          result[5] += 418612;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 622459;
          result[1] += 1867377;
          result[2] += 0;
          result[3] += 0;
          result[4] += 133828691;
          result[5] += 6847049;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 1812222;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 67052232;
          result[5] += 74301121;
        } else {
          result[0] += 121140103;
          result[1] += 16519104;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5506368;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 95443717;
          result[5] += 47721858;
        } else {
          result[0] += 353059;
          result[1] += 353059;
          result[2] += 176529;
          result[3] += 5472420;
          result[4] += 3883653;
          result[5] += 132926854;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 1514979;
          result[2] += 2272469;
          result[3] += 31814572;
          result[4] += 10604857;
          result[5] += 96958697;
        } else {
          result[0] += 867670;
          result[1] += 0;
          result[2] += 0;
          result[3] += 93708377;
          result[4] += 0;
          result[5] += 48589528;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 13542689;
          result[2] += 0;
          result[3] += 0;
          result[4] += 123818876;
          result[5] += 5804009;
        } else {
          result[0] += 289223;
          result[1] += 133331981;
          result[2] += 0;
          result[3] += 578446;
          result[4] += 8965924;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          result[0] += 31336671;
          result[1] += 1228889;
          result[2] += 12288890;
          result[3] += 36866672;
          result[4] += 23963336;
          result[5] += 37481116;
        } else {
          result[0] += 118307244;
          result[1] += 6329667;
          result[2] += 3107291;
          result[3] += 3452546;
          result[4] += 10587807;
          result[5] += 1381018;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 941878;
          result[2] += 33907636;
          result[3] += 82885333;
          result[4] += 4709393;
          result[5] += 20721333;
        } else {
          result[0] += 18889902;
          result[1] += 16901491;
          result[2] += 74565404;
          result[3] += 13918875;
          result[4] += 994205;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 95443717;
          result[4] += 0;
          result[5] += 39768215;
        } else {
          result[0] += 950214;
          result[1] += 0;
          result[2] += 130179318;
          result[3] += 9660509;
          result[4] += 0;
          result[5] += 2375535;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1847297;
          result[1] += 2770946;
          result[2] += 461824;
          result[3] += 923648;
          result[4] += 123307125;
          result[5] += 13854733;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 417392;
          result[1] += 417392;
          result[2] += 0;
          result[3] += 3756531;
          result[4] += 5634796;
          result[5] += 132939463;
        } else {
          result[0] += 8596547;
          result[1] += 330636;
          result[2] += 1322545;
          result[3] += 46289100;
          result[4] += 13225457;
          result[5] += 73401288;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 5843492;
          result[2] += 0;
          result[3] += 0;
          result[4] += 137322083;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 141701715;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1463860;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 121000921;
          result[1] += 2827124;
          result[2] += 565424;
          result[3] += 1922444;
          result[4] += 11082327;
          result[5] += 5767333;
        } else {
          result[0] += 27097585;
          result[1] += 3161384;
          result[2] += 22129694;
          result[3] += 40194751;
          result[4] += 6774396;
          result[5] += 43807763;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3491843;
          result[4] += 41902119;
          result[5] += 97771613;
        } else {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13015052;
          result[3] += 6507526;
          result[4] += 0;
          result[5] += 123642997;
        } else {
          result[0] += 701792;
          result[1] += 1403584;
          result[2] += 42107522;
          result[3] += 75091748;
          result[4] += 701792;
          result[5] += 23159137;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 19088743;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 111866219;
          result[3] += 28980885;
          result[4] += 0;
          result[5] += 2318470;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 68931573;
          result[1] += 0;
          result[2] += 68931573;
          result[3] += 5302428;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 613566;
          result[1] += 0;
          result[2] += 137029908;
          result[3] += 5317578;
          result[4] += 0;
          result[5] += 204522;
        }
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
