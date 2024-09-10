
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 6959437;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 199835283;
            result[5] += 7953643;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 78741067;
            result[5] += 132428158;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42580000))) ) ) {
            result[0] += 179447263;
            result[1] += 8825275;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26475825;
            result[5] += 0;
          } else {
            result[0] += 46017506;
            result[1] += 12271335;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 147256021;
            result[5] += 3067833;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 201326591;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 92035013;
            result[2] += 0;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 92035013;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 303316;
            result[2] += 0;
            result[3] += 8796190;
            result[4] += 6672971;
            result[5] += 198975885;
          } else {
            result[0] += 902304;
            result[1] += 1804608;
            result[2] += 0;
            result[3] += 42408290;
            result[4] += 37896770;
            result[5] += 131736391;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 203445819;
            result[2] += 0;
            result[3] += 11302545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7953643;
            result[3] += 0;
            result[4] += 206794721;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 193273528;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42780000))) ) ) {
            result[0] += 186115249;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 9544371;
            result[5] += 0;
          } else {
            result[0] += 11148139;
            result[1] += 0;
            result[2] += 12908371;
            result[3] += 102093484;
            result[4] += 15842092;
            result[5] += 72756276;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
            result[0] += 184675882;
            result[1] += 7903665;
            result[2] += 771089;
            result[3] += 4433763;
            result[4] += 15807330;
            result[5] += 1156633;
          } else {
            result[0] += 41728355;
            result[1] += 19337530;
            result[2] += 34604001;
            result[3] += 46817179;
            result[4] += 23408589;
            result[5] += 48852708;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32482945;
            result[3] += 126322567;
            result[4] += 0;
            result[5] += 55942851;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143772210;
            result[3] += 45497534;
            result[4] += 0;
            result[5] += 25478619;
          } else {
            result[0] += 23860929;
            result[1] += 0;
            result[2] += 59652323;
            result[3] += 131235111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 12632256;
            result[1] += 0;
            result[2] += 113690310;
            result[3] += 0;
            result[4] += 25264513;
            result[5] += 63161283;
          } else {
            result[0] += 175703207;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 107374182;
          } else {
            result[0] += 5017485;
            result[1] += 0;
            result[2] += 181632962;
            result[3] += 24083928;
            result[4] += 0;
            result[5] += 4013988;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
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
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 39045157;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 117135471;
            result[4] += 0;
            result[5] += 19522578;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 186115249;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 23860929;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 178956970;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 339254;
            result[1] += 0;
            result[2] += 209320286;
            result[3] += 5088823;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 204713394;
            result[5] += 10034970;
          } else {
            result[0] += 60570051;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2753184;
            result[4] += 85348709;
            result[5] += 66076419;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 80530636;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 120795955;
            result[5] += 0;
          } else {
            result[0] += 189647906;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22311518;
            result[5] += 2788939;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 24542670;
            result[4] += 128849018;
            result[5] += 30678337;
          } else {
            result[0] += 452578;
            result[1] += 905156;
            result[2] += 678867;
            result[3] += 11993322;
            result[4] += 7920118;
            result[5] += 192798321;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 4051855;
            result[1] += 0;
            result[2] += 4051855;
            result[3] += 52674127;
            result[4] += 0;
            result[5] += 153970525;
          } else {
            result[0] += 2147483;
            result[1] += 0;
            result[2] += 0;
            result[3] += 168577466;
            result[4] += 0;
            result[5] += 44023414;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 17530478;
            result[1] += 27756591;
            result[2] += 0;
            result[3] += 4382619;
            result[4] += 165078674;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 182069265;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14005328;
            result[5] += 18673770;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
            result[0] += 189802847;
            result[1] += 2530704;
            result[2] += 2169175;
            result[3] += 3976821;
            result[4] += 10122818;
            result[5] += 6145996;
          } else {
            result[0] += 33449901;
            result[1] += 2006994;
            result[2] += 78941766;
            result[3] += 58202827;
            result[4] += 13379960;
            result[5] += 28766914;
          }
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 22369621;
            result[4] += 13421772;
            result[5] += 178956970;
          } else {
            result[0] += 0;
            result[1] += 122713351;
            result[2] += 30678337;
            result[3] += 0;
            result[4] += 61356675;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 57266230;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 178956970;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 11302545;
            result[1] += 0;
            result[2] += 45210182;
            result[3] += 124328000;
            result[4] += 0;
            result[5] += 33907636;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 60397977;
            result[3] += 134217727;
            result[4] += 0;
            result[5] += 20132659;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 198229259;
            result[3] += 0;
            result[4] += 0;
            result[5] += 16519104;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 59652323;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 204987075;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42960000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3800856;
            result[1] += 0;
            result[2] += 183391302;
            result[3] += 26605992;
            result[4] += 0;
            result[5] += 950214;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 6710886;
            result[1] += 0;
            result[2] += 183430894;
            result[3] += 22369621;
            result[4] += 0;
            result[5] += 2236962;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 211373144;
            result[3] += 2953317;
            result[4] += 0;
            result[5] += 421902;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
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
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1079137;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 209352677;
            result[5] += 4316550;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 122713351;
            result[5] += 92035013;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
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
            result[3] += 7371958;
            result[4] += 1923119;
            result[5] += 205453286;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 182933792;
            result[1] += 7953643;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15907286;
            result[5] += 7953643;
          } else {
            result[0] += 1509654;
            result[1] += 5283791;
            result[2] += 10190168;
            result[3] += 52460496;
            result[4] += 15096545;
            result[5] += 130207707;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 7880673;
            result[1] += 11821010;
            result[2] += 1970168;
            result[3] += 13791179;
            result[4] += 169434489;
            result[5] += 9850842;
          } else {
            result[0] += 0;
            result[1] += 190064644;
            result[2] += 0;
            result[3] += 7405116;
            result[4] += 17278604;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 183648075;
            result[1] += 3301148;
            result[2] += 521233;
            result[3] += 5212338;
            result[4] += 18416930;
            result[5] += 3648637;
          } else {
            result[0] += 68612548;
            result[1] += 2673216;
            result[2] += 33860738;
            result[3] += 55246467;
            result[4] += 16930369;
            result[5] += 37425026;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cf0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 187904819;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42990000))) ) ) {
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
            result[4] += 71582788;
            result[5] += 143165576;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12782640;
            result[3] += 163617801;
            result[4] += 0;
            result[5] += 38347922;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 101058054;
            result[3] += 37896770;
            result[4] += 12632256;
            result[5] += 63161283;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 55834574;
            result[3] += 103079215;
            result[4] += 0;
            result[5] += 38654705;
          } else {
            result[0] += 9544371;
            result[1] += 4772185;
            result[2] += 157482134;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 19088743;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 171798691;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 159072862;
            result[3] += 46727653;
            result[4] += 0;
            result[5] += 8947848;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 39443577;
            result[1] += 4382619;
            result[2] += 131478590;
            result[3] += 4382619;
            result[4] += 26295718;
            result[5] += 8765239;
          } else {
            result[0] += 214748364;
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
            result[2] += 138954824;
            result[3] += 75793540;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1274471;
            result[1] += 0;
            result[2] += 207101538;
            result[3] += 5735119;
            result[4] += 0;
            result[5] += 637235;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42f00000))) ) ) {
            result[0] += 906111;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 209311697;
            result[5] += 4530556;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42540000))) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42850000))) ) ) {
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
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 204987075;
            result[5] += 9761289;
          } else {
            result[0] += 180111531;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13854733;
            result[5] += 20782099;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 19522578;
            result[2] += 0;
            result[3] += 45552683;
            result[4] += 97612893;
            result[5] += 52060209;
          } else {
            result[0] += 720632;
            result[1] += 720632;
            result[2] += 720632;
            result[3] += 11530113;
            result[4] += 6485688;
            result[5] += 194570666;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 71582788;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 24245783;
            result[4] += 0;
            result[5] += 190502581;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 1234186;
            result[1] += 2468372;
            result[2] += 2468372;
            result[3] += 174020226;
            result[4] += 0;
            result[5] += 34557208;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 214279481;
            result[2] += 0;
            result[3] += 468882;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 22311518;
            result[1] += 18128108;
            result[2] += 0;
            result[3] += 1394469;
            result[4] += 171519797;
            result[5] += 1394469;
          } else {
            result[0] += 3639802;
            result[1] += 149231914;
            result[2] += 3639802;
            result[3] += 3639802;
            result[4] += 40037830;
            result[5] += 14559211;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 195082763;
            result[1] += 1966560;
            result[2] += 0;
            result[3] += 3343152;
            result[4] += 10029456;
            result[5] += 4326432;
          } else {
            result[0] += 71315688;
            result[1] += 3205199;
            result[2] += 28846795;
            result[3] += 51283191;
            result[4] += 10416898;
            result[5] += 49680591;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42910000))) ) ) {
            result[0] += 17895697;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 187904819;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 46318274;
            result[2] += 63161283;
            result[3] += 4210752;
            result[4] += 29475265;
            result[5] += 71582788;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 967334;
            result[1] += 0;
            result[2] += 49334083;
            result[3] += 118014867;
            result[4] += 1934669;
            result[5] += 44497408;
          } else {
            result[0] += 41122027;
            result[1] += 0;
            result[2] += 146211652;
            result[3] += 4569114;
            result[4] += 4569114;
            result[5] += 18276456;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 47721858;
            result[1] += 0;
            result[2] += 167026505;
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 99704597;
            result[3] += 76695844;
            result[4] += 7669584;
            result[5] += 30678337;
          } else {
            result[0] += 2505815;
            result[1] += 0;
            result[2] += 197458239;
            result[3] += 14283146;
            result[4] += 0;
            result[5] += 501163;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42800000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423c0000))) ) ) {
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 107374182;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 214219427;
            result[2] += 0;
            result[3] += 0;
            result[4] += 528936;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 11198534;
            result[1] += 2634949;
            result[2] += 0;
            result[3] += 2634949;
            result[4] += 176541600;
            result[5] += 21738331;
          } else {
            result[0] += 13707342;
            result[1] += 159918995;
            result[2] += 0;
            result[3] += 9138228;
            result[4] += 22845570;
            result[5] += 9138228;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 28010656;
            result[1] += 9336885;
            result[2] += 0;
            result[3] += 0;
            result[4] += 177400823;
            result[5] += 0;
          } else {
            result[0] += 202665336;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5492285;
            result[5] += 6590742;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26372606;
            result[3] += 0;
            result[4] += 86652848;
            result[5] += 101722909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 937765;
            result[3] += 6876949;
            result[4] += 5939183;
            result[5] += 200994466;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 10316609;
            result[1] += 5972773;
            result[2] += 6244263;
            result[3] += 90677564;
            result[4] += 21176197;
            result[5] += 80360955;
          } else {
            result[0] += 85582374;
            result[1] += 25357740;
            result[2] += 26942599;
            result[3] += 16641017;
            result[4] += 40413898;
            result[5] += 19810734;
          }
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 210274440;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 171798691;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 132753534;
            result[3] += 42949672;
            result[4] += 11713547;
            result[5] += 23427094;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 207820998;
            result[1] += 0;
            result[2] += 6927366;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 48806446;
            result[1] += 0;
            result[2] += 156180628;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9761289;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 1528458;
            result[1] += 0;
            result[2] += 190547777;
            result[3] += 20379441;
            result[4] += 0;
            result[5] += 2292687;
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 214241882;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 506481;
            result[5] += 0;
          } else {
            result[0] += 112487238;
            result[1] += 0;
            result[2] += 102261126;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42860000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 212426760;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2321603;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 19522578;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 136658050;
            result[5] += 58567735;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42810000))) ) ) {
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
            result[3] += 0;
            result[4] += 68470493;
            result[5] += 146277871;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 199409195;
            result[5] += 15339168;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1005062;
            result[4] += 4020250;
            result[5] += 209723052;
          } else {
            result[0] += 0;
            result[1] += 11302545;
            result[2] += 3767515;
            result[3] += 30140121;
            result[4] += 25430727;
            result[5] += 144107455;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 46366124;
            result[4] += 4880644;
            result[5] += 143979017;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10034970;
            result[3] += 120419643;
            result[4] += 0;
            result[5] += 84293750;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3181457;
            result[3] += 178161606;
            result[4] += 0;
            result[5] += 33405301;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 193273528;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
            result[0] += 148757981;
            result[1] += 5592405;
            result[2] += 0;
            result[3] += 3355443;
            result[4] += 52568610;
            result[5] += 4473924;
          } else {
            result[0] += 4032833;
            result[1] += 3024624;
            result[2] += 7057457;
            result[3] += 63517121;
            result[4] += 33270873;
            result[5] += 103845453;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 18488269;
            result[1] += 99552222;
            result[2] += 0;
            result[3] += 8533047;
            result[4] += 83908301;
            result[5] += 4266523;
          } else {
            result[0] += 188465120;
            result[1] += 3871175;
            result[2] += 2852445;
            result[3] += 2241206;
            result[4] += 14262225;
            result[5] += 3056191;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c40000))) ) ) {
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13707342;
            result[3] += 173626337;
            result[4] += 0;
            result[5] += 27414684;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 92035013;
            result[3] += 96417633;
            result[4] += 0;
            result[5] += 26295718;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 152276113;
            result[3] += 50758704;
            result[4] += 0;
            result[5] += 11713547;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 47721858;
            result[1] += 0;
            result[2] += 109362593;
            result[3] += 27837750;
            result[4] += 15907286;
            result[5] += 13918875;
          } else {
            result[0] += 1928877;
            result[1] += 0;
            result[2] += 171670099;
            result[3] += 31504999;
            result[4] += 0;
            result[5] += 9644387;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 195972551;
            result[3] += 18775813;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214244260;
            result[3] += 504104;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1835456;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 211077452;
            result[5] += 1835456;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 8947848;
            result[3] += 8947848;
            result[4] += 71582788;
            result[5] += 116322030;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 4994148;
            result[2] += 0;
            result[3] += 0;
            result[4] += 129847848;
            result[5] += 79906368;
          } else {
            result[0] += 299927;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4498918;
            result[4] += 3299206;
            result[5] += 206650311;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 166539548;
            result[1] += 0;
            result[2] += 8765239;
            result[3] += 0;
            result[4] += 39443577;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 950214;
            result[2] += 1425321;
            result[3] += 78392655;
            result[4] += 16153638;
            result[5] += 117826536;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x424c0000))) ) ) {
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 166256798;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48491566;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
            result[0] += 21474836;
            result[1] += 65958426;
            result[2] += 0;
            result[3] += 0;
            result[4] += 124247268;
            result[5] += 3067833;
          } else {
            result[0] += 185330780;
            result[1] += 1287019;
            result[2] += 735439;
            result[3] += 3125618;
            result[4] += 20224589;
            result[5] += 4044917;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 9409077;
            result[1] += 8855602;
            result[2] += 70291346;
            result[3] += 65310069;
            result[4] += 8302127;
            result[5] += 52580140;
          } else {
            result[0] += 186858966;
            result[1] += 0;
            result[2] += 5577879;
            result[3] += 0;
            result[4] += 22311518;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 214748364;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37896770;
            result[4] += 0;
            result[5] += 176851594;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8259552;
            result[1] += 0;
            result[2] += 99114629;
            result[3] += 41297762;
            result[4] += 0;
            result[5] += 66076419;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 171798691;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 55675501;
            result[1] += 0;
            result[2] += 55675501;
            result[3] += 15907286;
            result[4] += 7953643;
            result[5] += 79536431;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 3237412;
            result[1] += 0;
            result[2] += 162949764;
            result[3] += 46402912;
            result[4] += 0;
            result[5] += 2158275;
          } else {
            result[0] += 193273528;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 189218838;
            result[3] += 22526052;
            result[4] += 0;
            result[5] += 3003473;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 210966103;
            result[3] += 3782260;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 66076419;
            result[1] += 0;
            result[2] += 148671944;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 1875531;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 210997301;
            result[5] += 1875531;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 184683593;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30064771;
            result[5] += 0;
          } else {
            result[0] += 2684354;
            result[1] += 18790481;
            result[2] += 2684354;
            result[3] += 0;
            result[4] += 91268055;
            result[5] += 99321118;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 190887435;
            result[5] += 23860929;
          } else {
            result[0] += 937765;
            result[1] += 0;
            result[2] += 234441;
            result[3] += 16410901;
            result[4] += 9612099;
            result[5] += 187553156;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429f0000))) ) ) {
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
            result[3] += 178580219;
            result[4] += 2260509;
            result[5] += 33907636;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 82595524;
            result[2] += 0;
            result[3] += 82595524;
            result[4] += 16519104;
            result[5] += 33038209;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 176851594;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37896770;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 166336883;
            result[1] += 7447920;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39722240;
            result[5] += 1241320;
          } else {
            result[0] += 8898412;
            result[1] += 8305185;
            result[2] += 36186879;
            result[3] += 52797249;
            result[4] += 29661376;
            result[5] += 78899261;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 2309122;
            result[1] += 108528743;
            result[2] += 0;
            result[3] += 9236488;
            result[4] += 94674010;
            result[5] += 0;
          } else {
            result[0] += 187782692;
            result[1] += 586210;
            result[2] += 7034523;
            result[3] += 5471295;
            result[4] += 11724205;
            result[5] += 2149437;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9988296;
            result[3] += 24970740;
            result[4] += 34959036;
            result[5] += 144830292;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 5752188;
            result[1] += 0;
            result[2] += 17256565;
            result[3] += 141887312;
            result[4] += 0;
            result[5] += 49852298;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 25264513;
            result[4] += 0;
            result[5] += 164219337;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16519104;
            result[3] += 0;
            result[4] += 0;
            result[5] += 198229259;
          } else {
            result[0] += 11608019;
            result[1] += 11608019;
            result[2] += 46432078;
            result[3] += 98668167;
            result[4] += 29020049;
            result[5] += 17412029;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 181710154;
            result[3] += 33038209;
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
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 171798691;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10226112;
            result[4] += 0;
            result[5] += 204522252;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 80530636;
            result[3] += 80530636;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 11302545;
            result[1] += 0;
            result[2] += 180840728;
            result[3] += 0;
            result[4] += 0;
            result[5] += 22605091;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 174483046;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 134217727;
            result[1] += 0;
            result[2] += 80530636;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 757935;
            result[1] += 0;
            result[2] += 197315850;
            result[3] += 16169288;
            result[4] += 0;
            result[5] += 505290;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 2511676;
            result[2] += 0;
            result[3] += 0;
            result[4] += 212236687;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 177400823;
            result[5] += 37347541;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
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
            result[4] += 19522578;
            result[5] += 195225786;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
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
            result[3] += 5023353;
            result[4] += 3453555;
            result[5] += 206271455;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 56164956;
            result[2] += 0;
            result[3] += 26430567;
            result[4] += 109026092;
            result[5] += 23126746;
          } else {
            result[0] += 0;
            result[1] += 1173488;
            result[2] += 2933720;
            result[3] += 85077904;
            result[4] += 7627674;
            result[5] += 117935577;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 194296139;
            result[5] += 20452225;
          } else {
            result[0] += 0;
            result[1] += 193273528;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 199409195;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15339168;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 15123124;
            result[1] += 52930934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 137620430;
            result[5] += 9073874;
          } else {
            result[0] += 186046912;
            result[1] += 2050103;
            result[2] += 683367;
            result[3] += 6491995;
            result[4] += 14692409;
            result[5] += 4783575;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 6085986;
            result[1] += 4347132;
            result[2] += 8694265;
            result[3] += 66076419;
            result[4] += 36515916;
            result[5] += 93028643;
          } else {
            result[0] += 101722909;
            result[1] += 0;
            result[2] += 92680873;
            result[3] += 20344581;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 171798691;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 5883516;
            result[2] += 0;
            result[3] += 41184617;
            result[4] += 5883516;
            result[5] += 161796713;
          } else {
            result[0] += 0;
            result[1] += 71582788;
            result[2] += 107374182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19272289;
            result[3] += 173450602;
            result[4] += 0;
            result[5] += 22025473;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 132152839;
            result[3] += 57816867;
            result[4] += 8259552;
            result[5] += 16519104;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 101722909;
            result[3] += 39558909;
            result[4] += 11302545;
            result[5] += 62164000;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 113025455;
            result[3] += 45210182;
            result[4] += 0;
            result[5] += 56512727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 193273528;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 1851279;
            result[1] += 0;
            result[2] += 172168947;
            result[3] += 27769185;
            result[4] += 0;
            result[5] += 12958953;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 4427801;
            result[1] += 0;
            result[2] += 173422218;
            result[3] += 30994609;
            result[4] += 737966;
            result[5] += 5165768;
          } else {
            result[0] += 161061273;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
            result[0] += 71582788;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 212308042;
            result[3] += 2440322;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 65358197;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 112042625;
            result[5] += 37347541;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13854733;
            result[5] += 200893631;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 4668442;
            result[1] += 14005328;
            result[2] += 0;
            result[3] += 0;
            result[4] += 191406151;
            result[5] += 4668442;
          } else {
            result[0] += 0;
            result[1] += 204010946;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 20452225;
            result[1] += 20452225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 173843914;
            result[5] += 0;
          } else {
            result[0] += 203961917;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10786447;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 107374182;
            result[5] += 107374182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5614336;
            result[4] += 7017920;
            result[5] += 202116108;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9336885;
            result[3] += 71582788;
            result[4] += 24898361;
            result[5] += 108930329;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 28010656;
            result[1] += 34235246;
            result[2] += 0;
            result[3] += 9336885;
            result[4] += 130716395;
            result[5] += 12449180;
          } else {
            result[0] += 69156253;
            result[1] += 25478619;
            result[2] += 0;
            result[3] += 50957239;
            result[4] += 18199013;
            result[5] += 50957239;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 1106950;
            result[1] += 0;
            result[2] += 1106950;
            result[3] += 50919715;
            result[4] += 17711205;
            result[5] += 143903543;
          } else {
            result[0] += 5183581;
            result[1] += 6664604;
            result[2] += 8886139;
            result[3] += 117000833;
            result[4] += 4443069;
            result[5] += 72570137;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 4051855;
            result[1] += 206644652;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4051855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 5965232;
            result[3] += 0;
            result[4] += 190887435;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 161061273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 19522578;
            result[1] += 126896760;
            result[2] += 0;
            result[3] += 19522578;
            result[4] += 29283867;
            result[5] += 19522578;
          } else {
            result[0] += 202129853;
            result[1] += 934704;
            result[2] += 701028;
            result[3] += 3505141;
            result[4] += 5374551;
            result[5] += 2103085;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 5302428;
            result[1] += 0;
            result[2] += 90141288;
            result[3] += 68931573;
            result[4] += 10604857;
            result[5] += 39768215;
          } else {
            result[0] += 149824440;
            result[1] += 0;
            result[2] += 14982444;
            result[3] += 0;
            result[4] += 49941480;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 131235111;
            result[2] += 47721858;
            result[3] += 11930464;
            result[4] += 23860929;
            result[5] += 0;
          } else {
            result[0] += 9850842;
            result[1] += 0;
            result[2] += 35463032;
            result[3] += 72896233;
            result[4] += 7880673;
            result[5] += 88657581;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 164043889;
            result[3] += 2982616;
            result[4] += 14913080;
            result[5] += 23860929;
          } else {
            result[0] += 146933091;
            result[1] += 0;
            result[2] += 33907636;
            result[3] += 33907636;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 130382935;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 130150524;
            result[3] += 74836551;
            result[4] += 0;
            result[5] += 9761289;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 171798691;
          } else {
            result[0] += 1988410;
            result[1] += 0;
            result[2] += 199835283;
            result[3] += 12676118;
            result[4] += 0;
            result[5] += 248551;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 187904819;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 122713351;
            result[5] += 92035013;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 887389;
            result[2] += 0;
            result[3] += 0;
            result[4] += 204099685;
            result[5] += 9761289;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 171798691;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 0;
            result[4] += 169538182;
            result[5] += 33907636;
          } else {
            result[0] += 0;
            result[1] += 644889;
            result[2] += 967334;
            result[3] += 3869339;
            result[4] += 7416234;
            result[5] += 201850565;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 17978932;
            result[1] += 0;
            result[2] += 998829;
            result[3] += 13983614;
            result[4] += 37955524;
            result[5] += 143831462;
          } else {
            result[0] += 23479154;
            result[1] += 5153960;
            result[2] += 12025908;
            result[3] += 100215903;
            result[4] += 10307921;
            result[5] += 63565515;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 71582788;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
            result[0] += 14559211;
            result[1] += 63089915;
            result[2] += 0;
            result[3] += 3639802;
            result[4] += 127393097;
            result[5] += 6066337;
          } else {
            result[0] += 188108694;
            result[1] += 1087333;
            result[2] += 543666;
            result[3] += 4349333;
            result[4] += 12504335;
            result[5] += 8155001;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 2968871;
            result[1] += 3958495;
            result[2] += 7916990;
            result[3] += 58387804;
            result[4] += 7916990;
            result[5] += 133599213;
          } else {
            result[0] += 39881839;
            result[1] += 0;
            result[2] += 73628010;
            result[3] += 60334064;
            result[4] += 17384391;
            result[5] += 23520058;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10226112;
            result[3] += 184070026;
            result[4] += 0;
            result[5] += 20452225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 97612893;
            result[3] += 78090314;
            result[4] += 19522578;
            result[5] += 19522578;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 71582788;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 80530636;
            result[4] += 0;
            result[5] += 134217727;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42f70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 170177949;
            result[3] += 44570415;
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 134217727;
            result[3] += 72477573;
            result[4] += 0;
            result[5] += 8053063;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 194844857;
            result[3] += 15713294;
            result[4] += 0;
            result[5] += 4190211;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 207707434;
            result[3] += 7040929;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5302428;
            result[1] += 0;
            result[2] += 174980149;
            result[3] += 34465786;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 1749477;
            result[1] += 0;
            result[2] += 209499932;
            result[3] += 3498955;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 2191309;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 212557054;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 134217727;
            result[5] += 80530636;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 154350387;
            result[5] += 46976204;
          } else {
            result[0] += 4966968;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4674794;
            result[4] += 4966968;
            result[5] += 200139632;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 16330674;
            result[1] += 12248005;
            result[2] += 0;
            result[3] += 29395213;
            result[4] += 15514140;
            result[5] += 141260331;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4013988;
            result[3] += 141493081;
            result[4] += 3010491;
            result[5] += 66230804;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 18780275;
            result[1] += 55524292;
            result[2] += 2449601;
            result[3] += 816533;
            result[4] += 123296589;
            result[5] += 13881073;
          } else {
            result[0] += 177992997;
            result[1] += 2425481;
            result[2] += 373150;
            result[3] += 6716716;
            result[4] += 18284395;
            result[5] += 8955622;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 5143673;
            result[1] += 1928877;
            result[2] += 34076836;
            result[3] += 99015713;
            result[4] += 7072550;
            result[5] += 67510713;
          } else {
            result[0] += 91105366;
            result[1] += 0;
            result[2] += 98914398;
            result[3] += 15618062;
            result[4] += 1301505;
            result[5] += 7809031;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 212653258;
            result[2] += 0;
            result[3] += 1047552;
            result[4] += 1047552;
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425a0000))) ) ) {
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
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8259552;
            result[3] += 136282616;
            result[4] += 12389328;
            result[5] += 57816867;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 101058054;
            result[3] += 0;
            result[4] += 0;
            result[5] += 113690310;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 140053281;
            result[3] += 65358197;
            result[4] += 0;
            result[5] += 9336885;
          } else {
            result[0] += 0;
            result[1] += 161061273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 128849018;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3067833;
            result[1] += 0;
            result[2] += 134984686;
            result[3] += 73628010;
            result[4] += 0;
            result[5] += 3067833;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 194705184;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 2863311;
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
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 178956970;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 161061273;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 130716395;
            result[3] += 65358197;
            result[4] += 0;
            result[5] += 18673770;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 196852667;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 204945301;
            result[3] += 8884026;
            result[4] += 0;
            result[5] += 919037;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1917396;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 211552704;
            result[5] += 1278264;
          } else {
            result[0] += 0;
            result[1] += 178956970;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 178956970;
          } else {
            result[0] += 7405116;
            result[1] += 40728138;
            result[2] += 0;
            result[3] += 0;
            result[4] += 148102320;
            result[5] += 18512790;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 49557314;
            result[2] += 0;
            result[3] += 0;
            result[4] += 165191049;
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
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
            result[0] += 110837865;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 96983132;
            result[5] += 6927366;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 5781686;
            result[5] += 201808399;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1928877;
            result[1] += 1928877;
            result[2] += 9001428;
            result[3] += 102230508;
            result[4] += 12859183;
            result[5] += 86799488;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 116254753;
            result[1] += 14531844;
            result[2] += 1076432;
            result[3] += 20452225;
            result[4] += 38751584;
            result[5] += 23681523;
          } else {
            result[0] += 196708513;
            result[1] += 2224091;
            result[2] += 1482727;
            result[3] += 3706818;
            result[4] += 7907879;
            result[5] += 2718333;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 3609216;
            result[1] += 4511520;
            result[2] += 33385249;
            result[3] += 63161283;
            result[4] += 26166817;
            result[5] += 83914276;
          } else {
            result[0] += 180111531;
            result[1] += 0;
            result[2] += 6927366;
            result[3] += 0;
            result[4] += 27709466;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 196852667;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11671106;
            result[3] += 165729716;
            result[4] += 0;
            result[5] += 37347541;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 80530636;
            result[3] += 80530636;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 103397360;
            result[3] += 63629145;
            result[4] += 0;
            result[5] += 47721858;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 128849018;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7405116;
            result[1] += 0;
            result[2] += 188830458;
            result[3] += 18512790;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 0;
            result[4] += 107374182;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 175703207;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 19522578;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 214748364;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 1979247;
            result[1] += 0;
            result[2] += 181101155;
            result[3] += 27709466;
            result[4] += 0;
            result[5] += 3958495;
          } else {
            result[0] += 3024624;
            result[1] += 0;
            result[2] += 203557252;
            result[3] += 7561562;
            result[4] += 0;
            result[5] += 604924;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 876523;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 208612697;
            result[5] += 5259143;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 214748364;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 192722891;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16519104;
            result[5] += 5506368;
          } else {
            result[0] += 28633115;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 114532461;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5651272;
            result[4] += 152584364;
            result[5] += 56512727;
          } else {
            result[0] += 901357;
            result[1] += 225339;
            result[2] += 676017;
            result[3] += 10816286;
            result[4] += 10140269;
            result[5] += 191989094;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4936744;
            result[3] += 27152092;
            result[4] += 0;
            result[5] += 182659528;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 171798691;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 27709466;
            result[4] += 0;
            result[5] += 187038898;
          } else {
            result[0] += 0;
            result[1] += 3303820;
            result[2] += 3303820;
            result[3] += 160785955;
            result[4] += 1101273;
            result[5] += 46253493;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 5302428;
            result[1] += 15907286;
            result[2] += 0;
            result[3] += 2651214;
            result[4] += 177631363;
            result[5] += 13256071;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3520464;
            result[1] += 133777669;
            result[2] += 0;
            result[3] += 14081859;
            result[4] += 63368369;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
            result[0] += 190184427;
            result[1] += 4652260;
            result[2] += 186090;
            result[3] += 3535718;
            result[4] += 14701144;
            result[5] += 1488723;
          } else {
            result[0] += 63448380;
            result[1] += 0;
            result[2] += 29283867;
            result[3] += 34164512;
            result[4] += 70769347;
            result[5] += 17082256;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 2440322;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 112254827;
            result[4] += 4880644;
            result[5] += 75649992;
          } else {
            result[0] += 129847848;
            result[1] += 4994148;
            result[2] += 29964888;
            result[3] += 24970740;
            result[4] += 14982444;
            result[5] += 9988296;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 6710886;
            result[2] += 6710886;
            result[3] += 13421772;
            result[4] += 33554431;
            result[5] += 154350387;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41468649;
            result[3] += 121443902;
            result[4] += 0;
            result[5] += 51835812;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 134217727;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 17412029;
            result[1] += 14510024;
            result[2] += 118982202;
            result[3] += 14510024;
            result[4] += 8706014;
            result[5] += 40628069;
          } else {
            result[0] += 114532461;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 85899345;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1727198;
            result[1] += 0;
            result[2] += 169265467;
            result[3] += 35119705;
            result[4] += 2302931;
            result[5] += 6333061;
          } else {
            result[0] += 1860904;
            result[1] += 0;
            result[2] += 205443842;
            result[3] += 7443617;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 958698;
            result[2] += 0;
            result[3] += 0;
            result[4] += 211872270;
            result[5] += 1917396;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 110627945;
            result[5] += 104120419;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3024624;
            result[4] += 1512312;
            result[5] += 210211427;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37058346;
            result[4] += 22805136;
            result[5] += 154884882;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 200431807;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 1690932;
            result[1] += 10709236;
            result[2] += 8454660;
            result[3] += 78346516;
            result[4] += 12400168;
            result[5] += 103146852;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 1717986;
            result[1] += 13743895;
            result[2] += 0;
            result[3] += 0;
            result[4] += 194132521;
            result[5] += 5153960;
          } else {
            result[0] += 0;
            result[1] += 196074593;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18673770;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 134217727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 213690491;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1057873;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 3303820;
            result[1] += 69380240;
            result[2] += 0;
            result[3] += 39645851;
            result[4] += 95810808;
            result[5] += 6607641;
          } else {
            result[0] += 193443215;
            result[1] += 565623;
            result[2] += 942705;
            result[3] += 4713528;
            result[4] += 12066633;
            result[5] += 3016658;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 55964725;
            result[3] += 75487303;
            result[4] += 10412041;
            result[5] += 72884293;
          } else {
            result[0] += 129399655;
            result[1] += 0;
            result[2] += 27531841;
            result[3] += 11012736;
            result[4] += 41297762;
            result[5] += 5506368;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 13421772;
            result[4] += 120795955;
            result[5] += 67108863;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 147256021;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 190589173;
            result[4] += 2684354;
            result[5] += 18790481;
          } else {
            result[0] += 7738679;
            result[1] += 25150709;
            result[2] += 56105428;
            result[3] += 81256138;
            result[4] += 11608019;
            result[5] += 32889389;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 4994148;
            result[1] += 0;
            result[2] += 119859552;
            result[3] += 54935628;
            result[4] += 0;
            result[5] += 34959036;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 207820998;
            result[3] += 6927366;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 61356675;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 153391689;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 124853700;
            result[3] += 59929776;
            result[4] += 0;
            result[5] += 29964888;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2702782;
            result[1] += 0;
            result[2] += 198531669;
            result[3] += 12039668;
            result[4] += 0;
            result[5] += 1474245;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 4190211;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 208463046;
            result[5] += 2095105;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 105421924;
            result[5] += 109326440;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 91466896;
            result[2] += 0;
            result[3] += 0;
            result[4] += 123281468;
            result[5] += 0;
          } else {
            result[0] += 208432236;
            result[1] += 3158064;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3158064;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 198229259;
            result[5] += 16519104;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 568869;
            result[3] += 7679742;
            result[4] += 5404263;
            result[5] += 201095488;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 2497074;
            result[1] += 13733907;
            result[2] += 7491222;
            result[3] += 23722203;
            result[4] += 39953184;
            result[5] += 127350774;
          } else {
            result[0] += 664855;
            result[1] += 1994566;
            result[2] += 21275379;
            result[3] += 120338866;
            result[4] += 1329711;
            result[5] += 69144984;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 26512143;
            result[1] += 11930464;
            result[2] += 0;
            result[3] += 17232893;
            result[4] += 141839969;
            result[5] += 17232893;
          } else {
            result[0] += 0;
            result[1] += 207078780;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 186903550;
            result[1] += 4577229;
            result[2] += 1335025;
            result[3] += 3814358;
            result[4] += 13540971;
            result[5] += 4577229;
          } else {
            result[0] += 60813696;
            result[1] += 0;
            result[2] += 45610272;
            result[3] += 41809416;
            result[4] += 24705564;
            result[5] += 41809416;
          }
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13015052;
            result[4] += 6507526;
            result[5] += 195225786;
          } else {
            result[0] += 17895697;
            result[1] += 8947848;
            result[2] += 62634939;
            result[3] += 44739242;
            result[4] += 44739242;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 134055039;
            result[4] += 0;
            result[5] += 37743651;
          } else {
            result[0] += 0;
            result[1] += 46976204;
            result[2] += 100663295;
            result[3] += 0;
            result[4] += 6710886;
            result[5] += 60397977;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 143165576;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 4197036;
            result[1] += 0;
            result[2] += 167181951;
            result[3] += 37073821;
            result[4] += 0;
            result[5] += 6295554;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 214748364;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 198122684;
            result[3] += 15932943;
            result[4] += 0;
            result[5] += 692736;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 213321465;
            result[3] += 1426899;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 1584858;
            result[1] += 1584858;
            result[2] += 0;
            result[3] += 0;
            result[4] += 205239212;
            result[5] += 6339435;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 107374182;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
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
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
            result[0] += 331914;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4978710;
            result[4] += 6638280;
            result[5] += 202799460;
          } else {
            result[0] += 28422577;
            result[1] += 5263440;
            result[2] += 0;
            result[3] += 28422577;
            result[4] += 23159137;
            result[5] += 129480631;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 7615190;
            result[1] += 1523038;
            result[2] += 0;
            result[3] += 54829369;
            result[4] += 13707342;
            result[5] += 137073424;
          } else {
            result[0] += 7844689;
            result[1] += 2941758;
            result[2] += 980586;
            result[3] += 135320887;
            result[4] += 3922344;
            result[5] += 63738099;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 212642988;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2105376;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 5052902;
            result[1] += 12632256;
            result[2] += 0;
            result[3] += 0;
            result[4] += 197063205;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 187904819;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 137902136;
            result[1] += 9474192;
            result[2] += 0;
            result[3] += 11579568;
            result[4] += 36844082;
            result[5] += 18948385;
          } else {
            result[0] += 59175104;
            result[1] += 2386092;
            result[2] += 50107951;
            result[3] += 56311793;
            result[4] += 5249404;
            result[5] += 41518017;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
            result[0] += 199707623;
            result[1] += 1671193;
            result[2] += 557064;
            result[3] += 1392661;
            result[4] += 11419822;
            result[5] += 0;
          } else {
            result[0] += 95102847;
            result[1] += 0;
            result[2] += 67492343;
            result[3] += 9203501;
            result[4] += 39881839;
            result[5] += 3067833;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42680000))) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37347541;
            result[4] += 0;
            result[5] += 177400823;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 119304647;
            result[3] += 0;
            result[4] += 0;
            result[5] += 95443717;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 204522252;
            result[4] += 0;
            result[5] += 10226112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 128849018;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 202817900;
            result[3] += 0;
            result[4] += 0;
            result[5] += 11930464;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 0;
            result[4] += 0;
            result[5] += 199409195;
          } else {
            result[0] += 0;
            result[1] += 5651272;
            result[2] += 45210182;
            result[3] += 152584364;
            result[4] += 0;
            result[5] += 11302545;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 15339168;
            result[1] += 0;
            result[2] += 159527356;
            result[3] += 21474836;
            result[4] += 3067833;
            result[5] += 15339168;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e80000))) ) ) {
            result[0] += 10475529;
            result[1] += 5237764;
            result[2] += 183321774;
            result[3] += 15713294;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 155096041;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 4382619;
            result[1] += 0;
            result[2] += 176181311;
            result[3] += 34184433;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 210266659;
            result[3] += 4481705;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 2377288;
            result[2] += 0;
            result[3] += 0;
            result[4] += 207616500;
            result[5] += 4754576;
          } else {
            result[0] += 0;
            result[1] += 171798691;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 5965232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 65617555;
            result[5] += 143165576;
          } else {
            result[0] += 190064644;
            result[1] += 17278604;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2468372;
            result[5] += 4936744;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6481906;
            result[4] += 7891016;
            result[5] += 200375442;
          } else {
            result[0] += 15790320;
            result[1] += 12632256;
            result[2] += 0;
            result[3] += 37896770;
            result[4] += 72635476;
            result[5] += 75793540;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 11126858;
            result[1] += 0;
            result[2] += 1112685;
            result[3] += 79000693;
            result[4] += 0;
            result[5] += 123508126;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2309122;
            result[3] += 168565920;
            result[4] += 0;
            result[5] += 43873321;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 182069265;
            result[2] += 0;
            result[3] += 14005328;
            result[4] += 14005328;
            result[5] += 4668442;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 43898836;
            result[1] += 18983280;
            result[2] += 0;
            result[3] += 2372910;
            result[4] += 147120426;
            result[5] += 2372910;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 191132048;
            result[1] += 1200829;
            result[2] += 1801244;
            result[3] += 4603180;
            result[4] += 11608019;
            result[5] += 4403041;
          } else {
            result[0] += 29598748;
            result[1] += 2519042;
            result[2] += 78090314;
            result[3] += 52270129;
            result[4] += 22041621;
            result[5] += 30228508;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 171798691;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12155567;
            result[3] += 8103711;
            result[4] += 4051855;
            result[5] += 190437229;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 30678337;
            result[1] += 46017506;
            result[2] += 30678337;
            result[3] += 46017506;
            result[4] += 0;
            result[5] += 61356675;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 171798691;
          } else {
            result[0] += 4294967;
            result[1] += 8589934;
            result[2] += 4294967;
            result[3] += 180388626;
            result[4] += 0;
            result[5] += 17179869;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 198229259;
            result[3] += 16519104;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 128849018;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 3702558;
            result[1] += 0;
            result[2] += 166615110;
            result[3] += 37642673;
            result[4] += 0;
            result[5] += 6788023;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 175377831;
            result[3] += 39370533;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2072860;
            result[1] += 0;
            result[2] += 206871494;
            result[3] += 5804009;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ff0000))) ) ) {
            result[0] += 2516582;
            result[1] += 1677721;
            result[2] += 0;
            result[3] += 0;
            result[4] += 206359756;
            result[5] += 4194303;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 125269879;
            result[5] += 89478485;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 193273528;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42890000))) ) ) {
            result[0] += 15339168;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 184070026;
            result[5] += 15339168;
          } else {
            result[0] += 202817900;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 293773;
            result[3] += 3231507;
            result[4] += 6169241;
            result[5] += 205053842;
          } else {
            result[0] += 2110549;
            result[1] += 1055274;
            result[2] += 527637;
            result[3] += 77562677;
            result[4] += 13718568;
            result[5] += 119773657;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 212773667;
            result[2] += 0;
            result[3] += 493674;
            result[4] += 1481023;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 20782099;
            result[1] += 70659139;
            result[2] += 0;
            result[3] += 0;
            result[4] += 119150705;
            result[5] += 4156419;
          } else {
            result[0] += 185160812;
            result[1] += 763549;
            result[2] += 381774;
            result[3] += 6299285;
            result[4] += 17179869;
            result[5] += 4963073;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 813440;
            result[1] += 5694085;
            result[2] += 52060209;
            result[3] += 90291926;
            result[4] += 4880644;
            result[5] += 61008058;
          } else {
            result[0] += 130567005;
            result[1] += 0;
            result[2] += 37795712;
            result[3] += 3435973;
            result[4] += 36077725;
            result[5] += 6871947;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5506368;
            result[3] += 0;
            result[4] += 5506368;
            result[5] += 203735628;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 150323855;
            result[5] += 64424509;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 193273528;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 24778657;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 0;
            result[4] += 123893287;
            result[5] += 33038209;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18332177;
            result[3] += 157132949;
            result[4] += 7856647;
            result[5] += 31426589;
          } else {
            result[0] += 10066329;
            result[1] += 0;
            result[2] += 70464307;
            result[3] += 70464307;
            result[4] += 6710886;
            result[5] += 57042534;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 178956970;
          } else {
            result[0] += 14810232;
            result[1] += 0;
            result[2] += 192533016;
            result[3] += 7405116;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 117765232;
            result[3] += 96983132;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2511676;
            result[1] += 0;
            result[2] += 189631596;
            result[3] += 19465495;
            result[4] += 0;
            result[5] += 3139595;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b10000))) ) ) {
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 193797304;
            result[3] += 20951059;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 212511402;
            result[3] += 2236962;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1745921;
            result[4] += 210383560;
            result[5] += 2618882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 0;
            result[4] += 76695844;
            result[5] += 76695844;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426a0000))) ) ) {
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
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 184922202;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29826161;
            result[5] += 0;
          } else {
            result[0] += 221390;
            result[1] += 1328340;
            result[2] += 1328340;
            result[3] += 13283404;
            result[4] += 14611744;
            result[5] += 183975145;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 4618244;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53109810;
            result[4] += 27709466;
            result[5] += 129310843;
          } else {
            result[0] += 15790320;
            result[1] += 1052688;
            result[2] += 26317201;
            result[3] += 134744072;
            result[4] += 0;
            result[5] += 36844082;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 174062654;
            result[1] += 4757603;
            result[2] += 1804608;
            result[3] += 5413824;
            result[4] += 24444237;
            result[5] += 4265437;
          } else {
            result[0] += 0;
            result[1] += 210696508;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4051855;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 8145627;
            result[1] += 6664604;
            result[2] += 15550743;
            result[3] += 75532183;
            result[4] += 19253301;
            result[5] += 89601903;
          } else {
            result[0] += 62634939;
            result[1] += 0;
            result[2] += 125269879;
            result[3] += 14060904;
            result[4] += 7669584;
            result[5] += 5113056;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 170009122;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 26843545;
            result[5] += 8947848;
          } else {
            result[0] += 214748364;
            result[1] += 0;
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
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 107374182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 107374182;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 0;
            result[5] += 208037478;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 161061273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 176851594;
            result[4] += 0;
            result[5] += 37896770;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 190887435;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 159684681;
            result[3] += 55063683;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 56512727;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 56512727;
            result[4] += 0;
            result[5] += 79117818;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1602599;
            result[1] += 801299;
            result[2] += 174683371;
            result[3] += 33654594;
            result[4] += 0;
            result[5] += 4006499;
          } else {
            result[0] += 776666;
            result[1] += 0;
            result[2] += 207370030;
            result[3] += 5436667;
            result[4] += 0;
            result[5] += 1165000;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 176851594;
            result[1] += 0;
            result[2] += 37896770;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 11302545;
            result[1] += 0;
            result[2] += 203445819;
            result[3] += 0;
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
