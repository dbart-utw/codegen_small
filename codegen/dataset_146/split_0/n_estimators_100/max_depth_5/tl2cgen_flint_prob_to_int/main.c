
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
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42340000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 429496;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42305427;
            result[5] += 214748;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 7158278;
          } else {
            result[0] += 41468649;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 740511;
            result[5] += 740511;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39645851;
            result[5] += 3303820;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 69723;
            result[3] += 766958;
            result[4] += 766958;
            result[5] += 41346032;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 1342177;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 8053063;
            result[4] += 18790481;
            result[5] += 1342177;
          } else {
            result[0] += 0;
            result[1] += 1104104;
            result[2] += 1656157;
            result[3] += 8501606;
            result[4] += 3422724;
            result[5] += 28265080;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1431655;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 352046;
            result[1] += 0;
            result[2] += 704092;
            result[3] += 36260789;
            result[4] += 0;
            result[5] += 5632743;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 2753184;
            result[1] += 2477865;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36066712;
            result[5] += 1651910;
          } else {
            result[0] += 0;
            result[1] += 38347922;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4601750;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 37824585;
            result[1] += 288737;
            result[2] += 144368;
            result[3] += 1010580;
            result[4] += 2382082;
            result[5] += 1299317;
          } else {
            result[0] += 11292801;
            result[1] += 1295895;
            result[2] += 3332302;
            result[3] += 13144080;
            result[4] += 5738964;
            result[5] += 8145627;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
            result[0] += 1073741;
            result[1] += 2684354;
            result[2] += 536870;
            result[3] += 5905580;
            result[4] += 9663676;
            result[5] += 23085449;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 29826161;
            result[4] += 0;
            result[5] += 9544371;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12689676;
            result[3] += 18546449;
            result[4] += 976128;
            result[5] += 10737418;
          } else {
            result[0] += 753503;
            result[1] += 0;
            result[2] += 33907636;
            result[3] += 753503;
            result[4] += 753503;
            result[5] += 6781527;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e80000))) ) ) {
            result[0] += 1301505;
            result[1] += 2603010;
            result[2] += 19522578;
            result[3] += 5206020;
            result[4] += 7809031;
            result[5] += 6507526;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 613566;
            result[1] += 0;
            result[2] += 29757987;
            result[3] += 9817068;
            result[4] += 613566;
            result[5] += 2147483;
          } else {
            result[0] += 391468;
            result[1] += 0;
            result[2] += 40041622;
            result[3] += 2404734;
            result[4] += 0;
            result[5] += 111848;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
            result[0] += 41950843;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 998829;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6832902;
            result[5] += 36116770;
          } else {
            result[0] += 3734754;
            result[1] += 13071639;
            result[2] += 0;
            result[3] += 3734754;
            result[4] += 16806393;
            result[5] += 5602131;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36077725;
            result[5] += 6871947;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 877577;
            result[4] += 1135688;
            result[5] += 40936407;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 1110767;
            result[1] += 0;
            result[2] += 1110767;
            result[3] += 6664604;
            result[4] += 1110767;
            result[5] += 32952766;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 234697;
            result[2] += 0;
            result[3] += 30980091;
            result[4] += 0;
            result[5] += 11734883;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6028024;
            result[3] += 4521018;
            result[4] += 2260509;
            result[5] += 30140121;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3181457;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39768215;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 4601750;
            result[1] += 1150437;
            result[2] += 1533916;
            result[3] += 2684354;
            result[4] += 29144420;
            result[5] += 3834792;
          } else {
            result[0] += 1447741;
            result[1] += 28954835;
            result[2] += 1447741;
            result[3] += 3860644;
            result[4] += 7238708;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
            result[0] += 38007616;
            result[1] += 284434;
            result[2] += 71108;
            result[3] += 1031076;
            result[4] += 2666577;
            result[5] += 888859;
          } else {
            result[0] += 14649500;
            result[1] += 0;
            result[2] += 5992977;
            result[3] += 12984784;
            result[4] += 3662375;
            result[5] += 5660034;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9842633;
            result[4] += 3579139;
            result[5] += 29527900;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11191111;
            result[3] += 24196998;
            result[4] += 3932012;
            result[5] += 3629549;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 19088743;
          } else {
            result[0] += 876523;
            result[1] += 0;
            result[2] += 34622695;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 1314785;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1789569;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 39370533;
          } else {
            result[0] += 9544371;
            result[1] += 9544371;
            result[2] += 13123511;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 4772185;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 933688;
            result[1] += 0;
            result[2] += 25209590;
            result[3] += 10270573;
            result[4] += 0;
            result[5] += 6535819;
          } else {
            result[0] += 609936;
            result[1] += 0;
            result[2] += 40001648;
            result[3] += 2083948;
            result[4] += 0;
            result[5] += 254140;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 548293;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42035850;
            result[5] += 365529;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 17179869;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 9544371;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2386092;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 22497447;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18407002;
            result[5] += 2045222;
          } else {
            result[0] += 0;
            result[1] += 53754;
            result[2] += 0;
            result[3] += 2580205;
            result[4] += 1505119;
            result[5] += 38810593;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 3849263;
            result[1] += 810371;
            result[2] += 1012963;
            result[3] += 7293340;
            result[4] += 5267412;
            result[5] += 24716321;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1333840;
            result[3] += 30144801;
            result[4] += 533536;
            result[5] += 10937494;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 38177487;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5866296;
            result[1] += 11313572;
            result[2] += 0;
            result[3] += 838042;
            result[4] += 24093718;
            result[5] += 838042;
          } else {
            result[0] += 35762176;
            result[1] += 315548;
            result[2] += 666158;
            result[3] += 1823169;
            result[4] += 2734754;
            result[5] += 1647865;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 403283;
            result[1] += 2218058;
            result[2] += 5041041;
            result[3] += 15526407;
            result[4] += 4839399;
            result[5] += 14921482;
          } else {
            result[0] += 11218198;
            result[1] += 0;
            result[2] += 21795356;
            result[3] += 5769359;
            result[4] += 1282079;
            result[5] += 2884679;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1867377;
            result[3] += 5602131;
            result[4] += 3734754;
            result[5] += 31745410;
          } else {
            result[0] += 0;
            result[1] += 1631000;
            result[2] += 6524000;
            result[3] += 24465003;
            result[4] += 0;
            result[5] += 10329668;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f00000))) ) ) {
            result[0] += 0;
            result[1] += 8180890;
            result[2] += 22497447;
            result[3] += 8180890;
            result[4] += 4090445;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40021286;
            result[3] += 2928386;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 27201459;
            result[3] += 1431655;
            result[4] += 1431655;
            result[5] += 11453246;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 5804009;
            result[1] += 0;
            result[2] += 18572831;
            result[3] += 15090425;
            result[4] += 0;
            result[5] += 3482405;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35386208;
            result[3] += 6482969;
            result[4] += 0;
            result[5] += 1080494;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32679098;
            result[3] += 10270573;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 70991;
            result[1] += 0;
            result[2] += 42026787;
            result[3] += 851894;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 164558;
            result[4] += 41304091;
            result[5] += 1481023;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 652550;
            result[4] += 1067809;
            result[5] += 41229313;
          } else {
            result[0] += 1301505;
            result[1] += 5206020;
            result[2] += 3904515;
            result[3] += 9110536;
            result[4] += 14316557;
            result[5] += 9110536;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 31001267;
            result[1] += 322929;
            result[2] += 0;
            result[3] += 2906368;
            result[4] += 5812737;
            result[5] += 2906368;
          } else {
            result[0] += 164243;
            result[1] += 656973;
            result[2] += 164243;
            result[3] += 15192522;
            result[4] += 3120626;
            result[5] += 23651062;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 810371;
            result[1] += 2836299;
            result[2] += 0;
            result[3] += 2025927;
            result[4] += 36061517;
            result[5] += 1215556;
          } else {
            result[0] += 0;
            result[1] += 36342030;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6607641;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 318145;
            result[1] += 42101284;
            result[2] += 0;
            result[3] += 0;
            result[4] += 530242;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 11713547;
            result[2] += 1952257;
            result[3] += 0;
            result[4] += 29283867;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 1753047;
            result[1] += 24542670;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16653954;
            result[5] += 0;
          } else {
            result[0] += 39713139;
            result[1] += 131210;
            result[2] += 306158;
            result[3] += 962212;
            result[4] += 1487055;
            result[5] += 349895;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1331772;
            result[1] += 2330602;
            result[2] += 11653012;
            result[3] += 13317728;
            result[4] += 1331772;
            result[5] += 12984784;
          } else {
            result[0] += 28357796;
            result[1] += 1927228;
            result[2] += 4405094;
            result[3] += 1376592;
            result[4] += 6882960;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 38654705;
          } else {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 0;
            result[3] += 15339168;
            result[4] += 9203501;
            result[5] += 12271335;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2618882;
            result[3] += 35093025;
            result[4] += 0;
            result[5] += 5237764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 4772185;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 31019208;
            result[5] += 0;
          } else {
            result[0] += 5856773;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1952257;
            result[4] += 7809031;
            result[5] += 27331610;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 536870;
            result[1] += 0;
            result[2] += 31675383;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 2147483;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 192168;
            result[1] += 0;
            result[2] += 34494256;
            result[3] += 7110236;
            result[4] += 0;
            result[5] += 1153011;
          } else {
            result[0] += 39045157;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17179869;
          } else {
            result[0] += 81498;
            result[1] += 0;
            result[2] += 41564199;
            result[3] += 1303974;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 203552;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42746119;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 34359738;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11713547;
            result[5] += 31236125;
          } else {
            result[0] += 0;
            result[1] += 753503;
            result[2] += 0;
            result[3] += 6028024;
            result[4] += 32400630;
            result[5] += 3767515;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 15885495;
            result[1] += 2353406;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21769012;
            result[5] += 2941758;
          } else {
            result[0] += 99999;
            result[1] += 0;
            result[2] += 99999;
            result[3] += 2049984;
            result[4] += 1849985;
            result[5] += 38849704;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42700000))) ) ) {
            result[0] += 31236125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11713547;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 797826;
            result[2] += 1595653;
            result[3] += 19413784;
            result[4] += 664855;
            result[5] += 20477553;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 3435973;
            result[1] += 37795712;
            result[2] += 0;
            result[3] += 1717986;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1263225;
            result[1] += 13263869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28422577;
            result[5] += 0;
          } else {
            result[0] += 36829255;
            result[1] += 427005;
            result[2] += 71167;
            result[3] += 1494520;
            result[4] += 2882289;
            result[5] += 1245433;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 1825056;
            result[1] += 2190068;
            result[2] += 12897068;
            result[3] += 14235444;
            result[4] += 2433409;
            result[5] += 9368625;
          } else {
            result[0] += 33698974;
            result[1] += 0;
            result[2] += 5286113;
            result[3] += 0;
            result[4] += 3964585;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 2770946;
            result[1] += 4156419;
            result[2] += 1385473;
            result[3] += 18011153;
            result[4] += 0;
            result[5] += 16625679;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11394811;
            result[3] += 25419194;
            result[4] += 876523;
            result[5] += 5259143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35140641;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7809031;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 15618062;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41973544;
            result[3] += 0;
            result[4] += 0;
            result[5] += 976128;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 229677;
            result[1] += 0;
            result[2] += 33992254;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 918709;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41054834;
            result[3] += 1579032;
            result[4] += 0;
            result[5] += 315806;
          } else {
            result[0] += 2962046;
            result[1] += 0;
            result[2] += 31101487;
            result[3] += 8886139;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35140641;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42487848;
            result[3] += 461824;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 178214;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42593244;
            result[5] += 178214;
          } else {
            result[0] += 0;
            result[1] += 4294967;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 12884901;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 33405301;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 29094939;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9698313;
            result[5] += 4156419;
          } else {
            result[0] += 101415;
            result[1] += 50707;
            result[2] += 152123;
            result[3] += 1521239;
            result[4] += 2586107;
            result[5] += 38538077;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 3488298;
            result[1] += 1090093;
            result[2] += 0;
            result[3] += 5450466;
            result[4] += 3706316;
            result[5] += 29214498;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 700266;
            result[3] += 30578299;
            result[4] += 933688;
            result[5] += 10737418;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 4908534;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38041138;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 31019208;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 37560073;
            result[1] += 793816;
            result[2] += 0;
            result[3] += 376018;
            result[4] += 4177983;
            result[5] += 41779;
          } else {
            result[0] += 16457351;
            result[1] += 401398;
            result[2] += 802797;
            result[3] += 14048958;
            result[4] += 5619583;
            result[5] += 5619583;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 339523;
            result[1] += 1358092;
            result[2] += 9506646;
            result[3] += 18164486;
            result[4] += 1188330;
            result[5] += 12392593;
          } else {
            result[0] += 26616698;
            result[1] += 604924;
            result[2] += 13005886;
            result[3] += 0;
            result[4] += 2722162;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42940000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 34359738;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1301505;
            result[3] += 36442146;
            result[4] += 0;
            result[5] += 5206020;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 16106127;
            result[4] += 2684354;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32001717;
            result[3] += 9263654;
            result[4] += 0;
            result[5] += 1684300;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6607641;
            result[5] += 36342030;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ec0000))) ) ) {
            result[0] += 0;
            result[1] += 7953643;
            result[2] += 30223843;
            result[3] += 3181457;
            result[4] += 0;
            result[5] += 1590728;
          } else {
            result[0] += 33405301;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 310479;
            result[1] += 0;
            result[2] += 35601656;
            result[3] += 5588632;
            result[4] += 103493;
            result[5] += 1345411;
          } else {
            result[0] += 399903;
            result[1] += 0;
            result[2] += 41510019;
            result[3] += 879788;
            result[4] += 0;
            result[5] += 159961;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x422e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 159072;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42313381;
            result[5] += 477218;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 3368601;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37896770;
            result[5] += 1684300;
          } else {
            result[0] += 3067833;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 32212254;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 102750;
            result[3] += 1798132;
            result[4] += 1489880;
            result[5] += 39558909;
          } else {
            result[0] += 1153011;
            result[1] += 864758;
            result[2] += 0;
            result[3] += 11530113;
            result[4] += 10088849;
            result[5] += 19312940;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42440000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
            result[0] += 2321603;
            result[1] += 1160801;
            result[2] += 0;
            result[3] += 17992430;
            result[4] += 1160801;
            result[5] += 20314034;
          } else {
            result[0] += 36447776;
            result[1] += 743073;
            result[2] += 928842;
            result[3] += 1040303;
            result[4] += 2489297;
            result[5] += 1300379;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 264305;
            result[1] += 0;
            result[2] += 2907362;
            result[3] += 24316122;
            result[4] += 1189375;
            result[5] += 14272506;
          } else {
            result[0] += 12902576;
            result[1] += 883738;
            result[2] += 16437529;
            result[3] += 2120971;
            result[4] += 4772185;
            result[5] += 5832671;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 2386092;
            result[5] += 31019208;
          } else {
            result[0] += 13215283;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23126746;
            result[5] += 6607641;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9780618;
            result[3] += 30617588;
            result[4] += 0;
            result[5] += 2551465;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 785664;
            result[1] += 0;
            result[2] += 33259807;
            result[3] += 6547206;
            result[4] += 0;
            result[5] += 2356994;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42940000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
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
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 9203501;
            result[2] += 18407002;
            result[3] += 6135667;
            result[4] += 3067833;
            result[5] += 6135667;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 283683;
            result[1] += 0;
            result[2] += 40680205;
            result[3] += 1985784;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1301505;
            result[3] += 0;
            result[4] += 27331610;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 242653;
            result[4] += 323538;
            result[5] += 42383481;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3616814;
            result[4] += 3164712;
            result[5] += 36168145;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 19307651;
            result[1] += 3546303;
            result[2] += 0;
            result[3] += 394033;
            result[4] += 15367314;
            result[5] += 4334370;
          } else {
            result[0] += 0;
            result[1] += 820694;
            result[2] += 820694;
            result[3] += 14042992;
            result[4] += 2644459;
            result[5] += 24620831;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42f00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 205993;
            result[1] += 42434688;
            result[2] += 0;
            result[3] += 0;
            result[4] += 308990;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 34795109;
            result[1] += 656511;
            result[2] += 310979;
            result[3] += 1209363;
            result[4] += 5079325;
            result[5] += 898384;
          } else {
            result[0] += 1047552;
            result[1] += 41902119;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 1533916;
            result[1] += 1278264;
            result[2] += 4601750;
            result[3] += 14700036;
            result[4] += 6007841;
            result[5] += 14827863;
          } else {
            result[0] += 37257547;
            result[1] += 0;
            result[2] += 1552397;
            result[3] += 0;
            result[4] += 2587329;
            result[5] += 1552397;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5408477;
            result[3] += 29905698;
            result[4] += 0;
            result[5] += 7635497;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9336885;
            result[3] += 31745410;
            result[4] += 0;
            result[5] += 1867377;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38654705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 12271335;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 1543102;
            result[1] += 0;
            result[2] += 34848387;
            result[3] += 4886489;
            result[4] += 257183;
            result[5] += 1414510;
          } else {
            result[0] += 39370533;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39370533;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31236125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 11713547;
          } else {
            result[0] += 75882;
            result[1] += 0;
            result[2] += 41735547;
            result[3] += 1138242;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42020000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 181222;
            result[2] += 0;
            result[3] += 181222;
            result[4] += 42406006;
            result[5] += 181222;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29205777;
            result[5] += 13743895;
          } else {
            result[0] += 42256936;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 692736;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 2440322;
            result[2] += 0;
            result[3] += 2440322;
            result[4] += 20010643;
            result[5] += 18058385;
          } else {
            result[0] += 0;
            result[1] += 44739;
            result[2] += 44739;
            result[3] += 2729093;
            result[4] += 1207959;
            result[5] += 38923141;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 33405301;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9911462;
            result[4] += 0;
            result[5] += 33038209;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 617980;
            result[3] += 33988949;
            result[4] += 308990;
            result[5] += 8033751;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 3272356;
            result[1] += 818089;
            result[2] += 0;
            result[3] += 409044;
            result[4] += 38450183;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 41722539;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1227133;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 30064771;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12884901;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
            result[0] += 3221225;
            result[1] += 36507222;
            result[2] += 2147483;
            result[3] += 0;
            result[4] += 1073741;
            result[5] += 0;
          } else {
            result[0] += 5327091;
            result[1] += 7324750;
            result[2] += 1331772;
            result[3] += 2330602;
            result[4] += 23638967;
            result[5] += 2996488;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 39204742;
            result[1] += 78019;
            result[2] += 39009;
            result[3] += 1560387;
            result[4] += 1287319;
            result[5] += 780193;
          } else {
            result[0] += 11453246;
            result[1] += 409044;
            result[2] += 7567323;
            result[3] += 12475857;
            result[4] += 4294967;
            result[5] += 6749234;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 6285317;
            result[2] += 1047552;
            result[3] += 10475529;
            result[4] += 0;
            result[5] += 25141271;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 954437;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 3817748;
            result[4] += 2863311;
            result[5] += 11453246;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 550636;
            result[1] += 0;
            result[2] += 24228020;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 9911462;
          } else {
            result[0] += 28163719;
            result[1] += 2112278;
            result[2] += 9153208;
            result[3] += 704092;
            result[4] += 1408185;
            result[5] += 1408185;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 235987;
            result[1] += 0;
            result[2] += 28554452;
            result[3] += 11799360;
            result[4] += 0;
            result[5] += 2359872;
          } else {
            result[0] += 411282;
            result[1] += 0;
            result[2] += 39953184;
            result[3] += 2526451;
            result[4] += 0;
            result[5] += 58754;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42686178;
            result[5] += 263494;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 1342177;
            result[3] += 0;
            result[4] += 4026531;
            result[5] += 0;
          } else {
            result[0] += 447392;
            result[1] += 8500456;
            result[2] += 3131746;
            result[3] += 2236962;
            result[4] += 14763950;
            result[5] += 13869165;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2070503;
            result[4] += 1964323;
            result[5] += 38914845;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 4521018;
            result[2] += 0;
            result[3] += 6781527;
            result[4] += 2260509;
            result[5] += 29386618;
          } else {
            result[0] += 0;
            result[1] += 773867;
            result[2] += 2128136;
            result[3] += 26891912;
            result[4] += 386933;
            result[5] += 12768821;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42180000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
            result[0] += 24159191;
            result[1] += 7516192;
            result[2] += 0;
            result[3] += 1073741;
            result[4] += 10200547;
            result[5] += 0;
          } else {
            result[0] += 1883757;
            result[1] += 2448884;
            result[2] += 1695381;
            result[3] += 2260509;
            result[4] += 27314484;
            result[5] += 7346654;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 37562386;
            result[1] += 891688;
            result[2] += 520151;
            result[3] += 1077457;
            result[4] += 2192068;
            result[5] += 705920;
          } else {
            result[0] += 10033325;
            result[1] += 0;
            result[2] += 4224557;
            result[3] += 13025720;
            result[4] += 4048534;
            result[5] += 11617534;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2183881;
            result[3] += 13103290;
            result[4] += 727960;
            result[5] += 26934540;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7389191;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 6927366;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 33405301;
            result[5] += 4772185;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13743895;
            result[3] += 8589934;
            result[4] += 3435973;
            result[5] += 17179869;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 3579139;
            result[1] += 3579139;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 25053975;
          } else {
            result[0] += 1282079;
            result[1] += 641039;
            result[2] += 39103433;
            result[3] += 641039;
            result[4] += 0;
            result[5] += 1282079;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 26587892;
            result[4] += 0;
            result[5] += 4090445;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6135667;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30275998;
            result[3] += 12673673;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41265372;
            result[3] += 1684300;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ff0000))) ) ) {
            result[0] += 950915;
            result[1] += 0;
            result[2] += 37402667;
            result[3] += 4120632;
            result[4] += 158485;
            result[5] += 316971;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 166794;
            result[1] += 0;
            result[2] += 41865506;
            result[3] += 917371;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42920000))) ) ) {
            result[0] += 525914;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42423758;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 17895697;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 34738706;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7579354;
            result[5] += 631612;
          } else {
            result[0] += 491619;
            result[1] += 223463;
            result[2] += 0;
            result[3] += 1698322;
            result[4] += 2368712;
            result[5] += 38167555;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 2069863;
            result[1] += 0;
            result[2] += 2069863;
            result[3] += 9831852;
            result[4] += 1552397;
            result[5] += 27425694;
          } else {
            result[0] += 678152;
            result[1] += 0;
            result[2] += 226050;
            result[3] += 34585789;
            result[4] += 0;
            result[5] += 7459680;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
            result[0] += 5672598;
            result[1] += 7833588;
            result[2] += 270123;
            result[3] += 2701237;
            result[4] += 25121506;
            result[5] += 1350618;
          } else {
            result[0] += 37622296;
            result[1] += 440886;
            result[2] += 514367;
            result[3] += 1212437;
            result[4] += 2094209;
            result[5] += 1065475;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 1988410;
            result[1] += 1590728;
            result[2] += 5567550;
            result[3] += 17498014;
            result[4] += 5766391;
            result[5] += 10538577;
          } else {
            result[0] += 11170766;
            result[1] += 0;
            result[2] += 24074928;
            result[3] += 3659389;
            result[4] += 1733394;
            result[5] += 2311193;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6551645;
            result[3] += 31302304;
            result[4] += 0;
            result[5] += 5095723;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37223049;
            result[3] += 2863311;
            result[4] += 0;
            result[5] += 2863311;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14939016;
            result[3] += 28010656;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 511305;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 9203501;
            result[4] += 2045222;
            result[5] += 511305;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 15339168;
            result[3] += 21474836;
            result[4] += 3067833;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 5726623;
            result[4] += 715827;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 11713547;
          } else {
            result[0] += 487372;
            result[1] += 0;
            result[2] += 40573733;
            result[3] += 1766724;
            result[4] += 0;
            result[5] += 121843;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42482828;
            result[5] += 466844;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 0;
            result[4] += 24542670;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 68174;
            result[3] += 954437;
            result[4] += 477218;
            result[5] += 41449843;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 1061942;
            result[1] += 1415923;
            result[2] += 589968;
            result[3] += 10737418;
            result[4] += 2477865;
            result[5] += 26666555;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 14763950;
            result[3] += 1342177;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2643056;
            result[1] += 991146;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39315469;
            result[5] += 0;
          } else {
            result[0] += 34044688;
            result[1] += 867994;
            result[2] += 450071;
            result[3] += 1896729;
            result[4] += 3986346;
            result[5] += 1703841;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 439158;
            result[1] += 614821;
            result[2] += 7290026;
            result[3] += 19937782;
            result[4] += 2371454;
            result[5] += 12296429;
          } else {
            result[0] += 25165823;
            result[1] += 671088;
            result[2] += 7046430;
            result[3] += 0;
            result[4] += 8724152;
            result[5] += 1342177;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2770946;
            result[4] += 0;
            result[5] += 40178726;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7469508;
            result[3] += 31745410;
            result[4] += 0;
            result[5] += 3734754;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 2863311;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38793252;
            result[3] += 4156419;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36507222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6442450;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15823563;
            result[3] += 27126109;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35705149;
            result[3] += 6468324;
            result[4] += 0;
            result[5] += 776198;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 2147483;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6442450;
          } else {
            result[0] += 18407002;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 12271335;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 196416;
            result[1] += 0;
            result[2] += 41312871;
            result[3] += 1440385;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x420e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1490367;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41052841;
            result[5] += 406463;
          } else {
            result[0] += 3495903;
            result[1] += 499414;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23971910;
            result[5] += 14982444;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 40495405;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2454267;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 39844877;
            result[1] += 0;
            result[2] += 1034931;
            result[3] += 0;
            result[4] += 1552397;
            result[5] += 517465;
          } else {
            result[0] += 16106127;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 407934;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1340356;
            result[4] += 1223803;
            result[5] += 39977578;
          } else {
            result[0] += 1019144;
            result[1] += 436776;
            result[2] += 2620658;
            result[3] += 11210592;
            result[4] += 5241316;
            result[5] += 22421185;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 40160733;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1394469;
            result[4] += 557787;
            result[5] += 836681;
          } else {
            result[0] += 1948041;
            result[1] += 742110;
            result[2] += 5009249;
            result[3] += 21057399;
            result[4] += 1020402;
            result[5] += 13172469;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 36905219;
            result[1] += 1319563;
            result[2] += 127699;
            result[3] += 766198;
            result[4] += 2809393;
            result[5] += 1021597;
          } else {
            result[0] += 5541893;
            result[1] += 0;
            result[2] += 25977624;
            result[3] += 3463683;
            result[4] += 1039104;
            result[5] += 6927366;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12271335;
            result[4] += 30678337;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2928386;
            result[3] += 2928386;
            result[4] += 0;
            result[5] += 37092899;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 7158278;
            result[3] += 14316557;
            result[4] += 2684354;
            result[5] += 15211342;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39881839;
            result[3] += 3067833;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5856773;
            result[3] += 29283867;
            result[4] += 0;
            result[5] += 7809031;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 30064771;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36984440;
            result[3] += 1193046;
            result[4] += 0;
            result[5] += 4772185;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31824155;
            result[3] += 9573119;
            result[4] += 0;
            result[5] += 1552397;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41102375;
            result[3] += 1385473;
            result[4] += 0;
            result[5] += 461824;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36539274;
            result[3] += 5769359;
            result[4] += 0;
            result[5] += 641039;
          } else {
            result[0] += 256671;
            result[1] += 0;
            result[2] += 42179658;
            result[3] += 513342;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40280484;
            result[5] += 2669188;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
            result[0] += 894784;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 27738330;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 102627;
            result[2] += 0;
            result[3] += 2206494;
            result[4] += 2514377;
            result[5] += 38126173;
          } else {
            result[0] += 0;
            result[1] += 31236125;
            result[2] += 9110536;
            result[3] += 1301505;
            result[4] += 0;
            result[5] += 1301505;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1227133;
            result[3] += 10430634;
            result[4] += 920350;
            result[5] += 30371554;
          } else {
            result[0] += 191739;
            result[1] += 0;
            result[2] += 4218271;
            result[3] += 27035285;
            result[4] += 0;
            result[5] += 11504376;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5183581;
            result[1] += 12218441;
            result[2] += 0;
            result[3] += 925639;
            result[4] += 22400475;
            result[5] += 2221534;
          } else {
            result[0] += 36653764;
            result[1] += 180916;
            result[2] += 398017;
            result[3] += 1592068;
            result[4] += 2641386;
            result[5] += 1483518;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1823335;
            result[1] += 607778;
            result[2] += 3444077;
            result[3] += 15802238;
            result[4] += 4254448;
            result[5] += 17017794;
          } else {
            result[0] += 14015156;
            result[1] += 452101;
            result[2] += 19214327;
            result[3] += 3842865;
            result[4] += 3616814;
            result[5] += 1808407;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42900000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8017272;
            result[3] += 26342466;
            result[4] += 572662;
            result[5] += 8017272;
          } else {
            result[0] += 3435973;
            result[1] += 0;
            result[2] += 22333829;
            result[3] += 15461882;
            result[4] += 0;
            result[5] += 1717986;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 18407002;
          } else {
            result[0] += 1363481;
            result[1] += 681740;
            result[2] += 36132264;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 5726623;
            result[3] += 0;
            result[4] += 2863311;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39370533;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37786924;
            result[3] += 5162748;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 315034;
            result[1] += 0;
            result[2] += 41584524;
            result[3] += 735079;
            result[4] += 0;
            result[5] += 315034;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 201641;
            result[1] += 403283;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41538181;
            result[5] += 806566;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
            result[0] += 33285996;
            result[1] += 1073741;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 3221225;
          } else {
            result[0] += 144449;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2503792;
            result[4] += 2359343;
            result[5] += 37942087;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 3495903;
            result[1] += 1997659;
            result[2] += 499414;
            result[3] += 7491222;
            result[4] += 3495903;
            result[5] += 25969569;
          } else {
            result[0] += 499414;
            result[1] += 249707;
            result[2] += 0;
            result[3] += 27218106;
            result[4] += 1498244;
            result[5] += 13484199;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 39045157;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3904515;
            result[5] += 0;
          } else {
            result[0] += 493674;
            result[1] += 5430418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37025580;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 22906492;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20043180;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 15907286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7423400;
            result[4] += 18558500;
            result[5] += 1060485;
          } else {
            result[0] += 38013375;
            result[1] += 932843;
            result[2] += 0;
            result[3] += 583027;
            result[4] += 3070610;
            result[5] += 349816;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 1105322;
            result[2] += 6158225;
            result[3] += 17685159;
            result[4] += 3789677;
            result[5] += 14211288;
          } else {
            result[0] += 26733980;
            result[1] += 876523;
            result[2] += 10080025;
            result[3] += 0;
            result[4] += 5259143;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 30678337;
            result[4] += 6135667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 550636;
            result[3] += 9911462;
            result[4] += 0;
            result[5] += 32487573;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42980000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4405094;
            result[3] += 27898932;
            result[4] += 367091;
            result[5] += 10278554;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 528611;
            result[1] += 0;
            result[2] += 30395153;
            result[3] += 9911462;
            result[4] += 792917;
            result[5] += 1321528;
          } else {
            result[0] += 38177487;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34896609;
            result[3] += 7076934;
            result[4] += 0;
            result[5] += 976128;
          } else {
            result[0] += 21474836;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42435305;
            result[3] += 428639;
            result[4] += 0;
            result[5] += 85727;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
            result[0] += 42949672;
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
            result[4] += 41728355;
            result[5] += 1221317;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 838626;
            result[4] += 778724;
            result[5] += 41332321;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 5804009;
            result[1] += 1305902;
            result[2] += 290200;
            result[3] += 5804009;
            result[4] += 6094210;
            result[5] += 23651340;
          } else {
            result[0] += 412977;
            result[1] += 412977;
            result[2] += 1858399;
            result[3] += 27669500;
            result[4] += 1032444;
            result[5] += 11563373;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 23264406;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19685266;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 2147483;
            result[1] += 4724464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36077725;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 31745410;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11204262;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 7545212;
            result[1] += 6384410;
            result[2] += 1160801;
            result[3] += 580400;
            result[4] += 22635638;
            result[5] += 4643207;
          } else {
            result[0] += 38020395;
            result[1] += 267480;
            result[2] += 229268;
            result[3] += 1413823;
            result[4] += 1643092;
            result[5] += 1375612;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 1039104;
            result[1] += 1039104;
            result[2] += 4675972;
            result[3] += 15759759;
            result[4] += 1385473;
            result[5] += 19050258;
          } else {
            result[0] += 30269293;
            result[1] += 1227133;
            result[2] += 1636178;
            result[3] += 0;
            result[4] += 9817068;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4880644;
            result[3] += 30259996;
            result[4] += 0;
            result[5] += 7809031;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25053975;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 3579139;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24159191;
            result[3] += 0;
            result[4] += 0;
            result[5] += 18790481;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 0;
            result[4] += 0;
            result[5] += 33405301;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30594287;
            result[3] += 7648571;
            result[4] += 0;
            result[5] += 4706813;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 1824659;
            result[1] += 0;
            result[2] += 33264942;
            result[3] += 6596845;
            result[4] += 140358;
            result[5] += 1122867;
          } else {
            result[0] += 27126109;
            result[1] += 0;
            result[2] += 15823563;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41722539;
            result[3] += 1227133;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 169093;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41427834;
            result[5] += 1352745;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7708915;
            result[5] += 35240757;
          } else {
            result[0] += 37298400;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4521018;
            result[5] += 1130254;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28307738;
            result[5] += 14641933;
          } else {
            result[0] += 0;
            result[1] += 105787;
            result[2] += 0;
            result[3] += 1375235;
            result[4] += 952086;
            result[5] += 40516563;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 2831846;
            result[2] += 2123884;
            result[3] += 13687258;
            result[4] += 943948;
            result[5] += 23362734;
          } else {
            result[0] += 0;
            result[1] += 308990;
            result[2] += 1235961;
            result[3] += 31517026;
            result[4] += 926971;
            result[5] += 8960723;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 41902119;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1047552;
            result[5] += 0;
          } else {
            result[0] += 4321979;
            result[1] += 6212845;
            result[2] += 0;
            result[3] += 270123;
            result[4] += 31874600;
            result[5] += 270123;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 22029741;
            result[1] += 943339;
            result[2] += 2108640;
            result[3] += 6603373;
            result[4] += 2663545;
            result[5] += 8601032;
          } else {
            result[0] += 38067707;
            result[1] += 116237;
            result[2] += 2382864;
            result[3] += 116237;
            result[4] += 2092270;
            result[5] += 174355;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7579354;
            result[3] += 0;
            result[4] += 35370318;
            result[5] += 0;
          } else {
            result[0] += 5506368;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 1101273;
            result[4] += 2202547;
            result[5] += 30835662;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 565127;
            result[2] += 3955890;
            result[3] += 32777381;
            result[4] += 0;
            result[5] += 5651272;
          } else {
            result[0] += 998829;
            result[1] += 0;
            result[2] += 18977762;
            result[3] += 9988296;
            result[4] += 998829;
            result[5] += 11985955;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27917287;
            result[3] += 15032385;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40160733;
            result[3] += 1115575;
            result[4] += 0;
            result[5] += 1673363;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 9544371;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 33405301;
          } else {
            result[0] += 7809031;
            result[1] += 0;
            result[2] += 17570320;
            result[3] += 17570320;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38371281;
            result[3] += 3924335;
            result[4] += 0;
            result[5] += 654055;
          } else {
            result[0] += 671088;
            result[1] += 0;
            result[2] += 32547799;
            result[3] += 9730785;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 84546;
            result[1] += 0;
            result[2] += 42273300;
            result[3] += 591826;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22738062;
            result[5] += 20211610;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26076587;
            result[5] += 16873085;
          } else {
            result[0] += 64683;
            result[1] += 0;
            result[2] += 64683;
            result[3] += 840882;
            result[4] += 323416;
            result[5] += 41656008;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 23202696;
            result[1] += 8886139;
            result[2] += 493674;
            result[3] += 1974697;
            result[4] += 6417767;
            result[5] += 1974697;
          } else {
            result[0] += 843989;
            result[1] += 750212;
            result[2] += 0;
            result[3] += 17348667;
            result[4] += 3188403;
            result[5] += 20818400;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4586858;
            result[2] += 0;
            result[3] += 2918909;
            result[4] += 34609930;
            result[5] += 833974;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 42350375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 499414;
            result[5] += 99882;
          } else {
            result[0] += 17179869;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42910000))) ) ) {
            result[0] += 12271335;
            result[1] += 4090445;
            result[2] += 613566;
            result[3] += 818089;
            result[4] += 20452225;
            result[5] += 4704011;
          } else {
            result[0] += 38984445;
            result[1] += 166956;
            result[2] += 125217;
            result[3] += 960002;
            result[4] += 1669569;
            result[5] += 1043480;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 1577743;
            result[1] += 1928352;
            result[2] += 7012191;
            result[3] += 14900906;
            result[4] += 1577743;
            result[5] += 15952735;
          } else {
            result[0] += 31327996;
            result[1] += 0;
            result[2] += 3031741;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 27610504;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 766958;
            result[3] += 35280088;
            result[4] += 0;
            result[5] += 6902626;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11713547;
            result[3] += 11713547;
            result[4] += 3904515;
            result[5] += 15618062;
          } else {
            result[0] += 4294967;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10052051;
            result[3] += 30156153;
            result[4] += 0;
            result[5] += 2741468;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33907636;
            result[3] += 2260509;
            result[4] += 0;
            result[5] += 6781527;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32017028;
            result[3] += 7028128;
            result[4] += 0;
            result[5] += 3904515;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2526451;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 35370318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29734388;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13215283;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 560213;
            result[1] += 0;
            result[2] += 33426049;
            result[3] += 8403196;
            result[4] += 0;
            result[5] += 560213;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 520602;
            result[1] += 0;
            result[2] += 37483350;
            result[3] += 4945719;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 586057;
            result[1] += 0;
            result[2] += 41526389;
            result[3] += 837225;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42551990;
            result[5] += 397682;
          } else {
            result[0] += 1590728;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 17498014;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 19088743;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 103743;
            result[2] += 207486;
            result[3] += 1971120;
            result[4] += 1452404;
            result[5] += 39214918;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 24938519;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18011153;
            result[5] += 0;
          } else {
            result[0] += 501358;
            result[1] += 501358;
            result[2] += 1671193;
            result[3] += 21725515;
            result[4] += 2005432;
            result[5] += 16544815;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42766127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 183545;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 18407002;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 24542670;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6514838;
            result[1] += 4343225;
            result[2] += 241290;
            result[3] += 241290;
            result[4] += 28472255;
            result[5] += 3136773;
          } else {
            result[0] += 35922224;
            result[1] += 1158781;
            result[2] += 74760;
            result[3] += 1495201;
            result[4] += 2579223;
            result[5] += 1719482;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 684456;
            result[1] += 1197799;
            result[2] += 5817883;
            result[3] += 21218165;
            result[4] += 1368913;
            result[5] += 12662453;
          } else {
            result[0] += 30406848;
            result[1] += 760171;
            result[2] += 5701284;
            result[3] += 1900428;
            result[4] += 4180941;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26430567;
            result[3] += 6607641;
            result[4] += 3303820;
            result[5] += 6607641;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 11713547;
            result[4] += 0;
            result[5] += 27331610;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 3303820;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 26430567;
          } else {
            result[0] += 0;
            result[1] += 557787;
            result[2] += 4462303;
            result[3] += 32909489;
            result[4] += 0;
            result[5] += 5020091;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11713547;
            result[3] += 27331610;
            result[4] += 0;
            result[5] += 3904515;
          } else {
            result[0] += 12884901;
            result[1] += 0;
            result[2] += 30064771;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33188383;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9761289;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41160103;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 2045222;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 8180890;
            result[4] += 10226112;
            result[5] += 16361780;
          } else {
            result[0] += 2045222;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33525464;
            result[3] += 8342742;
            result[4] += 0;
            result[5] += 1081466;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40002146;
            result[3] += 2947526;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 595145;
            result[1] += 0;
            result[2] += 42056954;
            result[3] += 297572;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 600694;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 3303820;
          } else {
            result[0] += 0;
            result[1] += 31019208;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 7158278;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 38177487;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 1160801;
            result[2] += 0;
            result[3] += 1160801;
            result[4] += 38306465;
            result[5] += 2321603;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16519104;
            result[4] += 0;
            result[5] += 26430567;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 54922;
            result[1] += 164768;
            result[2] += 0;
            result[3] += 878765;
            result[4] += 1592762;
            result[5] += 40258453;
          } else {
            result[0] += 1662567;
            result[1] += 277094;
            result[2] += 831283;
            result[3] += 11637975;
            result[4] += 3602230;
            result[5] += 24938519;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 37580963;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 2836299;
            result[1] += 8508897;
            result[2] += 0;
            result[3] += 1620742;
            result[4] += 26337063;
            result[5] += 3646670;
          } else {
            result[0] += 36307586;
            result[1] += 708986;
            result[2] += 37315;
            result[3] += 1455288;
            result[4] += 2686686;
            result[5] += 1753809;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 892129;
            result[1] += 509788;
            result[2] += 1274471;
            result[3] += 25616867;
            result[4] += 1401918;
            result[5] += 13254498;
          } else {
            result[0] += 15858340;
            result[1] += 0;
            result[2] += 20043180;
            result[3] += 3524075;
            result[4] += 2202547;
            result[5] += 1321528;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 1867377;
            result[2] += 1867377;
            result[3] += 0;
            result[4] += 31745410;
            result[5] += 7469508;
          } else {
            result[0] += 825955;
            result[1] += 412977;
            result[2] += 3716798;
            result[3] += 11150395;
            result[4] += 3716798;
            result[5] += 23126746;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 27331610;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7809031;
            result[4] += 3904515;
            result[5] += 3904515;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4129776;
            result[3] += 36342030;
            result[4] += 0;
            result[5] += 2477865;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29527900;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 21474836;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35937481;
            result[3] += 7012191;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2045222;
            result[3] += 40904450;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2386092;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 362954;
            result[1] += 0;
            result[2] += 37626333;
            result[3] += 4234474;
            result[4] += 0;
            result[5] += 725909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42262478;
            result[3] += 687194;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 466844;
            result[1] += 311229;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40459836;
            result[5] += 1711762;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 40495405;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2454267;
            result[5] += 0;
          } else {
            result[0] += 1533916;
            result[1] += 766958;
            result[2] += 0;
            result[3] += 766958;
            result[4] += 19173961;
            result[5] += 20707878;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 1130254;
            result[1] += 2260509;
            result[2] += 0;
            result[3] += 3390763;
            result[4] += 30516872;
            result[5] += 5651272;
          } else {
            result[0] += 97946;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2007909;
            result[4] += 1616122;
            result[5] += 39227694;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 1590728;
            result[1] += 1590728;
            result[2] += 0;
            result[3] += 1060485;
            result[4] += 17498014;
            result[5] += 21209715;
          } else {
            result[0] += 517465;
            result[1] += 517465;
            result[2] += 0;
            result[3] += 27943160;
            result[4] += 1552397;
            result[5] += 12419182;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 976128;
            result[1] += 35140641;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6832902;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6654174;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36295498;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 38793252;
            result[1] += 0;
            result[2] += 2770946;
            result[3] += 0;
            result[4] += 1385473;
            result[5] += 0;
          } else {
            result[0] += 525914;
            result[1] += 1227133;
            result[2] += 1402438;
            result[3] += 21387184;
            result[4] += 2629571;
            result[5] += 15777430;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 39134781;
            result[1] += 600095;
            result[2] += 257183;
            result[3] += 771551;
            result[4] += 1800285;
            result[5] += 385775;
          } else {
            result[0] += 13576046;
            result[1] += 1481023;
            result[2] += 3455720;
            result[3] += 7651953;
            result[4] += 7158278;
            result[5] += 9626650;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3720050;
            result[3] += 31451335;
            result[4] += 338186;
            result[5] += 7440100;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 11504376;
            result[4] += 0;
            result[5] += 16106127;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 38177487;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 263494;
            result[1] += 0;
            result[2] += 32146380;
            result[3] += 8695332;
            result[4] += 526989;
            result[5] += 1317474;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6781527;
            result[1] += 0;
            result[2] += 27126109;
            result[3] += 2260509;
            result[4] += 6781527;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 26076587;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 804300;
            result[1] += 0;
            result[2] += 35228383;
            result[3] += 6112687;
            result[4] += 0;
            result[5] += 804300;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41621332;
            result[3] += 1254543;
            result[4] += 0;
            result[5] += 73796;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 442780;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42285502;
            result[5] += 221390;
          } else {
            result[0] += 0;
            result[1] += 2147483;
            result[2] += 1073741;
            result[3] += 7516192;
            result[4] += 25769803;
            result[5] += 6442450;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 911541;
            result[4] += 1554981;
            result[5] += 40483149;
          } else {
            result[0] += 4427801;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7970042;
            result[4] += 13726184;
            result[5] += 16825645;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 27356479;
            result[4] += 273564;
            result[5] += 15319628;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8886139;
            result[3] += 4443069;
            result[4] += 1481023;
            result[5] += 28139440;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
            result[0] += 6442450;
            result[1] += 4563402;
            result[2] += 0;
            result[3] += 536870;
            result[4] += 27917287;
            result[5] += 3489660;
          } else {
            result[0] += 34450305;
            result[1] += 1428172;
            result[2] += 522502;
            result[3] += 1288838;
            result[4] += 2786677;
            result[5] += 2473176;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 261092;
            result[1] += 0;
            result[2] += 3394199;
            result[3] += 23628847;
            result[4] += 913822;
            result[5] += 14751711;
          } else {
            result[0] += 12412061;
            result[1] += 394033;
            result[2] += 17534499;
            result[3] += 8077690;
            result[4] += 2955252;
            result[5] += 1576134;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5541893;
            result[3] += 5541893;
            result[4] += 1385473;
            result[5] += 30480413;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 30678337;
          } else {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 0;
            result[3] += 34359738;
            result[4] += 2863311;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42eb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35240757;
            result[3] += 3303820;
            result[4] += 0;
            result[5] += 4405094;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9203501;
            result[3] += 9203501;
            result[4] += 0;
            result[5] += 24542670;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 3579139;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1047552;
            result[1] += 0;
            result[2] += 33521695;
            result[3] += 7183220;
            result[4] += 0;
            result[5] += 1197203;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39395217;
            result[3] += 3554455;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42768832;
            result[3] += 180840;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 3904515;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27331610;
            result[5] += 11713547;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 37580963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41160103;
            result[5] += 1789569;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 105011;
            result[1] += 210022;
            result[2] += 157517;
            result[3] += 1627677;
            result[4] += 1365148;
            result[5] += 39484295;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 36484130;
            result[1] += 0;
            result[2] += 1385473;
            result[3] += 0;
            result[4] += 5080068;
            result[5] += 0;
          } else {
            result[0] += 523776;
            result[1] += 523776;
            result[2] += 0;
            result[3] += 12570635;
            result[4] += 6547206;
            result[5] += 22784277;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 4247769;
            result[1] += 16991079;
            result[2] += 707961;
            result[3] += 943948;
            result[4] += 16991079;
            result[5] += 3067833;
          } else {
            result[0] += 33854448;
            result[1] += 1407594;
            result[2] += 397013;
            result[3] += 2526451;
            result[4] += 1948976;
            result[5] += 2815188;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 1211162;
            result[1] += 1397494;
            result[2] += 4937814;
            result[3] += 21800918;
            result[4] += 186332;
            result[5] += 13415949;
          } else {
            result[0] += 27686566;
            result[1] += 1419823;
            result[2] += 9938767;
            result[3] += 354955;
            result[4] += 3549559;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 42724805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 224867;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 24542670;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 6135667;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3067833;
            result[4] += 0;
            result[5] += 39881839;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 7158278;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9395240;
            result[3] += 31541166;
            result[4] += 0;
            result[5] += 2013265;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 25053975;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f10000))) ) ) {
            result[0] += 304607;
            result[1] += 0;
            result[2] += 36400609;
            result[3] += 5787544;
            result[4] += 0;
            result[5] += 456911;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24938519;
            result[3] += 18011153;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 25053975;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41446434;
            result[3] += 1503238;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 206488;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41917228;
            result[5] += 825955;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3904515;
            result[4] += 19522578;
            result[5] += 19522578;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 123418;
            result[1] += 0;
            result[2] += 0;
            result[3] += 555383;
            result[4] += 802220;
            result[5] += 41468649;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7516192;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 22548578;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 31386299;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6607641;
            result[5] += 4955731;
          } else {
            result[0] += 433835;
            result[1] += 433835;
            result[2] += 0;
            result[3] += 4121433;
            result[4] += 8459784;
            result[5] += 29500785;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 365529;
            result[3] += 30521682;
            result[4] += 1827645;
            result[5] += 10234815;
          } else {
            result[0] += 0;
            result[1] += 1590728;
            result[2] += 17498014;
            result[3] += 9544371;
            result[4] += 1590728;
            result[5] += 12725829;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 31496426;
            result[2] += 0;
            result[3] += 2863311;
            result[4] += 8589934;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 1533916;
            result[1] += 766958;
            result[2] += 0;
            result[3] += 766958;
            result[4] += 39881839;
            result[5] += 0;
          } else {
            result[0] += 2603010;
            result[1] += 23427094;
            result[2] += 0;
            result[3] += 13015052;
            result[4] += 3904515;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
            result[0] += 7898790;
            result[1] += 3455720;
            result[2] += 5430418;
            result[3] += 8392464;
            result[4] += 1481023;
            result[5] += 16291255;
          } else {
            result[0] += 37983179;
            result[1] += 104925;
            result[2] += 734481;
            result[3] += 734481;
            result[4] += 3007876;
            result[5] += 384728;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 842150;
            result[1] += 0;
            result[2] += 1684300;
            result[3] += 5895053;
            result[4] += 7158278;
            result[5] += 27369889;
          } else {
            result[0] += 1094259;
            result[1] += 1641388;
            result[2] += 8480508;
            result[3] += 20380577;
            result[4] += 3419559;
            result[5] += 7933379;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 34690120;
            result[1] += 0;
            result[2] += 4129776;
            result[3] += 1651910;
            result[4] += 2477865;
            result[5] += 0;
          } else {
            result[0] += 738919;
            result[1] += 0;
            result[2] += 38793252;
            result[3] += 2770946;
            result[4] += 184729;
            result[5] += 461824;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42980000))) ) ) {
            result[0] += 180460;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42227829;
            result[5] += 541382;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 7158278;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
            result[0] += 21474836;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 145921;
            result[1] += 194562;
            result[2] += 0;
            result[3] += 2188828;
            result[4] += 2042906;
            result[5] += 38377454;
          } else {
            result[0] += 12695815;
            result[1] += 810371;
            result[2] += 0;
            result[3] += 7563464;
            result[4] += 4592103;
            result[5] += 17287918;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7579354;
            result[4] += 0;
            result[5] += 35370318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1034931;
            result[3] += 34411484;
            result[4] += 1034931;
            result[5] += 6468324;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x423a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 42054888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 894784;
            result[5] += 0;
          } else {
            result[0] += 4008636;
            result[1] += 1717986;
            result[2] += 0;
            result[3] += 286331;
            result[4] += 36936718;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 36525268;
            result[1] += 1010580;
            result[2] += 577474;
            result[3] += 1624147;
            result[4] += 2273806;
            result[5] += 938396;
          } else {
            result[0] += 6631934;
            result[1] += 842150;
            result[2] += 9579461;
            result[3] += 12632256;
            result[4] += 4526558;
            result[5] += 8737310;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2045222;
            result[3] += 26587892;
            result[4] += 1022611;
            result[5] += 13293946;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 9544371;
            result[2] += 4772185;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 3579139;
            result[1] += 3579139;
            result[2] += 34001824;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1789569;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 2386092;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30034736;
            result[3] += 12314241;
            result[4] += 0;
            result[5] += 600694;
          } else {
            result[0] += 452101;
            result[1] += 0;
            result[2] += 39784960;
            result[3] += 2712610;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 447392;
            result[1] += 0;
            result[2] += 36686178;
            result[3] += 5145012;
            result[4] += 0;
            result[5] += 671088;
          } else {
            result[0] += 163930;
            result[1] += 0;
            result[2] += 42211987;
            result[3] += 573755;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 346368;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42256936;
            result[5] += 346368;
          } else {
            result[0] += 1908874;
            result[1] += 0;
            result[2] += 0;
            result[3] += 954437;
            result[4] += 28633115;
            result[5] += 11453246;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 39320123;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3629549;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 449734;
            result[2] += 0;
            result[3] += 1888886;
            result[4] += 4047613;
            result[5] += 36563438;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 425244;
            result[2] += 2551465;
            result[3] += 11056351;
            result[4] += 1275732;
            result[5] += 27640878;
          } else {
            result[0] += 904203;
            result[1] += 0;
            result[2] += 678152;
            result[3] += 32551331;
            result[4] += 0;
            result[5] += 8815985;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6442450;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35433480;
            result[5] += 1073741;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42754889;
            result[2] += 0;
            result[3] += 0;
            result[4] += 194783;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            result[0] += 38923141;
            result[1] += 0;
            result[2] += 536870;
            result[3] += 0;
            result[4] += 3489660;
            result[5] += 0;
          } else {
            result[0] += 2904070;
            result[1] += 458537;
            result[2] += 3362607;
            result[3] += 14826043;
            result[4] += 1681303;
            result[5] += 19717109;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 37860260;
            result[1] += 1572338;
            result[2] += 331018;
            result[3] += 124132;
            result[4] += 3020545;
            result[5] += 41377;
          } else {
            result[0] += 4105483;
            result[1] += 947419;
            result[2] += 22106449;
            result[3] += 6947741;
            result[4] += 3473870;
            result[5] += 5368709;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19088743;
            result[3] += 9544371;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2741468;
            result[1] += 1827645;
            result[2] += 2741468;
            result[3] += 10052051;
            result[4] += 1827645;
            result[5] += 23759393;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 30678337;
          } else {
            result[0] += 740511;
            result[1] += 0;
            result[2] += 22955859;
            result[3] += 14810232;
            result[4] += 0;
            result[5] += 4443069;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31496426;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 2863311;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40495405;
            result[3] += 2454267;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 802797;
            result[1] += 0;
            result[2] += 38935684;
            result[3] += 2809791;
            result[4] += 0;
            result[5] += 401398;
          } else {
            result[0] += 4405094;
            result[1] += 0;
            result[2] += 26430567;
            result[3] += 12114010;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 7911781;
            result[1] += 0;
            result[2] += 35037891;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 140358;
            result[1] += 0;
            result[2] += 41125013;
            result[3] += 1614121;
            result[4] += 0;
            result[5] += 70179;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 342228;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41922987;
            result[5] += 684456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5052902;
            result[4] += 22738062;
            result[5] += 15158708;
          } else {
            result[0] += 62426;
            result[1] += 0;
            result[2] += 62426;
            result[3] += 1373390;
            result[4] += 936402;
            result[5] += 40515025;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 30980091;
            result[1] += 7040929;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1408185;
            result[5] += 3520464;
          } else {
            result[0] += 671088;
            result[1] += 0;
            result[2] += 1258291;
            result[3] += 15938355;
            result[4] += 2097151;
            result[5] += 22984785;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 5095723;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37853949;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 5482936;
            result[1] += 3198379;
            result[2] += 0;
            result[3] += 3655291;
            result[4] += 26500862;
            result[5] += 4112202;
          } else {
            result[0] += 35980221;
            result[1] += 1098632;
            result[2] += 137329;
            result[3] += 1338958;
            result[4] += 3089904;
            result[5] += 1304626;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 237291;
            result[2] += 4745820;
            result[3] += 20881608;
            result[4] += 1423746;
            result[5] += 15661206;
          } else {
            result[0] += 15940084;
            result[1] += 0;
            result[2] += 18153985;
            result[3] += 1771120;
            result[4] += 4206411;
            result[5] += 2878070;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1590728;
            result[3] += 0;
            result[4] += 0;
            result[5] += 41358944;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 35140641;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7809031;
          } else {
            result[0] += 2078209;
            result[1] += 0;
            result[2] += 6234629;
            result[3] += 24245783;
            result[4] += 0;
            result[5] += 10391049;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 933688;
            result[2] += 17740082;
            result[3] += 15872705;
            result[4] += 1867377;
            result[5] += 6535819;
          } else {
            result[0] += 671088;
            result[1] += 671088;
            result[2] += 34896609;
            result[3] += 4026531;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38177487;
            result[4] += 0;
            result[5] += 4772185;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28082478;
            result[3] += 13765920;
            result[4] += 550636;
            result[5] += 550636;
          } else {
            result[0] += 876523;
            result[1] += 0;
            result[2] += 39443577;
            result[3] += 876523;
            result[4] += 0;
            result[5] += 1753047;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33342509;
            result[3] += 9607163;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40718521;
            result[3] += 2231151;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 107913;
            result[1] += 0;
            result[2] += 42518017;
            result[3] += 215827;
            result[4] += 0;
            result[5] += 107913;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x43058000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 25769803;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1263225;
            result[4] += 41686447;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 5153960;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3435973;
            result[4] += 30923764;
            result[5] += 3435973;
          } else {
            result[0] += 1057051;
            result[1] += 111268;
            result[2] += 0;
            result[3] += 945782;
            result[4] += 1001417;
            result[5] += 39834152;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 4163488;
            result[1] += 4163488;
            result[2] += 876523;
            result[3] += 5259143;
            result[4] += 2629571;
            result[5] += 25857456;
          } else {
            result[0] += 980586;
            result[1] += 196117;
            result[2] += 3333992;
            result[3] += 25495239;
            result[4] += 784468;
            result[5] += 12159268;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 6756128;
            result[1] += 1689032;
            result[2] += 1206451;
            result[3] += 241290;
            result[4] += 31367738;
            result[5] += 1689032;
          } else {
            result[0] += 0;
            result[1] += 42233845;
            result[2] += 0;
            result[3] += 0;
            result[4] += 715827;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 36857252;
            result[1] += 1173074;
            result[2] += 378411;
            result[3] += 1173074;
            result[4] += 2686719;
            result[5] += 681140;
          } else {
            result[0] += 9383962;
            result[1] += 180460;
            result[2] += 5955206;
            result[3] += 12812717;
            result[4] += 3789677;
            result[5] += 10827648;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27331610;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 7809031;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1227133;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 35586871;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1684300;
            result[3] += 37054619;
            result[4] += 0;
            result[5] += 4210752;
          } else {
            result[0] += 0;
            result[1] += 2112278;
            result[2] += 6336836;
            result[3] += 15490045;
            result[4] += 4224557;
            result[5] += 14785952;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 24728599;
            result[4] += 0;
            result[5] += 6507526;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33107039;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 557787;
            result[1] += 0;
            result[2] += 33048936;
            result[3] += 7111796;
            result[4] += 0;
            result[5] += 2231151;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 36507222;
            result[1] += 2147483;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34200665;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 795364;
          } else {
            result[0] += 129953;
            result[1] += 0;
            result[2] += 41780090;
            result[3] += 844698;
            result[4] += 0;
            result[5] += 194930;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42560988;
            result[5] += 388684;
          } else {
            result[0] += 2603010;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32537631;
            result[5] += 7809031;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22497447;
            result[5] += 20452225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1070593;
            result[4] += 503808;
            result[5] += 41375271;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 6336836;
            result[1] += 1760232;
            result[2] += 0;
            result[3] += 2992395;
            result[4] += 6864906;
            result[5] += 24995301;
          } else {
            result[0] += 354955;
            result[1] += 0;
            result[2] += 2839647;
            result[3] += 27509088;
            result[4] += 177477;
            result[5] += 12068503;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 636291;
            result[1] += 3817748;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 30541989;
            result[5] += 3181457;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 2603010;
            result[1] += 11062794;
            result[2] += 0;
            result[3] += 1301505;
            result[4] += 27982362;
            result[5] += 0;
          } else {
            result[0] += 37277778;
            result[1] += 74630;
            result[2] += 37315;
            result[3] += 895562;
            result[4] += 3171782;
            result[5] += 1492603;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 633943;
            result[1] += 475457;
            result[2] += 9350666;
            result[3] += 15373130;
            result[4] += 0;
            result[5] += 17116474;
          } else {
            result[0] += 27212388;
            result[1] += 1311440;
            result[2] += 8852222;
            result[3] += 1311440;
            result[4] += 3606461;
            result[5] += 655720;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1227133;
            result[3] += 2454267;
            result[4] += 2454267;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4521018;
            result[3] += 2260509;
            result[4] += 24865600;
            result[5] += 11302545;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 2202547;
            result[1] += 2202547;
            result[2] += 0;
            result[3] += 13215283;
            result[4] += 4405094;
            result[5] += 20924199;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12169074;
            result[3] += 24696061;
            result[4] += 1431655;
            result[5] += 4652881;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 19685266;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24542670;
            result[5] += 18407002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 11471030;
            result[4] += 0;
            result[5] += 800304;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 15618062;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 3904515;
          } else {
            result[0] += 228455;
            result[1] += 0;
            result[2] += 40208204;
            result[3] += 2056101;
            result[4] += 0;
            result[5] += 456911;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37795712;
            result[3] += 5153960;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 259253;
            result[1] += 0;
            result[2] += 42258330;
            result[3] += 432089;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 647482;
            result[1] += 1079137;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41007225;
            result[5] += 215827;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13805252;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 6442450;
            result[2] += 0;
            result[3] += 2147483;
            result[4] += 24338148;
            result[5] += 10021590;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1193046;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 32212254;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40563580;
            result[5] += 2386092;
          } else {
            result[0] += 0;
            result[1] += 219410;
            result[2] += 274263;
            result[3] += 1481023;
            result[4] += 1481023;
            result[5] += 39493952;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3303820;
            result[4] += 0;
            result[5] += 39645851;
          } else {
            result[0] += 327860;
            result[1] += 0;
            result[2] += 1639300;
            result[3] += 25245227;
            result[4] += 0;
            result[5] += 15737284;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 1115575;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40160733;
            result[5] += 1673363;
          } else {
            result[0] += 0;
            result[1] += 40904450;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2045222;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 20211610;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22738062;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42761297;
            result[2] += 0;
            result[3] += 0;
            result[4] += 188375;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
            result[0] += 6832902;
            result[1] += 1301505;
            result[2] += 0;
            result[3] += 6182149;
            result[4] += 8134407;
            result[5] += 20498707;
          } else {
            result[0] += 37193175;
            result[1] += 1103041;
            result[2] += 241290;
            result[3] += 861751;
            result[4] += 2516313;
            result[5] += 1034101;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 1266952;
            result[1] += 1140256;
            result[2] += 3547465;
            result[3] += 18244108;
            result[4] += 4561027;
            result[5] += 14189862;
          } else {
            result[0] += 37180313;
            result[1] += 0;
            result[2] += 5769359;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5075870;
            result[3] += 33578835;
            result[4] += 0;
            result[5] += 4294967;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42fa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21851587;
            result[3] += 10549042;
            result[4] += 753503;
            result[5] += 9795539;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36285068;
            result[3] += 5924092;
            result[4] += 0;
            result[5] += 740511;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 134638;
            result[1] += 0;
            result[2] += 36217749;
            result[3] += 5924092;
            result[4] += 134638;
            result[5] += 538553;
          } else {
            result[0] += 81653;
            result[1] += 0;
            result[2] += 41643219;
            result[3] += 1224800;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42728282;
            result[5] += 221390;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35616801;
            result[5] += 7332870;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28010656;
            result[5] += 14939016;
          } else {
            result[0] += 62976;
            result[1] += 0;
            result[2] += 125952;
            result[3] += 881664;
            result[4] += 503808;
            result[5] += 41375271;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 27331610;
            result[1] += 2603010;
            result[2] += 0;
            result[3] += 1301505;
            result[4] += 7809031;
            result[5] += 3904515;
          } else {
            result[0] += 110410;
            result[1] += 110410;
            result[2] += 331231;
            result[3] += 16892801;
            result[4] += 2760261;
            result[5] += 22744556;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 6941361;
            result[1] += 4121433;
            result[2] += 1084587;
            result[3] += 1084587;
            result[4] += 28416197;
            result[5] += 1301505;
          } else {
            result[0] += 2095105;
            result[1] += 35616801;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5237764;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 37890156;
            result[1] += 1011903;
            result[2] += 112433;
            result[3] += 749557;
            result[4] += 2885798;
            result[5] += 299823;
          } else {
            result[0] += 10884506;
            result[1] += 294175;
            result[2] += 8089835;
            result[3] += 11767033;
            result[4] += 2794670;
            result[5] += 9119451;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 0;
            result[4] += 31236125;
            result[5] += 7809031;
          } else {
            result[0] += 0;
            result[1] += 3019898;
            result[2] += 1006632;
            result[3] += 13086228;
            result[4] += 0;
            result[5] += 25836912;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 30870077;
            result[4] += 0;
            result[5] += 5368709;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 33038209;
            result[1] += 0;
            result[2] += 9911462;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 3904515;
            result[2] += 3904515;
            result[3] += 11713547;
            result[4] += 11713547;
            result[5] += 11713547;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 18407002;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19303223;
            result[3] += 20750965;
            result[4] += 0;
            result[5] += 2895483;
          } else {
            result[0] += 788067;
            result[1] += 0;
            result[2] += 32310763;
            result[3] += 8274707;
            result[4] += 0;
            result[5] += 1576134;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37188131;
            result[3] += 5412357;
            result[4] += 0;
            result[5] += 349184;
          } else {
            result[0] += 369618;
            result[1] += 0;
            result[2] += 41323351;
            result[3] += 1256702;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 994205;
            result[1] += 0;
            result[2] += 0;
            result[3] += 198841;
            result[4] += 40961262;
            result[5] += 795364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23427094;
            result[5] += 19522578;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 2684354;
            result[4] += 5368709;
            result[5] += 2684354;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 65075;
            result[3] += 520602;
            result[4] += 650752;
            result[5] += 41713242;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 9002551;
            result[1] += 1687978;
            result[2] += 0;
            result[3] += 2625744;
            result[4] += 4313722;
            result[5] += 25319676;
          } else {
            result[0] += 1405625;
            result[1] += 312361;
            result[2] += 1093264;
            result[3] += 25613623;
            result[4] += 780903;
            result[5] += 13743895;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 0;
          } else {
            result[0] += 204522;
            result[1] += 42336106;
            result[2] += 0;
            result[3] += 204522;
            result[4] += 204522;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 753503;
            result[1] += 1507006;
            result[2] += 3767515;
            result[3] += 0;
            result[4] += 35414642;
            result[5] += 1507006;
          } else {
            result[0] += 8711490;
            result[1] += 607778;
            result[2] += 2633706;
            result[3] += 11345196;
            result[4] += 4862227;
            result[5] += 14789274;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1227133;
            result[1] += 19634136;
            result[2] += 0;
            result[3] += 409044;
            result[4] += 21270314;
            result[5] += 409044;
          } else {
            result[0] += 33933520;
            result[1] += 295074;
            result[2] += 2852382;
            result[3] += 2098304;
            result[4] += 2688452;
            result[5] += 1081938;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 24542670;
            result[4] += 3067833;
            result[5] += 15339168;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7902739;
            result[3] += 29205777;
            result[4] += 0;
            result[5] += 5841155;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1314785;
            result[1] += 0;
            result[2] += 5697405;
            result[3] += 1753047;
            result[4] += 10956549;
            result[5] += 23227884;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20211610;
            result[3] += 22738062;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 19522578;
            result[4] += 3904515;
            result[5] += 11713547;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2260509;
            result[1] += 0;
            result[2] += 40689163;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32641751;
            result[3] += 5153960;
            result[4] += 0;
            result[5] += 5153960;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 133384;
            result[1] += 0;
            result[2] += 37080773;
            result[3] += 5602131;
            result[4] += 0;
            result[5] += 133384;
          } else {
            result[0] += 80884;
            result[1] += 0;
            result[2] += 42302596;
            result[3] += 566191;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 376751;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42384545;
            result[5] += 188375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 39370533;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 8589934;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27917287;
            result[5] += 15032385;
          } else {
            result[0] += 845074;
            result[1] += 0;
            result[2] += 49710;
            result[3] += 1541018;
            result[4] += 497102;
            result[5] += 40016767;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2454267;
            result[4] += 5522100;
            result[5] += 34973305;
          } else {
            result[0] += 3135012;
            result[1] += 0;
            result[2] += 940503;
            result[3] += 23042342;
            result[4] += 1881007;
            result[5] += 13950806;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42260000))) ) ) {
            result[0] += 1717986;
            result[1] += 40372692;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993;
            result[5] += 0;
          } else {
            result[0] += 933688;
            result[1] += 1556147;
            result[2] += 1244918;
            result[3] += 933688;
            result[4] += 35791394;
            result[5] += 2489836;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 34434080;
            result[1] += 337920;
            result[2] += 473088;
            result[3] += 1993729;
            result[4] += 3210243;
            result[5] += 2500610;
          } else {
            result[0] += 9998865;
            result[1] += 113623;
            result[2] += 10680606;
            result[3] += 13180322;
            result[4] += 2158845;
            result[5] += 6817408;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1533916;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 35280088;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 15618062;
            result[4] += 0;
            result[5] += 23427094;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 34768782;
            result[4] += 0;
            result[5] += 2045222;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 20043180;
            result[4] += 0;
            result[5] += 5726623;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25053975;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 7158278;
            result[5] += 14316557;
          } else {
            result[0] += 236507;
            result[1] += 0;
            result[2] += 39922383;
            result[3] += 2601577;
            result[4] += 0;
            result[5] += 189205;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 19088743;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42591759;
            result[5] += 357913;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2321603;
            result[4] += 31341653;
            result[5] += 9286415;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34768782;
            result[5] += 2045222;
          } else {
            result[0] += 39005315;
            result[1] += 1314785;
            result[2] += 0;
            result[3] += 438261;
            result[4] += 1314785;
            result[5] += 876523;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 627919;
            result[4] += 2323301;
            result[5] += 39998452;
          } else {
            result[0] += 803870;
            result[1] += 803870;
            result[2] += 1263225;
            result[3] += 11483869;
            result[4] += 4823225;
            result[5] += 23771610;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 9544371;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33405301;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42852060;
            result[2] += 0;
            result[3] += 0;
            result[4] += 97612;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42900000))) ) ) {
            result[0] += 11204262;
            result[1] += 4979672;
            result[2] += 0;
            result[3] += 2801065;
            result[4] += 22408525;
            result[5] += 1556147;
          } else {
            result[0] += 38273204;
            result[1] += 533281;
            result[2] += 82043;
            result[3] += 1599844;
            result[4] += 1599844;
            result[5] += 861454;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 816977;
            result[1] += 2100799;
            result[2] += 1633954;
            result[3] += 17156526;
            result[4] += 3968176;
            result[5] += 17273238;
          } else {
            result[0] += 20796683;
            result[1] += 0;
            result[2] += 16953818;
            result[3] += 3390763;
            result[4] += 904203;
            result[5] += 904203;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2454267;
            result[3] += 0;
            result[4] += 4908534;
            result[5] += 35586871;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 7669584;
            result[1] += 4601750;
            result[2] += 9203501;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 15339168;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38347922;
            result[4] += 0;
            result[5] += 4601750;
          } else {
            result[0] += 1827645;
            result[1] += 0;
            result[2] += 10965873;
            result[3] += 15534988;
            result[4] += 0;
            result[5] += 14621165;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14092861;
            result[3] += 25501368;
            result[4] += 0;
            result[5] += 3355443;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34118899;
            result[3] += 7626577;
            result[4] += 0;
            result[5] += 1204196;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37025580;
            result[3] += 5924092;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1066126;
            result[1] += 0;
            result[2] += 37771343;
            result[3] += 3959898;
            result[4] += 0;
            result[5] += 152303;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42485853;
            result[3] += 463819;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dd0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 178214;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42771458;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 12271335;
            result[4] += 13805252;
            result[5] += 6135667;
          } else {
            result[0] += 417493;
            result[1] += 104373;
            result[2] += 0;
            result[3] += 1669975;
            result[4] += 991547;
            result[5] += 39766282;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 39987626;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2962046;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1717986;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 4294967;
            result[5] += 28346784;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40758363;
            result[4] += 0;
            result[5] += 2191309;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 671088;
            result[1] += 0;
            result[2] += 1006632;
            result[3] += 15099494;
            result[4] += 2013265;
            result[5] += 24159191;
          } else {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 33405301;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 1140256;
            result[1] += 2660599;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38768731;
            result[5] += 380085;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 42846922;
            result[2] += 0;
            result[3] += 0;
            result[4] += 102750;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 25264513;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17685159;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 35595276;
            result[1] += 2059230;
            result[2] += 0;
            result[3] += 1765055;
            result[4] += 2647582;
            result[5] += 882527;
          } else {
            result[0] += 5412357;
            result[1] += 523776;
            result[2] += 872960;
            result[3] += 11173898;
            result[4] += 12570635;
            result[5] += 12396043;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 10191447;
            result[1] += 2911842;
            result[2] += 4367763;
            result[3] += 11647368;
            result[4] += 2911842;
            result[5] += 10919408;
          } else {
            result[0] += 38508048;
            result[1] += 419021;
            result[2] += 209510;
            result[3] += 670433;
            result[4] += 2849344;
            result[5] += 293314;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 290200;
            result[2] += 9576616;
            result[3] += 25827843;
            result[4] += 0;
            result[5] += 7255012;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12768821;
            result[3] += 20894435;
            result[4] += 0;
            result[5] += 9286415;
          } else {
            result[0] += 1498244;
            result[1] += 0;
            result[2] += 33460791;
            result[3] += 3495903;
            result[4] += 998829;
            result[5] += 3495903;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 2386092;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 9544371;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
            result[0] += 18673770;
            result[1] += 0;
            result[2] += 23342213;
            result[3] += 0;
            result[4] += 933688;
            result[5] += 0;
          } else {
            result[0] += 380085;
            result[1] += 0;
            result[2] += 39718945;
            result[3] += 2755620;
            result[4] += 0;
            result[5] += 95021;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 318145;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41677090;
            result[5] += 954437;
          } else {
            result[0] += 2386092;
            result[1] += 4772185;
            result[2] += 3579139;
            result[3] += 4772185;
            result[4] += 13123511;
            result[5] += 14316557;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 29801813;
            result[1] += 0;
            result[2] += 0;
            result[3] += 438261;
            result[4] += 11394811;
            result[5] += 1314785;
          } else {
            result[0] += 50707;
            result[1] += 253539;
            result[2] += 0;
            result[3] += 1825487;
            result[4] += 2129735;
            result[5] += 38690201;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 376751;
            result[1] += 0;
            result[2] += 376751;
            result[3] += 12809551;
            result[4] += 3014012;
            result[5] += 26372606;
          } else {
            result[0] += 1599189;
            result[1] += 0;
            result[2] += 1827645;
            result[3] += 29699241;
            result[4] += 228455;
            result[5] += 9595139;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 3520464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39429207;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 38177487;
            result[2] += 0;
            result[3] += 2863311;
            result[4] += 1908874;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 0;
          } else {
            result[0] += 99190;
            result[1] += 42751291;
            result[2] += 0;
            result[3] += 0;
            result[4] += 99190;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
            result[0] += 20373562;
            result[1] += 4588640;
            result[2] += 0;
            result[3] += 2019001;
            result[4] += 13949466;
            result[5] += 2019001;
          } else {
            result[0] += 40482351;
            result[1] += 91382;
            result[2] += 137073;
            result[3] += 182764;
            result[4] += 1325043;
            result[5] += 731058;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 425244;
            result[1] += 212622;
            result[2] += 5528175;
            result[3] += 17435015;
            result[4] += 0;
            result[5] += 19348615;
          } else {
            result[0] += 18161575;
            result[1] += 245426;
            result[2] += 13989322;
            result[3] += 4172253;
            result[4] += 5153960;
            result[5] += 1227133;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4668442;
            result[4] += 933688;
            result[5] += 37347541;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 471974;
            result[2] += 3303820;
            result[3] += 29734388;
            result[4] += 943948;
            result[5] += 8495539;
          } else {
            result[0] += 4234474;
            result[1] += 4234474;
            result[2] += 13913274;
            result[3] += 9678799;
            result[4] += 4234474;
            result[5] += 6654174;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9203501;
            result[3] += 33746171;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1101273;
            result[1] += 0;
            result[2] += 37443304;
            result[3] += 2753184;
            result[4] += 0;
            result[5] += 1651910;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 436776;
            result[1] += 0;
            result[2] += 36543620;
            result[3] += 5823684;
            result[4] += 0;
            result[5] += 145592;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26143279;
            result[3] += 16806393;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 172142;
            result[1] += 0;
            result[2] += 41744672;
            result[3] += 946786;
            result[4] += 0;
            result[5] += 86071;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 459354;
            result[1] += 459354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41801285;
            result[5] += 229677;
          } else {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27440068;
            result[5] += 13123511;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13215283;
            result[5] += 29734388;
          } else {
            result[0] += 30449395;
            result[1] += 0;
            result[2] += 1923119;
            result[3] += 1282079;
            result[4] += 8974558;
            result[5] += 320519;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 7730941;
            result[2] += 0;
            result[3] += 858993;
            result[4] += 25769803;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 99190;
            result[2] += 49595;
            result[3] += 1438268;
            result[4] += 2330986;
            result[5] += 39031631;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1263225;
            result[3] += 11684837;
            result[4] += 0;
            result[5] += 30001609;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 987348;
            result[3] += 28633115;
            result[4] += 329116;
            result[5] += 13000092;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42429701;
            result[2] += 0;
            result[3] += 311983;
            result[4] += 207988;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 40747125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2202547;
            result[5] += 0;
          } else {
            result[0] += 1493901;
            result[1] += 2614327;
            result[2] += 746950;
            result[3] += 373475;
            result[4] += 36600590;
            result[5] += 1120426;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 0;
          } else {
            result[0] += 39531393;
            result[1] += 1206451;
            result[2] += 0;
            result[3] += 281505;
            result[4] += 1849892;
            result[5] += 80430;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 3187078;
            result[1] += 303531;
            result[2] += 14569500;
            result[3] += 12748312;
            result[4] += 1517656;
            result[5] += 10623594;
          } else {
            result[0] += 36740081;
            result[1] += 0;
            result[2] += 3622261;
            result[3] += 2069863;
            result[4] += 517465;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 4294967;
            result[4] += 8589934;
            result[5] += 4294967;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37223049;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5052902;
            result[3] += 35370318;
            result[4] += 0;
            result[5] += 2526451;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 631612;
            result[1] += 0;
            result[2] += 35580856;
            result[3] += 5895053;
            result[4] += 0;
            result[5] += 842150;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 27610504;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42eb0000))) ) ) {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5726623;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 366569;
            result[1] += 0;
            result[2] += 41361207;
            result[3] += 1221896;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 998829;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41950843;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11453246;
            result[4] += 27201459;
            result[5] += 4294967;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 33787076;
            result[1] += 1717986;
            result[2] += 0;
            result[3] += 1717986;
            result[4] += 4008636;
            result[5] += 1717986;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 904203;
            result[1] += 180840;
            result[2] += 45210;
            result[3] += 2803031;
            result[4] += 1989248;
            result[5] += 37027139;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 913822;
            result[3] += 23393864;
            result[4] += 182764;
            result[5] += 18459221;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x421e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4118461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38242859;
            result[5] += 588351;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 33746171;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9203501;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 22770731;
            result[1] += 3517430;
            result[2] += 555383;
            result[3] += 2406662;
            result[4] += 10552290;
            result[5] += 3147174;
          } else {
            result[0] += 40022279;
            result[1] += 174769;
            result[2] += 524309;
            result[3] += 524309;
            result[4] += 1092311;
            result[5] += 611694;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1014559;
            result[1] += 507279;
            result[2] += 13696549;
            result[3] += 15218388;
            result[4] += 2874584;
            result[5] += 9638312;
          } else {
            result[0] += 30678337;
            result[1] += 2359872;
            result[2] += 2359872;
            result[3] += 0;
            result[4] += 7551590;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5095723;
            result[3] += 2183881;
            result[4] += 7279605;
            result[5] += 28390461;
          } else {
            result[0] += 4772185;
            result[1] += 17895697;
            result[2] += 4772185;
            result[3] += 1193046;
            result[4] += 14316557;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6607641;
            result[4] += 9911462;
            result[5] += 26430567;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 35075566;
            result[4] += 0;
            result[5] += 3579139;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41040798;
            result[3] += 954437;
            result[4] += 0;
            result[5] += 954437;
          } else {
            result[0] += 42949672;
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
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29020049;
            result[3] += 12768821;
            result[4] += 0;
            result[5] += 1160801;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 27331610;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 780903;
            result[1] += 0;
            result[2] += 35661243;
            result[3] += 5336171;
            result[4] += 130150;
            result[5] += 1041204;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40073578;
            result[3] += 2876094;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42805546;
            result[3] += 144126;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 10737418;
          } else {
            result[0] += 38759460;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1047552;
            result[5] += 3142658;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 3904515;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 39045157;
          } else {
            result[0] += 0;
            result[1] += 1952257;
            result[2] += 0;
            result[3] += 976128;
            result[4] += 33188383;
            result[5] += 6832902;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3067833;
            result[4] += 33746171;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51436;
            result[3] += 1594538;
            result[4] += 1285918;
            result[5] += 40017779;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 2045222;
            result[2] += 3408704;
            result[3] += 15339168;
            result[4] += 3749574;
            result[5] += 18407002;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2526451;
            result[5] += 40423221;
          } else {
            result[0] += 523776;
            result[1] += 0;
            result[2] += 1047552;
            result[3] += 34045472;
            result[4] += 523776;
            result[5] += 6809094;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 3361278;
            result[1] += 5228655;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 0;
          } else {
            result[0] += 22179537;
            result[1] += 1186864;
            result[2] += 1409402;
            result[3] += 5266712;
            result[4] += 3783131;
            result[5] += 9124023;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 37450925;
            result[1] += 445844;
            result[2] += 1287994;
            result[3] += 594459;
            result[4] += 2922757;
            result[5] += 247691;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 223696;
            result[1] += 894784;
            result[2] += 9618937;
            result[3] += 25725064;
            result[4] += 223696;
            result[5] += 6263493;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 16106127;
            result[1] += 12079595;
            result[2] += 4026531;
            result[3] += 5368709;
            result[4] += 2684354;
            result[5] += 2684354;
          } else {
            result[0] += 1867377;
            result[1] += 0;
            result[2] += 41082295;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 24542670;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 41756626;
            result[1] += 0;
            result[2] += 1193046;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12469259;
            result[3] += 11083786;
            result[4] += 0;
            result[5] += 19396626;
          } else {
            result[0] += 433348;
            result[1] += 144449;
            result[2] += 38856935;
            result[3] += 3226040;
            result[4] += 0;
            result[5] += 288899;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 202592;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42341894;
            result[5] += 405185;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 14316557;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 102018;
            result[1] += 102018;
            result[2] += 0;
            result[3] += 1020182;
            result[4] += 2142382;
            result[5] += 39583071;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 1244918;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5602131;
            result[4] += 0;
            result[5] += 36102623;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 517465;
            result[3] += 31306689;
            result[4] += 0;
            result[5] += 11125517;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1331772;
            result[1] += 3662375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37955524;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 23427094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19522578;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 27950073;
            result[1] += 1721265;
            result[2] += 0;
            result[3] += 2458950;
            result[4] += 8360432;
            result[5] += 2458950;
          } else {
            result[0] += 41778878;
            result[1] += 123241;
            result[2] += 61620;
            result[3] += 246483;
            result[4] += 739449;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 1861595;
            result[1] += 797826;
            result[2] += 5717758;
            result[3] += 19147841;
            result[4] += 2659422;
            result[5] += 12765227;
          } else {
            result[0] += 22548578;
            result[1] += 0;
            result[2] += 17537783;
            result[3] += 1073741;
            result[4] += 0;
            result[5] += 1789569;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2202547;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40747125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 17179869;
            result[4] += 8589934;
            result[5] += 12884901;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 4026531;
            result[2] += 8053063;
            result[3] += 8053063;
            result[4] += 5368709;
            result[5] += 17448304;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2863311;
            result[3] += 29587552;
            result[4] += 0;
            result[5] += 10498808;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 1543102;
            result[1] += 1543102;
            result[2] += 26489918;
            result[3] += 9515795;
            result[4] += 2057469;
            result[5] += 1800285;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13015052;
            result[3] += 29934620;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28908433;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 5781686;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39716901;
            result[3] += 3232771;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4955731;
            result[1] += 0;
            result[2] += 28082478;
            result[3] += 9911462;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 2550136;
            result[4] += 0;
            result[5] += 134217;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42810225;
            result[3] += 139446;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 178956;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42412802;
            result[5] += 357913;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 30678337;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 148272;
            result[2] += 0;
            result[3] += 1482727;
            result[4] += 2372363;
            result[5] += 38946308;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 3720050;
            result[1] += 2029118;
            result[2] += 676372;
            result[3] += 10145592;
            result[4] += 1690932;
            result[5] += 24687607;
          } else {
            result[0] += 1278264;
            result[1] += 766958;
            result[2] += 2300875;
            result[3] += 28633115;
            result[4] += 1022611;
            result[5] += 8947848;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42644343;
            result[2] += 0;
            result[3] += 0;
            result[4] += 305329;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 3398894;
            result[1] += 8342742;
            result[2] += 0;
            result[3] += 308990;
            result[4] += 30590054;
            result[5] += 308990;
          } else {
            result[0] += 37107651;
            result[1] += 901546;
            result[2] += 36061;
            result[3] += 685175;
            result[4] += 3317690;
            result[5] += 901546;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 972445;
            result[1] += 0;
            result[2] += 3241484;
            result[3] += 15072904;
            result[4] += 1134519;
            result[5] += 22528319;
          } else {
            result[0] += 11542724;
            result[1] += 0;
            result[2] += 20132659;
            result[3] += 6710886;
            result[4] += 4026531;
            result[5] += 536870;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 18407002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 998829;
            result[3] += 0;
            result[4] += 4994148;
            result[5] += 36956695;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1301505;
            result[1] += 6507526;
            result[2] += 0;
            result[3] += 5206020;
            result[4] += 7809031;
            result[5] += 22125589;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16421933;
            result[3] += 21474836;
            result[4] += 252645;
            result[5] += 4800257;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36022306;
            result[3] += 5541893;
            result[4] += 0;
            result[5] += 1385473;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 19088743;
            result[3] += 19088743;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1160801;
            result[1] += 0;
            result[2] += 41788870;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 37223049;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1301505;
            result[1] += 0;
            result[2] += 32103795;
            result[3] += 8242866;
            result[4] += 0;
            result[5] += 1301505;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39573126;
            result[3] += 3376546;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 491415;
            result[1] += 0;
            result[2] += 41868559;
            result[3] += 589698;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 1051828;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41196625;
            result[5] += 701219;
          } else {
            result[0] += 2526451;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2526451;
            result[4] += 10105805;
            result[5] += 27790964;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 21769012;
            result[1] += 1765055;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12355385;
            result[5] += 7060220;
          } else {
            result[0] += 0;
            result[1] += 102018;
            result[2] += 0;
            result[3] += 1428255;
            result[4] += 1581282;
            result[5] += 39838117;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1574071;
            result[3] += 19113728;
            result[4] += 2473541;
            result[5] += 19788330;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40563580;
            result[4] += 0;
            result[5] += 2386092;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 1047552;
            result[1] += 523776;
            result[2] += 0;
            result[3] += 3666435;
            result[4] += 37711907;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 24542670;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 1227133;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2801065;
            result[1] += 20541147;
            result[2] += 0;
            result[3] += 466844;
            result[4] += 18673770;
            result[5] += 466844;
          } else {
            result[0] += 37293598;
            result[1] += 291926;
            result[2] += 72981;
            result[3] += 802797;
            result[4] += 2809791;
            result[5] += 1678576;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 842150;
            result[1] += 631612;
            result[2] += 4000214;
            result[3] += 17474621;
            result[4] += 0;
            result[5] += 20001073;
          } else {
            result[0] += 16881952;
            result[1] += 248264;
            result[2] += 14151048;
            result[3] += 5710072;
            result[4] += 4717016;
            result[5] += 1241320;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7579354;
            result[4] += 10105805;
            result[5] += 25264513;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4713988;
            result[3] += 31426589;
            result[4] += 0;
            result[5] += 6809094;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 2321603;
            result[1] += 0;
            result[2] += 23796440;
            result[3] += 4062806;
            result[4] += 2902004;
            result[5] += 9866816;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 6607641;
            result[4] += 0;
            result[5] += 33038209;
          } else {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 4772185;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 16919568;
            result[4] += 0;
            result[5] += 2603010;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 436776;
            result[1] += 0;
            result[2] += 36252435;
            result[3] += 5969276;
            result[4] += 0;
            result[5] += 291184;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40495405;
            result[3] += 1227133;
            result[4] += 0;
            result[5] += 1227133;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27859247;
            result[3] += 15090425;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39419562;
            result[3] += 3530110;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 102018;
            result[1] += 0;
            result[2] += 42847654;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42339014;
            result[5] += 610658;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 2260509;
            result[2] += 0;
            result[3] += 13563054;
            result[4] += 18084072;
            result[5] += 9042036;
          } else {
            result[0] += 0;
            result[1] += 35140641;
            result[2] += 0;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 3904515;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 34087042;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8862630;
            result[5] += 0;
          } else {
            result[0] += 187144;
            result[1] += 187144;
            result[2] += 187144;
            result[3] += 2105376;
            result[4] += 2105376;
            result[5] += 38177487;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 344977;
            result[1] += 0;
            result[2] += 0;
            result[3] += 27253206;
            result[4] += 689954;
            result[5] += 14661534;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8785160;
            result[3] += 3904515;
            result[4] += 3904515;
            result[5] += 26355481;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 2526451;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40423221;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 38177487;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 27061101;
            result[1] += 2975598;
            result[2] += 112286;
            result[3] += 898293;
            result[4] += 10779525;
            result[5] += 1122867;
          } else {
            result[0] += 2229627;
            result[1] += 821441;
            result[2] += 14316557;
            result[3] += 12673673;
            result[4] += 821441;
            result[5] += 12086929;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 40870306;
            result[1] += 215106;
            result[2] += 573618;
            result[3] += 0;
            result[4] += 1290641;
            result[5] += 0;
          } else {
            result[0] += 9663676;
            result[1] += 0;
            result[2] += 33285996;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2045222;
            result[4] += 2045222;
            result[5] += 38859227;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8735526;
            result[3] += 29846382;
            result[4] += 0;
            result[5] += 4367763;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28390461;
            result[3] += 9463487;
            result[4] += 0;
            result[5] += 5095723;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 0;
            result[4] += 6607641;
            result[5] += 29734388;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 0;
            result[4] += 3067833;
            result[5] += 15339168;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33214413;
            result[3] += 9735259;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 113773;
            result[1] += 0;
            result[2] += 40844854;
            result[3] += 1991044;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 295186;
            result[1] += 885560;
            result[2] += 0;
            result[3] += 295186;
            result[4] += 40440585;
            result[5] += 1033153;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18948385;
            result[5] += 24001287;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1085806;
            result[4] += 603225;
            result[5] += 41260640;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 30954719;
            result[1] += 386933;
            result[2] += 0;
            result[3] += 193466;
            result[4] += 7932146;
            result[5] += 3482405;
          } else {
            result[0] += 959769;
            result[1] += 239942;
            result[2] += 79980;
            result[3] += 16875942;
            result[4] += 2959288;
            result[5] += 21834749;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 10737418;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 933688;
            result[1] += 6535819;
            result[2] += 3734754;
            result[3] += 1867377;
            result[4] += 28010656;
            result[5] += 1867377;
          } else {
            result[0] += 0;
            result[1] += 36342030;
            result[2] += 0;
            result[3] += 6607641;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 33864165;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9085507;
            result[5] += 0;
          } else {
            result[0] += 39395512;
            result[1] += 256927;
            result[2] += 0;
            result[3] += 856424;
            result[4] += 1627205;
            result[5] += 813602;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 352046;
            result[2] += 2112278;
            result[3] += 26403487;
            result[4] += 0;
            result[5] += 14081859;
          } else {
            result[0] += 13230033;
            result[1] += 0;
            result[2] += 20132659;
            result[3] += 3643052;
            result[4] += 3643052;
            result[5] += 2300875;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 10737418;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3579139;
            result[5] += 0;
          } else {
            result[0] += 1047552;
            result[1] += 1047552;
            result[2] += 1047552;
            result[3] += 4190211;
            result[4] += 8380423;
            result[5] += 27236377;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7545212;
            result[3] += 32502455;
            result[4] += 0;
            result[5] += 2902004;
          } else {
            result[0] += 2202547;
            result[1] += 0;
            result[2] += 22025473;
            result[3] += 7708915;
            result[4] += 0;
            result[5] += 11012736;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9203501;
            result[3] += 0;
            result[4] += 0;
            result[5] += 33746171;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 18790481;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 2684354;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19396626;
            result[3] += 18011153;
            result[4] += 0;
            result[5] += 5541893;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35991346;
            result[3] += 6478442;
            result[4] += 0;
            result[5] += 479884;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3067833;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 36814005;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38782913;
            result[3] += 4166759;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42236815;
            result[3] += 712857;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x41f00000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 254140;
            result[1] += 0;
            result[2] += 127070;
            result[3] += 0;
            result[4] += 42187252;
            result[5] += 381210;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38506603;
            result[5] += 4443069;
          } else {
            result[0] += 46786;
            result[1] += 0;
            result[2] += 93572;
            result[3] += 2152162;
            result[4] += 1637514;
            result[5] += 39019637;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 39370533;
            result[4] += 0;
            result[5] += 3579139;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 2863311;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40086361;
            result[5] += 0;
          } else {
            result[0] += 36926243;
            result[1] += 392832;
            result[2] += 0;
            result[3] += 130944;
            result[4] += 4583044;
            result[5] += 916608;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42870000))) ) ) {
            result[0] += 2863311;
            result[1] += 4908534;
            result[2] += 818089;
            result[3] += 8998979;
            result[4] += 17997958;
            result[5] += 7362801;
          } else {
            result[0] += 340870;
            result[1] += 340870;
            result[2] += 2045222;
            result[3] += 21702083;
            result[4] += 795364;
            result[5] += 17725261;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2684354;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8053063;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 12469259;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30480413;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 41554555;
            result[1] += 0;
            result[2] += 149476;
            result[3] += 199302;
            result[4] += 1046337;
            result[5] += 0;
          } else {
            result[0] += 22576110;
            result[1] += 2202547;
            result[2] += 550636;
            result[3] += 5506368;
            result[4] += 11012736;
            result[5] += 1101273;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 1130254;
            result[1] += 0;
            result[2] += 17707321;
            result[3] += 10172290;
            result[4] += 0;
            result[5] += 13939806;
          } else {
            result[0] += 29587552;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 954437;
            result[4] += 6681060;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 825955;
            result[2] += 18996970;
            result[3] += 17758037;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 25769803;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 39645851;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1439035;
            result[1] += 0;
            result[2] += 36750751;
            result[3] += 4317106;
            result[4] += 110695;
            result[5] += 332085;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41897844;
            result[3] += 876523;
            result[4] += 0;
            result[5] += 175304;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 1101273;
            result[2] += 0;
            result[3] += 1101273;
            result[4] += 29734388;
            result[5] += 11012736;
          } else {
            result[0] += 0;
            result[1] += 4772185;
            result[2] += 0;
            result[3] += 33405301;
            result[4] += 0;
            result[5] += 4772185;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34959036;
            result[5] += 7990636;
          } else {
            result[0] += 907723;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2340972;
            result[4] += 1098823;
            result[5] += 38602153;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 4908534;
            result[1] += 245426;
            result[2] += 1227133;
            result[3] += 6135667;
            result[4] += 2454267;
            result[5] += 27978644;
          } else {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 1431655;
            result[3] += 30064771;
            result[4] += 1193046;
            result[5] += 8828543;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424c0000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6607641;
            result[1] += 9250698;
            result[2] += 0;
            result[3] += 660764;
            result[4] += 26210313;
            result[5] += 220254;
          } else {
            result[0] += 37168668;
            result[1] += 390129;
            result[2] += 70932;
            result[3] += 1560516;
            result[4] += 2340774;
            result[5] += 1418651;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 163306;
            result[1] += 979840;
            result[2] += 6532269;
            result[3] += 22373023;
            result[4] += 4572588;
            result[5] += 8328643;
          } else {
            result[0] += 12813714;
            result[1] += 2610201;
            result[2] += 22068064;
            result[3] += 1423746;
            result[4] += 3084783;
            result[5] += 949164;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1481023;
            result[4] += 0;
            result[5] += 41468649;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 12884901;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15158708;
            result[3] += 0;
            result[4] += 5052902;
            result[5] += 22738062;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39881839;
            result[3] += 3067833;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
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
            result[5] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
            result[0] += 6135667;
            result[1] += 36814005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 360057;
            result[1] += 0;
            result[2] += 39554848;
            result[3] += 2674710;
            result[4] += 0;
            result[5] += 360057;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42713685;
            result[5] += 235987;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2260509;
            result[4] += 27126109;
            result[5] += 13563054;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 15032385;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2147483;
            result[4] += 18611524;
            result[5] += 7158278;
          } else {
            result[0] += 47510;
            result[1] += 142532;
            result[2] += 190042;
            result[3] += 1805406;
            result[4] += 1615363;
            result[5] += 39148816;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2202547;
            result[4] += 4405094;
            result[5] += 36342030;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 30567785;
            result[4] += 773867;
            result[5] += 11608019;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16106127;
            result[4] += 26843545;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 35586871;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7362801;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 3579139;
            result[1] += 5506368;
            result[2] += 0;
            result[3] += 275318;
            result[4] += 33588846;
            result[5] += 0;
          } else {
            result[0] += 36492204;
            result[1] += 638238;
            result[2] += 150173;
            result[3] += 1726997;
            result[4] += 2965930;
            result[5] += 976128;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 1561806;
            result[1] += 2498890;
            result[2] += 2811251;
            result[3] += 18897856;
            result[4] += 3748335;
            result[5] += 13431534;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 19165714;
            result[3] += 4387332;
            result[4] += 923648;
            result[5] += 4156419;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7051438;
            result[3] += 1923119;
            result[4] += 1923119;
            result[5] += 32051994;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10367162;
            result[3] += 24066627;
            result[4] += 370255;
            result[5] += 8145627;
          } else {
            result[0] += 565127;
            result[1] += 565127;
            result[2] += 31647127;
            result[3] += 9042036;
            result[4] += 0;
            result[5] += 1130254;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 0;
          } else {
            result[0] += 39513699;
            result[1] += 0;
            result[2] += 3435973;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 29826161;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 1342177;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 2684354;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 654055;
            result[1] += 0;
            result[2] += 36627132;
            result[3] += 5668484;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35577714;
            result[3] += 7371958;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42fd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42753555;
            result[3] += 196117;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 3400182;
            result[1] += 0;
            result[2] += 357913;
            result[3] += 0;
            result[4] += 37402006;
            result[5] += 1789569;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1193046;
            result[3] += 0;
            result[4] += 22667882;
            result[5] += 19088743;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 23939161;
            result[1] += 704092;
            result[2] += 0;
            result[3] += 11265487;
            result[4] += 3520464;
            result[5] += 3520464;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 0;
            result[4] += 38428654;
            result[5] += 2260509;
          } else {
            result[0] += 0;
            result[1] += 152664;
            result[2] += 50888;
            result[3] += 2391747;
            result[4] += 1526647;
            result[5] += 38827725;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 260301;
            result[1] += 1301505;
            result[2] += 0;
            result[3] += 10932644;
            result[4] += 4685418;
            result[5] += 25769803;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32467907;
            result[4] += 255652;
            result[5] += 10226112;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 2611804;
            result[1] += 1741202;
            result[2] += 580400;
            result[3] += 2611804;
            result[4] += 34243658;
            result[5] += 1160801;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42860000))) ) ) {
            result[0] += 105787;
            result[1] += 42420736;
            result[2] += 0;
            result[3] += 105787;
            result[4] += 317362;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 37757139;
            result[1] += 667611;
            result[2] += 259626;
            result[3] += 1372312;
            result[4] += 2373729;
            result[5] += 519253;
          } else {
            result[0] += 2112278;
            result[1] += 1408185;
            result[2] += 5632743;
            result[3] += 6336836;
            result[4] += 4928650;
            result[5] += 22530975;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 199765;
            result[1] += 2397191;
            result[2] += 13584082;
            result[3] += 14383146;
            result[4] += 799063;
            result[5] += 11586423;
          } else {
            result[0] += 29693601;
            result[1] += 0;
            result[2] += 6362914;
            result[3] += 2120971;
            result[4] += 2651214;
            result[5] += 2120971;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 0;
            result[4] += 27331610;
            result[5] += 11713547;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 5368709;
            result[4] += 2684354;
            result[5] += 24159191;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6727057;
            result[3] += 29495558;
            result[4] += 1034931;
            result[5] += 5692125;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d70000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35450523;
            result[3] += 6817408;
            result[4] += 0;
            result[5] += 681740;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 9286415;
            result[1] += 1160801;
            result[2] += 30180851;
            result[3] += 2321603;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 37223049;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37896770;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 399903;
            result[1] += 0;
            result[2] += 41270076;
            result[3] += 1279692;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41065915;
            result[5] += 1883757;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
            result[0] += 704092;
            result[1] += 2112278;
            result[2] += 0;
            result[3] += 3520464;
            result[4] += 25347347;
            result[5] += 11265487;
          } else {
            result[0] += 2129735;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2174105;
            result[4] += 1286715;
            result[5] += 37359116;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 998829;
            result[1] += 2996488;
            result[2] += 0;
            result[3] += 1997659;
            result[4] += 3995318;
            result[5] += 32961376;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32147958;
            result[4] += 0;
            result[5] += 10801714;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 6259871;
            result[1] += 11128660;
            result[2] += 1043311;
            result[3] += 521655;
            result[4] += 22083435;
            result[5] += 1912738;
          } else {
            result[0] += 36405677;
            result[1] += 639355;
            result[2] += 451310;
            result[3] += 1316320;
            result[4] += 2933515;
            result[5] += 1203493;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 530242;
            result[1] += 662803;
            result[2] += 15111921;
            result[3] += 15907286;
            result[4] += 1458167;
            result[5] += 9279250;
          } else {
            result[0] += 31675383;
            result[1] += 0;
            result[2] += 3758096;
            result[3] += 0;
            result[4] += 6442450;
            result[5] += 1073741;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 38347922;
            result[2] += 0;
            result[3] += 4601750;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
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
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1047552;
            result[3] += 1047552;
            result[4] += 0;
            result[5] += 40854566;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 17179869;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 6012954;
            result[2] += 12884901;
            result[3] += 22333829;
            result[4] += 0;
            result[5] += 1717986;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39159995;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3789677;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32743810;
            result[3] += 10205862;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 40997415;
            result[1] += 0;
            result[2] += 1952257;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 833974;
            result[1] += 0;
            result[2] += 37320346;
            result[3] += 4795351;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35957865;
            result[3] += 6991807;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41966669;
            result[3] += 983003;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 169093;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42611486;
            result[5] += 169093;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 4294967;
            result[4] += 12884901;
            result[5] += 21474836;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 28944344;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10270573;
            result[5] += 3734754;
          } else {
            result[0] += 0;
            result[1] += 315144;
            result[2] += 360164;
            result[3] += 2476134;
            result[4] += 1665762;
            result[5] += 38132466;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 3232771;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9698313;
            result[4] += 2770946;
            result[5] += 27247641;
          } else {
            result[0] += 1466574;
            result[1] += 838042;
            result[2] += 1885595;
            result[3] += 27445888;
            result[4] += 1257063;
            result[5] += 10056508;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 105268;
            result[1] += 42107522;
            result[2] += 0;
            result[3] += 105268;
            result[4] += 526344;
            result[5] += 105268;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 1952257;
            result[1] += 17570320;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19522578;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 4398460;
            result[1] += 9055653;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29236825;
            result[5] += 258732;
          } else {
            result[0] += 38199297;
            result[1] += 588889;
            result[2] += 117777;
            result[3] += 1099260;
            result[4] += 2120002;
            result[5] += 824445;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 641039;
            result[1] += 1762859;
            result[2] += 2564159;
            result[3] += 16987557;
            result[4] += 5288579;
            result[5] += 15705477;
          } else {
            result[0] += 18596765;
            result[1] += 0;
            result[2] += 20589276;
            result[3] += 2435290;
            result[4] += 221390;
            result[5] += 1106950;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42900000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 1160801;
            result[1] += 1160801;
            result[2] += 0;
            result[3] += 3482405;
            result[4] += 3482405;
            result[5] += 33663257;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 33038209;
            result[4] += 0;
            result[5] += 3303820;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9042036;
            result[3] += 24865600;
            result[4] += 0;
            result[5] += 9042036;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33154133;
            result[3] += 7535030;
            result[4] += 0;
            result[5] += 2260509;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42fc0000))) ) ) {
            result[0] += 596523;
            result[1] += 0;
            result[2] += 34001824;
            result[3] += 7357119;
            result[4] += 0;
            result[5] += 994205;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 715827;
            result[1] += 0;
            result[2] += 36865135;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41925185;
            result[3] += 1024487;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c80000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 174592;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42076712;
            result[5] += 698368;
          } else {
            result[0] += 0;
            result[1] += 3904515;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31236125;
            result[5] += 7809031;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 620008;
            result[4] += 1296381;
            result[5] += 41033283;
          } else {
            result[0] += 15920999;
            result[1] += 2221534;
            result[2] += 0;
            result[3] += 4072813;
            result[4] += 11107674;
            result[5] += 9626650;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 302462;
            result[1] += 302462;
            result[2] += 907387;
            result[3] += 9678799;
            result[4] += 3629549;
            result[5] += 28129011;
          } else {
            result[0] += 784468;
            result[1] += 0;
            result[2] += 1961172;
            result[3] += 30005935;
            result[4] += 0;
            result[5] += 10198095;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 2991519;
            result[1] += 1709439;
            result[2] += 1495759;
            result[3] += 5128319;
            result[4] += 9188238;
            result[5] += 22436396;
          } else {
            result[0] += 35335709;
            result[1] += 1003658;
            result[2] += 276871;
            result[3] += 1142094;
            result[4] += 4602986;
            result[5] += 588351;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 1325607;
            result[1] += 662803;
            result[2] += 11797903;
            result[3] += 16039846;
            result[4] += 2386092;
            result[5] += 10737418;
          } else {
            result[0] += 29306835;
            result[1] += 0;
            result[2] += 5558192;
            result[3] += 0;
            result[4] += 8084644;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 681740;
            result[1] += 2045222;
            result[2] += 5453926;
            result[3] += 27269633;
            result[4] += 1363481;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 0;
            result[4] += 0;
            result[5] += 27331610;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18897856;
            result[3] += 24051816;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 753503;
            result[1] += 0;
            result[2] += 41442666;
            result[3] += 753503;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 4026531;
            result[2] += 4026531;
            result[3] += 4026531;
            result[4] += 8053063;
            result[5] += 22817013;
          } else {
            result[0] += 6607641;
            result[1] += 0;
            result[2] += 36342030;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36628076;
            result[3] += 6321596;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25053975;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 311229;
            result[1] += 0;
            result[2] += 41160103;
            result[3] += 1400532;
            result[4] += 0;
            result[5] += 77807;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 211574;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42526523;
            result[5] += 211574;
          } else {
            result[0] += 1073741;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 9663676;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
            result[0] += 25769803;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1717986;
            result[4] += 15461882;
            result[5] += 0;
          } else {
            result[0] += 227547;
            result[1] += 0;
            result[2] += 56886;
            result[3] += 1023965;
            result[4] += 1706609;
            result[5] += 39934662;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 3904515;
            result[1] += 836681;
            result[2] += 139446;
            result[3] += 8366819;
            result[4] += 2928386;
            result[5] += 26773822;
          } else {
            result[0] += 913822;
            result[1] += 0;
            result[2] += 2969924;
            result[3] += 27186229;
            result[4] += 1142278;
            result[5] += 10737418;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 373475;
            result[1] += 746950;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41082295;
            result[5] += 746950;
          } else {
            result[0] += 0;
            result[1] += 40086361;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2863311;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 42758360;
            result[2] += 0;
            result[3] += 0;
            result[4] += 191312;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 14763950;
            result[1] += 0;
            result[2] += 1342177;
            result[3] += 5368709;
            result[4] += 12079595;
            result[5] += 9395240;
          } else {
            result[0] += 38992348;
            result[1] += 471974;
            result[2] += 181528;
            result[3] += 1052866;
            result[4] += 1887897;
            result[5] += 363057;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 802797;
            result[1] += 1605595;
            result[2] += 2006994;
            result[3] += 24485327;
            result[4] += 1204196;
            result[5] += 12844762;
          } else {
            result[0] += 10401873;
            result[1] += 1342177;
            result[2] += 21474836;
            result[3] += 2684354;
            result[4] += 3690987;
            result[5] += 3355443;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 9698313;
            result[2] += 1385473;
            result[3] += 0;
            result[4] += 22167573;
            result[5] += 9698313;
          } else {
            result[0] += 1717986;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1717986;
            result[5] += 39513699;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 37580963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4521018;
            result[3] += 30893624;
            result[4] += 753503;
            result[5] += 6781527;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1867377;
            result[3] += 41082295;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19327352;
            result[3] += 19327352;
            result[4] += 0;
            result[5] += 4294967;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 23427094;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36077725;
            result[3] += 6442450;
            result[4] += 0;
            result[5] += 429496;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 825955;
            result[1] += 825955;
            result[2] += 28908433;
            result[3] += 9085507;
            result[4] += 1651910;
            result[5] += 1651910;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 10105805;
            result[1] += 0;
            result[2] += 32843867;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 98508;
            result[1] += 0;
            result[2] += 38910827;
            result[3] += 3940336;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 699506;
            result[1] += 0;
            result[2] += 41830463;
            result[3] += 419703;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 131747;
            result[1] += 131747;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41632198;
            result[5] += 1053979;
          } else {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9544371;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 4994148;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23971910;
            result[5] += 13983614;
          } else {
            result[0] += 42395483;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 554189;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 913822;
            result[4] += 913822;
            result[5] += 41122027;
          } else {
            result[0] += 1436696;
            result[1] += 1587928;
            result[2] += 1436696;
            result[3] += 13459580;
            result[4] += 5141862;
            result[5] += 19886908;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 18790481;
            result[2] += 0;
            result[3] += 18790481;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x422e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1997659;
            result[1] += 3995318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36956695;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 40563580;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2386092;
            result[5] += 0;
          } else {
            result[0] += 1415923;
            result[1] += 1415923;
            result[2] += 471974;
            result[3] += 21710823;
            result[4] += 1415923;
            result[5] += 16519104;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 4382619;
            result[1] += 21036574;
            result[2] += 876523;
            result[3] += 0;
            result[4] += 14900906;
            result[5] += 1753047;
          } else {
            result[0] += 38082854;
            result[1] += 121670;
            result[2] += 1419488;
            result[3] += 1135590;
            result[4] += 1581716;
            result[5] += 608352;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 6607641;
            result[2] += 0;
            result[3] += 9911462;
            result[4] += 3303820;
            result[5] += 23126746;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 33064430;
            result[4] += 0;
            result[5] += 5794797;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1047552;
            result[3] += 1047552;
            result[4] += 2095105;
            result[5] += 38759460;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 4772185;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30835662;
            result[3] += 5506368;
            result[4] += 0;
            result[5] += 6607641;
          } else {
            result[0] += 0;
            result[1] += 25264513;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17685159;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ff0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 303889;
            result[1] += 0;
            result[2] += 34136886;
            result[3] += 7394637;
            result[4] += 101296;
            result[5] += 1012963;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 557787;
            result[1] += 0;
            result[2] += 35698429;
            result[3] += 5577879;
            result[4] += 0;
            result[5] += 1115575;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 12632256;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42756640;
            result[3] += 193032;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 210537;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42739135;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2863311;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 10498808;
            result[5] += 20043180;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3734754;
            result[3] += 0;
            result[4] += 35480164;
            result[5] += 3734754;
          } else {
            result[0] += 56364;
            result[1] += 0;
            result[2] += 169093;
            result[3] += 901830;
            result[4] += 1070923;
            result[5] += 40751461;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 35921544;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7028128;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 278893;
            result[2] += 557787;
            result[3] += 17663285;
            result[4] += 2974869;
            result[5] += 21474836;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42753106;
            result[2] += 0;
            result[3] += 0;
            result[4] += 196566;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 1651910;
            result[1] += 7708915;
            result[2] += 0;
            result[3] += 275318;
            result[4] += 33313528;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 27261469;
            result[1] += 257183;
            result[2] += 257183;
            result[3] += 1800285;
            result[4] += 10030163;
            result[5] += 3343387;
          } else {
            result[0] += 39719717;
            result[1] += 436480;
            result[2] += 43648;
            result[3] += 523776;
            result[4] += 2007809;
            result[5] += 218240;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 162688;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 16756879;
            result[4] += 2114946;
            result[5] += 14967310;
          } else {
            result[0] += 22511552;
            result[1] += 1184818;
            result[2] += 7405116;
            result[3] += 2962046;
            result[4] += 5627888;
            result[5] += 3258251;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5223608;
            result[3] += 33082856;
            result[4] += 0;
            result[5] += 4643207;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24159191;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 18790481;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 1263225;
            result[1] += 0;
            result[2] += 35370318;
            result[3] += 6316128;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 856546;
            result[1] += 0;
            result[2] += 35974939;
            result[3] += 5751095;
            result[4] += 0;
            result[5] += 367091;
          } else {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42dc0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37993941;
            result[3] += 4955731;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42394289;
            result[3] += 555383;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42860000))) ) ) {
            result[0] += 371858;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41834097;
            result[5] += 743717;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 25769803;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 28966058;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11985955;
            result[5] += 1997659;
          } else {
            result[0] += 146419;
            result[1] += 0;
            result[2] += 97612;
            result[3] += 2489128;
            result[4] += 1317774;
            result[5] += 38898737;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 4045983;
            result[1] += 4357213;
            result[2] += 0;
            result[3] += 5602131;
            result[4] += 4357213;
            result[5] += 24587131;
          } else {
            result[0] += 1124336;
            result[1] += 0;
            result[2] += 1798939;
            result[3] += 25634883;
            result[4] += 2023806;
            result[5] += 12367706;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 6871947;
            result[1] += 2454267;
            result[2] += 0;
            result[3] += 7853654;
            result[4] += 15461882;
            result[5] += 10307921;
          } else {
            result[0] += 35508754;
            result[1] += 1176703;
            result[2] += 242262;
            result[3] += 761396;
            result[4] += 4845249;
            result[5] += 415307;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 159072;
            result[1] += 1590728;
            result[2] += 13362120;
            result[3] += 13521193;
            result[4] += 2386092;
            result[5] += 11930464;
          } else {
            result[0] += 35921544;
            result[1] += 0;
            result[2] += 780903;
            result[3] += 0;
            result[4] += 6247225;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 1789569;
            result[4] += 1789569;
            result[5] += 34001824;
          } else {
            result[0] += 0;
            result[1] += 1022611;
            result[2] += 4090445;
            result[3] += 19429613;
            result[4] += 0;
            result[5] += 18407002;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 2013265;
            result[2] += 8724152;
            result[3] += 26172456;
            result[4] += 0;
            result[5] += 6039797;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36168145;
            result[3] += 6781527;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 7469508;
            result[1] += 9336885;
            result[2] += 5602131;
            result[3] += 0;
            result[4] += 5602131;
            result[5] += 14939016;
          } else {
            result[0] += 3067833;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39826060;
            result[3] += 2342709;
            result[4] += 0;
            result[5] += 780903;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33746171;
            result[3] += 8924607;
            result[4] += 0;
            result[5] += 278893;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 23860929;
            result[1] += 0;
            result[2] += 19088743;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37277074;
            result[3] += 4862227;
            result[4] += 0;
            result[5] += 810371;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1789569;
            result[1] += 0;
            result[2] += 39370533;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 114227;
            result[1] += 0;
            result[2] += 42606989;
            result[3] += 228455;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 211574;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42103373;
            result[5] += 634724;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 28633115;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42660000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 0;
            result[4] += 23775711;
            result[5] += 16489606;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 41772969;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1176703;
            result[5] += 0;
          } else {
            result[0] += 1952257;
            result[1] += 5856773;
            result[2] += 1952257;
            result[3] += 10737418;
            result[4] += 11713547;
            result[5] += 10737418;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 124132;
            result[2] += 186198;
            result[3] += 1055122;
            result[4] += 1117188;
            result[5] += 40467032;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31905471;
            result[5] += 11044201;
          } else {
            result[0] += 447392;
            result[1] += 0;
            result[2] += 223696;
            result[3] += 4250228;
            result[4] += 4697620;
            result[5] += 33330735;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 445074;
            result[1] += 1335222;
            result[2] += 1112685;
            result[3] += 11349395;
            result[4] += 5340891;
            result[5] += 23366402;
          } else {
            result[0] += 769247;
            result[1] += 0;
            result[2] += 3461615;
            result[3] += 25513387;
            result[4] += 641039;
            result[5] += 12564381;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 27042386;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15907286;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 681740;
            result[1] += 2045222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40222709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35140641;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7809031;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 11083786;
            result[1] += 0;
            result[2] += 2770946;
            result[3] += 2770946;
            result[4] += 23553046;
            result[5] += 2770946;
          } else {
            result[0] += 10737418;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 40821109;
            result[1] += 94602;
            result[2] += 0;
            result[3] += 473014;
            result[4] += 1466343;
            result[5] += 94602;
          } else {
            result[0] += 28362991;
            result[1] += 540247;
            result[2] += 5672598;
            result[3] += 4321979;
            result[4] += 2160989;
            result[5] += 1890866;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 1263225;
            result[1] += 0;
            result[2] += 5052902;
            result[3] += 21474836;
            result[4] += 1894838;
            result[5] += 13263869;
          } else {
            result[0] += 7669584;
            result[1] += 12271335;
            result[2] += 0;
            result[3] += 1533916;
            result[4] += 19940919;
            result[5] += 1533916;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 18871825;
            result[4] += 0;
            result[5] += 9761289;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41848399;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1101273;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 7809031;
            result[4] += 7809031;
            result[5] += 3904515;
          } else {
            result[0] += 42949672;
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
            result[2] += 31778905;
            result[3] += 10207769;
            result[4] += 0;
            result[5] += 962997;
          } else {
            result[0] += 181733;
            result[1] += 0;
            result[2] += 41071760;
            result[3] += 1696178;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42384545;
            result[5] += 565127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 36814005;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 336069;
            result[4] += 873780;
            result[5] += 41739823;
          } else {
            result[0] += 0;
            result[1] += 357913;
            result[2] += 0;
            result[3] += 11811160;
            result[4] += 2147483;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1263225;
            result[1] += 1263225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 2842257;
          } else {
            result[0] += 0;
            result[1] += 34768782;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8180890;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42580000))) ) ) {
            result[0] += 40086361;
            result[1] += 2863311;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1175239;
            result[1] += 106839;
            result[2] += 4273599;
            result[3] += 15171277;
            result[4] += 2670999;
            result[5] += 19551716;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3303820;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39645851;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 8589934;
            result[1] += 12884901;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 788067;
            result[1] += 788067;
            result[2] += 394033;
            result[3] += 2758235;
            result[4] += 37827234;
            result[5] += 394033;
          } else {
            result[0] += 1328340;
            result[1] += 35865190;
            result[2] += 0;
            result[3] += 4427801;
            result[4] += 1328340;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 36740494;
            result[1] += 102914;
            result[2] += 34304;
            result[3] += 1166364;
            result[4] += 2607168;
            result[5] += 2298424;
          } else {
            result[0] += 5284383;
            result[1] += 112433;
            result[2] += 8657394;
            result[3] += 14166646;
            result[4] += 2810842;
            result[5] += 11917972;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7405116;
            result[4] += 0;
            result[5] += 35544556;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40086361;
            result[4] += 0;
            result[5] += 2863311;
          } else {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 12271335;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 10226112;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 15618062;
            result[2] += 3904515;
            result[3] += 23427094;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1753047;
            result[1] += 0;
            result[2] += 35937481;
            result[3] += 876523;
            result[4] += 0;
            result[5] += 4382619;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4090445;
            result[4] += 4090445;
            result[5] += 34768782;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 35140641;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 983580;
            result[1] += 0;
            result[2] += 29835268;
            result[3] += 10819383;
            result[4] += 0;
            result[5] += 1311440;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38331428;
            result[3] += 4156419;
            result[4] += 0;
            result[5] += 461824;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 459705;
            result[1] += 0;
            result[2] += 40979504;
            result[3] += 1510462;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 902304;
            result[2] += 180460;
            result[3] += 0;
            result[4] += 41145064;
            result[5] += 721843;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 37896770;
            result[2] += 0;
            result[3] += 2526451;
            result[4] += 2526451;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 55706;
            result[2] += 0;
            result[3] += 1225541;
            result[4] += 1559780;
            result[5] += 40108644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 2684354;
            result[4] += 4026531;
            result[5] += 14763950;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42980000))) ) ) {
            result[0] += 12786543;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1311440;
            result[4] += 17048725;
            result[5] += 11802963;
          } else {
            result[0] += 1163947;
            result[1] += 349184;
            result[2] += 2211500;
            result[3] += 18273980;
            result[4] += 1629526;
            result[5] += 19321533;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 14316557;
            result[5] += 3579139;
          } else {
            result[0] += 0;
            result[1] += 2045222;
            result[2] += 0;
            result[3] += 2045222;
            result[4] += 38859227;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 42843885;
            result[2] += 0;
            result[3] += 0;
            result[4] += 105787;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 6631934;
            result[1] += 8842579;
            result[2] += 947419;
            result[3] += 631612;
            result[4] += 25580319;
            result[5] += 315806;
          } else {
            result[0] += 38467328;
            result[1] += 624588;
            result[2] += 440886;
            result[3] += 955253;
            result[4] += 2094209;
            result[5] += 367405;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 224867;
            result[1] += 224867;
            result[2] += 2023806;
            result[3] += 13941778;
            result[4] += 3597878;
            result[5] += 22936474;
          } else {
            result[0] += 11089464;
            result[1] += 2464325;
            result[2] += 13201743;
            result[3] += 10561394;
            result[4] += 3520464;
            result[5] += 2112278;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2962046;
            result[3] += 34804045;
            result[4] += 0;
            result[5] += 5183581;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 1789569;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31745410;
            result[3] += 3734754;
            result[4] += 0;
            result[5] += 7469508;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33010905;
            result[3] += 9228855;
            result[4] += 0;
            result[5] += 709911;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 39045157;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9911462;
            result[3] += 33038209;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17685159;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38428654;
            result[3] += 4521018;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38252052;
            result[3] += 671088;
            result[4] += 0;
            result[5] += 4026531;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 766958;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 3834792;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 78662;
            result[1] += 0;
            result[2] += 42399036;
            result[3] += 471974;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42371874;
            result[5] += 577798;
          } else {
            result[0] += 0;
            result[1] += 1952257;
            result[2] += 0;
            result[3] += 7809031;
            result[4] += 11713547;
            result[5] += 21474836;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 225753;
            result[1] += 0;
            result[2] += 0;
            result[3] += 677261;
            result[4] += 2257538;
            result[5] += 39789118;
          } else {
            result[0] += 14867194;
            result[1] += 2753184;
            result[2] += 550636;
            result[3] += 7158278;
            result[4] += 550636;
            result[5] += 17069741;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 676372;
            result[1] += 0;
            result[2] += 2367304;
            result[3] += 6425541;
            result[4] += 4734609;
            result[5] += 28745844;
          } else {
            result[0] += 223696;
            result[1] += 0;
            result[2] += 4250228;
            result[3] += 25053975;
            result[4] += 0;
            result[5] += 13421772;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 7425878;
            result[1] += 1003497;
            result[2] += 602098;
            result[3] += 2006994;
            result[4] += 29101413;
            result[5] += 2809791;
          } else {
            result[0] += 0;
            result[1] += 36586758;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3181457;
            result[5] += 3181457;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 37220553;
            result[1] += 561678;
            result[2] += 149780;
            result[3] += 1348028;
            result[4] += 2359049;
            result[5] += 1310582;
          } else {
            result[0] += 10432570;
            result[1] += 1354879;
            result[2] += 6096956;
            result[3] += 11245497;
            result[4] += 4606589;
            result[5] += 9213179;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 278893;
            result[1] += 1115575;
            result[2] += 3625621;
            result[3] += 26216034;
            result[4] += 2231151;
            result[5] += 9482395;
          } else {
            result[0] += 0;
            result[1] += 1867377;
            result[2] += 29878033;
            result[3] += 3734754;
            result[4] += 1867377;
            result[5] += 5602131;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34139483;
            result[3] += 5506368;
            result[4] += 0;
            result[5] += 3303820;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 1193046;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35701915;
            result[3] += 6174015;
            result[4] += 0;
            result[5] += 1073741;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 349184;
            result[1] += 0;
            result[2] += 41552935;
            result[3] += 977716;
            result[4] += 0;
            result[5] += 69836;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 523776;
            result[1] += 174592;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41378343;
            result[5] += 872960;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 0;
          } else {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 23860929;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27610504;
            result[5] += 15339168;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 967879;
            result[4] += 786402;
            result[5] += 41195390;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 4942621;
            result[1] += 2897398;
            result[2] += 0;
            result[3] += 5624361;
            result[4] += 6306102;
            result[5] += 23179188;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2321603;
            result[3] += 30374318;
            result[4] += 193466;
            result[5] += 10060283;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2733161;
            result[1] += 12103998;
            result[2] += 0;
            result[3] += 390451;
            result[4] += 27722061;
            result[5] += 0;
          } else {
            result[0] += 36064326;
            result[1] += 893234;
            result[2] += 37218;
            result[3] += 1153760;
            result[4] += 3498500;
            result[5] += 1302633;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 237291;
            result[2] += 1898328;
            result[3] += 22779937;
            result[4] += 474582;
            result[5] += 17559534;
          } else {
            result[0] += 16106127;
            result[1] += 0;
            result[2] += 16273899;
            result[3] += 5200936;
            result[4] += 3355443;
            result[5] += 2013265;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29734388;
            result[5] += 13215283;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 27879612;
            result[4] += 0;
            result[5] += 12809551;
          } else {
            result[0] += 0;
            result[1] += 2045222;
            result[2] += 17384391;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 17384391;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19770484;
            result[3] += 10226112;
            result[4] += 1363481;
            result[5] += 11589594;
          } else {
            result[0] += 842150;
            result[1] += 0;
            result[2] += 36212469;
            result[3] += 5895053;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 388099;
            result[1] += 0;
            result[2] += 36740081;
            result[3] += 4269093;
            result[4] += 0;
            result[5] += 1552397;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42182714;
            result[3] += 766958;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 201641;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42748031;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 12271335;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 42005724;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 943948;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5206020;
            result[5] += 37743651;
          } else {
            result[0] += 2684354;
            result[1] += 6710886;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 21474836;
            result[5] += 1342177;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 3390763;
            result[1] += 2260509;
            result[2] += 0;
            result[3] += 2260509;
            result[4] += 13563054;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 56290;
            result[2] += 56290;
            result[3] += 1182101;
            result[4] += 1463553;
            result[5] += 40191437;
          } else {
            result[0] += 4772185;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 16702650;
            result[5] += 4772185;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 383479;
            result[2] += 766958;
            result[3] += 6902626;
            result[4] += 0;
            result[5] += 34896609;
          } else {
            result[0] += 376751;
            result[1] += 376751;
            result[2] += 1507006;
            result[3] += 20721333;
            result[4] += 0;
            result[5] += 19967830;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 526989;
            result[2] += 0;
            result[3] += 36889289;
            result[4] += 0;
            result[5] += 5533393;
          } else {
            result[0] += 3390763;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 16953818;
            result[4] += 0;
            result[5] += 20344581;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 37223049;
            result[2] += 0;
            result[3] += 1908874;
            result[4] += 2863311;
            result[5] += 954437;
          } else {
            result[0] += 9089877;
            result[1] += 2045222;
            result[2] += 3408704;
            result[3] += 2499716;
            result[4] += 22951941;
            result[5] += 2954210;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
            result[0] += 38117834;
            result[1] += 613566;
            result[2] += 421827;
            result[3] += 690262;
            result[4] += 2300875;
            result[5] += 805306;
          } else {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 7717519;
            result[3] += 11408506;
            result[4] += 2013265;
            result[5] += 8388607;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7929170;
            result[3] += 29734388;
            result[4] += 0;
            result[5] += 5286113;
          } else {
            result[0] += 0;
            result[1] += 3734754;
            result[2] += 3734754;
            result[3] += 7469508;
            result[4] += 5602131;
            result[5] += 22408525;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 3181457;
            result[1] += 6362914;
            result[2] += 3181457;
            result[3] += 14316557;
            result[4] += 9544371;
            result[5] += 6362914;
          } else {
            result[0] += 482580;
            result[1] += 0;
            result[2] += 35228383;
            result[3] += 4343225;
            result[4] += 0;
            result[5] += 2895483;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 24275902;
            result[1] += 9336885;
            result[2] += 5602131;
            result[3] += 0;
            result[4] += 1867377;
            result[5] += 1867377;
          } else {
            result[0] += 980586;
            result[1] += 0;
            result[2] += 34320514;
            result[3] += 6471868;
            result[4] += 0;
            result[5] += 1176703;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37743651;
            result[3] += 5206020;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42366645;
            result[3] += 583027;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 399531;
            result[4] += 42550141;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42890000))) ) ) {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34001824;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17179869;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 125952;
            result[2] += 0;
            result[3] += 692736;
            result[4] += 1259521;
            result[5] += 40871462;
          } else {
            result[0] += 2779096;
            result[1] += 757935;
            result[2] += 0;
            result[3] += 5052902;
            result[4] += 7831999;
            result[5] += 26527739;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6442450;
            result[4] += 0;
            result[5] += 36507222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1282079;
            result[3] += 33334074;
            result[4] += 0;
            result[5] += 8333518;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 17464169;
            result[1] += 1421502;
            result[2] += 1319966;
            result[3] += 4162970;
            result[4] += 13301198;
            result[5] += 5279865;
          } else {
            result[0] += 36996252;
            result[1] += 1391708;
            result[2] += 579878;
            result[3] += 773171;
            result[4] += 3054027;
            result[5] += 154634;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1414510;
            result[1] += 514367;
            result[2] += 7586918;
            result[3] += 20188918;
            result[4] += 257183;
            result[5] += 12987775;
          } else {
            result[0] += 25379352;
            result[1] += 0;
            result[2] += 10086665;
            result[3] += 1626881;
            result[4] += 5531397;
            result[5] += 325376;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1385473;
            result[3] += 1385473;
            result[4] += 0;
            result[5] += 40178726;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 550636;
            result[2] += 7158278;
            result[3] += 23126746;
            result[4] += 0;
            result[5] += 12114010;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30851173;
            result[3] += 10888649;
            result[4] += 0;
            result[5] += 1209849;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d70000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 39881839;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13215283;
            result[3] += 23126746;
            result[4] += 0;
            result[5] += 6607641;
          } else {
            result[0] += 1481023;
            result[1] += 0;
            result[2] += 36840452;
            result[3] += 4443069;
            result[4] += 0;
            result[5] += 185127;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36238786;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41817125;
            result[3] += 1132547;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41661182;
            result[5] += 1288490;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9761289;
            result[4] += 29283867;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8053063;
            result[5] += 34896609;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 63535;
            result[2] += 0;
            result[3] += 1143630;
            result[4] += 889490;
            result[5] += 40853017;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 18596765;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19039545;
            result[5] += 5313361;
          } else {
            result[0] += 0;
            result[1] += 258214;
            result[2] += 860714;
            result[3] += 17558583;
            result[4] += 1635358;
            result[5] += 22636801;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42854016;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95656;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
            result[0] += 4468752;
            result[1] += 13406256;
            result[2] += 496528;
            result[3] += 993056;
            result[4] += 21598968;
            result[5] += 1986112;
          } else {
            result[0] += 36848867;
            result[1] += 313755;
            result[2] += 488064;
            result[3] += 1464193;
            result[4] += 2928386;
            result[5] += 906405;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 163306;
            result[1] += 1143147;
            result[2] += 3756055;
            result[3] += 19760115;
            result[4] += 5225815;
            result[5] += 12901232;
          } else {
            result[0] += 10216184;
            result[1] += 208493;
            result[2] += 19598394;
            result[3] += 5003845;
            result[4] += 3335896;
            result[5] += 4586858;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 41082295;
            result[4] += 0;
            result[5] += 1867377;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35140641;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29163358;
            result[3] += 13256071;
            result[4] += 0;
            result[5] += 530242;
          } else {
            result[0] += 496528;
            result[1] += 0;
            result[2] += 38480920;
            result[3] += 3972224;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 1034931;
            result[1] += 0;
            result[2] += 38809945;
            result[3] += 3104795;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 245426;
            result[1] += 0;
            result[2] += 41886157;
            result[3] += 818089;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42940000))) ) ) {
            result[0] += 223696;
            result[1] += 223696;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42054888;
            result[5] += 447392;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17685159;
            result[4] += 0;
            result[5] += 25264513;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 5368709;
          } else {
            result[0] += 66588;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1198595;
            result[4] += 865652;
            result[5] += 40818836;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 36268612;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6681060;
            result[5] += 0;
          } else {
            result[0] += 256161;
            result[1] += 768483;
            result[2] += 1451579;
            result[3] += 13149601;
            result[4] += 3415480;
            result[5] += 23908366;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 39045157;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3904515;
            result[5] += 0;
          } else {
            result[0] += 425244;
            result[1] += 425244;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41248695;
            result[5] += 850488;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 42851614;
            result[2] += 0;
            result[3] += 0;
            result[4] += 98058;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 30064771;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11811160;
            result[5] += 1073741;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 21641308;
            result[1] += 166471;
            result[2] += 0;
            result[3] += 4328261;
            result[4] += 10820654;
            result[5] += 5992977;
          } else {
            result[0] += 39499900;
            result[1] += 431221;
            result[2] += 129366;
            result[3] += 733076;
            result[4] += 1768008;
            result[5] += 388099;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1244918;
            result[1] += 3423524;
            result[2] += 7158278;
            result[3] += 18673770;
            result[4] += 1244918;
            result[5] += 11204262;
          } else {
            result[0] += 23364622;
            result[1] += 343597;
            result[2] += 9964324;
            result[3] += 0;
            result[4] += 8246337;
            result[5] += 1030792;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 580400;
            result[2] += 580400;
            result[3] += 4062806;
            result[4] += 8125613;
            result[5] += 29600450;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 1789569;
            result[1] += 1789569;
            result[2] += 23264406;
            result[3] += 5368709;
            result[4] += 7158278;
            result[5] += 3579139;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5313361;
            result[3] += 34979630;
            result[4] += 0;
            result[5] += 2656680;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13958643;
            result[3] += 16106127;
            result[4] += 3221225;
            result[5] += 9663676;
          } else {
            result[0] += 1590728;
            result[1] += 0;
            result[2] += 33935544;
            result[3] += 5832671;
            result[4] += 0;
            result[5] += 1590728;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2863311;
            result[4] += 0;
            result[5] += 40086361;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23126746;
            result[3] += 16519104;
            result[4] += 0;
            result[5] += 3303820;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 384623;
            result[1] += 512831;
            result[2] += 34744362;
            result[3] += 6282190;
            result[4] += 0;
            result[5] += 1025663;
          } else {
            result[0] += 33907636;
            result[1] += 0;
            result[2] += 9042036;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 1073741;
            result[2] += 33285996;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41628144;
            result[3] += 1321528;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42520000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 290200;
            result[1] += 0;
            result[2] += 290200;
            result[3] += 0;
            result[4] += 38886866;
            result[5] += 3482405;
          } else {
            result[0] += 91188;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2826836;
            result[4] += 3419559;
            result[5] += 36612088;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 6607641;
            result[1] += 9911462;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26430567;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 39943195;
            result[1] += 858993;
            result[2] += 0;
            result[3] += 429496;
            result[4] += 1717986;
            result[5] += 0;
          } else {
            result[0] += 1533916;
            result[1] += 920350;
            result[2] += 0;
            result[3] += 11044201;
            result[4] += 9510284;
            result[5] += 19940919;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 41973544;
            result[2] += 0;
            result[3] += 0;
            result[4] += 976128;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3904515;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5602131;
            result[1] += 6535819;
            result[2] += 0;
            result[3] += 5602131;
            result[4] += 7469508;
            result[5] += 17740082;
          } else {
            result[0] += 37223049;
            result[1] += 725909;
            result[2] += 40328;
            result[3] += 887223;
            result[4] += 3710206;
            result[5] += 362954;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 265121;
            result[1] += 1060485;
            result[2] += 2120971;
            result[3] += 24258611;
            result[4] += 132560;
            result[5] += 15111921;
          } else {
            result[0] += 12901232;
            result[1] += 326613;
            result[2] += 15187526;
            result[3] += 6532269;
            result[4] += 3266134;
            result[5] += 4735895;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1789569;
            result[4] += 5368709;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1631000;
            result[1] += 2718333;
            result[2] += 5436667;
            result[3] += 28270670;
            result[4] += 543666;
            result[5] += 4349333;
          } else {
            result[0] += 780903;
            result[1] += 0;
            result[2] += 27331610;
            result[3] += 10151740;
            result[4] += 0;
            result[5] += 4685418;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27126109;
            result[3] += 15823563;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 617980;
            result[1] += 0;
            result[2] += 38314816;
            result[3] += 4016875;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38654705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 9544371;
          } else {
            result[0] += 1887897;
            result[1] += 471974;
            result[2] += 36342030;
            result[3] += 4247769;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40860229;
            result[3] += 2089443;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 18407002;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42990000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 788067;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41570555;
            result[5] += 591050;
          } else {
            result[0] += 20356355;
            result[1] += 2013265;
            result[2] += 0;
            result[3] += 2236962;
            result[4] += 11632203;
            result[5] += 6710886;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 361301;
            result[1] += 135487;
            result[2] += 0;
            result[3] += 3296872;
            result[4] += 3206547;
            result[5] += 35949463;
          } else {
            result[0] += 271833;
            result[1] += 135916;
            result[2] += 135916;
            result[3] += 27591087;
            result[4] += 271833;
            result[5] += 14543085;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
            result[0] += 3303820;
            result[1] += 37002795;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2643056;
            result[5] += 0;
          } else {
            result[0] += 5804009;
            result[1] += 3192205;
            result[2] += 0;
            result[3] += 290200;
            result[4] += 33082856;
            result[5] += 580400;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 20502391;
            result[1] += 729334;
            result[2] += 6320895;
            result[3] += 7698526;
            result[4] += 3160447;
            result[5] += 4538078;
          } else {
            result[0] += 37882576;
            result[1] += 96516;
            result[2] += 1882064;
            result[3] += 434322;
            result[4] += 2605935;
            result[5] += 48258;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2045222;
            result[3] += 4090445;
            result[4] += 0;
            result[5] += 36814005;
          } else {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 7158278;
            result[4] += 7158278;
            result[5] += 7158278;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40423221;
            result[4] += 0;
            result[5] += 2526451;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 1101273;
            result[2] += 14316557;
            result[3] += 22025473;
            result[4] += 0;
            result[5] += 5506368;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32582510;
            result[3] += 8392464;
            result[4] += 0;
            result[5] += 1974697;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e00000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1415923;
            result[1] += 0;
            result[2] += 30206363;
            result[3] += 7551590;
            result[4] += 0;
            result[5] += 3775795;
          } else {
            result[0] += 239942;
            result[1] += 0;
            result[2] += 40730206;
            result[3] += 1979524;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 193466;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42369271;
            result[5] += 386933;
          } else {
            result[0] += 2770946;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33251359;
            result[5] += 6927366;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 38923141;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4026531;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23264406;
            result[5] += 8947848;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 2147483;
            result[1] += 1073741;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20401094;
            result[5] += 19327352;
          } else {
            result[0] += 0;
            result[1] += 166042;
            result[2] += 166042;
            result[3] += 1605077;
            result[4] += 1217645;
            result[5] += 39794864;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 753503;
            result[1] += 0;
            result[2] += 376751;
            result[3] += 5274521;
            result[4] += 753503;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 721843;
            result[2] += 4331059;
            result[3] += 18046081;
            result[4] += 721843;
            result[5] += 19128845;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38264254;
            result[4] += 0;
            result[5] += 4685418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12725829;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 20679472;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 734182;
            result[1] += 1468364;
            result[2] += 0;
            result[3] += 1835456;
            result[4] += 38911669;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 30064771;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 4294967;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 33405301;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1847297;
            result[1] += 16625679;
            result[2] += 0;
            result[3] += 3694595;
            result[4] += 17087504;
            result[5] += 3694595;
          } else {
            result[0] += 38479628;
            result[1] += 149001;
            result[2] += 0;
            result[3] += 521505;
            result[4] += 2793777;
            result[5] += 1005759;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 719826;
            result[1] += 2399423;
            result[2] += 2159480;
            result[3] += 13916653;
            result[4] += 4318961;
            result[5] += 19435326;
          } else {
            result[0] += 36132264;
            result[1] += 1363481;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5453926;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1342177;
            result[3] += 12079595;
            result[4] += 0;
            result[5] += 29527900;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 26587892;
            result[4] += 0;
            result[5] += 7771845;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 12271335;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34087042;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 2726963;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 6681060;
            result[1] += 0;
            result[2] += 20043180;
            result[3] += 1908874;
            result[4] += 7635497;
            result[5] += 6681060;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 452101;
            result[1] += 0;
            result[2] += 31948528;
            result[3] += 7384329;
            result[4] += 301401;
            result[5] += 2863311;
          } else {
            result[0] += 251167;
            result[1] += 0;
            result[2] += 41003123;
            result[3] += 1695381;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 421075;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42528597;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30064771;
            result[5] += 12884901;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 12884901;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1324925;
            result[4] += 1435336;
            result[5] += 40189411;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 25094190;
            result[1] += 5790967;
            result[2] += 0;
            result[3] += 1930322;
            result[4] += 9651611;
            result[5] += 482580;
          } else {
            result[0] += 288252;
            result[1] += 0;
            result[2] += 1921685;
            result[3] += 16622580;
            result[4] += 2402106;
            result[5] += 21715047;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          } else {
            result[0] += 100349;
            result[1] += 42347574;
            result[2] += 0;
            result[3] += 301049;
            result[4] += 200699;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 5684515;
            result[1] += 34107093;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3158064;
            result[5] += 0;
          } else {
            result[0] += 34808023;
            result[1] += 626280;
            result[2] += 98886;
            result[3] += 1054788;
            result[4] += 5768375;
            result[5] += 593318;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1120426;
            result[1] += 497967;
            result[2] += 9585869;
            result[3] += 16183934;
            result[4] += 3112295;
            result[5] += 12449180;
          } else {
            result[0] += 32808777;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 1193046;
            result[4] += 3579139;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 0;
            result[4] += 0;
            result[5] += 30064771;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 7158278;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42fc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41564199;
            result[3] += 1385473;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 0;
            result[4] += 0;
            result[5] += 24542670;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 12689676;
            result[4] += 976128;
            result[5] += 650752;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39278760;
            result[3] += 3670912;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 10737418;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 517465;
            result[1] += 0;
            result[2] += 38680578;
            result[3] += 3622261;
            result[4] += 0;
            result[5] += 129366;
          } else {
            result[0] += 396458;
            result[1] += 0;
            result[2] += 42421061;
            result[3] += 132152;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 723870;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41984511;
            result[5] += 241290;
          } else {
            result[0] += 858993;
            result[1] += 858993;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24910810;
            result[5] += 16320875;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 31317469;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 894784;
            result[5] += 1789569;
          } else {
            result[0] += 99766;
            result[1] += 99766;
            result[2] += 49883;
            result[3] += 2095105;
            result[4] += 1895572;
            result[5] += 38709577;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 833974;
            result[1] += 0;
            result[2] += 2918909;
            result[3] += 6254806;
            result[4] += 3335896;
            result[5] += 29606085;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34915921;
            result[4] += 308990;
            result[5] += 7724761;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 2260509;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40689163;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 4971026;
            result[1] += 1590728;
            result[2] += 397682;
            result[3] += 1590728;
            result[4] += 30621526;
            result[5] += 3777980;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 37023175;
            result[1] += 801820;
            result[2] += 69723;
            result[3] += 1429331;
            result[4] += 2475184;
            result[5] += 1150437;
          } else {
            result[0] += 8495539;
            result[1] += 94394;
            result[2] += 10477832;
            result[3] += 12837704;
            result[4] += 943948;
            result[5] += 10100252;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 825955;
            result[3] += 21474836;
            result[4] += 1651910;
            result[5] += 18996970;
          } else {
            result[0] += 0;
            result[1] += 5052902;
            result[2] += 22738062;
            result[3] += 5052902;
            result[4] += 2526451;
            result[5] += 7579354;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 1285918;
            result[1] += 0;
            result[2] += 26489918;
            result[3] += 12087632;
            result[4] += 0;
            result[5] += 3086204;
          } else {
            result[0] += 36814005;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31445296;
            result[3] += 9970459;
            result[4] += 0;
            result[5] += 1533916;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42154308;
            result[3] += 795364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f60000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 394033;
            result[1] += 0;
            result[2] += 35463032;
            result[3] += 6304539;
            result[4] += 0;
            result[5] += 788067;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41667593;
            result[3] += 1282079;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41863397;
            result[3] += 1086275;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42495179;
            result[5] += 454493;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 11713547;
            result[2] += 0;
            result[3] += 15618062;
            result[4] += 15618062;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426a0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35370318;
            result[5] += 7579354;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 133591;
            result[3] += 1135527;
            result[4] += 200387;
            result[5] += 41480166;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
            result[0] += 18546449;
            result[1] += 1952257;
            result[2] += 0;
            result[3] += 1952257;
            result[4] += 12689676;
            result[5] += 7809031;
          } else {
            result[0] += 2777839;
            result[1] += 641039;
            result[2] += 641039;
            result[3] += 4273599;
            result[4] += 2991519;
            result[5] += 31624634;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 370255;
            result[1] += 0;
            result[2] += 1851279;
            result[3] += 14439976;
            result[4] += 1481023;
            result[5] += 24807138;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2102431;
            result[3] += 30335083;
            result[4] += 0;
            result[5] += 10512157;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 18407002;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24542670;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2147483;
            result[1] += 1789569;
            result[2] += 4652881;
            result[3] += 1431655;
            result[4] += 30064771;
            result[5] += 2863311;
          } else {
            result[0] += 11776523;
            result[1] += 1039104;
            result[2] += 1731841;
            result[3] += 6927366;
            result[4] += 4502788;
            result[5] += 16972048;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5245761;
            result[1] += 11147243;
            result[2] += 1967160;
            result[3] += 2950740;
            result[4] += 20655186;
            result[5] += 983580;
          } else {
            result[0] += 38201834;
            result[1] += 219130;
            result[2] += 840002;
            result[3] += 1424351;
            result[4] += 1716526;
            result[5] += 547827;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1022611;
            result[3] += 5113056;
            result[4] += 5113056;
            result[5] += 31700949;
          } else {
            result[0] += 1510792;
            result[1] += 1079137;
            result[2] += 12517995;
            result[3] += 20719440;
            result[4] += 863310;
            result[5] += 6258997;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 24448275;
            result[1] += 0;
            result[2] += 11893755;
            result[3] += 5286113;
            result[4] += 1321528;
            result[5] += 0;
          } else {
            result[0] += 505831;
            result[1] += 0;
            result[2] += 38903022;
            result[3] += 3218926;
            result[4] += 0;
            result[5] += 321892;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 178214;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41523957;
            result[5] += 1247500;
          } else {
            result[0] += 795364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 13521193;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35140641;
            result[5] += 7809031;
          } else {
            result[0] += 197924;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1319498;
            result[4] += 593774;
            result[5] += 40838475;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 266768;
            result[2] += 88922;
            result[3] += 17162084;
            result[4] += 1244918;
            result[5] += 24186979;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2260509;
            result[1] += 33907636;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6781527;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 36047046;
            result[2] += 0;
            result[3] += 766958;
            result[4] += 3834792;
            result[5] += 2300875;
          } else {
            result[0] += 4325866;
            result[1] += 2471923;
            result[2] += 0;
            result[3] += 617980;
            result[4] += 34915921;
            result[5] += 617980;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 37235338;
            result[1] += 479266;
            result[2] += 221200;
            result[3] += 1290333;
            result[4] += 2949333;
            result[5] += 774200;
          } else {
            result[0] += 7908580;
            result[1] += 730022;
            result[2] += 11923705;
            result[3] += 11315352;
            result[4] += 3041761;
            result[5] += 8030250;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 1789569;
            result[4] += 894784;
            result[5] += 36686178;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 0;
            result[4] += 24542670;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
            result[0] += 5368709;
            result[1] += 26843545;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2290649;
            result[3] += 26342466;
            result[4] += 0;
            result[5] += 14316557;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24338148;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 40563580;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 2386092;
            result[4] += 4772185;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 4955731;
            result[1] += 0;
            result[2] += 26430567;
            result[3] += 8259552;
            result[4] += 1651910;
            result[5] += 1651910;
          } else {
            result[0] += 39370533;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 7809031;
          } else {
            result[0] += 238344;
            result[1] += 0;
            result[2] += 38850148;
            result[3] += 3384491;
            result[4] += 0;
            result[5] += 476688;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 620211;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41554196;
            result[5] += 775264;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 21474836;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1227133;
            result[4] += 4908534;
            result[5] += 2454267;
          } else {
            result[0] += 183154;
            result[1] += 0;
            result[2] += 45788;
            result[3] += 1419445;
            result[4] += 2518371;
            result[5] += 38782913;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 2770946;
            result[1] += 1847297;
            result[2] += 0;
            result[3] += 6465542;
            result[4] += 2309122;
            result[5] += 29556764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2473541;
            result[3] += 27208955;
            result[4] += 224867;
            result[5] += 13042309;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 42447924;
            result[2] += 0;
            result[3] += 0;
            result[4] += 501748;
            result[5] += 0;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 8550166;
            result[1] += 13918875;
            result[2] += 397682;
            result[3] += 198841;
            result[4] += 18094538;
            result[5] += 1789569;
          } else {
            result[0] += 39045157;
            result[1] += 189539;
            result[2] += 492802;
            result[3] += 1023513;
            result[4] += 1705856;
            result[5] += 492802;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 332943;
            result[2] += 2330602;
            result[3] += 23306024;
            result[4] += 665886;
            result[5] += 16314216;
          } else {
            result[0] += 15572396;
            result[1] += 0;
            result[2] += 17832905;
            result[3] += 2260509;
            result[4] += 4018682;
            result[5] += 3265179;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2095105;
            result[4] += 1047552;
            result[5] += 39807013;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2213900;
            result[3] += 19925106;
            result[4] += 0;
            result[5] += 20810666;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40423221;
            result[3] += 2526451;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 10226112;
            result[1] += 0;
            result[2] += 10226112;
            result[3] += 2045222;
            result[4] += 8180890;
            result[5] += 12271335;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 1590728;
            result[5] += 12725829;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28082478;
            result[3] += 13490602;
            result[4] += 550636;
            result[5] += 825955;
          } else {
            result[0] += 1960358;
            result[1] += 178214;
            result[2] += 36533954;
            result[3] += 3742502;
            result[4] += 178214;
            result[5] += 356428;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41766020;
            result[3] += 1099105;
            result[4] += 0;
            result[5] += 84546;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 497486;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40793897;
            result[5] += 1658288;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
            result[0] += 42467092;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 482580;
            result[5] += 0;
          } else {
            result[0] += 740511;
            result[1] += 2962046;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17031766;
            result[5] += 22215348;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 12271335;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1415247;
            result[4] += 799922;
            result[5] += 40734503;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1525534;
            result[1] += 117348;
            result[2] += 117348;
            result[3] += 8918511;
            result[4] += 6102139;
            result[5] += 26168789;
          } else {
            result[0] += 378411;
            result[1] += 0;
            result[2] += 1324439;
            result[3] += 28759252;
            result[4] += 0;
            result[5] += 12487570;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 35370318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7579354;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42107522;
            result[5] += 842150;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 109845;
            result[1] += 42510290;
            result[2] += 0;
            result[3] += 0;
            result[4] += 329537;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 4349333;
            result[1] += 5980334;
            result[2] += 0;
            result[3] += 543666;
            result[4] += 32076338;
            result[5] += 0;
          } else {
            result[0] += 38493003;
            result[1] += 985988;
            result[2] += 157758;
            result[3] += 749351;
            result[4] += 2050856;
            result[5] += 512714;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 2825636;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 9889727;
            result[4] += 2260509;
            result[5] += 11867672;
          } else {
            result[0] += 23315536;
            result[1] += 5522100;
            result[2] += 0;
            result[3] += 3681400;
            result[4] += 10430634;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 5602131;
            result[2] += 1867377;
            result[3] += 13071639;
            result[4] += 1867377;
            result[5] += 20541147;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2718333;
            result[3] += 35338338;
            result[4] += 0;
            result[5] += 4893000;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5052902;
            result[3] += 0;
            result[4] += 12632256;
            result[5] += 25264513;
          } else {
            result[0] += 0;
            result[1] += 2526451;
            result[2] += 21474836;
            result[3] += 17685159;
            result[4] += 0;
            result[5] += 1263225;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40471807;
            result[3] += 2477865;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 5856773;
            result[2] += 23427094;
            result[3] += 0;
            result[4] += 7809031;
            result[5] += 5856773;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 41518017;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1431655;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 17179869;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 25769803;
          } else {
            result[0] += 839798;
            result[1] += 0;
            result[2] += 32512182;
            result[3] += 8517951;
            result[4] += 0;
            result[5] += 1079740;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1840700;
            result[1] += 0;
            result[2] += 35280088;
            result[3] += 5522100;
            result[4] += 0;
            result[5] += 306783;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42375735;
            result[3] += 382625;
            result[4] += 0;
            result[5] += 191312;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421e0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 311229;
            result[1] += 0;
            result[2] += 0;
            result[3] += 466844;
            result[4] += 40771066;
            result[5] += 1400532;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 16469423;
            result[1] += 5166877;
            result[2] += 0;
            result[3] += 1937579;
            result[4] += 12271335;
            result[5] += 7104457;
          } else {
            result[0] += 240749;
            result[1] += 0;
            result[2] += 96299;
            result[3] += 1155596;
            result[4] += 3081590;
            result[5] += 38375436;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 320519;
            result[1] += 160259;
            result[2] += 320519;
            result[3] += 26282635;
            result[4] += 0;
            result[5] += 15865737;
          } else {
            result[0] += 795364;
            result[1] += 0;
            result[2] += 19884107;
            result[3] += 1590728;
            result[4] += 0;
            result[5] += 20679472;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39045157;
            result[5] += 3904515;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 37580963;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 28966058;
            result[1] += 2871635;
            result[2] += 187280;
            result[3] += 1061256;
            result[4] += 8677332;
            result[5] += 1186110;
          } else {
            result[0] += 4965280;
            result[1] += 868924;
            result[2] += 5337676;
            result[3] += 13530388;
            result[4] += 2358508;
            result[5] += 15888896;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
            result[0] += 42034226;
            result[1] += 0;
            result[2] += 76287;
            result[3] += 0;
            result[4] += 839158;
            result[5] += 0;
          } else {
            result[0] += 25177394;
            result[1] += 0;
            result[2] += 8886139;
            result[3] += 1481023;
            result[4] += 5183581;
            result[5] += 2221534;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 39807013;
            result[4] += 0;
            result[5] += 3142658;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 33405301;
            result[4] += 0;
            result[5] += 9544371;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 4294967;
            result[5] += 34359738;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32641751;
            result[3] += 7730941;
            result[4] += 0;
            result[5] += 2576980;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1130254;
            result[1] += 0;
            result[2] += 34230566;
            result[3] += 6458597;
            result[4] += 0;
            result[5] += 1130254;
          } else {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 378967;
            result[1] += 0;
            result[2] += 39665286;
            result[3] += 2652773;
            result[4] += 0;
            result[5] += 252645;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42694020;
            result[3] += 255652;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 329116;
            result[1] += 164558;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41797766;
            result[5] += 658232;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 32641751;
            result[1] += 1717986;
            result[2] += 858993;
            result[3] += 0;
            result[4] += 7730941;
            result[5] += 0;
          } else {
            result[0] += 45067;
            result[1] += 225339;
            result[2] += 0;
            result[3] += 2388596;
            result[4] += 3109682;
            result[5] += 37180986;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2962046;
            result[4] += 0;
            result[5] += 39987626;
          } else {
            result[0] += 660764;
            result[1] += 0;
            result[2] += 3964585;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 9691208;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 18407002;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 18407002;
            result[5] += 0;
          } else {
            result[0] += 95021;
            result[1] += 42854651;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
            result[0] += 35596875;
            result[1] += 1283821;
            result[2] += 0;
            result[3] += 350133;
            result[4] += 5018575;
            result[5] += 700266;
          } else {
            result[0] += 1385473;
            result[1] += 969831;
            result[2] += 1524020;
            result[3] += 13854733;
            result[4] += 6788819;
            result[5] += 18426795;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 4190211;
            result[1] += 6285317;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31426589;
            result[5] += 1047552;
          } else {
            result[0] += 39019328;
            result[1] += 0;
            result[2] += 1467960;
            result[3] += 378828;
            result[4] += 1562667;
            result[5] += 520889;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428c0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 23427094;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 9911462;
            result[2] += 0;
            result[3] += 3303820;
            result[4] += 0;
            result[5] += 29734388;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 33578835;
            result[4] += 0;
            result[5] += 5466322;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 3995318;
            result[2] += 8989466;
            result[3] += 9988296;
            result[4] += 5992977;
            result[5] += 13983614;
          } else {
            result[0] += 550636;
            result[1] += 0;
            result[2] += 26981204;
            result[3] += 14867194;
            result[4] += 550636;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f30000))) ) ) {
            result[0] += 1101273;
            result[1] += 0;
            result[2] += 34001824;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 688296;
          } else {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36645133;
            result[3] += 6304539;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42569587;
            result[3] += 380085;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 609215;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41731242;
            result[5] += 609215;
          } else {
            result[0] += 0;
            result[1] += 32723560;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10226112;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 42467092;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 482580;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 613566;
            result[2] += 1227133;
            result[3] += 6749234;
            result[4] += 5522100;
            result[5] += 28837637;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1286652;
            result[4] += 980306;
            result[5] += 40682714;
          } else {
            result[0] += 1087333;
            result[1] += 0;
            result[2] += 2174666;
            result[3] += 4621167;
            result[4] += 8426834;
            result[5] += 26639670;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42980000))) ) ) {
            result[0] += 833974;
            result[1] += 416987;
            result[2] += 2084935;
            result[3] += 4586858;
            result[4] += 24185252;
            result[5] += 10841665;
          } else {
            result[0] += 1182101;
            result[1] += 0;
            result[2] += 1182101;
            result[3] += 21277819;
            result[4] += 394033;
            result[5] += 18913617;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 33405301;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 9203501;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33746171;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35370318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7579354;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 954437;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 9067153;
            result[4] += 1431655;
            result[5] += 24338148;
          } else {
            result[0] += 38666713;
            result[1] += 200138;
            result[2] += 0;
            result[3] += 640442;
            result[4] += 2721880;
            result[5] += 720497;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 1039104;
            result[1] += 692736;
            result[2] += 2251394;
            result[3] += 25284888;
            result[4] += 1731841;
            result[5] += 11949707;
          } else {
            result[0] += 19173961;
            result[1] += 383479;
            result[2] += 17256565;
            result[3] += 2300875;
            result[4] += 1917396;
            result[5] += 1917396;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2147483;
            result[1] += 5010795;
            result[2] += 2147483;
            result[3] += 2863311;
            result[4] += 3579139;
            result[5] += 27201459;
          } else {
            result[0] += 0;
            result[1] += 1908874;
            result[2] += 0;
            result[3] += 24815366;
            result[4] += 0;
            result[5] += 16225432;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7745022;
            result[3] += 29571905;
            result[4] += 0;
            result[5] += 5632743;
          } else {
            result[0] += 692736;
            result[1] += 0;
            result[2] += 24245783;
            result[3] += 8312839;
            result[4] += 1385473;
            result[5] += 8312839;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 41160103;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24632900;
            result[3] += 14527095;
            result[4] += 0;
            result[5] += 3789677;
          } else {
            result[0] += 1571329;
            result[1] += 785664;
            result[2] += 35354913;
            result[3] += 4975876;
            result[4] += 0;
            result[5] += 261888;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35370318;
            result[3] += 2526451;
            result[4] += 0;
            result[5] += 5052902;
          } else {
            result[0] += 4405094;
            result[1] += 0;
            result[2] += 18721652;
            result[3] += 19822925;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37167986;
            result[3] += 5781686;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 405185;
            result[1] += 0;
            result[2] += 38492631;
            result[3] += 4051855;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 96516;
            result[1] += 0;
            result[2] += 42370576;
            result[3] += 482580;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 153391;
            result[1] += 153391;
            result[2] += 153391;
            result[3] += 0;
            result[4] += 42182714;
            result[5] += 306783;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39513699;
            result[5] += 3435973;
          } else {
            result[0] += 40589800;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2359872;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 244032;
            result[2] += 0;
            result[3] += 610080;
            result[4] += 1769233;
            result[5] += 40326326;
          } else {
            result[0] += 873975;
            result[1] += 374561;
            result[2] += 0;
            result[3] += 9613734;
            result[4] += 4744440;
            result[5] += 27342960;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 36507222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6442450;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 5804009;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37145663;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 39214918;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3734754;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 15777430;
            result[1] += 0;
            result[2] += 2629571;
            result[3] += 9057414;
            result[4] += 5259143;
            result[5] += 10226112;
          } else {
            result[0] += 38525314;
            result[1] += 1001741;
            result[2] += 125217;
            result[3] += 960002;
            result[4] += 2170440;
            result[5] += 166956;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 995934;
            result[1] += 871442;
            result[2] += 2614327;
            result[3] += 22782000;
            result[4] += 1244918;
            result[5] += 14441049;
          } else {
            result[0] += 15971909;
            result[1] += 0;
            result[2] += 18790481;
            result[3] += 4294967;
            result[4] += 402653;
            result[5] += 3489660;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1481023;
            result[4] += 0;
            result[5] += 41468649;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18572831;
            result[3] += 11608019;
            result[4] += 0;
            result[5] += 12768821;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 17179869;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 39645851;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 18407002;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 0;
          } else {
            result[0] += 227246;
            result[1] += 0;
            result[2] += 35905017;
            result[3] += 6362914;
            result[4] += 0;
            result[5] += 454493;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 85557;
            result[1] += 0;
            result[2] += 41324087;
            result[3] += 1368913;
            result[4] += 0;
            result[5] += 171114;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 0;
            result[4] += 36342030;
            result[5] += 3303820;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 14148127;
            result[1] += 15158708;
            result[2] += 0;
            result[3] += 1010580;
            result[4] += 9600515;
            result[5] += 3031741;
          } else {
            result[0] += 54712;
            result[1] += 437703;
            result[2] += 0;
            result[3] += 656555;
            result[4] += 2352657;
            result[5] += 39448043;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 304607;
            result[1] += 0;
            result[2] += 456911;
            result[3] += 19799494;
            result[4] += 1066126;
            result[5] += 21322532;
          } else {
            result[0] += 5632743;
            result[1] += 704092;
            result[2] += 25347347;
            result[3] += 3520464;
            result[4] += 704092;
            result[5] += 7040929;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 2183881;
            result[1] += 1091940;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38581909;
            result[5] += 1091940;
          } else {
            result[0] += 22566777;
            result[1] += 5459704;
            result[2] += 0;
            result[3] += 363980;
            result[4] += 13467270;
            result[5] += 1091940;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 9271074;
            result[1] += 189205;
            result[2] += 189205;
            result[3] += 15136448;
            result[4] += 4351728;
            result[5] += 13812009;
          } else {
            result[0] += 36777043;
            result[1] += 665313;
            result[2] += 1293664;
            result[3] += 1219741;
            result[4] += 2217711;
            result[5] += 776198;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3655291;
            result[3] += 10052051;
            result[4] += 9138228;
            result[5] += 20104102;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3857755;
            result[3] += 31376407;
            result[4] += 771551;
            result[5] += 6943959;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 1507006;
            result[2] += 7535030;
            result[3] += 6028024;
            result[4] += 0;
            result[5] += 27879612;
          } else {
            result[0] += 2045222;
            result[1] += 5113056;
            result[2] += 28633115;
            result[3] += 1022611;
            result[4] += 4090445;
            result[5] += 2045222;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 8947848;
            result[4] += 1789569;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39268272;
            result[3] += 2454267;
            result[4] += 0;
            result[5] += 1227133;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37339130;
            result[3] += 5610542;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 283029;
            result[1] += 0;
            result[2] += 41534527;
            result[3] += 1132116;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41231686;
            result[5] += 1717986;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42840000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 2928386;
            result[2] += 0;
            result[3] += 1952257;
            result[4] += 9761289;
            result[5] += 28307738;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42830000))) ) ) {
            result[0] += 3734754;
            result[1] += 9336885;
            result[2] += 0;
            result[3] += 1867377;
            result[4] += 28010656;
            result[5] += 0;
          } else {
            result[0] += 42196169;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 753503;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 553000;
            result[4] += 921666;
            result[5] += 41475006;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 23427094;
            result[4] += 0;
            result[5] += 19522578;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26247022;
            result[5] += 9544371;
          } else {
            result[0] += 0;
            result[1] += 917728;
            result[2] += 1284819;
            result[3] += 5139277;
            result[4] += 3120275;
            result[5] += 32487573;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 407105;
            result[1] += 203552;
            result[2] += 407105;
            result[3] += 30736495;
            result[4] += 1017764;
            result[5] += 10177647;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19822925;
            result[3] += 2202547;
            result[4] += 0;
            result[5] += 20924199;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1431655;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36745831;
            result[5] += 2386092;
          } else {
            result[0] += 0;
            result[1] += 18407002;
            result[2] += 0;
            result[3] += 15339168;
            result[4] += 9203501;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 26755533;
            result[2] += 0;
            result[3] += 704092;
            result[4] += 15490045;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 6781527;
            result[1] += 0;
            result[2] += 6028024;
            result[3] += 1507006;
            result[4] += 23358594;
            result[5] += 5274521;
          } else {
            result[0] += 1952257;
            result[1] += 21474836;
            result[2] += 650752;
            result[3] += 3904515;
            result[4] += 14967310;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 39055993;
            result[1] += 0;
            result[2] += 79462;
            result[3] += 1509794;
            result[4] += 2224959;
            result[5] += 79462;
          } else {
            result[0] += 12776168;
            result[1] += 0;
            result[2] += 9514168;
            result[3] += 8970501;
            result[4] += 4077500;
            result[5] += 7611334;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2656680;
            result[3] += 5756141;
            result[4] += 10626723;
            result[5] += 23910127;
          } else {
            result[0] += 0;
            result[1] += 825955;
            result[2] += 8259552;
            result[3] += 25191635;
            result[4] += 1238932;
            result[5] += 7433597;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 2260509;
            result[1] += 753503;
            result[2] += 27879612;
            result[3] += 1130254;
            result[4] += 2637260;
            result[5] += 8288533;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 565127;
            result[2] += 20344581;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 565127;
          } else {
            result[0] += 481978;
            result[1] += 0;
            result[2] += 39254501;
            result[3] += 2945426;
            result[4] += 0;
            result[5] += 267766;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 173184;
            result[1] += 519552;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41564199;
            result[5] += 692736;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 22906492;
            result[4] += 8589934;
            result[5] += 11453246;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37347541;
            result[5] += 5602131;
          } else {
            result[0] += 645051;
            result[1] += 107508;
            result[2] += 0;
            result[3] += 1343857;
            result[4] += 2311434;
            result[5] += 38541821;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
            result[0] += 37223049;
            result[1] += 1717986;
            result[2] += 0;
            result[3] += 572662;
            result[4] += 2290649;
            result[5] += 1145324;
          } else {
            result[0] += 700266;
            result[1] += 77807;
            result[2] += 544651;
            result[3] += 19529652;
            result[4] += 1789569;
            result[5] += 20307725;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 5804009;
            result[2] += 3482405;
            result[3] += 1160801;
            result[4] += 32502455;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 37896770;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5052902;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 28633115;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 2842257;
            result[1] += 8842579;
            result[2] += 315806;
            result[3] += 1579032;
            result[4] += 27475158;
            result[5] += 1894838;
          } else {
            result[0] += 36939781;
            result[1] += 1263225;
            result[2] += 267956;
            result[3] += 918709;
            result[4] += 2603010;
            result[5] += 956989;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 1051828;
            result[1] += 1928352;
            result[2] += 12621944;
            result[3] += 15426821;
            result[4] += 1753047;
            result[5] += 10167677;
          } else {
            result[0] += 27183337;
            result[1] += 1087333;
            result[2] += 4893000;
            result[3] += 0;
            result[4] += 9786001;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 810371;
            result[2] += 3241484;
            result[3] += 33225218;
            result[4] += 0;
            result[5] += 5672598;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 2260509;
            result[1] += 0;
            result[2] += 40689163;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7362801;
            result[3] += 1227133;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 2045222;
            result[1] += 0;
            result[2] += 19429613;
            result[3] += 19429613;
            result[4] += 0;
            result[5] += 2045222;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 1022611;
            result[1] += 0;
            result[2] += 35586871;
            result[3] += 5726623;
            result[4] += 204522;
            result[5] += 409044;
          } else {
            result[0] += 19685266;
            result[1] += 0;
            result[2] += 19685266;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 795364;
            result[2] += 32609936;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 1590728;
          } else {
            result[0] += 674602;
            result[1] += 0;
            result[2] += 40700998;
            result[3] += 1574071;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42eb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 156180;
            result[4] += 39669879;
            result[5] += 3123612;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 10737418;
            result[5] += 10737418;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32641751;
            result[5] += 10307921;
          } else {
            result[0] += 116080;
            result[1] += 0;
            result[2] += 174120;
            result[3] += 870601;
            result[4] += 696481;
            result[5] += 41092389;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 31927190;
            result[1] += 1140256;
            result[2] += 0;
            result[3] += 2660599;
            result[4] += 4941112;
            result[5] += 2280513;
          } else {
            result[0] += 287609;
            result[1] += 766958;
            result[2] += 383479;
            result[3] += 13996991;
            result[4] += 2492614;
            result[5] += 25022019;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 36077725;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6871947;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 2183881;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40765791;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35984861;
            result[2] += 0;
            result[3] += 2321603;
            result[4] += 2321603;
            result[5] += 2321603;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 3681400;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20861269;
            result[5] += 1227133;
          } else {
            result[0] += 35873944;
            result[1] += 353786;
            result[2] += 247650;
            result[3] += 1485903;
            result[4] += 3962408;
            result[5] += 1025980;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 1056139;
            result[1] += 4224557;
            result[2] += 11617534;
            result[3] += 11969580;
            result[4] += 3872511;
            result[5] += 10209348;
          } else {
            result[0] += 39881839;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 2684354;
            result[5] += 29527900;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5280697;
            result[3] += 33796463;
            result[4] += 352046;
            result[5] += 3520464;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 753503;
            result[1] += 753503;
            result[2] += 32400630;
            result[3] += 4521018;
            result[4] += 0;
            result[5] += 4521018;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 2321603;
            result[1] += 1160801;
            result[2] += 22055237;
            result[3] += 4643207;
            result[4] += 4643207;
            result[5] += 8125613;
          } else {
            result[0] += 36442146;
            result[1] += 1301505;
            result[2] += 5206020;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11453246;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 22906492;
          } else {
            result[0] += 1025323;
            result[1] += 0;
            result[2] += 34405308;
            result[3] += 7063341;
            result[4] += 0;
            result[5] += 455699;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 233845;
            result[1] += 0;
            result[2] += 41858392;
            result[3] += 857434;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42900000))) ) ) {
            result[0] += 562659;
            result[1] += 187553;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41449247;
            result[5] += 750212;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10105805;
            result[4] += 10105805;
            result[5] += 22738062;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 41297762;
            result[2] += 0;
            result[3] += 1651910;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 670136;
            result[4] += 2619625;
            result[5] += 39659910;
          } else {
            result[0] += 8790868;
            result[1] += 502335;
            result[2] += 0;
            result[3] += 5776856;
            result[4] += 2762844;
            result[5] += 25116767;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 1970168;
            result[1] += 788067;
            result[2] += 1970168;
            result[3] += 7092606;
            result[4] += 3940336;
            result[5] += 27188325;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3829907;
            result[3] += 29271433;
            result[4] += 547129;
            result[5] += 9301203;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 42847411;
            result[2] += 0;
            result[3] += 0;
            result[4] += 102261;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 4650601;
            result[1] += 2188518;
            result[2] += 0;
            result[3] += 2188518;
            result[4] += 29818562;
            result[5] += 4103471;
          } else {
            result[0] += 36320330;
            result[1] += 528936;
            result[2] += 70524;
            result[3] += 1339973;
            result[4] += 2997308;
            result[5] += 1692597;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 409044;
            result[1] += 2454267;
            result[2] += 4090445;
            result[3] += 17793435;
            result[4] += 3272356;
            result[5] += 14930124;
          } else {
            result[0] += 19453675;
            result[1] += 2273806;
            result[2] += 11874321;
            result[3] += 1263225;
            result[4] += 6568773;
            result[5] += 1515870;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42840000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5939848;
            result[3] += 29242330;
            result[4] += 456911;
            result[5] += 7310582;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 11453246;
            result[2] += 2863311;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34636833;
            result[3] += 8312839;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 16873085;
            result[4] += 3067833;
            result[5] += 4601750;
          } else {
            result[0] += 517465;
            result[1] += 0;
            result[2] += 31824155;
            result[3] += 8538187;
            result[4] += 0;
            result[5] += 2069863;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 31236125;
            result[3] += 0;
            result[4] += 3904515;
            result[5] += 3904515;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 427359;
            result[1] += 0;
            result[2] += 38035033;
            result[3] += 4487279;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 80430;
            result[1] += 0;
            result[2] += 41582361;
            result[3] += 1045591;
            result[4] += 0;
            result[5] += 241290;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 519552;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41910567;
            result[5] += 519552;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11453246;
            result[4] += 20043180;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1131743;
            result[4] += 1244918;
            result[5] += 40573011;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
            result[0] += 31360078;
            result[1] += 2045222;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 3408704;
            result[5] += 1363481;
          } else {
            result[0] += 185929;
            result[1] += 650752;
            result[2] += 185929;
            result[3] += 15618062;
            result[4] += 3718586;
            result[5] += 22590412;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42854016;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95656;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 4465065;
            result[1] += 4890309;
            result[2] += 1913599;
            result[3] += 5740797;
            result[4] += 22325325;
            result[5] += 3614576;
          } else {
            result[0] += 1590728;
            result[1] += 41358944;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 37732195;
            result[1] += 378078;
            result[2] += 37807;
            result[3] += 1474504;
            result[4] += 2533123;
            result[5] += 793964;
          } else {
            result[0] += 5556831;
            result[1] += 0;
            result[2] += 12850171;
            result[3] += 11808265;
            result[4] += 2431113;
            result[5] += 10303290;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 0;
            result[4] += 39645851;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3506095;
            result[3] += 9641763;
            result[4] += 0;
            result[5] += 29801813;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3995318;
            result[3] += 32961376;
            result[4] += 0;
            result[5] += 5992977;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26430567;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 3303820;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1342177;
            result[2] += 37580963;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 1342177;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35140641;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 203552;
            result[1] += 0;
            result[2] += 35214660;
            result[3] += 6717247;
            result[4] += 0;
            result[5] += 814211;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 337654;
            result[1] += 0;
            result[2] += 40991275;
            result[3] += 1620742;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 26030104;
            result[3] += 0;
            result[4] += 2603010;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 155052;
            result[1] += 155052;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40468825;
            result[5] += 2170741;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 15032385;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23622320;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 204522;
            result[2] += 51130;
            result[3] += 2505397;
            result[4] += 562436;
            result[5] += 39626186;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 40346662;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2603010;
            result[5] += 0;
          } else {
            result[0] += 540247;
            result[1] += 405185;
            result[2] += 2836299;
            result[3] += 21474836;
            result[4] += 1755804;
            result[5] += 15937300;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 3416451;
            result[1] += 9517257;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29527900;
            result[5] += 488064;
          } else {
            result[0] += 36839828;
            result[1] += 469988;
            result[2] += 723058;
            result[3] += 831517;
            result[4] += 2892233;
            result[5] += 1193046;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 1101273;
            result[1] += 660764;
            result[2] += 9911462;
            result[3] += 13105156;
            result[4] += 4294967;
            result[5] += 13876048;
          } else {
            result[0] += 31445296;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11504376;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42754889;
            result[2] += 0;
            result[3] += 97391;
            result[4] += 97391;
            result[5] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19618986;
            result[3] += 18558500;
            result[4] += 530242;
            result[5] += 4241943;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32051994;
            result[3] += 9188238;
            result[4] += 0;
            result[5] += 1709439;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x43028000))) ) ) {
            result[0] += 438261;
            result[1] += 0;
            result[2] += 37252267;
            result[3] += 4820881;
            result[4] += 0;
            result[5] += 438261;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38128791;
            result[3] += 4820881;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42539652;
            result[3] += 205010;
            result[4] += 0;
            result[5] += 205010;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 1160801;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40628069;
            result[5] += 1160801;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10447217;
            result[5] += 32502455;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 7708915;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35240757;
            result[5] += 0;
          } else {
            result[0] += 37483350;
            result[1] += 0;
            result[2] += 780903;
            result[3] += 0;
            result[4] += 2342709;
            result[5] += 2342709;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 492058;
            result[4] += 492058;
            result[5] += 41965556;
          } else {
            result[0] += 0;
            result[1] += 204522;
            result[2] += 0;
            result[3] += 4908534;
            result[4] += 7771845;
            result[5] += 30064771;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 5769359;
            result[2] += 641039;
            result[3] += 8012998;
            result[4] += 3205199;
            result[5] += 25321075;
          } else {
            result[0] += 388684;
            result[1] += 194342;
            result[2] += 3303820;
            result[3] += 27790964;
            result[4] += 194342;
            result[5] += 11077517;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40563580;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 15618062;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27331610;
            result[5] += 0;
          } else {
            result[0] += 179330;
            result[1] += 42053020;
            result[2] += 0;
            result[3] += 0;
            result[4] += 717322;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 3390763;
            result[1] += 9418787;
            result[2] += 0;
            result[3] += 1883757;
            result[4] += 27126109;
            result[5] += 1130254;
          } else {
            result[0] += 36851191;
            result[1] += 594973;
            result[2] += 185929;
            result[3] += 1004018;
            result[4] += 3272356;
            result[5] += 1041204;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 463485;
            result[1] += 463485;
            result[2] += 6179809;
            result[3] += 19775388;
            result[4] += 2162933;
            result[5] += 13904570;
          } else {
            result[0] += 19489767;
            result[1] += 2345990;
            result[2] += 16602394;
            result[3] += 902304;
            result[4] += 2165529;
            result[5] += 1443686;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1342177;
            result[3] += 33554431;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2770946;
            result[3] += 6927366;
            result[4] += 0;
            result[5] += 33251359;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 0;
            result[4] += 0;
            result[5] += 24542670;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 12884901;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10367162;
            result[3] += 28139440;
            result[4] += 0;
            result[5] += 4443069;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36077725;
            result[3] += 3435973;
            result[4] += 0;
            result[5] += 3435973;
          } else {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 17179869;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32101559;
            result[3] += 9741162;
            result[4] += 442780;
            result[5] += 664170;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41082295;
            result[3] += 1867377;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 445844;
            result[1] += 0;
            result[2] += 40869065;
            result[3] += 1634762;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 370255;
            result[1] += 185127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40913266;
            result[5] += 1481023;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31647127;
            result[5] += 11302545;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 9544371;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 6135667;
          } else {
            result[0] += 64199;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1027196;
            result[4] += 706197;
            result[5] += 41152078;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 38324323;
            result[1] += 1321528;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3303820;
            result[5] += 0;
          } else {
            result[0] += 187553;
            result[1] += 656436;
            result[2] += 1406648;
            result[3] += 14160263;
            result[4] += 3938616;
            result[5] += 22600155;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x423a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 6507526;
            result[1] += 1952257;
            result[2] += 0;
            result[3] += 2277634;
            result[4] += 32212254;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 36672413;
            result[1] += 1064564;
            result[2] += 220254;
            result[3] += 991146;
            result[4] += 3340530;
            result[5] += 660764;
          } else {
            result[0] += 10484773;
            result[1] += 884257;
            result[2] += 6821418;
            result[3] += 10105805;
            result[4] += 2526451;
            result[5] += 12126966;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4955731;
            result[3] += 4955731;
            result[4] += 16519104;
            result[5] += 16519104;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2918909;
            result[3] += 34192943;
            result[4] += 416987;
            result[5] += 5420832;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6442450;
            result[5] += 27917287;
          } else {
            result[0] += 0;
            result[1] += 1130254;
            result[2] += 24112097;
            result[3] += 13939806;
            result[4] += 0;
            result[5] += 3767515;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 526696;
            result[1] += 0;
            result[2] += 39454326;
            result[3] += 2872887;
            result[4] += 0;
            result[5] += 95762;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42727135;
            result[5] += 222537;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 38654705;
          } else {
            result[0] += 7469508;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31745410;
            result[5] += 3734754;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 27531841;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15417831;
            result[5] += 0;
          } else {
            result[0] += 104883;
            result[1] += 0;
            result[2] += 52441;
            result[3] += 1625689;
            result[4] += 1730572;
            result[5] += 39436085;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1466574;
            result[1] += 4190211;
            result[2] += 3142658;
            result[3] += 8170913;
            result[4] += 2514127;
            result[5] += 23465187;
          } else {
            result[0] += 1676084;
            result[1] += 209510;
            result[2] += 628531;
            result[3] += 31426589;
            result[4] += 1047552;
            result[5] += 7961402;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 6507526;
            result[4] += 22125589;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42846676;
            result[2] += 0;
            result[3] += 0;
            result[4] += 102996;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 36814005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3040684;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38768731;
            result[5] += 1140256;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42740000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4789352;
            result[1] += 1544952;
            result[2] += 2317428;
            result[3] += 15604017;
            result[4] += 5561828;
            result[5] += 13132094;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 38069028;
            result[1] += 1464193;
            result[2] += 203360;
            result[3] += 162688;
            result[4] += 2969058;
            result[5] += 81344;
          } else {
            result[0] += 11118177;
            result[1] += 913822;
            result[2] += 15839595;
            result[3] += 6701367;
            result[4] += 2741468;
            result[5] += 5635240;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2386092;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 8589934;
          } else {
            result[0] += 1590728;
            result[1] += 0;
            result[2] += 22270200;
            result[3] += 11135100;
            result[4] += 0;
            result[5] += 7953643;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 31236125;
            result[4] += 0;
            result[5] += 3904515;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29084030;
            result[3] += 10483778;
            result[4] += 0;
            result[5] += 3381864;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39080333;
            result[3] += 3869339;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 0;
            result[4] += 0;
            result[5] += 19522578;
          } else {
            result[0] += 191170;
            result[1] += 0;
            result[2] += 40719348;
            result[3] += 2039153;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42850021;
            result[2] += 0;
            result[3] += 0;
            result[4] += 99651;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 190887;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41995235;
            result[5] += 763549;
          } else {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24815366;
            result[5] += 15270994;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 1687609;
            result[1] += 253141;
            result[2] += 126570;
            result[3] += 3754932;
            result[4] += 2531414;
            result[5] += 34596003;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 511305;
            result[3] += 27866156;
            result[4] += 0;
            result[5] += 14572210;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 3884895;
            result[1] += 16834545;
            result[2] += 215827;
            result[3] += 2158275;
            result[4] += 17913682;
            result[5] += 1942447;
          } else {
            result[0] += 36884127;
            result[1] += 350609;
            result[2] += 596036;
            result[3] += 1157011;
            result[4] += 2910059;
            result[5] += 1051828;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 1941228;
            result[1] += 363980;
            result[2] += 13345943;
            result[3] += 13224616;
            result[4] += 3761129;
            result[5] += 10312774;
          } else {
            result[0] += 28224070;
            result[1] += 1840700;
            result[2] += 5522100;
            result[3] += 0;
            result[4] += 7362801;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 2863311;
            result[2] += 11453246;
            result[3] += 8589934;
            result[4] += 20043180;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6362914;
            result[2] += 3181457;
            result[3] += 0;
            result[4] += 6362914;
            result[5] += 27042386;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6781527;
            result[3] += 30516872;
            result[4] += 0;
            result[5] += 5651272;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 27331610;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 0;
            result[4] += 7809031;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 8053063;
            result[2] += 2684354;
            result[3] += 5368709;
            result[4] += 16106127;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31274033;
            result[3] += 10007690;
            result[4] += 0;
            result[5] += 1667948;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 37580963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34896609;
            result[3] += 8053063;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 202592;
            result[1] += 0;
            result[2] += 40991275;
            result[3] += 1755804;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 166471;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41451428;
            result[5] += 1331772;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71942;
            result[3] += 431655;
            result[4] += 647482;
            result[5] += 41798592;
          } else {
            result[0] += 320519;
            result[1] += 641039;
            result[2] += 961559;
            result[3] += 4487279;
            result[4] += 7371958;
            result[5] += 29167315;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 40346662;
            result[1] += 650752;
            result[2] += 0;
            result[3] += 650752;
            result[4] += 1301505;
            result[5] += 0;
          } else {
            result[0] += 715827;
            result[1] += 89478;
            result[2] += 626349;
            result[3] += 14853428;
            result[4] += 5547666;
            result[5] += 21116922;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 2321603;
            result[1] += 1741202;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38886866;
            result[5] += 0;
          } else {
            result[0] += 4955731;
            result[1] += 37993941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
            result[0] += 10021590;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 6442450;
            result[4] += 2147483;
            result[5] += 6442450;
          } else {
            result[0] += 0;
            result[1] += 390451;
            result[2] += 390451;
            result[3] += 12494450;
            result[4] += 1171354;
            result[5] += 28502964;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 37271973;
            result[1] += 1042842;
            result[2] += 193119;
            result[3] += 502109;
            result[4] += 3785133;
            result[5] += 154495;
          } else {
            result[0] += 19822925;
            result[1] += 0;
            result[2] += 2595859;
            result[3] += 8731526;
            result[4] += 4247769;
            result[5] += 7551590;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3099460;
            result[3] += 33208510;
            result[4] += 0;
            result[5] += 6641702;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16464041;
            result[3] += 20043180;
            result[4] += 715827;
            result[5] += 5726623;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42930000))) ) ) {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 24542670;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16806393;
            result[3] += 22408525;
            result[4] += 0;
            result[5] += 3734754;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 23427094;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 3435973;
            result[4] += 0;
            result[5] += 858993;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1515870;
            result[1] += 0;
            result[2] += 24759223;
            result[3] += 10611095;
            result[4] += 0;
            result[5] += 6063483;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38725114;
            result[3] += 3520464;
            result[4] += 0;
            result[5] += 704092;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23126746;
            result[3] += 6607641;
            result[4] += 3303820;
            result[5] += 9911462;
          } else {
            result[0] += 489300;
            result[1] += 0;
            result[2] += 40448805;
            result[3] += 1957200;
            result[4] += 0;
            result[5] += 54366;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 272696;
            result[1] += 954437;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41449843;
            result[5] += 272696;
          } else {
            result[0] += 2440322;
            result[1] += 976128;
            result[2] += 0;
            result[3] += 488064;
            result[4] += 27331610;
            result[5] += 11713547;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 6442450;
            result[1] += 4294967;
            result[2] += 12884901;
            result[3] += 2147483;
            result[4] += 4294967;
            result[5] += 12884901;
          } else {
            result[0] += 5368709;
            result[1] += 37580963;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 10737418;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 446359;
            result[1] += 694336;
            result[2] += 0;
            result[3] += 1884627;
            result[4] += 1388673;
            result[5] += 38535676;
          } else {
            result[0] += 15589140;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6681060;
            result[4] += 4772185;
            result[5] += 15907286;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35140641;
            result[4] += 0;
            result[5] += 7809031;
          } else {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 5206020;
            result[3] += 1301505;
            result[4] += 2603010;
            result[5] += 29934620;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 40648797;
            result[1] += 511305;
            result[2] += 766958;
            result[3] += 511305;
            result[4] += 511305;
            result[5] += 0;
          } else {
            result[0] += 5185268;
            result[1] += 1369693;
            result[2] += 5185268;
            result[3] += 16044980;
            result[4] += 3913409;
            result[5] += 11251053;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 37185488;
            result[1] += 866794;
            result[2] += 216698;
            result[3] += 650095;
            result[4] += 3510518;
            result[5] += 520076;
          } else {
            result[0] += 15060274;
            result[1] += 0;
            result[2] += 23984882;
            result[3] += 2788939;
            result[4] += 0;
            result[5] += 1115575;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 37896770;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 0;
            result[4] += 2863311;
            result[5] += 5726623;
          } else {
            result[0] += 17179869;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40997415;
            result[4] += 0;
            result[5] += 1952257;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 34359738;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 7516192;
            result[4] += 0;
            result[5] += 1073741;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36507222;
            result[3] += 6184752;
            result[4] += 0;
            result[5] += 257698;
          } else {
            result[0] += 507679;
            result[1] += 0;
            result[2] += 41934314;
            result[3] += 507679;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 1363481;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40222709;
            result[5] += 1363481;
          } else {
            result[0] += 0;
            result[1] += 30064771;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 60237;
            result[1] += 60237;
            result[2] += 0;
            result[3] += 783093;
            result[4] += 1505949;
            result[5] += 40540154;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 8620180;
            result[1] += 604924;
            result[2] += 0;
            result[3] += 2873393;
            result[4] += 5746787;
            result[5] += 25104386;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 628531;
            result[3] += 27655399;
            result[4] += 628531;
            result[5] += 14037210;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42852939;
            result[2] += 0;
            result[3] += 0;
            result[4] += 96733;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 613566;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33132604;
            result[5] += 613566;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 3904515;
            result[1] += 14641933;
            result[2] += 0;
            result[3] += 976128;
            result[4] += 23427094;
            result[5] += 0;
          } else {
            result[0] += 36516360;
            result[1] += 328976;
            result[2] += 584846;
            result[3] += 1535222;
            result[4] += 3180103;
            result[5] += 804164;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 2414841;
            result[2] += 7417011;
            result[3] += 17593841;
            result[4] += 1379909;
            result[5] += 14144069;
          } else {
            result[0] += 33276323;
            result[1] += 0;
            result[2] += 3095471;
            result[3] += 1547735;
            result[4] += 3869339;
            result[5] += 1160801;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1717986;
            result[4] += 1717986;
            result[5] += 39513699;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4601750;
            result[3] += 30678337;
            result[4] += 511305;
            result[5] += 7158278;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 17000912;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35516075;
            result[3] += 7433597;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 7158278;
            result[1] += 21474836;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28275201;
            result[3] += 12526987;
            result[4] += 0;
            result[5] += 2147483;
          } else {
            result[0] += 543666;
            result[1] += 0;
            result[2] += 37513005;
            result[3] += 4168111;
            result[4] += 0;
            result[5] += 724888;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 970614;
            result[1] += 0;
            result[2] += 37611295;
            result[3] += 4125109;
            result[4] += 0;
            result[5] += 242653;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42660773;
            result[3] += 192599;
            result[4] += 0;
            result[5] += 96299;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
            result[0] += 624722;
            result[1] += 312361;
            result[2] += 0;
            result[3] += 468541;
            result[4] += 39826060;
            result[5] += 1717986;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2770946;
            result[3] += 1385473;
            result[4] += 22167573;
            result[5] += 16625679;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 24542670;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18407002;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2006994;
            result[4] += 1261539;
            result[5] += 39681139;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 260301;
            result[2] += 780903;
            result[3] += 7548730;
            result[4] += 2603010;
            result[5] += 31756727;
          } else {
            result[0] += 5842418;
            result[1] += 315806;
            result[2] += 473709;
            result[3] += 23527578;
            result[4] += 3631773;
            result[5] += 9158386;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2120971;
            result[1] += 14846800;
            result[2] += 0;
            result[3] += 1855850;
            result[4] += 22005079;
            result[5] += 2120971;
          } else {
            result[0] += 37273504;
            result[1] += 756822;
            result[2] += 0;
            result[3] += 1021710;
            result[4] += 3178654;
            result[5] += 718981;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 170435;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 16020909;
            result[4] += 1193046;
            result[5] += 21474836;
          } else {
            result[0] += 12916024;
            result[1] += 2178606;
            result[2] += 16495164;
            result[3] += 4357213;
            result[4] += 5135286;
            result[5] += 1867377;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 31814572;
            result[2] += 0;
            result[3] += 1590728;
            result[4] += 9544371;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3482405;
            result[3] += 2321603;
            result[4] += 0;
            result[5] += 37145663;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 894784;
            result[2] += 5368709;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 8053063;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22987148;
            result[3] += 18147749;
            result[4] += 0;
            result[5] += 1814774;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31962547;
            result[3] += 4994148;
            result[4] += 0;
            result[5] += 5992977;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 25769803;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 3904515;
            result[1] += 3904515;
            result[2] += 23427094;
            result[3] += 11713547;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33076184;
            result[3] += 8886139;
            result[4] += 0;
            result[5] += 987348;
          } else {
            result[0] += 183807;
            result[1] += 0;
            result[2] += 40805252;
            result[3] += 1899343;
            result[4] += 0;
            result[5] += 61269;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 2710416;
            result[1] += 416987;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31482527;
            result[5] += 8339742;
          } else {
            result[0] += 1590728;
            result[1] += 38177487;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3181457;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 158876;
            result[2] += 52958;
            result[3] += 1535808;
            result[4] += 2489068;
            result[5] += 38712960;
          } else {
            result[0] += 340870;
            result[1] += 0;
            result[2] += 1022611;
            result[3] += 23179188;
            result[4] += 340870;
            result[5] += 18066132;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
            result[0] += 29262414;
            result[1] += 0;
            result[2] += 943948;
            result[3] += 0;
            result[4] += 11327386;
            result[5] += 1415923;
          } else {
            result[0] += 1041905;
            result[1] += 1273440;
            result[2] += 2662648;
            result[3] += 14470914;
            result[4] += 3704554;
            result[5] += 19796210;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 2551465;
            result[1] += 11056351;
            result[2] += 0;
            result[3] += 5102931;
            result[4] += 24238924;
            result[5] += 0;
          } else {
            result[0] += 35708351;
            result[1] += 166085;
            result[2] += 1162597;
            result[3] += 1860155;
            result[4] += 2524497;
            result[5] += 1527985;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3435973;
            result[3] += 17179869;
            result[4] += 5153960;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1101273;
            result[3] += 0;
            result[4] += 1101273;
            result[5] += 40747125;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 795364;
            result[1] += 4772185;
            result[2] += 7158278;
            result[3] += 15111921;
            result[4] += 0;
            result[5] += 15111921;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5080068;
            result[3] += 35098657;
            result[4] += 0;
            result[5] += 2770946;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31814572;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 1590728;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37025580;
            result[3] += 1481023;
            result[4] += 2962046;
            result[5] += 1481023;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31647127;
            result[3] += 7911781;
            result[4] += 565127;
            result[5] += 2825636;
          } else {
            result[0] += 115923;
            result[1] += 0;
            result[2] += 40978972;
            result[3] += 1854776;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2386092;
            result[1] += 0;
            result[2] += 40563580;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41619373;
            result[5] += 1330299;
          } else {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 12271335;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8259552;
            result[4] += 9911462;
            result[5] += 24778657;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 16519104;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19822925;
            result[5] += 6607641;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1947472;
            result[4] += 1526397;
            result[5] += 39475802;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 26658417;
            result[1] += 11848185;
            result[2] += 2962046;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1481023;
          } else {
            result[0] += 0;
            result[1] += 570759;
            result[2] += 713449;
            result[3] += 22687700;
            result[4] += 1712279;
            result[5] += 17265483;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 2780914;
            result[1] += 7724761;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31517026;
            result[5] += 926971;
          } else {
            result[0] += 34501664;
            result[1] += 270336;
            result[2] += 574464;
            result[3] += 1182721;
            result[4] += 4392964;
            result[5] += 2027521;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 216917;
            result[2] += 3470680;
            result[3] += 21908671;
            result[4] += 1084587;
            result[5] += 16268815;
          } else {
            result[0] += 16382864;
            result[1] += 1549730;
            result[2] += 16825645;
            result[3] += 3542241;
            result[4] += 2213900;
            result[5] += 2435290;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 753503;
            result[2] += 753503;
            result[3] += 5274521;
            result[4] += 1507006;
            result[5] += 34661139;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 33405301;
            result[1] += 0;
            result[2] += 2386092;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7158278;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 757935;
            result[1] += 0;
            result[2] += 31580641;
            result[3] += 8842579;
            result[4] += 0;
            result[5] += 1768515;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29734388;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 114227;
            result[1] += 0;
            result[2] += 40493774;
            result[3] += 2341670;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 174592;
            result[1] += 349184;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41552935;
            result[5] += 872960;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 38177487;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 1867377;
            result[1] += 0;
            result[2] += 0;
            result[3] += 933688;
            result[4] += 15872705;
            result[5] += 24275902;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 843422;
            result[4] += 648786;
            result[5] += 41457463;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
            result[0] += 33251359;
            result[1] += 692736;
            result[2] += 0;
            result[3] += 6234629;
            result[4] += 1385473;
            result[5] += 1385473;
          } else {
            result[0] += 92364;
            result[1] += 277094;
            result[2] += 461824;
            result[3] += 14778382;
            result[4] += 3232771;
            result[5] += 24107235;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 4853070;
            result[1] += 11647368;
            result[2] += 0;
            result[3] += 1213267;
            result[4] += 23780044;
            result[5] += 1455921;
          } else {
            result[0] += 38279631;
            result[1] += 183859;
            result[2] += 183859;
            result[3] += 661895;
            result[4] += 3015302;
            result[5] += 625123;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 329116;
            result[1] += 1645581;
            result[2] += 8392464;
            result[3] += 16949487;
            result[4] += 987348;
            result[5] += 14645673;
          } else {
            result[0] += 25109039;
            result[1] += 0;
            result[2] += 7598788;
            result[3] += 330382;
            result[4] += 8259552;
            result[5] += 1651910;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9761289;
            result[4] += 17570320;
            result[5] += 15618062;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5856773;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 29283867;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13147859;
            result[3] += 24980932;
            result[4] += 0;
            result[5] += 4820881;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 6607641;
            result[4] += 0;
            result[5] += 33038209;
          } else {
            result[0] += 4839399;
            result[1] += 604924;
            result[2] += 32061023;
            result[3] += 2419699;
            result[4] += 2419699;
            result[5] += 604924;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 998829;
            result[1] += 0;
            result[2] += 33294320;
            result[3] += 7324750;
            result[4] += 0;
            result[5] += 1331772;
          } else {
            result[0] += 175543;
            result[1] += 0;
            result[2] += 40667605;
            result[3] += 2106523;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 223696;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42278584;
            result[5] += 447392;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33864165;
            result[5] += 9085507;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39370533;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 3646670;
            result[1] += 1620742;
            result[2] += 405185;
            result[3] += 4457041;
            result[4] += 16207423;
            result[5] += 16612609;
          } else {
            result[0] += 363980;
            result[1] += 227487;
            result[2] += 90995;
            result[3] += 2820847;
            result[4] += 1000945;
            result[5] += 38445416;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1047552;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1047552;
            result[4] += 4190211;
            result[5] += 36664354;
          } else {
            result[0] += 530242;
            result[1] += 530242;
            result[2] += 530242;
            result[3] += 18558500;
            result[4] += 2120971;
            result[5] += 20679472;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 202592;
            result[1] += 202592;
            result[2] += 0;
            result[3] += 33022625;
            result[4] += 810371;
            result[5] += 8711490;
          } else {
            result[0] += 0;
            result[1] += 15032385;
            result[2] += 12884901;
            result[3] += 6442450;
            result[4] += 0;
            result[5] += 8589934;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 23860929;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19088743;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 39268272;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3681400;
            result[5] += 0;
          } else {
            result[0] += 4026531;
            result[1] += 6710886;
            result[2] += 0;
            result[3] += 1006632;
            result[4] += 31205621;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            result[0] += 38163614;
            result[1] += 915593;
            result[2] += 41617;
            result[3] += 1206919;
            result[4] += 1997659;
            result[5] += 624268;
          } else {
            result[0] += 10932644;
            result[1] += 0;
            result[2] += 9631138;
            result[3] += 7809031;
            result[4] += 6247225;
            result[5] += 8329633;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 31496426;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
            result[0] += 3181457;
            result[1] += 6362914;
            result[2] += 14316557;
            result[3] += 4772185;
            result[4] += 3181457;
            result[5] += 11135100;
          } else {
            result[0] += 0;
            result[1] += 1130254;
            result[2] += 14316557;
            result[3] += 26749357;
            result[4] += 0;
            result[5] += 753503;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 5726623;
            result[1] += 4772185;
            result[2] += 21952055;
            result[3] += 1908874;
            result[4] += 3817748;
            result[5] += 4772185;
          } else {
            result[0] += 41564199;
            result[1] += 0;
            result[2] += 1385473;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 21474836;
            result[1] += 1073741;
            result[2] += 13958643;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 2147483;
          } else {
            result[0] += 530242;
            result[1] += 0;
            result[2] += 38310047;
            result[3] += 3667513;
            result[4] += 0;
            result[5] += 441869;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41e80000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 172488;
            result[1] += 172488;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41742252;
            result[5] += 862443;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
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
            result[5] += 42949672;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 28402203;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7620103;
            result[4] += 3463683;
            result[5] += 3463683;
          } else {
            result[0] += 0;
            result[1] += 179517;
            result[2] += 0;
            result[3] += 3006925;
            result[4] += 2692769;
            result[5] += 37070459;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 204522;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28224070;
            result[4] += 2454267;
            result[5] += 12066812;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3221225;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 31138512;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5206020;
            result[1] += 10195124;
            result[2] += 0;
            result[3] += 1518422;
            result[4] += 25379352;
            result[5] += 650752;
          } else {
            result[0] += 37950240;
            result[1] += 416619;
            result[2] += 227246;
            result[3] += 1325607;
            result[4] += 2272469;
            result[5] += 757489;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 202592;
            result[1] += 405185;
            result[2] += 6482969;
            result[3] += 20259279;
            result[4] += 810371;
            result[5] += 14789274;
          } else {
            result[0] += 14796059;
            result[1] += 616502;
            result[2] += 15823563;
            result[3] += 2671510;
            result[4] += 5137520;
            result[5] += 3904515;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 6607641;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13215283;
            result[4] += 16519104;
            result[5] += 6607641;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3734754;
            result[4] += 0;
            result[5] += 39214918;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 32797932;
            result[4] += 0;
            result[5] += 1561806;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29283867;
            result[3] += 5856773;
            result[4] += 0;
            result[5] += 7809031;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34768782;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 2045222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 14316557;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 4521018;
            result[2] += 14693309;
            result[3] += 11302545;
            result[4] += 0;
            result[5] += 12432800;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 1481023;
            result[1] += 0;
            result[2] += 20734324;
            result[3] += 20734324;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36189076;
            result[3] += 6362914;
            result[4] += 0;
            result[5] += 397682;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 22906492;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 5726623;
            result[4] += 8589934;
            result[5] += 0;
          } else {
            result[0] += 8053063;
            result[1] += 0;
            result[2] += 34896609;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37993941;
            result[3] += 4574521;
            result[4] += 0;
            result[5] += 381210;
          } else {
            result[0] += 353980;
            result[1] += 0;
            result[2] += 42241711;
            result[3] += 353980;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 664170;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41399942;
            result[5] += 885560;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2260509;
            result[4] += 9795539;
            result[5] += 30893624;
          } else {
            result[0] += 38738920;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2526451;
            result[5] += 1684300;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 2431113;
            result[2] += 0;
            result[3] += 1620742;
            result[4] += 29983733;
            result[5] += 8914083;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 110981;
            result[3] += 2497074;
            result[4] += 998829;
            result[5] += 39342788;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 5406252;
            result[2] += 0;
            result[3] += 6907989;
            result[4] += 3303820;
            result[5] += 27331610;
          } else {
            result[0] += 1372820;
            result[1] += 196117;
            result[2] += 1568937;
            result[3] += 27260294;
            result[4] += 0;
            result[5] += 12551502;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 4744440;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 3246196;
            result[4] += 22973080;
            result[5] += 1248537;
          } else {
            result[0] += 37482670;
            result[1] += 411897;
            result[2] += 187226;
            result[3] += 1198247;
            result[4] += 2958172;
            result[5] += 711459;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 130546;
            result[1] += 1174915;
            result[2] += 9399320;
            result[3] += 17232087;
            result[4] += 1566553;
            result[5] += 13446250;
          } else {
            result[0] += 25436214;
            result[1] += 0;
            result[2] += 6254806;
            result[3] += 1667948;
            result[4] += 9173716;
            result[5] += 416987;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 2386092;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 27837750;
            result[4] += 795364;
            result[5] += 7158278;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 965161;
            result[1] += 0;
            result[2] += 25576771;
            result[3] += 12064514;
            result[4] += 0;
            result[5] += 4343225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40393144;
            result[3] += 1022611;
            result[4] += 0;
            result[5] += 1533916;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 16607206;
            result[4] += 0;
            result[5] += 572662;
          } else {
            result[0] += 5980334;
            result[1] += 0;
            result[2] += 33707338;
            result[3] += 3262000;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29734388;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42009169;
            result[3] += 940503;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39943195;
            result[3] += 3006477;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 105011;
            result[1] += 0;
            result[2] += 42844661;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38859227;
            result[5] += 4090445;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 4443069;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19253301;
            result[5] += 19253301;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 288640;
            result[3] += 1327745;
            result[4] += 1212289;
            result[5] += 40120998;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 39881839;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3067833;
            result[5] += 0;
          } else {
            result[0] += 168430;
            result[1] += 673720;
            result[2] += 1515870;
            result[3] += 15074493;
            result[4] += 4126537;
            result[5] += 21390621;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
            result[0] += 4569114;
            result[1] += 7919797;
            result[2] += 0;
            result[3] += 609215;
            result[4] += 29242330;
            result[5] += 609215;
          } else {
            result[0] += 37709226;
            result[1] += 696283;
            result[2] += 256525;
            result[3] += 806222;
            result[4] += 3078304;
            result[5] += 403111;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 1252177;
            result[1] += 375653;
            result[2] += 11144375;
            result[3] += 14400036;
            result[4] += 1753047;
            result[5] += 14024383;
          } else {
            result[0] += 30530490;
            result[1] += 0;
            result[2] += 6209591;
            result[3] += 0;
            result[4] += 6209591;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 9203501;
            result[4] += 1533916;
            result[5] += 29144420;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 29386618;
            result[4] += 0;
            result[5] += 2260509;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 4090445;
            result[4] += 0;
            result[5] += 2045222;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 275318;
            result[2] += 27807160;
            result[3] += 11838691;
            result[4] += 550636;
            result[5] += 2477865;
          } else {
            result[0] += 368666;
            result[1] += 0;
            result[2] += 37972672;
            result[3] += 3871000;
            result[4] += 0;
            result[5] += 737333;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 1561806;
            result[1] += 0;
            result[2] += 38264254;
            result[3] += 3123612;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42417238;
            result[3] += 532433;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42980000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 179705;
            result[1] += 179705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40972909;
            result[5] += 1617351;
          } else {
            result[0] += 26908228;
            result[1] += 258732;
            result[2] += 0;
            result[3] += 1811130;
            result[4] += 7761989;
            result[5] += 6209591;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 633476;
            result[4] += 1837080;
            result[5] += 40479116;
          } else {
            result[0] += 374561;
            result[1] += 124853;
            result[2] += 374561;
            result[3] += 9364027;
            result[4] += 9114320;
            result[5] += 23597349;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 2611804;
            result[1] += 17992430;
            result[2] += 0;
            result[3] += 2611804;
            result[4] += 17992430;
            result[5] += 1741202;
          } else {
            result[0] += 35949903;
            result[1] += 190211;
            result[2] += 0;
            result[3] += 2358618;
            result[4] += 2472744;
            result[5] += 1978195;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1461638;
            result[1] += 674602;
            result[2] += 6296287;
            result[3] += 22711607;
            result[4] += 1798939;
            result[5] += 10006599;
          } else {
            result[0] += 12108152;
            result[1] += 1370734;
            result[2] += 20332557;
            result[3] += 685367;
            result[4] += 3198379;
            result[5] += 5254481;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 38475748;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 8589934;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 0;
            result[4] += 3303820;
            result[5] += 36342030;
          } else {
            result[0] += 671088;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 12750684;
            result[4] += 671088;
            result[5] += 7381975;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 187144;
            result[1] += 0;
            result[2] += 38692134;
            result[3] += 3508960;
            result[4] += 0;
            result[5] += 561433;
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
