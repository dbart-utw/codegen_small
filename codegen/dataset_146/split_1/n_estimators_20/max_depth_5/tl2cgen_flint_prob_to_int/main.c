
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
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 1812222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 210217808;
            result[5] += 2718333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6316128;
            result[3] += 0;
            result[4] += 138954824;
            result[5] += 69477412;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4836674;
            result[4] += 4191784;
            result[5] += 205719904;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 21828817;
            result[1] += 6489648;
            result[2] += 2949840;
            result[3] += 30678337;
            result[4] += 25958593;
            result[5] += 126843127;
          } else {
            result[0] += 2426535;
            result[1] += 0;
            result[2] += 2426535;
            result[3] += 145592111;
            result[4] += 7279605;
            result[5] += 57023577;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 27837750;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 4971026;
            result[4] += 130240906;
            result[5] += 6959437;
          } else {
            result[0] += 177497997;
            result[1] += 7077569;
            result[2] += 0;
            result[3] += 5960058;
            result[4] += 15272650;
            result[5] += 8940088;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 832358;
            result[1] += 9155938;
            result[2] += 19976592;
            result[3] += 107374182;
            result[4] += 3329432;
            result[5] += 74079862;
          } else {
            result[0] += 106219621;
            result[1] += 0;
            result[2] += 79664715;
            result[3] += 10391049;
            result[4] += 13854733;
            result[5] += 4618244;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 171798691;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14005328;
            result[3] += 177400823;
            result[4] += 0;
            result[5] += 23342213;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 117135471;
            result[4] += 0;
            result[5] += 58567735;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28010656;
            result[3] += 0;
            result[4] += 0;
            result[5] += 186737708;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 214748364;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 170009122;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 1789569;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 71582788;
            result[3] += 83513252;
            result[4] += 0;
            result[5] += 11930464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 168730858;
            result[3] += 42182714;
            result[4] += 1917396;
            result[5] += 1917396;
          } else {
            result[0] += 1567506;
            result[1] += 0;
            result[2] += 202208314;
            result[3] += 10188791;
            result[4] += 0;
            result[5] += 783753;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 1364926;
            result[1] += 0;
            result[2] += 211108561;
            result[3] += 1819901;
            result[4] += 0;
            result[5] += 454975;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 1544952;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 208568555;
            result[5] += 4634856;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48806446;
            result[5] += 165941918;
          } else {
            result[0] += 0;
            result[1] += 5506368;
            result[2] += 0;
            result[3] += 0;
            result[4] += 187216523;
            result[5] += 22025473;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
            result[0] += 208612697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9615598;
            result[4] += 11834582;
            result[5] += 193298183;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3318407;
            result[2] += 1896232;
            result[3] += 104766862;
            result[4] += 10429280;
            result[5] += 94337581;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 23860929;
            result[2] += 17895697;
            result[3] += 11930464;
            result[4] += 161061273;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 177167400;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 32212254;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 11671106;
            result[1] += 44350205;
            result[2] += 0;
            result[3] += 0;
            result[4] += 158727052;
            result[5] += 0;
          } else {
            result[0] += 187070559;
            result[1] += 5103708;
            result[2] += 0;
            result[3] += 8048156;
            result[4] += 9814824;
            result[5] += 4711115;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 7456540;
            result[1] += 8202194;
            result[2] += 77548020;
            result[3] += 61889285;
            result[4] += 11930464;
            result[5] += 47721858;
          } else {
            result[0] += 147977864;
            result[1] += 16241472;
            result[2] += 43310594;
            result[3] += 0;
            result[4] += 7218432;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16519104;
            result[4] += 0;
            result[5] += 198229259;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 76695844;
            result[4] += 0;
            result[5] += 107374182;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11012736;
            result[3] += 165191049;
            result[4] += 5506368;
            result[5] += 33038209;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 165191049;
            result[3] += 33038209;
            result[4] += 0;
            result[5] += 16519104;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 209867720;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4880644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 184070026;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 167944233;
            result[3] += 30285025;
            result[4] += 0;
            result[5] += 16519104;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d80000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 1118481;
            result[2] += 189023300;
            result[3] += 24606583;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1455921;
            result[1] += 0;
            result[2] += 207468759;
            result[3] += 4367763;
            result[4] += 0;
            result[5] += 1455921;
          }
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2692769;
            result[1] += 2019577;
            result[2] += 0;
            result[3] += 0;
            result[4] += 197918555;
            result[5] += 12117462;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 213016523;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1731841;
            result[5] += 0;
          } else {
            result[0] += 37025580;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 55538370;
            result[5] += 122184414;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 2067728;
            result[2] += 590779;
            result[3] += 6793964;
            result[4] += 6203185;
            result[5] += 199092706;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 171798691;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5506368;
            result[4] += 165191049;
            result[5] += 44050946;
          } else {
            result[0] += 4392580;
            result[1] += 1952257;
            result[2] += 1952257;
            result[3] += 61008058;
            result[4] += 21474836;
            result[5] += 123968374;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42820000))) ) ) {
            result[0] += 5237764;
            result[1] += 20951059;
            result[2] += 0;
            result[3] += 0;
            result[4] += 188559539;
            result[5] += 0;
          } else {
            result[0] += 5237764;
            result[1] += 104755299;
            result[2] += 0;
            result[3] += 15713294;
            result[4] += 89042004;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 213733006;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1015358;
            result[5] += 0;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 7279605;
            result[1] += 116473689;
            result[2] += 0;
            result[3] += 0;
            result[4] += 90995069;
            result[5] += 0;
          } else {
            result[0] += 191145011;
            result[1] += 3582651;
            result[2] += 210744;
            result[3] += 3161163;
            result[4] += 11801676;
            result[5] += 4847117;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 7866240;
            result[1] += 0;
            result[2] += 10226112;
            result[3] += 124286599;
            result[4] += 11799360;
            result[5] += 60570051;
          } else {
            result[0] += 75285346;
            result[1] += 1234186;
            result[2] += 83924648;
            result[3] += 17278604;
            result[4] += 1234186;
            result[5] += 35791394;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15070060;
            result[3] += 184608243;
            result[4] += 0;
            result[5] += 15070060;
          } else {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 122713351;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 65617555;
            result[4] += 0;
            result[5] += 5965232;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 99704597;
          } else {
            result[0] += 187904819;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 155096041;
            result[3] += 59652323;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 204987075;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 135083648;
            result[3] += 45027882;
            result[4] += 0;
            result[5] += 34636833;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 188501342;
            result[3] += 26247022;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 6194664;
            result[1] += 0;
            result[2] += 181710154;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 212733839;
            result[3] += 2014524;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 71582788;
          } else {
            result[0] += 1658288;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 209773499;
            result[5] += 3316577;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 171798691;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 161061273;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 853304;
            result[2] += 284434;
            result[3] += 7395307;
            result[4] += 3982088;
            result[5] += 202233228;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 173843914;
            result[1] += 5113056;
            result[2] += 0;
            result[3] += 5113056;
            result[4] += 17895697;
            result[5] += 12782640;
          } else {
            result[0] += 2029118;
            result[1] += 2367304;
            result[2] += 8454660;
            result[3] += 78121058;
            result[4] += 19276624;
            result[5] += 104499597;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 107374182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 107374182;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1835456;
            result[1] += 22025473;
            result[2] += 0;
            result[3] += 0;
            result[4] += 183545610;
            result[5] += 7341824;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 58567735;
            result[1] += 31236125;
            result[2] += 0;
            result[3] += 7809031;
            result[4] += 105421924;
            result[5] += 11713547;
          } else {
            result[0] += 196139691;
            result[1] += 3636177;
            result[2] += 1497249;
            result[3] += 3208391;
            result[4] += 8769604;
            result[5] += 1497249;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 5547005;
            result[1] += 792429;
            result[2] += 44376045;
            result[3] += 61809492;
            result[4] += 23772881;
            result[5] += 78450509;
          } else {
            result[0] += 161796713;
            result[1] += 0;
            result[2] += 50009893;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2941758;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 153391689;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38347922;
            result[4] += 0;
            result[5] += 176400442;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 161061273;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 80530636;
            result[3] += 0;
            result[4] += 0;
            result[5] += 134217727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 187904819;
            result[4] += 0;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 122713351;
            result[3] += 72512434;
            result[4] += 0;
            result[5] += 19522578;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 186115249;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 119304647;
            result[3] += 39768215;
            result[4] += 0;
            result[5] += 55675501;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 128849018;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 187137860;
            result[3] += 16873085;
            result[4] += 0;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 184683593;
            result[3] += 27201459;
            result[4] += 0;
            result[5] += 1431655;
          } else {
            result[0] += 838860;
            result[1] += 0;
            result[2] += 206359756;
            result[3] += 7549747;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 213488843;
            result[3] += 1259521;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 1118481;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 210274440;
            result[5] += 3355443;
          } else {
            result[0] += 0;
            result[1] += 11930464;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 113339414;
            result[5] += 71582788;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7405116;
            result[3] += 0;
            result[4] += 162912552;
            result[5] += 44430696;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8867029;
            result[4] += 3879325;
            result[5] += 202002010;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 144284057;
            result[1] += 3355443;
            result[2] += 0;
            result[3] += 0;
            result[4] += 67108863;
            result[5] += 0;
          } else {
            result[0] += 950214;
            result[1] += 0;
            result[2] += 5701284;
            result[3] += 83618832;
            result[4] += 18054066;
            result[5] += 106423968;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 14856805;
            result[1] += 91842067;
            result[2] += 0;
            result[3] += 0;
            result[4] += 106698873;
            result[5] += 1350618;
          } else {
            result[0] += 183321774;
            result[1] += 1683567;
            result[2] += 187063;
            result[3] += 2805945;
            result[4] += 17958051;
            result[5] += 8791962;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 6436599;
            result[1] += 4096017;
            result[2] += 39204742;
            result[3] += 84260938;
            result[4] += 2925727;
            result[5] += 77824339;
          } else {
            result[0] += 181939586;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 2982616;
            result[4] += 20878313;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d00000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 150323855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 64424509;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214175702;
            result[2] += 0;
            result[3] += 572662;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 214748364;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 184922202;
            result[4] += 0;
            result[5] += 23860929;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 120795955;
            result[3] += 87241523;
            result[4] += 0;
            result[5] += 6710886;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 187904819;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 187904819;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e80000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 46017506;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 201326591;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 12884901;
            result[1] += 0;
            result[2] += 124554051;
            result[3] += 55834574;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 1274471;
            result[1] += 0;
            result[2] += 188621709;
            result[3] += 22303242;
            result[4] += 0;
            result[5] += 2548942;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 210335727;
            result[3] += 4412637;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 210018224;
            result[5] += 4730140;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 31426589;
            result[4] += 157132949;
            result[5] += 26188824;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 26843545;
            result[5] += 174483046;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 209754216;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4994148;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1112685;
            result[1] += 1557760;
            result[2] += 0;
            result[3] += 11126858;
            result[4] += 11571932;
            result[5] += 189379127;
          } else {
            result[0] += 0;
            result[1] += 1797057;
            result[2] += 2695586;
            result[3] += 102432274;
            result[4] += 6289701;
            result[5] += 101533745;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 10737418;
            result[1] += 204010946;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
            result[0] += 16953818;
            result[1] += 192143273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5651272;
            result[5] += 0;
          } else {
            result[0] += 36664354;
            result[1] += 5237764;
            result[2] += 0;
            result[3] += 0;
            result[4] += 171100323;
            result[5] += 1745921;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 95907036;
            result[1] += 2084935;
            result[2] += 4691105;
            result[3] += 44304881;
            result[4] += 27625396;
            result[5] += 40135009;
          } else {
            result[0] += 188269465;
            result[1] += 3141564;
            result[2] += 3365961;
            result[3] += 5161141;
            result[4] += 13463847;
            result[5] += 1346384;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 191532325;
            result[4] += 0;
            result[5] += 23216039;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 76924787;
            result[3] += 80129986;
            result[4] += 0;
            result[5] += 57693590;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 63161283;
            result[4] += 0;
            result[5] += 126322567;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 2902004;
            result[1] += 0;
            result[2] += 165414280;
            result[3] += 27569046;
            result[4] += 0;
            result[5] += 18863032;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 64424509;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 189483851;
            result[3] += 25264513;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 117135471;
            result[3] += 78090314;
            result[4] += 0;
            result[5] += 19522578;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 729609;
            result[1] += 0;
            result[2] += 205020239;
            result[3] += 7782500;
            result[4] += 0;
            result[5] += 1216015;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41fc0000))) ) ) {
            result[0] += 0;
            result[1] += 161061273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 211651032;
            result[5] += 3097332;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 8765239;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 127095970;
            result[5] += 78887154;
          } else {
            result[0] += 0;
            result[1] += 117135471;
            result[2] += 0;
            result[3] += 97612893;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 171798691;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 572662;
            result[2] += 2576980;
            result[3] += 9162596;
            result[4] += 4008636;
            result[5] += 198427489;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 130382935;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 76695844;
            result[5] += 7669584;
          } else {
            result[0] += 1317474;
            result[1] += 0;
            result[2] += 1317474;
            result[3] += 79707215;
            result[4] += 17127170;
            result[5] += 115279030;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 552052;
            result[1] += 214196312;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 9544371;
            result[1] += 89080803;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 101806632;
            result[5] += 4772185;
          } else {
            result[0] += 180170238;
            result[1] += 2911842;
            result[2] += 727960;
            result[3] += 4549753;
            result[4] += 14741201;
            result[5] += 11647368;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 5263440;
            result[1] += 5263440;
            result[2] += 11579568;
            result[3] += 91583861;
            result[4] += 1052688;
            result[5] += 100005365;
          } else {
            result[0] += 143165576;
            result[1] += 2863311;
            result[2] += 31496426;
            result[3] += 2863311;
            result[4] += 34359738;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20452225;
            result[3] += 10226112;
            result[4] += 0;
            result[5] += 184070026;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39953184;
            result[3] += 143581755;
            result[4] += 0;
            result[5] += 31213425;
          } else {
            result[0] += 67108863;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40265318;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 150323855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 122713351;
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 98426333;
            result[4] += 0;
            result[5] += 44739242;
          } else {
            result[0] += 0;
            result[1] += 2334221;
            result[2] += 182069265;
            result[3] += 28010656;
            result[4] += 0;
            result[5] += 2334221;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 193273528;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 171798691;
          } else {
            result[0] += 17179869;
            result[1] += 0;
            result[2] += 171798691;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 17179869;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2296773;
            result[1] += 0;
            result[2] += 184890303;
            result[3] += 22967739;
            result[4] += 0;
            result[5] += 4593547;
          } else {
            result[0] += 411395;
            result[1] += 0;
            result[2] += 208577434;
            result[3] += 5348139;
            result[4] += 0;
            result[5] += 411395;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 202817900;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 0;
          } else {
            result[0] += 25565281;
            result[1] += 0;
            result[2] += 189183083;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 937765;
            result[1] += 2813297;
            result[2] += 0;
            result[3] += 0;
            result[4] += 210059535;
            result[5] += 937765;
          } else {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 94489280;
            result[5] += 111669149;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 87241523;
            result[5] += 127506841;
          } else {
            result[0] += 189777624;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18311876;
            result[5] += 6658864;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 14005328;
            result[2] += 0;
            result[3] += 0;
            result[4] += 158727052;
            result[5] += 42015984;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 953025;
            result[2] += 0;
            result[3] += 5082801;
            result[4] += 5400476;
            result[5] += 203312061;
          } else {
            result[0] += 1717986;
            result[1] += 572662;
            result[2] += 0;
            result[3] += 40659023;
            result[4] += 28060452;
            result[5] += 143738238;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 23860929;
            result[1] += 143165576;
            result[2] += 9544371;
            result[3] += 28633115;
            result[4] += 9544371;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
            result[0] += 43857060;
            result[1] += 42344747;
            result[2] += 0;
            result[3] += 4536937;
            result[4] += 122497306;
            result[5] += 1512312;
          } else {
            result[0] += 183695549;
            result[1] += 4436116;
            result[2] += 1008208;
            result[3] += 8065666;
            result[4] += 9880441;
            result[5] += 7662382;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 521233;
            result[1] += 0;
            result[2] += 27625396;
            result[3] += 127181070;
            result[4] += 521233;
            result[5] += 58899430;
          } else {
            result[0] += 87162571;
            result[1] += 1263225;
            result[2] += 84636120;
            result[3] += 16421933;
            result[4] += 17685159;
            result[5] += 7579354;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 7953643;
            result[2] += 31814572;
            result[3] += 159072862;
            result[4] += 0;
            result[5] += 15907286;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 184070026;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 35791394;
            result[3] += 42949672;
            result[4] += 21474836;
            result[5] += 100215903;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 161061273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 161061273;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 184070026;
            result[3] += 20452225;
            result[4] += 0;
            result[5] += 10226112;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 199409195;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75161927;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 107374182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 191841872;
            result[3] += 20043180;
            result[4] += 0;
            result[5] += 2863311;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 184070026;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 193153557;
            result[3] += 20395096;
            result[4] += 0;
            result[5] += 1199711;
          } else {
            result[0] += 349184;
            result[1] += 0;
            result[2] += 208463046;
            result[3] += 4539396;
            result[4] += 0;
            result[5] += 1396737;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 2651214;
            result[2] += 0;
            result[3] += 0;
            result[4] += 207678459;
            result[5] += 4418690;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 46017506;
            result[4] += 76695844;
            result[5] += 92035013;
          }
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 144830292;
            result[5] += 69918072;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6203185;
            result[4] += 886169;
            result[5] += 207659010;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42910000))) ) ) {
            result[0] += 72861052;
            result[1] += 9586980;
            result[2] += 0;
            result[3] += 11504376;
            result[4] += 74778448;
            result[5] += 46017506;
          } else {
            result[0] += 14227634;
            result[1] += 4446135;
            result[2] += 2223067;
            result[3] += 88478104;
            result[4] += 3112295;
            result[5] += 102261126;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42460000))) ) ) {
            result[0] += 20782099;
            result[1] += 145474698;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34636833;
            result[5] += 13854733;
          } else {
            result[0] += 2147483;
            result[1] += 12884901;
            result[2] += 0;
            result[3] += 0;
            result[4] += 197568495;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 212722436;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2025927;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
            result[0] += 21913098;
            result[1] += 4382619;
            result[2] += 2191309;
            result[3] += 50400126;
            result[4] += 46017506;
            result[5] += 89843703;
          } else {
            result[0] += 184783476;
            result[1] += 2112908;
            result[2] += 1728743;
            result[3] += 5954561;
            result[4] += 15558691;
            result[5] += 4609982;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11504376;
            result[3] += 130382935;
            result[4] += 7669584;
            result[5] += 65191467;
          } else {
            result[0] += 48622271;
            result[1] += 10129639;
            result[2] += 117503822;
            result[3] += 16207423;
            result[4] += 8103711;
            result[5] += 14181495;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6507526;
            result[2] += 0;
            result[3] += 65075262;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 5174659;
            result[1] += 0;
            result[2] += 20698637;
            result[3] += 155239781;
            result[4] += 2587329;
            result[5] += 31047956;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 157482134;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 14316557;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 39045157;
            result[1] += 0;
            result[2] += 0;
            result[3] += 97612893;
            result[4] += 39045157;
            result[5] += 39045157;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 134217727;
          } else {
            result[0] += 0;
            result[1] += 6254806;
            result[2] += 141775619;
            result[3] += 58378196;
            result[4] += 0;
            result[5] += 8339742;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 7158278;
            result[2] += 157482134;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 2798024;
            result[1] += 0;
            result[2] += 179773061;
            result[3] += 25881724;
            result[4] += 0;
            result[5] += 6295554;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 209502069;
            result[3] += 5246295;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 213695676;
            result[5] += 1052688;
          } else {
            result[0] += 107374182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 107374182;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 198642237;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 10737418;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8053063;
            result[4] += 110058536;
            result[5] += 85899345;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 124328000;
            result[2] += 0;
            result[3] += 11302545;
            result[4] += 50861454;
            result[5] += 28256363;
          } else {
            result[0] += 0;
            result[1] += 784707;
            result[2] += 523138;
            result[3] += 7585508;
            result[4] += 9678062;
            result[5] += 196176947;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 1101273;
            result[2] += 0;
            result[3] += 82595524;
            result[4] += 7708915;
            result[5] += 123342650;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10088849;
            result[3] += 168627910;
            result[4] += 0;
            result[5] += 36031604;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 193273528;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 192143273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22605091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 161061273;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 3702558;
            result[1] += 40728138;
            result[2] += 0;
            result[3] += 14810232;
            result[4] += 148102320;
            result[5] += 7405116;
          } else {
            result[0] += 176861864;
            result[1] += 2618882;
            result[2] += 2968066;
            result[3] += 5936133;
            result[4] += 19030546;
            result[5] += 7332870;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 5446516;
            result[1] += 1556147;
            result[2] += 25676434;
            result[3] += 99593444;
            result[4] += 15561475;
            result[5] += 66914345;
          } else {
            result[0] += 108805838;
            result[1] += 0;
            result[2] += 88762657;
            result[3] += 4294967;
            result[4] += 8589934;
            result[5] += 4294967;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 128849018;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 7405116;
            result[2] += 0;
            result[3] += 29620464;
            result[4] += 37025580;
            result[5] += 140697204;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 107374182;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 178956970;
            result[4] += 0;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 105089625;
            result[3] += 86813168;
            result[4] += 0;
            result[5] += 22845570;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 166042550;
            result[3] += 30994609;
            result[4] += 2213900;
            result[5] += 15497304;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 99114629;
            result[3] += 0;
            result[4] += 0;
            result[5] += 115633734;
          } else {
            result[0] += 37347541;
            result[1] += 37347541;
            result[2] += 28010656;
            result[3] += 112042625;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 187904819;
            result[3] += 0;
            result[4] += 6710886;
            result[5] += 20132659;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 19522578;
            result[1] += 0;
            result[2] += 195225786;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 2225371;
            result[1] += 0;
            result[2] += 190269276;
            result[3] += 22253716;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 377413;
            result[1] += 0;
            result[2] += 211729055;
            result[3] += 2641895;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42240000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42440000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2902004;
            result[4] += 194434330;
            result[5] += 17412029;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 193273528;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 61356675;
            result[5] += 153391689;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3048478;
            result[4] += 1354879;
            result[5] += 210345007;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 107374182;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15070060;
            result[5] += 199678304;
          } else {
            result[0] += 14048958;
            result[1] += 5017485;
            result[2] += 1003497;
            result[3] += 37129390;
            result[4] += 30104910;
            result[5] += 127444123;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 150323855;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 668998;
            result[1] += 2006994;
            result[2] += 8696974;
            result[3] += 114398661;
            result[4] += 4682986;
            result[5] += 84293750;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 200431807;
            result[5] += 9544371;
          } else {
            result[0] += 0;
            result[1] += 193273528;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 213723312;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1025051;
            result[5] += 0;
          } else {
            result[0] += 16953818;
            result[1] += 113025455;
            result[2] += 0;
            result[3] += 33907636;
            result[4] += 50861454;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 208240838;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6507526;
            result[5] += 0;
          } else {
            result[0] += 1309441;
            result[1] += 14403853;
            result[2] += 5237764;
            result[3] += 70709827;
            result[4] += 53687091;
            result[5] += 69400386;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 60777839;
            result[1] += 56725983;
            result[2] += 8103711;
            result[3] += 0;
            result[4] += 89140830;
            result[5] += 0;
          } else {
            result[0] += 192234423;
            result[1] += 192426;
            result[2] += 2693975;
            result[3] += 5387951;
            result[4] += 11930464;
            result[5] += 2309122;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 0;
            result[4] += 181710154;
            result[5] += 0;
          } else {
            result[0] += 4772185;
            result[1] += 9544371;
            result[2] += 9544371;
            result[3] += 55675501;
            result[4] += 11135100;
            result[5] += 124076832;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 84937786;
            result[3] += 120194980;
            result[4] += 0;
            result[5] += 9615598;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 175189455;
            result[3] += 16953818;
            result[4] += 0;
            result[5] += 22605091;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 27152092;
            result[1] += 0;
            result[2] += 138228832;
            result[3] += 37025580;
            result[4] += 0;
            result[5] += 12341860;
          } else {
            result[0] += 1484435;
            result[1] += 0;
            result[2] += 200398819;
            result[3] += 11380673;
            result[4] += 0;
            result[5] += 1484435;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 9418787;
            result[1] += 2511676;
            result[2] += 627919;
            result[3] += 0;
            result[4] += 199050384;
            result[5] += 3139595;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 19231196;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 118592380;
            result[5] += 76924787;
          } else {
            result[0] += 188646353;
            result[1] += 1779682;
            result[2] += 2372910;
            result[3] += 7711957;
            result[4] += 13644233;
            result[5] += 593227;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 55221008;
            result[2] += 0;
            result[3] += 0;
            result[4] += 147256021;
            result[5] += 12271335;
          } else {
            result[0] += 436037;
            result[1] += 1744149;
            result[2] += 0;
            result[3] += 18749603;
            result[4] += 8720745;
            result[5] += 185097829;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 64580124;
            result[1] += 20229918;
            result[2] += 0;
            result[3] += 10114959;
            result[4] += 64580124;
            result[5] += 55243238;
          } else {
            result[0] += 2691082;
            result[1] += 5382164;
            result[2] += 15070060;
            result[3] += 109257939;
            result[4] += 6458597;
            result[5] += 75888519;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42640000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 462819;
            result[1] += 214285544;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 107374182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 153391689;
          } else {
            result[0] += 128849018;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 212020164;
            result[1] += 0;
            result[2] += 0;
            result[3] += 389742;
            result[4] += 2338457;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 148938382;
            result[3] += 38100516;
            result[4] += 3463683;
            result[5] += 24245783;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 204522252;
            result[1] += 0;
            result[2] += 10226112;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 64424509;
            result[3] += 96636764;
            result[4] += 21474836;
            result[5] += 10737418;
          } else {
            result[0] += 186115249;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 87567294;
            result[3] += 70887809;
            result[4] += 0;
            result[5] += 56293260;
          } else {
            result[0] += 16753418;
            result[1] += 0;
            result[2] += 162965071;
            result[3] += 27414684;
            result[4] += 0;
            result[5] += 7615190;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 125269879;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 185684676;
            result[3] += 27449039;
            result[4] += 0;
            result[5] += 1614649;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 305474;
            result[1] += 0;
            result[2] += 206500561;
            result[3] += 7942329;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 214748364;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19522578;
            result[5] += 195225786;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 212161035;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2587329;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5072796;
            result[4] += 3663686;
            result[5] += 206011882;
          } else {
            result[0] += 872960;
            result[1] += 8729608;
            result[2] += 0;
            result[3] += 34918433;
            result[4] += 30553629;
            result[5] += 139673733;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 167526211;
            result[4] += 0;
            result[5] += 47222153;
          } else {
            result[0] += 6983686;
            result[1] += 0;
            result[2] += 13967373;
            result[3] += 57615414;
            result[4] += 0;
            result[5] += 136181889;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 12884901;
            result[1] += 201863462;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 38227457;
            result[1] += 32605772;
            result[2] += 3373010;
            result[3] += 2248673;
            result[4] += 129298753;
            result[5] += 8994695;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 191310343;
            result[1] += 3605849;
            result[2] += 0;
            result[3] += 4407149;
            result[4] += 13822422;
            result[5] += 1602599;
          } else {
            result[0] += 41834097;
            result[1] += 0;
            result[2] += 43693390;
            result[3] += 63215968;
            result[4] += 13944699;
            result[5] += 52060209;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 187904819;
            result[4] += 0;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 4668442;
            result[1] += 0;
            result[2] += 56021312;
            result[3] += 123713731;
            result[4] += 0;
            result[5] += 30344877;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 139586437;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 143165576;
            result[1] += 30678337;
            result[2] += 40904450;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 152113425;
            result[3] += 29826161;
            result[4] += 2982616;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 969518;
            result[1] += 0;
            result[2] += 198751308;
            result[3] += 13573260;
            result[4] += 1211898;
            result[5] += 242379;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 213826697;
            result[5] += 921666;
          } else {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 134217727;
            result[5] += 67108863;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95443717;
            result[5] += 119304647;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 171798691;
            result[5] += 0;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 173843914;
            result[5] += 40904450;
          } else {
            result[0] += 1015358;
            result[1] += 1523038;
            result[2] += 0;
            result[3] += 9392067;
            result[4] += 5584472;
            result[5] += 197233427;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 4169871;
            result[1] += 0;
            result[2] += 10424677;
            result[3] += 50038453;
            result[4] += 6254806;
            result[5] += 143860555;
          } else {
            result[0] += 0;
            result[1] += 12227664;
            result[2] += 6113832;
            result[3] += 137561230;
            result[4] += 4585374;
            result[5] += 54260262;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 165941918;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48806446;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 212064010;
            result[5] += 2684354;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 211407834;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3340530;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 85899345;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 97860014;
            result[1] += 1359166;
            result[2] += 0;
            result[3] += 19028336;
            result[4] += 76113344;
            result[5] += 20387502;
          } else {
            result[0] += 190188296;
            result[1] += 4262491;
            result[2] += 1420830;
            result[3] += 4262491;
            result[4] += 13396400;
            result[5] += 1217854;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 5630106;
            result[1] += 13673116;
            result[2] += 12064514;
            result[3] += 70778487;
            result[4] += 29759136;
            result[5] += 82843002;
          } else {
            result[0] += 139098372;
            result[1] += 0;
            result[2] += 56127413;
            result[3] += 9761289;
            result[4] += 7320966;
            result[5] += 2440322;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27790964;
            result[3] += 146534178;
            result[4] += 0;
            result[5] += 40423221;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 156931497;
            result[3] += 16519104;
            result[4] += 0;
            result[5] += 41297762;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 102261126;
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 51130563;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 191739611;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 15339168;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 16519104;
            result[1] += 0;
            result[2] += 132152839;
            result[3] += 16519104;
            result[4] += 24778657;
            result[5] += 24778657;
          } else {
            result[0] += 200431807;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 175102512;
            result[3] += 30560344;
            result[4] += 1651910;
            result[5] += 7433597;
          } else {
            result[0] += 706409;
            result[1] += 0;
            result[2] += 208390682;
            result[3] += 4591659;
            result[4] += 0;
            result[5] += 1059613;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e20000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 1946359;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1946359;
            result[4] += 199177486;
            result[5] += 11678158;
          } else {
            result[0] += 0;
            result[1] += 150323855;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 0;
            result[4] += 120795955;
            result[5] += 80530636;
          } else {
            result[0] += 208369700;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2126221;
            result[4] += 4252442;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 2012367;
            result[2] += 862443;
            result[3] += 2299848;
            result[4] += 11786724;
            result[5] += 197786981;
          } else {
            result[0] += 13244392;
            result[1] += 946028;
            result[2] += 3311098;
            result[3] += 64802920;
            result[4] += 35476051;
            result[5] += 96967873;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 184070026;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 187904819;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
            result[0] += 30954719;
            result[1] += 15477359;
            result[2] += 0;
            result[3] += 73517458;
            result[4] += 9673349;
            result[5] += 85125477;
          } else {
            result[0] += 187549611;
            result[1] += 6901176;
            result[2] += 3247612;
            result[3] += 3044636;
            result[4] += 12787473;
            result[5] += 1217854;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17082256;
            result[3] += 132590846;
            result[4] += 1626881;
            result[5] += 63448380;
          } else {
            result[0] += 56772556;
            result[1] += 0;
            result[2] += 98734880;
            result[3] += 24683720;
            result[4] += 23449534;
            result[5] += 11107674;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428c0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4129776;
            result[3] += 33038209;
            result[4] += 0;
            result[5] += 177580378;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 46432078;
            result[1] += 0;
            result[2] += 116080197;
            result[3] += 29020049;
            result[4] += 0;
            result[5] += 23216039;
          }
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 162992463;
            result[3] += 46348567;
            result[4] += 0;
            result[5] += 5407332;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 120795955;
            result[3] += 67108863;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42900000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1967160;
            result[1] += 0;
            result[2] += 206551862;
            result[3] += 5245761;
            result[4] += 0;
            result[5] += 983580;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x420e0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5596048;
            result[2] += 0;
            result[3] += 0;
            result[4] += 197260712;
            result[5] += 11891603;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 99114629;
            result[5] += 115633734;
          } else {
            result[0] += 179687407;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26295718;
            result[5] += 8765239;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 322444;
            result[2] += 0;
            result[3] += 5481564;
            result[4] += 12252909;
            result[5] += 196691445;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 119304647;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 1017764;
            result[2] += 0;
            result[3] += 35621766;
            result[4] += 29515178;
            result[5] += 148593655;
          } else {
            result[0] += 4210752;
            result[1] += 3158064;
            result[2] += 10526880;
            result[3] += 133691383;
            result[4] += 6316128;
            result[5] += 56845155;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 887389;
            result[1] += 209867720;
            result[2] += 0;
            result[3] += 2662169;
            result[4] += 1331084;
            result[5] += 0;
          } else {
            result[0] += 178956970;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42720000))) ) ) {
            result[0] += 6316128;
            result[1] += 66319347;
            result[2] += 0;
            result[3] += 0;
            result[4] += 135796760;
            result[5] += 6316128;
          } else {
            result[0] += 184042263;
            result[1] += 3109478;
            result[2] += 2137766;
            result[3] += 2720793;
            result[4] += 18073844;
            result[5] += 4664217;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 61217859;
            result[4] += 6801984;
            result[5] += 121464007;
          } else {
            result[0] += 95703075;
            result[1] += 28010656;
            result[2] += 47851537;
            result[3] += 31511988;
            result[4] += 11671106;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 0;
            result[4] += 195225786;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 209379655;
          } else {
            result[0] += 16519104;
            result[1] += 33038209;
            result[2] += 16519104;
            result[3] += 16519104;
            result[4] += 66076419;
            result[5] += 66076419;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2718333;
            result[3] += 195720028;
            result[4] += 0;
            result[5] += 16310002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33907636;
            result[3] += 22605091;
            result[4] += 0;
            result[5] += 158235637;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 70943656;
            result[3] += 101621994;
            result[4] += 5752188;
            result[5] += 36430526;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 186115249;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 7158278;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42f50000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 187904819;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 142112888;
            result[3] += 60003219;
            result[4] += 0;
            result[5] += 12632256;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 194187351;
            result[3] += 20561013;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 212176528;
            result[3] += 2571836;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 13215283;
            result[1] += 135456660;
            result[2] += 0;
            result[3] += 0;
            result[4] += 66076419;
            result[5] += 0;
          } else {
            result[0] += 5195524;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 203491394;
            result[5] += 6061445;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 157774308;
            result[1] += 3408704;
            result[2] += 0;
            result[3] += 3895661;
            result[4] += 33600084;
            result[5] += 16069605;
          } else {
            result[0] += 7669584;
            result[1] += 199409195;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7669584;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 245146;
            result[1] += 0;
            result[2] += 490293;
            result[3] += 12502473;
            result[4] += 12257326;
            result[5] += 189253125;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42870000))) ) ) {
            result[0] += 93689237;
            result[1] += 4210752;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 60003219;
            result[5] += 38949458;
          } else {
            result[0] += 6446479;
            result[1] += 4834859;
            result[2] += 7655194;
            result[3] += 93876864;
            result[4] += 18533629;
            result[5] += 83401334;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 107374182;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 107374182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 107374182;
          } else {
            result[0] += 212421370;
            result[1] += 0;
            result[2] += 0;
            result[3] += 997283;
            result[4] += 1329711;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42dc0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 76695844;
            result[4] += 15339168;
            result[5] += 122713351;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 150323855;
            result[3] += 51539607;
            result[4] += 4294967;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9336885;
            result[3] += 116711067;
            result[4] += 0;
            result[5] += 88700411;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 101203252;
            result[3] += 101203252;
            result[4] += 0;
            result[5] += 12341860;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 78090314;
            result[4] += 0;
            result[5] += 29283867;
          } else {
            result[0] += 9544371;
            result[1] += 0;
            result[2] += 190887435;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 4772185;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 202817900;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 16207423;
            result[1] += 0;
            result[2] += 158022381;
            result[3] += 4051855;
            result[4] += 0;
            result[5] += 36466703;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 15123124;
            result[1] += 0;
            result[2] += 164337950;
            result[3] += 32262665;
            result[4] += 0;
            result[5] += 3024624;
          } else {
            result[0] += 1529546;
            result[1] += 0;
            result[2] += 206488812;
            result[3] += 6424096;
            result[4] += 0;
            result[5] += 305909;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x420a0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 213793927;
            result[5] += 954437;
          } else {
            result[0] += 31580641;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 157903209;
            result[5] += 25264513;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6507526;
            result[3] += 0;
            result[4] += 78090314;
            result[5] += 130150524;
          } else {
            result[0] += 112042625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 23342213;
            result[4] += 70026640;
            result[5] += 9336885;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 202116108;
            result[5] += 12632256;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1829202;
            result[4] += 365840;
            result[5] += 212553321;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25430727;
            result[4] += 22605091;
            result[5] += 166712546;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 199409195;
          } else {
            result[0] += 8103711;
            result[1] += 8103711;
            result[2] += 0;
            result[3] += 8103711;
            result[4] += 158022381;
            result[5] += 32414847;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 835596;
            result[1] += 835596;
            result[2] += 835596;
            result[3] += 35095063;
            result[4] += 11698354;
            result[5] += 165448156;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 161061273;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42850000))) ) ) {
            result[0] += 134917994;
            result[1] += 27076967;
            result[2] += 6068975;
            result[3] += 4201598;
            result[4] += 34546476;
            result[5] += 7936352;
          } else {
            result[0] += 11959352;
            result[1] += 12479323;
            result[2] += 17679042;
            result[3] += 100874534;
            result[4] += 7279605;
            result[5] += 64476506;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 194132521;
            result[1] += 572662;
            result[2] += 3722304;
            result[3] += 1431655;
            result[4] += 14889219;
            result[5] += 0;
          } else {
            result[0] += 12632256;
            result[1] += 202116108;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 181062346;
            result[2] += 0;
            result[3] += 12632256;
            result[4] += 21053761;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 214748364;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 195225786;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 168730858;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 6983686;
            result[2] += 17459216;
            result[3] += 151895184;
            result[4] += 5237764;
            result[5] += 33172511;
          } else {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 120795955;
            result[3] += 67108863;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 11930464;
            result[1] += 47721858;
            result[2] += 119304647;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 23860929;
          } else {
            result[0] += 180111531;
            result[1] += 0;
            result[2] += 27709466;
            result[3] += 0;
            result[4] += 6927366;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 57615414;
            result[3] += 52377649;
            result[4] += 0;
            result[5] += 104755299;
          } else {
            result[0] += 2053916;
            result[1] += 912851;
            result[2] += 198773459;
            result[3] += 11182433;
            result[4] += 228212;
            result[5] += 1597490;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 865920;
            result[1] += 0;
            result[2] += 865920;
            result[3] += 865920;
            result[4] += 204357314;
            result[5] += 7793287;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 149556896;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 11504376;
          } else {
            result[0] += 0;
            result[1] += 4609233;
            result[2] += 0;
            result[3] += 15922805;
            result[4] += 13408678;
            result[5] += 180807647;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5237764;
            result[3] += 73328709;
            result[4] += 0;
            result[5] += 136181889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 165941918;
            result[4] += 0;
            result[5] += 48806446;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x41fc0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 161061273;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 30678337;
            result[1] += 42730541;
            result[2] += 0;
            result[3] += 2191309;
            result[4] += 132574245;
            result[5] += 6573929;
          } else {
            result[0] += 193273528;
            result[1] += 208493;
            result[2] += 0;
            result[3] += 5837819;
            result[4] += 11884132;
            result[5] += 3544390;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 8053063;
            result[1] += 1073741;
            result[2] += 46707769;
            result[3] += 70866960;
            result[4] += 22011707;
            result[5] += 66035122;
          } else {
            result[0] += 113948111;
            result[1] += 37982703;
            result[2] += 51130563;
            result[3] += 7304366;
            result[4] += 4382619;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 161061273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 139586437;
            result[4] += 10737418;
            result[5] += 32212254;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ec0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 96636764;
            result[4] += 0;
            result[5] += 64424509;
          } else {
            result[0] += 0;
            result[1] += 19272289;
            result[2] += 154178313;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 5506368;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 214748364;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 153391689;
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 150904256;
            result[3] += 60942103;
            result[4] += 0;
            result[5] += 2902004;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 196381728;
            result[3] += 15541000;
            result[4] += 0;
            result[5] += 2825636;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 107374182;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 992673;
            result[1] += 0;
            result[2] += 208130541;
            result[3] += 4963367;
            result[4] += 0;
            result[5] += 661782;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 2006994;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 210734376;
            result[5] += 2006994;
          } else {
            result[0] += 0;
            result[1] += 11302545;
            result[2] += 0;
            result[3] += 39558909;
            result[4] += 56512727;
            result[5] += 107374182;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 61356675;
            result[5] += 153391689;
          } else {
            result[0] += 174795180;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2497074;
            result[4] += 29964888;
            result[5] += 7491222;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 4994148;
            result[2] += 0;
            result[3] += 0;
            result[4] += 199765920;
            result[5] += 9988296;
          } else {
            result[0] += 0;
            result[1] += 713449;
            result[2] += 0;
            result[3] += 9512662;
            result[4] += 12604278;
            result[5] += 191917973;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 1512312;
            result[2] += 7561562;
            result[3] += 71078684;
            result[4] += 10586186;
            result[5] += 124009619;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1301505;
            result[3] += 156180628;
            result[4] += 1301505;
            result[5] += 55964725;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 16702650;
            result[1] += 39370533;
            result[2] += 1193046;
            result[3] += 10737418;
            result[4] += 138393390;
            result[5] += 8351325;
          } else {
            result[0] += 0;
            result[1] += 206644652;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8103711;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 189341515;
            result[1] += 1209849;
            result[2] += 1411491;
            result[3] += 4839399;
            result[4] += 12905066;
            result[5] += 5041041;
          } else {
            result[0] += 63655052;
            result[1] += 6295554;
            result[2] += 37773328;
            result[3] += 59458016;
            result[4] += 11891603;
            result[5] += 35674809;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 161061273;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9336885;
            result[3] += 121379510;
            result[4] += 0;
            result[5] += 84031968;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41902119;
            result[3] += 162370714;
            result[4] += 0;
            result[5] += 10475529;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ed0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 103671624;
            result[3] += 59240928;
            result[4] += 4936744;
            result[5] += 46899068;
          } else {
            result[0] += 26247022;
            result[1] += 0;
            result[2] += 169412598;
            result[3] += 16702650;
            result[4] += 2386092;
            result[5] += 0;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24778657;
            result[3] += 165191049;
            result[4] += 0;
            result[5] += 24778657;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 64424509;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 107374182;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 175703207;
            result[3] += 39045157;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 3112295;
            result[1] += 0;
            result[2] += 161839347;
            result[3] += 12449180;
            result[4] += 0;
            result[5] += 37347541;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 183545610;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 7341824;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 207820998;
            result[3] += 6297606;
            result[4] += 0;
            result[5] += 629760;
          }
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
