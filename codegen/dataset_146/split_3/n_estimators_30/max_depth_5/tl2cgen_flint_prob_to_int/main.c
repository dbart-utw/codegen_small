
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42940000))) ) ) {
            result[0] += 71582788;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
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
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 142365768;
            result[5] += 799807;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 102261126;
            result[5] += 40904450;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 55063683;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 69747332;
            result[5] += 18354561;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4796784;
            result[4] += 4796784;
            result[5] += 133572006;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 13814222;
            result[1] += 1883757;
            result[2] += 627919;
            result[3] += 24488848;
            result[4] += 30140121;
            result[5] += 72210707;
          } else {
            result[0] += 10569270;
            result[1] += 5765056;
            result[2] += 4804213;
            result[3] += 93201751;
            result[4] += 960842;
            result[5] += 27864441;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 3329432;
            result[1] += 69918072;
            result[2] += 0;
            result[3] += 0;
            result[4] += 64923924;
            result[5] += 4994148;
          } else {
            result[0] += 118708123;
            result[1] += 2624702;
            result[2] += 0;
            result[3] += 3459834;
            result[4] += 10737418;
            result[5] += 7635497;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 2853798;
            result[1] += 0;
            result[2] += 29489254;
            result[3] += 51844012;
            result[4] += 1902532;
            result[5] += 57075977;
          } else {
            result[0] += 115964116;
            result[1] += 2863311;
            result[2] += 8589934;
            result[3] += 4294967;
            result[4] += 11453246;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 4210752;
            result[1] += 117901063;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21053761;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10226112;
            result[5] += 132939463;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1101273;
            result[1] += 3303820;
            result[2] += 12114010;
            result[3] += 83696798;
            result[4] += 6607641;
            result[5] += 36342030;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ea0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 102647017;
            result[3] += 27012372;
            result[4] += 0;
            result[5] += 13506186;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 131235111;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1581940;
            result[1] += 0;
            result[2] += 101244164;
            result[3] += 37175591;
            result[4] += 0;
            result[5] += 3163880;
          } else {
            result[0] += 5052902;
            result[1] += 0;
            result[2] += 133059771;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1789569;
            result[1] += 0;
            result[2] += 123927702;
            result[3] += 16553519;
            result[4] += 0;
            result[5] += 894784;
          } else {
            result[0] += 3734754;
            result[1] += 0;
            result[2] += 139430822;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 0;
            result[5] += 95443717;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 142259465;
            result[5] += 906111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 117469190;
            result[5] += 25696385;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 129530759;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13634816;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5506368;
            result[4] += 77089156;
            result[5] += 60570051;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 10226112;
            result[2] += 0;
            result[3] += 10226112;
            result[4] += 98852421;
            result[5] += 23860929;
          } else {
            result[0] += 0;
            result[1] += 159783;
            result[2] += 0;
            result[3] += 8628282;
            result[4] += 5272839;
            result[5] += 129104671;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 1735340;
            result[2] += 1735340;
            result[3] += 27765445;
            result[4] += 18221073;
            result[5] += 93708377;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 104391566;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 10737418;
            result[1] += 50107951;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 74267142;
            result[5] += 3579139;
          } else {
            result[0] += 118418053;
            result[1] += 3353636;
            result[2] += 1503354;
            result[3] += 4163134;
            result[4] += 11101692;
            result[5] += 4625705;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 4450743;
            result[1] += 2225371;
            result[2] += 11126858;
            result[3] += 60826825;
            result[4] += 7417905;
            result[5] += 57117872;
          } else {
            result[0] += 50888238;
            result[1] += 4071059;
            result[2] += 65815454;
            result[3] += 10177647;
            result[4] += 678509;
            result[5] += 11534667;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c60000))) ) ) {
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 114532461;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 33405301;
            result[2] += 62038416;
            result[3] += 0;
            result[4] += 0;
            result[5] += 47721858;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 80004292;
            result[4] += 0;
            result[5] += 15439424;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 107374182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 4405094;
            result[1] += 0;
            result[2] += 132152839;
            result[3] += 2202547;
            result[4] += 0;
            result[5] += 4405094;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d70000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 86320421;
            result[3] += 52634403;
            result[4] += 0;
            result[5] += 4210752;
          } else {
            result[0] += 3046076;
            result[1] += 0;
            result[2] += 130981272;
            result[3] += 9138228;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1704352;
            result[1] += 0;
            result[2] += 136348168;
            result[3] += 5113056;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 131010008;
            result[3] += 12155567;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 141314297;
            result[3] += 1851279;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2818220;
            result[3] += 0;
            result[4] += 136965492;
            result[5] += 3381864;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 107374182;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x427e0000))) ) ) {
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
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 410805;
            result[1] += 410805;
            result[2] += 0;
            result[3] += 2464830;
            result[4] += 2464830;
            result[5] += 137414305;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 11312811;
            result[1] += 1560387;
            result[2] += 3120775;
            result[3] += 28086979;
            result[4] += 21065234;
            result[5] += 78019387;
          } else {
            result[0] += 1084587;
            result[1] += 0;
            result[2] += 2169175;
            result[3] += 109543357;
            result[4] += 0;
            result[5] += 30368455;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 2753184;
            result[2] += 0;
            result[3] += 0;
            result[4] += 140412392;
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
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 87490074;
            result[2] += 0;
            result[3] += 0;
            result[4] += 55675501;
            result[5] += 0;
          } else {
            result[0] += 672138;
            result[1] += 142157368;
            result[2] += 0;
            result[3] += 0;
            result[4] += 336069;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 136007297;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          } else {
            result[0] += 1344277;
            result[1] += 12770638;
            result[2] += 672138;
            result[3] += 39656192;
            result[4] += 5377110;
            result[5] += 83345218;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 28922338;
            result[1] += 34706806;
            result[2] += 0;
            result[3] += 1446116;
            result[4] += 75198080;
            result[5] += 2892233;
          } else {
            result[0] += 117327017;
            result[1] += 554475;
            result[2] += 5766545;
            result[3] += 7097286;
            result[4] += 8649817;
            result[5] += 3770433;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5506368;
            result[3] += 0;
            result[4] += 0;
            result[5] += 137659208;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 120895375;
            result[4] += 0;
            result[5] += 22270200;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18472977;
            result[3] += 48491566;
            result[4] += 0;
            result[5] += 76201032;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 40904450;
            result[4] += 0;
            result[5] += 30678337;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 121690740;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 114532461;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 505885;
            result[1] += 505885;
            result[2] += 111294794;
            result[3] += 26811927;
            result[4] += 505885;
            result[5] += 3541198;
          } else {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
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
            result[3] += 71582788;
            result[4] += 71582788;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x43028000))) ) ) {
            result[0] += 1446116;
            result[1] += 0;
            result[2] += 133249346;
            result[3] += 7230584;
            result[4] += 619764;
            result[5] += 619764;
          } else {
            result[0] += 95443717;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 827546;
            result[1] += 827546;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141510483;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 78090314;
            result[5] += 65075262;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 24683720;
            result[2] += 0;
            result[3] += 54304184;
            result[4] += 39493952;
            result[5] += 24683720;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 59652323;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 83513252;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3004709;
            result[4] += 6539662;
            result[5] += 133621204;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 131235111;
            result[1] += 3976821;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7953643;
            result[5] += 0;
          } else {
            result[0] += 329874;
            result[1] += 1319498;
            result[2] += 4948119;
            result[3] += 49151315;
            result[4] += 9566363;
            result[5] += 77850405;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 7535030;
            result[1] += 22605091;
            result[2] += 0;
            result[3] += 7535030;
            result[4] += 105490424;
            result[5] += 0;
          } else {
            result[0] += 38177487;
            result[1] += 104988089;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 111326436;
            result[1] += 1768841;
            result[2] += 1437183;
            result[3] += 4864313;
            result[4] += 19788909;
            result[5] += 3979892;
          } else {
            result[0] += 3534952;
            result[1] += 118420908;
            result[2] += 7069905;
            result[3] += 1767476;
            result[4] += 10604857;
            result[5] += 1767476;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 997669;
            result[1] += 498834;
            result[2] += 23944068;
            result[3] += 58862501;
            result[4] += 12969703;
            result[5] += 45892798;
          } else {
            result[0] += 63629145;
            result[1] += 0;
            result[2] += 56398560;
            result[3] += 5784467;
            result[4] += 14461169;
            result[5] += 2892233;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 131235111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28071681;
            result[3] += 78600708;
            result[4] += 0;
            result[5] += 36493186;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44050946;
            result[3] += 0;
            result[4] += 22025473;
            result[5] += 77089156;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16519104;
            result[3] += 126646471;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 7953643;
            result[1] += 31814572;
            result[2] += 39768215;
            result[3] += 0;
            result[4] += 55675501;
            result[5] += 7953643;
          } else {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 108169546;
            result[3] += 31814572;
            result[4] += 0;
            result[5] += 3181457;
          } else {
            result[0] += 929646;
            result[1] += 0;
            result[2] += 135356545;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 743717;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 2147483;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 0;
            result[4] += 136007297;
            result[5] += 1431655;
          } else {
            result[0] += 32723560;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49085340;
            result[5] += 61356675;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 6507526;
            result[1] += 30368455;
            result[2] += 0;
            result[3] += 0;
            result[4] += 97612893;
            result[5] += 8676701;
          } else {
            result[0] += 115172307;
            result[1] += 3999038;
            result[2] += 0;
            result[3] += 6398461;
            result[4] += 11197307;
            result[5] += 6398461;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 92035013;
            result[5] += 51130563;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 206290;
            result[3] += 5776132;
            result[4] += 2888066;
            result[5] += 134295086;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 7535030;
            result[2] += 0;
            result[3] += 3767515;
            result[4] += 67815273;
            result[5] += 64047757;
          } else {
            result[0] += 5713925;
            result[1] += 317440;
            result[2] += 0;
            result[3] += 46346284;
            result[4] += 7618567;
            result[5] += 83169359;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 142483835;
            result[2] += 0;
            result[3] += 0;
            result[4] += 681740;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 4473924;
            result[1] += 4473924;
            result[2] += 0;
            result[3] += 0;
            result[4] += 134217727;
            result[5] += 0;
          } else {
            result[0] += 8421504;
            result[1] += 67372036;
            result[2] += 29475265;
            result[3] += 12632256;
            result[4] += 25264513;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42980000))) ) ) {
            result[0] += 59279496;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 23488102;
            result[5] += 2236962;
          } else {
            result[0] += 133677680;
            result[1] += 2202547;
            result[2] += 169426;
            result[3] += 2541400;
            result[4] += 3896814;
            result[5] += 677706;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 644889;
            result[1] += 6448899;
            result[2] += 21281369;
            result[3] += 65778778;
            result[4] += 11608019;
            result[5] += 37403619;
          } else {
            result[0] += 38083453;
            result[1] += 705249;
            result[2] += 78987904;
            result[3] += 11283986;
            result[4] += 7757740;
            result[5] += 6347242;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2556528;
            result[3] += 2556528;
            result[4] += 10226112;
            result[5] += 127826407;
          } else {
            result[0] += 0;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 66076419;
            result[4] += 22025473;
            result[5] += 22025473;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 3670912;
            result[2] += 0;
            result[3] += 132152839;
            result[4] += 0;
            result[5] += 7341824;
          } else {
            result[0] += 17895697;
            result[1] += 17895697;
            result[2] += 8947848;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 60570051;
            result[3] += 55063683;
            result[4] += 0;
            result[5] += 27531841;
          } else {
            result[0] += 2651214;
            result[1] += 0;
            result[2] += 106048575;
            result[3] += 21209715;
            result[4] += 0;
            result[5] += 13256071;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e00000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 5630106;
            result[1] += 0;
            result[2] += 96516118;
            result[3] += 38606447;
            result[4] += 0;
            result[5] += 2412902;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 129602521;
            result[3] += 13563054;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 132504310;
            result[3] += 10661266;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 418612;
            result[1] += 0;
            result[2] += 141491125;
            result[3] += 1255838;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
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
          result[3] += 0;
          result[4] += 143165576;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 723058;
            result[4] += 127981348;
            result[5] += 14461169;
          } else {
            result[0] += 110902911;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6049249;
            result[4] += 6049249;
            result[5] += 20164165;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 771366;
            result[2] += 0;
            result[3] += 6479476;
            result[4] += 12341860;
            result[5] += 123572873;
          } else {
            result[0] += 653724;
            result[1] += 0;
            result[2] += 5229792;
            result[3] += 92828821;
            result[4] += 1961172;
            result[5] += 42492066;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
            result[0] += 3767515;
            result[1] += 135630546;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3767515;
            result[5] += 0;
          } else {
            result[0] += 12001904;
            result[1] += 17145578;
            result[2] += 2571836;
            result[3] += 16288299;
            result[4] += 88299726;
            result[5] += 6858231;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 68641029;
            result[1] += 3268620;
            result[2] += 9152137;
            result[3] += 20047538;
            result[4] += 10895401;
            result[5] += 31160848;
          } else {
            result[0] += 127956300;
            result[1] += 1157227;
            result[2] += 4628910;
            result[3] += 2149136;
            result[4] += 7274001;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 123642997;
            result[4] += 0;
            result[5] += 19522578;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 10737418;
            result[5] += 121690740;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37347541;
            result[3] += 85069400;
            result[4] += 6224590;
            result[5] += 14524043;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 127258290;
            result[3] += 0;
            result[4] += 15907286;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 11930464;
            result[3] += 41756626;
            result[4] += 5965232;
            result[5] += 77548020;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 126122055;
            result[3] += 13634816;
            result[4] += 0;
            result[5] += 3408704;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42680000))) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 22025473;
            result[1] += 0;
            result[2] += 55063683;
            result[3] += 22025473;
            result[4] += 44050946;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 99339379;
            result[3] += 38956619;
            result[4] += 0;
            result[5] += 4869577;
          } else {
            result[0] += 1551930;
            result[1] += 0;
            result[2] += 125318377;
            result[3] += 15907286;
            result[4] += 0;
            result[5] += 387982;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 71582788;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2941758;
            result[1] += 0;
            result[2] += 137282059;
            result[3] += 2941758;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141481275;
            result[5] += 1684300;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 119304647;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11012736;
            result[4] += 88101893;
            result[5] += 44050946;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 137659208;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5506368;
            result[5] += 0;
          } else {
            result[0] += 36552913;
            result[1] += 18276456;
            result[2] += 0;
            result[3] += 9138228;
            result[4] += 57875445;
            result[5] += 21322532;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 768055;
            result[1] += 153611;
            result[2] += 0;
            result[3] += 7219723;
            result[4] += 7680556;
            result[5] += 127343629;
          } else {
            result[0] += 6448899;
            result[1] += 1934669;
            result[2] += 0;
            result[3] += 45142298;
            result[4] += 16767139;
            result[5] += 72872568;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 124076832;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19088743;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3670912;
            result[1] += 22025473;
            result[2] += 3670912;
            result[3] += 7341824;
            result[4] += 106456454;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4772185;
            result[1] += 19088743;
            result[2] += 0;
            result[3] += 0;
            result[4] += 100215903;
            result[5] += 19088743;
          } else {
            result[0] += 125467986;
            result[1] += 3962146;
            result[2] += 264143;
            result[3] += 1584858;
            result[4] += 9641224;
            result[5] += 2245216;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 2520520;
            result[1] += 0;
            result[2] += 11090291;
            result[3] += 84689495;
            result[4] += 1512312;
            result[5] += 43352956;
          } else {
            result[0] += 44453238;
            result[1] += 3922344;
            result[2] += 51644203;
            result[3] += 9805861;
            result[4] += 7844689;
            result[5] += 25495239;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 7738679;
            result[1] += 0;
            result[2] += 7738679;
            result[3] += 0;
            result[4] += 46432078;
            result[5] += 81256138;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 100215903;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 30140121;
            result[2] += 52745212;
            result[3] += 15070060;
            result[4] += 0;
            result[5] += 45210182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11453246;
            result[3] += 131712330;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 79536431;
            result[3] += 53024287;
            result[4] += 0;
            result[5] += 10604857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 126646471;
            result[3] += 11012736;
            result[4] += 0;
            result[5] += 5506368;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42e10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 117010326;
            result[3] += 24778657;
            result[4] += 0;
            result[5] += 1376592;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2511676;
            result[1] += 0;
            result[2] += 123072162;
            result[3] += 16325899;
            result[4] += 0;
            result[5] += 1255838;
          } else {
            result[0] += 305257;
            result[1] += 0;
            result[2] += 140418262;
            result[3] += 2442056;
            result[4] += 0;
            result[5] += 0;
          }
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
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 139874413;
            result[5] += 3291162;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 71582788;
            result[2] += 0;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 13015052;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13015052;
            result[5] += 117135471;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42960000))) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 104120419;
            result[5] += 39045157;
          } else {
            result[0] += 132152839;
            result[1] += 11012736;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 14316557;
          } else {
            result[0] += 171867;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4296685;
            result[4] += 4640420;
            result[5] += 134056602;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 712266;
            result[2] += 0;
            result[3] += 24929329;
            result[4] += 12108531;
            result[5] += 105415449;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 2272469;
            result[2] += 2272469;
            result[3] += 47721858;
            result[4] += 9089877;
            result[5] += 81808900;
          } else {
            result[0] += 1278264;
            result[1] += 0;
            result[2] += 1278264;
            result[3] += 121435087;
            result[4] += 0;
            result[5] += 19173961;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 130150524;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13015052;
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 3355443;
            result[1] += 10066329;
            result[2] += 0;
            result[3] += 0;
            result[4] += 126388360;
            result[5] += 3355443;
          } else {
            result[0] += 0;
            result[1] += 121690740;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
            result[0] += 42107522;
            result[1] += 6737203;
            result[2] += 0;
            result[3] += 37054619;
            result[4] += 28633115;
            result[5] += 28633115;
          } else {
            result[0] += 124619430;
            result[1] += 2535084;
            result[2] += 667127;
            result[3] += 2535084;
            result[4] += 11341168;
            result[5] += 1467680;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 17725261;
            result[1] += 6135667;
            result[2] += 17043521;
            result[3] += 42267932;
            result[4] += 11589594;
            result[5] += 48403599;
          } else {
            result[0] += 129803456;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 3817748;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 5726623;
            result[3] += 28633115;
            result[4] += 40086361;
            result[5] += 62992853;
          } else {
            result[0] += 1491308;
            result[1] += 3728270;
            result[2] += 32808777;
            result[3] += 85004561;
            result[4] += 1491308;
            result[5] += 18641351;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 37347541;
            result[1] += 0;
            result[2] += 6224590;
            result[3] += 0;
            result[4] += 43572131;
            result[5] += 56021312;
          } else {
            result[0] += 6224590;
            result[1] += 0;
            result[2] += 102705739;
            result[3] += 26454508;
            result[4] += 1556147;
            result[5] += 6224590;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 2069863;
            result[1] += 0;
            result[2] += 114877438;
            result[3] += 21043614;
            result[4] += 1034931;
            result[5] += 4139727;
          } else {
            result[0] += 95443717;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 306564;
            result[1] += 0;
            result[2] += 140099932;
            result[3] += 2452515;
            result[4] += 0;
            result[5] += 306564;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 142427609;
            result[5] += 737966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 131235111;
            result[5] += 11930464;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95443717;
            result[5] += 47721858;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2426535;
            result[1] += 4853070;
            result[2] += 0;
            result[3] += 21838816;
            result[4] += 94634872;
            result[5] += 19412281;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42500000))) ) ) {
            result[0] += 143165576;
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
            result[4] += 143165576;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 95443717;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
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
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 630685;
            result[1] += 157671;
            result[2] += 315342;
            result[3] += 9775623;
            result[4] += 4730140;
            result[5] += 127556113;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 6465542;
            result[1] += 4618244;
            result[2] += 2770946;
            result[3] += 15702030;
            result[4] += 19396626;
            result[5] += 94212185;
          } else {
            result[0] += 3463683;
            result[1] += 3463683;
            result[2] += 577280;
            result[3] += 90055765;
            result[4] += 3463683;
            result[5] += 42141480;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bd0000))) ) ) {
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
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 114532461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 10526880;
            result[1] += 11579568;
            result[2] += 1052688;
            result[3] += 10526880;
            result[4] += 102110742;
            result[5] += 7368816;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            result[0] += 128377907;
            result[1] += 2617286;
            result[2] += 392592;
            result[3] += 1962964;
            result[4] += 6543216;
            result[5] += 3271608;
          } else {
            result[0] += 49557314;
            result[1] += 2753184;
            result[2] += 19272289;
            result[3] += 28908433;
            result[4] += 16519104;
            result[5] += 26155249;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 1173488;
            result[2] += 21122789;
            result[3] += 86838136;
            result[4] += 2346976;
            result[5] += 31684184;
          } else {
            result[0] += 1835456;
            result[1] += 917728;
            result[2] += 74335972;
            result[3] += 37626850;
            result[4] += 4588640;
            result[5] += 23860929;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 29475265;
            result[1] += 0;
            result[2] += 88425797;
            result[3] += 0;
            result[4] += 12632256;
            result[5] += 12632256;
          } else {
            result[0] += 1999089;
            result[1] += 0;
            result[2] += 128864396;
            result[3] += 10610552;
            result[4] += 153776;
            result[5] += 1537761;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 1486147;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141679428;
            result[5] += 0;
          } else {
            result[0] += 15339168;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 0;
            result[4] += 81808900;
            result[5] += 30678337;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 134984686;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8180890;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 20452225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 122713351;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 11012736;
            result[2] += 0;
            result[3] += 0;
            result[4] += 99114629;
            result[5] += 33038209;
          } else {
            result[0] += 380759;
            result[1] += 380759;
            result[2] += 380759;
            result[3] += 3617215;
            result[4] += 3426835;
            result[5] += 134979246;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 130150524;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8676701;
            result[5] += 4338350;
          } else {
            result[0] += 2361494;
            result[1] += 1475933;
            result[2] += 0;
            result[3] += 52838429;
            result[4] += 6789295;
            result[5] += 79700424;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 5402474;
            result[1] += 40518559;
            result[2] += 2701237;
            result[3] += 0;
            result[4] += 83738356;
            result[5] += 10804949;
          } else {
            result[0] += 117887358;
            result[1] += 2795747;
            result[2] += 2795747;
            result[3] += 4543089;
            result[4] += 8736711;
            result[5] += 6406921;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 3046076;
            result[1] += 1740614;
            result[2] += 30895914;
            result[3] += 54394215;
            result[4] += 13489765;
            result[5] += 39598989;
          } else {
            result[0] += 103942130;
            result[1] += 0;
            result[2] += 25495239;
            result[3] += 0;
            result[4] += 3922344;
            result[5] += 9805861;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 20452225;
            result[4] += 0;
            result[5] += 122713351;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 114532461;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 20452225;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 3491843;
            result[1] += 0;
            result[2] += 93581401;
            result[3] += 44695594;
            result[4] += 698368;
            result[5] += 698368;
          } else {
            result[0] += 769707;
            result[1] += 0;
            result[2] += 125462306;
            result[3] += 16163855;
            result[4] += 0;
            result[5] += 769707;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 107374182;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81808900;
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 130805958;
            result[3] += 11329649;
            result[4] += 0;
            result[5] += 1029968;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 3046076;
            result[1] += 0;
            result[2] += 127935196;
            result[3] += 12184304;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 141861106;
            result[3] += 978352;
            result[4] += 0;
            result[5] += 326117;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 1645581;
            result[1] += 1645581;
            result[2] += 0;
            result[3] += 0;
            result[4] += 133840615;
            result[5] += 6033798;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 142001628;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1163947;
            result[5] += 0;
          } else {
            result[0] += 16106127;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 75161927;
            result[5] += 51897521;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3050712;
            result[4] += 5665608;
            result[5] += 134449255;
          } else {
            result[0] += 675309;
            result[1] += 1350618;
            result[2] += 675309;
            result[3] += 27687682;
            result[4] += 12155567;
            result[5] += 100621089;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 1523038;
            result[2] += 0;
            result[3] += 15230380;
            result[4] += 19799494;
            result[5] += 106612663;
          } else {
            result[0] += 7655913;
            result[1] += 0;
            result[2] += 0;
            result[3] += 64309670;
            result[4] += 15311826;
            result[5] += 55888166;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 142473955;
            result[2] += 0;
            result[3] += 0;
            result[4] += 691621;
            result[5] += 0;
          } else {
            result[0] += 15907286;
            result[1] += 106048575;
            result[2] += 5302428;
            result[3] += 5302428;
            result[4] += 10604857;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 119304647;
            result[2] += 0;
            result[3] += 5965232;
            result[4] += 17895697;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 3624444;
            result[1] += 65240009;
            result[2] += 0;
            result[3] += 0;
            result[4] += 74301121;
            result[5] += 0;
          } else {
            result[0] += 118063558;
            result[1] += 4083581;
            result[2] += 2041790;
            result[3] += 7566637;
            result[4] += 5885162;
            result[5] += 5524846;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 2386092;
            result[1] += 2386092;
            result[2] += 32450864;
            result[3] += 68242258;
            result[4] += 4772185;
            result[5] += 32928082;
          } else {
            result[0] += 105613949;
            result[1] += 0;
            result[2] += 25816743;
            result[3] += 0;
            result[4] += 11734883;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6983686;
            result[3] += 122214516;
            result[4] += 0;
            result[5] += 13967373;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 62038416;
            result[3] += 52494044;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 3003473;
            result[1] += 0;
            result[2] += 102118103;
            result[3] += 30034736;
            result[4] += 0;
            result[5] += 8009263;
          } else {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cf0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 138432830;
            result[3] += 4732746;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 65617555;
            result[3] += 77548020;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6817408;
            result[1] += 0;
            result[2] += 129530759;
            result[3] += 6817408;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42960000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 143165576;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 0;
            result[4] += 0;
            result[5] += 81808900;
          } else {
            result[0] += 430573;
            result[1] += 0;
            result[2] += 138213985;
            result[3] += 4521018;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 5506368;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82595524;
            result[5] += 55063683;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
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
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5142441;
            result[4] += 1234186;
            result[5] += 136788948;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5302428;
            result[3] += 31814572;
            result[4] += 37117001;
            result[5] += 68931573;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 111351003;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6362914;
            result[4] += 9544371;
            result[5] += 15907286;
          } else {
            result[0] += 5402474;
            result[1] += 13506186;
            result[2] += 0;
            result[3] += 9904536;
            result[4] += 17107836;
            result[5] += 97244542;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 3046076;
            result[1] += 6853671;
            result[2] += 6853671;
            result[3] += 39598989;
            result[4] += 2284557;
            result[5] += 84528611;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5614336;
            result[3] += 111351003;
            result[4] += 0;
            result[5] += 26200236;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b00000))) ) ) {
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
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 116869858;
            result[1] += 6678277;
            result[2] += 0;
            result[3] += 1669569;
            result[4] += 17113086;
            result[5] += 834784;
          } else {
            result[0] += 30527953;
            result[1] += 7368816;
            result[2] += 2631720;
            result[3] += 24738169;
            result[4] += 46581446;
            result[5] += 31317469;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 141864071;
            result[1] += 0;
            result[2] += 216917;
            result[3] += 433835;
            result[4] += 433835;
            result[5] += 216917;
          } else {
            result[0] += 84430981;
            result[1] += 0;
            result[2] += 36709122;
            result[3] += 11012736;
            result[4] += 7341824;
            result[5] += 3670912;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 76426736;
            result[4] += 0;
            result[5] += 44133749;
          } else {
            result[0] += 9805861;
            result[1] += 392234;
            result[2] += 93744035;
            result[3] += 30986522;
            result[4] += 392234;
            result[5] += 7844689;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 117600294;
            result[3] += 25565281;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 944987;
            result[1] += 0;
            result[2] += 137968146;
            result[3] += 3779949;
            result[4] += 0;
            result[5] += 472493;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2228258;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 138151996;
            result[5] += 2785322;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
            result[0] += 127153637;
            result[1] += 7535030;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8476909;
            result[5] += 0;
          } else {
            result[0] += 25400344;
            result[1] += 0;
            result[2] += 4618244;
            result[3] += 0;
            result[4] += 62346299;
            result[5] += 50800688;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 79536431;
            result[5] += 63629145;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4301111;
            result[4] += 2457778;
            result[5] += 136406686;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1929455;
            result[1] += 3473019;
            result[2] += 1157673;
            result[3] += 30099501;
            result[4] += 20066334;
            result[5] += 86439593;
          } else {
            result[0] += 32537631;
            result[1] += 13015052;
            result[2] += 84597840;
            result[3] += 13015052;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 61356675;
            result[2] += 0;
            result[3] += 0;
            result[4] += 81808900;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 17530478;
            result[2] += 0;
            result[3] += 2921746;
            result[4] += 116869858;
            result[5] += 5843492;
          } else {
            result[0] += 20452225;
            result[1] += 30678337;
            result[2] += 40904450;
            result[3] += 30678337;
            result[4] += 10226112;
            result[5] += 10226112;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 653724;
            result[2] += 4576068;
            result[3] += 78446891;
            result[4] += 9805861;
            result[5] += 49683031;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
            result[0] += 128948538;
            result[1] += 2559066;
            result[2] += 710851;
            result[3] += 2416896;
            result[4] += 7250689;
            result[5] += 1279533;
          } else {
            result[0] += 51539607;
            result[1] += 16543577;
            result[2] += 27360532;
            result[3] += 26724240;
            result[4] += 5726623;
            result[5] += 15270994;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 28633115;
            result[5] += 104988089;
          } else {
            result[0] += 0;
            result[1] += 26030104;
            result[2] += 65075262;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 13015052;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 2468372;
            result[2] += 4936744;
            result[3] += 103671624;
            result[4] += 0;
            result[5] += 32088836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16843009;
            result[3] += 36493186;
            result[4] += 0;
            result[5] += 89829381;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12449180;
            result[3] += 130716395;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 54304184;
            result[3] += 59240928;
            result[4] += 0;
            result[5] += 29620464;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 64424509;
            result[3] += 64424509;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 135211933;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 47721858;
            result[3] += 17895697;
            result[4] += 23860929;
            result[5] += 47721858;
          } else {
            result[0] += 117135471;
            result[1] += 0;
            result[2] += 13015052;
            result[3] += 0;
            result[4] += 13015052;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1168698;
            result[1] += 0;
            result[2] += 115116810;
            result[3] += 25127019;
            result[4] += 0;
            result[5] += 1753047;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1460873;
            result[1] += 0;
            result[2] += 124174224;
            result[3] += 13147859;
            result[4] += 0;
            result[5] += 4382619;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 141895815;
            result[3] += 1269761;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 570380;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 136891387;
            result[5] += 5703807;
          } else {
            result[0] += 80530636;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 9761289;
            result[1] += 22776341;
            result[2] += 0;
            result[3] += 0;
            result[4] += 104120419;
            result[5] += 6507526;
          } else {
            result[0] += 128641532;
            result[1] += 2074863;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8299453;
            result[5] += 4149726;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 946549;
            result[4] += 709911;
            result[5] += 141509115;
          } else {
            result[0] += 0;
            result[1] += 1581940;
            result[2] += 0;
            result[3] += 27683951;
            result[4] += 15028430;
            result[5] += 98871254;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 117469190;
            result[5] += 25696385;
          } else {
            result[0] += 6424096;
            result[1] += 1835456;
            result[2] += 917728;
            result[3] += 27531841;
            result[4] += 5506368;
            result[5] += 100950085;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 34087042;
            result[1] += 102261126;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6817408;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 12725829;
            result[1] += 60447687;
            result[2] += 0;
            result[3] += 1590728;
            result[4] += 60447687;
            result[5] += 7953643;
          } else {
            result[0] += 123127436;
            result[1] += 1134234;
            result[2] += 504104;
            result[3] += 5671171;
            result[4] += 6301301;
            result[5] += 6427327;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1709439;
            result[1] += 2136799;
            result[2] += 8974558;
            result[3] += 82053106;
            result[4] += 3418879;
            result[5] += 44872792;
          } else {
            result[0] += 59476875;
            result[1] += 0;
            result[2] += 52634403;
            result[3] += 6842472;
            result[4] += 4737096;
            result[5] += 19474729;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 59652323;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 11930464;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20452225;
            result[3] += 5113056;
            result[4] += 20452225;
            result[5] += 97148069;
          } else {
            result[0] += 1608601;
            result[1] += 0;
            result[2] += 33780641;
            result[3] += 75604293;
            result[4] += 0;
            result[5] += 32172039;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 47721858;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 126518416;
            result[3] += 16647160;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 89140830;
            result[3] += 51323508;
            result[4] += 0;
            result[5] += 2701237;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 9544371;
            result[1] += 0;
            result[2] += 133621204;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 126260416;
            result[3] += 16905160;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 102261126;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 104988089;
            result[3] += 38177487;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 268603;
            result[1] += 0;
            result[2] += 140479543;
            result[3] += 2148826;
            result[4] += 0;
            result[5] += 268603;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 112487238;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3767515;
            result[4] += 45210182;
            result[5] += 94187879;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
            result[0] += 91105366;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6507526;
            result[4] += 32537631;
            result[5] += 13015052;
          } else {
            result[0] += 0;
            result[1] += 203939;
            result[2] += 0;
            result[3] += 2243335;
            result[4] += 1835456;
            result[5] += 138882845;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 12027460;
            result[1] += 13579390;
            result[2] += 5431756;
            result[3] += 25606851;
            result[4] += 6983686;
            result[5] += 79536431;
          } else {
            result[0] += 2372910;
            result[1] += 2372910;
            result[2] += 6327760;
            result[3] += 90961554;
            result[4] += 0;
            result[5] += 41130441;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 78090314;
            result[2] += 0;
            result[3] += 0;
            result[4] += 65075262;
            result[5] += 0;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 27889398;
            result[1] += 13944699;
            result[2] += 0;
            result[3] += 929646;
            result[4] += 97612893;
            result[5] += 2788939;
          } else {
            result[0] += 118629916;
            result[1] += 2698922;
            result[2] += 1226783;
            result[3] += 4416418;
            result[4] += 11777116;
            result[5] += 4416418;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 4319651;
            result[1] += 2468372;
            result[2] += 17278604;
            result[3] += 59240928;
            result[4] += 7405116;
            result[5] += 52452905;
          } else {
            result[0] += 74991492;
            result[1] += 1947830;
            result[2] += 58434929;
            result[3] += 973915;
            result[4] += 2921746;
            result[5] += 3895661;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 42107522;
            result[2] += 0;
            result[3] += 0;
            result[4] += 101058054;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4338350;
            result[4] += 4338350;
            result[5] += 134488874;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 51539607;
            result[3] += 17179869;
            result[4] += 22906492;
            result[5] += 45812984;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34706806;
            result[3] += 86767016;
            result[4] += 0;
            result[5] += 21691754;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 42949672;
            result[1] += 71582788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 110837865;
            result[3] += 23091222;
            result[4] += 0;
            result[5] += 9236488;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 116322030;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 6362914;
            result[1] += 0;
            result[2] += 54084773;
            result[3] += 82717888;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 113398476;
            result[3] += 29767100;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 136007297;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ff0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 2618882;
            result[1] += 0;
            result[2] += 130071164;
            result[3] += 10475529;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 139696807;
            result[3] += 3468769;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 577280;
            result[2] += 0;
            result[3] += 0;
            result[4] += 137970051;
            result[5] += 4618244;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 121690740;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 297951;
            result[1] += 1191805;
            result[2] += 446926;
            result[3] += 6554927;
            result[4] += 7895708;
            result[5] += 126778257;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2202547;
            result[3] += 46253493;
            result[4] += 0;
            result[5] += 94709535;
          } else {
            result[0] += 3135012;
            result[1] += 0;
            result[2] += 1045004;
            result[3] += 103455416;
            result[4] += 1045004;
            result[5] += 34485138;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42260000))) ) ) {
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
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 643440;
            result[1] += 142522135;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 74446099;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 34359738;
            result[5] += 5726623;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 30047096;
            result[1] += 22093453;
            result[2] += 0;
            result[3] += 0;
            result[4] += 76885217;
            result[5] += 14139810;
          } else {
            result[0] += 114975121;
            result[1] += 3611174;
            result[2] += 3494684;
            result[3] += 5009047;
            result[4] += 5591495;
            result[5] += 10484053;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2763814;
            result[1] += 4974865;
            result[2] += 9396968;
            result[3] += 60251149;
            result[4] += 10502494;
            result[5] += 55276284;
          } else {
            result[0] += 45986518;
            result[1] += 0;
            result[2] += 72016623;
            result[3] += 11279712;
            result[4] += 5206020;
            result[5] += 8676701;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 0;
            result[4] += 0;
            result[5] += 138691652;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 107374182;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 71582788;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 128849018;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 132939463;
            result[3] += 10226112;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26512143;
            result[3] += 100746146;
            result[4] += 0;
            result[5] += 15907286;
          } else {
            result[0] += 1547735;
            result[1] += 1547735;
            result[2] += 90542553;
            result[3] += 43336606;
            result[4] += 773867;
            result[5] += 5417075;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 133059771;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10105805;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 660764;
            result[1] += 0;
            result[2] += 136117425;
            result[3] += 6387387;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 668998;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1337996;
            result[4] += 135806598;
            result[5] += 5351984;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 11012736;
            result[2] += 0;
            result[3] += 55063683;
            result[4] += 11012736;
            result[5] += 66076419;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 124076832;
            result[5] += 19088743;
          } else {
            result[0] += 202211;
            result[1] += 0;
            result[2] += 606633;
            result[3] += 6268549;
            result[4] += 3842014;
            result[5] += 132246168;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 113881708;
            result[1] += 3253763;
            result[2] += 1626881;
            result[3] += 0;
            result[4] += 22776341;
            result[5] += 1626881;
          } else {
            result[0] += 2245734;
            result[1] += 280716;
            result[2] += 7860070;
            result[3] += 46037557;
            result[4] += 10947955;
            result[5] += 75793540;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 3609216;
            result[1] += 61958211;
            result[2] += 0;
            result[3] += 0;
            result[4] += 76395076;
            result[5] += 1203072;
          } else {
            result[0] += 119813874;
            result[1] += 1418561;
            result[2] += 545600;
            result[3] += 6983686;
            result[4] += 9166088;
            result[5] += 5237764;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 799807;
            result[1] += 0;
            result[2] += 31992307;
            result[3] += 66384038;
            result[4] += 1599615;
            result[5] += 42389807;
          } else {
            result[0] += 30246248;
            result[1] += 0;
            result[2] += 100820828;
            result[3] += 7057457;
            result[4] += 0;
            result[5] += 5041041;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42460000))) ) ) {
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
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 369936;
            result[1] += 142055765;
            result[2] += 0;
            result[3] += 0;
            result[4] += 739873;
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
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 137200344;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22025473;
            result[3] += 55063683;
            result[4] += 0;
            result[5] += 66076419;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25696385;
            result[3] += 106456454;
            result[4] += 3670912;
            result[5] += 7341824;
          } else {
            result[0] += 0;
            result[1] += 5302428;
            result[2] += 74234002;
            result[3] += 39768215;
            result[4] += 2651214;
            result[5] += 21209715;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 13015052;
            result[2] += 52060209;
            result[3] += 32537631;
            result[4] += 0;
            result[5] += 45552683;
          } else {
            result[0] += 14810232;
            result[1] += 0;
            result[2] += 116013484;
            result[3] += 9873488;
            result[4] += 0;
            result[5] += 2468372;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 737966;
            result[1] += 0;
            result[2] += 122502503;
            result[3] += 18449172;
            result[4] += 0;
            result[5] += 1475933;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
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
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 138606163;
            result[3] += 4559413;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 142812951;
            result[3] += 352624;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 63629145;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31814572;
            result[5] += 47721858;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 7341824;
            result[1] += 11012736;
            result[2] += 18354561;
            result[3] += 25696385;
            result[4] += 51392771;
            result[5] += 29367297;
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 32537631;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 93274542;
            result[5] += 17353403;
          } else {
            result[0] += 0;
            result[1] += 164747;
            result[2] += 329494;
            result[3] += 8237374;
            result[4] += 5107172;
            result[5] += 129326786;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 17620378;
            result[1] += 4405094;
            result[2] += 3670912;
            result[3] += 33038209;
            result[4] += 9544371;
            result[5] += 74886609;
          } else {
            result[0] += 1084587;
            result[1] += 0;
            result[2] += 5422938;
            result[3] += 117135471;
            result[4] += 0;
            result[5] += 19522578;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 125269879;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 142529285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 636291;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 133621204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 0;
          } else {
            result[0] += 2105376;
            result[1] += 23159137;
            result[2] += 0;
            result[3] += 0;
            result[4] += 113690310;
            result[5] += 4210752;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4149726;
            result[1] += 35272678;
            result[2] += 0;
            result[3] += 2074863;
            result[4] += 99593444;
            result[5] += 2074863;
          } else {
            result[0] += 119952627;
            result[1] += 1257844;
            result[2] += 343048;
            result[3] += 6860970;
            result[4] += 7089669;
            result[5] += 7661416;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1789569;
            result[1] += 0;
            result[2] += 16702650;
            result[3] += 54283614;
            result[4] += 10140895;
            result[5] += 60248846;
          } else {
            result[0] += 59272372;
            result[1] += 0;
            result[2] += 68391198;
            result[3] += 6383178;
            result[4] += 8206943;
            result[5] += 911882;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 113881708;
            result[4] += 3253763;
            result[5] += 16268815;
          } else {
            result[0] += 0;
            result[1] += 27269633;
            result[2] += 81808900;
            result[3] += 20452225;
            result[4] += 3408704;
            result[5] += 10226112;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42f10000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 40904450;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 136940986;
            result[3] += 4668442;
            result[4] += 0;
            result[5] += 1556147;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 57266230;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1731841;
            result[1] += 577280;
            result[2] += 119497073;
            result[3] += 21359380;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 129458234;
            result[3] += 12184304;
            result[4] += 0;
            result[5] += 1523038;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 142243909;
            result[3] += 921666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 137788465;
            result[5] += 5377110;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 134488874;
            result[1] += 8676701;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6507526;
            result[1] += 0;
            result[2] += 8676701;
            result[3] += 0;
            result[4] += 62906086;
            result[5] += 65075262;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5835553;
            result[4] += 2917776;
            result[5] += 134412246;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 7607832;
            result[2] += 0;
            result[3] += 23515118;
            result[4] += 24206739;
            result[5] += 87835885;
          } else {
            result[0] += 0;
            result[1] += 3388534;
            result[2] += 8471335;
            result[3] += 83019091;
            result[4] += 847133;
            result[5] += 47439480;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
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
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 142493437;
            result[2] += 0;
            result[3] += 0;
            result[4] += 672138;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 18472977;
            result[1] += 43103614;
            result[2] += 0;
            result[3] += 3078829;
            result[4] += 75431325;
            result[5] += 3078829;
          } else {
            result[0] += 124502077;
            result[1] += 944987;
            result[2] += 1181234;
            result[3] += 3779949;
            result[4] += 8150515;
            result[5] += 4606813;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 867670;
            result[1] += 1301505;
            result[2] += 21257918;
            result[3] += 55964725;
            result[4] += 4772185;
            result[5] += 59001570;
          } else {
            result[0] += 77089156;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 3303820;
            result[4] += 19822925;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 57266230;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5843492;
            result[3] += 119791604;
            result[4] += 0;
            result[5] += 17530478;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 119304647;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 99114629;
            result[3] += 44050946;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81456276;
            result[3] += 44430696;
            result[4] += 0;
            result[5] += 17278604;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 133404287;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 0;
            result[5] += 95443717;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 125269879;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 125096134;
            result[3] += 18069441;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 89478485;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 113339414;
            result[3] += 25849340;
            result[4] += 0;
            result[5] += 3976821;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 135156313;
            result[3] += 6006947;
            result[4] += 0;
            result[5] += 2002315;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 11930464;
            result[1] += 0;
            result[2] += 123281468;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 142812081;
            result[3] += 353495;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 142427609;
            result[5] += 737966;
          } else {
            result[0] += 3869339;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 119949537;
            result[5] += 19346699;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 107374182;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 81256138;
            result[1] += 17412029;
            result[2] += 0;
            result[3] += 3869339;
            result[4] += 13542689;
            result[5] += 27085379;
          } else {
            result[0] += 333719;
            result[1] += 500578;
            result[2] += 0;
            result[3] += 7174964;
            result[4] += 4004631;
            result[5] += 131151681;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 26512143;
            result[1] += 0;
            result[2] += 5302428;
            result[3] += 10604857;
            result[4] += 7953643;
            result[5] += 92792503;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 108768652;
            result[4] += 0;
            result[5] += 34396924;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424c0000))) ) ) {
            result[0] += 0;
            result[1] += 114532461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 8421504;
            result[2] += 0;
            result[3] += 0;
            result[4] += 134744072;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
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
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 20452225;
            result[1] += 13015052;
            result[2] += 0;
            result[3] += 2788939;
            result[4] += 100401832;
            result[5] += 6507526;
          } else {
            result[0] += 126177743;
            result[1] += 1477202;
            result[2] += 369300;
            result[3] += 5539510;
            result[4] += 7509114;
            result[5] += 2092704;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 2511676;
            result[1] += 5441966;
            result[2] += 26791218;
            result[3] += 42279892;
            result[4] += 12976996;
            result[5] += 53163825;
          } else {
            result[0] += 90718781;
            result[1] += 0;
            result[2] += 42524428;
            result[3] += 0;
            result[4] += 8504885;
            result[5] += 1417480;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 0;
            result[4] += 119304647;
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
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 0;
            result[3] += 77548020;
            result[4] += 0;
            result[5] += 59652323;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2309122;
            result[3] += 25400344;
            result[4] += 6927366;
            result[5] += 108528743;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 6092152;
            result[2] += 48737217;
            result[3] += 82244054;
            result[4] += 0;
            result[5] += 6092152;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 4210752;
            result[2] += 113690310;
            result[3] += 25264513;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 3408704;
            result[1] += 0;
            result[2] += 88626309;
            result[3] += 23860929;
            result[4] += 6817408;
            result[5] += 20452225;
          } else {
            result[0] += 6507526;
            result[1] += 0;
            result[2] += 42298920;
            result[3] += 94359129;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 135211933;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 57266230;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 138052520;
            result[1] += 0;
            result[2] += 5113056;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 128252495;
            result[3] += 14913080;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2176503;
            result[1] += 0;
            result[2] += 137845234;
            result[3] += 3143838;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141926047;
            result[5] += 1239528;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 71582788;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7953643;
            result[4] += 103397360;
            result[5] += 31814572;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5406252;
            result[4] += 2202547;
            result[5] += 135556776;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 13572271;
            result[1] += 2626891;
            result[2] += 1313445;
            result[3] += 22766391;
            result[4] += 16199163;
            result[5] += 86687413;
          } else {
            result[0] += 723058;
            result[1] += 723058;
            result[2] += 0;
            result[3] += 89659249;
            result[4] += 723058;
            result[5] += 51337151;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 134744072;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8421504;
            result[5] += 0;
          } else {
            result[0] += 1244918;
            result[1] += 13694098;
            result[2] += 0;
            result[3] += 0;
            result[4] += 123246887;
            result[5] += 4979672;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 45052104;
            result[1] += 14016210;
            result[2] += 0;
            result[3] += 2002315;
            result[4] += 67077577;
            result[5] += 15017368;
          } else {
            result[0] += 131968268;
            result[1] += 1466314;
            result[2] += 133301;
            result[3] += 1732916;
            result[4] += 5998557;
            result[5] += 1866217;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 3491843;
            result[1] += 4364804;
            result[2] += 37100835;
            result[3] += 49758767;
            result[4] += 1745921;
            result[5] += 46703404;
          } else {
            result[0] += 98914398;
            result[1] += 6507526;
            result[2] += 14316557;
            result[3] += 5206020;
            result[4] += 15618062;
            result[5] += 2603010;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 116792970;
            result[4] += 0;
            result[5] += 15070060;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 121690740;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
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
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 81127160;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 119304647;
            result[3] += 0;
            result[4] += 0;
            result[5] += 23860929;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1847297;
            result[1] += 0;
            result[2] += 105295972;
            result[3] += 32327710;
            result[4] += 0;
            result[5] += 3694595;
          } else {
            result[0] += 1556147;
            result[1] += 0;
            result[2] += 131753827;
            result[3] += 9855601;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 132736296;
            result[3] += 10429280;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 141364751;
            result[3] += 1800824;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141808556;
            result[5] += 1357019;
          } else {
            result[0] += 0;
            result[1] += 119304647;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 14683648;
            result[2] += 0;
            result[3] += 22025473;
            result[4] += 29367297;
            result[5] += 77089156;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 74009323;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8492873;
            result[4] += 41251098;
            result[5] += 19412281;
          } else {
            result[0] += 292174;
            result[1] += 146087;
            result[2] += 292174;
            result[3] += 10226112;
            result[4] += 5113056;
            result[5] += 127095970;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1745921;
            result[1] += 0;
            result[2] += 1745921;
            result[3] += 26188824;
            result[4] += 8729608;
            result[5] += 104755299;
          } else {
            result[0] += 1363481;
            result[1] += 2045222;
            result[2] += 4090445;
            result[3] += 100215903;
            result[4] += 0;
            result[5] += 35450523;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 22605091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 120560485;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 71582788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 18162797;
            result[1] += 19231196;
            result[2] += 0;
            result[3] += 0;
            result[4] += 102566383;
            result[5] += 3205199;
          } else {
            result[0] += 120990473;
            result[1] += 2463900;
            result[2] += 1296789;
            result[3] += 6224590;
            result[4] += 8299453;
            result[5] += 3890368;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 2454267;
            result[1] += 4908534;
            result[2] += 34359738;
            result[3] += 43358717;
            result[4] += 6544712;
            result[5] += 51539607;
          } else {
            result[0] += 55375364;
            result[1] += 2701237;
            result[2] += 71582788;
            result[3] += 8103711;
            result[4] += 1350618;
            result[5] += 4051855;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 61356675;
            result[2] += 61356675;
            result[3] += 20452225;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5023353;
            result[3] += 2511676;
            result[4] += 10046707;
            result[5] += 125583839;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 19685266;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 0;
            result[5] += 95443717;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 119304647;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 5965232;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 22605091;
            result[1] += 0;
            result[2] += 82885333;
            result[3] += 30140121;
            result[4] += 7535030;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 80348027;
            result[3] += 55513182;
            result[4] += 0;
            result[5] += 7304366;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 129950292;
            result[3] += 11012736;
            result[4] += 0;
            result[5] += 2202547;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 83513252;
            result[3] += 0;
            result[4] += 0;
            result[5] += 59652323;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 125341749;
            result[3] += 16673902;
            result[4] += 0;
            result[5] += 1149924;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1313445;
            result[1] += 0;
            result[2] += 131344565;
            result[3] += 9194119;
            result[4] += 0;
            result[5] += 1313445;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 142508853;
            result[3] += 656722;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
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
            result[3] += 0;
            result[4] += 140477021;
            result[5] += 2688555;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
            result[0] += 30140121;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15070060;
            result[5] += 97955394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 62634939;
            result[3] += 0;
            result[4] += 80530636;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 65358197;
            result[1] += 37347541;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40459836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1529546;
            result[2] += 0;
            result[3] += 10095008;
            result[4] += 3670912;
            result[5] += 127870108;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 28256363;
            result[1] += 22605091;
            result[2] += 1883757;
            result[3] += 16953818;
            result[4] += 11302545;
            result[5] += 62164000;
          } else {
            result[0] += 0;
            result[1] += 804300;
            result[2] += 4825805;
            result[3] += 98929021;
            result[4] += 804300;
            result[5] += 37802146;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 19168612;
            result[1] += 38337225;
            result[2] += 2995095;
            result[3] += 1797057;
            result[4] += 75476412;
            result[5] += 5391172;
          } else {
            result[0] += 116489484;
            result[1] += 1048405;
            result[2] += 349468;
            result[3] += 2562768;
            result[4] += 11299480;
            result[5] += 11415969;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 4473924;
            result[1] += 2236962;
            result[2] += 34896609;
            result[3] += 57713623;
            result[4] += 4473924;
            result[5] += 39370533;
          } else {
            result[0] += 112117620;
            result[1] += 0;
            result[2] += 18973751;
            result[3] += 1724886;
            result[4] += 10349318;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426a0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42780000))) ) ) {
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 142823075;
            result[2] += 0;
            result[3] += 342501;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 40904450;
            result[1] += 102261126;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13015052;
            result[4] += 0;
            result[5] += 130150524;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 123642997;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 95443717;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 90420364;
            result[3] += 52745212;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 133292088;
            result[3] += 4936744;
            result[4] += 0;
            result[5] += 4936744;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 109009322;
            result[3] += 28342423;
            result[4] += 0;
            result[5] += 5813830;
          } else {
            result[0] += 100215903;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 137535469;
            result[3] += 5630106;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 133621204;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 89478485;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 39045157;
            result[1] += 0;
            result[2] += 104120419;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 141266828;
            result[3] += 1898747;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 906111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 140447242;
            result[5] += 1812222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5302428;
            result[2] += 0;
            result[3] += 13256071;
            result[4] += 58326716;
            result[5] += 66280359;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3131746;
            result[4] += 2684354;
            result[5] += 137349474;
          } else {
            result[0] += 1835456;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11930464;
            result[4] += 19272289;
            result[5] += 110127366;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 1244918;
            result[1] += 0;
            result[2] += 0;
            result[3] += 68470493;
            result[4] += 0;
            result[5] += 73450165;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7738679;
            result[4] += 0;
            result[5] += 135426896;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 2753184;
            result[2] += 0;
            result[3] += 0;
            result[4] += 140412392;
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 47721858;
            result[1] += 95443717;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 99147503;
            result[1] += 7265118;
            result[2] += 0;
            result[3] += 3205199;
            result[4] += 28419435;
            result[5] += 5128319;
          } else {
            result[0] += 1991868;
            result[1] += 2489836;
            result[2] += 16432918;
            result[3] += 67474558;
            result[4] += 7718491;
            result[5] += 47057902;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 12632256;
            result[1] += 50529027;
            result[2] += 0;
            result[3] += 0;
            result[4] += 80004292;
            result[5] += 0;
          } else {
            result[0] += 126013710;
            result[1] += 700076;
            result[2] += 8400914;
            result[3] += 1925209;
            result[4] += 5425590;
            result[5] += 700076;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 95443717;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5113056;
            result[3] += 20452225;
            result[4] += 0;
            result[5] += 117600294;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 23860929;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48676296;
            result[3] += 77309411;
            result[4] += 0;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 112042625;
            result[3] += 31122951;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 95443717;
            result[2] += 0;
            result[3] += 15907286;
            result[4] += 0;
            result[5] += 31814572;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 123122395;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 5726623;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 1479747;
            result[1] += 0;
            result[2] += 137246586;
            result[3] += 4069305;
            result[4] += 0;
            result[5] += 369936;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 698368;
            result[2] += 0;
            result[3] += 0;
            result[4] += 135483521;
            result[5] += 6983686;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3976821;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 91466896;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 4090445;
            result[2] += 0;
            result[3] += 0;
            result[4] += 139075131;
            result[5] += 0;
          } else {
            result[0] += 104817654;
            result[1] += 5113056;
            result[2] += 0;
            result[3] += 10226112;
            result[4] += 19173961;
            result[5] += 3834792;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 133621204;
            result[5] += 9544371;
          } else {
            result[0] += 0;
            result[1] += 464320;
            result[2] += 0;
            result[3] += 7893453;
            result[4] += 8976868;
            result[5] += 125830933;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5636440;
            result[3] += 27054912;
            result[4] += 10145592;
            result[5] += 100328632;
          } else {
            result[0] += 852176;
            result[1] += 852176;
            result[2] += 0;
            result[3] += 111635062;
            result[4] += 852176;
            result[5] += 28973985;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42820000))) ) ) {
            result[0] += 39045157;
            result[1] += 13015052;
            result[2] += 0;
            result[3] += 0;
            result[4] += 91105366;
            result[5] += 0;
          } else {
            result[0] += 4210752;
            result[1] += 126322567;
            result[2] += 4210752;
            result[3] += 0;
            result[4] += 8421504;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 16404388;
            result[1] += 37282702;
            result[2] += 0;
            result[3] += 1491308;
            result[4] += 86495869;
            result[5] += 1491308;
          } else {
            result[0] += 130394338;
            result[1] += 1021699;
            result[2] += 1021699;
            result[3] += 2681959;
            result[4] += 5236207;
            result[5] += 2809672;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 3235380;
            result[1] += 2426535;
            result[2] += 19412281;
            result[3] += 65516450;
            result[4] += 11323830;
            result[5] += 41251098;
          } else {
            result[0] += 64541858;
            result[1] += 2346976;
            result[2] += 59847904;
            result[3] += 1173488;
            result[4] += 5867441;
            result[5] += 9387906;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15907286;
            result[3] += 63629145;
            result[4] += 0;
            result[5] += 63629145;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7953643;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 63629145;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50200916;
            result[3] += 81808900;
            result[4] += 0;
            result[5] += 11155759;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 58950531;
            result[3] += 8421504;
            result[4] += 8421504;
            result[5] += 67372036;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 23860929;
            result[1] += 11930464;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 71582788;
          } else {
            result[0] += 5302428;
            result[1] += 0;
            result[2] += 121955861;
            result[3] += 0;
            result[4] += 0;
            result[5] += 15907286;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 107374182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
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
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 115734901;
            result[3] += 22921522;
            result[4] += 0;
            result[5] += 4509152;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 138519229;
            result[3] += 4646347;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 51130563;
            result[1] += 0;
            result[2] += 92035013;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141105640;
            result[5] += 2059936;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 92035013;
            result[5] += 51130563;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 35791394;
            result[5] += 71582788;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 23860929;
            result[2] += 119304647;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 71582788;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 99420539;
            result[5] += 43745037;
          } else {
            result[0] += 155784;
            result[1] += 311568;
            result[2] += 155784;
            result[3] += 5764011;
            result[4] += 4673522;
            result[5] += 132104906;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 3767515;
            result[1] += 9418787;
            result[2] += 0;
            result[3] += 11302545;
            result[4] += 47093939;
            result[5] += 71582788;
          } else {
            result[0] += 0;
            result[1] += 380759;
            result[2] += 3807595;
            result[3] += 82624814;
            result[4] += 761519;
            result[5] += 55590888;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42200000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4051855;
            result[1] += 39167940;
            result[2] += 1350618;
            result[3] += 0;
            result[4] += 95893923;
            result[5] += 2701237;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 71582788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 0;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 32212254;
            result[1] += 57266230;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 50107951;
            result[5] += 0;
          } else {
            result[0] += 131484405;
            result[1] += 712266;
            result[2] += 142453;
            result[3] += 2279252;
            result[4] += 5983039;
            result[5] += 2564159;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 14778382;
            result[1] += 17549328;
            result[2] += 45258795;
            result[3] += 33251359;
            result[4] += 12007435;
            result[5] += 20320275;
          } else {
            result[0] += 122111815;
            result[1] += 0;
            result[2] += 6316128;
            result[3] += 6316128;
            result[4] += 8421504;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 52745212;
            result[4] += 45210182;
            result[5] += 33907636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 107374182;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 1539414;
            result[1] += 4618244;
            result[2] += 44643029;
            result[3] += 60037177;
            result[4] += 0;
            result[5] += 32327710;
          } else {
            result[0] += 5422938;
            result[1] += 0;
            result[2] += 97612893;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 4338350;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 11012736;
            result[1] += 0;
            result[2] += 0;
            result[3] += 55063683;
            result[4] += 55063683;
            result[5] += 22025473;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
            result[0] += 47721858;
            result[1] += 0;
            result[2] += 80530636;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14913080;
          } else {
            result[0] += 2210394;
            result[1] += 0;
            result[2] += 131603510;
            result[3] += 8501518;
            result[4] += 0;
            result[5] += 850151;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 1122867;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 136989806;
            result[5] += 5052902;
          } else {
            result[0] += 0;
            result[1] += 122713351;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20452225;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26030104;
            result[5] += 117135471;
          } else {
            result[0] += 47721858;
            result[1] += 95443717;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 701792;
            result[1] += 350896;
            result[2] += 0;
            result[3] += 4386200;
            result[4] += 5438888;
            result[5] += 132287799;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 10667239;
            result[1] += 1684300;
            result[2] += 2245734;
            result[3] += 29194548;
            result[4] += 11790106;
            result[5] += 87583646;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 97916352;
            result[4] += 4450743;
            result[5] += 40798480;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 142552447;
            result[2] += 0;
            result[3] += 0;
            result[4] += 613128;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 9608427;
            result[1] += 3843371;
            result[2] += 7686742;
            result[3] += 46120454;
            result[4] += 47081296;
            result[5] += 28825283;
          } else {
            result[0] += 79140333;
            result[1] += 6987164;
            result[2] += 12833567;
            result[3] += 12548377;
            result[4] += 20391112;
            result[5] += 11265020;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 58326716;
            result[1] += 0;
            result[2] += 58326716;
            result[3] += 26512143;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 142296149;
            result[1] += 0;
            result[2] += 579617;
            result[3] += 0;
            result[4] += 289808;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 15907286;
            result[2] += 79536431;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2753184;
            result[2] += 0;
            result[3] += 11012736;
            result[4] += 2753184;
            result[5] += 126646471;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 59652323;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15070060;
            result[3] += 113025455;
            result[4] += 0;
            result[5] += 15070060;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2556528;
            result[1] += 0;
            result[2] += 109930710;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 15339168;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
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
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 135630546;
            result[3] += 1883757;
            result[4] += 0;
            result[5] += 5651272;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 112177356;
            result[3] += 30988220;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1179288;
            result[1] += 0;
            result[2] += 135146417;
            result[3] += 6604013;
            result[4] += 0;
            result[5] += 235857;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141741043;
            result[5] += 1424533;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 71582788;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 28633115;
            result[5] += 28633115;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 103566587;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30460760;
            result[5] += 9138228;
          } else {
            result[0] += 0;
            result[1] += 2860300;
            result[2] += 0;
            result[3] += 9032528;
            result[4] += 4817348;
            result[5] += 126455398;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 2863311;
            result[3] += 54402919;
            result[4] += 2863311;
            result[5] += 80172722;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 110782886;
            result[4] += 3408704;
            result[5] += 28973985;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 63161283;
            result[1] += 63161283;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12632256;
            result[5] += 4210752;
          } else {
            result[0] += 6941361;
            result[1] += 11279712;
            result[2] += 0;
            result[3] += 867670;
            result[4] += 116267801;
            result[5] += 7809031;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 115109741;
            result[1] += 2540034;
            result[2] += 1731841;
            result[3] += 5772805;
            result[4] += 9005576;
            result[5] += 9005576;
          } else {
            result[0] += 28446580;
            result[1] += 4197036;
            result[2] += 24249543;
            result[3] += 48499087;
            result[4] += 7461398;
            result[5] += 30311929;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 47721858;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 138228832;
            result[4] += 0;
            result[5] += 4936744;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 71582788;
            result[4] += 0;
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5302428;
            result[3] += 26512143;
            result[4] += 7953643;
            result[5] += 103397360;
          } else {
            result[0] += 2202547;
            result[1] += 2202547;
            result[2] += 63873872;
            result[3] += 26430567;
            result[4] += 11012736;
            result[5] += 37443304;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 71582788;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29475265;
            result[3] += 105268806;
            result[4] += 0;
            result[5] += 8421504;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 76485718;
            result[3] += 52951651;
            result[4] += 0;
            result[5] += 13728205;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 136348168;
            result[3] += 6817408;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 11012736;
            result[1] += 0;
            result[2] += 88101893;
            result[3] += 11012736;
            result[4] += 33038209;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 3455720;
            result[1] += 0;
            result[2] += 113051437;
            result[3] += 24683720;
            result[4] += 0;
            result[5] += 1974697;
          } else {
            result[0] += 474844;
            result[1] += 0;
            result[2] += 135805488;
            result[3] += 6172976;
            result[4] += 0;
            result[5] += 712266;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
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
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8421504;
            result[3] += 0;
            result[4] += 75793540;
            result[5] += 58950531;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 98625174;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44540401;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 335282;
            result[2] += 167641;
            result[3] += 5867441;
            result[4] += 5867441;
            result[5] += 130927769;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 90420364;
            result[1] += 41442666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11302545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5449208;
            result[2] += 4458443;
            result[3] += 67372036;
            result[4] += 6439974;
            result[5] += 59445914;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 127826407;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15339168;
            result[5] += 0;
          } else {
            result[0] += 16744511;
            result[1] += 13395609;
            result[2] += 2511676;
            result[3] += 1674451;
            result[4] += 102978748;
            result[5] += 5860579;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 41426634;
            result[1] += 609215;
            result[2] += 3655291;
            result[3] += 28633115;
            result[4] += 26805469;
            result[5] += 42035850;
          } else {
            result[0] += 116696056;
            result[1] += 575424;
            result[2] += 9667128;
            result[3] += 7365431;
            result[4] += 5639158;
            result[5] += 3222376;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
            result[0] += 646345;
            result[1] += 142196057;
            result[2] += 0;
            result[3] += 0;
            result[4] += 323172;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4252442;
            result[3] += 34019542;
            result[4] += 5669923;
            result[5] += 99223666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3767515;
            result[3] += 135630546;
            result[4] += 0;
            result[5] += 3767515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20452225;
            result[3] += 10226112;
            result[4] += 0;
            result[5] += 112487238;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75793540;
            result[3] += 46318274;
            result[4] += 0;
            result[5] += 21053761;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 23860929;
            result[2] += 0;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 95443717;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 126322567;
            result[4] += 0;
            result[5] += 16843009;
          } else {
            result[0] += 3869339;
            result[1] += 0;
            result[2] += 65778778;
            result[3] += 42562738;
            result[4] += 3869339;
            result[5] += 27085379;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 4772185;
            result[1] += 19088743;
            result[2] += 90671531;
            result[3] += 4772185;
            result[4] += 4772185;
            result[5] += 19088743;
          } else {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 116918554;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 477218;
          } else {
            result[0] += 489454;
            result[1] += 0;
            result[2] += 138271026;
            result[3] += 3915639;
            result[4] += 0;
            result[5] += 489454;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 127258290;
            result[5] += 15907286;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 121473822;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21691754;
            result[5] += 0;
          } else {
            result[0] += 1988410;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 63629145;
            result[5] += 77548020;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2709758;
            result[4] += 2709758;
            result[5] += 137746059;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 2346976;
            result[2] += 0;
            result[3] += 22530975;
            result[4] += 13143069;
            result[5] += 105144554;
          } else {
            result[0] += 0;
            result[1] += 786624;
            result[2] += 3933120;
            result[3] += 85742021;
            result[4] += 11012736;
            result[5] += 41691074;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42480000))) ) ) {
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
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 130150524;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13015052;
            result[5] += 0;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 31638801;
            result[1] += 22938131;
            result[2] += 0;
            result[3] += 2372910;
            result[4] += 79097003;
            result[5] += 7118730;
          } else {
            result[0] += 120082070;
            result[1] += 2990091;
            result[2] += 2990091;
            result[3] += 3946920;
            result[4] += 9687896;
            result[5] += 3468506;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 3681400;
            result[1] += 6544712;
            result[2] += 28633115;
            result[3] += 57266230;
            result[4] += 3681400;
            result[5] += 43358717;
          } else {
            result[0] += 100380461;
            result[1] += 1645581;
            result[2] += 24683720;
            result[3] += 1645581;
            result[4] += 9873488;
            result[5] += 4936744;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 30140121;
            result[4] += 15070060;
            result[5] += 97955394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 3253763;
            result[1] += 16268815;
            result[2] += 52060209;
            result[3] += 16268815;
            result[4] += 9761289;
            result[5] += 45552683;
          } else {
            result[0] += 25264513;
            result[1] += 0;
            result[2] += 0;
            result[3] += 109479558;
            result[4] += 0;
            result[5] += 8421504;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 127417363;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 34087042;
            result[1] += 0;
            result[2] += 68174084;
            result[3] += 40904450;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 61821498;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 9761289;
          } else {
            result[0] += 11608019;
            result[1] += 0;
            result[2] += 127688216;
            result[3] += 3869339;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ec0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 132075285;
            result[3] += 9073874;
            result[4] += 0;
            result[5] += 2016416;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 123480309;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 102261126;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 526344;
            result[1] += 0;
            result[2] += 140533856;
            result[3] += 2105376;
            result[4] += 0;
            result[5] += 0;
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
