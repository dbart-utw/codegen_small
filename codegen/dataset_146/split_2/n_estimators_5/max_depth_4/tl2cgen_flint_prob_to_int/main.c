
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 9439488;
          result[1] += 14159232;
          result[2] += 0;
          result[3] += 0;
          result[4] += 825955249;
          result[5] += 9439488;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 624112435;
          result[5] += 234881023;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 24092588;
          result[1] += 926638;
          result[2] += 0;
          result[3] += 47258539;
          result[4] += 26872503;
          result[5] += 759843189;
        } else {
          result[0] += 37347541;
          result[1] += 84031968;
          result[2] += 15561475;
          result[3] += 367250826;
          result[4] += 43572131;
          result[5] += 311229514;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 450971565;
          result[2] += 0;
          result[3] += 0;
          result[4] += 408021893;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 854903013;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4090445;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 97507365;
          result[1] += 176441899;
          result[2] += 0;
          result[3] += 0;
          result[4] += 571114570;
          result[5] += 13929623;
        } else {
          result[0] += 649587093;
          result[1] += 4884113;
          result[2] += 28694166;
          result[3] += 50062163;
          result[4] += 52504219;
          result[5] += 73261702;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 248656001;
          result[4] += 0;
          result[5] += 610337457;
        } else {
          result[0] += 0;
          result[1] += 4032833;
          result[2] += 157280492;
          result[3] += 520235475;
          result[4] += 24196998;
          result[5] += 153247659;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 412316860;
          result[3] += 412316860;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 631308445;
          result[3] += 134541144;
          result[4] += 10349318;
          result[5] += 82794550;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 214748364;
          result[1] += 536870911;
          result[2] += 0;
          result[3] += 0;
          result[4] += 107374182;
          result[5] += 0;
        } else {
          result[0] += 61356675;
          result[1] += 0;
          result[2] += 490853405;
          result[3] += 184070026;
          result[4] += 30678337;
          result[5] += 92035013;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 511305630;
          result[1] += 40904450;
          result[2] += 265878927;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 20452225;
        } else {
          result[0] += 3158064;
          result[1] += 0;
          result[2] += 789516046;
          result[3] += 62108595;
          result[4] += 0;
          result[5] += 4210752;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 19884107;
          result[1] += 7953643;
          result[2] += 0;
          result[3] += 0;
          result[4] += 823202064;
          result[5] += 7953643;
        } else {
          result[0] += 707406378;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 101058054;
          result[5] += 50529027;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 1829592;
          result[2] += 0;
          result[3] += 39336228;
          result[4] += 58546945;
          result[5] += 759280693;
        } else {
          result[0] += 0;
          result[1] += 11415195;
          result[2] += 22830390;
          result[3] += 351017260;
          result[4] += 57075977;
          result[5] += 416654634;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 71882297;
          result[1] += 345035029;
          result[2] += 14376459;
          result[3] += 32347034;
          result[4] += 373787948;
          result[5] += 21564689;
        } else {
          result[0] += 662305204;
          result[1] += 20033063;
          result[2] += 14569500;
          result[3] += 60706251;
          result[4] += 45529688;
          result[5] += 55849751;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 854167653;
          result[2] += 0;
          result[3] += 2412902;
          result[4] += 2412902;
          result[5] += 0;
        } else {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 858993459;
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122713351;
          result[3] += 549542399;
          result[4] += 0;
          result[5] += 186737708;
        } else {
          result[0] += 0;
          result[1] += 21746669;
          result[2] += 521920076;
          result[3] += 217466698;
          result[4] += 0;
          result[5] += 97860014;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 353703189;
          result[1] += 0;
          result[2] += 252645135;
          result[3] += 151587081;
          result[4] += 0;
          result[5] += 101058054;
        } else {
          result[0] += 10250518;
          result[1] += 0;
          result[2] += 733937132;
          result[3] += 100455082;
          result[4] += 0;
          result[5] += 14350726;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 18472977;
          result[1] += 0;
          result[2] += 720446126;
          result[3] += 120074354;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6620373;
          result[1] += 0;
          result[2] += 835822151;
          result[3] += 14895840;
          result[4] += 0;
          result[5] += 1655093;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 707406378;
          result[2] += 0;
          result[3] += 0;
          result[4] += 151587081;
          result[5] += 0;
        } else {
          result[0] += 2931718;
          result[1] += 2931718;
          result[2] += 0;
          result[3] += 0;
          result[4] += 791563938;
          result[5] += 61566084;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6955412;
          result[3] += 16229296;
          result[4] += 25503179;
          result[5] += 810305570;
        } else {
          result[0] += 76354974;
          result[1] += 6941361;
          result[2] += 19088743;
          result[3] += 289801833;
          result[4] += 59001570;
          result[5] += 407804975;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
        } else {
          result[0] += 1993024;
          result[1] += 857000434;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 669656153;
          result[1] += 53811655;
          result[2] += 1993024;
          result[3] += 17272876;
          result[4] += 95000823;
          result[5] += 21258925;
        } else {
          result[0] += 194823258;
          result[1] += 4427801;
          result[2] += 148331344;
          result[3] += 214748364;
          result[4] += 70844821;
          result[5] += 225817868;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 704815145;
          result[4] += 0;
          result[5] += 154178313;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 236534430;
          result[3] += 261432791;
          result[4] += 12449180;
          result[5] += 348577055;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 204522252;
          result[3] += 0;
          result[4] += 0;
          result[5] += 654471206;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 787410670;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 156180628;
          result[2] += 0;
          result[3] += 234270943;
          result[4] += 0;
          result[5] += 468541886;
        } else {
          result[0] += 0;
          result[1] += 8533047;
          result[2] += 642822919;
          result[3] += 193415745;
          result[4] += 0;
          result[5] += 14221746;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 429496729;
          result[4] += 0;
          result[5] += 429496729;
        } else {
          result[0] += 9873488;
          result[1] += 2468372;
          result[2] += 804689274;
          result[3] += 29620464;
          result[4] += 4936744;
          result[5] += 7405116;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 7738679;
          result[2] += 0;
          result[3] += 0;
          result[4] += 847385439;
          result[5] += 3869339;
        } else {
          result[0] += 278265486;
          result[1] += 66541746;
          result[2] += 0;
          result[3] += 66541746;
          result[4] += 223822239;
          result[5] += 223822239;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 2773929;
          result[2] += 924643;
          result[3] += 27739293;
          result[4] += 80443951;
          result[5] += 747111641;
        } else {
          result[0] += 5318844;
          result[1] += 0;
          result[2] += 29253647;
          result[3] += 462739510;
          result[4] += 10637689;
          result[5] += 351043766;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 422217123;
          result[2] += 0;
          result[3] += 43677633;
          result[4] += 393098701;
          result[5] += 0;
        } else {
          result[0] += 2180186;
          result[1] += 848092526;
          result[2] += 0;
          result[3] += 6540559;
          result[4] += 2180186;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 650890137;
          result[1] += 40842707;
          result[2] += 1944890;
          result[3] += 21393799;
          result[4] += 99189433;
          result[5] += 44732489;
        } else {
          result[0] += 238968105;
          result[1] += 23681523;
          result[2] += 165770667;
          result[3] += 228203776;
          result[4] += 36598718;
          result[5] += 165770667;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 715827882;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76354974;
          result[3] += 668106023;
          result[4] += 0;
          result[5] += 114532461;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 132152839;
          result[4] += 0;
          result[5] += 726840619;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 528611359;
          result[3] += 264305679;
          result[4] += 0;
          result[5] += 66076419;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 5765056;
          result[1] += 0;
          result[2] += 605330961;
          result[3] += 230602270;
          result[4] += 0;
          result[5] += 17295170;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 858993459;
        } else {
          result[0] += 9719869;
          result[1] += 0;
          result[2] += 820113981;
          result[3] += 26729640;
          result[4] += 0;
          result[5] += 2429967;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 28112513;
          result[2] += 0;
          result[3] += 24988900;
          result[4] += 752790631;
          result[5] += 53101413;
        } else {
          result[0] += 454761243;
          result[1] += 0;
          result[2] += 0;
          result[3] += 75793540;
          result[4] += 88425797;
          result[5] += 240012878;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1841357;
          result[1] += 2762036;
          result[2] += 2762036;
          result[3] += 55240736;
          result[4] += 50637342;
          result[5] += 745749948;
        } else {
          result[0] += 4521018;
          result[1] += 0;
          result[2] += 4521018;
          result[3] += 515396075;
          result[4] += 0;
          result[5] += 334555347;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 7601712;
          result[1] += 250856496;
          result[2] += 7601712;
          result[3] += 30406848;
          result[4] += 524518129;
          result[5] += 38008560;
        } else {
          result[0] += 8239745;
          result[1] += 848693777;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2059936;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 704374636;
          result[1] += 27487790;
          result[2] += 4810363;
          result[3] += 24739011;
          result[4] += 81088982;
          result[5] += 16492674;
        } else {
          result[0] += 225870790;
          result[1] += 13689138;
          result[2] += 177958804;
          result[3] += 201914797;
          result[4] += 75290263;
          result[5] += 164269665;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 35791394;
          result[1] += 85899345;
          result[2] += 85899345;
          result[3] += 114532461;
          result[4] += 85899345;
          result[5] += 450971565;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 166471600;
          result[3] += 486097073;
          result[4] += 13317728;
          result[5] += 193107056;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 22906492;
          result[1] += 0;
          result[2] += 664288274;
          result[3] += 160345445;
          result[4] += 0;
          result[5] += 11453246;
        } else {
          result[0] += 684510412;
          result[1] += 53687091;
          result[2] += 107374182;
          result[3] += 0;
          result[4] += 13421772;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 629928536;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 608453700;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 178956970;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 4090445;
          result[2] += 707646992;
          result[3] += 130894241;
          result[4] += 0;
          result[5] += 16361780;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 820928756;
          result[3] += 38064702;
          result[4] += 0;
          result[5] += 0;
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
