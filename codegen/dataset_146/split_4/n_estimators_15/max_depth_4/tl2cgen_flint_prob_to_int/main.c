
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 4450743;
          result[2] += 0;
          result[3] += 0;
          result[4] += 278913247;
          result[5] += 2967162;
        } else {
          result[0] += 0;
          result[1] += 11012736;
          result[2] += 0;
          result[3] += 0;
          result[4] += 115633734;
          result[5] += 159684681;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7466262;
          result[4] += 16425776;
          result[5] += 262439114;
        } else {
          result[0] += 20915877;
          result[1] += 3606185;
          result[2] += 1442474;
          result[3] += 97367016;
          result[4] += 27407012;
          result[5] += 135592586;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 51130563;
          result[2] += 0;
          result[3] += 10226112;
          result[4] += 173843914;
          result[5] += 51130563;
        } else {
          result[0] += 1855277;
          result[1] += 282002172;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2473703;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 104998475;
          result[1] += 11839590;
          result[2] += 34584067;
          result[3] += 55770703;
          result[4] += 42061703;
          result[5] += 37076612;
        } else {
          result[0] += 236520810;
          result[1] += 10651268;
          result[2] += 7205269;
          result[3] += 2819453;
          result[4] += 27881261;
          result[5] += 1253090;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22025473;
          result[3] += 22025473;
          result[4] += 14683648;
          result[5] += 227596557;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 15070060;
          result[2] += 30140121;
          result[3] += 165770667;
          result[4] += 0;
          result[5] += 75350303;
        } else {
          result[0] += 0;
          result[1] += 41442666;
          result[2] += 169538182;
          result[3] += 41442666;
          result[4] += 0;
          result[5] += 33907636;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 13563054;
          result[1] += 0;
          result[2] += 210980849;
          result[3] += 55759224;
          result[4] += 0;
          result[5] += 6028024;
        } else {
          result[0] += 198229259;
          result[1] += 0;
          result[2] += 44050946;
          result[3] += 22025473;
          result[4] += 22025473;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 8180890;
          result[1] += 0;
          result[2] += 224974477;
          result[3] += 53175785;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1307448;
          result[1] += 0;
          result[2] += 279793912;
          result[3] += 5229792;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 1295616;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1295616;
          result[4] += 269488144;
          result[5] += 14251776;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 828744;
          result[3] += 7044326;
          result[4] += 6629954;
          result[5] += 271828127;
        } else {
          result[0] += 25737631;
          result[1] += 13941217;
          result[2] += 1608601;
          result[3] += 95443717;
          result[4] += 18767023;
          result[5] += 130832961;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 47721858;
          result[2] += 0;
          result[3] += 23860929;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 1283996;
          result[1] += 279911171;
          result[2] += 1925994;
          result[3] += 1925994;
          result[4] += 1283996;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 37915997;
          result[1] += 60142616;
          result[2] += 0;
          result[3] += 2614896;
          result[4] += 181735298;
          result[5] += 3922344;
        } else {
          result[0] += 211787991;
          result[1] += 4464824;
          result[2] += 9123772;
          result[3] += 22518246;
          result[4] += 17859299;
          result[5] += 20577018;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26247022;
          result[3] += 169412598;
          result[4] += 0;
          result[5] += 90671531;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 201492292;
          result[3] += 74234002;
          result[4] += 0;
          result[5] += 10604857;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 160209097;
          result[3] += 85217605;
          result[4] += 0;
          result[5] += 40904450;
        } else {
          result[0] += 9439488;
          result[1] += 0;
          result[2] += 223401229;
          result[3] += 31464961;
          result[4] += 6292992;
          result[5] += 15732480;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 262470223;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 2654286;
          result[1] += 0;
          result[2] += 270405434;
          result[3] += 11280717;
          result[4] += 331785;
          result[5] += 1658929;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 224974477;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 61356675;
        } else {
          result[0] += 1114129;
          result[1] += 2228258;
          result[2] += 0;
          result[3] += 4456516;
          result[4] += 269619218;
          result[5] += 8913032;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2640735;
          result[3] += 8676701;
          result[4] += 12449180;
          result[5] += 262564535;
        } else {
          result[0] += 25869755;
          result[1] += 3527693;
          result[2] += 7055387;
          result[3] += 97599530;
          result[4] += 36452836;
          result[5] += 115825948;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 283797248;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2533904;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 124076832;
          result[2] += 0;
          result[3] += 0;
          result[4] += 162254320;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 222477961;
          result[1] += 18371795;
          result[2] += 1120231;
          result[3] += 7169481;
          result[4] += 34055035;
          result[5] += 3136647;
        } else {
          result[0] += 36669112;
          result[1] += 1560387;
          result[2] += 66316479;
          result[3] += 76458999;
          result[4] += 24966204;
          result[5] += 80359969;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 15907286;
          result[4] += 31814572;
          result[5] += 238609294;
        } else {
          result[0] += 7686742;
          result[1] += 5765056;
          result[2] += 57650567;
          result[3] += 147969790;
          result[4] += 7686742;
          result[5] += 59572253;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 202817900;
        } else {
          result[0] += 39434829;
          result[1] += 13716462;
          result[2] += 198888705;
          result[3] += 17145578;
          result[4] += 0;
          result[5] += 17145578;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 111351003;
          result[3] += 159072862;
          result[4] += 0;
          result[5] += 15907286;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 234107232;
          result[3] += 52223920;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 254068487;
          result[3] += 26213415;
          result[4] += 0;
          result[5] += 6049249;
        } else {
          result[0] += 1659890;
          result[1] += 0;
          result[2] += 283011371;
          result[3] += 1659890;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 238609294;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 0;
        } else {
          result[0] += 1060485;
          result[1] += 3181457;
          result[2] += 0;
          result[3] += 1060485;
          result[4] += 271484352;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9731516;
          result[4] += 8982938;
          result[5] += 267616698;
        } else {
          result[0] += 36279775;
          result[1] += 1116300;
          result[2] += 1116300;
          result[3] += 85955160;
          result[4] += 18977113;
          result[5] += 142886501;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 106672390;
          result[2] += 0;
          result[3] += 11228672;
          result[4] += 157201417;
          result[5] += 11228672;
        } else {
          result[0] += 655220;
          result[1] += 285675932;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 83063046;
          result[1] += 6753093;
          result[2] += 14856805;
          result[3] += 74959334;
          result[4] += 49297580;
          result[5] += 57401292;
        } else {
          result[0] += 215511042;
          result[1] += 11549125;
          result[2] += 13292389;
          result[3] += 11331217;
          result[4] += 24623607;
          result[5] += 10023769;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9873488;
          result[3] += 266584176;
          result[4] += 0;
          result[5] += 9873488;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 35791394;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 107374182;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 35791394;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 114532461;
          result[5] += 171798691;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 131712330;
          result[3] += 103079215;
          result[4] += 0;
          result[5] += 51539607;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3678772;
          result[1] += 0;
          result[2] += 260579743;
          result[3] += 19006993;
          result[4] += 0;
          result[5] += 3065644;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 7248889;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3624444;
          result[4] += 270625224;
          result[5] += 4832593;
        } else {
          result[0] += 0;
          result[1] += 124491805;
          result[2] += 0;
          result[3] += 49796722;
          result[4] += 0;
          result[5] += 112042625;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 4745820;
          result[1] += 0;
          result[2] += 949164;
          result[3] += 15819400;
          result[4] += 22463549;
          result[5] += 242353219;
        } else {
          result[0] += 22402437;
          result[1] += 3500380;
          result[2] += 10501142;
          result[3] += 120413101;
          result[4] += 15401675;
          result[5] += 114112415;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 88101893;
          result[2] += 0;
          result[3] += 0;
          result[4] += 198229259;
          result[5] += 0;
        } else {
          result[0] += 2090008;
          result[1] += 281454466;
          result[2] += 0;
          result[3] += 1393338;
          result[4] += 1393338;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 216468854;
          result[1] += 10635752;
          result[2] += 2293985;
          result[3] += 7924678;
          result[4] += 37329407;
          result[5] += 11678473;
        } else {
          result[0] += 43088668;
          result[1] += 13899570;
          result[2] += 71582788;
          result[3] += 82007466;
          result[4] += 24324248;
          result[5] += 51428410;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 214748364;
        } else {
          result[0] += 0;
          result[1] += 190887435;
          result[2] += 47721858;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 100467071;
          result[3] += 175817374;
          result[4] += 0;
          result[5] += 10046707;
        } else {
          result[0] += 0;
          result[1] += 5113056;
          result[2] += 189183083;
          result[3] += 51130563;
          result[4] += 0;
          result[5] += 40904450;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 71582788;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6040741;
          result[1] += 0;
          result[2] += 233172626;
          result[3] += 36244449;
          result[4] += 0;
          result[5] += 10873334;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 95443717;
          result[1] += 0;
          result[2] += 190887435;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 443924;
          result[1] += 0;
          result[2] += 277008743;
          result[3] += 8878485;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 2211051;
          result[1] += 8844205;
          result[2] += 0;
          result[3] += 0;
          result[4] += 246532228;
          result[5] += 28743667;
        } else {
          result[0] += 164288366;
          result[1] += 0;
          result[2] += 0;
          result[3] += 23469766;
          result[4] += 53980463;
          result[5] += 44592556;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1360243;
          result[1] += 340060;
          result[2] += 0;
          result[3] += 14962673;
          result[4] += 25844617;
          result[5] += 243823559;
        } else {
          result[0] += 1740614;
          result[1] += 4351537;
          result[2] += 1740614;
          result[3] += 133157040;
          result[4] += 5221844;
          result[5] += 140119500;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 57266230;
          result[2] += 0;
          result[3] += 0;
          result[4] += 229064922;
          result[5] += 0;
        } else {
          result[0] += 1247630;
          result[1] += 280716816;
          result[2] += 623815;
          result[3] += 623815;
          result[4] += 3119075;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 221392276;
          result[1] += 14573741;
          result[2] += 428639;
          result[3] += 6215272;
          result[4] += 40077788;
          result[5] += 3643435;
        } else {
          result[0] += 31530513;
          result[1] += 1704352;
          result[2] += 98852421;
          result[3] += 85217605;
          result[4] += 13634816;
          result[5] += 55391443;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 184524520;
          result[4] += 31814572;
          result[5] += 69992059;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 286331153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
          result[0] += 95443717;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 0;
        } else {
          result[0] += 11930464;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 238609294;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 30460760;
          result[1] += 18276456;
          result[2] += 103566587;
          result[3] += 85290130;
          result[4] += 0;
          result[5] += 48737217;
        } else {
          result[0] += 1278264;
          result[1] += 0;
          result[2] += 227531005;
          result[3] += 49852298;
          result[4] += 0;
          result[5] += 7669584;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 2740011;
          result[1] += 0;
          result[2] += 257561037;
          result[3] += 26030104;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3510189;
          result[1] += 0;
          result[2] += 277806407;
          result[3] += 5014556;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 3310186;
          result[1] += 3310186;
          result[2] += 0;
          result[3] += 0;
          result[4] += 276400592;
          result[5] += 3310186;
        } else {
          result[0] += 121379510;
          result[1] += 6224590;
          result[2] += 9336885;
          result[3] += 0;
          result[4] += 96481149;
          result[5] += 52909017;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6073691;
          result[4] += 7809031;
          result[5] += 272448430;
        } else {
          result[0] += 0;
          result[1] += 24335559;
          result[2] += 6213334;
          result[3] += 94753347;
          result[4] += 27442226;
          result[5] += 133586686;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 1879635;
          result[1] += 275679884;
          result[2] += 0;
          result[3] += 6265451;
          result[4] += 2506180;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          result[0] += 49796722;
          result[1] += 10893032;
          result[2] += 7002664;
          result[3] += 60689755;
          result[4] += 75473157;
          result[5] += 82475821;
        } else {
          result[0] += 207673038;
          result[1] += 11515704;
          result[2] += 17566328;
          result[3] += 15809695;
          result[4] += 24983222;
          result[5] += 8783164;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d40000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 51130563;
          result[3] += 173843914;
          result[4] += 0;
          result[5] += 61356675;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25264513;
          result[3] += 16843009;
          result[4] += 0;
          result[5] += 244223630;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 95443717;
          result[3] += 0;
          result[4] += 95443717;
          result[5] += 95443717;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53024287;
          result[3] += 63629145;
          result[4] += 0;
          result[5] += 169677720;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 186737708;
          result[3] += 37347541;
          result[4] += 0;
          result[5] += 62245902;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 209000841;
          result[3] += 62700252;
          result[4] += 0;
          result[5] += 14630058;
        } else {
          result[0] += 2936729;
          result[1] += 0;
          result[2] += 271647504;
          result[3] += 11012736;
          result[4] += 0;
          result[5] += 734182;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 238609294;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 944987;
          result[2] += 0;
          result[3] += 3779949;
          result[4] += 251366622;
          result[5] += 30239593;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8864741;
          result[4] += 7535030;
          result[5] += 269931381;
        } else {
          result[0] += 28900714;
          result[1] += 0;
          result[2] += 7492777;
          result[3] += 102222897;
          result[4] += 34252698;
          result[5] += 113462064;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 73891910;
          result[2] += 0;
          result[3] += 23091222;
          result[4] += 166256798;
          result[5] += 23091222;
        } else {
          result[0] += 0;
          result[1] += 282417743;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1956704;
          result[5] += 1956704;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 232348846;
          result[1] += 14395281;
          result[2] += 899705;
          result[3] += 8097346;
          result[4] += 24741890;
          result[5] += 5848083;
        } else {
          result[0] += 41943039;
          result[1] += 4473924;
          result[2] += 69345826;
          result[3] += 74938231;
          result[4] += 12303291;
          result[5] += 83326839;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 286331153;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 286331153;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16519104;
          result[3] += 27531841;
          result[4] += 0;
          result[5] += 242280206;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 13317728;
          result[2] += 66588640;
          result[3] += 193107056;
          result[4] += 0;
          result[5] += 13317728;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 229064922;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 8829595;
          result[1] += 3784112;
          result[2] += 204342056;
          result[3] += 45409345;
          result[4] += 11352336;
          result[5] += 12613707;
        } else {
          result[0] += 413176;
          result[1] += 0;
          result[2] += 279307156;
          result[3] += 5784467;
          result[4] += 0;
          result[5] += 826352;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 245426702;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40904450;
          result[5] += 0;
        } else {
          result[0] += 2346976;
          result[1] += 1173488;
          result[2] += 0;
          result[3] += 1173488;
          result[4] += 271075804;
          result[5] += 10561394;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 994205;
          result[1] += 1988410;
          result[2] += 4639625;
          result[3] += 15575884;
          result[4] += 18558500;
          result[5] += 244574526;
        } else {
          result[0] += 46887295;
          result[1] += 1820865;
          result[2] += 11835627;
          result[3] += 93319374;
          result[4] += 35962100;
          result[5] += 96505889;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 282978329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3352823;
          result[5] += 0;
        } else {
          result[0] += 23330686;
          result[1] += 95443717;
          result[2] += 0;
          result[3] += 0;
          result[4] += 161193834;
          result[5] += 6362914;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 248255201;
          result[1] += 2792236;
          result[2] += 507679;
          result[3] += 8122869;
          result[4] += 13961182;
          result[5] += 12691983;
        } else {
          result[0] += 91507894;
          result[1] += 20663072;
          result[2] += 73796688;
          result[3] += 45753947;
          result[4] += 14759337;
          result[5] += 39850212;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46899068;
          result[3] += 83924648;
          result[4] += 0;
          result[5] += 155507436;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 4004631;
          result[1] += 14016210;
          result[2] += 176203786;
          result[3] += 78090314;
          result[4] += 2002315;
          result[5] += 12013894;
        } else {
          result[0] += 242947644;
          result[1] += 0;
          result[2] += 34706806;
          result[3] += 8676701;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42400000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 286331153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 10226112;
          result[1] += 10226112;
          result[2] += 122713351;
          result[3] += 40904450;
          result[4] += 0;
          result[5] += 102261126;
        } else {
          result[0] += 996512;
          result[1] += 0;
          result[2] += 263743544;
          result[3] += 19598071;
          result[4] += 0;
          result[5] += 1993024;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1859293;
          result[1] += 18592932;
          result[2] += 0;
          result[3] += 0;
          result[4] += 249145288;
          result[5] += 16733638;
        } else {
          result[0] += 212703142;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35450523;
          result[5] += 38177487;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 609215;
          result[1] += 5178329;
          result[2] += 609215;
          result[3] += 16448810;
          result[4] += 26196254;
          result[5] += 237289327;
        } else {
          result[0] += 19855079;
          result[1] += 0;
          result[2] += 5225021;
          result[3] += 166155669;
          result[4] += 0;
          result[5] += 95095382;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 13164650;
          result[1] += 69114416;
          result[2] += 0;
          result[3] += 19746976;
          result[4] += 154684645;
          result[5] += 29620464;
        } else {
          result[0] += 0;
          result[1] += 285075314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1255838;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          result[0] += 50942352;
          result[1] += 3513265;
          result[2] += 7026531;
          result[3] += 79048477;
          result[4] += 14053062;
          result[5] += 131747463;
        } else {
          result[0] += 232328086;
          result[1] += 7813209;
          result[2] += 12179415;
          result[3] += 8272810;
          result[4] += 18384022;
          result[5] += 7353609;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 135630546;
          result[2] += 45210182;
          result[3] += 45210182;
          result[4] += 60280242;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14810232;
          result[4] += 14810232;
          result[5] += 256710688;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18276456;
          result[3] += 216271402;
          result[4] += 0;
          result[5] += 51783293;
        } else {
          result[0] += 6092152;
          result[1] += 0;
          result[2] += 146211652;
          result[3] += 60921521;
          result[4] += 9138228;
          result[5] += 63967598;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 6507526;
          result[1] += 0;
          result[2] += 225594241;
          result[3] += 45552683;
          result[4] += 0;
          result[5] += 8676701;
        } else {
          result[0] += 190887435;
          result[1] += 0;
          result[2] += 95443717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 251624346;
          result[3] += 34706806;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 894784;
          result[1] += 0;
          result[2] += 277383304;
          result[3] += 7605671;
          result[4] += 0;
          result[5] += 447392;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 6448899;
          result[2] += 0;
          result[3] += 0;
          result[4] += 277302693;
          result[5] += 2579559;
        } else {
          result[0] += 91293990;
          result[1] += 0;
          result[2] += 8299453;
          result[3] += 0;
          result[4] += 78844810;
          result[5] += 107892898;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 3799327;
          result[2] += 0;
          result[3] += 13124950;
          result[4] += 14851917;
          result[5] += 254554957;
        } else {
          result[0] += 2105376;
          result[1] += 0;
          result[2] += 2105376;
          result[3] += 163166649;
          result[4] += 3158064;
          result[5] += 115795686;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 136124646;
          result[2] += 0;
          result[3] += 0;
          result[4] += 150206506;
          result[5] += 0;
        } else {
          result[0] += 1247630;
          result[1] += 281964446;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3119075;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 228146212;
          result[1] += 5249769;
          result[2] += 1968663;
          result[3] += 10280797;
          result[4] += 31717354;
          result[5] += 8968355;
        } else {
          result[0] += 47190435;
          result[1] += 7652502;
          result[2] += 60582315;
          result[3] += 72061069;
          result[4] += 16580423;
          result[5] += 82264406;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 11453246;
          result[2] += 26724240;
          result[3] += 61083979;
          result[4] += 26724240;
          result[5] += 160345445;
        } else {
          result[0] += 4473924;
          result[1] += 0;
          result[2] += 102900258;
          result[3] += 152113425;
          result[4] += 0;
          result[5] += 26843545;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 38177487;
          result[1] += 0;
          result[2] += 114532461;
          result[3] += 0;
          result[4] += 38177487;
          result[5] += 95443717;
        } else {
          result[0] += 20951059;
          result[1] += 0;
          result[2] += 244429033;
          result[3] += 20951059;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 238609294;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3556908;
          result[1] += 0;
          result[2] += 209857615;
          result[3] += 53353630;
          result[4] += 0;
          result[5] += 19562998;
        } else {
          result[0] += 1194705;
          result[1] += 0;
          result[2] += 273985859;
          result[3] += 10752352;
          result[4] += 0;
          result[5] += 398235;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1410498;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 262352682;
          result[5] += 22567972;
        } else {
          result[0] += 114532461;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 133621204;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 704381;
          result[2] += 704381;
          result[3] += 10917916;
          result[4] += 22540213;
          result[5] += 251464259;
        } else {
          result[0] += 0;
          result[1] += 38843373;
          result[2] += 9988296;
          result[3] += 123188984;
          result[4] += 8878485;
          result[5] += 105432013;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 26030104;
          result[2] += 0;
          result[3] += 0;
          result[4] += 247285995;
          result[5] += 13015052;
        } else {
          result[0] += 633476;
          result[1] += 279362916;
          result[2] += 0;
          result[3] += 4434332;
          result[4] += 1900428;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 201195095;
          result[1] += 9981468;
          result[2] += 782860;
          result[3] += 12917194;
          result[4] += 43253031;
          result[5] += 18201501;
        } else {
          result[0] += 45150022;
          result[1] += 10858866;
          result[2] += 46293060;
          result[3] += 81155735;
          result[4] += 29719001;
          result[5] += 73154466;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29915195;
          result[3] += 200859167;
          result[4] += 0;
          result[5] += 55556790;
        } else {
          result[0] += 19088743;
          result[1] += 0;
          result[2] += 190887435;
          result[3] += 0;
          result[4] += 0;
          result[5] += 76354974;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 119304647;
          result[4] += 0;
          result[5] += 95443717;
        } else {
          result[0] += 6224590;
          result[1] += 0;
          result[2] += 230309840;
          result[3] += 43572131;
          result[4] += 0;
          result[5] += 6224590;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 254516580;
          result[4] += 0;
          result[5] += 31814572;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 286331153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 13681352;
          result[1] += 0;
          result[2] += 224765068;
          result[3] += 37135098;
          result[4] += 0;
          result[5] += 10749633;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 279609764;
          result[3] += 6721388;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 273881972;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12449180;
          result[5] += 0;
        } else {
          result[0] += 26430567;
          result[1] += 9691208;
          result[2] += 0;
          result[3] += 0;
          result[4] += 215849638;
          result[5] += 34359738;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2269895;
          result[1] += 324270;
          result[2] += 324270;
          result[3] += 11025208;
          result[4] += 22050417;
          result[5] += 250337089;
        } else {
          result[0] += 4231494;
          result[1] += 1410498;
          result[2] += 7052491;
          result[3] += 150923317;
          result[4] += 5641993;
          result[5] += 117071358;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 18472977;
          result[1] += 52340103;
          result[2] += 0;
          result[3] += 6157659;
          result[4] += 197045094;
          result[5] += 12315318;
        } else {
          result[0] += 1883757;
          result[1] += 279424041;
          result[2] += 1255838;
          result[3] += 0;
          result[4] += 3767515;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 235871154;
          result[1] += 11265487;
          result[2] += 704092;
          result[3] += 9153208;
          result[4] += 21122789;
          result[5] += 8214418;
        } else {
          result[0] += 69992059;
          result[1] += 3635951;
          result[2] += 26360645;
          result[3] += 84535864;
          result[4] += 18179755;
          result[5] += 83626876;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46432078;
          result[3] += 46432078;
          result[4] += 50301418;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27414684;
          result[3] += 219317478;
          result[4] += 6092152;
          result[5] += 33506837;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 33467277;
          result[1] += 26030104;
          result[2] += 63215968;
          result[3] += 48341623;
          result[4] += 44623036;
          result[5] += 70653141;
        } else {
          result[0] += 69273666;
          result[1] += 0;
          result[2] += 203202753;
          result[3] += 4618244;
          result[4] += 0;
          result[5] += 9236488;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 97612893;
          result[3] += 91105366;
          result[4] += 0;
          result[5] += 97612893;
        } else {
          result[0] += 2059936;
          result[1] += 0;
          result[2] += 227622966;
          result[3] += 52528376;
          result[4] += 0;
          result[5] += 4119872;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 80530636;
          result[1] += 0;
          result[2] += 178956970;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 17895697;
        } else {
          result[0] += 1327656;
          result[1] += 0;
          result[2] += 273054592;
          result[3] += 11948904;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 5883516;
          result[1] += 19611722;
          result[2] += 0;
          result[3] += 0;
          result[4] += 252010638;
          result[5] += 8825275;
        } else {
          result[0] += 202406504;
          result[1] += 1645581;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47721858;
          result[5] += 34557208;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 334499;
          result[2] += 0;
          result[3] += 19735441;
          result[4] += 19735441;
          result[5] += 246525770;
        } else {
          result[0] += 14287981;
          result[1] += 2286077;
          result[2] += 10858866;
          result[3] += 126877277;
          result[4] += 32005078;
          result[5] += 100015871;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 55869493;
          result[2] += 0;
          result[3] += 0;
          result[4] += 230461659;
          result[5] += 0;
        } else {
          result[0] += 605351;
          result[1] += 279672288;
          result[2] += 1210702;
          result[3] += 0;
          result[4] += 4842810;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 236304902;
          result[1] += 6033316;
          result[2] += 2765270;
          result[3] += 8798586;
          result[4] += 21367996;
          result[5] += 11061080;
        } else {
          result[0] += 61435036;
          result[1] += 16455813;
          result[2] += 61435036;
          result[3] += 48270385;
          result[4] += 24135192;
          result[5] += 74599687;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36552913;
          result[3] += 201041022;
          result[4] += 0;
          result[5] += 48737217;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 130150524;
          result[3] += 26030104;
          result[4] += 0;
          result[5] += 130150524;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 6270025;
          result[1] += 0;
          result[2] += 209000841;
          result[3] += 60610244;
          result[4] += 1045004;
          result[5] += 9405037;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d20000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 241370062;
          result[3] += 40228343;
          result[4] += 0;
          result[5] += 4732746;
        } else {
          result[0] += 2579559;
          result[1] += 0;
          result[2] += 283751593;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 282322516;
          result[3] += 3435973;
          result[4] += 0;
          result[5] += 572662;
        } else {
          result[0] += 75350303;
          result[1] += 0;
          result[2] += 210980849;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13634816;
          result[4] += 249322364;
          result[5] += 23373971;
        } else {
          result[0] += 407879;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11012736;
          result[4] += 10196978;
          result[5] += 264713558;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 85682428;
          result[1] += 30368455;
          result[2] += 0;
          result[3] += 2169175;
          result[4] += 157265216;
          result[5] += 10845877;
        } else {
          result[0] += 4553974;
          result[1] += 1707740;
          result[2] += 10246442;
          result[3] += 79125308;
          result[4] += 26185353;
          result[5] += 164512332;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 114532461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 157482134;
          result[5] += 14316557;
        } else {
          result[0] += 2720486;
          result[1] += 282930545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 680121;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 34706806;
          result[1] += 52060209;
          result[2] += 2892233;
          result[3] += 11568935;
          result[4] += 176426265;
          result[5] += 8676701;
        } else {
          result[0] += 223241237;
          result[1] += 7720793;
          result[2] += 10588517;
          result[3] += 15220993;
          result[4] += 18309311;
          result[5] += 11250299;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4544938;
          result[3] += 13634816;
          result[4] += 59084206;
          result[5] += 209067191;
        } else {
          result[0] += 35060957;
          result[1] += 46747943;
          result[2] += 81808900;
          result[3] += 46747943;
          result[4] += 23373971;
          result[5] += 52591436;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30056861;
          result[3] += 166103707;
          result[4] += 3163880;
          result[5] += 87006703;
        } else {
          result[0] += 10804949;
          result[1] += 5402474;
          result[2] += 189086610;
          result[3] += 37817322;
          result[4] += 0;
          result[5] += 43219796;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 40904450;
          result[1] += 0;
          result[2] += 177252618;
          result[3] += 54539267;
          result[4] += 0;
          result[5] += 13634816;
        } else {
          result[0] += 252645135;
          result[1] += 0;
          result[2] += 28071681;
          result[3] += 5614336;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 10703968;
          result[1] += 0;
          result[2] += 228351324;
          result[3] += 42815873;
          result[4] += 0;
          result[5] += 4459986;
        } else {
          result[0] += 935722;
          result[1] += 0;
          result[2] += 274634618;
          result[3] += 10760811;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
