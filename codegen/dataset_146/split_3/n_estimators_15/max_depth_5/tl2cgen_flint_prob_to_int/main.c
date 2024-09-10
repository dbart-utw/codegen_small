
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42780000))) ) ) {
            result[0] += 1376592;
            result[1] += 2753184;
            result[2] += 0;
            result[3] += 0;
            result[4] += 282201376;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 200431807;
            result[5] += 85899345;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 24368608;
            result[1] += 0;
            result[2] += 0;
            result[3] += 18276456;
            result[4] += 79197978;
            result[5] += 164488109;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 435816;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4793976;
            result[4] += 3922344;
            result[5] += 277179015;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 32482945;
            result[1] += 21655297;
            result[2] += 0;
            result[3] += 32482945;
            result[4] += 21655297;
            result[5] += 178054666;
          } else {
            result[0] += 9370837;
            result[1] += 0;
            result[2] += 5206020;
            result[3] += 142644974;
            result[4] += 2082408;
            result[5] += 127026911;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 88373812;
            result[1] += 173212672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24744667;
            result[5] += 0;
          } else {
            result[0] += 8471335;
            result[1] += 22025473;
            result[2] += 0;
            result[3] += 0;
            result[4] += 240585939;
            result[5] += 15248404;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 236712558;
            result[1] += 2503690;
            result[2] += 4552164;
            result[3] += 9787153;
            result[4] += 16615400;
            result[5] += 16160184;
          } else {
            result[0] += 51498408;
            result[1] += 2059936;
            result[2] += 63858026;
            result[3] += 89263908;
            result[4] += 15792845;
            result[5] += 63858026;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
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
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42940000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 286331153;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 5206020;
            result[2] += 36442146;
            result[3] += 20824083;
            result[4] += 26030104;
            result[5] += 197828796;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 156180628;
            result[3] += 104120419;
            result[4] += 0;
            result[5] += 26030104;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 286331153;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 101058054;
            result[3] += 134744072;
            result[4] += 16843009;
            result[5] += 33686018;
          } else {
            result[0] += 15070060;
            result[1] += 0;
            result[2] += 233585940;
            result[3] += 30140121;
            result[4] += 0;
            result[5] += 7535030;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 286331153;
          result[3] += 0;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
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
            result[5] += 286331153;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 209317946;
            result[3] += 69114416;
            result[4] += 0;
            result[5] += 7898790;
          } else {
            result[0] += 2343774;
            result[1] += 0;
            result[2] += 267190325;
            result[3] += 16797052;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 1783994;
            result[1] += 7135978;
            result[2] += 0;
            result[3] += 0;
            result[4] += 271167197;
            result[5] += 6243981;
          } else {
            result[0] += 14081859;
            result[1] += 9387906;
            result[2] += 0;
            result[3] += 0;
            result[4] += 168982319;
            result[5] += 93879066;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 95443717;
            result[2] += 0;
            result[3] += 0;
            result[4] += 190887435;
            result[5] += 0;
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
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 418612;
            result[2] += 1674451;
            result[3] += 4604740;
            result[4] += 5441966;
            result[5] += 274191381;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10412041;
            result[3] += 78090314;
            result[4] += 15618062;
            result[5] += 182210733;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 19365391;
            result[1] += 0;
            result[2] += 1383242;
            result[3] += 53946449;
            result[4] += 27664845;
            result[5] += 183971223;
          } else {
            result[0] += 29693601;
            result[1] += 7423400;
            result[2] += 6362914;
            result[3] += 147407519;
            result[4] += 20149229;
            result[5] += 75294488;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 54084773;
            result[1] += 25451658;
            result[2] += 6362914;
            result[3] += 22270200;
            result[4] += 31814572;
            result[5] += 146347033;
          } else {
            result[0] += 252181565;
            result[1] += 6041850;
            result[2] += 1313445;
            result[3] += 4203026;
            result[4] += 19701684;
            result[5] += 2889580;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1114129;
            result[1] += 6684774;
            result[2] += 46793418;
            result[3] += 108070513;
            result[4] += 8913032;
            result[5] += 114755287;
          } else {
            result[0] += 217335694;
            result[1] += 13799091;
            result[2] += 34497729;
            result[3] += 0;
            result[4] += 13799091;
            result[5] += 6899545;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3217203;
            result[3] += 225204277;
            result[4] += 0;
            result[5] += 57909671;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 122713351;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 68174084;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 87144263;
            result[3] += 118267215;
            result[4] += 0;
            result[5] += 80919673;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 190887435;
            result[3] += 69992059;
            result[4] += 0;
            result[5] += 25451658;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 286331153;
          } else {
            result[0] += 5965232;
            result[1] += 0;
            result[2] += 268435455;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 109479558;
            result[3] += 58950531;
            result[4] += 0;
            result[5] += 117901063;
          } else {
            result[0] += 286331153;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4544938;
            result[1] += 0;
            result[2] += 240881763;
            result[3] += 36359511;
            result[4] += 0;
            result[5] += 4544938;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 926638;
            result[1] += 0;
            result[2] += 241852527;
            result[3] += 42625349;
            result[4] += 0;
            result[5] += 926638;
          } else {
            result[0] += 135630546;
            result[1] += 0;
            result[2] += 150700606;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 260634767;
            result[3] += 25696385;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 283716256;
            result[3] += 2614896;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 2936729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 281926058;
            result[5] += 1468364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95443717;
            result[5] += 190887435;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 281028724;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5302428;
            result[5] += 0;
          } else {
            result[0] += 11767033;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 156893782;
            result[5] += 117670336;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32857673;
            result[3] += 0;
            result[4] += 136124646;
            result[5] += 117348833;
          } else {
            result[0] += 0;
            result[1] += 1358629;
            result[2] += 0;
            result[3] += 20719098;
            result[4] += 11548350;
            result[5] += 252705074;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 18592932;
            result[2] += 7437172;
            result[3] += 53919502;
            result[4] += 22311518;
            result[5] += 184070026;
          } else {
            result[0] += 4752384;
            result[1] += 0;
            result[2] += 0;
            result[3] += 193659659;
            result[4] += 0;
            result[5] += 87919109;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 0;
            result[3] += 0;
            result[4] += 238609294;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 211959424;
            result[2] += 0;
            result[3] += 0;
            result[4] += 74371728;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 106541824;
            result[1] += 6658864;
            result[2] += 13317728;
            result[3] += 29964888;
            result[4] += 103212392;
            result[5] += 26635456;
          } else {
            result[0] += 253501805;
            result[1] += 7158278;
            result[2] += 2715209;
            result[3] += 3949395;
            result[4] += 16784929;
            result[5] += 2221534;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 10145592;
            result[1] += 1127288;
            result[2] += 84546600;
            result[3] += 105965072;
            result[4] += 5636440;
            result[5] += 78910160;
          } else {
            result[0] += 165589100;
            result[1] += 0;
            result[2] += 55196366;
            result[3] += 13799091;
            result[4] += 48296820;
            result[5] += 3449772;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429b0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
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
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 268435455;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 109825647;
            result[3] += 133359715;
            result[4] += 0;
            result[5] += 43145790;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 268435455;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 71582788;
          } else {
            result[0] += 4195328;
            result[1] += 3146496;
            result[2] += 240182542;
            result[3] += 27269633;
            result[4] += 1048832;
            result[5] += 10488320;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 286331153;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 258732969;
            result[3] += 27598183;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 539230;
            result[1] += 0;
            result[2] += 282017312;
            result[3] += 3774610;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 284974133;
            result[5] += 1357019;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16361780;
            result[3] += 8180890;
            result[4] += 155436911;
            result[5] += 106351571;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
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
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 174980149;
            result[5] += 111351003;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8650488;
            result[4] += 4757768;
            result[5] += 272922896;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 31389244;
            result[1] += 20670965;
            result[2] += 3062365;
            result[3] += 41341931;
            result[4] += 30623652;
            result[5] += 159242994;
          } else {
            result[0] += 0;
            result[1] += 1871445;
            result[2] += 0;
            result[3] += 203987553;
            result[4] += 0;
            result[5] += 80472154;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 95443717;
            result[2] += 0;
            result[3] += 190887435;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 39953184;
            result[1] += 49941480;
            result[2] += 4994148;
            result[3] += 4994148;
            result[4] += 173130464;
            result[5] += 13317728;
          } else {
            result[0] += 238241259;
            result[1] += 7606054;
            result[2] += 2453566;
            result[3] += 7606054;
            result[4] += 16193535;
            result[5] += 14230682;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 6878826;
            result[1] += 8598533;
            result[2] += 77386798;
            result[3] += 114360490;
            result[4] += 8598533;
            result[5] += 70507971;
          } else {
            result[0] += 190283361;
            result[1] += 25371114;
            result[2] += 43493339;
            result[3] += 0;
            result[4] += 27183337;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 57266230;
            result[2] += 171798691;
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6983686;
            result[3] += 62853179;
            result[4] += 6983686;
            result[5] += 209510599;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 238609294;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 114532461;
            result[3] += 133621204;
            result[4] += 0;
            result[5] += 38177487;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 254516580;
            result[3] += 0;
            result[4] += 0;
            result[5] += 31814572;
          }
        } else {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 66810602;
            result[3] += 219520550;
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 122713351;
            result[3] += 81808900;
            result[4] += 0;
            result[5] += 81808900;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 269488144;
            result[3] += 16843009;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3439413;
            result[1] += 0;
            result[2] += 240758927;
            result[3] += 35253985;
            result[4] += 0;
            result[5] += 6878826;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 190887435;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 533205;
            result[1] += 0;
            result[2] += 278866281;
            result[3] += 6398461;
            result[4] += 0;
            result[5] += 533205;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 3556908;
            result[2] += 0;
            result[3] += 0;
            result[4] += 268546609;
            result[5] += 14227634;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 98426333;
            result[5] += 170009122;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 190887435;
            result[5] += 95443717;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 395485;
            result[3] += 8700670;
            result[4] += 3954850;
            result[5] += 273280147;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 241591910;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 0;
          } else {
            result[0] += 32012178;
            result[1] += 7113817;
            result[2] += 0;
            result[3] += 0;
            result[4] += 236534430;
            result[5] += 10670726;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 251412719;
            result[1] += 34918433;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2769160;
            result[1] += 1661496;
            result[2] += 3322992;
            result[3] += 119073883;
            result[4] += 17722624;
            result[5] += 141780996;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
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
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 11339847;
            result[1] += 14174809;
            result[2] += 14174809;
            result[3] += 42524428;
            result[4] += 76543971;
            result[5] += 127573285;
          } else {
            result[0] += 233172626;
            result[1] += 11598223;
            result[2] += 724888;
            result[3] += 3382815;
            result[4] += 35761190;
            result[5] += 1691407;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 9481164;
            result[1] += 6636814;
            result[2] += 79641777;
            result[3] += 97655989;
            result[4] += 7584931;
            result[5] += 85330476;
          } else {
            result[0] += 230381387;
            result[1] += 0;
            result[2] += 36202789;
            result[3] += 0;
            result[4] += 19746976;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 190887435;
            result[4] += 0;
            result[5] += 95443717;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45210182;
            result[3] += 15070060;
            result[4] += 0;
            result[5] += 226050910;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 261066639;
            result[4] += 0;
            result[5] += 25264513;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 286331153;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 47721858;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 224235240;
            result[3] += 51746593;
            result[4] += 0;
            result[5] += 10349318;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 203800408;
            result[3] += 70740637;
            result[4] += 1684300;
            result[5] += 10105805;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 267493577;
            result[3] += 13186303;
            result[4] += 0;
            result[5] += 5651272;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 286331153;
            result[1] += 0;
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
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 238609294;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 282223943;
            result[3] += 4107209;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 250539758;
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
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 4360372;
            result[2] += 0;
            result[3] += 0;
            result[4] += 279063864;
            result[5] += 2906915;
          } else {
            result[0] += 114532461;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 114532461;
            result[5] += 57266230;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 154773596;
            result[5] += 131557556;
          } else {
            result[0] += 245426702;
            result[1] += 0;
            result[2] += 0;
            result[3] += 30678337;
            result[4] += 10226112;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 44050946;
            result[2] += 0;
            result[3] += 0;
            result[4] += 242280206;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2479057;
            result[2] += 0;
            result[3] += 17973167;
            result[4] += 12085405;
            result[5] += 253793521;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 11686985;
            result[1] += 0;
            result[2] += 11686985;
            result[3] += 64278422;
            result[4] += 23373971;
            result[5] += 175304787;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 228094308;
            result[4] += 0;
            result[5] += 58236844;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
            result[0] += 54271917;
            result[1] += 5614336;
            result[2] += 3742890;
            result[3] += 46786136;
            result[4] += 69243481;
            result[5] += 106672390;
          } else {
            result[0] += 227419852;
            result[1] += 16006089;
            result[2] += 1333840;
            result[3] += 4668442;
            result[4] += 33790632;
            result[5] += 3112295;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 2684354;
            result[1] += 5368709;
            result[2] += 40265318;
            result[3] += 92162839;
            result[4] += 24159191;
            result[5] += 121690740;
          } else {
            result[0] += 180840728;
            result[1] += 0;
            result[2] += 41442666;
            result[3] += 0;
            result[4] += 56512727;
            result[5] += 7535030;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 245426702;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40904450;
            result[5] += 0;
          }
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 286331153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 15070060;
            result[2] += 5023353;
            result[3] += 65303596;
            result[4] += 30140121;
            result[5] += 170794021;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 95443717;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 103079215;
            result[4] += 45812984;
            result[5] += 137438953;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 62992853;
            result[3] += 197568495;
            result[4] += 0;
            result[5] += 25769803;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 95443717;
            result[2] += 0;
            result[3] += 95443717;
            result[4] += 95443717;
            result[5] += 0;
          } else {
            result[0] += 7953643;
            result[1] += 0;
            result[2] += 230655651;
            result[3] += 31814572;
            result[4] += 0;
            result[5] += 15907286;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 95443717;
            result[2] += 190887435;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 5614336;
            result[1] += 0;
            result[2] += 199308939;
            result[3] += 72986372;
            result[4] += 0;
            result[5] += 8421504;
          } else {
            result[0] += 1645581;
            result[1] += 0;
            result[2] += 251773944;
            result[3] += 31266045;
            result[4] += 0;
            result[5] += 1645581;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6092152;
            result[1] += 0;
            result[2] += 272272340;
            result[3] += 7029406;
            result[4] += 0;
            result[5] += 937254;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 5586949;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 273760517;
            result[5] += 6983686;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 229064922;
            result[3] += 0;
            result[4] += 57266230;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7394491;
            result[4] += 7805296;
            result[5] += 271131364;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 187352482;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 60094192;
            result[5] += 38884477;
          } else {
            result[0] += 1681004;
            result[1] += 9525693;
            result[2] += 10646363;
            result[3] += 107023973;
            result[4] += 12887703;
            result[5] += 144566413;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 270423866;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15907286;
            result[5] += 0;
          } else {
            result[0] += 54597041;
            result[1] += 13345943;
            result[2] += 0;
            result[3] += 0;
            result[4] += 200189153;
            result[5] += 18199013;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 250322465;
            result[1] += 3228365;
            result[2] += 5215051;
            result[3] += 7201737;
            result[4] += 11423445;
            result[5] += 8940088;
          } else {
            result[0] += 51668779;
            result[1] += 4305731;
            result[2] += 50233535;
            result[3] += 81091278;
            result[4] += 20811036;
            result[5] += 78220791;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
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
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 276786781;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
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
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 8947848;
            result[3] += 259487607;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 286331153;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 122713351;
            result[4] += 0;
            result[5] += 163617801;
          } else {
            result[0] += 5302428;
            result[1] += 0;
            result[2] += 169677720;
            result[3] += 84838860;
            result[4] += 0;
            result[5] += 26512143;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 129659390;
            result[3] += 135061864;
            result[4] += 0;
            result[5] += 21609898;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 255870392;
            result[3] += 30460760;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 114532461;
            result[3] += 0;
            result[4] += 171798691;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 4321979;
            result[1] += 0;
            result[2] += 242030861;
            result[3] += 34575837;
            result[4] += 0;
            result[5] += 5402474;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 278852354;
            result[3] += 6944598;
            result[4] += 0;
            result[5] += 534199;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 283591141;
            result[5] += 2740011;
          } else {
            result[0] += 31814572;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 111351003;
          }
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 216209237;
            result[1] += 0;
            result[2] += 5843492;
            result[3] += 0;
            result[4] += 40904450;
            result[5] += 23373971;
          } else {
            result[0] += 0;
            result[1] += 5307889;
            result[2] += 0;
            result[3] += 25065033;
            result[4] += 10910661;
            result[5] += 245047567;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 19088743;
            result[5] += 238609294;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2603010;
            result[3] += 239476964;
            result[4] += 0;
            result[5] += 44251178;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 12449180;
            result[1] += 12449180;
            result[2] += 0;
            result[3] += 37347541;
            result[4] += 211636069;
            result[5] += 12449180;
          } else {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 190887435;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95443717;
            result[5] += 0;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 5883516;
            result[1] += 37262273;
            result[2] += 0;
            result[3] += 23534067;
            result[4] += 209845434;
            result[5] += 9805861;
          } else {
            result[0] += 248858283;
            result[1] += 2882528;
            result[2] += 960842;
            result[3] += 5765056;
            result[4] += 22579805;
            result[5] += 5284635;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 14717956;
            result[2] += 10703968;
            result[3] += 92321726;
            result[4] += 13379960;
            result[5] += 155207540;
          } else {
            result[0] += 54671644;
            result[1] += 6486466;
            result[2] += 108416650;
            result[3] += 41698711;
            result[4] += 33358969;
            result[5] += 41698711;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          } else {
            result[0] += 5843492;
            result[1] += 0;
            result[2] += 5843492;
            result[3] += 0;
            result[4] += 11686985;
            result[5] += 262957181;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 107374182;
            result[5] += 107374182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15070060;
            result[3] += 256191031;
            result[4] += 0;
            result[5] += 15070060;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 286331153;
          } else {
            result[0] += 0;
            result[1] += 11453246;
            result[2] += 183251937;
            result[3] += 91625968;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e80000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 23860929;
            result[1] += 0;
            result[2] += 238609294;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 171798691;
            result[1] += 114532461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 286331153;
            result[3] += 0;
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
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 24898361;
            result[1] += 0;
            result[2] += 12449180;
            result[3] += 199186889;
            result[4] += 0;
            result[5] += 49796722;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 231791885;
            result[3] += 54539267;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 6582325;
            result[1] += 0;
            result[2] += 240254875;
            result[3] += 32911626;
            result[4] += 0;
            result[5] += 6582325;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 278629207;
            result[3] += 7701945;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 3734754;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 270147218;
            result[5] += 12449180;
          } else {
            result[0] += 0;
            result[1] += 229064922;
            result[2] += 0;
            result[3] += 0;
            result[4] += 57266230;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
            result[0] += 286331153;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 23534067;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 160816127;
            result[5] += 101980958;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 783395;
            result[2] += 0;
            result[3] += 8617353;
            result[4] += 5483770;
            result[5] += 271446633;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 11686985;
            result[2] += 0;
            result[3] += 52591436;
            result[4] += 140243830;
            result[5] += 81808900;
          } else {
            result[0] += 0;
            result[1] += 2356635;
            result[2] += 1178317;
            result[3] += 60094192;
            result[4] += 27101302;
            result[5] += 195600705;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 284413756;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1917396;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 270423866;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15907286;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 32940752;
            result[1] += 93754448;
            result[2] += 0;
            result[3] += 10135616;
            result[4] += 131763008;
            result[5] += 17737328;
          } else {
            result[0] += 253757700;
            result[1] += 4728404;
            result[2] += 262689;
            result[3] += 5253782;
            result[4] += 11821010;
            result[5] += 10507565;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 3738004;
            result[1] += 1495201;
            result[2] += 15699619;
            result[3] += 168210207;
            result[4] += 9718811;
            result[5] += 87469307;
          } else {
            result[0] += 99969066;
            result[1] += 0;
            result[2] += 112310926;
            result[3] += 17278604;
            result[4] += 3702558;
            result[5] += 53069998;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95443717;
            result[5] += 190887435;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21209715;
            result[3] += 0;
            result[4] += 0;
            result[5] += 265121437;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42960000))) ) ) {
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
            result[3] += 275318416;
            result[4] += 0;
            result[5] += 11012736;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 17530478;
            result[1] += 2921746;
            result[2] += 146087322;
            result[3] += 87652393;
            result[4] += 0;
            result[5] += 32139211;
          } else {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 171798691;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 1337996;
            result[1] += 0;
            result[2] += 248867263;
            result[3] += 36125893;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 286331153;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 276457664;
            result[3] += 9873488;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 157482134;
            result[3] += 128849018;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 253372171;
            result[3] += 32958981;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 572662;
            result[1] += 0;
            result[2] += 281177192;
            result[3] += 4581298;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 2327895;
            result[1] += 2327895;
            result[2] += 0;
            result[3] += 0;
            result[4] += 271199831;
            result[5] += 10475529;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 132152839;
            result[3] += 44050946;
            result[4] += 66076419;
            result[5] += 44050946;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
            result[0] += 281637199;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4693953;
            result[5] += 0;
          } else {
            result[0] += 16598907;
            result[1] += 24898361;
            result[2] += 0;
            result[3] += 29048087;
            result[4] += 82994537;
            result[5] += 132791259;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 7953643;
            result[2] += 0;
            result[3] += 0;
            result[4] += 262470223;
            result[5] += 15907286;
          } else {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4625025;
            result[4] += 5045482;
            result[5] += 276660644;
          } else {
            result[0] += 808845;
            result[1] += 4044225;
            result[2] += 2426535;
            result[3] += 59045689;
            result[4] += 41251098;
            result[5] += 178754759;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 195225786;
            result[2] += 0;
            result[3] += 26030104;
            result[4] += 65075262;
            result[5] += 0;
          } else {
            result[0] += 1281123;
            result[1] += 284409467;
            result[2] += 0;
            result[3] += 0;
            result[4] += 640561;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 231398351;
            result[1] += 4861309;
            result[2] += 3645982;
            result[3] += 13854733;
            result[4] += 20174436;
            result[5] += 12396340;
          } else {
            result[0] += 10412041;
            result[1] += 249889006;
            result[2] += 0;
            result[3] += 5206020;
            result[4] += 20824083;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 2353406;
            result[1] += 1568937;
            result[2] += 36870038;
            result[3] += 142773342;
            result[4] += 5491282;
            result[5] += 97274145;
          } else {
            result[0] += 113200688;
            result[1] += 8878485;
            result[2] += 75467125;
            result[3] += 4439242;
            result[4] += 57710154;
            result[5] += 26635456;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19976592;
            result[3] += 239719104;
            result[4] += 0;
            result[5] += 26635456;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 63629145;
            result[3] += 190887435;
            result[4] += 0;
            result[5] += 31814572;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 190887435;
            result[3] += 76354974;
            result[4] += 0;
            result[5] += 19088743;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 117135471;
            result[3] += 169195681;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 260301048;
            result[3] += 26030104;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 163617801;
            result[3] += 122713351;
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
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 171798691;
            result[4] += 0;
            result[5] += 76354974;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 235802126;
            result[3] += 50529027;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 163617801;
            result[4] += 0;
            result[5] += 81808900;
          } else {
            result[0] += 1564651;
            result[1] += 0;
            result[2] += 251908828;
            result[3] += 32857673;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 286331153;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 5934324;
            result[1] += 0;
            result[2] += 252208787;
            result[3] += 28188040;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1024440;
            result[1] += 0;
            result[2] += 280184509;
            result[3] += 3585542;
            result[4] += 0;
            result[5] += 1536660;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 1088711;
            result[1] += 1088711;
            result[2] += 0;
            result[3] += 0;
            result[4] += 280887594;
            result[5] += 3266134;
          } else {
            result[0] += 20951059;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 160624793;
            result[5] += 104755299;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 416784;
            result[3] += 7918911;
            result[4] += 4584632;
            result[5] += 273410824;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52060209;
            result[3] += 0;
            result[4] += 130150524;
            result[5] += 104120419;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 249385197;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15394148;
            result[4] += 9236488;
            result[5] += 12315318;
          } else {
            result[0] += 4299266;
            result[1] += 4299266;
            result[2] += 11178093;
            result[3] += 121669243;
            result[4] += 19776626;
            result[5] += 125108656;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 238609294;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 285699075;
            result[2] += 0;
            result[3] += 0;
            result[4] += 632077;
            result[5] += 0;
          } else {
            result[0] += 8676701;
            result[1] += 173534032;
            result[2] += 0;
            result[3] += 17353403;
            result[4] += 86767016;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
            result[0] += 69056336;
            result[1] += 18527309;
            result[2] += 11790106;
            result[3] += 3368601;
            result[4] += 151587081;
            result[5] += 32001717;
          } else {
            result[0] += 262158472;
            result[1] += 5755400;
            result[2] += 1151080;
            result[3] += 2014390;
            result[4] += 9784180;
            result[5] += 5467630;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 22457345;
            result[1] += 0;
            result[2] += 88706514;
            result[3] += 79723575;
            result[4] += 19088743;
            result[5] += 76354974;
          } else {
            result[0] += 222702007;
            result[1] += 3181457;
            result[2] += 31814572;
            result[3] += 0;
            result[4] += 22270200;
            result[5] += 6362914;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 286331153;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 114532461;
            result[4] += 0;
            result[5] += 171798691;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 286331153;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19746976;
            result[3] += 246837200;
            result[4] += 0;
            result[5] += 19746976;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 250539758;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 286331153;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 125269879;
            result[3] += 125269879;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 240778469;
            result[3] += 45552683;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81808900;
            result[3] += 204522252;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46182444;
            result[3] += 46182444;
            result[4] += 0;
            result[5] += 193966264;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 286331153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e00000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 600274;
            result[1] += 0;
            result[2] += 260519329;
            result[3] += 22210173;
            result[4] += 600274;
            result[5] += 2401099;
          } else {
            result[0] += 4055682;
            result[1] += 0;
            result[2] += 279842061;
            result[3] += 1622272;
            result[4] += 811136;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ef0000))) ) ) {
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
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 284704271;
            result[5] += 1626881;
          } else {
            result[0] += 0;
            result[1] += 20452225;
            result[2] += 0;
            result[3] += 10226112;
            result[4] += 168730858;
            result[5] += 86921957;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 286331153;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 44739242;
            result[4] += 98426333;
            result[5] += 71582788;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 257698037;
            result[5] += 21474836;
          } else {
            result[0] += 576699;
            result[1] += 1441748;
            result[2] += 0;
            result[3] += 17012626;
            result[4] += 15859228;
            result[5] += 251440851;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 67108863;
            result[4] += 20132659;
            result[5] += 192378743;
          } else {
            result[0] += 1483581;
            result[1] += 8901486;
            result[2] += 2967162;
            result[3] += 201767030;
            result[4] += 5934324;
            result[5] += 65277568;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 220254733;
            result[2] += 0;
            result[3] += 0;
            result[4] += 66076419;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x422c0000))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
            result[0] += 26599068;
            result[1] += 79797206;
            result[2] += 0;
            result[3] += 0;
            result[4] += 179934877;
            result[5] += 0;
          } else {
            result[0] += 253911165;
            result[1] += 3541679;
            result[2] += 2996805;
            result[3] += 8173106;
            result[4] += 12259659;
            result[5] += 5448737;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 9988296;
            result[1] += 4994148;
            result[2] += 34959036;
            result[3] += 123188984;
            result[4] += 36623752;
            result[5] += 76576936;
          } else {
            result[0] += 99927650;
            result[1] += 0;
            result[2] += 149891476;
            result[3] += 28825283;
            result[4] += 5765056;
            result[5] += 1921685;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37347541;
            result[3] += 224085250;
            result[4] += 0;
            result[5] += 24898361;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 95443717;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 38177487;
            result[4] += 0;
            result[5] += 200431807;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 286331153;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 229064922;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 22906492;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 286331153;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 4936744;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 118481856;
            result[4] += 0;
            result[5] += 19746976;
          } else {
            result[0] += 1056572;
            result[1] += 0;
            result[2] += 238785389;
            result[3] += 40149755;
            result[4] += 0;
            result[5] += 6339435;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 7469508;
            result[1] += 0;
            result[2] += 241514102;
            result[3] += 37347541;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 570380;
            result[1] += 0;
            result[2] += 281768106;
            result[3] += 3422284;
            result[4] += 0;
            result[5] += 570380;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 277826267;
            result[5] += 8504885;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 12098499;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 165346158;
            result[5] += 108886494;
          } else {
            result[0] += 243686087;
            result[1] += 12184304;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30460760;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7341824;
            result[3] += 0;
            result[4] += 161520137;
            result[5] += 117469190;
          } else {
            result[0] += 0;
            result[1] += 676106;
            result[2] += 0;
            result[3] += 15212398;
            result[4] += 9803545;
            result[5] += 260639101;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 14016210;
            result[2] += 14016210;
            result[3] += 68078735;
            result[4] += 14016210;
            result[5] += 176203786;
          } else {
            result[0] += 1483581;
            result[1] += 0;
            result[2] += 19286554;
            result[3] += 195832705;
            result[4] += 5934324;
            result[5] += 63793987;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 35301101;
            result[2] += 0;
            result[3] += 15689378;
            result[4] += 235340673;
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 23278955;
            result[1] += 100099508;
            result[2] += 0;
            result[3] += 0;
            result[4] += 162952688;
            result[5] += 0;
          } else {
            result[0] += 246885208;
            result[1] += 3248489;
            result[2] += 4176629;
            result[3] += 7425119;
            result[4] += 14154133;
            result[5] += 10441573;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1847297;
            result[1] += 923648;
            result[2] += 77586505;
            result[3] += 104372323;
            result[4] += 17549328;
            result[5] += 84052048;
          } else {
            result[0] += 214748364;
            result[1] += 4210752;
            result[2] += 0;
            result[3] += 0;
            result[4] += 54739779;
            result[5] += 12632256;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 22025473;
            result[4] += 11012736;
            result[5] += 253292943;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 50107951;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 200431807;
            result[3] += 57266230;
            result[4] += 0;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 163617801;
            result[3] += 0;
            result[4] += 122713351;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 286331153;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 78090314;
            result[3] += 208240838;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 237708881;
            result[3] += 48622271;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 200431807;
            result[4] += 0;
            result[5] += 57266230;
          } else {
            result[0] += 2152865;
            result[1] += 0;
            result[2] += 200216520;
            result[3] += 58127376;
            result[4] += 4305731;
            result[5] += 21528658;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 0;
            result[1] += 2366373;
            result[2] += 261484234;
            result[3] += 22480545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 204522252;
            result[1] += 0;
            result[2] += 81808900;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 263424660;
            result[3] += 22906492;
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 282636557;
            result[3] += 3694595;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 272014595;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 1460873;
            result[1] += 1460873;
            result[2] += 0;
            result[3] += 0;
            result[4] += 261496308;
            result[5] += 21913098;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 269969372;
            result[5] += 16361780;
          } else {
            result[0] += 183920740;
            result[1] += 2090008;
            result[2] += 0;
            result[3] += 31350126;
            result[4] += 18810075;
            result[5] += 50160201;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 235802126;
            result[5] += 50529027;
          } else {
            result[0] += 0;
            result[1] += 326862;
            result[2] += 653724;
            result[3] += 13728205;
            result[4] += 7190965;
            result[5] += 264431395;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 3624444;
            result[1] += 1208148;
            result[2] += 12081483;
            result[3] += 47117784;
            result[4] += 72488899;
            result[5] += 149810392;
          } else {
            result[0] += 12632256;
            result[1] += 0;
            result[2] += 16843009;
            result[3] += 187378475;
            result[4] += 1052688;
            result[5] += 68424724;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 27269633;
            result[1] += 13634816;
            result[2] += 0;
            result[3] += 0;
            result[4] += 245426702;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 277094664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9236488;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 66934555;
            result[1] += 59497382;
            result[2] += 0;
            result[3] += 0;
            result[4] += 137587696;
            result[5] += 22311518;
          } else {
            result[0] += 256360041;
            result[1] += 2408392;
            result[2] += 3211190;
            result[3] += 8563174;
            result[4] += 12577162;
            result[5] += 3211190;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 7203299;
            result[1] += 0;
            result[2] += 82837943;
            result[3] += 70232169;
            result[4] += 18008248;
            result[5] += 108049491;
          } else {
            result[0] += 185273099;
            result[1] += 3368601;
            result[2] += 13474407;
            result[3] += 0;
            result[4] += 84215045;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42900000))) ) ) {
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
            result[3] += 62472251;
            result[4] += 5206020;
            result[5] += 218652880;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 286331153;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75793540;
            result[3] += 176851594;
            result[4] += 0;
            result[5] += 33686018;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 57266230;
            result[3] += 114532461;
            result[4] += 0;
            result[5] += 114532461;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 250539758;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 190887435;
            result[5] += 95443717;
          } else {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 286331153;
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
            result[4] += 71582788;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 286331153;
          } else {
            result[0] += 13317728;
            result[1] += 0;
            result[2] += 179789328;
            result[3] += 33294320;
            result[4] += 0;
            result[5] += 59929776;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 9544371;
            result[1] += 0;
            result[2] += 229932592;
            result[3] += 44251178;
            result[4] += 0;
            result[5] += 2603010;
          } else {
            result[0] += 2998231;
            result[1] += 0;
            result[2] += 269840877;
            result[3] += 12492633;
            result[4] += 0;
            result[5] += 999410;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 286331153;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1778454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 282774244;
            result[5] += 1778454;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 198229259;
            result[5] += 88101893;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 68719476;
            result[5] += 217611676;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 795364;
            result[3] += 7158278;
            result[4] += 5169868;
            result[5] += 273207641;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 94080235;
            result[1] += 65447120;
            result[2] += 0;
            result[3] += 0;
            result[4] += 98170681;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 9261385;
            result[2] += 2315346;
            result[3] += 104962363;
            result[4] += 8489602;
            result[5] += 161302455;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 4210752;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 256855887;
            result[5] += 25264513;
          } else {
            result[0] += 0;
            result[1] += 254516580;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31814572;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 9336885;
            result[1] += 158727052;
            result[2] += 9336885;
            result[3] += 24898361;
            result[4] += 77807378;
            result[5] += 6224590;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 256281040;
            result[1] += 5863436;
            result[2] += 0;
            result[3] += 3664647;
            result[4] += 18078929;
            result[5] += 2443098;
          } else {
            result[0] += 87490074;
            result[1] += 21209715;
            result[2] += 15907286;
            result[3] += 47721858;
            result[4] += 42419430;
            result[5] += 71582788;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 7535030;
            result[1] += 4305731;
            result[2] += 39828017;
            result[3] += 76426736;
            result[4] += 34445852;
            result[5] += 123789784;
          } else {
            result[0] += 223115184;
            result[1] += 0;
            result[2] += 7437172;
            result[3] += 0;
            result[4] += 44623036;
            result[5] += 11155759;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 286331153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 2701237;
            result[2] += 5402474;
            result[3] += 175580424;
            result[4] += 5402474;
            result[5] += 97244542;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 0;
            result[4] += 0;
            result[5] += 245426702;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 80760068;
            result[3] += 205571084;
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 210365745;
            result[3] += 35060957;
            result[4] += 0;
            result[5] += 40904450;
          } else {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 107374182;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 238609294;
          } else {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 178956970;
            result[3] += 17895697;
            result[4] += 26843545;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 91105366;
            result[1] += 0;
            result[2] += 169195681;
            result[3] += 26030104;
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
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 23216039;
            result[2] += 100602837;
            result[3] += 92864157;
            result[4] += 0;
            result[5] += 69648118;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 241591910;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 254332681;
            result[3] += 27584889;
            result[4] += 0;
            result[5] += 4413582;
          } else {
            result[0] += 4113953;
            result[1] += 0;
            result[2] += 279748827;
            result[3] += 2468372;
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
