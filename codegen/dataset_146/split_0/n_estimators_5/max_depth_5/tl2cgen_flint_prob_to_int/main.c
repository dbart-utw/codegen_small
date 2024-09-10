
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
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 851864882;
            result[5] += 7128576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 581472495;
            result[5] += 277520963;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 768573094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 90420364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 66076419;
            result[2] += 0;
            result[3] += 792917039;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 448170500;
            result[5] += 410822958;
          } else {
            result[0] += 2526451;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 13895482;
            result[5] += 821096688;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 191763065;
            result[1] += 5253782;
            result[2] += 2626891;
            result[3] += 68299174;
            result[4] += 165494152;
            result[5] += 425556392;
          } else {
            result[0] += 9413626;
            result[1] += 23534067;
            result[2] += 28240880;
            result[3] += 456560906;
            result[4] += 11767033;
            result[5] += 329476943;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37347541;
            result[3] += 0;
            result[4] += 821645917;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 854979470;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4013988;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 34359738;
            result[1] += 268005959;
            result[2] += 0;
            result[3] += 20615843;
            result[4] += 522268023;
            result[5] += 13743895;
          } else {
            result[0] += 786893827;
            result[1] += 3876324;
            result[2] += 0;
            result[3] += 12404237;
            result[4] += 49616950;
            result[5] += 6202118;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 43282616;
            result[1] += 0;
            result[2] += 286331153;
            result[3] += 326284337;
            result[4] += 6658864;
            result[5] += 196436488;
          } else {
            result[0] += 672705720;
            result[1] += 31047956;
            result[2] += 20698637;
            result[3] += 20698637;
            result[4] += 93143869;
            result[5] += 20698637;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 85899345;
            result[3] += 85899345;
            result[4] += 386547056;
            result[5] += 85899345;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 161061273;
            result[3] += 134217727;
            result[4] += 0;
            result[5] += 510027366;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 238609294;
            result[3] += 238609294;
            result[4] += 0;
            result[5] += 381774870;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 808464432;
            result[3] += 50529027;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 858993459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 858993459;
          } else {
            result[0] += 0;
            result[1] += 19976592;
            result[2] += 239719104;
            result[3] += 439485025;
            result[4] += 0;
            result[5] += 159812736;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 23860929;
            result[1] += 0;
            result[2] += 524940447;
            result[3] += 274400688;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 762726950;
            result[3] += 96266508;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 728277063;
            result[3] += 124491805;
            result[4] += 0;
            result[5] += 6224590;
          } else {
            result[0] += 858993459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 774675082;
            result[3] += 79048477;
            result[4] += 0;
            result[5] += 5269898;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 854644125;
            result[3] += 4349333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3229298;
            result[4] += 807324679;
            result[5] += 48439480;
          } else {
            result[0] += 0;
            result[1] += 257698037;
            result[2] += 0;
            result[3] += 171798691;
            result[4] += 429496729;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
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
            result[5] += 858993459;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 283285076;
            result[1] += 0;
            result[2] += 0;
            result[3] += 45691141;
            result[4] += 347252674;
            result[5] += 182764565;
          } else {
            result[0] += 0;
            result[1] += 2999977;
            result[2] += 999992;
            result[3] += 24999809;
            result[4] += 46999642;
            result[5] += 782994037;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3278600;
            result[1] += 0;
            result[2] += 6557201;
            result[3] += 491790148;
            result[4] += 9835802;
            result[5] += 347531704;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 858993459;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 572662306;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 775865059;
            result[2] += 0;
            result[3] += 27709466;
            result[4] += 55418932;
            result[5] += 0;
          } else {
            result[0] += 53270912;
            result[1] += 59929776;
            result[2] += 13317728;
            result[3] += 26635456;
            result[4] += 705839586;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 703510065;
            result[1] += 27192163;
            result[2] += 5577879;
            result[3] += 16036403;
            result[4] += 74604139;
            result[5] += 32072807;
          } else {
            result[0] += 162352715;
            result[1] += 2951867;
            result[2] += 100363496;
            result[3] += 259764344;
            result[4] += 38374278;
            result[5] += 295186755;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 858993459;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 125886972;
            result[3] += 555383701;
            result[4] += 0;
            result[5] += 177722784;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 346611395;
            result[3] += 437031759;
            result[4] += 0;
            result[5] += 75350303;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 171798691;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 601295421;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 429496729;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 20452225;
            result[1] += 0;
            result[2] += 818089008;
            result[3] += 20452225;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 375809638;
            result[3] += 483183820;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 753356722;
            result[3] += 69497852;
            result[4] += 0;
            result[5] += 36138883;
          } else {
            result[0] += 490853405;
            result[1] += 0;
            result[2] += 306783378;
            result[3] += 0;
            result[4] += 61356675;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
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
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 858993459;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 785365448;
            result[3] += 73628010;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4180016;
            result[1] += 0;
            result[2] += 842273391;
            result[3] += 10450042;
            result[4] += 0;
            result[5] += 2090008;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 7469508;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 844054442;
            result[5] += 7469508;
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 644245094;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 792917039;
            result[2] += 0;
            result[3] += 0;
            result[4] += 66076419;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 303174162;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 404232216;
            result[5] += 151587081;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 33214413;
            result[4] += 20615843;
            result[5] += 805163202;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
            result[0] += 300130244;
            result[1] += 0;
            result[2] += 0;
            result[3] += 31047956;
            result[4] += 434671388;
            result[5] += 93143869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15561475;
            result[3] += 329903284;
            result[4] += 31122951;
            result[5] += 482405746;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 858993459;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 857005048;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1988410;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 99517534;
            result[1] += 162370714;
            result[2] += 0;
            result[3] += 5237764;
            result[4] += 518538734;
            result[5] += 73328709;
          } else {
            result[0] += 734940667;
            result[1] += 10097320;
            result[2] += 2163711;
            result[3] += 15867217;
            result[4] += 59862684;
            result[5] += 36061858;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52377649;
            result[3] += 439972259;
            result[4] += 26188824;
            result[5] += 340454724;
          } else {
            result[0] += 361026236;
            result[1] += 0;
            result[2] += 230309840;
            result[3] += 6224590;
            result[4] += 186737708;
            result[5] += 74695083;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42860000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 644245094;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 546632201;
            result[3] += 78090314;
            result[4] += 78090314;
            result[5] += 156180628;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 130716395;
            result[3] += 74695083;
            result[4] += 18673770;
            result[5] += 634908208;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36398027;
            result[3] += 698842136;
            result[4] += 7279605;
            result[5] += 116473689;
          } else {
            result[0] += 44430696;
            result[1] += 14810232;
            result[2] += 296204641;
            result[3] += 311014873;
            result[4] += 14810232;
            result[5] += 177722784;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 652400095;
            result[3] += 173973358;
            result[4] += 0;
            result[5] += 32620004;
          } else {
            result[0] += 644245094;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 184070026;
            result[2] += 184070026;
            result[3] += 306783378;
            result[4] += 0;
            result[5] += 184070026;
          } else {
            result[0] += 66076419;
            result[1] += 0;
            result[2] += 660764199;
            result[3] += 0;
            result[4] += 0;
            result[5] += 132152839;
          }
        } else {
          result[0] += 858993459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 42949672;
            result[1] += 42949672;
            result[2] += 386547056;
            result[3] += 257698037;
            result[4] += 0;
            result[5] += 128849018;
          } else {
            result[0] += 15248404;
            result[1] += 0;
            result[2] += 719216416;
            result[3] += 119445836;
            result[4] += 0;
            result[5] += 5082801;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 680711797;
            result[3] += 129659390;
            result[4] += 0;
            result[5] += 48622271;
          } else {
            result[0] += 9892439;
            result[1] += 0;
            result[2] += 832613621;
            result[3] += 16487398;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42280000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 6224590;
            result[2] += 0;
            result[3] += 3112295;
            result[4] += 830982802;
            result[5] += 18673770;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 429496729;
            result[1] += 44430696;
            result[2] += 0;
            result[3] += 0;
            result[4] += 251773944;
            result[5] += 133292088;
          } else {
            result[0] += 0;
            result[1] += 6056358;
            result[2] += 0;
            result[3] += 30281790;
            result[4] += 43403899;
            result[5] += 779251410;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 787410670;
            result[1] += 23860929;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 47721858;
          } else {
            result[0] += 7535030;
            result[1] += 45210182;
            result[2] += 25116767;
            result[3] += 394333254;
            result[4] += 77861980;
            result[5] += 308936244;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 122713351;
            result[2] += 0;
            result[3] += 0;
            result[4] += 736280107;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 115230829;
            result[2] += 0;
            result[3] += 0;
            result[4] += 733287099;
            result[5] += 10475529;
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 54539267;
            result[1] += 109078534;
            result[2] += 13634816;
            result[3] += 81808900;
            result[4] += 68174084;
            result[5] += 531757855;
          } else {
            result[0] += 776723662;
            result[1] += 8065666;
            result[2] += 1613133;
            result[3] += 8065666;
            result[4] += 57266230;
            result[5] += 7259099;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 17318416;
            result[1] += 34636833;
            result[2] += 197429948;
            result[3] += 353295696;
            result[4] += 41564199;
            result[5] += 214748364;
          } else {
            result[0] += 578332229;
            result[1] += 0;
            result[2] += 76543971;
            result[3] += 0;
            result[4] += 187107486;
            result[5] += 17009771;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 773094113;
            result[5] += 85899345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 182764565;
            result[3] += 109658739;
            result[4] += 0;
            result[5] += 566570153;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 605199937;
            result[4] += 19522578;
            result[5] += 224509654;
          } else {
            result[0] += 16519104;
            result[1] += 0;
            result[2] += 330382099;
            result[3] += 396458519;
            result[4] += 0;
            result[5] += 115633734;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 858993459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 644245094;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 37347541;
            result[1] += 0;
            result[2] += 759400014;
            result[3] += 62245902;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 572662306;
            result[4] += 286331153;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 268435455;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 536870911;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f30000))) ) ) {
            result[0] += 0;
            result[1] += 95443717;
            result[2] += 763549741;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 644245094;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 773094113;
            result[3] += 0;
            result[4] += 0;
            result[5] += 85899345;
          } else {
            result[0] += 721554505;
            result[1] += 0;
            result[2] += 137438953;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 11985955;
            result[1] += 0;
            result[2] += 707171359;
            result[3] += 119859552;
            result[4] += 0;
            result[5] += 19976592;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 825491374;
            result[3] += 33502084;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 6270025;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6270025;
            result[4] += 821373307;
            result[5] += 25080100;
          } else {
            result[0] += 0;
            result[1] += 768573094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45210182;
            result[5] += 45210182;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 234270943;
            result[5] += 624722515;
          } else {
            result[0] += 738573815;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16055952;
            result[4] += 88307738;
            result[5] += 16055952;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 0;
            result[4] += 722335408;
            result[5] += 117135471;
          } else {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1410498;
            result[3] += 23978470;
            result[4] += 12694484;
            result[5] += 820910005;
          } else {
            result[0] += 21015130;
            result[1] += 2626891;
            result[2] += 0;
            result[3] += 199643739;
            result[4] += 110329435;
            result[5] += 525378262;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 647765559;
            result[1] += 28163719;
            result[2] += 0;
            result[3] += 7040929;
            result[4] += 126736739;
            result[5] += 49286509;
          } else {
            result[0] += 15823563;
            result[1] += 38428654;
            result[2] += 22605091;
            result[3] += 370723492;
            result[4] += 31647127;
            result[5] += 379765529;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
            result[0] += 6224590;
            result[1] += 435721319;
            result[2] += 0;
            result[3] += 0;
            result[4] += 417047548;
            result[5] += 0;
          } else {
            result[0] += 722285563;
            result[1] += 8041640;
            result[2] += 50443020;
            result[3] += 29973388;
            result[4] += 36552913;
            result[5] += 11696932;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 66076419;
            result[1] += 660764199;
            result[2] += 0;
            result[3] += 132152839;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 858993459;
            result[4] += 0;
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
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 858993459;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 858993459;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25641595;
            result[3] += 641039894;
            result[4] += 0;
            result[5] += 192311968;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 95443717;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 763549741;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            result[0] += 357913941;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 214748364;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 45812984;
            result[1] += 0;
            result[2] += 389410368;
            result[3] += 217611676;
            result[4] += 45812984;
            result[5] += 160345445;
          } else {
            result[0] += 7300227;
            result[1] += 2433409;
            result[2] += 678921175;
            result[3] += 146004553;
            result[4] += 0;
            result[5] += 24334092;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 858993459;
          } else {
            result[0] += 10226112;
            result[1] += 0;
            result[2] += 756732332;
            result[3] += 86921957;
            result[4] += 0;
            result[5] += 5113056;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 856903450;
            result[3] += 2090008;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 834450788;
            result[3] += 24542670;
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
