
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
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1289779;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 282461813;
          result[5] += 2579559;
        } else {
          result[0] += 139541131;
          result[1] += 14497779;
          result[2] += 1812222;
          result[3] += 7248889;
          result[4] += 39868894;
          result[5] += 83362234;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 636999;
          result[2] += 636999;
          result[3] += 13058484;
          result[4] += 17835978;
          result[5] += 254162691;
        } else {
          result[0] += 1001157;
          result[1] += 0;
          result[2] += 3003473;
          result[3] += 161186418;
          result[4] += 8009263;
          result[5] += 113130840;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          result[0] += 21633909;
          result[1] += 100534049;
          result[2] += 0;
          result[3] += 3817748;
          result[4] += 153982531;
          result[5] += 6362914;
        } else {
          result[0] += 220193805;
          result[1] += 1188096;
          result[2] += 17425409;
          result[3] += 18217473;
          result[4] += 14059136;
          result[5] += 15247232;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 284888678;
          result[2] += 0;
          result[3] += 721237;
          result[4] += 721237;
          result[5] += 0;
        } else {
          result[0] += 229064922;
          result[1] += 57266230;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 18673770;
          result[4] += 12449180;
          result[5] += 255208201;
        } else {
          result[0] += 0;
          result[1] += 9236488;
          result[2] += 0;
          result[3] += 120074354;
          result[4] += 0;
          result[5] += 157020309;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 10450042;
          result[2] += 117040471;
          result[3] += 100320403;
          result[4] += 6270025;
          result[5] += 52250210;
        } else {
          result[0] += 79536431;
          result[1] += 31814572;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31814572;
          result[5] += 143165576;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 4521018;
          result[1] += 0;
          result[2] += 238106958;
          result[3] += 39935660;
          result[4] += 0;
          result[5] += 3767515;
        } else {
          result[0] += 232644061;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 89989790;
          result[1] += 0;
          result[2] += 188160471;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8180890;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 277059477;
          result[3] += 9271675;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 7535030;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 244888486;
          result[5] += 33907636;
        } else {
          result[0] += 145024869;
          result[1] += 29748691;
          result[2] += 0;
          result[3] += 0;
          result[4] += 104120419;
          result[5] += 7437172;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 2733471;
          result[2] += 1025051;
          result[3] += 15034093;
          result[4] += 22551140;
          result[5] += 244987394;
        } else {
          result[0] += 4919779;
          result[1] += 1967911;
          result[2] += 3935823;
          result[3] += 127914260;
          result[4] += 4919779;
          result[5] += 142673598;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 282729503;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3601649;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 16044418;
          result[1] += 64177672;
          result[2] += 2468372;
          result[3] += 7405116;
          result[4] += 182659528;
          result[5] += 13576046;
        } else {
          result[0] += 221415642;
          result[1] += 5788644;
          result[2] += 7235805;
          result[3] += 16538983;
          result[4] += 16952458;
          result[5] += 18399619;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24898361;
          result[3] += 49796722;
          result[4] += 0;
          result[5] += 211636069;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44313154;
          result[3] += 202817900;
          result[4] += 0;
          result[5] += 39200098;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 71582788;
        } else {
          result[0] += 6658864;
          result[1] += 3329432;
          result[2] += 189777624;
          result[3] += 36623752;
          result[4] += 0;
          result[5] += 49941480;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53024287;
          result[3] += 95443717;
          result[4] += 0;
          result[5] += 137863147;
        } else {
          result[0] += 12236374;
          result[1] += 0;
          result[2] += 208018359;
          result[3] += 19578198;
          result[4] += 14683648;
          result[5] += 31814572;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 7383897;
          result[1] += 0;
          result[2] += 236284733;
          result[3] += 41842088;
          result[4] += 820433;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 280155383;
          result[3] += 5614336;
          result[4] += 0;
          result[5] += 561433;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 3624444;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 274249669;
          result[5] += 8457038;
        } else {
          result[0] += 135099910;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 90738745;
          result[5] += 60492497;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8483886;
          result[4] += 8059691;
          result[5] += 269787575;
        } else {
          result[0] += 1072401;
          result[1] += 1608601;
          result[2] += 2681003;
          result[3] += 110457336;
          result[4] += 32172039;
          result[5] += 138339770;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 222192974;
          result[1] += 18741675;
          result[2] += 1457685;
          result[3] += 6871947;
          result[4] += 32277329;
          result[5] += 4789539;
        } else {
          result[0] += 41214332;
          result[1] += 5061409;
          result[2] += 73751963;
          result[3] += 58567735;
          result[4] += 31814572;
          result[5] += 75921139;
        }
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
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 13015052;
          result[2] += 17353403;
          result[3] += 91105366;
          result[4] += 47721858;
          result[5] += 117135471;
        } else {
          result[0] += 3217203;
          result[1] += 0;
          result[2] += 180163422;
          result[3] += 67561283;
          result[4] += 0;
          result[5] += 35389243;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 36709122;
          result[1] += 0;
          result[2] += 117469190;
          result[3] += 124811015;
          result[4] += 0;
          result[5] += 7341824;
        } else {
          result[0] += 10845877;
          result[1] += 4338350;
          result[2] += 221255890;
          result[3] += 43383508;
          result[4] += 0;
          result[5] += 6507526;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 286331153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 286331153;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 982268;
          result[1] += 0;
          result[2] += 275526203;
          result[3] += 9822681;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 4832593;
          result[2] += 2416296;
          result[3] += 2416296;
          result[4] += 271833373;
          result[5] += 4832593;
        } else {
          result[0] += 0;
          result[1] += 177252618;
          result[2] += 0;
          result[3] += 74991492;
          result[4] += 34087042;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
          result[0] += 727652;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12370087;
          result[4] += 12006261;
          result[5] += 261227151;
        } else {
          result[0] += 29759136;
          result[1] += 1608601;
          result[2] += 4021504;
          result[3] += 82843002;
          result[4] += 45845156;
          result[5] += 122253750;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 223515869;
          result[1] += 20198554;
          result[2] += 665886;
          result[3] += 5105129;
          result[4] += 31740585;
          result[5] += 5105129;
        } else {
          result[0] += 38637456;
          result[1] += 15868955;
          result[2] += 36567593;
          result[3] += 68995458;
          result[4] += 22078546;
          result[5] += 104183142;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 283503190;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2120971;
          result[5] += 706990;
        } else {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36442146;
          result[3] += 130150524;
          result[4] += 19088743;
          result[5] += 100649738;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 89286058;
          result[3] += 166256798;
          result[4] += 3078829;
          result[5] += 27709466;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 219986129;
          result[3] += 62853179;
          result[4] += 0;
          result[5] += 3491843;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 92864157;
          result[1] += 0;
          result[2] += 92864157;
          result[3] += 0;
          result[4] += 23216039;
          result[5] += 77386798;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 211444543;
          result[3] += 61671325;
          result[4] += 0;
          result[5] += 13215283;
        } else {
          result[0] += 1896232;
          result[1] += 0;
          result[2] += 266231085;
          result[3] += 15169862;
          result[4] += 0;
          result[5] += 3033972;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1410498;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 277868163;
          result[5] += 7052491;
        } else {
          result[0] += 0;
          result[1] += 49796722;
          result[2] += 0;
          result[3] += 0;
          result[4] += 168063937;
          result[5] += 68470493;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 19802341;
          result[1] += 1070396;
          result[2] += 0;
          result[3] += 15520754;
          result[4] += 24351527;
          result[5] += 225586132;
        } else {
          result[0] += 987348;
          result[1] += 2962046;
          result[2] += 8886139;
          result[3] += 156988459;
          result[4] += 12835534;
          result[5] += 103671624;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 219399374;
          result[1] += 23308510;
          result[2] += 1710716;
          result[3] += 5773667;
          result[4] += 31862092;
          result[5] += 4276790;
        } else {
          result[0] += 43852518;
          result[1] += 10318239;
          result[2] += 71367824;
          result[3] += 61049585;
          result[4] += 15477359;
          result[5] += 84265624;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 122713351;
          result[1] += 163617801;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21609898;
          result[3] += 221501457;
          result[4] += 0;
          result[5] += 43219796;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 173843914;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 92035013;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 4994148;
          result[1] += 0;
          result[2] += 219742512;
          result[3] += 44947332;
          result[4] += 3329432;
          result[5] += 13317728;
        } else {
          result[0] += 171798691;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 14316557;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122713351;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 20452225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 248932798;
          result[3] += 35060957;
          result[4] += 0;
          result[5] += 2337397;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 57266230;
          result[1] += 0;
          result[2] += 114532461;
          result[3] += 0;
          result[4] += 0;
          result[5] += 114532461;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 276853292;
          result[3] += 9477860;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 16843009;
          result[2] += 0;
          result[3] += 2245734;
          result[4] += 262750940;
          result[5] += 4491469;
        } else {
          result[0] += 154773596;
          result[1] += 5159119;
          result[2] += 0;
          result[3] += 10318239;
          result[4] += 65778778;
          result[5] += 50301418;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 419225;
          result[2] += 419225;
          result[3] += 8803739;
          result[4] += 15930576;
          result[5] += 260758385;
        } else {
          result[0] += 4180016;
          result[1] += 3483347;
          result[2] += 1393338;
          result[3] += 74543633;
          result[4] += 50160201;
          result[5] += 152570614;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 285011654;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1319498;
          result[5] += 0;
        } else {
          result[0] += 19522578;
          result[1] += 130150524;
          result[2] += 3253763;
          result[3] += 9761289;
          result[4] += 123642997;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 247931056;
          result[1] += 12800032;
          result[2] += 0;
          result[3] += 3617400;
          result[4] += 16417432;
          result[5] += 5565231;
        } else {
          result[0] += 45393963;
          result[1] += 1496504;
          result[2] += 57864832;
          result[3] += 107249473;
          result[4] += 6484851;
          result[5] += 67841527;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15070060;
          result[4] += 52745212;
          result[5] += 218515879;
        } else {
          result[0] += 0;
          result[1] += 20452225;
          result[2] += 40904450;
          result[3] += 122713351;
          result[4] += 6817408;
          result[5] += 95443717;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
          result[0] += 95443717;
          result[1] += 167026505;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 0;
        } else {
          result[0] += 10845877;
          result[1] += 2169175;
          result[2] += 171364856;
          result[3] += 69413612;
          result[4] += 0;
          result[5] += 32537631;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26030104;
          result[3] += 104120419;
          result[4] += 26030104;
          result[5] += 130150524;
        } else {
          result[0] += 941878;
          result[1] += 0;
          result[2] += 236411576;
          result[3] += 46152060;
          result[4] += 0;
          result[5] += 2825636;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 248383650;
          result[3] += 34497729;
          result[4] += 0;
          result[5] += 3449772;
        } else {
          result[0] += 563644;
          result[1] += 0;
          result[2] += 280131068;
          result[3] += 5636440;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 283642597;
          result[5] += 2688555;
        } else {
          result[0] += 13474407;
          result[1] += 6737203;
          result[2] += 0;
          result[3] += 3368601;
          result[4] += 192010302;
          result[5] += 70740637;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 208240838;
          result[1] += 5206020;
          result[2] += 0;
          result[3] += 5206020;
          result[4] += 52060209;
          result[5] += 15618062;
        } else {
          result[0] += 307222;
          result[1] += 921666;
          result[2] += 614444;
          result[3] += 18740558;
          result[4] += 18126113;
          result[5] += 247621147;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 221906643;
          result[1] += 15158708;
          result[2] += 3158064;
          result[3] += 9474192;
          result[4] += 26738276;
          result[5] += 9895267;
        } else {
          result[0] += 44417020;
          result[1] += 5552127;
          result[2] += 38864893;
          result[3] += 107869908;
          result[4] += 17449543;
          result[5] += 72177659;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 52060209;
          result[1] += 234270943;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 19611722;
          result[2] += 5883516;
          result[3] += 74524546;
          result[4] += 11767033;
          result[5] += 174544332;
        } else {
          result[0] += 2921746;
          result[1] += 0;
          result[2] += 35060957;
          result[3] += 160696055;
          result[4] += 0;
          result[5] += 87652393;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 190887435;
          result[4] += 0;
          result[5] += 95443717;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 217860659;
          result[3] += 68470493;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 19976592;
          result[1] += 6658864;
          result[2] += 176459896;
          result[3] += 43282616;
          result[4] += 16647160;
          result[5] += 23306024;
        } else {
          result[0] += 193694603;
          result[1] += 0;
          result[2] += 50529027;
          result[3] += 33686018;
          result[4] += 8421504;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 189694388;
          result[3] += 84109776;
          result[4] += 0;
          result[5] += 12526987;
        } else {
          result[0] += 1081855;
          result[1] += 0;
          result[2] += 270824554;
          result[3] += 14064124;
          result[4] += 0;
          result[5] += 360618;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 5253782;
          result[2] += 0;
          result[3] += 0;
          result[4] += 278450479;
          result[5] += 2626891;
        } else {
          result[0] += 151346466;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 3067833;
          result[4] += 68514954;
          result[5] += 59311453;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 713153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10697303;
          result[4] += 21038029;
          result[5] += 253882666;
        } else {
          result[0] += 6526066;
          result[1] += 26104264;
          result[2] += 2447274;
          result[3] += 79128552;
          result[4] += 20393956;
          result[5] += 151731038;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 284847571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1483581;
          result[5] += 0;
        } else {
          result[0] += 20636479;
          result[1] += 116080197;
          result[2] += 0;
          result[3] += 0;
          result[4] += 147034916;
          result[5] += 2579559;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 241493582;
          result[1] += 4457536;
          result[2] += 2622080;
          result[3] += 12585984;
          result[4] += 14421440;
          result[5] += 10750528;
        } else {
          result[0] += 77815590;
          result[1] += 5288438;
          result[2] += 53639872;
          result[3] += 95191887;
          result[4] += 15865314;
          result[5] += 38530049;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 7158278;
          result[3] += 35791394;
          result[4] += 78741067;
          result[5] += 150323855;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 224974477;
          result[4] += 0;
          result[5] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 104472177;
          result[3] += 112210857;
          result[4] += 0;
          result[5] += 69648118;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 27934746;
          result[1] += 27934746;
          result[2] += 20951059;
          result[3] += 6983686;
          result[4] += 83804239;
          result[5] += 118722673;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 161235018;
          result[3] += 94517079;
          result[4] += 0;
          result[5] += 30579055;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 174980149;
          result[1] += 0;
          result[2] += 111351003;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1706383;
          result[1] += 0;
          result[2] += 259029016;
          result[3] += 23548092;
          result[4] += 682553;
          result[5] += 1365106;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 272565232;
          result[5] += 13765920;
        } else {
          result[0] += 0;
          result[1] += 204522252;
          result[2] += 0;
          result[3] += 0;
          result[4] += 61356675;
          result[5] += 20452225;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 200086829;
          result[1] += 0;
          result[2] += 17248864;
          result[3] += 0;
          result[4] += 68995458;
          result[5] += 0;
        } else {
          result[0] += 489873;
          result[1] += 244936;
          result[2] += 1714557;
          result[3] += 40904450;
          result[4] += 14206336;
          result[5] += 228770998;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 229064922;
          result[2] += 0;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 222630993;
          result[1] += 11078288;
          result[2] += 1065220;
          result[3] += 8734804;
          result[4] += 38347922;
          result[5] += 4473924;
        } else {
          result[0] += 62071788;
          result[1] += 2002315;
          result[2] += 48055578;
          result[3] += 71082209;
          result[4] += 24027789;
          result[5] += 79091472;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5843492;
          result[1] += 35060957;
          result[2] += 14608732;
          result[3] += 43826196;
          result[4] += 37982703;
          result[5] += 149009069;
        } else {
          result[0] += 2386092;
          result[1] += 0;
          result[2] += 31019208;
          result[3] += 186115249;
          result[4] += 0;
          result[5] += 66810602;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 147034916;
          result[3] += 100602837;
          result[4] += 3869339;
          result[5] += 34824059;
        } else {
          result[0] += 27709466;
          result[1] += 0;
          result[2] += 258621686;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 178956970;
          result[4] += 0;
          result[5] += 107374182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 199104444;
          result[3] += 72056846;
          result[4] += 1896232;
          result[5] += 13273629;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 3689834;
          result[1] += 0;
          result[2] += 264192146;
          result[3] += 16235271;
          result[4] += 0;
          result[5] += 2213900;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5506368;
          result[3] += 5506368;
          result[4] += 225761101;
          result[5] += 49557314;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15907286;
          result[3] += 0;
          result[4] += 222702007;
          result[5] += 47721858;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3000476;
          result[4] += 5572312;
          result[5] += 277758363;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 23270729;
          result[1] += 16188333;
          result[2] += 0;
          result[3] += 34400209;
          result[4] += 44517917;
          result[5] += 167953962;
        } else {
          result[0] += 1581940;
          result[1] += 0;
          result[2] += 30056861;
          result[3] += 151866246;
          result[4] += 6327760;
          result[5] += 96498344;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 9236488;
          result[1] += 64655421;
          result[2] += 0;
          result[3] += 32327710;
          result[4] += 170875042;
          result[5] += 9236488;
        } else {
          result[0] += 2638996;
          result[1] += 281053159;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2638996;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 232038621;
          result[1] += 6082565;
          result[2] += 1351681;
          result[3] += 6983686;
          result[4] += 27934746;
          result[5] += 11939851;
        } else {
          result[0] += 71843089;
          result[1] += 19782879;
          result[2] += 23947696;
          result[3] += 79131518;
          result[4] += 30194921;
          result[5] += 61431047;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1278264;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 112487238;
          result[4] += 6391320;
          result[5] += 130382935;
        } else {
          result[0] += 0;
          result[1] += 6607641;
          result[2] += 191621617;
          result[3] += 63873872;
          result[4] += 0;
          result[5] += 24228020;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 68719476;
          result[1] += 41995235;
          result[2] += 83990471;
          result[3] += 22906492;
          result[4] += 26724240;
          result[5] += 41995235;
        } else {
          result[0] += 3078829;
          result[1] += 0;
          result[2] += 260468984;
          result[3] += 21551807;
          result[4] += 0;
          result[5] += 1231531;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 278592473;
          result[5] += 7738679;
        } else {
          result[0] += 88861392;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 92152554;
          result[5] += 105317205;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 1628732;
          result[2] += 0;
          result[3] += 11726873;
          result[4] += 14007098;
          result[5] += 258968448;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2228258;
          result[3] += 162662834;
          result[4] += 3342387;
          result[5] += 118097674;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 57947971;
          result[2] += 0;
          result[3] += 0;
          result[4] += 221565773;
          result[5] += 6817408;
        } else {
          result[0] += 678509;
          result[1] += 280903074;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4749568;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 238249942;
          result[1] += 9271264;
          result[2] += 1293664;
          result[3] += 6683935;
          result[4] += 24579632;
          result[5] += 6252713;
        } else {
          result[0] += 45272071;
          result[1] += 4703591;
          result[2] += 55267204;
          result[3] += 75257469;
          result[4] += 27045653;
          result[5] += 78785163;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 250539758;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37817322;
          result[3] += 226903932;
          result[4] += 0;
          result[5] += 21609898;
        } else {
          result[0] += 18673770;
          result[1] += 0;
          result[2] += 174288527;
          result[3] += 43572131;
          result[4] += 24898361;
          result[5] += 24898361;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 208240838;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 78090314;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 175648522;
          result[3] += 79402756;
          result[4] += 2406144;
          result[5] += 28873729;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 3491843;
          result[1] += 0;
          result[2] += 225223894;
          result[3] += 48885806;
          result[4] += 0;
          result[5] += 8729608;
        } else {
          result[0] += 2659422;
          result[1] += 0;
          result[2] += 273920514;
          result[3] += 9751215;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 2396076;
          result[1] += 3594114;
          result[2] += 0;
          result[3] += 0;
          result[4] += 273152731;
          result[5] += 7188229;
        } else {
          result[0] += 122713351;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 76354974;
          result[5] += 87262827;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 287481;
          result[1] += 2012367;
          result[2] += 287481;
          result[3] += 22423524;
          result[4] += 14374053;
          result[5] += 246946245;
        } else {
          result[0] += 1724886;
          result[1] += 1724886;
          result[2] += 5174659;
          result[3] += 188012624;
          result[4] += 6899545;
          result[5] += 82794550;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 86565232;
          result[2] += 0;
          result[3] += 0;
          result[4] += 193107056;
          result[5] += 6658864;
        } else {
          result[0] += 0;
          result[1] += 281229484;
          result[2] += 1275417;
          result[3] += 0;
          result[4] += 3826251;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 230183221;
          result[1] += 9086179;
          result[2] += 3028726;
          result[3] += 7688305;
          result[4] += 33548971;
          result[5] += 2795747;
        } else {
          result[0] += 66128861;
          result[1] += 8862630;
          result[2] += 55902748;
          result[3] += 69537565;
          result[4] += 23860929;
          result[5] += 62038416;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 20452225;
          result[2] += 81808900;
          result[3] += 122713351;
          result[4] += 40904450;
          result[5] += 20452225;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22906492;
          result[5] += 263424660;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37551626;
          result[3] += 197146039;
          result[4] += 0;
          result[5] += 51633486;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 131557556;
          result[3] += 92864157;
          result[4] += 0;
          result[5] += 61909438;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 23860929;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 119304647;
        } else {
          result[0] += 5726623;
          result[1] += 2863311;
          result[2] += 160345445;
          result[3] += 91625968;
          result[4] += 2863311;
          result[5] += 22906492;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2669754;
          result[1] += 0;
          result[2] += 238275574;
          result[3] += 33371929;
          result[4] += 1334877;
          result[5] += 10679017;
        } else {
          result[0] += 571519;
          result[1] += 0;
          result[2] += 278329883;
          result[3] += 6286711;
          result[4] += 0;
          result[5] += 1143038;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 1088711;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 275444036;
          result[5] += 9798404;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 278989328;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7341824;
          result[5] += 0;
        } else {
          result[0] += 21609898;
          result[1] += 5402474;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27012372;
          result[5] += 232306407;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4823342;
          result[4] += 3946371;
          result[5] += 277561439;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 2511676;
          result[2] += 2511676;
          result[3] += 36419313;
          result[4] += 32651798;
          result[5] += 212236687;
        } else {
          result[0] += 0;
          result[1] += 9721119;
          result[2] += 8837381;
          result[3] += 139630623;
          result[4] += 13256071;
          result[5] += 114885956;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 48456041;
          result[2] += 0;
          result[3] += 0;
          result[4] += 237875111;
          result[5] += 0;
        } else {
          result[0] += 641998;
          result[1] += 283763160;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1925994;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 224781227;
          result[1] += 9018304;
          result[2] += 2029118;
          result[3] += 10596507;
          result[4] += 31564064;
          result[5] += 8341931;
        } else {
          result[0] += 51581715;
          result[1] += 1052688;
          result[2] += 29475265;
          result[3] += 73688164;
          result[4] += 26317201;
          result[5] += 104216118;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22025473;
          result[3] += 0;
          result[4] += 121140103;
          result[5] += 143165576;
        } else {
          result[0] += 7158278;
          result[1] += 11453246;
          result[2] += 93057624;
          result[3] += 124554051;
          result[4] += 4294967;
          result[5] += 45812984;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 254516580;
          result[1] += 0;
          result[2] += 31814572;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 5096994;
          result[1] += 0;
          result[2] += 258747418;
          result[3] += 20387977;
          result[4] += 299823;
          result[5] += 1798939;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 1431655;
          result[2] += 0;
          result[3] += 0;
          result[4] += 277741218;
          result[5] += 7158278;
        } else {
          result[0] += 0;
          result[1] += 195910788;
          result[2] += 0;
          result[3] += 0;
          result[4] += 90420364;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 4168314;
          result[1] += 320639;
          result[2] += 4168314;
          result[3] += 8336629;
          result[4] += 13146223;
          result[5] += 256191031;
        } else {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 7158278;
          result[3] += 171798691;
          result[4] += 3579139;
          result[5] += 96636764;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 49796722;
          result[2] += 0;
          result[3] += 0;
          result[4] += 236534430;
          result[5] += 0;
        } else {
          result[0] += 678509;
          result[1] += 282938603;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2714039;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 196817183;
          result[1] += 8705375;
          result[2] += 3595698;
          result[3] += 14004299;
          result[4] += 41634404;
          result[5] += 21574191;
        } else {
          result[0] += 41415756;
          result[1] += 3067833;
          result[2] += 49596646;
          result[3] += 116066378;
          result[4] += 14827863;
          result[5] += 61356675;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14810232;
          result[4] += 24683720;
          result[5] += 246837200;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 113623473;
          result[3] += 106806065;
          result[4] += 0;
          result[5] += 65901614;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 2211051;
          result[1] += 0;
          result[2] += 224421714;
          result[3] += 56381810;
          result[4] += 0;
          result[5] += 3316577;
        } else {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 206533946;
          result[3] += 79797206;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 483667;
          result[1] += 0;
          result[2] += 278108805;
          result[3] += 5320342;
          result[4] += 0;
          result[5] += 2418337;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 240518168;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 45812984;
        } else {
          result[0] += 0;
          result[1] += 9916230;
          result[2] += 0;
          result[3] += 7437172;
          result[4] += 247905760;
          result[5] += 21071989;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
          result[0] += 409629;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13927409;
          result[4] += 10240742;
          result[5] += 261753371;
        } else {
          result[0] += 21501057;
          result[1] += 1573248;
          result[2] += 8390656;
          result[3] += 88101893;
          result[4] += 25171969;
          result[5] += 141592328;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 238609294;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 211819759;
          result[1] += 8641785;
          result[2] += 1152238;
          result[3] += 11138301;
          result[4] += 41864648;
          result[5] += 11714420;
        } else {
          result[0] += 42562738;
          result[1] += 10834151;
          result[2] += 91316421;
          result[3] += 73517458;
          result[4] += 10060283;
          result[5] += 58040098;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 204522252;
          result[5] += 81808900;
        } else {
          result[0] += 0;
          result[1] += 30954719;
          result[2] += 23216039;
          result[3] += 7738679;
          result[4] += 0;
          result[5] += 224421714;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 62992853;
          result[3] += 160345445;
          result[4] += 0;
          result[5] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 262470223;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 5113056;
          result[1] += 7669584;
          result[2] += 140609048;
          result[3] += 104817654;
          result[4] += 5113056;
          result[5] += 23008753;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 270423866;
          result[3] += 15907286;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3158064;
          result[1] += 0;
          result[2] += 247381694;
          result[3] += 32633329;
          result[4] += 1052688;
          result[5] += 2105376;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 278845371;
          result[3] += 6861966;
          result[4] += 0;
          result[5] += 623815;
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
