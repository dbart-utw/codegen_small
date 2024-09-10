
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 1289779;
            result[2] += 0;
            result[3] += 0;
            result[4] += 134137116;
            result[5] += 7738679;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 52266797;
            result[1] += 14771051;
            result[2] += 0;
            result[3] += 3408704;
            result[4] += 42040685;
            result[5] += 30678337;
          } else {
            result[0] += 160499;
            result[1] += 0;
            result[2] += 160499;
            result[3] += 5777982;
            result[4] += 8185475;
            result[5] += 128881118;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 4149726;
            result[1] += 0;
            result[2] += 14524043;
            result[3] += 20748634;
            result[4] += 12449180;
            result[5] += 91293990;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 967334;
            result[3] += 105439512;
            result[4] += 0;
            result[5] += 36758729;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 123188984;
            result[2] += 0;
            result[3] += 6658864;
            result[4] += 3329432;
            result[5] += 9988296;
          } else {
            result[0] += 0;
            result[1] += 22605091;
            result[2] += 0;
            result[3] += 15070060;
            result[4] += 67815273;
            result[5] += 37675151;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 10604857;
            result[1] += 7423400;
            result[2] += 1060485;
            result[3] += 4241943;
            result[4] += 115592946;
            result[5] += 4241943;
          } else {
            result[0] += 10604857;
            result[1] += 74234002;
            result[2] += 31814572;
            result[3] += 0;
            result[4] += 26512143;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 119765727;
            result[1] += 2997024;
            result[2] += 806891;
            result[3] += 3919186;
            result[4] += 9567425;
            result[5] += 6109320;
          } else {
            result[0] += 31122951;
            result[1] += 2334221;
            result[2] += 23342213;
            result[3] += 39292726;
            result[4] += 14005328;
            result[5] += 33068135;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 102261126;
            result[3] += 10226112;
            result[4] += 30678337;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 8259552;
            result[2] += 5506368;
            result[3] += 24778657;
            result[4] += 16519104;
            result[5] += 88101893;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 114532461;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19611722;
            result[3] += 107864475;
            result[4] += 0;
            result[5] += 15689378;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a30000))) ) ) {
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
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7844689;
            result[1] += 0;
            result[2] += 101980958;
            result[3] += 27456411;
            result[4] += 0;
            result[5] += 5883516;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c90000))) ) ) {
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
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 114532461;
            result[3] += 22906492;
            result[4] += 0;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20452225;
            result[3] += 122713351;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
            result[0] += 105490424;
            result[1] += 0;
            result[2] += 37675151;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 953166;
            result[1] += 0;
            result[2] += 134396446;
            result[3] += 7053430;
            result[4] += 0;
            result[5] += 762533;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42890000))) ) ) {
            result[0] += 601536;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 140759432;
            result[5] += 1804608;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21209715;
            result[4] += 79536431;
            result[5] += 42419430;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 27269633;
            result[2] += 0;
            result[3] += 0;
            result[4] += 115895942;
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
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 848137;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7802863;
            result[4] += 5936961;
            result[5] += 128577614;
          } else {
            result[0] += 3181457;
            result[1] += 353495;
            result[2] += 2474466;
            result[3] += 57619725;
            result[4] += 6716409;
            result[5] += 72820021;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8947848;
            result[1] += 11930464;
            result[2] += 4473924;
            result[3] += 0;
            result[4] += 108865490;
            result[5] += 8947848;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 119738482;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23427094;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 23860929;
            result[1] += 62405507;
            result[2] += 0;
            result[3] += 5506368;
            result[4] += 51392771;
            result[5] += 0;
          } else {
            result[0] += 127745816;
            result[1] += 1002911;
            result[2] += 877547;
            result[3] += 4513100;
            result[4] += 6769650;
            result[5] += 2256550;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 7158278;
            result[1] += 1301505;
            result[2] += 39695909;
            result[3] += 54663220;
            result[4] += 3904515;
            result[5] += 36442146;
          } else {
            result[0] += 84031968;
            result[1] += 10893032;
            result[2] += 20229918;
            result[3] += 0;
            result[4] += 28010656;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 3670912;
            result[1] += 0;
            result[2] += 22025473;
            result[3] += 7341824;
            result[4] += 18354561;
            result[5] += 91772805;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2701237;
            result[3] += 116153203;
            result[4] += 0;
            result[5] += 24311135;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 60845370;
            result[3] += 64424509;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 95443717;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 0;
          } else {
            result[0] += 5506368;
            result[1] += 0;
            result[2] += 112880550;
            result[3] += 11012736;
            result[4] += 0;
            result[5] += 13765920;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 87080092;
            result[3] += 45753947;
            result[4] += 0;
            result[5] += 10331536;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d80000))) ) ) {
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
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 6983686;
            result[1] += 0;
            result[2] += 118722673;
            result[3] += 3491843;
            result[4] += 0;
            result[5] += 13967373;
          } else {
            result[0] += 116322030;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 114532461;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1346987;
            result[1] += 0;
            result[2] += 134313941;
            result[3] += 7504647;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 1188096;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 134254855;
            result[5] += 7722624;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 136802661;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3181457;
            result[5] += 3181457;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6224590;
            result[3] += 29048087;
            result[4] += 35272678;
            result[5] += 72620219;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 134744072;
            result[5] += 8421504;
          } else {
            result[0] += 0;
            result[1] += 1142712;
            result[2] += 1305957;
            result[3] += 8488722;
            result[4] += 8162233;
            result[5] += 124065949;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 10122818;
            result[2] += 0;
            result[3] += 26030104;
            result[4] += 10122818;
            result[5] += 96889834;
          } else {
            result[0] += 1934669;
            result[1] += 0;
            result[2] += 13542689;
            result[3] += 105439512;
            result[4] += 0;
            result[5] += 22248704;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
            result[0] += 5041041;
            result[1] += 44361164;
            result[2] += 0;
            result[3] += 3024624;
            result[4] += 89730537;
            result[5] += 1008208;
          } else {
            result[0] += 124337064;
            result[1] += 1951736;
            result[2] += 1377696;
            result[3] += 2985008;
            result[4] += 10447528;
            result[5] += 2066544;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 2327895;
            result[1] += 1163947;
            result[2] += 8729608;
            result[3] += 65181075;
            result[4] += 5237764;
            result[5] += 60525284;
          } else {
            result[0] += 43088668;
            result[1] += 0;
            result[2] += 69497852;
            result[3] += 10424677;
            result[4] += 12509613;
            result[5] += 7644763;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
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
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6817408;
            result[3] += 40904450;
            result[4] += 6817408;
            result[5] += 88626309;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bc0000))) ) ) {
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
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 83804239;
            result[3] += 34918433;
            result[4] += 0;
            result[5] += 24442903;
          } else {
            result[0] += 117135471;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26030104;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 119304647;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 74991492;
            result[3] += 68174084;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 28633115;
            result[5] += 85899345;
          } else {
            result[0] += 701792;
            result[1] += 0;
            result[2] += 115093894;
            result[3] += 24562721;
            result[4] += 0;
            result[5] += 2807168;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 430573;
            result[1] += 0;
            result[2] += 138429271;
            result[3] += 3875158;
            result[4] += 0;
            result[5] += 430573;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 715827;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141018092;
            result[5] += 1431655;
          } else {
            result[0] += 40904450;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51130563;
            result[5] += 51130563;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 100215903;
          } else {
            result[0] += 0;
            result[1] += 129530759;
            result[2] += 0;
            result[3] += 13634816;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 11302545;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 97955394;
            result[5] += 33907636;
          } else {
            result[0] += 227246;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3408704;
            result[4] += 1590728;
            result[5] += 137938896;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 11807470;
            result[1] += 5411757;
            result[2] += 0;
            result[3] += 17219227;
            result[4] += 11807470;
            result[5] += 96919651;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5992977;
            result[3] += 87231118;
            result[4] += 1997659;
            result[5] += 47943820;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c30000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 19558138;
            result[1] += 10952557;
            result[2] += 0;
            result[3] += 3129302;
            result[4] += 106396275;
            result[5] += 3129302;
          } else {
            result[0] += 117750189;
            result[1] += 1865349;
            result[2] += 116584;
            result[3] += 6995060;
            result[4] += 10026253;
            result[5] += 6412139;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1198038;
            result[1] += 7787248;
            result[2] += 17970574;
            result[3] += 61698972;
            result[4] += 10183325;
            result[5] += 44327416;
          } else {
            result[0] += 34706806;
            result[1] += 2479057;
            result[2] += 63835733;
            result[3] += 21071989;
            result[4] += 9296466;
            result[5] += 11775523;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 23860929;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 52745212;
            result[4] += 0;
            result[5] += 79117818;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31814572;
            result[3] += 111351003;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 94279769;
            result[3] += 33172511;
            result[4] += 0;
            result[5] += 15713294;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13015052;
            result[3] += 130150524;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 114532461;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 57266230;
          } else {
            result[0] += 2921746;
            result[1] += 0;
            result[2] += 131478590;
            result[3] += 5843492;
            result[4] += 0;
            result[5] += 2921746;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2807168;
            result[1] += 0;
            result[2] += 117901063;
            result[3] += 21334478;
            result[4] += 0;
            result[5] += 1122867;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 139235541;
            result[3] += 3930035;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 142668473;
            result[3] += 497102;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4936744;
            result[1] += 0;
            result[2] += 128355344;
            result[3] += 9873488;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 1943424;
            result[2] += 0;
            result[3] += 0;
            result[4] += 140574344;
            result[5] += 647808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 66076419;
            result[5] += 77089156;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 114532461;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 114532461;
            result[4] += 28633115;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 124692598;
            result[5] += 18472977;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 397130;
            result[3] += 5162697;
            result[4] += 2184218;
            result[5] += 135421530;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 106048575;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37117001;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 623815;
            result[2] += 1247630;
            result[3] += 48033766;
            result[4] += 16843009;
            result[5] += 76417355;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 13015052;
            result[2] += 0;
            result[3] += 0;
            result[4] += 130150524;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 142811206;
            result[2] += 0;
            result[3] += 0;
            result[4] += 354370;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 102261126;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40904450;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
            result[0] += 12632256;
            result[1] += 117901063;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12632256;
            result[5] += 0;
          } else {
            result[0] += 16843009;
            result[1] += 17778731;
            result[2] += 935722;
            result[3] += 6550059;
            result[4] += 100122331;
            result[5] += 935722;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 126641387;
            result[1] += 264387;
            result[2] += 264387;
            result[3] += 5287740;
            result[4] += 8328191;
            result[5] += 2379483;
          } else {
            result[0] += 52663086;
            result[1] += 1170290;
            result[2] += 27306785;
            result[3] += 31207755;
            result[4] += 3120775;
            result[5] += 27696882;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 138393390;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 52060209;
            result[4] += 26030104;
            result[5] += 65075262;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8180890;
            result[3] += 106351571;
            result[4] += 6135667;
            result[5] += 22497447;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 8421504;
            result[2] += 19650177;
            result[3] += 61757699;
            result[4] += 0;
            result[5] += 53336195;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 117901063;
            result[3] += 0;
            result[4] += 0;
            result[5] += 25264513;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 8855602;
            result[1] += 0;
            result[2] += 45753947;
            result[3] += 69368887;
            result[4] += 4427801;
            result[5] += 14759337;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 101058054;
            result[3] += 28071681;
            result[4] += 0;
            result[5] += 14035840;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 41442666;
            result[1] += 3767515;
            result[2] += 60280242;
            result[3] += 0;
            result[4] += 26372606;
            result[5] += 11302545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 117377988;
            result[3] += 21341452;
            result[4] += 0;
            result[5] += 4446135;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4382619;
            result[1] += 0;
            result[2] += 119061168;
            result[3] += 18991351;
            result[4] += 0;
            result[5] += 730436;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 4090445;
            result[1] += 0;
            result[2] += 124758573;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 139889476;
            result[3] += 3276100;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 552762;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 139296236;
            result[5] += 3316577;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 395485;
            result[1] += 0;
            result[2] += 395485;
            result[3] += 3163880;
            result[4] += 3361622;
            result[5] += 135849103;
          } else {
            result[0] += 16025997;
            result[1] += 0;
            result[2] += 0;
            result[3] += 18162797;
            result[4] += 18162797;
            result[5] += 90813985;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 7535030;
            result[1] += 7535030;
            result[2] += 6593151;
            result[3] += 15070060;
            result[4] += 15070060;
            result[5] += 91362242;
          } else {
            result[0] += 6737203;
            result[1] += 4210752;
            result[2] += 0;
            result[3] += 93478699;
            result[4] += 4210752;
            result[5] += 34528168;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 122713351;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20452225;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2105376;
            result[1] += 21053761;
            result[2] += 0;
            result[3] += 0;
            result[4] += 120006439;
            result[5] += 0;
          } else {
            result[0] += 119921407;
            result[1] += 3237993;
            result[2] += 693855;
            result[3] += 5203918;
            result[4] += 10060908;
            result[5] += 4047492;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 967334;
            result[1] += 3869339;
            result[2] += 13059022;
            result[3] += 41111736;
            result[4] += 11124352;
            result[5] += 73033790;
          } else {
            result[0] += 83362234;
            result[1] += 0;
            result[2] += 10873334;
            result[3] += 1812222;
            result[4] += 45305562;
            result[5] += 1812222;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26030104;
            result[3] += 0;
            result[4] += 0;
            result[5] += 117135471;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 3624444;
            result[1] += 0;
            result[2] += 5436667;
            result[3] += 90611124;
            result[4] += 5436667;
            result[5] += 38056672;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48574034;
            result[3] += 86921957;
            result[4] += 0;
            result[5] += 7669584;
          } else {
            result[0] += 9544371;
            result[1] += 0;
            result[2] += 95443717;
            result[3] += 31814572;
            result[4] += 0;
            result[5] += 6362914;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 102261126;
            result[3] += 34768782;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 136583251;
            result[3] += 6582325;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 6507526;
            result[1] += 0;
            result[2] += 136658050;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 121140103;
            result[1] += 0;
            result[2] += 22025473;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 127716053;
            result[3] += 15449522;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 783753;
            result[1] += 0;
            result[2] += 139508061;
            result[3] += 1828757;
            result[4] += 0;
            result[5] += 1045004;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 591593;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 140799203;
            result[5] += 1774779;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 22025473;
            result[4] += 66076419;
            result[5] += 55063683;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
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
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 53687091;
            result[5] += 44739242;
          } else {
            result[0] += 0;
            result[1] += 365218;
            result[2] += 0;
            result[3] += 6026102;
            result[4] += 4017401;
            result[5] += 132756854;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 14829900;
            result[1] += 8555711;
            result[2] += 1140761;
            result[3] += 21674469;
            result[4] += 11407615;
            result[5] += 85557117;
          } else {
            result[0] += 1052688;
            result[1] += 3158064;
            result[2] += 0;
            result[3] += 95794613;
            result[4] += 3158064;
            result[5] += 40002146;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 142794681;
            result[2] += 0;
            result[3] += 0;
            result[4] += 370895;
            result[5] += 0;
          } else {
            result[0] += 8676701;
            result[1] += 104120419;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30368455;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 6006947;
            result[1] += 2002315;
            result[2] += 1001157;
            result[3] += 3003473;
            result[4] += 122141261;
            result[5] += 9010420;
          } else {
            result[0] += 0;
            result[1] += 138228832;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4936744;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42850000))) ) ) {
            result[0] += 121074745;
            result[1] += 4248236;
            result[2] += 0;
            result[3] += 5522707;
            result[4] += 10195768;
            result[5] += 2124118;
          } else {
            result[0] += 8913032;
            result[1] += 3342387;
            result[2] += 5570645;
            result[3] += 43451031;
            result[4] += 24510838;
            result[5] += 57377643;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 12449180;
            result[1] += 56021312;
            result[2] += 18673770;
            result[3] += 0;
            result[4] += 56021312;
            result[5] += 0;
          } else {
            result[0] += 134662408;
            result[1] += 1214738;
            result[2] += 2082408;
            result[3] += 1735340;
            result[4] += 3470680;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9357227;
            result[3] += 93572272;
            result[4] += 0;
            result[5] += 40236077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 112487238;
            result[3] += 0;
            result[4] += 0;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31814572;
            result[3] += 42419430;
            result[4] += 0;
            result[5] += 68931573;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 10226112;
            result[4] += 10226112;
            result[5] += 15339168;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 114532461;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 7040929;
            result[1] += 0;
            result[2] += 75103253;
            result[3] += 37551626;
            result[4] += 2346976;
            result[5] += 21122789;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 5891587;
            result[1] += 0;
            result[2] += 120777543;
            result[3] += 15318127;
            result[4] += 0;
            result[5] += 1178317;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 143165576;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 122383476;
            result[3] += 18472977;
            result[4] += 0;
            result[5] += 2309122;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 107374182;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1268823;
            result[1] += 0;
            result[2] += 136821459;
            result[3] += 4863823;
            result[4] += 0;
            result[5] += 211470;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
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
            result[4] += 109078534;
            result[5] += 34087042;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 74787987;
            result[5] += 68377588;
          } else {
            result[0] += 113339414;
            result[1] += 0;
            result[2] += 3976821;
            result[3] += 0;
            result[4] += 19884107;
            result[5] += 5965232;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2265278;
            result[4] += 7928473;
            result[5] += 132971825;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1564651;
            result[3] += 31293022;
            result[4] += 6258604;
            result[5] += 104049298;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 4618244;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 13854733;
            result[5] += 96059483;
          } else {
            result[0] += 0;
            result[1] += 1573248;
            result[2] += 1573248;
            result[3] += 105407622;
            result[4] += 3933120;
            result[5] += 30678337;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 7819968;
            result[1] += 60755139;
            result[2] += 1804608;
            result[3] += 2406144;
            result[4] += 69778180;
            result[5] += 601536;
          } else {
            result[0] += 124916674;
            result[1] += 3296575;
            result[2] += 1412818;
            result[3] += 2943371;
            result[4] += 8947848;
            result[5] += 1648287;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 4116582;
            result[1] += 457398;
            result[2] += 39793626;
            result[3] += 55802556;
            result[4] += 3201786;
            result[5] += 39793626;
          } else {
            result[0] += 98686950;
            result[1] += 5559828;
            result[2] += 18069441;
            result[3] += 0;
            result[4] += 20849355;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 11453246;
            result[1] += 108805838;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22906492;
            result[5] += 0;
          } else {
            result[0] += 391162;
            result[1] += 142383250;
            result[2] += 0;
            result[3] += 0;
            result[4] += 391162;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 95443717;
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
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8421504;
            result[3] += 0;
            result[4] += 16843009;
            result[5] += 117901063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13967373;
            result[3] += 80312396;
            result[4] += 0;
            result[5] += 48885806;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 133621204;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9544371;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42fa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 110627945;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 22776341;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 95443717;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 107374182;
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 1410498;
            result[1] += 0;
            result[2] += 119187105;
            result[3] += 19746976;
            result[4] += 0;
            result[5] += 2820996;
          } else {
            result[0] += 821610;
            result[1] += 0;
            result[2] += 138030512;
            result[3] += 4108050;
            result[4] += 0;
            result[5] += 205402;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41e40000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 139571461;
            result[5] += 3594114;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 77548020;
            result[5] += 65617555;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3172058;
            result[4] += 1268823;
            result[5] += 138724694;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 82109668;
            result[1] += 10526880;
            result[2] += 0;
            result[3] += 4210752;
            result[4] += 44212898;
            result[5] += 2105376;
          } else {
            result[0] += 0;
            result[1] += 2156108;
            result[2] += 1724886;
            result[3] += 28460626;
            result[4] += 18542529;
            result[5] += 92281425;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 894784;
            result[1] += 3579139;
            result[2] += 3579139;
            result[3] += 118111600;
            result[4] += 1789569;
            result[5] += 15211342;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50301418;
            result[3] += 23216039;
            result[4] += 3869339;
            result[5] += 65778778;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 137551240;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5614336;
            result[5] += 0;
          } else {
            result[0] += 25975188;
            result[1] += 7852964;
            result[2] += 3020370;
            result[3] += 7248889;
            result[4] += 88798901;
            result[5] += 10269260;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 125760620;
            result[1] += 3795065;
            result[2] += 0;
            result[3] += 4449387;
            result[4] += 6281487;
            result[5] += 2879015;
          } else {
            result[0] += 47498859;
            result[1] += 0;
            result[2] += 20069940;
            result[3] += 25421924;
            result[4] += 10703968;
            result[5] += 39470883;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42990000))) ) ) {
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
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 57768565;
            result[4] += 0;
            result[5] += 85397010;
          } else {
            result[0] += 0;
            result[1] += 3817748;
            result[2] += 36268612;
            result[3] += 91625968;
            result[4] += 0;
            result[5] += 11453246;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 6817408;
            result[1] += 1363481;
            result[2] += 87262827;
            result[3] += 27269633;
            result[4] += 4090445;
            result[5] += 16361780;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 42949672;
          } else {
            result[0] += 137438953;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 51130563;
            result[4] += 0;
            result[5] += 56243619;
          } else {
            result[0] += 3225833;
            result[1] += 0;
            result[2] += 128265296;
            result[3] += 11060001;
            result[4] += 0;
            result[5] += 614444;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141368519;
            result[5] += 1797057;
          } else {
            result[0] += 8421504;
            result[1] += 4210752;
            result[2] += 0;
            result[3] += 0;
            result[4] += 92636549;
            result[5] += 37896770;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
            result[0] += 107924819;
            result[1] += 2202547;
            result[2] += 0;
            result[3] += 2202547;
            result[4] += 8810189;
            result[5] += 22025473;
          } else {
            result[0] += 167054;
            result[1] += 334108;
            result[2] += 0;
            result[3] += 6849228;
            result[4] += 6013956;
            result[5] += 129801228;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
            result[0] += 137200344;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 0;
          } else {
            result[0] += 1939912;
            result[1] += 6983686;
            result[2] += 6595704;
            result[3] += 59361336;
            result[4] += 11251495;
            result[5] += 57033441;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42440000))) ) ) {
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
            result[4] += 132939463;
            result[5] += 10226112;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
            result[0] += 327610;
            result[1] += 142510356;
            result[2] += 0;
            result[3] += 0;
            result[4] += 327610;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 11495046;
            result[1] += 9405037;
            result[2] += 0;
            result[3] += 3135012;
            result[4] += 113905458;
            result[5] += 5225021;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 129267316;
            result[1] += 1619214;
            result[2] += 134934;
            result[3] += 3238429;
            result[4] += 8500877;
            result[5] += 404803;
          } else {
            result[0] += 36442146;
            result[1] += 433835;
            result[2] += 32971466;
            result[3] += 34706806;
            result[4] += 11279712;
            result[5] += 27331610;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11608019;
            result[3] += 7738679;
            result[4] += 7738679;
            result[5] += 116080197;
          } else {
            result[0] += 2346976;
            result[1] += 9387906;
            result[2] += 14081859;
            result[3] += 44592556;
            result[4] += 35204649;
            result[5] += 37551626;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 0;
            result[1] += 9873488;
            result[2] += 103671624;
            result[3] += 0;
            result[4] += 29620464;
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43103614;
            result[3] += 80049569;
            result[4] += 0;
            result[5] += 20012392;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 103397360;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 31814572;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20452225;
            result[3] += 40904450;
            result[4] += 0;
            result[5] += 81808900;
          } else {
            result[0] += 5464334;
            result[1] += 0;
            result[2] += 121308236;
            result[3] += 16393004;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 3869339;
            result[1] += 0;
            result[2] += 118844011;
            result[3] += 18241173;
            result[4] += 0;
            result[5] += 2211051;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 57266230;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 141350071;
            result[3] += 1815505;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 641998;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141881580;
            result[5] += 641998;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 89478485;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 76354974;
            result[5] += 66810602;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 124076832;
            result[5] += 9544371;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 31814572;
            result[2] += 0;
            result[3] += 0;
            result[4] += 111351003;
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
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 117135471;
            result[5] += 26030104;
          } else {
            result[0] += 136428372;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5052902;
            result[5] += 1684300;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2471650;
            result[4] += 4372919;
            result[5] += 136321007;
          } else {
            result[0] += 1556147;
            result[1] += 3112295;
            result[2] += 0;
            result[3] += 26454508;
            result[4] += 18155054;
            result[5] += 93887570;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 63629145;
            result[2] += 0;
            result[3] += 31814572;
            result[4] += 47721858;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5843492;
            result[3] += 11686985;
            result[4] += 0;
            result[5] += 125635097;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2426535;
            result[3] += 63089915;
            result[4] += 4853070;
            result[5] += 72796055;
          } else {
            result[0] += 1547735;
            result[1] += 0;
            result[2] += 773867;
            result[3] += 119949537;
            result[4] += 0;
            result[5] += 20894435;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 1626881;
            result[1] += 19522578;
            result[2] += 0;
            result[3] += 0;
            result[4] += 120389234;
            result[5] += 1626881;
          } else {
            result[0] += 0;
            result[1] += 125269879;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 142819765;
            result[2] += 0;
            result[3] += 0;
            result[4] += 345810;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 103397360;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39768215;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
            result[0] += 33038209;
            result[1] += 0;
            result[2] += 3670912;
            result[3] += 3670912;
            result[4] += 58734595;
            result[5] += 44050946;
          } else {
            result[0] += 3579139;
            result[1] += 3579139;
            result[2] += 7158278;
            result[3] += 103795042;
            result[4] += 3579139;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
            result[0] += 28633115;
            result[1] += 39045157;
            result[2] += 0;
            result[3] += 5206020;
            result[4] += 62472251;
            result[5] += 7809031;
          } else {
            result[0] += 123535012;
            result[1] += 1750496;
            result[2] += 1250354;
            result[3] += 5001417;
            result[4] += 7502126;
            result[5] += 4126169;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22906492;
            result[3] += 85899345;
            result[4] += 4294967;
            result[5] += 30064771;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 93057624;
          } else {
            result[0] += 1008208;
            result[1] += 0;
            result[2] += 95779787;
            result[3] += 39320123;
            result[4] += 0;
            result[5] += 7057457;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 10883932;
            result[1] += 1674451;
            result[2] += 97955394;
            result[3] += 20930639;
            result[4] += 0;
            result[5] += 11721158;
          } else {
            result[0] += 534865;
            result[1] += 0;
            result[2] += 133359715;
            result[3] += 7844689;
            result[4] += 0;
            result[5] += 1426307;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 135211933;
            result[1] += 0;
            result[2] += 7953643;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6507526;
            result[1] += 0;
            result[2] += 136658050;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 548527;
            result[2] += 0;
            result[3] += 0;
            result[4] += 131646507;
            result[5] += 10970542;
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
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 102261126;
            result[5] += 40904450;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4127972;
            result[4] += 3565066;
            result[5] += 135472537;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 90813985;
            result[1] += 2136799;
            result[2] += 0;
            result[3] += 2136799;
            result[4] += 40599193;
            result[5] += 7478798;
          } else {
            result[0] += 274789;
            result[1] += 3022689;
            result[2] += 2198319;
            result[3] += 58805054;
            result[4] += 4946219;
            result[5] += 73918503;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 4273599;
            result[1] += 2136799;
            result[2] += 0;
            result[3] += 0;
            result[4] += 134618377;
            result[5] += 2136799;
          } else {
            result[0] += 0;
            result[1] += 134744072;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8421504;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 108608368;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34557208;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42890000))) ) ) {
            result[0] += 42949672;
            result[1] += 23264406;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 5368709;
          } else {
            result[0] += 126748144;
            result[1] += 834784;
            result[2] += 556523;
            result[3] += 2921746;
            result[4] += 10713070;
            result[5] += 1391307;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 6444752;
            result[1] += 920678;
            result[2] += 47414965;
            result[3] += 44652929;
            result[4] += 3222376;
            result[5] += 40509873;
          } else {
            result[0] += 93608261;
            result[1] += 3670912;
            result[2] += 20190017;
            result[3] += 1835456;
            result[4] += 23860929;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9236488;
            result[3] += 9236488;
            result[4] += 27709466;
            result[5] += 96983132;
          } else {
            result[0] += 7844689;
            result[1] += 1961172;
            result[2] += 23534067;
            result[3] += 66679857;
            result[4] += 1961172;
            result[5] += 41184617;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 93798136;
            result[3] += 39493952;
            result[4] += 0;
            result[5] += 9873488;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e60000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 23860929;
            result[2] += 23860929;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 133929087;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9236488;
          }
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 71582788;
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 69273666;
            result[3] += 60037177;
            result[4] += 0;
            result[5] += 13854733;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 109326440;
            result[3] += 33839136;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
            result[0] += 50529027;
            result[1] += 0;
            result[2] += 84215045;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8421504;
          } else {
            result[0] += 737966;
            result[1] += 0;
            result[2] += 133940990;
            result[3] += 8117635;
            result[4] += 0;
            result[5] += 368983;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141982389;
            result[5] += 1183186;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 131123612;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8027976;
            result[5] += 4013988;
          } else {
            result[0] += 7279605;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 77649126;
            result[5] += 58236844;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 8676701;
            result[2] += 0;
            result[3] += 17353403;
            result[4] += 78090314;
            result[5] += 39045157;
          } else {
            result[0] += 169828;
            result[1] += 0;
            result[2] += 849143;
            result[3] += 6962975;
            result[4] += 4925031;
            result[5] += 130258596;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 6049249;
            result[1] += 6049249;
            result[2] += 2016416;
            result[3] += 25205207;
            result[4] += 12098499;
            result[5] += 91746953;
          } else {
            result[0] += 554905;
            result[1] += 1109810;
            result[2] += 1664716;
            result[3] += 96553528;
            result[4] += 1664716;
            result[5] += 41617900;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 128849018;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 142505827;
            result[2] += 0;
            result[3] += 0;
            result[4] += 659749;
            result[5] += 0;
          } else {
            result[0] += 17895697;
            result[1] += 17895697;
            result[2] += 44739242;
            result[3] += 17895697;
            result[4] += 44739242;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 14708792;
            result[1] += 12747619;
            result[2] += 0;
            result[3] += 2941758;
            result[4] += 112767406;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 139836144;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3329432;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 131920770;
            result[1] += 1919844;
            result[2] += 411395;
            result[3] += 1782713;
            result[4] += 6582325;
            result[5] += 548527;
          } else {
            result[0] += 32166949;
            result[1] += 1359166;
            result[2] += 42587228;
            result[3] += 33526116;
            result[4] += 6795834;
            result[5] += 26730281;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7535030;
            result[3] += 11302545;
            result[4] += 15070060;
            result[5] += 109257939;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 84838860;
            result[4] += 0;
            result[5] += 58326716;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 114532461;
            result[3] += 28633115;
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
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 57266230;
          } else {
            result[0] += 2511676;
            result[1] += 0;
            result[2] += 108002101;
            result[3] += 25116767;
            result[4] += 0;
            result[5] += 7535030;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 97432128;
            result[3] += 41756626;
            result[4] += 0;
            result[5] += 3976821;
          } else {
            result[0] += 647808;
            result[1] += 0;
            result[2] += 125674759;
            result[3] += 14899584;
            result[4] += 0;
            result[5] += 1943424;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
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
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107924819;
            result[3] += 30835662;
            result[4] += 0;
            result[5] += 4405094;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 140322938;
            result[3] += 2842637;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x424a0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 15907286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 127258290;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 572662;
            result[2] += 0;
            result[3] += 0;
            result[4] += 138584278;
            result[5] += 4008636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 71582788;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 122713351;
            result[5] += 20452225;
          } else {
            result[0] += 365684;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9142118;
            result[4] += 1097054;
            result[5] += 132560718;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 103834374;
            result[1] += 18878977;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17305729;
            result[5] += 3146496;
          } else {
            result[0] += 2533904;
            result[1] += 4117594;
            result[2] += 9502140;
            result[3] += 42759630;
            result[4] += 16470376;
            result[5] += 67781932;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ba0000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2074863;
            result[1] += 29048087;
            result[2] += 0;
            result[3] += 16598907;
            result[4] += 29048087;
            result[5] += 66395629;
          } else {
            result[0] += 119224035;
            result[1] += 2660171;
            result[2] += 362750;
            result[3] += 3627506;
            result[4] += 16202860;
            result[5] += 1088251;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 3291162;
            result[1] += 2468372;
            result[2] += 25506510;
            result[3] += 64177672;
            result[4] += 4113953;
            result[5] += 43607905;
          } else {
            result[0] += 71582788;
            result[1] += 12303291;
            result[2] += 40265318;
            result[3] += 3355443;
            result[4] += 8947848;
            result[5] += 6710886;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 5614336;
            result[2] += 5614336;
            result[3] += 33686018;
            result[4] += 14035840;
            result[5] += 84215045;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18325193;
            result[3] += 89335319;
            result[4] += 0;
            result[5] += 35505062;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15907286;
            result[4] += 0;
            result[5] += 127258290;
          } else {
            result[0] += 10412041;
            result[1] += 0;
            result[2] += 93708377;
            result[3] += 13015052;
            result[4] += 0;
            result[5] += 26030104;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 12449180;
            result[2] += 43572131;
            result[3] += 62245902;
            result[4] += 12449180;
            result[5] += 12449180;
          } else {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 114532461;
            result[3] += 22906492;
            result[4] += 0;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 54539267;
            result[1] += 0;
            result[2] += 88626309;
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
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 35791394;
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 71582788;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 795364;
            result[1] += 0;
            result[2] += 127258290;
            result[3] += 15111921;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 296409;
            result[1] += 0;
            result[2] += 140794304;
            result[3] += 2074863;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
            result[0] += 1173488;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141992088;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 57266230;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 61356675;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 0;
            result[4] += 40904450;
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 52745212;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 82885333;
            result[5] += 7535030;
          } else {
            result[0] += 0;
            result[1] += 1752332;
            result[2] += 175233;
            result[3] += 8060730;
            result[4] += 5607464;
            result[5] += 127569816;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 6398461;
            result[1] += 8797884;
            result[2] += 799807;
            result[3] += 27193461;
            result[4] += 13596730;
            result[5] += 86379230;
          } else {
            result[0] += 822790;
            result[1] += 822790;
            result[2] += 13164650;
            result[3] += 87215810;
            result[4] += 6582325;
            result[5] += 34557208;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 142858354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 307222;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 3303820;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 125545197;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 139756872;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3408704;
            result[5] += 0;
          } else {
            result[0] += 4745820;
            result[1] += 9491640;
            result[2] += 0;
            result[3] += 51413052;
            result[4] += 15028430;
            result[5] += 62486632;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 127610085;
            result[1] += 2753184;
            result[2] += 825955;
            result[3] += 1238932;
            result[4] += 10049122;
            result[5] += 688296;
          } else {
            result[0] += 42645065;
            result[1] += 1015358;
            result[2] += 31476119;
            result[3] += 42645065;
            result[4] += 11168945;
            result[5] += 14215021;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6410398;
            result[3] += 27778395;
            result[4] += 2136799;
            result[5] += 106839982;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27269633;
            result[3] += 71095830;
            result[4] += 14608732;
            result[5] += 30191380;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13015052;
            result[3] += 117135471;
            result[4] += 0;
            result[5] += 13015052;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81808900;
            result[3] += 54539267;
            result[4] += 0;
            result[5] += 6817408;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e30000))) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 1573248;
            result[1] += 0;
            result[2] += 105407622;
            result[3] += 23598721;
            result[4] += 1573248;
            result[5] += 11012736;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 119304647;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 65617555;
            result[3] += 59652323;
            result[4] += 0;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 200512;
            result[1] += 0;
            result[2] += 138152776;
            result[3] += 4411264;
            result[4] += 0;
            result[5] += 401024;
          } else {
            result[0] += 51698680;
            result[1] += 0;
            result[2] += 91466896;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 139330784;
            result[5] += 3834792;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 22025473;
            result[2] += 0;
            result[3] += 11012736;
            result[4] += 0;
            result[5] += 110127366;
          } else {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 91625968;
            result[5] += 17179869;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 63967598;
            result[1] += 6092152;
            result[2] += 0;
            result[3] += 3046076;
            result[4] += 67013674;
            result[5] += 3046076;
          } else {
            result[0] += 165318;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5951455;
            result[4] += 6612728;
            result[5] += 130436073;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 125985707;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4224557;
            result[3] += 61960183;
            result[4] += 9387906;
            result[5] += 67592927;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42400000))) ) ) {
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 81808900;
            result[2] += 0;
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 12632256;
            result[1] += 18948385;
            result[2] += 3158064;
            result[3] += 9474192;
            result[4] += 91583861;
            result[5] += 7368816;
          } else {
            result[0] += 0;
            result[1] += 127604100;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15561475;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 122612684;
            result[1] += 2231456;
            result[2] += 939560;
            result[3] += 4697803;
            result[4] += 8925827;
            result[5] += 3758243;
          } else {
            result[0] += 33134391;
            result[1] += 0;
            result[2] += 48763820;
            result[3] += 28132973;
            result[4] += 6876949;
            result[5] += 26257441;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 56243619;
            result[4] += 5113056;
            result[5] += 81808900;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9365972;
            result[3] += 123095635;
            result[4] += 0;
            result[5] += 10703968;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20452225;
            result[3] += 10226112;
            result[4] += 0;
            result[5] += 112487238;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4338350;
            result[5] += 138827225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 4473924;
            result[4] += 85004561;
            result[5] += 44739242;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44430696;
            result[3] += 19746976;
            result[4] += 0;
            result[5] += 78987904;
          } else {
            result[0] += 0;
            result[1] += 3253763;
            result[2] += 117135471;
            result[3] += 22776341;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
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
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31814572;
            result[3] += 111351003;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 125269879;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 129530759;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13634816;
          } else {
            result[0] += 62992853;
            result[1] += 22906492;
            result[2] += 22906492;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1925994;
            result[1] += 0;
            result[2] += 105929686;
            result[3] += 30173910;
            result[4] += 0;
            result[5] += 5135984;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 137618177;
            result[3] += 5547399;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 844634;
            result[1] += 1689269;
            result[2] += 0;
            result[3] += 0;
            result[4] += 132607643;
            result[5] += 8024029;
          } else {
            result[0] += 0;
            result[1] += 104120419;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 57266230;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 71582788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 142848136;
            result[2] += 0;
            result[3] += 0;
            result[4] += 317440;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 89478485;
            result[5] += 53687091;
          } else {
            result[0] += 137763101;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4051855;
            result[5] += 1350618;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4746869;
            result[4] += 3797495;
            result[5] += 134621211;
          } else {
            result[0] += 4818072;
            result[1] += 3441480;
            result[2] += 0;
            result[3] += 34414802;
            result[4] += 19960585;
            result[5] += 80530636;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 107669979;
            result[1] += 8282306;
            result[2] += 0;
            result[3] += 9465492;
            result[4] += 8282306;
            result[5] += 9465492;
          } else {
            result[0] += 2876094;
            result[1] += 958698;
            result[2] += 8947848;
            result[3] += 77015410;
            result[4] += 7350018;
            result[5] += 46017506;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 127079556;
            result[1] += 2144802;
            result[2] += 402150;
            result[3] += 2412902;
            result[4] += 8713260;
            result[5] += 2412902;
          } else {
            result[0] += 28010656;
            result[1] += 6224590;
            result[2] += 65358197;
            result[3] += 18673770;
            result[4] += 13486612;
            result[5] += 11411748;
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 71582788;
            result[4] += 71582788;
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
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 5726623;
            result[3] += 0;
            result[4] += 51539607;
            result[5] += 57266230;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6983686;
            result[3] += 125706359;
            result[4] += 0;
            result[5] += 10475529;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40380034;
            result[3] += 33038209;
            result[4] += 0;
            result[5] += 69747332;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 906111;
            result[1] += 0;
            result[2] += 114170016;
            result[3] += 25371114;
            result[4] += 0;
            result[5] += 2718333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f60000))) ) ) {
            result[0] += 0;
            result[1] += 27269633;
            result[2] += 34087042;
            result[3] += 13634816;
            result[4] += 0;
            result[5] += 68174084;
          } else {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52060209;
            result[3] += 45552683;
            result[4] += 0;
            result[5] += 45552683;
          } else {
            result[0] += 1921685;
            result[1] += 0;
            result[2] += 111457764;
            result[3] += 23060227;
            result[4] += 1921685;
            result[5] += 4804213;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f40000))) ) ) {
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 941878;
            result[1] += 0;
            result[2] += 124328000;
            result[3] += 16953818;
            result[4] += 0;
            result[5] += 941878;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 140624175;
            result[3] += 2541400;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 1301505;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 138610308;
            result[5] += 3253763;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 11653012;
            result[1] += 18311876;
            result[2] += 0;
            result[3] += 0;
            result[4] += 69918072;
            result[5] += 43282616;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3589697;
            result[4] += 5067808;
            result[5] += 134508071;
          } else {
            result[0] += 4732746;
            result[1] += 394395;
            result[2] += 7493515;
            result[3] += 24846918;
            result[4] += 26424500;
            result[5] += 79273501;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 7279605;
            result[2] += 7279605;
            result[3] += 38824563;
            result[4] += 16985746;
            result[5] += 72796055;
          } else {
            result[0] += 2440322;
            result[1] += 1626881;
            result[2] += 2440322;
            result[3] += 101680096;
            result[4] += 813440;
            result[5] += 34164512;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 32880132;
            result[1] += 26715107;
            result[2] += 0;
            result[3] += 685002;
            result[4] += 76035306;
            result[5] += 6850027;
          } else {
            result[0] += 125172796;
            result[1] += 388333;
            result[2] += 2330000;
            result[3] += 3624444;
            result[4] += 4918889;
            result[5] += 6731112;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 773867;
            result[1] += 1547735;
            result[2] += 17798963;
            result[3] += 79708402;
            result[4] += 773867;
            result[5] += 42562738;
          } else {
            result[0] += 43810231;
            result[1] += 0;
            result[2] += 66497672;
            result[3] += 11734883;
            result[4] += 16428836;
            result[5] += 4693953;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3869339;
            result[3] += 0;
            result[4] += 7738679;
            result[5] += 131557556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 41648167;
            result[4] += 7809031;
            result[5] += 65075262;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 68600172;
            result[3] += 62634939;
            result[4] += 0;
            result[5] += 11930464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 95443717;
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
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 102261126;
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
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
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 5726623;
            result[1] += 0;
            result[2] += 74446099;
            result[3] += 28633115;
            result[4] += 5726623;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 128723435;
            result[3] += 14442141;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1398101;
            result[1] += 0;
            result[2] += 139250892;
            result[3] += 2516582;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x422a0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95443717;
            result[5] += 47721858;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 672138;
            result[2] += 0;
            result[3] += 0;
            result[4] += 140477021;
            result[5] += 2016416;
          } else {
            result[0] += 0;
            result[1] += 1934669;
            result[2] += 0;
            result[3] += 0;
            result[4] += 108341517;
            result[5] += 32889389;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42480000))) ) ) {
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
            result[3] += 2535944;
            result[4] += 2535944;
            result[5] += 138093688;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1011770;
            result[1] += 1264713;
            result[2] += 6323567;
            result[3] += 51600313;
            result[4] += 12394193;
            result[5] += 70571017;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 1745921;
            result[1] += 6983686;
            result[2] += 0;
            result[3] += 10475529;
            result[4] += 118722673;
            result[5] += 5237764;
          } else {
            result[0] += 0;
            result[1] += 96553528;
            result[2] += 0;
            result[3] += 3329432;
            result[4] += 33294320;
            result[5] += 9988296;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 125985707;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
            result[0] += 32139211;
            result[1] += 1947830;
            result[2] += 3895661;
            result[3] += 30191380;
            result[4] += 14608732;
            result[5] += 60382760;
          } else {
            result[0] += 122632432;
            result[1] += 5805923;
            result[2] += 141607;
            result[3] += 2548942;
            result[4] += 9912552;
            result[5] += 2124118;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 526344;
            result[1] += 4210752;
            result[2] += 28948921;
            result[3] += 59476875;
            result[4] += 1052688;
            result[5] += 48949994;
          } else {
            result[0] += 71915731;
            result[1] += 0;
            result[2] += 47277934;
            result[3] += 6658864;
            result[4] += 9322409;
            result[5] += 7990636;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11453246;
            result[3] += 114532461;
            result[4] += 0;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 23860929;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 47721858;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7535030;
            result[3] += 0;
            result[4] += 135630546;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 137438953;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 92035013;
            result[4] += 0;
            result[5] += 10226112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 121140103;
            result[3] += 22025473;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1491308;
            result[1] += 0;
            result[2] += 114830722;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 2982616;
          } else {
            result[0] += 114532461;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42eb0000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 119144506;
            result[3] += 24021069;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 219242;
            result[1] += 0;
            result[2] += 137246019;
            result[3] += 4604099;
            result[4] += 0;
            result[5] += 1096214;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424a0000))) ) ) {
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 40904450;
            result[2] += 0;
            result[3] += 0;
            result[4] += 102261126;
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 1577582;
            result[1] += 3549559;
            result[2] += 0;
            result[3] += 0;
            result[4] += 128967337;
            result[5] += 9071097;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 226886;
            result[1] += 0;
            result[2] += 0;
            result[3] += 680660;
            result[4] += 2268868;
            result[5] += 139989161;
          } else {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 0;
            result[3] += 7953643;
            result[4] += 31814572;
            result[5] += 97432128;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 749557;
            result[1] += 4872126;
            result[2] += 3747789;
            result[3] += 53593396;
            result[4] += 7120800;
            result[5] += 73081904;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 126462925;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 2386092;
          } else {
            result[0] += 2064888;
            result[1] += 3441480;
            result[2] += 10324440;
            result[3] += 59193459;
            result[4] += 24090361;
            result[5] += 44050946;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 34087042;
            result[1] += 24997164;
            result[2] += 2272469;
            result[3] += 2272469;
            result[4] += 77263961;
            result[5] += 2272469;
          } else {
            result[0] += 118077075;
            result[1] += 1726273;
            result[2] += 6790007;
            result[3] += 5869328;
            result[4] += 6559837;
            result[5] += 4143055;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6817408;
            result[4] += 129530759;
            result[5] += 6817408;
          } else {
            result[0] += 0;
            result[1] += 15907286;
            result[2] += 31814572;
            result[3] += 63629145;
            result[4] += 0;
            result[5] += 31814572;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 3817748;
            result[1] += 11453246;
            result[2] += 3817748;
            result[3] += 11453246;
            result[4] += 17179869;
            result[5] += 95443717;
          } else {
            result[0] += 3609216;
            result[1] += 0;
            result[2] += 20452225;
            result[3] += 81808900;
            result[4] += 0;
            result[5] += 37295234;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 95443717;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 100215903;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 128641532;
            result[3] += 10374317;
            result[4] += 0;
            result[5] += 4149726;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31814572;
            result[3] += 0;
            result[4] += 0;
            result[5] += 111351003;
          } else {
            result[0] += 2169175;
            result[1] += 0;
            result[2] += 62906086;
            result[3] += 73751963;
            result[4] += 2169175;
            result[5] += 2169175;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42960000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1908874;
            result[1] += 477218;
            result[2] += 121690740;
            result[3] += 16702650;
            result[4] += 0;
            result[5] += 2386092;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 67815273;
            result[3] += 75350303;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 126122055;
            result[3] += 17043521;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 109479558;
            result[3] += 33686018;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 140945955;
            result[3] += 2219621;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 1266952;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141898624;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 110627945;
            result[5] += 32537631;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 7535030;
            result[2] += 0;
            result[3] += 0;
            result[4] += 75350303;
            result[5] += 60280242;
          } else {
            result[0] += 0;
            result[1] += 62634939;
            result[2] += 0;
            result[3] += 80530636;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 6817408;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 122713351;
            result[5] += 13634816;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1579758;
            result[3] += 3751925;
            result[4] += 3356985;
            result[5] += 134476907;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 72719022;
            result[1] += 4544938;
            result[2] += 0;
            result[3] += 6817408;
            result[4] += 49994328;
            result[5] += 9089877;
          } else {
            result[0] += 2421405;
            result[1] += 908026;
            result[2] += 302675;
            result[3] += 50849507;
            result[4] += 8474917;
            result[5] += 80209043;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 11859870;
            result[1] += 29649675;
            result[2] += 0;
            result[3] += 0;
            result[4] += 101656030;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 140119500;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3046076;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 120808212;
            result[1] += 1699682;
            result[2] += 522979;
            result[3] += 5360537;
            result[4] += 10459585;
            result[5] += 4314579;
          } else {
            result[0] += 23270729;
            result[1] += 505885;
            result[2] += 34400209;
            result[3] += 35411980;
            result[4] += 19223646;
            result[5] += 30353125;
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
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42900000))) ) ) {
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
            result[3] += 10226112;
            result[4] += 15339168;
            result[5] += 117600294;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42780000))) ) ) {
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
            result[3] += 11012736;
            result[4] += 0;
            result[5] += 132152839;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 128252495;
            result[4] += 0;
            result[5] += 11930464;
          } else {
            result[0] += 0;
            result[1] += 2136799;
            result[2] += 55556790;
            result[3] += 53419991;
            result[4] += 0;
            result[5] += 32051994;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 5113056;
            result[1] += 5113056;
            result[2] += 20452225;
            result[3] += 102261126;
            result[4] += 0;
            result[5] += 10226112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 97955394;
            result[3] += 26372606;
            result[4] += 0;
            result[5] += 18837575;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42960000))) ) ) {
            result[0] += 60736911;
            result[1] += 4338350;
            result[2] += 56398560;
            result[3] += 8676701;
            result[4] += 0;
            result[5] += 13015052;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 128849018;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 4772185;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e20000))) ) ) {
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 3433227;
            result[1] += 0;
            result[2] += 118789662;
            result[3] += 19912718;
            result[4] += 0;
            result[5] += 1029968;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 137863147;
            result[3] += 4418690;
            result[4] += 0;
            result[5] += 883738;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 675309;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141139648;
            result[5] += 1350618;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 4618244;
            result[2] += 0;
            result[3] += 27709466;
            result[4] += 55418932;
            result[5] += 55418932;
          } else {
            result[0] += 0;
            result[1] += 125269879;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 8947848;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 97612893;
            result[5] += 45552683;
          } else {
            result[0] += 191397;
            result[1] += 0;
            result[2] += 382795;
            result[3] += 2488171;
            result[4] += 3253763;
            result[5] += 136849448;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 122287263;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14913080;
            result[5] += 5965232;
          } else {
            result[0] += 1344277;
            result[1] += 1008208;
            result[2] += 1008208;
            result[3] += 57131802;
            result[4] += 5713180;
            result[5] += 76959899;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
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
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 2202547;
            result[1] += 16519104;
            result[2] += 0;
            result[3] += 8810189;
            result[4] += 104620998;
            result[5] += 11012736;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 54001050;
            result[1] += 21349252;
            result[2] += 0;
            result[3] += 0;
            result[4] += 65303596;
            result[5] += 2511676;
          } else {
            result[0] += 129220877;
            result[1] += 1062453;
            result[2] += 132806;
            result[3] += 2788939;
            result[4] += 5445072;
            result[5] += 4515426;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 1639300;
            result[1] += 2185733;
            result[2] += 24589507;
            result[3] += 41528945;
            result[4] += 19671605;
            result[5] += 53550482;
          } else {
            result[0] += 90627750;
            result[1] += 14447902;
            result[2] += 18388239;
            result[3] += 0;
            result[4] += 18388239;
            result[5] += 1313445;
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
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
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15907286;
            result[3] += 103397360;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50233535;
            result[3] += 35163474;
            result[4] += 0;
            result[5] += 57768565;
          } else {
            result[0] += 1724886;
            result[1] += 0;
            result[2] += 93143869;
            result[3] += 39672388;
            result[4] += 1724886;
            result[5] += 6899545;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 596523;
            result[1] += 0;
            result[2] += 127655972;
            result[3] += 13720034;
            result[4] += 0;
            result[5] += 1193046;
          } else {
            result[0] += 112042625;
            result[1] += 0;
            result[2] += 24898361;
            result[3] += 0;
            result[4] += 6224590;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e20000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 109479558;
            result[3] += 33686018;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 496241;
            result[1] += 0;
            result[2] += 138947526;
            result[3] += 3473688;
            result[4] += 0;
            result[5] += 248120;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 141852130;
            result[5] += 1313445;
          } else {
            result[0] += 25264513;
            result[1] += 16843009;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42107522;
            result[5] += 58950531;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 128849018;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 119304647;
            result[5] += 23860929;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 70409299;
            result[1] += 9387906;
            result[2] += 0;
            result[3] += 4693953;
            result[4] += 46939533;
            result[5] += 11734883;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7962671;
            result[4] += 7475160;
            result[5] += 127727744;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 19522578;
            result[1] += 0;
            result[2] += 10845877;
            result[3] += 19522578;
            result[4] += 15184227;
            result[5] += 78090314;
          } else {
            result[0] += 741790;
            result[1] += 1483581;
            result[2] += 741790;
            result[3] += 92723818;
            result[4] += 741790;
            result[5] += 46732804;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 95846433;
            result[1] += 12886915;
            result[2] += 805432;
            result[3] += 2013580;
            result[4] += 30405066;
            result[5] += 1208148;
          } else {
            result[0] += 7416234;
            result[1] += 3546894;
            result[2] += 36758729;
            result[3] += 46754523;
            result[4] += 14832469;
            result[5] += 33856724;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 21053761;
            result[1] += 63161283;
            result[2] += 0;
            result[3] += 0;
            result[4] += 58950531;
            result[5] += 0;
          } else {
            result[0] += 133809771;
            result[1] += 0;
            result[2] += 6527305;
            result[3] += 0;
            result[4] += 2828499;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
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
          result[1] += 0;
          result[2] += 0;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 16361780;
            result[4] += 8180890;
            result[5] += 114532461;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36623752;
            result[3] += 56600344;
            result[4] += 6658864;
            result[5] += 43282616;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 5402474;
            result[1] += 0;
            result[2] += 108049491;
            result[3] += 21609898;
            result[4] += 2701237;
            result[5] += 5402474;
          } else {
            result[0] += 91105366;
            result[1] += 0;
            result[2] += 52060209;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13015052;
            result[3] += 117135471;
            result[4] += 0;
            result[5] += 13015052;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 95443717;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 514984;
            result[1] += 0;
            result[2] += 117931356;
            result[3] += 22659299;
            result[4] += 0;
            result[5] += 2059936;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 143165576;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 71582788;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 139978671;
            result[3] += 3186904;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 546433;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 133876207;
            result[5] += 8742935;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42300000))) ) ) {
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42840000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 137863147;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5302428;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
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
            result[3] += 2495754;
            result[4] += 2041981;
            result[5] += 138627840;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 4693953;
            result[2] += 0;
            result[3] += 7040929;
            result[4] += 100919996;
            result[5] += 30510696;
          } else {
            result[0] += 3784112;
            result[1] += 1261370;
            result[2] += 1261370;
            result[3] += 12613707;
            result[4] += 15136448;
            result[5] += 109108567;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 1301505;
            result[2] += 13015052;
            result[3] += 49457199;
            result[4] += 0;
            result[5] += 79391819;
          } else {
            result[0] += 565871;
            result[1] += 0;
            result[2] += 4526974;
            result[3] += 97895828;
            result[4] += 0;
            result[5] += 40176900;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 1883757;
            result[1] += 3767515;
            result[2] += 0;
            result[3] += 0;
            result[4] += 137514303;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 35791394;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a50000))) ) ) {
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
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
            result[0] += 29283867;
            result[1] += 110627945;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3253763;
            result[5] += 0;
          } else {
            result[0] += 14497779;
            result[1] += 16310002;
            result[2] += 10873334;
            result[3] += 21746669;
            result[4] += 67052232;
            result[5] += 12685557;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 133694411;
            result[1] += 549053;
            result[2] += 0;
            result[3] += 1784422;
            result[4] += 6451373;
            result[5] += 686316;
          } else {
            result[0] += 72360862;
            result[1] += 0;
            result[2] += 26454508;
            result[3] += 17117623;
            result[4] += 9336885;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 6710886;
            result[1] += 15658734;
            result[2] += 15658734;
            result[3] += 20132659;
            result[4] += 13421772;
            result[5] += 71582788;
          } else {
            result[0] += 2059936;
            result[1] += 0;
            result[2] += 45318599;
            result[3] += 67977899;
            result[4] += 2059936;
            result[5] += 25749204;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 47721858;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 95443717;
          } else {
            result[0] += 3060877;
            result[1] += 0;
            result[2] += 125635097;
            result[3] += 12939162;
            result[4] += 139130;
            result[5] += 1391307;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 581973;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1163947;
            result[4] += 140837680;
            result[5] += 581973;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42930000))) ) ) {
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
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
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
            result[3] += 1504743;
            result[4] += 3009486;
            result[5] += 138651346;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 3491843;
            result[2] += 0;
            result[3] += 13967373;
            result[4] += 73328709;
            result[5] += 52377649;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 22906492;
            result[4] += 9544371;
            result[5] += 110714712;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 137235641;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4235667;
            result[5] += 1694267;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 808845;
            result[1] += 8897295;
            result[2] += 0;
            result[3] += 19007859;
            result[4] += 23860929;
            result[5] += 90590647;
          } else {
            result[0] += 0;
            result[1] += 587948;
            result[2] += 9113209;
            result[3] += 86134525;
            result[4] += 2057821;
            result[5] += 45272071;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42500000))) ) ) {
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 137659208;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5506368;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42900000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42200000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 11821010;
            result[1] += 13134456;
            result[2] += 0;
            result[3] += 0;
            result[4] += 116896663;
            result[5] += 1313445;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 128073244;
            result[1] += 3385195;
            result[2] += 564199;
            result[3] += 2820996;
            result[4] += 7475640;
            result[5] += 846298;
          } else {
            result[0] += 24311135;
            result[1] += 16207423;
            result[2] += 75634644;
            result[3] += 13506186;
            result[4] += 10804949;
            result[5] += 2701237;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 28633115;
            result[4] += 20281790;
            result[5] += 35791394;
          } else {
            result[0] += 114532461;
            result[1] += 0;
            result[2] += 26030104;
            result[3] += 2603010;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 91590399;
            result[3] += 39125996;
            result[4] += 0;
            result[5] += 12449180;
          } else {
            result[0] += 543666;
            result[1] += 0;
            result[2] += 133560797;
            result[3] += 7611334;
            result[4] += 0;
            result[5] += 1449777;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 142416018;
            result[5] += 749557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 57266230;
            result[5] += 85899345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12725829;
            result[4] += 111351003;
            result[5] += 19088743;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 410805;
            result[2] += 0;
            result[3] += 4724258;
            result[4] += 1848622;
            result[5] += 136181889;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 5197430;
            result[1] += 0;
            result[2] += 944987;
            result[3] += 21262214;
            result[4] += 20789720;
            result[5] += 94971224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b80000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 16753418;
            result[1] += 18276456;
            result[2] += 0;
            result[3] += 5330633;
            result[4] += 95951397;
            result[5] += 6853671;
          } else {
            result[0] += 122366703;
            result[1] += 3004281;
            result[2] += 0;
            result[3] += 2888732;
            result[4] += 11439380;
            result[5] += 3466478;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 639132;
            result[1] += 1597830;
            result[2] += 32276167;
            result[3] += 55924053;
            result[4] += 1597830;
            result[5] += 51130563;
          } else {
            result[0] += 106456454;
            result[1] += 4894549;
            result[2] += 11012736;
            result[3] += 6118187;
            result[4] += 13460011;
            result[5] += 1223637;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 23860929;
            result[4] += 47721858;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 29283867;
            result[4] += 3253763;
            result[5] += 100866656;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7953643;
            result[1] += 0;
            result[2] += 111351003;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 15907286;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 102261126;
            result[3] += 40904450;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4210752;
            result[3] += 109479558;
            result[4] += 0;
            result[5] += 29475265;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26030104;
            result[3] += 104120419;
            result[4] += 0;
            result[5] += 13015052;
          } else {
            result[0] += 1376592;
            result[1] += 0;
            result[2] += 112880550;
            result[3] += 28908433;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 107374182;
            result[1] += 35791394;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 4040963;
            result[1] += 0;
            result[2] += 118342512;
            result[3] += 20204819;
            result[4] += 0;
            result[5] += 577280;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 139567159;
            result[3] += 3598416;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c50000))) ) ) {
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 559240;
            result[3] += 0;
            result[4] += 137013930;
            result[5] += 5592405;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 57266230;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 80530636;
            result[5] += 62634939;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2790333;
            result[4] += 1502487;
            result[5] += 138872755;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 18418963;
            result[1] += 6279191;
            result[2] += 418612;
            result[3] += 17163124;
            result[4] += 19256188;
            result[5] += 81629495;
          } else {
            result[0] += 0;
            result[1] += 665886;
            result[2] += 12651841;
            result[3] += 88562891;
            result[4] += 0;
            result[5] += 41284956;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 9236488;
            result[2] += 0;
            result[3] += 4618244;
            result[4] += 129310843;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 57266230;
            result[2] += 0;
            result[3] += 0;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 142171371;
            result[2] += 0;
            result[3] += 0;
            result[4] += 994205;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 21609898;
            result[1] += 16207423;
            result[2] += 0;
            result[3] += 0;
            result[4] += 101296398;
            result[5] += 4051855;
          } else {
            result[0] += 122924926;
            result[1] += 2591790;
            result[2] += 863930;
            result[3] += 2591790;
            result[4] += 9379813;
            result[5] += 4813325;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 3940336;
            result[1] += 437815;
            result[2] += 35025217;
            result[3] += 60418500;
            result[4] += 1751260;
            result[5] += 41592445;
          } else {
            result[0] += 99593444;
            result[1] += 3734754;
            result[2] += 16183934;
            result[3] += 0;
            result[4] += 23653443;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 20452225;
            result[4] += 0;
            result[5] += 122713351;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 93952409;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 16843009;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8421504;
            result[5] += 117901063;
          } else {
            result[0] += 0;
            result[1] += 10226112;
            result[2] += 20452225;
            result[3] += 92035013;
            result[4] += 0;
            result[5] += 20452225;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 100320403;
            result[3] += 35530143;
            result[4] += 0;
            result[5] += 7315029;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f70000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 114532461;
            result[3] += 9544371;
            result[4] += 4772185;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 2016416;
            result[1] += 0;
            result[2] += 106870078;
            result[3] += 34279081;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6049249;
            result[1] += 0;
            result[2] += 137116326;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 134798757;
            result[3] += 8366819;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 141855136;
            result[3] += 1310440;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
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
            result[4] += 134575641;
            result[5] += 8589934;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 91466896;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39768215;
            result[5] += 11930464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6253209;
            result[4] += 6582325;
            result[5] += 130330042;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 4418690;
            result[1] += 1767476;
            result[2] += 0;
            result[3] += 34465786;
            result[4] += 7953643;
            result[5] += 94559979;
          } else {
            result[0] += 7898790;
            result[1] += 0;
            result[2] += 987348;
            result[3] += 94785485;
            result[4] += 0;
            result[5] += 39493952;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1608601;
            result[1] += 20911825;
            result[2] += 0;
            result[3] += 0;
            result[4] += 120645148;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 114532461;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 40156198;
            result[1] += 19205138;
            result[2] += 0;
            result[3] += 8729608;
            result[4] += 73328709;
            result[5] += 1745921;
          } else {
            result[0] += 132055725;
            result[1] += 1136234;
            result[2] += 252496;
            result[3] += 2903710;
            result[4] += 5554925;
            result[5] += 1262483;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 599019;
            result[1] += 5990191;
            result[2] += 20366651;
            result[3] += 71283278;
            result[4] += 3594114;
            result[5] += 41332321;
          } else {
            result[0] += 44000429;
            result[1] += 656722;
            result[2] += 51881103;
            result[3] += 13134456;
            result[4] += 15761347;
            result[5] += 17731516;
          }
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 111351003;
            result[3] += 0;
            result[4] += 0;
            result[5] += 31814572;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6507526;
            result[3] += 6507526;
            result[4] += 0;
            result[5] += 130150524;
          } else {
            result[0] += 0;
            result[1] += 2863311;
            result[2] += 31496426;
            result[3] += 57266230;
            result[4] += 0;
            result[5] += 51539607;
          }
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 71582788;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 81808900;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36945955;
            result[3] += 69273666;
            result[4] += 0;
            result[5] += 36945955;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 121358899;
            result[3] += 20858560;
            result[4] += 0;
            result[5] += 948116;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 954437;
            result[1] += 0;
            result[2] += 136675403;
            result[3] += 5153960;
            result[4] += 0;
            result[5] += 381774;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 589158;
            result[1] += 589158;
            result[2] += 0;
            result[3] += 0;
            result[4] += 139041465;
            result[5] += 2945793;
          } else {
            result[0] += 0;
            result[1] += 117135471;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26030104;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4149726;
            result[1] += 8299453;
            result[2] += 14524043;
            result[3] += 0;
            result[4] += 49796722;
            result[5] += 66395629;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2371718;
            result[4] += 3018551;
            result[5] += 137775306;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26030104;
            result[4] += 17353403;
            result[5] += 99782068;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 1313445;
            result[2] += 0;
            result[3] += 21671853;
            result[4] += 30865972;
            result[5] += 89314304;
          } else {
            result[0] += 5944591;
            result[1] += 0;
            result[2] += 6935356;
            result[3] += 82728897;
            result[4] += 5944591;
            result[5] += 41612139;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 1789569;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 0;
            result[4] += 136007297;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 142817241;
            result[2] += 0;
            result[3] += 0;
            result[4] += 348334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 90420364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52745212;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 142338029;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 827546;
            result[5] += 0;
          } else {
            result[0] += 10541883;
            result[1] += 6801215;
            result[2] += 12242187;
            result[3] += 46588322;
            result[4] += 12242187;
            result[5] += 54749781;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 126969066;
            result[1] += 2458398;
            result[2] += 1156893;
            result[3] += 1735340;
            result[4] += 10122818;
            result[5] += 723058;
          } else {
            result[0] += 39200098;
            result[1] += 0;
            result[2] += 74991492;
            result[3] += 15339168;
            result[4] += 3408704;
            result[5] += 10226112;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 95443717;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18673770;
            result[3] += 118267215;
            result[4] += 0;
            result[5] += 6224590;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 117135471;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26030104;
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 9336885;
            result[1] += 0;
            result[2] += 49796722;
            result[3] += 65358197;
            result[4] += 0;
            result[5] += 18673770;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 105669830;
            result[3] += 37495746;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 132690046;
            result[3] += 6983686;
            result[4] += 0;
            result[5] += 3491843;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 107374182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 114922027;
            result[3] += 26295718;
            result[4] += 0;
            result[5] += 1947830;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 95443717;
            result[3] += 0;
            result[4] += 0;
            result[5] += 47721858;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20452225;
            result[3] += 122713351;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c60000))) ) ) {
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
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 114532461;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 1313445;
            result[1] += 0;
            result[2] += 136817255;
            result[3] += 5034875;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42240000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 22025473;
            result[4] += 88101893;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 647808;
            result[1] += 647808;
            result[2] += 0;
            result[3] += 0;
            result[4] += 139926536;
            result[5] += 1943424;
          } else {
            result[0] += 0;
            result[1] += 3046076;
            result[2] += 0;
            result[3] += 9138228;
            result[4] += 73105826;
            result[5] += 57875445;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 189874;
            result[1] += 569624;
            result[2] += 0;
            result[3] += 5316493;
            result[4] += 5126618;
            result[5] += 131962965;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12341860;
            result[3] += 74051160;
            result[4] += 0;
            result[5] += 56772556;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
            result[0] += 54692467;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 75604293;
            result[5] += 12868815;
          } else {
            result[0] += 10749633;
            result[1] += 0;
            result[2] += 1465859;
            result[3] += 57168506;
            result[4] += 3420338;
            result[5] += 70361238;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 17459216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 125706359;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 108805838;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 37145663;
            result[1] += 20894435;
            result[2] += 0;
            result[3] += 6190943;
            result[4] += 75065194;
            result[5] += 3869339;
          } else {
            result[0] += 130942539;
            result[1] += 1560387;
            result[2] += 130032;
            result[3] += 3900969;
            result[4] += 4421098;
            result[5] += 2210549;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 2281523;
            result[1] += 1140761;
            result[2] += 6844569;
            result[3] += 45060081;
            result[4] += 3422284;
            result[5] += 84416355;
          } else {
            result[0] += 41972237;
            result[1] += 1149924;
            result[2] += 63245837;
            result[3] += 13224129;
            result[4] += 14949016;
            result[5] += 8624432;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42860000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15907286;
            result[3] += 0;
            result[4] += 127258290;
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
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3408704;
            result[3] += 13634816;
            result[4] += 3408704;
            result[5] += 122713351;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 81808900;
            result[1] += 61356675;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40904450;
            result[4] += 0;
            result[5] += 102261126;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 23860929;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 4772185;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 75793540;
            result[3] += 58950531;
            result[4] += 0;
            result[5] += 8421504;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 107374182;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 100215903;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 14316557;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 815758;
            result[1] += 0;
            result[2] += 121547982;
            result[3] += 18762440;
            result[4] += 815758;
            result[5] += 1223637;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 127771428;
            result[3] += 15394148;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 141843030;
            result[3] += 661272;
            result[4] += 0;
            result[5] += 661272;
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
