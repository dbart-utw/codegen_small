
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 33746171;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 3067833;
        } else {
          result[0] += 176023;
          result[1] += 352046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41365463;
          result[5] += 1056139;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 35140641;
          result[1] += 1115575;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6693455;
          result[5] += 0;
        } else {
          result[0] += 388205;
          result[1] += 176457;
          result[2] += 564662;
          result[3] += 6176000;
          result[4] += 3176228;
          result[5] += 32468117;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 16702650;
          result[2] += 4772185;
          result[3] += 0;
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
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2698408;
          result[1] += 15740717;
          result[2] += 449734;
          result[3] += 2698408;
          result[4] += 19113728;
          result[5] += 2248673;
        } else {
          result[0] += 32984006;
          result[1] += 268435;
          result[2] += 1644167;
          result[3] += 2986344;
          result[4] += 2483027;
          result[5] += 2583691;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1997659;
          result[3] += 7491222;
          result[4] += 1498244;
          result[5] += 31962547;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 2147483;
          result[2] += 2684354;
          result[3] += 27380416;
          result[4] += 536870;
          result[5] += 10200547;
        } else {
          result[0] += 346368;
          result[1] += 692736;
          result[2] += 16279311;
          result[3] += 22167573;
          result[4] += 0;
          result[5] += 3463683;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 31554861;
          result[1] += 2629571;
          result[2] += 7888715;
          result[3] += 0;
          result[4] += 876523;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 835596;
          result[1] += 0;
          result[2] += 29747244;
          result[3] += 9860041;
          result[4] += 167119;
          result[5] += 2339670;
        } else {
          result[0] += 57650;
          result[1] += 0;
          result[2] += 41450758;
          result[3] += 1383613;
          result[4] += 0;
          result[5] += 57650;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 40086361;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2863311;
          result[5] += 0;
        } else {
          result[0] += 186737;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40708820;
          result[5] += 2054114;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56736;
          result[3] += 1645363;
          result[4] += 2382940;
          result[5] += 38864631;
        } else {
          result[0] += 4038845;
          result[1] += 1083592;
          result[2] += 295525;
          result[3] += 12609078;
          result[4] += 4038845;
          result[5] += 20883785;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 24865600;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18084072;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1108378;
          result[1] += 9144123;
          result[2] += 0;
          result[3] += 831283;
          result[4] += 31034602;
          result[5] += 831283;
        } else {
          result[0] += 30315757;
          result[1] += 1099827;
          result[2] += 733218;
          result[3] += 3581489;
          result[4] += 3637890;
          result[5] += 3581489;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 933688;
          result[3] += 16806393;
          result[4] += 0;
          result[5] += 25209590;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5308386;
          result[3] += 31367738;
          result[4] += 965161;
          result[5] += 5308386;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 1620742;
          result[1] += 0;
          result[2] += 16612609;
          result[3] += 16612609;
          result[4] += 0;
          result[5] += 8103711;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37795712;
          result[3] += 1717986;
          result[4] += 0;
          result[5] += 3435973;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 18407002;
          result[4] += 0;
          result[5] += 18407002;
        } else {
          result[0] += 1958617;
          result[1] += 0;
          result[2] += 33296489;
          result[3] += 6295554;
          result[4] += 139901;
          result[5] += 1259110;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 60492;
          result[1] += 0;
          result[2] += 40529973;
          result[3] += 2177729;
          result[4] += 0;
          result[5] += 181477;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 14725602;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28224070;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42843361;
          result[2] += 0;
          result[3] += 0;
          result[4] += 106311;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1580969;
          result[1] += 5138151;
          result[2] += 263494;
          result[3] += 0;
          result[4] += 33859098;
          result[5] += 2107959;
        } else {
          result[0] += 37669807;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3655291;
          result[5] += 1624573;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 825955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36342030;
          result[5] += 5781686;
        } else {
          result[0] += 0;
          result[1] += 96733;
          result[2] += 0;
          result[3] += 3047105;
          result[4] += 1983036;
          result[5] += 37822797;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 14858265;
          result[1] += 10215057;
          result[2] += 232160;
          result[3] += 3482405;
          result[4] += 11840180;
          result[5] += 2321603;
        } else {
          result[0] += 840651;
          result[1] += 0;
          result[2] += 1834149;
          result[3] += 19487840;
          result[4] += 1757726;
          result[5] += 19029303;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 25769803;
        } else {
          result[0] += 42525129;
          result[1] += 0;
          result[2] += 0;
          result[3] += 141514;
          result[4] += 283029;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 1193046;
          result[1] += 0;
          result[2] += 15509604;
          result[3] += 16702650;
          result[4] += 7158278;
          result[5] += 2386092;
        } else {
          result[0] += 33405301;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 863310;
          result[1] += 863310;
          result[2] += 14460442;
          result[3] += 18561165;
          result[4] += 647482;
          result[5] += 7553962;
        } else {
          result[0] += 1115575;
          result[1] += 0;
          result[2] += 34582853;
          result[3] += 6693455;
          result[4] += 0;
          result[5] += 557787;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 18111307;
          result[1] += 3104795;
          result[2] += 18628773;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3104795;
        } else {
          result[0] += 141904;
          result[1] += 0;
          result[2] += 39402067;
          result[3] += 3074591;
          result[4] += 0;
          result[5] += 331109;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41239287;
          result[5] += 1710385;
        } else {
          result[0] += 0;
          result[1] += 39881839;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3067833;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1281169;
          result[4] += 1403185;
          result[5] += 40265318;
        } else {
          result[0] += 2906915;
          result[1] += 726728;
          result[2] += 654055;
          result[3] += 15188632;
          result[4] += 3415625;
          result[5] += 20057715;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 31264155;
          result[1] += 3823230;
          result[2] += 30832;
          result[3] += 1294965;
          result[4] += 4933200;
          result[5] += 1603290;
        } else {
          result[0] += 6904439;
          result[1] += 812286;
          result[2] += 13910414;
          result[3] += 11981232;
          result[4] += 3350683;
          result[5] += 5990616;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 42633090;
          result[2] += 0;
          result[3] += 0;
          result[4] += 316582;
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
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 19088743;
          result[2] += 9544371;
          result[3] += 4772185;
          result[4] += 9544371;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4521018;
          result[3] += 13563054;
          result[4] += 0;
          result[5] += 24865600;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30259996;
          result[3] += 8785160;
          result[4] += 0;
          result[5] += 3904515;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19396626;
          result[3] += 15240206;
          result[4] += 0;
          result[5] += 8312839;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 755712;
          result[1] += 0;
          result[2] += 36022306;
          result[3] += 5667845;
          result[4] += 0;
          result[5] += 503808;
        } else {
          result[0] += 76833;
          result[1] += 0;
          result[2] += 42335008;
          result[3] += 460998;
          result[4] += 0;
          result[5] += 76833;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42890000))) ) ) {
          result[0] += 292174;
          result[1] += 1606960;
          result[2] += 1022611;
          result[3] += 0;
          result[4] += 34768782;
          result[5] += 5259143;
        } else {
          result[0] += 20782099;
          result[1] += 2309122;
          result[2] += 461824;
          result[3] += 0;
          result[4] += 16163855;
          result[5] += 3232771;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48421;
          result[3] += 2663170;
          result[4] += 1501059;
          result[5] += 38737021;
        } else {
          result[0] += 155052;
          result[1] += 620211;
          result[2] += 930317;
          result[3] += 18606356;
          result[4] += 5426853;
          result[5] += 17210879;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 7499149;
          result[2] += 0;
          result[3] += 5453926;
          result[4] += 29314856;
          result[5] += 681740;
        } else {
          result[0] += 0;
          result[1] += 40473638;
          result[2] += 0;
          result[3] += 190464;
          result[4] += 1428481;
          result[5] += 857088;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 37235832;
          result[1] += 1303829;
          result[2] += 38347;
          result[3] += 843654;
          result[4] += 2761050;
          result[5] += 766958;
        } else {
          result[0] += 9226226;
          result[1] += 848388;
          result[2] += 8059691;
          result[3] += 8695983;
          result[4] += 4135894;
          result[5] += 11983488;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 6442450;
          result[2] += 6442450;
          result[3] += 0;
          result[4] += 19327352;
          result[5] += 10737418;
        } else {
          result[0] += 1867377;
          result[1] += 933688;
          result[2] += 0;
          result[3] += 4668442;
          result[4] += 0;
          result[5] += 35480164;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6179809;
          result[3] += 27191159;
          result[4] += 0;
          result[5] += 9578704;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27552620;
          result[3] += 9724454;
          result[4] += 0;
          result[5] += 5672598;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 34359738;
          result[4] += 8589934;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13929623;
          result[3] += 5804009;
          result[4] += 5804009;
          result[5] += 17412029;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 14005328;
          result[1] += 1867377;
          result[2] += 17740082;
          result[3] += 5602131;
          result[4] += 933688;
          result[5] += 2801065;
        } else {
          result[0] += 48530;
          result[1] += 0;
          result[2] += 39406931;
          result[3] += 3057434;
          result[4] += 97061;
          result[5] += 339714;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 14316557;
        } else {
          result[0] += 159664;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42470680;
          result[5] += 319328;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 1590728;
          result[2] += 0;
          result[3] += 1590728;
          result[4] += 7953643;
          result[5] += 31814572;
        } else {
          result[0] += 0;
          result[1] += 17895697;
          result[2] += 0;
          result[3] += 3579139;
          result[4] += 21474836;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 0;
        } else {
          result[0] += 38819896;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4129776;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 1385473;
          result[2] += 0;
          result[3] += 2770946;
          result[4] += 31865886;
          result[5] += 6927366;
        } else {
          result[0] += 210951;
          result[1] += 126570;
          result[2] += 168760;
          result[3] += 3375219;
          result[4] += 1940751;
          result[5] += 37127418;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 41122027;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1827645;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2962046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39987626;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 40563580;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2386092;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 8383776;
          result[1] += 687194;
          result[2] += 3642132;
          result[3] += 16904991;
          result[4] += 1992864;
          result[5] += 11338713;
        } else {
          result[0] += 26071456;
          result[1] += 1651910;
          result[2] += 4740264;
          result[3] += 3662931;
          result[4] += 3303820;
          result[5] += 3519287;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 38661512;
          result[1] += 340330;
          result[2] += 1633585;
          result[3] += 748726;
          result[4] += 544528;
          result[5] += 1020990;
        } else {
          result[0] += 1699294;
          result[1] += 0;
          result[2] += 36407388;
          result[3] += 3780930;
          result[4] += 0;
          result[5] += 1062059;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 2538896;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40199201;
          result[5] += 211574;
        } else {
          result[0] += 22408525;
          result[1] += 207486;
          result[2] += 207486;
          result[3] += 207486;
          result[4] += 13279125;
          result[5] += 6639562;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 275612;
          result[2] += 137806;
          result[3] += 2158967;
          result[4] += 2710193;
          result[5] += 37667092;
        } else {
          result[0] += 363210;
          result[1] += 998829;
          result[2] += 1634448;
          result[3] += 20703013;
          result[4] += 2814883;
          result[5] += 16435287;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42580000))) ) ) {
          result[0] += 92964;
          result[1] += 40811485;
          result[2] += 0;
          result[3] += 278893;
          result[4] += 1766328;
          result[5] += 0;
        } else {
          result[0] += 1056139;
          result[1] += 10209348;
          result[2] += 1056139;
          result[3] += 2112278;
          result[4] += 23235068;
          result[5] += 5280697;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 35985846;
          result[1] += 838575;
          result[2] += 218758;
          result[3] += 1786531;
          result[4] += 2442808;
          result[5] += 1677151;
        } else {
          result[0] += 7635497;
          result[1] += 2386092;
          result[2] += 18372915;
          result[3] += 7396888;
          result[4] += 954437;
          result[5] += 6203841;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40495405;
          result[4] += 0;
          result[5] += 2454267;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24542670;
          result[4] += 0;
          result[5] += 18407002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35480164;
          result[3] += 7469508;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 340870;
          result[1] += 0;
          result[2] += 32723560;
          result[3] += 9373936;
          result[4] += 0;
          result[5] += 511305;
        } else {
          result[0] += 477882;
          result[1] += 0;
          result[2] += 40440790;
          result[3] += 1792058;
          result[4] += 0;
          result[5] += 238941;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1488355;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40823451;
          result[5] += 637866;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 47668;
          result[1] += 0;
          result[2] += 190675;
          result[3] += 2669458;
          result[4] += 2717126;
          result[5] += 37324743;
        } else {
          result[0] += 5541893;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16625679;
          result[4] += 5695834;
          result[5] += 15086265;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 42418117;
          result[2] += 0;
          result[3] += 0;
          result[4] += 531555;
          result[5] += 0;
        } else {
          result[0] += 1193046;
          result[1] += 8053063;
          result[2] += 4175662;
          result[3] += 298261;
          result[4] += 25650499;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35190579;
          result[1] += 1991271;
          result[2] += 102996;
          result[3] += 789642;
          result[4] += 3227233;
          result[5] += 1647949;
        } else {
          result[0] += 9355374;
          result[1] += 141748;
          result[2] += 7229152;
          result[3] += 12332084;
          result[4] += 2126221;
          result[5] += 11765091;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13362120;
          result[3] += 3817748;
          result[4] += 3817748;
          result[5] += 21952055;
        } else {
          result[0] += 0;
          result[1] += 1282079;
          result[2] += 1602599;
          result[3] += 30128875;
          result[4] += 1282079;
          result[5] += 8654038;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 25769803;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25646207;
          result[3] += 14522551;
          result[4] += 308990;
          result[5] += 2471923;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 12526987;
          result[1] += 0;
          result[2] += 17000912;
          result[3] += 2684354;
          result[4] += 5368709;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 572662;
          result[1] += 0;
          result[2] += 30351102;
          result[3] += 10021590;
          result[4] += 0;
          result[5] += 2004318;
        } else {
          result[0] += 433835;
          result[1] += 0;
          result[2] += 40563580;
          result[3] += 1735340;
          result[4] += 0;
          result[5] += 216917;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 190887;
          result[2] += 572662;
          result[3] += 0;
          result[4] += 41613460;
          result[5] += 572662;
        } else {
          result[0] += 31189643;
          result[1] += 0;
          result[2] += 1022611;
          result[3] += 0;
          result[4] += 4601750;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 438261;
          result[2] += 109565;
          result[3] += 3944357;
          result[4] += 3907835;
          result[5] += 34549651;
        } else {
          result[0] += 197016;
          result[1] += 0;
          result[2] += 394033;
          result[3] += 24824122;
          result[4] += 788067;
          result[5] += 16746432;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
          result[0] += 96299;
          result[1] += 41697776;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1155596;
          result[5] += 0;
        } else {
          result[0] += 572662;
          result[1] += 17752531;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24624479;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 19556335;
          result[1] += 2289824;
          result[2] += 4393986;
          result[3] += 7055133;
          result[4] += 4393986;
          result[5] += 5260406;
        } else {
          result[0] += 36906753;
          result[1] += 549356;
          result[2] += 1947717;
          result[3] += 699180;
          result[4] += 2447132;
          result[5] += 399531;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1342177;
          result[3] += 2684354;
          result[4] += 0;
          result[5] += 38923141;
        } else {
          result[0] += 3303820;
          result[1] += 4405094;
          result[2] += 5506368;
          result[3] += 15417831;
          result[4] += 1101273;
          result[5] += 13215283;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 25769803;
          result[4] += 4294967;
          result[5] += 4294967;
        } else {
          result[0] += 2564159;
          result[1] += 0;
          result[2] += 33334074;
          result[3] += 3846239;
          result[4] += 641039;
          result[5] += 2564159;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22782000;
          result[3] += 15312492;
          result[4] += 0;
          result[5] += 4855180;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37636311;
          result[3] += 5313361;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40849911;
          result[3] += 2099761;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 484394;
          result[2] += 645859;
          result[3] += 0;
          result[4] += 40689163;
          result[5] += 1130254;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1359884;
          result[4] += 2153149;
          result[5] += 39436639;
        } else {
          result[0] += 4420206;
          result[1] += 294680;
          result[2] += 1620742;
          result[3] += 13407959;
          result[4] += 5746268;
          result[5] += 17459815;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 42735460;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214212;
          result[5] += 0;
        } else {
          result[0] += 687194;
          result[1] += 16149077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25769803;
          result[5] += 343597;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35562477;
          result[1] += 1559106;
          result[2] += 74243;
          result[3] += 1150769;
          result[4] += 2895483;
          result[5] += 1707592;
        } else {
          result[0] += 5268918;
          result[1] += 0;
          result[2] += 12294144;
          result[3] += 13731122;
          result[4] += 2873955;
          result[5] += 8781531;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1342177;
          result[4] += 6710886;
          result[5] += 34896609;
        } else {
          result[0] += 421075;
          result[1] += 842150;
          result[2] += 6316128;
          result[3] += 27369889;
          result[4] += 1684300;
          result[5] += 6316128;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11453246;
          result[3] += 7635497;
          result[4] += 0;
          result[5] += 23860929;
        } else {
          result[0] += 4565516;
          result[1] += 1183652;
          result[2] += 29253123;
          result[3] += 5918262;
          result[4] += 0;
          result[5] += 2029118;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30621526;
          result[3] += 11532782;
          result[4] += 0;
          result[5] += 795364;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41108972;
          result[3] += 1840700;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42276480;
          result[3] += 673192;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 356428;
          result[1] += 1247500;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39028955;
          result[5] += 2316787;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1717986;
          result[4] += 24624479;
          result[5] += 16607206;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2155180;
          result[4] += 1334159;
          result[5] += 39460332;
        } else {
          result[0] += 9309900;
          result[1] += 993056;
          result[2] += 1986112;
          result[3] += 8192712;
          result[4] += 6703128;
          result[5] += 15764764;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 41891799;
          result[2] += 0;
          result[3] += 105787;
          result[4] += 952086;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 14939016;
          result[2] += 0;
          result[3] += 373475;
          result[4] += 25396328;
          result[5] += 2240852;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34570165;
          result[1] += 1503050;
          result[2] += 225457;
          result[3] += 1766084;
          result[4] += 2818220;
          result[5] += 2066694;
        } else {
          result[0] += 5863977;
          result[1] += 871672;
          result[2] += 6656406;
          result[3] += 15769344;
          result[4] += 2615016;
          result[5] += 11173254;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 0;
          result[4] += 0;
          result[5] += 35140641;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 29934620;
          result[4] += 0;
          result[5] += 5856773;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37711907;
          result[3] += 5237764;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31208035;
          result[3] += 9578704;
          result[4] += 0;
          result[5] += 2162933;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41564199;
          result[3] += 1385473;
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
          result[0] += 337301;
          result[1] += 0;
          result[2] += 40982083;
          result[3] += 1574071;
          result[4] += 0;
          result[5] += 56216;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42532685;
          result[5] += 416987;
        } else {
          result[0] += 8589934;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2863311;
          result[4] += 11453246;
          result[5] += 20043180;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426a0000))) ) ) {
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 33405301;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 0;
        } else {
          result[0] += 147762;
          result[1] += 147762;
          result[2] += 0;
          result[3] += 1576134;
          result[4] += 3349286;
          result[5] += 37728726;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4271238;
          result[3] += 12576423;
          result[4] += 237291;
          result[5] += 25864720;
        } else {
          result[0] += 967334;
          result[1] += 773867;
          result[2] += 1547735;
          result[3] += 27085379;
          result[4] += 0;
          result[5] += 12575354;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 6507526;
          result[2] += 433835;
          result[3] += 0;
          result[4] += 34706806;
          result[5] += 1301505;
        } else {
          result[0] += 185527;
          result[1] += 41094395;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1669749;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 35543334;
          result[1] += 1027673;
          result[2] += 35437;
          result[3] += 1736414;
          result[4] += 3756324;
          result[5] += 850488;
        } else {
          result[0] += 12884901;
          result[1] += 1171354;
          result[2] += 8394708;
          result[3] += 12299224;
          result[4] += 2537935;
          result[5] += 5661547;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 5249404;
          result[1] += 477218;
          result[2] += 1908874;
          result[3] += 1908874;
          result[4] += 10498808;
          result[5] += 22906492;
        } else {
          result[0] += 0;
          result[1] += 557787;
          result[2] += 12457264;
          result[3] += 18778861;
          result[4] += 0;
          result[5] += 11155759;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 1073741;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 12884901;
          result[4] += 1073741;
          result[5] += 2147483;
        } else {
          result[0] += 636654;
          result[1] += 0;
          result[2] += 39815375;
          result[3] += 2105856;
          result[4] += 0;
          result[5] += 391787;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 197016;
          result[2] += 197016;
          result[3] += 0;
          result[4] += 41964588;
          result[5] += 591050;
        } else {
          result[0] += 1673363;
          result[1] += 2231151;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 22869306;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1677376;
          result[1] += 88282;
          result[2] += 88282;
          result[3] += 1368386;
          result[4] += 2825055;
          result[5] += 36902288;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 856139;
          result[3] += 21688871;
          result[4] += 0;
          result[5] += 20404661;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 30963717;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11985955;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 3181457;
          result[1] += 9998865;
          result[2] += 0;
          result[3] += 681740;
          result[4] += 27951374;
          result[5] += 1136234;
        } else {
          result[0] += 30061987;
          result[1] += 584538;
          result[2] += 3228880;
          result[3] += 4370122;
          result[4] += 2087638;
          result[5] += 2616506;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 8947848;
          result[2] += 7158278;
          result[3] += 1789569;
          result[4] += 0;
          result[5] += 25053975;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20894435;
          result[3] += 12768821;
          result[4] += 1741202;
          result[5] += 7545212;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39320123;
          result[3] += 1209849;
          result[4] += 0;
          result[5] += 2419699;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 28633115;
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
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 103994;
          result[1] += 0;
          result[2] += 40089827;
          result[3] += 2547861;
          result[4] += 0;
          result[5] += 207988;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 489920;
          result[1] += 816533;
          result[2] += 0;
          result[3] += 163306;
          result[4] += 39193617;
          result[5] += 2286294;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1614649;
          result[1] += 599726;
          result[2] += 0;
          result[3] += 1199453;
          result[4] += 2352774;
          result[5] += 37183068;
        } else {
          result[0] += 418340;
          result[1] += 0;
          result[2] += 2649492;
          result[3] += 19662025;
          result[4] += 139446;
          result[5] += 20080366;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 41906744;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1042928;
          result[5] += 0;
        } else {
          result[0] += 286331;
          result[1] += 9448928;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33214413;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35710964;
          result[1] += 654930;
          result[2] += 344700;
          result[3] += 1240921;
          result[4] += 3515944;
          result[5] += 1482211;
        } else {
          result[0] += 10999306;
          result[1] += 1222145;
          result[2] += 7332870;
          result[3] += 11697675;
          result[4] += 2618882;
          result[5] += 9078792;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 0;
          result[4] += 39645851;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1209849;
          result[3] += 7864024;
          result[4] += 4234474;
          result[5] += 29641323;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7782826;
          result[3] += 26807513;
          result[4] += 0;
          result[5] += 8359332;
        } else {
          result[0] += 0;
          result[1] += 4979672;
          result[2] += 29255574;
          result[3] += 7469508;
          result[4] += 0;
          result[5] += 1244918;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 33038209;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9911462;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27331610;
          result[3] += 0;
          result[4] += 0;
          result[5] += 15618062;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 411658;
          result[1] += 0;
          result[2] += 34442070;
          result[3] += 7135408;
          result[4] += 0;
          result[5] += 960535;
        } else {
          result[0] += 148358;
          result[1] += 0;
          result[2] += 41688629;
          result[3] += 1038506;
          result[4] += 0;
          result[5] += 74179;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 259514;
          result[1] += 129757;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37629622;
          result[5] += 4930778;
        } else {
          result[0] += 0;
          result[1] += 33405301;
          result[2] += 0;
          result[3] += 4772185;
          result[4] += 4772185;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 36092162;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5774745;
          result[5] += 1082764;
        } else {
          result[0] += 480504;
          result[1] += 110885;
          result[2] += 73923;
          result[3] += 4657193;
          result[4] += 2956948;
          result[5] += 34670217;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 19522578;
          result[2] += 0;
          result[3] += 7809031;
          result[4] += 15618062;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31981618;
          result[1] += 1879261;
          result[2] += 649199;
          result[3] += 2425956;
          result[4] += 3895197;
          result[5] += 2118440;
        } else {
          result[0] += 4849156;
          result[1] += 98962;
          result[2] += 8510764;
          result[3] += 17021529;
          result[4] += 2968871;
          result[5] += 9500388;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1561806;
          result[3] += 35921544;
          result[4] += 0;
          result[5] += 5466322;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30223843;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 3181457;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14867194;
          result[3] += 11563373;
          result[4] += 0;
          result[5] += 16519104;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35109653;
          result[3] += 6646973;
          result[4] += 0;
          result[5] += 1193046;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 16106127;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 614444;
          result[1] += 0;
          result[2] += 40491894;
          result[3] += 1843333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c20000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 536870;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41875931;
          result[5] += 536870;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 30678337;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 32641751;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10307921;
          result[5] += 0;
        } else {
          result[0] += 144774;
          result[1] += 96516;
          result[2] += 48258;
          result[3] += 1689032;
          result[4] += 2750709;
          result[5] += 38220383;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 3626861;
          result[1] += 0;
          result[2] += 190887;
          result[3] += 7826384;
          result[4] += 2863311;
          result[5] += 28442227;
        } else {
          result[0] += 719826;
          result[1] += 0;
          result[2] += 239942;
          result[3] += 29752846;
          result[4] += 1679596;
          result[5] += 10557461;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 42489086;
          result[2] += 0;
          result[3] += 0;
          result[4] += 460586;
          result[5] += 0;
        } else {
          result[0] += 2962046;
          result[1] += 14217822;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24881189;
          result[5] += 888613;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36005261;
          result[1] += 2490930;
          result[2] += 301930;
          result[3] += 830310;
          result[4] += 2641895;
          result[5] += 679344;
        } else {
          result[0] += 12867513;
          result[1] += 173885;
          result[2] += 7129297;
          result[3] += 10607004;
          result[4] += 3651591;
          result[5] += 8520380;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 1914953;
          result[2] += 820694;
          result[3] += 20790924;
          result[4] += 1641388;
          result[5] += 17781711;
        } else {
          result[0] += 4224557;
          result[1] += 2112278;
          result[2] += 23235068;
          result[3] += 4928650;
          result[4] += 2816371;
          result[5] += 5632743;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 1595273;
          result[1] += 368140;
          result[2] += 29942057;
          result[3] += 9448928;
          result[4] += 0;
          result[5] += 1595273;
        } else {
          result[0] += 1828824;
          result[1] += 0;
          result[2] += 39292023;
          result[3] += 1496311;
          result[4] += 55418;
          result[5] += 277094;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 213679;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42735992;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 21474836;
          result[5] += 17570320;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 119971;
          result[3] += 599855;
          result[4] += 1859552;
          result[5] += 40370293;
        } else {
          result[0] += 4016073;
          result[1] += 334672;
          result[2] += 1338691;
          result[3] += 7139685;
          result[4] += 5243206;
          result[5] += 24877343;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 692736;
          result[3] += 9698313;
          result[4] += 2078209;
          result[5] += 30480413;
        } else {
          result[0] += 1378064;
          result[1] += 229677;
          result[2] += 3445160;
          result[3] += 31925157;
          result[4] += 0;
          result[5] += 5971612;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 477218;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36268612;
          result[5] += 477218;
        } else {
          result[0] += 0;
          result[1] += 41027987;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1921685;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
          result[0] += 6902626;
          result[1] += 1533916;
          result[2] += 383479;
          result[3] += 9586980;
          result[4] += 7286105;
          result[5] += 17256565;
        } else {
          result[0] += 35716768;
          result[1] += 964387;
          result[2] += 1274368;
          result[3] += 1549908;
          result[4] += 2548737;
          result[5] += 895502;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 4294967;
          result[1] += 2004318;
          result[2] += 5153960;
          result[3] += 7730941;
          result[4] += 6299285;
          result[5] += 17466200;
        } else {
          result[0] += 401398;
          result[1] += 0;
          result[2] += 25154325;
          result[3] += 13781359;
          result[4] += 0;
          result[5] += 3612589;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13563054;
          result[3] += 6781527;
          result[4] += 4521018;
          result[5] += 18084072;
        } else {
          result[0] += 354537;
          result[1] += 0;
          result[2] += 39556243;
          result[3] += 2583058;
          result[4] += 0;
          result[5] += 455833;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 370255;
          result[1] += 5183581;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36840452;
          result[5] += 555383;
        } else {
          result[0] += 20291184;
          result[1] += 1690932;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12174710;
          result[5] += 8792846;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 351326;
          result[2] += 0;
          result[3] += 2283622;
          result[4] += 2503201;
          result[5] += 37811521;
        } else {
          result[0] += 718822;
          result[1] += 179705;
          result[2] += 1437645;
          result[3] += 27854390;
          result[4] += 359411;
          result[5] += 12399696;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 42410104;
          result[2] += 0;
          result[3] += 0;
          result[4] += 539568;
          result[5] += 0;
        } else {
          result[0] += 517465;
          result[1] += 20181171;
          result[2] += 0;
          result[3] += 4657193;
          result[4] += 17076375;
          result[5] += 517465;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 14689107;
          result[1] += 478992;
          result[2] += 4231101;
          result[3] += 10058845;
          result[4] += 4949590;
          result[5] += 8542035;
        } else {
          result[0] += 33826621;
          result[1] += 1989801;
          result[2] += 2815756;
          result[3] += 600694;
          result[4] += 2928386;
          result[5] += 788411;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4955731;
          result[3] += 28908433;
          result[4] += 0;
          result[5] += 9085507;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35370318;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7579354;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 0;
          result[4] += 0;
          result[5] += 39645851;
        } else {
          result[0] += 0;
          result[1] += 2863311;
          result[2] += 37223049;
          result[3] += 2863311;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 14316557;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25053975;
          result[3] += 1789569;
          result[4] += 0;
          result[5] += 16106127;
        } else {
          result[0] += 227728;
          result[1] += 0;
          result[2] += 39624830;
          result[3] += 2960475;
          result[4] += 0;
          result[5] += 136637;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 381774;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40849911;
          result[5] += 1717986;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1575599;
          result[4] += 1633954;
          result[5] += 39740118;
        } else {
          result[0] += 1978711;
          result[1] += 465579;
          result[2] += 1163947;
          result[3] += 9660766;
          result[4] += 5004975;
          result[5] += 24675692;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42203648;
          result[2] += 0;
          result[3] += 0;
          result[4] += 746024;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32284103;
          result[1] += 1181515;
          result[2] += 319328;
          result[3] += 1341179;
          result[4] += 6482366;
          result[5] += 1341179;
        } else {
          result[0] += 9861834;
          result[1] += 1843333;
          result[2] += 5530000;
          result[3] += 13732835;
          result[4] += 2304167;
          result[5] += 9677501;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 933688;
          result[3] += 3734754;
          result[4] += 4668442;
          result[5] += 33612787;
        } else {
          result[0] += 3435973;
          result[1] += 429496;
          result[2] += 4294967;
          result[3] += 25769803;
          result[4] += 858993;
          result[5] += 8160437;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 18407002;
          result[1] += 7669584;
          result[2] += 5368709;
          result[3] += 3067833;
          result[4] += 0;
          result[5] += 8436542;
        } else {
          result[0] += 238609;
          result[1] += 0;
          result[2] += 30899903;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 2266788;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 20043180;
          result[3] += 8589934;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 63441;
          result[1] += 0;
          result[2] += 41617408;
          result[3] += 1205382;
          result[4] += 0;
          result[5] += 63441;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 40265318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2684354;
          result[5] += 0;
        } else {
          result[0] += 1240423;
          result[1] += 1240423;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39848613;
          result[5] += 620211;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 42221712;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 727960;
          result[5] += 0;
        } else {
          result[0] += 5497558;
          result[1] += 1030792;
          result[2] += 0;
          result[3] += 2061584;
          result[4] += 20959440;
          result[5] += 13400297;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 2603010;
          result[2] += 0;
          result[3] += 3253763;
          result[4] += 28633115;
          result[5] += 8459784;
        } else {
          result[0] += 586343;
          result[1] += 48861;
          result[2] += 0;
          result[3] += 1759030;
          result[4] += 2296512;
          result[5] += 38258923;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 1946359;
          result[1] += 259514;
          result[2] += 778543;
          result[3] += 22318259;
          result[4] += 129757;
          result[5] += 17517238;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 4062806;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17412029;
          result[5] += 0;
        } else {
          result[0] += 95656;
          result[1] += 42567047;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286968;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 39100205;
          result[1] += 562281;
          result[2] += 519029;
          result[3] += 778543;
          result[4] += 1730097;
          result[5] += 259514;
        } else {
          result[0] += 15596249;
          result[1] += 479884;
          result[2] += 5518673;
          result[3] += 11517230;
          result[4] += 1439653;
          result[5] += 8397980;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 186737;
          result[1] += 373475;
          result[2] += 8963410;
          result[3] += 20354410;
          result[4] += 2801065;
          result[5] += 10270573;
        } else {
          result[0] += 0;
          result[1] += 327860;
          result[2] += 29179548;
          result[3] += 8196502;
          result[4] += 327860;
          result[5] += 4917901;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 19088743;
          result[1] += 2726963;
          result[2] += 14998298;
          result[3] += 681740;
          result[4] += 681740;
          result[5] += 4772185;
        } else {
          result[0] += 787164;
          result[1] += 0;
          result[2] += 37882300;
          result[3] += 3837427;
          result[4] += 98395;
          result[5] += 344384;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 316971;
          result[1] += 3011231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38036610;
          result[5] += 1584858;
        } else {
          result[0] += 28472255;
          result[1] += 0;
          result[2] += 0;
          result[3] += 965161;
          result[4] += 6273547;
          result[5] += 7238708;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 976128;
          result[2] += 1464193;
          result[3] += 488064;
          result[4] += 32700319;
          result[5] += 7320966;
        } else {
          result[0] += 241742;
          result[1] += 443195;
          result[2] += 564066;
          result[3] += 4029049;
          result[4] += 1692200;
          result[5] += 35979416;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 373475;
          result[1] += 14192065;
          result[2] += 373475;
          result[3] += 5228655;
          result[4] += 21288098;
          result[5] += 1493901;
        } else {
          result[0] += 96084;
          result[1] += 42180998;
          result[2] += 0;
          result[3] += 0;
          result[4] += 672589;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 11219506;
          result[1] += 701219;
          result[2] += 2454267;
          result[3] += 15952735;
          result[4] += 2980181;
          result[5] += 9641763;
        } else {
          result[0] += 36688671;
          result[1] += 797579;
          result[2] += 2193344;
          result[3] += 1316006;
          result[4] += 1714796;
          result[5] += 239273;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1455921;
          result[3] += 5095723;
          result[4] += 4367763;
          result[5] += 32030264;
        } else {
          result[0] += 3303820;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 3303820;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4206411;
          result[3] += 30773219;
          result[4] += 0;
          result[5] += 7970042;
        } else {
          result[0] += 660764;
          result[1] += 0;
          result[2] += 23787511;
          result[3] += 13545666;
          result[4] += 991146;
          result[5] += 3964585;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8842579;
          result[3] += 8842579;
          result[4] += 7579354;
          result[5] += 17685159;
        } else {
          result[0] += 33038209;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6607641;
          result[5] += 3303820;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23046165;
          result[3] += 9427976;
          result[4] += 0;
          result[5] += 10475529;
        } else {
          result[0] += 102018;
          result[1] += 0;
          result[2] += 40144171;
          result[3] += 2346419;
          result[4] += 0;
          result[5] += 357063;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ee0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41648167;
          result[5] += 1301505;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 1789569;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39370533;
          result[5] += 1789569;
        } else {
          result[0] += 0;
          result[1] += 3142658;
          result[2] += 0;
          result[3] += 5237764;
          result[4] += 12570635;
          result[5] += 21998612;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1867377;
          result[4] += 20541147;
          result[5] += 20541147;
        } else {
          result[0] += 63161;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1200064;
          result[4] += 378967;
          result[5] += 41307479;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          result[0] += 39453769;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3495903;
          result[5] += 0;
        } else {
          result[0] += 320999;
          result[1] += 449398;
          result[2] += 834597;
          result[3] += 15343754;
          result[4] += 3787788;
          result[5] += 22213134;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 41362618;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1587054;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 1431655;
          result[4] += 27201459;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 37242813;
          result[1] += 1667588;
          result[2] += 333517;
          result[3] += 629977;
          result[4] += 2556969;
          result[5] += 518805;
        } else {
          result[0] += 10737418;
          result[1] += 933688;
          result[2] += 3034487;
          result[3] += 10503996;
          result[4] += 4435020;
          result[5] += 13305061;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1400532;
          result[1] += 0;
          result[2] += 9336885;
          result[3] += 21941680;
          result[4] += 1400532;
          result[5] += 8870041;
        } else {
          result[0] += 2744006;
          result[1] += 0;
          result[2] += 29826161;
          result[3] += 7993411;
          result[4] += 119304;
          result[5] += 2266788;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 1827645;
          result[1] += 913822;
          result[2] += 30156153;
          result[3] += 913822;
          result[4] += 0;
          result[5] += 9138228;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41541486;
          result[3] += 1408185;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 34359738;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 0;
        } else {
          result[0] += 283496;
          result[1] += 992236;
          result[2] += 566992;
          result[3] += 1984473;
          result[4] += 34586535;
          result[5] += 4535939;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1367428;
          result[4] += 1429583;
          result[5] += 40152660;
        } else {
          result[0] += 4985229;
          result[1] += 191739;
          result[2] += 1821526;
          result[3] += 12175465;
          result[4] += 4793490;
          result[5] += 18982221;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2290649;
          result[1] += 6299285;
          result[2] += 1717986;
          result[3] += 0;
          result[4] += 32641751;
          result[5] += 0;
        } else {
          result[0] += 271833;
          result[1] += 40956228;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1721611;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36229897;
          result[1] += 1493283;
          result[2] += 0;
          result[3] += 1173294;
          result[4] += 2275479;
          result[5] += 1777718;
        } else {
          result[0] += 10327593;
          result[1] += 1147510;
          result[2] += 7540782;
          result[3] += 11311173;
          result[4] += 4917901;
          result[5] += 7704712;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1314785;
          result[3] += 12709597;
          result[4] += 3944357;
          result[5] += 24980932;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 29996596;
          result[4] += 0;
          result[5] += 8180890;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 788067;
          result[2] += 11821010;
          result[3] += 18125550;
          result[4] += 788067;
          result[5] += 11426977;
        } else {
          result[0] += 1282079;
          result[1] += 0;
          result[2] += 33654594;
          result[3] += 5128319;
          result[4] += 0;
          result[5] += 2884679;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3346727;
          result[1] += 0;
          result[2] += 21753730;
          result[3] += 10040183;
          result[4] += 1673363;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 21474836;
          result[1] += 4601750;
          result[2] += 15339168;
          result[3] += 0;
          result[4] += 1533916;
          result[5] += 0;
        } else {
          result[0] += 160860;
          result[1] += 0;
          result[2] += 40375909;
          result[3] += 2305662;
          result[4] += 0;
          result[5] += 107240;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 421075;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42107522;
          result[5] += 421075;
        } else {
          result[0] += 0;
          result[1] += 1590728;
          result[2] += 6362914;
          result[3] += 7953643;
          result[4] += 17498014;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 52313;
          result[2] += 52313;
          result[3] += 2249495;
          result[4] += 1935612;
          result[5] += 38659937;
        } else {
          result[0] += 3655291;
          result[1] += 342683;
          result[2] += 342683;
          result[3] += 14278481;
          result[4] += 4911797;
          result[5] += 19418735;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 7251243;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35140641;
          result[5] += 557787;
        } else {
          result[0] += 365529;
          result[1] += 40939262;
          result[2] += 0;
          result[3] += 182764;
          result[4] += 1462116;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36073660;
          result[1] += 1321007;
          result[2] += 237103;
          result[3] += 948415;
          result[4] += 3251710;
          result[5] += 1117775;
        } else {
          result[0] += 8719106;
          result[1] += 645859;
          result[2] += 9526431;
          result[3] += 10979615;
          result[4] += 1453184;
          result[5] += 11625475;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 681740;
          result[3] += 6135667;
          result[4] += 2045222;
          result[5] += 34087042;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 1762037;
          result[2] += 6607641;
          result[3] += 21805218;
          result[4] += 1541783;
          result[5] += 11232991;
        } else {
          result[0] += 0;
          result[1] += 9842633;
          result[2] += 27738330;
          result[3] += 1789569;
          result[4] += 0;
          result[5] += 3579139;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29183752;
          result[3] += 12114010;
          result[4] += 0;
          result[5] += 1651910;
        } else {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 17620378;
          result[3] += 9911462;
          result[4] += 0;
          result[5] += 1101273;
        } else {
          result[0] += 494242;
          result[1] += 0;
          result[2] += 39292278;
          result[3] += 3163151;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 201641;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42344747;
          result[5] += 403283;
        } else {
          result[0] += 2045222;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3067833;
          result[4] += 26587892;
          result[5] += 11248723;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 13215283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6607641;
          result[5] += 23126746;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 4772185;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 2386092;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60322;
          result[3] += 844516;
          result[4] += 723870;
          result[5] += 41320963;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 36116770;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5856773;
          result[5] += 976128;
        } else {
          result[0] += 75615;
          result[1] += 151231;
          result[2] += 529309;
          result[3] += 13535196;
          result[4] += 4536937;
          result[5] += 24121383;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 0;
        } else {
          result[0] += 221962;
          result[1] += 42172805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 554905;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33680898;
          result[1] += 2545649;
          result[2] += 0;
          result[3] += 489547;
          result[4] += 5417663;
          result[5] += 815913;
        } else {
          result[0] += 11523082;
          result[1] += 2095105;
          result[2] += 4339862;
          result[3] += 10774830;
          result[4] += 2394406;
          result[5] += 11822383;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 397682;
          result[2] += 11135100;
          result[3] += 20679472;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 3435973;
          result[1] += 0;
          result[2] += 30142861;
          result[3] += 8589934;
          result[4] += 156180;
          result[5] += 624722;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 4090445;
          result[1] += 0;
          result[2] += 22497447;
          result[3] += 0;
          result[4] += 0;
          result[5] += 16361780;
        } else {
          result[0] += 308990;
          result[1] += 0;
          result[2] += 40910335;
          result[3] += 1544952;
          result[4] += 0;
          result[5] += 185394;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 543666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40412561;
          result[5] += 1993444;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 30678337;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1263225;
          result[4] += 36633544;
          result[5] += 5052902;
        } else {
          result[0] += 231847;
          result[1] += 0;
          result[2] += 985350;
          result[3] += 1217197;
          result[4] += 985350;
          result[5] += 39529928;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 38859227;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4090445;
          result[5] += 0;
        } else {
          result[0] += 721843;
          result[1] += 1154949;
          result[2] += 721843;
          result[3] += 15880551;
          result[4] += 5341639;
          result[5] += 19128845;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 4772185;
          result[4] += 23860929;
          result[5] += 0;
        } else {
          result[0] += 198381;
          result[1] += 41957763;
          result[2] += 0;
          result[3] += 99190;
          result[4] += 694336;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 7216953;
          result[1] += 176023;
          result[2] += 2992395;
          result[3] += 8273092;
          result[4] += 7921046;
          result[5] += 16370162;
        } else {
          result[0] += 35178827;
          result[1] += 1505163;
          result[2] += 1190129;
          result[3] += 1120121;
          result[4] += 3465377;
          result[5] += 490053;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4026531;
          result[3] += 25948760;
          result[4] += 1789569;
          result[5] += 11184810;
        } else {
          result[0] += 265121;
          result[1] += 265121;
          result[2] += 22270200;
          result[3] += 13521193;
          result[4] += 1060485;
          result[5] += 5567550;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 26658417;
          result[1] += 1481023;
          result[2] += 2962046;
          result[3] += 1481023;
          result[4] += 10367162;
          result[5] += 0;
        } else {
          result[0] += 230416;
          result[1] += 0;
          result[2] += 38341338;
          result[3] += 3824917;
          result[4] += 230416;
          result[5] += 322583;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42192850;
          result[5] += 756822;
        } else {
          result[0] += 2941758;
          result[1] += 0;
          result[2] += 2941758;
          result[3] += 588351;
          result[4] += 17062198;
          result[5] += 19415605;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 903569;
          result[4] += 1445711;
          result[5] += 40600392;
        } else {
          result[0] += 2842257;
          result[1] += 78951;
          result[2] += 315806;
          result[3] += 13737579;
          result[4] += 3631773;
          result[5] += 22343304;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42648623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 301049;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32812891;
          result[1] += 2303813;
          result[2] += 0;
          result[3] += 855702;
          result[4] += 6549413;
          result[5] += 427851;
        } else {
          result[0] += 8541128;
          result[1] += 854112;
          result[2] += 7564999;
          result[3] += 14397901;
          result[4] += 1220161;
          result[5] += 10371369;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3995318;
          result[3] += 28966058;
          result[4] += 0;
          result[5] += 9988296;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18171015;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 18171015;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 976128;
          result[1] += 0;
          result[2] += 22450965;
          result[3] += 16594191;
          result[4] += 0;
          result[5] += 2928386;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36102623;
          result[3] += 4979672;
          result[4] += 0;
          result[5] += 1867377;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39881839;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3067833;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 19822925;
          result[1] += 0;
          result[2] += 23126746;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 190887;
          result[1] += 0;
          result[2] += 39847752;
          result[3] += 2290649;
          result[4] += 47721;
          result[5] += 572662;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 2095105;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32474142;
          result[5] += 8380423;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10105805;
          result[5] += 32843867;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37580963;
          result[5] += 5368709;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
          result[0] += 41564199;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1385473;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 49367;
          result[2] += 98734;
          result[3] += 1777227;
          result[4] += 1678492;
          result[5] += 39345849;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2309122;
          result[3] += 3232771;
          result[4] += 3694595;
          result[5] += 33713184;
        } else {
          result[0] += 2294047;
          result[1] += 127447;
          result[2] += 509788;
          result[3] += 23577713;
          result[4] += 1911706;
          result[5] += 14528969;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 42850482;
          result[2] += 0;
          result[3] += 0;
          result[4] += 99190;
          result[5] += 0;
        } else {
          result[0] += 2454267;
          result[1] += 14112035;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26076587;
          result[5] += 306783;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 3048041;
          result[1] += 19396626;
          result[2] += 0;
          result[3] += 1108378;
          result[4] += 18011153;
          result[5] += 1385473;
        } else {
          result[0] += 33966306;
          result[1] += 229502;
          result[2] += 983580;
          result[3] += 3672033;
          result[4] += 1803230;
          result[5] += 2295020;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2078209;
          result[3] += 22860309;
          result[4] += 0;
          result[5] += 18011153;
        } else {
          result[0] += 226050;
          result[1] += 0;
          result[2] += 21700887;
          result[3] += 16727767;
          result[4] += 452101;
          result[5] += 3842865;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 29527900;
          result[4] += 0;
          result[5] += 2684354;
        } else {
          result[0] += 841234;
          result[1] += 186940;
          result[2] += 38930443;
          result[3] += 2336761;
          result[4] += 0;
          result[5] += 654293;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 396458;
          result[1] += 660764;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38720782;
          result[5] += 3171668;
        } else {
          result[0] += 0;
          result[1] += 40689163;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2260509;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2808070;
          result[1] += 276203;
          result[2] += 0;
          result[3] += 1703256;
          result[4] += 3636681;
          result[5] += 34525460;
        } else {
          result[0] += 1318148;
          result[1] += 329537;
          result[2] += 3075679;
          result[3] += 21859296;
          result[4] += 0;
          result[5] += 16367010;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 6551645;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36398027;
          result[5] += 0;
        } else {
          result[0] += 93776;
          result[1] += 40980364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1781754;
          result[5] += 93776;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35992308;
          result[1] += 1446580;
          result[2] += 516636;
          result[3] += 1136599;
          result[4] += 2789834;
          result[5] += 1067714;
        } else {
          result[0] += 7396167;
          result[1] += 0;
          result[2] += 11937673;
          result[3] += 11678158;
          result[4] += 1557087;
          result[5] += 10380585;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 933688;
          result[3] += 2801065;
          result[4] += 2801065;
          result[5] += 36413853;
        } else {
          result[0] += 0;
          result[1] += 5602131;
          result[2] += 10270573;
          result[3] += 11204262;
          result[4] += 1867377;
          result[5] += 14005328;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 36814005;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26199300;
          result[3] += 12025908;
          result[4] += 0;
          result[5] += 4724464;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e20000))) ) ) {
          result[0] += 1101273;
          result[1] += 3303820;
          result[2] += 25329294;
          result[3] += 9911462;
          result[4] += 3303820;
          result[5] += 0;
        } else {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 23427094;
          result[1] += 0;
          result[2] += 11713547;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 324148;
          result[1] += 0;
          result[2] += 39978311;
          result[3] += 2539163;
          result[4] += 0;
          result[5] += 108049;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 221390;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42285502;
          result[5] += 442780;
        } else {
          result[0] += 19055136;
          result[1] += 1512312;
          result[2] += 302462;
          result[3] += 0;
          result[4] += 17845286;
          result[5] += 4234474;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 82675;
          result[1] += 785412;
          result[2] += 41337;
          result[3] += 2893625;
          result[4] += 3513688;
          result[5] += 35632933;
        } else {
          result[0] += 1629125;
          result[1] += 0;
          result[2] += 2665841;
          result[3] += 23844473;
          result[4] += 296204;
          result[5] += 14514027;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31974737;
          result[1] += 2784685;
          result[2] += 32761;
          result[3] += 720742;
          result[4] += 6060785;
          result[5] += 1375962;
        } else {
          result[0] += 8962397;
          result[1] += 349184;
          result[2] += 11523082;
          result[3] += 12570635;
          result[4] += 1513132;
          result[5] += 8031239;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 42340457;
          result[2] += 203071;
          result[3] += 101535;
          result[4] += 304607;
          result[5] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14203828;
          result[3] += 21643929;
          result[4] += 0;
          result[5] += 7101914;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34079631;
          result[3] += 6535819;
          result[4] += 0;
          result[5] += 2334221;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 215017;
          result[1] += 0;
          result[2] += 39724415;
          result[3] += 2687714;
          result[4] += 0;
          result[5] += 322525;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 188375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41631042;
          result[5] += 1130254;
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
          result[3] += 4294967;
          result[4] += 6442450;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38654705;
          result[5] += 4294967;
        } else {
          result[0] += 39005315;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3944357;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 44973;
          result[3] += 2113753;
          result[4] += 2788355;
          result[5] += 38002590;
        } else {
          result[0] += 775614;
          result[1] += 484759;
          result[2] += 775614;
          result[3] += 18226949;
          result[4] += 2714652;
          result[5] += 19972082;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33698974;
          result[5] += 660764;
        } else {
          result[0] += 208493;
          result[1] += 42636932;
          result[2] += 0;
          result[3] += 0;
          result[4] += 104246;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          result[0] += 36701078;
          result[1] += 715200;
          result[2] += 150568;
          result[3] += 1279832;
          result[4] += 3425434;
          result[5] += 677558;
        } else {
          result[0] += 10635157;
          result[1] += 9817068;
          result[2] += 9408023;
          result[3] += 3272356;
          result[4] += 4908534;
          result[5] += 4908534;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9663676;
          result[3] += 18253611;
          result[4] += 536870;
          result[5] += 14495514;
        } else {
          result[0] += 1695381;
          result[1] += 1130254;
          result[2] += 27126109;
          result[3] += 7911781;
          result[4] += 1412818;
          result[5] += 3673327;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 2526451;
          result[1] += 10105805;
          result[2] += 7579354;
          result[3] += 2526451;
          result[4] += 0;
          result[5] += 20211610;
        } else {
          result[0] += 1656812;
          result[1] += 0;
          result[2] += 37894271;
          result[3] += 2973765;
          result[4] += 0;
          result[5] += 424823;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 39045157;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3904515;
          result[5] += 0;
        } else {
          result[0] += 178956;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41518017;
          result[5] += 1252698;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1550840;
          result[1] += 818499;
          result[2] += 129236;
          result[3] += 1981629;
          result[4] += 2283182;
          result[5] += 36186284;
        } else {
          result[0] += 276203;
          result[1] += 138101;
          result[2] += 552407;
          result[3] += 21267683;
          result[4] += 414305;
          result[5] += 20300970;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 2849741;
          result[1] += 10788306;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29108072;
          result[5] += 203552;
        } else {
          result[0] += 29653147;
          result[1] += 433287;
          result[2] += 2166439;
          result[3] += 3628786;
          result[4] += 3005935;
          result[5] += 4062074;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 211054;
          result[1] += 42738618;
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
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8796920;
          result[3] += 29495558;
          result[4] += 0;
          result[5] += 4657193;
        } else {
          result[0] += 7469508;
          result[1] += 0;
          result[2] += 16806393;
          result[3] += 5602131;
          result[4] += 0;
          result[5] += 13071639;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31122951;
          result[3] += 9648114;
          result[4] += 0;
          result[5] += 2178606;
        } else {
          result[0] += 965161;
          result[1] += 0;
          result[2] += 41501931;
          result[3] += 482580;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33536046;
          result[3] += 7648571;
          result[4] += 0;
          result[5] += 1765055;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1091940;
          result[1] += 0;
          result[2] += 37125988;
          result[3] += 4731743;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 82914;
          result[1] += 0;
          result[2] += 42203443;
          result[3] += 663315;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
          result[0] += 962997;
          result[1] += 962997;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40638479;
          result[5] += 385198;
        } else {
          result[0] += 26843545;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9842633;
          result[5] += 6263493;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1789569;
          result[4] += 29229638;
          result[5] += 11930464;
        } else {
          result[0] += 81575;
          result[1] += 367091;
          result[2] += 0;
          result[3] += 5995823;
          result[4] += 1427576;
          result[5] += 35077605;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 9162596;
          result[2] += 0;
          result[3] += 2290649;
          result[4] += 31496426;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42082975;
          result[2] += 0;
          result[3] += 0;
          result[4] += 866697;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35582152;
          result[1] += 1651910;
          result[2] += 165191;
          result[3] += 528611;
          result[4] += 4361043;
          result[5] += 660764;
        } else {
          result[0] += 6316128;
          result[1] += 421075;
          result[2] += 6737203;
          result[3] += 11369031;
          result[4] += 1965017;
          result[5] += 16141216;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 1101273;
          result[2] += 1651910;
          result[3] += 3854457;
          result[4] += 4955731;
          result[5] += 31386299;
        } else {
          result[0] += 3067833;
          result[1] += 0;
          result[2] += 39881839;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6664604;
          result[3] += 28879952;
          result[4] += 493674;
          result[5] += 6911441;
        } else {
          result[0] += 3734754;
          result[1] += 0;
          result[2] += 23030984;
          result[3] += 14939016;
          result[4] += 0;
          result[5] += 1244918;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 19283526;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 5259143;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 237291;
          result[1] += 0;
          result[2] += 38820809;
          result[3] += 3132241;
          result[4] += 0;
          result[5] += 759331;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 156750;
          result[1] += 470251;
          result[2] += 156750;
          result[3] += 0;
          result[4] += 40128161;
          result[5] += 2037758;
        } else {
          result[0] += 0;
          result[1] += 36814005;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1101273;
          result[1] += 137659;
          result[2] += 321204;
          result[3] += 3120275;
          result[4] += 2477865;
          result[5] += 35791394;
        } else {
          result[0] += 3971015;
          result[1] += 209000;
          result[2] += 3971015;
          result[3] += 19019076;
          result[4] += 3135012;
          result[5] += 12644550;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 103994;
          result[1] += 41597746;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1247932;
          result[5] += 0;
        } else {
          result[0] += 1887897;
          result[1] += 10383437;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29734388;
          result[5] += 943948;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35090056;
          result[1] += 1460636;
          result[2] += 486878;
          result[3] += 1495413;
          result[4] += 2782165;
          result[5] += 1634521;
        } else {
          result[0] += 6035411;
          result[1] += 561433;
          result[2] += 12070823;
          result[3] += 13474407;
          result[4] += 2666809;
          result[5] += 8140787;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1651910;
          result[3] += 825955;
          result[4] += 2477865;
          result[5] += 37993941;
        } else {
          result[0] += 0;
          result[1] += 3142658;
          result[2] += 11523082;
          result[3] += 16760847;
          result[4] += 0;
          result[5] += 11523082;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 11647368;
          result[1] += 5095723;
          result[2] += 21110856;
          result[3] += 4367763;
          result[4] += 0;
          result[5] += 727960;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 19822925;
          result[4] += 0;
          result[5] += 16519104;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27331610;
          result[3] += 5856773;
          result[4] += 0;
          result[5] += 9761289;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34239599;
          result[3] += 5406252;
          result[4] += 0;
          result[5] += 3303820;
        } else {
          result[0] += 56216;
          result[1] += 0;
          result[2] += 40925866;
          result[3] += 1967589;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 921666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41106339;
          result[5] += 921666;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1860187;
          result[1] += 330700;
          result[2] += 0;
          result[3] += 3058975;
          result[4] += 2562925;
          result[5] += 35136883;
        } else {
          result[0] += 1489584;
          result[1] += 0;
          result[2] += 496528;
          result[3] += 30039944;
          result[4] += 744792;
          result[5] += 10178824;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32929156;
          result[1] += 2094320;
          result[2] += 257762;
          result[3] += 902168;
          result[4] += 5928537;
          result[5] += 837728;
        } else {
          result[0] += 7112684;
          result[1] += 273564;
          result[2] += 9027638;
          result[3] += 12492792;
          result[4] += 3921095;
          result[5] += 10121897;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 105011;
          result[1] += 42529627;
          result[2] += 315034;
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1982292;
          result[3] += 7268406;
          result[4] += 4625349;
          result[5] += 29073624;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 25451658;
          result[4] += 1590728;
          result[5] += 11135100;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23369674;
          result[3] += 12316450;
          result[4] += 0;
          result[5] += 7263547;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 6607641;
          result[1] += 0;
          result[2] += 9911462;
          result[3] += 23126746;
          result[4] += 0;
          result[5] += 3303820;
        } else {
          result[0] += 748252;
          result[1] += 0;
          result[2] += 39407946;
          result[3] += 2194872;
          result[4] += 99766;
          result[5] += 498834;
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
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 727960;
          result[2] += 291184;
          result[3] += 0;
          result[4] += 41639343;
          result[5] += 291184;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 30870077;
          result[2] += 0;
          result[3] += 2684354;
          result[4] += 9395240;
          result[5] += 0;
        } else {
          result[0] += 103244;
          result[1] += 42743184;
          result[2] += 0;
          result[3] += 0;
          result[4] += 103244;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
          result[0] += 33882519;
          result[1] += 0;
          result[2] += 954437;
          result[3] += 477218;
          result[4] += 6203841;
          result[5] += 1431655;
        } else {
          result[0] += 374924;
          result[1] += 41658;
          result[2] += 249949;
          result[3] += 3582610;
          result[4] += 3665927;
          result[5] += 35034602;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35532661;
          result[1] += 1103927;
          result[2] += 413972;
          result[3] += 1345411;
          result[4] += 2932306;
          result[5] += 1621393;
        } else {
          result[0] += 5599162;
          result[1] += 682824;
          result[2] += 7306224;
          result[3] += 14066188;
          result[4] += 2321603;
          result[5] += 12973669;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 2386092;
          result[2] += 3579139;
          result[3] += 0;
          result[4] += 5965232;
          result[5] += 31019208;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12375329;
          result[3] += 18199013;
          result[4] += 0;
          result[5] += 12375329;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 32212254;
        } else {
          result[0] += 0;
          result[1] += 1227133;
          result[2] += 39268272;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2454267;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17685159;
          result[3] += 21895911;
          result[4] += 0;
          result[5] += 3368601;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35280088;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 132152;
          result[1] += 0;
          result[2] += 36474183;
          result[3] += 5682572;
          result[4] += 0;
          result[5] += 660764;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42152833;
          result[3] += 717155;
          result[4] += 0;
          result[5] += 79683;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41866908;
          result[5] += 1082764;
        } else {
          result[0] += 0;
          result[1] += 5602131;
          result[2] += 0;
          result[3] += 5602131;
          result[4] += 3734754;
          result[5] += 28010656;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 31069976;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10052051;
          result[5] += 1827645;
        } else {
          result[0] += 136024;
          result[1] += 170030;
          result[2] += 374066;
          result[3] += 6223111;
          result[4] += 2550455;
          result[5] += 33495984;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 760171;
          result[1] += 15203424;
          result[2] += 0;
          result[3] += 380085;
          result[4] += 26605992;
          result[5] += 0;
        } else {
          result[0] += 100349;
          result[1] += 42347574;
          result[2] += 0;
          result[3] += 0;
          result[4] += 501748;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36926243;
          result[1] += 1945455;
          result[2] += 187063;
          result[3] += 710839;
          result[4] += 2731120;
          result[5] += 448951;
        } else {
          result[0] += 12644062;
          result[1] += 1003497;
          result[2] += 6422381;
          result[3] += 7626577;
          result[4] += 3211190;
          result[5] += 12041964;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 36342030;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5746787;
          result[3] += 29338861;
          result[4] += 0;
          result[5] += 7864024;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20211610;
          result[3] += 6316128;
          result[4] += 0;
          result[5] += 16421933;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40086361;
          result[3] += 954437;
          result[4] += 0;
          result[5] += 1908874;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 397682;
          result[1] += 0;
          result[2] += 23463247;
          result[3] += 14714239;
          result[4] += 0;
          result[5] += 4374503;
        } else {
          result[0] += 1145324;
          result[1] += 0;
          result[2] += 34932400;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 1145324;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 9911462;
          result[1] += 550636;
          result[2] += 27531841;
          result[3] += 2202547;
          result[4] += 550636;
          result[5] += 2202547;
        } else {
          result[0] += 212097;
          result[1] += 0;
          result[2] += 40616604;
          result[3] += 2014922;
          result[4] += 0;
          result[5] += 106048;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 1487434;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41276309;
          result[5] += 185929;
        } else {
          result[0] += 17747798;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1064867;
          result[4] += 6744163;
          result[5] += 17392842;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 46331;
          result[1] += 231659;
          result[2] += 185327;
          result[3] += 2687250;
          result[4] += 2270263;
          result[5] += 37528840;
        } else {
          result[0] += 0;
          result[1] += 397682;
          result[2] += 198841;
          result[3] += 23065565;
          result[4] += 2982616;
          result[5] += 16304968;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32409132;
          result[1] += 3059179;
          result[2] += 30288;
          result[3] += 1150978;
          result[4] += 5573159;
          result[5] += 726933;
        } else {
          result[0] += 5700110;
          result[1] += 397682;
          result[2] += 10074614;
          result[3] += 12990950;
          result[4] += 2120971;
          result[5] += 11665343;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 8589934;
          result[1] += 8589934;
          result[2] += 8589934;
          result[3] += 8589934;
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
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2321603;
          result[3] += 3482405;
          result[4] += 2321603;
          result[5] += 34824059;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9091536;
          result[3] += 24453098;
          result[4] += 0;
          result[5] += 9405037;
        } else {
          result[0] += 976128;
          result[1] += 0;
          result[2] += 30259996;
          result[3] += 11388170;
          result[4] += 0;
          result[5] += 325376;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 2863311;
          result[1] += 17179869;
          result[2] += 22906492;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 26076587;
          result[1] += 0;
          result[2] += 16873085;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 8589934;
          result[1] += 34359738;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 49481;
          result[1] += 0;
          result[2] += 40277688;
          result[3] += 2375097;
          result[4] += 0;
          result[5] += 247405;
        }
      }
    }
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 167772;
          result[1] += 503316;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41439723;
          result[5] += 838860;
        } else {
          result[0] += 0;
          result[1] += 37896770;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5052902;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 842150;
          result[3] += 0;
          result[4] += 39581071;
          result[5] += 2526451;
        } else {
          result[0] += 29752846;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5038788;
          result[5] += 8158038;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23008753;
          result[5] += 19940919;
        } else {
          result[0] += 0;
          result[1] += 49710;
          result[2] += 0;
          result[3] += 2485513;
          result[4] += 1839279;
          result[5] += 38575169;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 4979672;
          result[1] += 8091967;
          result[2] += 0;
          result[3] += 5602131;
          result[4] += 15561475;
          result[5] += 8714426;
        } else {
          result[0] += 315806;
          result[1] += 0;
          result[2] += 2842257;
          result[3] += 18474675;
          result[4] += 1894838;
          result[5] += 19422094;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
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
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 20356968;
          result[1] += 1647384;
          result[2] += 941362;
          result[3] += 6001187;
          result[4] += 7001385;
          result[5] += 7001385;
        } else {
          result[0] += 41165609;
          result[1] += 0;
          result[2] += 462534;
          result[3] += 330382;
          result[4] += 925069;
          result[5] += 66076;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 3629549;
          result[2] += 2722162;
          result[3] += 24801923;
          result[4] += 0;
          result[5] += 11796036;
        } else {
          result[0] += 3248294;
          result[1] += 2165529;
          result[2] += 18407002;
          result[3] += 14075943;
          result[4] += 721843;
          result[5] += 4331059;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 698368;
          result[1] += 0;
          result[2] += 30728221;
          result[3] += 9951753;
          result[4] += 0;
          result[5] += 1571329;
        } else {
          result[0] += 1959893;
          result[1] += 0;
          result[2] += 39477861;
          result[3] += 1511918;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 838860;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41775267;
          result[5] += 335544;
        } else {
          result[0] += 0;
          result[1] += 5368709;
          result[2] += 0;
          result[3] += 6135667;
          result[4] += 16106127;
          result[5] += 15339168;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 40216511;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2733161;
          result[5] += 0;
        } else {
          result[0] += 671640;
          result[1] += 353495;
          result[2] += 106048;
          result[3] += 5726623;
          result[4] += 4171243;
          result[5] += 31920621;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 42649325;
          result[2] += 0;
          result[3] += 0;
          result[4] += 200231;
          result[5] += 100115;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33732512;
          result[1] += 1874028;
          result[2] += 152981;
          result[3] += 1950519;
          result[4] += 3824547;
          result[5] += 1415082;
        } else {
          result[0] += 5962831;
          result[1] += 1209849;
          result[2] += 10975067;
          result[3] += 14604617;
          result[4] += 1728357;
          result[5] += 8468949;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 2816371;
          result[1] += 5632743;
          result[2] += 2112278;
          result[3] += 4224557;
          result[4] += 8449115;
          result[5] += 19714603;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9110536;
          result[3] += 26030104;
          result[4] += 0;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16106127;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35937481;
          result[3] += 5259143;
          result[4] += 0;
          result[5] += 1753047;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20281790;
          result[3] += 22667882;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1827645;
          result[1] += 0;
          result[2] += 36552913;
          result[3] += 4112202;
          result[4] += 0;
          result[5] += 456911;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 4156419;
          result[1] += 0;
          result[2] += 31865886;
          result[3] += 4156419;
          result[4] += 0;
          result[5] += 2770946;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41845252;
          result[3] += 1104420;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 359411;
          result[1] += 3414409;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38097617;
          result[5] += 1078234;
        } else {
          result[0] += 25333596;
          result[1] += 671088;
          result[2] += 167772;
          result[3] += 1174405;
          result[4] += 10737418;
          result[5] += 4865392;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2558285;
          result[4] += 3394647;
          result[5] += 36996740;
        } else {
          result[0] += 1659000;
          result[1] += 1106000;
          result[2] += 2949333;
          result[3] += 14562335;
          result[4] += 5714334;
          result[5] += 16958669;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 5726623;
          result[1] += 12169074;
          result[2] += 0;
          result[3] += 2147483;
          result[4] += 21474836;
          result[5] += 1431655;
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
          result[0] += 37147919;
          result[1] += 2295657;
          result[2] += 333913;
          result[3] += 1001741;
          result[4] += 1627830;
          result[5] += 542610;
        } else {
          result[0] += 8521760;
          result[1] += 340870;
          result[2] += 9203501;
          result[3] += 12953075;
          result[4] += 2215657;
          result[5] += 9714806;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
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
          result[3] += 11713547;
          result[4] += 0;
          result[5] += 31236125;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 876523;
          result[2] += 876523;
          result[3] += 35937481;
          result[4] += 0;
          result[5] += 5259143;
        } else {
          result[0] += 0;
          result[1] += 3390763;
          result[2] += 23735345;
          result[3] += 8288533;
          result[4] += 376751;
          result[5] += 7158278;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 12884901;
          result[1] += 0;
          result[2] += 30064771;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 169093;
          result[1] += 0;
          result[2] += 31282242;
          result[3] += 10652871;
          result[4] += 0;
          result[5] += 845466;
        } else {
          result[0] += 412411;
          result[1] += 0;
          result[2] += 41182196;
          result[3] += 1355065;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 732096;
          result[1] += 732096;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40509350;
          result[5] += 976128;
        } else {
          result[0] += 0;
          result[1] += 1130254;
          result[2] += 0;
          result[3] += 4521018;
          result[4] += 20344581;
          result[5] += 16953818;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1507006;
          result[4] += 38428654;
          result[5] += 3014012;
        } else {
          result[0] += 844097;
          result[1] += 0;
          result[2] += 248264;
          result[3] += 1936459;
          result[4] += 1092361;
          result[5] += 38828490;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 5153960;
          result[1] += 0;
          result[2] += 3435973;
          result[3] += 10307921;
          result[4] += 1374389;
          result[5] += 22677427;
        } else {
          result[0] += 744792;
          result[1] += 248264;
          result[2] += 3723960;
          result[3] += 27805568;
          result[4] += 744792;
          result[5] += 9682296;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 2386092;
          result[1] += 8351325;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 27440068;
          result[5] += 0;
        } else {
          result[0] += 105787;
          result[1] += 42843885;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 833974;
          result[1] += 15845510;
          result[2] += 416987;
          result[3] += 2084935;
          result[4] += 23559772;
          result[5] += 208493;
        } else {
          result[0] += 32440397;
          result[1] += 117750;
          result[2] += 1089196;
          result[3] += 2590521;
          result[4] += 2884899;
          result[5] += 3826907;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 2208840;
          result[1] += 4417680;
          result[2] += 6626520;
          result[3] += 21106696;
          result[4] += 1717986;
          result[5] += 6871947;
        } else {
          result[0] += 8947848;
          result[1] += 0;
          result[2] += 28377462;
          result[3] += 5113056;
          result[4] += 0;
          result[5] += 511305;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31116599;
          result[3] += 9203501;
          result[4] += 0;
          result[5] += 2629571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41468649;
          result[3] += 1481023;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 203552;
          result[1] += 1628423;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40303484;
          result[5] += 814211;
        } else {
          result[0] += 0;
          result[1] += 588351;
          result[2] += 0;
          result[3] += 1176703;
          result[4] += 22357364;
          result[5] += 18827253;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 151944;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3190836;
          result[4] += 1519445;
          result[5] += 38087445;
        } else {
          result[0] += 6117831;
          result[1] += 1373390;
          result[2] += 1498244;
          result[3] += 13858760;
          result[4] += 3371049;
          result[5] += 16730395;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36077725;
          result[5] += 1145324;
        } else {
          result[0] += 0;
          result[1] += 42264826;
          result[2] += 0;
          result[3] += 0;
          result[4] += 684846;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 22530975;
          result[1] += 3319295;
          result[2] += 1357893;
          result[3] += 4777773;
          result[4] += 6085375;
          result[5] += 4878358;
        } else {
          result[0] += 39702408;
          result[1] += 0;
          result[2] += 1286652;
          result[3] += 551422;
          result[4] += 980306;
          result[5] += 428884;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2405181;
          result[3] += 30923764;
          result[4] += 1030792;
          result[5] += 8589934;
        } else {
          result[0] += 0;
          result[1] += 5992977;
          result[2] += 21974251;
          result[3] += 2996488;
          result[4] += 0;
          result[5] += 11985955;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 4357213;
          result[1] += 0;
          result[2] += 10581803;
          result[3] += 6224590;
          result[4] += 6847049;
          result[5] += 14939016;
        } else {
          result[0] += 3491843;
          result[1] += 0;
          result[2] += 32124958;
          result[3] += 4190211;
          result[4] += 698368;
          result[5] += 2444290;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12725829;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 15907286;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32414847;
          result[3] += 8914083;
          result[4] += 0;
          result[5] += 1620742;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 63818;
          result[1] += 0;
          result[2] += 41290398;
          result[3] += 1595455;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1218430;
          result[1] += 3502987;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37619039;
          result[5] += 609215;
        } else {
          result[0] += 30305610;
          result[1] += 0;
          result[2] += 0;
          result[3] += 200699;
          result[4] += 7626577;
          result[5] += 4816785;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 51252;
          result[1] += 51252;
          result[2] += 0;
          result[3] += 2152608;
          result[4] += 3792691;
          result[5] += 36901866;
        } else {
          result[0] += 600694;
          result[1] += 1501736;
          result[2] += 0;
          result[3] += 14817136;
          result[4] += 5606484;
          result[5] += 20423620;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
          result[0] += 99651;
          result[1] += 42650719;
          result[2] += 0;
          result[3] += 0;
          result[4] += 199302;
          result[5] += 0;
        } else {
          result[0] += 4008636;
          result[1] += 17752531;
          result[2] += 4581298;
          result[3] += 0;
          result[4] += 16034544;
          result[5] += 572662;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 37326281;
          result[1] += 2241206;
          result[2] += 122247;
          result[3] += 611238;
          result[4] += 2322705;
          result[5] += 325993;
        } else {
          result[0] += 8525590;
          result[1] += 321720;
          result[2] += 7882149;
          result[3] += 12064514;
          result[4] += 2252042;
          result[5] += 11903654;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9203501;
          result[5] += 33746171;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2660599;
          result[3] += 28886505;
          result[4] += 380085;
          result[5] += 11022482;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 3482405;
          result[2] += 12768821;
          result[3] += 12768821;
          result[4] += 3482405;
          result[5] += 10447217;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38923141;
          result[3] += 4026531;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1827645;
          result[3] += 12793519;
          result[4] += 0;
          result[5] += 28328507;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36342030;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 3303820;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30214595;
          result[3] += 10238003;
          result[4] += 249707;
          result[5] += 2247366;
        } else {
          result[0] += 903644;
          result[1] += 265777;
          result[2] += 39547718;
          result[3] += 1754132;
          result[4] += 265777;
          result[5] += 212622;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 232160;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42485352;
          result[5] += 232160;
        } else {
          result[0] += 0;
          result[1] += 18407002;
          result[2] += 0;
          result[3] += 3067833;
          result[4] += 12271335;
          result[5] += 9203501;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 873848;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2621546;
          result[4] += 3276933;
          result[5] += 36177344;
        } else {
          result[0] += 2468372;
          result[1] += 123418;
          result[2] += 1110767;
          result[3] += 18883045;
          result[4] += 2715209;
          result[5] += 17648859;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 104755;
          result[1] += 41902119;
          result[2] += 314265;
          result[3] += 209510;
          result[4] += 419021;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 31241395;
          result[1] += 2289489;
          result[2] += 260827;
          result[3] += 1680891;
          result[4] += 5390444;
          result[5] += 2086623;
        } else {
          result[0] += 7094931;
          result[1] += 633476;
          result[2] += 11909348;
          result[3] += 12922910;
          result[4] += 1393647;
          result[5] += 8995359;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8079641;
          result[3] += 28916611;
          result[4] += 0;
          result[5] += 5953420;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34200665;
          result[3] += 5567550;
          result[4] += 0;
          result[5] += 3181457;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19822925;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 19822925;
        } else {
          result[0] += 1238932;
          result[1] += 0;
          result[2] += 34965438;
          result[3] += 6332323;
          result[4] += 0;
          result[5] += 412977;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41397275;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1552397;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37223049;
          result[3] += 5726623;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ee0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42724215;
          result[3] += 225457;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39513699;
          result[3] += 3435973;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 205500;
          result[1] += 205500;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42538671;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 1022611;
          result[4] += 22497447;
          result[5] += 15339168;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 771551;
          result[1] += 102873;
          result[2] += 51436;
          result[3] += 2006032;
          result[4] += 2520399;
          result[5] += 37497379;
        } else {
          result[0] += 1741202;
          result[1] += 3134165;
          result[2] += 348240;
          result[3] += 17528109;
          result[4] += 1509042;
          result[5] += 18688911;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 22906492;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20043180;
          result[5] += 0;
        } else {
          result[0] += 394033;
          result[1] += 41866080;
          result[2] += 394033;
          result[3] += 98508;
          result[4] += 197016;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33166355;
          result[1] += 1938490;
          result[2] += 121155;
          result[3] += 1150978;
          result[4] += 5633737;
          result[5] += 938956;
        } else {
          result[0] += 6349082;
          result[1] += 1027057;
          result[2] += 7656246;
          result[3] += 10270573;
          result[4] += 3734754;
          result[5] += 13911959;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 795364;
          result[3] += 31814572;
          result[4] += 0;
          result[5] += 10339736;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 11369031;
          result[4] += 0;
          result[5] += 10105805;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31782757;
          result[3] += 10307921;
          result[4] += 0;
          result[5] += 858993;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 33405301;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4772185;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 400930;
          result[1] += 0;
          result[2] += 40594206;
          result[3] += 1904419;
          result[4] += 0;
          result[5] += 50116;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 390451;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40802189;
          result[5] += 1757032;
        } else {
          result[0] += 19756849;
          result[1] += 0;
          result[2] += 1717986;
          result[3] += 0;
          result[4] += 12025908;
          result[5] += 9448928;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 185728;
          result[2] += 0;
          result[3] += 2275171;
          result[4] += 2925220;
          result[5] += 37563551;
        } else {
          result[0] += 123064;
          result[1] += 861454;
          result[2] += 492259;
          result[3] += 20428784;
          result[4] += 1599844;
          result[5] += 19444264;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 41670320;
          result[2] += 182764;
          result[3] += 0;
          result[4] += 1096587;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 12526987;
          result[2] += 0;
          result[3] += 447392;
          result[4] += 28633115;
          result[5] += 1342177;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 6841540;
          result[1] += 11782653;
          result[2] += 760171;
          result[3] += 760171;
          result[4] += 20144536;
          result[5] += 2660599;
        } else {
          result[0] += 35249813;
          result[1] += 671088;
          result[2] += 953652;
          result[3] += 2472431;
          result[4] += 1871984;
          result[5] += 1730702;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1431655;
          result[3] += 11453246;
          result[4] += 0;
          result[5] += 30064771;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10789289;
          result[3] += 25313333;
          result[4] += 622459;
          result[5] += 6224590;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16919568;
          result[3] += 23427094;
          result[4] += 0;
          result[5] += 2603010;
        } else {
          result[0] += 681740;
          result[1] += 0;
          result[2] += 34087042;
          result[3] += 6476537;
          result[4] += 681740;
          result[5] += 1022611;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d50000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 25053975;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 442273;
          result[1] += 0;
          result[2] += 40246890;
          result[3] += 1965660;
          result[4] += 0;
          result[5] += 294849;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 197924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42553823;
          result[5] += 197924;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3734754;
          result[3] += 0;
          result[4] += 26143279;
          result[5] += 13071639;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 181222;
          result[3] += 1268555;
          result[4] += 1933037;
          result[5] += 39566857;
        } else {
          result[0] += 3114670;
          result[1] += 2131090;
          result[2] += 245895;
          result[3] += 11557068;
          result[4] += 2868775;
          result[5] += 23032171;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 707961;
          result[1] += 13215283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28082478;
          result[5] += 943948;
        } else {
          result[0] += 29926398;
          result[1] += 678295;
          result[2] += 1600777;
          result[3] += 3391477;
          result[4] += 3174423;
          result[5] += 4178300;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
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
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2618882;
          result[3] += 33521695;
          result[4] += 0;
          result[5] += 6809094;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16025997;
          result[3] += 16667037;
          result[4] += 0;
          result[5] += 10256638;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20104102;
          result[3] += 10052051;
          result[4] += 0;
          result[5] += 12793519;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36022306;
          result[3] += 6531517;
          result[4] += 0;
          result[5] += 395849;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 5856773;
          result[1] += 0;
          result[2] += 29283867;
          result[3] += 3904515;
          result[4] += 0;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 9761289;
          result[1] += 0;
          result[2] += 27331610;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5856773;
        } else {
          result[0] += 62517;
          result[1] += 0;
          result[2] += 40886588;
          result[3] += 2000567;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 161464;
          result[1] += 1130254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40366233;
          result[5] += 1291719;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 113773;
          result[3] += 853304;
          result[4] += 1535948;
          result[5] += 40446645;
        } else {
          result[0] += 4703166;
          result[1] += 88738;
          result[2] += 266216;
          result[3] += 13310849;
          result[4] += 2218474;
          result[5] += 22362226;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 2708537;
          result[1] += 14123090;
          result[2] += 193466;
          result[3] += 1160801;
          result[4] += 22442171;
          result[5] += 2321603;
        } else {
          result[0] += 30625232;
          result[1] += 857849;
          result[2] += 1372559;
          result[3] += 3717348;
          result[4] += 2945283;
          result[5] += 3431398;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
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
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2656680;
          result[3] += 31880169;
          result[4] += 0;
          result[5] += 8412822;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27126109;
          result[3] += 6781527;
          result[4] += 0;
          result[5] += 9042036;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 27331610;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34184433;
          result[3] += 876523;
          result[4] += 1753047;
          result[5] += 6135667;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 543666;
          result[1] += 0;
          result[2] += 24465003;
          result[3] += 14679002;
          result[4] += 0;
          result[5] += 3262000;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39645851;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 913822;
          result[1] += 0;
          result[2] += 36683459;
          result[3] += 4960752;
          result[4] += 0;
          result[5] += 391638;
        } else {
          result[0] += 147593;
          result[1] += 0;
          result[2] += 42211706;
          result[3] += 590373;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 1858399;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41091273;
          result[5] += 0;
        } else {
          result[0] += 16175850;
          result[1] += 1115575;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18964790;
          result[5] += 6693455;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 46482;
          result[1] += 371858;
          result[2] += 92964;
          result[3] += 1812810;
          result[4] += 3114316;
          result[5] += 37511240;
        } else {
          result[0] += 484394;
          result[1] += 0;
          result[2] += 1776114;
          result[3] += 24058275;
          result[4] += 322929;
          result[5] += 16307958;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 8279455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34670217;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41890376;
          result[2] += 0;
          result[3] += 385198;
          result[4] += 674098;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35733851;
          result[1] += 1588171;
          result[2] += 69050;
          result[3] += 966712;
          result[4] += 3625173;
          result[5] += 966712;
        } else {
          result[0] += 9303638;
          result[1] += 1656812;
          result[2] += 8029167;
          result[3] += 9685979;
          result[4] += 2803836;
          result[5] += 11470239;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42860000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2260509;
          result[3] += 0;
          result[4] += 0;
          result[5] += 40689163;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 278893;
          result[2] += 5577879;
          result[3] += 23427094;
          result[4] += 2788939;
          result[5] += 10876865;
        } else {
          result[0] += 0;
          result[1] += 2526451;
          result[2] += 23369674;
          result[3] += 5684515;
          result[4] += 2526451;
          result[5] += 8842579;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22605091;
          result[3] += 20344581;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 205500;
          result[1] += 0;
          result[2] += 35551643;
          result[3] += 7192528;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27790964;
          result[3] += 15158708;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 529516;
          result[1] += 0;
          result[2] += 41243453;
          result[3] += 1117868;
          result[4] += 0;
          result[5] += 58835;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x420e0000))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 862443;
          result[1] += 2932306;
          result[2] += 0;
          result[3] += 344977;
          result[4] += 36222615;
          result[5] += 2587329;
        } else {
          result[0] += 1905953;
          result[1] += 131445;
          result[2] += 131445;
          result[3] += 7492368;
          result[4] += 2300288;
          result[5] += 30988172;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32615917;
          result[1] += 2034458;
          result[2] += 710445;
          result[3] += 1033375;
          result[4] += 5231463;
          result[5] += 1324012;
        } else {
          result[0] += 6055567;
          result[1] += 224280;
          result[2] += 13568956;
          result[3] += 12671835;
          result[4] += 3588484;
          result[5] += 6840548;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1193046;
          result[3] += 2386092;
          result[4] += 0;
          result[5] += 39370533;
        } else {
          result[0] += 0;
          result[1] += 37896770;
          result[2] += 5052902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1227133;
          result[1] += 613566;
          result[2] += 8589934;
          result[3] += 19020569;
          result[4] += 2454267;
          result[5] += 11044201;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36342030;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 3241484;
          result[1] += 0;
          result[2] += 17828166;
          result[3] += 19448908;
          result[4] += 0;
          result[5] += 2431113;
        } else {
          result[0] += 1301505;
          result[1] += 0;
          result[2] += 34923723;
          result[3] += 6724443;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38417295;
          result[3] += 4532377;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 172488;
          result[1] += 0;
          result[2] += 42432207;
          result[3] += 344977;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42260000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 567616;
          result[3] += 378411;
          result[4] += 40868411;
          result[5] += 1135233;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1458039;
          result[1] += 749848;
          result[2] += 0;
          result[3] += 2541154;
          result[4] += 2332862;
          result[5] += 35867767;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1160801;
          result[3] += 27278846;
          result[4] += 580400;
          result[5] += 13929623;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 12039990;
          result[1] += 844911;
          result[2] += 2253097;
          result[3] += 8660343;
          result[4] += 8871571;
          result[5] += 10279757;
        } else {
          result[0] += 33249148;
          result[1] += 2056648;
          result[2] += 2125203;
          result[3] += 1233989;
          result[4] += 3496302;
          result[5] += 788381;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42842832;
          result[2] += 0;
          result[3] += 0;
          result[4] += 106839;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 1227133;
          result[2] += 1227133;
          result[3] += 2454267;
          result[4] += 3681400;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 360921;
          result[2] += 13715021;
          result[3] += 21294375;
          result[4] += 0;
          result[5] += 7579354;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 3579139;
        } else {
          result[0] += 193466;
          result[1] += 0;
          result[2] += 31148186;
          result[3] += 10447217;
          result[4] += 0;
          result[5] += 1160801;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5052902;
          result[3] += 2526451;
          result[4] += 0;
          result[5] += 35370318;
        } else {
          result[0] += 15618062;
          result[1] += 3904515;
          result[2] += 7809031;
          result[3] += 7809031;
          result[4] += 7809031;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 4880644;
          result[1] += 1952257;
          result[2] += 26355481;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9761289;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40937389;
          result[3] += 2012283;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 1628423;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41117696;
          result[5] += 203552;
        } else {
          result[0] += 25665048;
          result[1] += 1047552;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10475529;
          result[5] += 5761541;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 43781;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1882605;
          result[4] += 3064706;
          result[5] += 37958579;
        } else {
          result[0] += 484394;
          result[1] += 161464;
          result[2] += 322929;
          result[3] += 18568467;
          result[4] += 2421974;
          result[5] += 20990441;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
          result[0] += 7346654;
          result[1] += 8618190;
          result[2] += 706409;
          result[3] += 1130254;
          result[4] += 22039963;
          result[5] += 3108200;
        } else {
          result[0] += 33867364;
          result[1] += 1097861;
          result[2] += 1297472;
          result[3] += 2794556;
          result[4] += 1896306;
          result[5] += 1996111;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 42427170;
          result[2] += 0;
          result[3] += 0;
          result[4] += 418001;
          result[5] += 104500;
        } else {
          result[0] += 33405301;
          result[1] += 9544371;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3381864;
          result[3] += 30436776;
          result[4] += 676372;
          result[5] += 8454660;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11369031;
          result[3] += 16421933;
          result[4] += 0;
          result[5] += 15158708;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29787676;
          result[3] += 10044681;
          result[4] += 0;
          result[5] += 3117314;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 15339168;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2088737;
          result[1] += 0;
          result[2] += 35116905;
          result[3] += 5352390;
          result[4] += 130546;
          result[5] += 261092;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41353570;
          result[3] += 1596102;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 829945;
          result[1] += 1556147;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38073743;
          result[5] += 2489836;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 26587892;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16361780;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 254516;
          result[1] += 127258;
          result[2] += 127258;
          result[3] += 890808;
          result[4] += 1336212;
          result[5] += 40213619;
        } else {
          result[0] += 4561027;
          result[1] += 76017;
          result[2] += 1216273;
          result[3] += 14899355;
          result[4] += 2356530;
          result[5] += 19840468;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35918249;
          result[1] += 869866;
          result[2] += 108733;
          result[3] += 1413533;
          result[4] += 2972044;
          result[5] += 1667244;
        } else {
          result[0] += 6362914;
          result[1] += 1272582;
          result[2] += 9544371;
          result[3] += 12884901;
          result[4] += 3817748;
          result[5] += 9067153;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39045157;
          result[5] += 3904515;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 876523;
          result[3] += 5259143;
          result[4] += 0;
          result[5] += 36814005;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 296204;
          result[1] += 592409;
          result[2] += 5627888;
          result[3] += 26658417;
          result[4] += 1481023;
          result[5] += 8293729;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27917287;
          result[3] += 9305762;
          result[4] += 0;
          result[5] += 5726623;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 2045222;
          result[1] += 10226112;
          result[2] += 16361780;
          result[3] += 12271335;
          result[4] += 2045222;
          result[5] += 0;
        } else {
          result[0] += 29620464;
          result[1] += 0;
          result[2] += 12588697;
          result[3] += 0;
          result[4] += 740511;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31796995;
          result[3] += 9966222;
          result[4] += 237291;
          result[5] += 949164;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41313494;
          result[3] += 1636178;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 438261;
          result[1] += 657392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41196625;
          result[5] += 657392;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1785849;
          result[1] += 669693;
          result[2] += 0;
          result[3] += 1830495;
          result[4] += 2187665;
          result[5] += 36475969;
        } else {
          result[0] += 757935;
          result[1] += 126322;
          result[2] += 505290;
          result[3] += 21474836;
          result[4] += 1894838;
          result[5] += 18190449;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 8436542;
          result[2] += 0;
          result[3] += 1917396;
          result[4] += 31061817;
          result[5] += 1533916;
        } else {
          result[0] += 103743;
          result[1] += 42638443;
          result[2] += 0;
          result[3] += 0;
          result[4] += 207486;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33625282;
          result[1] += 1053783;
          result[2] += 670589;
          result[3] += 1341179;
          result[4] += 3065552;
          result[5] += 3193284;
        } else {
          result[0] += 7366368;
          result[1] += 2247366;
          result[2] += 10362857;
          result[3] += 11236833;
          result[4] += 2122512;
          result[5] += 9613734;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2643056;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 5946877;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19522578;
          result[3] += 3904515;
          result[4] += 0;
          result[5] += 19522578;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31122951;
          result[3] += 10581803;
          result[4] += 0;
          result[5] += 1244918;
        } else {
          result[0] += 780903;
          result[1] += 0;
          result[2] += 41387866;
          result[3] += 0;
          result[4] += 0;
          result[5] += 780903;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 1148386;
          result[1] += 0;
          result[2] += 34221931;
          result[3] += 6890321;
          result[4] += 0;
          result[5] += 689032;
        } else {
          result[0] += 15339168;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 9203501;
          result[4] += 0;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24542670;
          result[3] += 0;
          result[4] += 0;
          result[5] += 18407002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41917228;
          result[3] += 963614;
          result[4] += 0;
          result[5] += 68829;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 1176703;
          result[1] += 1765055;
          result[2] += 0;
          result[3] += 4706813;
          result[4] += 24122419;
          result[5] += 11178682;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 33354533;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9595139;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 174592;
          result[2] += 69836;
          result[3] += 6285317;
          result[4] += 2199861;
          result[5] += 34220064;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 11713547;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31236125;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42757073;
          result[2] += 0;
          result[3] += 0;
          result[4] += 192599;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33738695;
          result[1] += 2337634;
          result[2] += 104670;
          result[3] += 488460;
          result[4] += 5931311;
          result[5] += 348900;
        } else {
          result[0] += 6189805;
          result[1] += 252645;
          result[2] += 11495353;
          result[3] += 11242708;
          result[4] += 1642193;
          result[5] += 12126966;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6871947;
          result[3] += 0;
          result[4] += 3435973;
          result[5] += 32641751;
        } else {
          result[0] += 3303820;
          result[1] += 16519104;
          result[2] += 6607641;
          result[3] += 3303820;
          result[4] += 3303820;
          result[5] += 9911462;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1101273;
          result[3] += 41848399;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 338186;
          result[1] += 338186;
          result[2] += 16909320;
          result[3] += 16232947;
          result[4] += 1014559;
          result[5] += 8116473;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e80000))) ) ) {
          result[0] += 853304;
          result[1] += 284434;
          result[2] += 32141145;
          result[3] += 6542003;
          result[4] += 284434;
          result[5] += 2844349;
        } else {
          result[0] += 26247022;
          result[1] += 0;
          result[2] += 16702650;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 466844;
          result[1] += 0;
          result[2] += 37036312;
          result[3] += 4824057;
          result[4] += 0;
          result[5] += 622459;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42007449;
          result[3] += 942223;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 213679;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42735992;
          result[5] += 0;
        } else {
          result[0] += 1741202;
          result[1] += 580400;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30761252;
          result[5] += 9866816;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 37466735;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5482936;
          result[5] += 0;
        } else {
          result[0] += 71463;
          result[1] += 142927;
          result[2] += 250122;
          result[3] += 6181608;
          result[4] += 2108178;
          result[5] += 34195371;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 961559;
          result[1] += 9615598;
          result[2] += 0;
          result[3] += 961559;
          result[4] += 28205755;
          result[5] += 3205199;
        } else {
          result[0] += 196566;
          result[1] += 42458257;
          result[2] += 0;
          result[3] += 0;
          result[4] += 294849;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 21419913;
          result[1] += 549228;
          result[2] += 1318148;
          result[3] += 6700588;
          result[4] += 3954445;
          result[5] += 9007348;
        } else {
          result[0] += 37032714;
          result[1] += 910301;
          result[2] += 662037;
          result[3] += 951678;
          result[4] += 3020545;
          result[5] += 372396;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4443069;
          result[3] += 29620464;
          result[4] += 0;
          result[5] += 8886139;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 2962046;
          result[1] += 0;
          result[2] += 16291255;
          result[3] += 10367162;
          result[4] += 1481023;
          result[5] += 11848185;
        } else {
          result[0] += 660764;
          result[1] += 0;
          result[2] += 35020502;
          result[3] += 7268406;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 576505;
          result[1] += 0;
          result[2] += 28537031;
          result[3] += 12106619;
          result[4] += 0;
          result[5] += 1729517;
        } else {
          result[0] += 1840700;
          result[1] += 0;
          result[2] += 35740263;
          result[3] += 3681400;
          result[4] += 153391;
          result[5] += 1533916;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 8180890;
          result[1] += 2045222;
          result[2] += 18407002;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42272707;
          result[3] += 526528;
          result[4] += 0;
          result[5] += 150436;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 1613133;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40126689;
          result[5] += 1209849;
        } else {
          result[0] += 16006089;
          result[1] += 4268290;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 10403958;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 52634;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2368548;
          result[4] += 1684300;
          result[5] += 38844189;
        } else {
          result[0] += 720977;
          result[1] += 308990;
          result[2] += 308990;
          result[3] += 16170500;
          result[4] += 1853942;
          result[5] += 23586271;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 4685418;
          result[2] += 0;
          result[3] += 2342709;
          result[4] += 35921544;
          result[5] += 0;
        } else {
          result[0] += 100349;
          result[1] += 40741979;
          result[2] += 301049;
          result[3] += 0;
          result[4] += 1806294;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36401789;
          result[1] += 850854;
          result[2] += 110981;
          result[3] += 1146804;
          result[4] += 3884337;
          result[5] += 554905;
        } else {
          result[0] += 13526358;
          result[1] += 1394469;
          result[2] += 8366819;
          result[3] += 7111796;
          result[4] += 2649492;
          result[5] += 9900736;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4994148;
          result[3] += 2996488;
          result[4] += 0;
          result[5] += 34959036;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7454075;
          result[3] += 33010905;
          result[4] += 0;
          result[5] += 2484691;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11523082;
          result[3] += 1047552;
          result[4] += 12570635;
          result[5] += 17808400;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33612787;
          result[3] += 5602131;
          result[4] += 933688;
          result[5] += 2801065;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 2045222;
          result[1] += 6135667;
          result[2] += 16361780;
          result[3] += 4090445;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 34896609;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2684354;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19607459;
          result[3] += 11204262;
          result[4] += 0;
          result[5] += 12137951;
        } else {
          result[0] += 46033;
          result[1] += 0;
          result[2] += 40095568;
          result[3] += 2485833;
          result[4] += 0;
          result[5] += 322237;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 316971;
          result[1] += 633943;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39146011;
          result[5] += 2852745;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2149926;
          result[1] += 48861;
          result[2] += 97723;
          result[3] += 2101064;
          result[4] += 1905616;
          result[5] += 36646478;
        } else {
          result[0] += 324148;
          result[1] += 0;
          result[2] += 0;
          result[3] += 20583428;
          result[4] += 972445;
          result[5] += 21069650;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32955673;
          result[1] += 3310895;
          result[2] += 0;
          result[3] += 1103631;
          result[4] += 4966343;
          result[5] += 613128;
        } else {
          result[0] += 8964573;
          result[1] += 401398;
          result[2] += 9767371;
          result[3] += 12041964;
          result[4] += 4549186;
          result[5] += 7225178;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
          result[0] += 331231;
          result[1] += 42287210;
          result[2] += 0;
          result[3] += 0;
          result[4] += 331231;
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5237764;
          result[4] += 1047552;
          result[5] += 36664354;
        } else {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 1227133;
          result[2] += 2454267;
          result[3] += 26178848;
          result[4] += 1227133;
          result[5] += 11862290;
        } else {
          result[0] += 1651910;
          result[1] += 0;
          result[2] += 9911462;
          result[3] += 6607641;
          result[4] += 2477865;
          result[5] += 22300791;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 1022611;
          result[1] += 0;
          result[2] += 18747873;
          result[3] += 15680039;
          result[4] += 0;
          result[5] += 7499149;
        } else {
          result[0] += 3579139;
          result[1] += 429496;
          result[2] += 32212254;
          result[3] += 6012954;
          result[4] += 143165;
          result[5] += 572662;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 30678337;
          result[2] += 6135667;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 130150;
          result[1] += 0;
          result[2] += 41192640;
          result[3] += 1431655;
          result[4] += 0;
          result[5] += 195225;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        } else {
          result[0] += 439382;
          result[1] += 768919;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38995227;
          result[5] += 2746142;
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
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 66178;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1125029;
          result[4] += 1257386;
          result[5] += 40501078;
        } else {
          result[0] += 5394315;
          result[1] += 614542;
          result[2] += 1297366;
          result[3] += 12905386;
          result[4] += 3960383;
          result[5] += 18777678;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36945955;
          result[1] += 1136798;
          result[2] += 497349;
          result[3] += 1065748;
          result[4] += 2557796;
          result[5] += 746024;
        } else {
          result[0] += 6999205;
          result[1] += 530242;
          result[2] += 9014128;
          result[3] += 11453246;
          result[4] += 2439117;
          result[5] += 12513731;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4026531;
          result[4] += 0;
          result[5] += 38923141;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 20580051;
          result[4] += 0;
          result[5] += 11632203;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 2684354;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24001287;
          result[3] += 17685159;
          result[4] += 421075;
          result[5] += 842150;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35257194;
          result[3] += 0;
          result[4] += 1923119;
          result[5] += 5769359;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 25769803;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 273216;
          result[1] += 0;
          result[2] += 40709295;
          result[3] += 1857873;
          result[4] += 0;
          result[5] += 109286;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 622459;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41912241;
          result[5] += 414972;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          result[0] += 37298400;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5651272;
          result[5] += 0;
        } else {
          result[0] += 557787;
          result[1] += 8924607;
          result[2] += 0;
          result[3] += 2231151;
          result[4] += 16175850;
          result[5] += 15060274;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35140641;
          result[5] += 7809031;
        } else {
          result[0] += 0;
          result[1] += 214480;
          result[2] += 0;
          result[3] += 1608601;
          result[4] += 1715842;
          result[5] += 39410748;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 222537;
          result[2] += 3783131;
          result[3] += 13129692;
          result[4] += 0;
          result[5] += 25814311;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 315806;
          result[3] += 32843867;
          result[4] += 0;
          result[5] += 9789998;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 16873085;
          result[2] += 0;
          result[3] += 9203501;
          result[4] += 16873085;
          result[5] += 0;
        } else {
          result[0] += 103743;
          result[1] += 41912241;
          result[2] += 0;
          result[3] += 414972;
          result[4] += 518715;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 3707885;
          result[1] += 8960723;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29354093;
          result[5] += 926971;
        } else {
          result[0] += 31429471;
          result[1] += 531701;
          result[2] += 1506487;
          result[3] += 3131131;
          result[4] += 3426521;
          result[5] += 2924358;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1182101;
          result[1] += 8668741;
          result[2] += 5122438;
          result[3] += 3546303;
          result[4] += 9062775;
          result[5] += 15367314;
        } else {
          result[0] += 1352745;
          result[1] += 0;
          result[2] += 18431158;
          result[3] += 17416599;
          result[4] += 169093;
          result[5] += 5580075;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 20615843;
          result[1] += 0;
          result[2] += 10307921;
          result[3] += 12025908;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 331840;
          result[1] += 0;
          result[2] += 38825366;
          result[3] += 2986566;
          result[4] += 0;
          result[5] += 805898;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 0;
        } else {
          result[0] += 845466;
          result[1] += 338186;
          result[2] += 0;
          result[3] += 338186;
          result[4] += 37707783;
          result[5] += 3720050;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 57266;
          result[1] += 0;
          result[2] += 687194;
          result[3] += 801727;
          result[4] += 1889785;
          result[5] += 39513699;
        } else {
          result[0] += 4246709;
          result[1] += 96516;
          result[2] += 386064;
          result[3] += 13608772;
          result[4] += 3571096;
          result[5] += 21040513;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1254005;
          result[1] += 8464534;
          result[2] += 313501;
          result[3] += 313501;
          result[4] += 29469118;
          result[5] += 3135012;
        } else {
          result[0] += 306054;
          result[1] += 42235545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 408072;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 3649318;
          result[1] += 15158708;
          result[2] += 2526451;
          result[3] += 3087884;
          result[4] += 11509389;
          result[5] += 7017920;
        } else {
          result[0] += 33158037;
          result[1] += 317910;
          result[2] += 1208058;
          result[3] += 3083729;
          result[4] += 2543281;
          result[5] += 2638654;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 12079595;
          result[2] += 1342177;
          result[3] += 9395240;
          result[4] += 20132659;
          result[5] += 0;
        } else {
          result[0] += 1605595;
          result[1] += 802797;
          result[2] += 3612589;
          result[3] += 4415386;
          result[4] += 2809791;
          result[5] += 29703512;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2129735;
          result[3] += 29816301;
          result[4] += 0;
          result[5] += 11003635;
        } else {
          result[0] += 9203501;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 4601750;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 24448275;
          result[4] += 0;
          result[5] += 1321528;
        } else {
          result[0] += 0;
          result[1] += 568869;
          result[2] += 29296796;
          result[3] += 10808526;
          result[4] += 0;
          result[5] += 2275479;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 31341653;
          result[1] += 0;
          result[2] += 11608019;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 173184;
          result[1] += 0;
          result[2] += 40467366;
          result[3] += 2135938;
          result[4] += 0;
          result[5] += 173184;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
          result[0] += 17179869;
          result[1] += 25769803;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 525914;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41722539;
          result[5] += 701219;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 38886866;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3482405;
          result[5] += 580400;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2183881;
          result[4] += 11647368;
          result[5] += 29118422;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 51871;
          result[1] += 155614;
          result[2] += 103743;
          result[3] += 1452404;
          result[4] += 2022991;
          result[5] += 39163047;
        } else {
          result[0] += 1908874;
          result[1] += 4581298;
          result[2] += 1145324;
          result[3] += 9353484;
          result[4] += 2672424;
          result[5] += 23288267;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 706990;
          result[1] += 1060485;
          result[2] += 353495;
          result[3] += 24037677;
          result[4] += 176747;
          result[5] += 16614276;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40086361;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2863311;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 42011451;
          result[2] += 0;
          result[3] += 0;
          result[4] += 938221;
          result[5] += 0;
        } else {
          result[0] += 1894838;
          result[1] += 6631934;
          result[2] += 0;
          result[3] += 3473870;
          result[4] += 29054190;
          result[5] += 1894838;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
          result[0] += 5448839;
          result[1] += 14423397;
          result[2] += 1282079;
          result[3] += 1923119;
          result[4] += 19231196;
          result[5] += 641039;
        } else {
          result[0] += 36030401;
          result[1] += 107553;
          result[2] += 1003832;
          result[3] += 2402026;
          result[4] += 2151068;
          result[5] += 1254790;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
          result[0] += 1145324;
          result[1] += 2290649;
          result[2] += 2290649;
          result[3] += 1717986;
          result[4] += 8017272;
          result[5] += 27487790;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17432514;
          result[3] += 17685159;
          result[4] += 505290;
          result[5] += 7326708;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1205930;
          result[1] += 0;
          result[2] += 33766049;
          result[3] += 6400707;
          result[4] += 92763;
          result[5] += 1484221;
        } else {
          result[0] += 78951;
          result[1] += 0;
          result[2] += 41607495;
          result[3] += 947419;
          result[4] += 0;
          result[5] += 315806;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
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
          result[4] += 34200665;
          result[5] += 8749007;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 41607495;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1342177;
          result[5] += 0;
        } else {
          result[0] += 288252;
          result[1] += 0;
          result[2] += 48042;
          result[3] += 2113854;
          result[4] += 1585390;
          result[5] += 38914133;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1238932;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3303820;
          result[4] += 5368709;
          result[5] += 33038209;
        } else {
          result[0] += 1351563;
          result[1] += 150173;
          result[2] += 901042;
          result[3] += 24328136;
          result[4] += 750868;
          result[5] += 15467889;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42580000))) ) ) {
          result[0] += 620959;
          result[1] += 39948370;
          result[2] += 0;
          result[3] += 103493;
          result[4] += 2173356;
          result[5] += 103493;
        } else {
          result[0] += 5327091;
          result[1] += 8323580;
          result[2] += 0;
          result[3] += 1664716;
          result[4] += 26635456;
          result[5] += 998829;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36922281;
          result[1] += 2057253;
          result[2] += 0;
          result[3] += 613566;
          result[4] += 2887372;
          result[5] += 469198;
        } else {
          result[0] += 11556739;
          result[1] += 172488;
          result[2] += 8451943;
          result[3] += 12246693;
          result[4] += 517465;
          result[5] += 10004341;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 802797;
          result[1] += 3612589;
          result[2] += 3211190;
          result[3] += 12443363;
          result[4] += 7225178;
          result[5] += 15654553;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20093414;
          result[3] += 18084072;
          result[4] += 753503;
          result[5] += 4018682;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 30317416;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12632256;
          result[5] += 0;
        } else {
          result[0] += 1340825;
          result[1] += 0;
          result[2] += 38494671;
          result[3] += 2811408;
          result[4] += 0;
          result[5] += 302767;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 39881839;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3067833;
          result[5] += 0;
        } else {
          result[0] += 638656;
          result[1] += 638656;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38319410;
          result[5] += 3352948;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1888727;
          result[1] += 264421;
          result[2] += 151098;
          result[3] += 3664132;
          result[4] += 2266473;
          result[5] += 34714819;
        } else {
          result[0] += 280716;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28913832;
          result[4] += 280716;
          result[5] += 13474407;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33743880;
          result[1] += 2084935;
          result[2] += 224531;
          result[3] += 737746;
          result[4] += 5517060;
          result[5] += 641518;
        } else {
          result[0] += 8278009;
          result[1] += 1919538;
          result[2] += 6118528;
          result[3] += 10077576;
          result[4] += 2999278;
          result[5] += 13556740;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 108185;
          result[1] += 42625116;
          result[2] += 0;
          result[3] += 0;
          result[4] += 216371;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7392976;
          result[3] += 28163719;
          result[4] += 0;
          result[5] += 7392976;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30516872;
          result[3] += 4521018;
          result[4] += 1130254;
          result[5] += 6781527;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27188325;
          result[3] += 14185213;
          result[4] += 0;
          result[5] += 1576134;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38897817;
          result[3] += 3241484;
          result[4] += 0;
          result[5] += 810371;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 5602131;
          result[1] += 0;
          result[2] += 33145943;
          result[3] += 4201598;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 277542;
          result[1] += 0;
          result[2] += 41561961;
          result[3] += 902012;
          result[4] += 0;
          result[5] += 208156;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 39881839;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3067833;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 156750;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38874156;
          result[5] += 3918765;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 304607;
          result[3] += 913822;
          result[4] += 1705802;
          result[5] += 40025439;
        } else {
          result[0] += 1967160;
          result[1] += 327860;
          result[2] += 2513594;
          result[3] += 13551550;
          result[4] += 3825034;
          result[5] += 20764472;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 2950740;
          result[1] += 4262181;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35081030;
          result[5] += 655720;
        } else {
          result[0] += 0;
          result[1] += 41514828;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1434844;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35983942;
          result[1] += 781520;
          result[2] += 339791;
          result[3] += 1732937;
          result[4] += 2548437;
          result[5] += 1563041;
        } else {
          result[0] += 6097793;
          result[1] += 353495;
          result[2] += 7865269;
          result[3] += 12460707;
          result[4] += 2297719;
          result[5] += 13874688;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 825955;
          result[2] += 10737418;
          result[3] += 4955731;
          result[4] += 825955;
          result[5] += 25604612;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6216400;
          result[3] += 29386618;
          result[4] += 0;
          result[5] += 7346654;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 2863311;
          result[3] += 0;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 5368709;
          result[2] += 21474836;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 773867;
          result[1] += 0;
          result[2] += 33276323;
          result[3] += 8125613;
          result[4] += 0;
          result[5] += 773867;
        } else {
          result[0] += 712857;
          result[1] += 0;
          result[2] += 40573480;
          result[3] += 1663334;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 18897856;
          result[2] += 0;
          result[3] += 13743895;
          result[4] += 10307921;
          result[5] += 0;
        } else {
          result[0] += 285379;
          result[1] += 0;
          result[2] += 0;
          result[3] += 285379;
          result[4] += 37384765;
          result[5] += 4994148;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1304433;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1980806;
          result[4] += 1932493;
          result[5] += 37731939;
        } else {
          result[0] += 5275967;
          result[1] += 412184;
          result[2] += 0;
          result[3] += 15827902;
          result[4] += 3297479;
          result[5] += 18136138;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 16886196;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25696385;
          result[5] += 367091;
        } else {
          result[0] += 0;
          result[1] += 42343324;
          result[2] += 0;
          result[3] += 0;
          result[4] += 606348;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36840939;
          result[1] += 1470620;
          result[2] += 490206;
          result[3] += 678748;
          result[4] += 2714992;
          result[5] += 754164;
        } else {
          result[0] += 10444337;
          result[1] += 639449;
          result[2] += 11083786;
          result[3] += 11829810;
          result[4] += 1811772;
          result[5] += 7140516;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3846239;
          result[3] += 14102877;
          result[4] += 1923119;
          result[5] += 23077436;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3390763;
          result[1] += 0;
          result[2] += 33907636;
          result[3] += 4521018;
          result[4] += 1130254;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32990328;
          result[3] += 9181270;
          result[4] += 0;
          result[5] += 778073;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41750380;
          result[3] += 1049381;
          result[4] += 0;
          result[5] += 149911;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42080000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 475457;
          result[1] += 950915;
          result[2] += 0;
          result[3] += 1267887;
          result[4] += 38829040;
          result[5] += 1426372;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 975073;
          result[1] += 0;
          result[2] += 46432;
          result[3] += 2693060;
          result[4] += 3157381;
          result[5] += 36077725;
        } else {
          result[0] += 3541063;
          result[1] += 1484962;
          result[2] += 3312607;
          result[3] += 16563038;
          result[4] += 3883747;
          result[5] += 14164253;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 9383962;
          result[2] += 0;
          result[3] += 1082764;
          result[4] += 27069121;
          result[5] += 5413824;
        } else {
          result[0] += 0;
          result[1] += 41130627;
          result[2] += 505290;
          result[3] += 0;
          result[4] += 1313754;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36954930;
          result[1] += 1441773;
          result[2] += 151765;
          result[3] += 1062359;
          result[4] += 2655898;
          result[5] += 682945;
        } else {
          result[0] += 8239325;
          result[1] += 438261;
          result[2] += 9992372;
          result[3] += 13936730;
          result[4] += 2278962;
          result[5] += 8064020;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 753503;
          result[2] += 8665284;
          result[3] += 16577066;
          result[4] += 1507006;
          result[5] += 15446812;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32843867;
          result[3] += 2526451;
          result[4] += 0;
          result[5] += 7579354;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 39045157;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34150227;
          result[3] += 7332870;
          result[4] += 0;
          result[5] += 1466574;
        } else {
          result[0] += 493674;
          result[1] += 0;
          result[2] += 41345231;
          result[3] += 925639;
          result[4] += 0;
          result[5] += 185127;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 390451;
          result[1] += 195225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41778318;
          result[5] += 585677;
        } else {
          result[0] += 8855602;
          result[1] += 7970042;
          result[2] += 442780;
          result[3] += 2213900;
          result[4] += 9298382;
          result[5] += 14168964;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 51130;
          result[2] += 0;
          result[3] += 2352005;
          result[4] += 2403136;
          result[5] += 38143400;
        } else {
          result[0] += 562659;
          result[1] += 0;
          result[2] += 750212;
          result[3] += 27945420;
          result[4] += 1500425;
          result[5] += 12190955;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 42147945;
          result[2] += 0;
          result[3] += 0;
          result[4] += 801727;
          result[5] += 0;
        } else {
          result[0] += 568869;
          result[1] += 8533047;
          result[2] += 1706609;
          result[3] += 0;
          result[4] += 31572276;
          result[5] += 568869;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36154455;
          result[1] += 1398058;
          result[2] += 130051;
          result[3] += 1007902;
          result[4] += 2958682;
          result[5] += 1300519;
        } else {
          result[0] += 4782814;
          result[1] += 573937;
          result[2] += 9278659;
          result[3] += 10330879;
          result[4] += 2869688;
          result[5] += 15113693;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 6607641;
          result[2] += 3303820;
          result[3] += 13215283;
          result[4] += 19822925;
          result[5] += 0;
        } else {
          result[0] += 1673363;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7251243;
          result[4] += 557787;
          result[5] += 33467277;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9698313;
          result[3] += 29094939;
          result[4] += 0;
          result[5] += 4156419;
        } else {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 34001824;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 2684354;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 40178726;
          result[1] += 0;
          result[2] += 2770946;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30723123;
          result[3] += 10659042;
          result[4] += 0;
          result[5] += 1567506;
        } else {
          result[0] += 388433;
          result[1] += 0;
          result[2] += 40119655;
          result[3] += 2386092;
          result[4] += 0;
          result[5] += 55490;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 36586758;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6362914;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 873552;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41348159;
          result[5] += 727960;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 37955524;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3995318;
          result[5] += 998829;
        } else {
          result[0] += 1149882;
          result[1] += 714791;
          result[2] += 466168;
          result[3] += 5998036;
          result[4] += 3449648;
          result[5] += 31171144;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 1447741;
          result[1] += 18820643;
          result[2] += 965161;
          result[3] += 6756128;
          result[4] += 14959998;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 38124835;
          result[1] += 947736;
          result[2] += 258473;
          result[3] += 1033893;
          result[4] += 2110866;
          result[5] += 473868;
        } else {
          result[0] += 13477930;
          result[1] += 179705;
          result[2] += 8086758;
          result[3] += 11860579;
          result[4] += 1617351;
          result[5] += 7727347;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 360921;
          result[2] += 4331059;
          result[3] += 23098983;
          result[4] += 1443686;
          result[5] += 13715021;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18611524;
          result[5] += 24338148;
        } else {
          result[0] += 4601750;
          result[1] += 0;
          result[2] += 30294858;
          result[3] += 4218271;
          result[4] += 383479;
          result[5] += 3451313;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10105805;
          result[3] += 26948814;
          result[4] += 0;
          result[5] += 5895053;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31770990;
          result[3] += 9413626;
          result[4] += 0;
          result[5] += 1765055;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 3067833;
          result[4] += 3067833;
          result[5] += 24542670;
        } else {
          result[0] += 169985;
          result[1] += 0;
          result[2] += 40739861;
          result[3] += 1756516;
          result[4] += 0;
          result[5] += 283309;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 203552;
          result[1] += 203552;
          result[2] += 0;
          result[3] += 203552;
          result[4] += 40914143;
          result[5] += 1424870;
        } else {
          result[0] += 0;
          result[1] += 19522578;
          result[2] += 0;
          result[3] += 1952257;
          result[4] += 2928386;
          result[5] += 18546449;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 920004;
          result[1] += 0;
          result[2] += 48421;
          result[3] += 1404217;
          result[4] += 2566327;
          result[5] += 38010702;
        } else {
          result[0] += 2571836;
          result[1] += 1028734;
          result[2] += 0;
          result[3] += 20574693;
          result[4] += 514367;
          result[5] += 18260040;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 15158708;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27790964;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42737575;
          result[2] += 0;
          result[3] += 0;
          result[4] += 212097;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31350126;
          result[1] += 1849657;
          result[2] += 31350;
          result[3] += 1222654;
          result[4] += 6332725;
          result[5] += 2163158;
        } else {
          result[0] += 6695096;
          result[1] += 757935;
          result[2] += 8842579;
          result[3] += 13011224;
          result[4] += 1263225;
          result[5] += 12379611;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 505290;
          result[3] += 2021161;
          result[4] += 4547612;
          result[5] += 35875609;
        } else {
          result[0] += 1717986;
          result[1] += 3435973;
          result[2] += 27487790;
          result[3] += 1717986;
          result[4] += 0;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          result[0] += 6607641;
          result[1] += 4129776;
          result[2] += 12389328;
          result[3] += 5781686;
          result[4] += 4955731;
          result[5] += 9085507;
        } else {
          result[0] += 340870;
          result[1] += 340870;
          result[2] += 2726963;
          result[3] += 34768782;
          result[4] += 0;
          result[5] += 4772185;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 14092861;
          result[1] += 1342177;
          result[2] += 13421772;
          result[3] += 8724152;
          result[4] += 671088;
          result[5] += 4697620;
        } else {
          result[0] += 597907;
          result[1] += 0;
          result[2] += 32386644;
          result[3] += 8868957;
          result[4] += 0;
          result[5] += 1096163;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37257547;
          result[3] += 5174659;
          result[4] += 0;
          result[5] += 517465;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42555639;
          result[3] += 394033;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 565127;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41065915;
          result[5] += 1318630;
        } else {
          result[0] += 17935028;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10383437;
          result[5] += 14631207;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 135773;
          result[2] += 0;
          result[3] += 2308148;
          result[4] += 2398664;
          result[5] += 38107086;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1166054;
          result[3] += 23904116;
          result[4] += 1360396;
          result[5] += 16519104;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 294849;
          result[1] += 42065125;
          result[2] += 98283;
          result[3] += 98283;
          result[4] += 393132;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 3904515;
          result[1] += 12741051;
          result[2] += 0;
          result[3] += 822003;
          result[4] += 25276601;
          result[5] += 205500;
        } else {
          result[0] += 31917866;
          result[1] += 278893;
          result[2] += 2262140;
          result[3] += 2974869;
          result[4] += 2448069;
          result[5] += 3067833;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5558192;
          result[3] += 9600515;
          result[4] += 2526451;
          result[5] += 25264513;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6028024;
          result[3] += 30893624;
          result[4] += 376751;
          result[5] += 5651272;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 1342177;
          result[2] += 4026531;
          result[3] += 8053063;
          result[4] += 14763950;
          result[5] += 14763950;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35187683;
          result[3] += 5692125;
          result[4] += 0;
          result[5] += 2069863;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3119249;
          result[1] += 479884;
          result[2] += 27113480;
          result[3] += 9117807;
          result[4] += 239942;
          result[5] += 2879307;
        } else {
          result[0] += 251167;
          result[1] += 0;
          result[2] += 38930990;
          result[3] += 3265179;
          result[4] += 0;
          result[5] += 502335;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42990000))) ) ) {
          result[0] += 8589934;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 17179869;
        } else {
          result[0] += 68719;
          result[1] += 0;
          result[2] += 41781441;
          result[3] += 893353;
          result[4] += 0;
          result[5] += 206158;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
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
          result[4] += 38041138;
          result[5] += 4908534;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
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
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 666920;
          result[4] += 666920;
          result[5] += 41615832;
        } else {
          result[0] += 315806;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9158386;
          result[4] += 3789677;
          result[5] += 29685803;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          result[0] += 38654705;
          result[1] += 1717986;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2576980;
          result[5] += 0;
        } else {
          result[0] += 414572;
          result[1] += 82914;
          result[2] += 580400;
          result[3] += 15090425;
          result[4] += 2072860;
          result[5] += 24708499;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 2576980;
          result[1] += 12312239;
          result[2] += 0;
          result[3] += 858993;
          result[4] += 25769803;
          result[5] += 1431655;
        } else {
          result[0] += 306054;
          result[1] += 41521417;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1122200;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36256217;
          result[1] += 1710549;
          result[2] += 371858;
          result[3] += 1004018;
          result[4] += 3160798;
          result[5] += 446230;
        } else {
          result[0] += 10956549;
          result[1] += 0;
          result[2] += 3944357;
          result[3] += 15339168;
          result[4] += 3506095;
          result[5] += 9203501;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 627002;
          result[1] += 1567506;
          result[2] += 4232267;
          result[3] += 20691083;
          result[4] += 2821511;
          result[5] += 13010302;
        } else {
          result[0] += 288252;
          result[1] += 0;
          result[2] += 29401789;
          result[3] += 9224090;
          result[4] += 0;
          result[5] += 4035539;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 15858340;
          result[1] += 1982292;
          result[2] += 15527958;
          result[3] += 4955731;
          result[4] += 660764;
          result[5] += 3964585;
        } else {
          result[0] += 300697;
          result[1] += 0;
          result[2] += 38639670;
          result[3] += 3407908;
          result[4] += 50116;
          result[5] += 551279;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 179705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41512026;
          result[5] += 1257940;
        } else {
          result[0] += 0;
          result[1] += 35140641;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1349511;
          result[4] += 1466860;
          result[5] += 40133300;
        } else {
          result[0] += 3871773;
          result[1] += 1170536;
          result[2] += 810371;
          result[3] += 14226516;
          result[4] += 2881319;
          result[5] += 19989155;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 208493;
          result[1] += 41907205;
          result[2] += 0;
          result[3] += 0;
          result[4] += 833974;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31721401;
          result[1] += 1196455;
          result[2] += 61356;
          result[3] += 1135098;
          result[4] += 7086696;
          result[5] += 1748665;
        } else {
          result[0] += 7553521;
          result[1] += 87831;
          result[2] += 10978955;
          result[3] += 12559924;
          result[4] += 1668801;
          result[5] += 10100638;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2342709;
          result[3] += 10932644;
          result[4] += 780903;
          result[5] += 28893416;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17895697;
          result[3] += 25053975;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33405301;
          result[3] += 7953643;
          result[4] += 0;
          result[5] += 1590728;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 698368;
          result[2] += 28633115;
          result[3] += 11173898;
          result[4] += 349184;
          result[5] += 2095105;
        } else {
          result[0] += 690509;
          result[1] += 138101;
          result[2] += 37563701;
          result[3] += 4419258;
          result[4] += 0;
          result[5] += 138101;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 318145;
          result[1] += 0;
          result[2] += 40722652;
          result[3] += 1908874;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42836944;
          result[3] += 112728;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 709911;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40997415;
          result[5] += 1242345;
        } else {
          result[0] += 998829;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22973080;
          result[5] += 18977762;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 64295;
          result[1] += 0;
          result[2] += 64295;
          result[3] += 964438;
          result[4] += 1028734;
          result[5] += 40827907;
        } else {
          result[0] += 3727037;
          result[1] += 354955;
          result[2] += 0;
          result[3] += 11891025;
          result[4] += 3194603;
          result[5] += 23782050;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27042386;
          result[5] += 1590728;
        } else {
          result[0] += 848388;
          result[1] += 41571041;
          result[2] += 0;
          result[3] += 0;
          result[4] += 530242;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33600511;
          result[1] += 1819635;
          result[2] += 94119;
          result[3] += 658833;
          result[4] += 5709890;
          result[5] += 1066682;
        } else {
          result[0] += 8284061;
          result[1] += 254894;
          result[2] += 10705556;
          result[3] += 12999604;
          result[4] += 764682;
          result[5] += 9940873;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 7516192;
          result[5] += 24696061;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6853671;
          result[3] += 25587039;
          result[4] += 0;
          result[5] += 10508962;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 4405094;
          result[2] += 0;
          result[3] += 5506368;
          result[4] += 19822925;
          result[5] += 13215283;
        } else {
          result[0] += 4452100;
          result[1] += 0;
          result[2] += 27498266;
          result[3] += 7332870;
          result[4] += 261888;
          result[5] += 3404547;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6362914;
          result[3] += 36586758;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 289223;
          result[1] += 0;
          result[2] += 35574476;
          result[3] += 5784467;
          result[4] += 0;
          result[5] += 1301505;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42431314;
          result[3] += 444306;
          result[4] += 0;
          result[5] += 74051;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42020000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 684456;
          result[2] += 0;
          result[3] += 513342;
          result[4] += 39014045;
          result[5] += 2737827;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 32061023;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10888649;
          result[5] += 0;
        } else {
          result[0] += 185287;
          result[1] += 111172;
          result[2] += 148230;
          result[3] += 7115045;
          result[4] += 1704646;
          result[5] += 33685291;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 523776;
          result[1] += 6285317;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35616801;
          result[5] += 523776;
        } else {
          result[0] += 0;
          result[1] += 42303118;
          result[2] += 0;
          result[3] += 0;
          result[4] += 646554;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 18784969;
          result[1] += 352769;
          result[2] += 3704078;
          result[3] += 8466465;
          result[4] += 5908887;
          result[5] += 5732502;
        } else {
          result[0] += 35879433;
          result[1] += 1097106;
          result[2] += 2072311;
          result[3] += 609503;
          result[4] += 2316112;
          result[5] += 975205;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 5726623;
          result[4] += 22906492;
          result[5] += 5726623;
        } else {
          result[0] += 0;
          result[1] += 511305;
          result[2] += 7669584;
          result[3] += 6135667;
          result[4] += 1022611;
          result[5] += 27610504;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3646670;
          result[3] += 29578548;
          result[4] += 405185;
          result[5] += 9319268;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 36168145;
          result[1] += 6781527;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 13805252;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 7669584;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 645859;
          result[1] += 322929;
          result[2] += 33261776;
          result[3] += 7265922;
          result[4] += 0;
          result[5] += 1453184;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41644400;
          result[3] += 1305272;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 440509;
          result[2] += 440509;
          result[3] += 0;
          result[4] += 42068654;
          result[5] += 0;
        } else {
          result[0] += 580400;
          result[1] += 0;
          result[2] += 580400;
          result[3] += 580400;
          result[4] += 24957242;
          result[5] += 16251227;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 591050;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2019422;
          result[4] += 2413456;
          result[5] += 37925743;
        } else {
          result[0] += 2097542;
          result[1] += 2696839;
          result[2] += 199765;
          result[3] += 15981273;
          result[4] += 399531;
          result[5] += 21574719;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 8053063;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34896609;
          result[5] += 0;
        } else {
          result[0] += 98058;
          result[1] += 41772969;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1078644;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 7727347;
          result[1] += 5031760;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29112330;
          result[5] += 1078234;
        } else {
          result[0] += 29852148;
          result[1] += 283496;
          result[2] += 2267969;
          result[3] += 4082345;
          result[4] += 2211270;
          result[5] += 4252442;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3368601;
          result[3] += 33686018;
          result[4] += 0;
          result[5] += 5895053;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 13293946;
          result[4] += 0;
          result[5] += 15339168;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36633544;
          result[3] += 3158064;
          result[4] += 0;
          result[5] += 3158064;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26143279;
          result[3] += 13071639;
          result[4] += 0;
          result[5] += 3734754;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35466017;
          result[3] += 7483655;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 593774;
          result[1] += 0;
          result[2] += 40376651;
          result[3] += 1715347;
          result[4] += 0;
          result[5] += 263899;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 425244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41461317;
          result[5] += 1063110;
        } else {
          result[0] += 1101273;
          result[1] += 2202547;
          result[2] += 4405094;
          result[3] += 2202547;
          result[4] += 16519104;
          result[5] += 16519104;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1424160;
          result[1] += 224867;
          result[2] += 74955;
          result[3] += 3373010;
          result[4] += 3073187;
          result[5] += 34779490;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28814337;
          result[4] += 815500;
          result[5] += 13319835;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 11632203;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31317469;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42572093;
          result[2] += 0;
          result[3] += 0;
          result[4] += 377579;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35071535;
          result[1] += 1313022;
          result[2] += 207319;
          result[3] += 1036597;
          result[4] += 4111835;
          result[5] += 1209363;
        } else {
          result[0] += 5283103;
          result[1] += 1663199;
          result[2] += 12620746;
          result[3] += 11935899;
          result[4] += 3326398;
          result[5] += 8120325;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 4955731;
          result[4] += 1651910;
          result[5] += 33038209;
        } else {
          result[0] += 447392;
          result[1] += 447392;
          result[2] += 20132659;
          result[3] += 11184810;
          result[4] += 894784;
          result[5] += 9842633;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27126109;
          result[3] += 14919360;
          result[4] += 0;
          result[5] += 904203;
        } else {
          result[0] += 2004318;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 4867629;
          result[4] += 0;
          result[5] += 286331;
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
          result[0] += 63254;
          result[1] += 0;
          result[2] += 41431569;
          result[3] += 1138577;
          result[4] += 0;
          result[5] += 316271;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 1047552;
          result[2] += 0;
          result[3] += 349184;
          result[4] += 38934053;
          result[5] += 2618882;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1131317;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2585869;
          result[4] += 3272740;
          result[5] += 35959744;
        } else {
          result[0] += 917074;
          result[1] += 152845;
          result[2] += 2904070;
          result[3] += 22315488;
          result[4] += 1528458;
          result[5] += 15131735;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 7669584;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35280088;
          result[5] += 0;
        } else {
          result[0] += 107374;
          result[1] += 41446434;
          result[2] += 0;
          result[3] += 536870;
          result[4] += 858993;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34875670;
          result[1] += 1407087;
          result[2] += 301518;
          result[3] += 737045;
          result[4] += 3383710;
          result[5] += 2244639;
        } else {
          result[0] += 6817408;
          result[1] += 1022611;
          result[2] += 7726396;
          result[3] += 11589594;
          result[4] += 2954210;
          result[5] += 12839452;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a30000))) ) ) {
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
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13015052;
          result[3] += 22125589;
          result[4] += 0;
          result[5] += 7809031;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 37580963;
        } else {
          result[0] += 477218;
          result[1] += 0;
          result[2] += 30303380;
          result[3] += 10260199;
          result[4] += 0;
          result[5] += 1908874;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 2863311;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 221105;
          result[1] += 0;
          result[2] += 41015002;
          result[3] += 1658288;
          result[4] += 0;
          result[5] += 55276;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 418340;
          result[1] += 139446;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40718521;
          result[5] += 1673363;
        } else {
          result[0] += 0;
          result[1] += 33746171;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9203501;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 45020;
          result[1] += 0;
          result[2] += 135061;
          result[3] += 3016381;
          result[4] += 3916794;
          result[5] += 35836414;
        } else {
          result[0] += 14184303;
          result[1] += 1388673;
          result[2] += 991909;
          result[3] += 8431229;
          result[4] += 6447410;
          result[5] += 11506147;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 557787;
          result[1] += 11713547;
          result[2] += 557787;
          result[3] += 3346727;
          result[4] += 25658246;
          result[5] += 1115575;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 12229405;
          result[1] += 1174022;
          result[2] += 1761034;
          result[3] += 13599099;
          result[4] += 880517;
          result[5] += 13305593;
        } else {
          result[0] += 36449626;
          result[1] += 1645581;
          result[2] += 1193046;
          result[3] += 699372;
          result[4] += 2756348;
          result[5] += 205697;
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 29655726;
          result[4] += 0;
          result[5] += 13293946;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 26247022;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13563054;
          result[3] += 22039963;
          result[4] += 0;
          result[5] += 7346654;
        } else {
          result[0] += 885560;
          result[1] += 0;
          result[2] += 32544339;
          result[3] += 5756141;
          result[4] += 0;
          result[5] += 3763631;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 374561;
          result[1] += 0;
          result[2] += 33835352;
          result[3] += 7116660;
          result[4] += 124853;
          result[5] += 1498244;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 84215;
          result[1] += 0;
          result[2] += 42444382;
          result[3] += 336860;
          result[4] += 0;
          result[5] += 84215;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 7809031;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15618062;
          result[5] += 19522578;
        } else {
          result[0] += 455296;
          result[1] += 0;
          result[2] += 455296;
          result[3] += 151765;
          result[4] += 40976719;
          result[5] += 910593;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 35140641;
          result[5] += 3904515;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1299792;
          result[4] += 1412818;
          result[5] += 40237062;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 32869647;
          result[1] += 438261;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9641763;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 875150;
          result[2] += 1279065;
          result[3] += 15416105;
          result[4] += 2625450;
          result[5] += 22753901;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428c0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1867377;
          result[1] += 18940539;
          result[2] += 0;
          result[3] += 533536;
          result[4] += 21608220;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 29126135;
          result[1] += 967078;
          result[2] += 2844349;
          result[3] += 3128784;
          result[4] += 4038975;
          result[5] += 2844349;
        } else {
          result[0] += 42707929;
          result[1] += 0;
          result[2] += 241742;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 2928386;
          result[1] += 3904515;
          result[2] += 976128;
          result[3] += 4880644;
          result[4] += 13665805;
          result[5] += 16594191;
        } else {
          result[0] += 631612;
          result[1] += 0;
          result[2] += 21264298;
          result[3] += 17474621;
          result[4] += 210537;
          result[5] += 3368601;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 21474836;
          result[1] += 5368709;
          result[2] += 2147483;
          result[3] += 2147483;
          result[4] += 4294967;
          result[5] += 7516192;
        } else {
          result[0] += 297572;
          result[1] += 0;
          result[2] += 40271517;
          result[3] += 1983818;
          result[4] += 0;
          result[5] += 396763;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42094953;
          result[5] += 854719;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1160801;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13929623;
          result[5] += 27859247;
        } else {
          result[0] += 3067833;
          result[1] += 0;
          result[2] += 3067833;
          result[3] += 9203501;
          result[4] += 23008753;
          result[5] += 4601750;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33405301;
          result[5] += 9544371;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1212546;
          result[4] += 319091;
          result[5] += 41418035;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3259053;
          result[1] += 581973;
          result[2] += 1396737;
          result[3] += 6052528;
          result[4] += 4888580;
          result[5] += 26770798;
        } else {
          result[0] += 740511;
          result[1] += 740511;
          result[2] += 2221534;
          result[3] += 24066627;
          result[4] += 1666151;
          result[5] += 13514336;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 3040684;
          result[1] += 7981797;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31927190;
          result[5] += 0;
        } else {
          result[0] += 491415;
          result[1] += 41082295;
          result[2] += 0;
          result[3] += 393132;
          result[4] += 982830;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
          result[0] += 6028024;
          result[1] += 1507006;
          result[2] += 2260509;
          result[3] += 11302545;
          result[4] += 3516347;
          result[5] += 18335240;
        } else {
          result[0] += 35666606;
          result[1] += 1089056;
          result[2] += 714693;
          result[3] += 1429386;
          result[4] += 2858773;
          result[5] += 1191155;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 265121;
          result[2] += 7688521;
          result[3] += 25451658;
          result[4] += 1060485;
          result[5] += 8483886;
        } else {
          result[0] += 1227133;
          result[1] += 2454267;
          result[2] += 26383370;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 6749234;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 19522578;
          result[1] += 4462303;
          result[2] += 15060274;
          result[3] += 1115575;
          result[4] += 1115575;
          result[5] += 1673363;
        } else {
          result[0] += 524843;
          result[1] += 0;
          result[2] += 38707189;
          result[3] += 3149059;
          result[4] += 0;
          result[5] += 568580;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 197924;
          result[2] += 0;
          result[3] += 791699;
          result[4] += 40970425;
          result[5] += 989623;
        } else {
          result[0] += 0;
          result[1] += 36342030;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3303820;
          result[5] += 3303820;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 3368601;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17685159;
          result[5] += 21895911;
        } else {
          result[0] += 38544578;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1101273;
          result[4] += 2202547;
          result[5] += 1101273;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5726623;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 8589934;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 120138;
          result[3] += 1021181;
          result[4] += 961111;
          result[5] += 40847241;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 449734;
          result[3] += 7645491;
          result[4] += 3148143;
          result[5] += 31706303;
        } else {
          result[0] += 157903;
          result[1] += 631612;
          result[2] += 2368548;
          result[3] += 23527578;
          result[4] += 2368548;
          result[5] += 13895482;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2477865;
          result[1] += 4129776;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36342030;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 200699;
          result[1] += 42548274;
          result[2] += 0;
          result[3] += 0;
          result[4] += 200699;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34976176;
          result[1] += 1038564;
          result[2] += 0;
          result[3] += 569535;
          result[4] += 4924806;
          result[5] += 1440589;
        } else {
          result[0] += 11647368;
          result[1] += 181990;
          result[2] += 4003783;
          result[3] += 12011349;
          result[4] += 3093832;
          result[5] += 12011349;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 352046;
          result[2] += 11793557;
          result[3] += 20242673;
          result[4] += 0;
          result[5] += 10561394;
        } else {
          result[0] += 1669134;
          result[1] += 325684;
          result[2] += 36151004;
          result[3] += 3460400;
          result[4] += 407105;
          result[5] += 936343;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 591050;
          result[2] += 394033;
          result[3] += 394033;
          result[4] += 39600386;
          result[5] += 1970168;
        } else {
          result[0] += 0;
          result[1] += 25769803;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 5726623;
          result[5] += 2863311;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 683186;
          result[1] += 91091;
          result[2] += 91091;
          result[3] += 2277289;
          result[4] += 3051567;
          result[5] += 36755446;
        } else {
          result[0] += 2202547;
          result[1] += 550636;
          result[2] += 1238932;
          result[3] += 18996970;
          result[4] += 2615524;
          result[5] += 17345060;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 933688;
          result[1] += 14627787;
          result[2] += 0;
          result[3] += 4357213;
          result[4] += 23030984;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42508031;
          result[2] += 0;
          result[3] += 331231;
          result[4] += 110410;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35123145;
          result[1] += 1924555;
          result[2] += 1090581;
          result[3] += 801898;
          result[4] += 2886833;
          result[5] += 1122657;
        } else {
          result[0] += 8210966;
          result[1] += 1421128;
          result[2] += 7421450;
          result[3] += 9947902;
          result[4] += 3947580;
          result[5] += 12000643;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3253763;
          result[3] += 1301505;
          result[4] += 2603010;
          result[5] += 35791394;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 36814005;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 14778382;
          result[4] += 0;
          result[5] += 13854733;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 1590728;
          result[1] += 0;
          result[2] += 3181457;
          result[3] += 0;
          result[4] += 34996029;
          result[5] += 3181457;
        } else {
          result[0] += 15158708;
          result[1] += 1263225;
          result[2] += 21474836;
          result[3] += 1263225;
          result[4] += 0;
          result[5] += 3789677;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29670547;
          result[3] += 10581803;
          result[4] += 622459;
          result[5] += 2074863;
        } else {
          result[0] += 59404;
          result[1] += 0;
          result[2] += 40870504;
          result[3] += 1663334;
          result[4] += 0;
          result[5] += 356428;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41621332;
          result[5] += 1328340;
        } else {
          result[0] += 0;
          result[1] += 37092899;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5856773;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 1543366;
          result[1] += 440961;
          result[2] += 132288;
          result[3] += 2160712;
          result[4] += 2645770;
          result[5] += 36026573;
        } else {
          result[0] += 0;
          result[1] += 326613;
          result[2] += 326613;
          result[3] += 24659317;
          result[4] += 1796374;
          result[5] += 15840753;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31004387;
          result[1] += 2875167;
          result[2] += 266768;
          result[3] += 978149;
          result[4] += 6194949;
          result[5] += 1630249;
        } else {
          result[0] += 9232172;
          result[1] += 602098;
          result[2] += 7927626;
          result[3] += 11941614;
          result[4] += 1705944;
          result[5] += 11540215;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 4772185;
          result[1] += 4772185;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        } else {
          result[0] += 403283;
          result[1] += 41739823;
          result[2] += 403283;
          result[3] += 100820;
          result[4] += 302462;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6727057;
          result[3] += 26908228;
          result[4] += 0;
          result[5] += 9314386;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31865886;
          result[3] += 9698313;
          result[4] += 0;
          result[5] += 1385473;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 25769803;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39602945;
          result[3] += 3346727;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 16106127;
        } else {
          result[0] += 310105;
          result[1] += 0;
          result[2] += 39641876;
          result[3] += 2842637;
          result[4] += 0;
          result[5] += 155052;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 311229;
          result[1] += 155614;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40459836;
          result[5] += 2022991;
        } else {
          result[0] += 0;
          result[1] += 40178726;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2770946;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
          result[0] += 36814005;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5577879;
          result[5] += 557787;
        } else {
          result[0] += 174734;
          result[1] += 244627;
          result[2] += 279574;
          result[3] += 5836123;
          result[4] += 3145216;
          result[5] += 33269396;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 4772185;
          result[2] += 0;
          result[3] += 4772185;
          result[4] += 33405301;
          result[5] += 0;
        } else {
          result[0] += 492542;
          result[1] += 41964588;
          result[2] += 0;
          result[3] += 0;
          result[4] += 492542;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          result[0] += 7195756;
          result[1] += 224867;
          result[2] += 899469;
          result[3] += 7870358;
          result[4] += 6746021;
          result[5] += 20013198;
        } else {
          result[0] += 32389866;
          result[1] += 1840700;
          result[2] += 2002165;
          result[3] += 1646942;
          result[4] += 3778279;
          result[5] += 1291719;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 596523;
          result[2] += 6561755;
          result[3] += 9544371;
          result[4] += 3579139;
          result[5] += 22667882;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7341824;
          result[3] += 30101480;
          result[4] += 0;
          result[5] += 5506368;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41082295;
          result[3] += 1867377;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1238932;
          result[1] += 0;
          result[2] += 24365679;
          result[3] += 15280172;
          result[4] += 0;
          result[5] += 2064888;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 3303820;
          result[1] += 29734388;
          result[2] += 3303820;
          result[3] += 3303820;
          result[4] += 3303820;
          result[5] += 0;
        } else {
          result[0] += 35140641;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35096018;
          result[3] += 7608227;
          result[4] += 0;
          result[5] += 245426;
        } else {
          result[0] += 297024;
          result[1] += 0;
          result[2] += 41523957;
          result[3] += 950476;
          result[4] += 0;
          result[5] += 178214;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 419021;
          result[2] += 0;
          result[3] += 209510;
          result[4] += 41483098;
          result[5] += 838042;
        } else {
          result[0] += 0;
          result[1] += 35140641;
          result[2] += 0;
          result[3] += 7809031;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 2107134;
          result[1] += 1300146;
          result[2] += 44832;
          result[3] += 1793305;
          result[4] += 2510628;
          result[5] += 35193625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28218142;
          result[4] += 0;
          result[5] += 14731530;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 282563;
          result[1] += 12432800;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29104054;
          result[5] += 1130254;
        } else {
          result[0] += 0;
          result[1] += 42730541;
          result[2] += 0;
          result[3] += 0;
          result[4] += 219130;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36746236;
          result[1] += 912270;
          result[2] += 145963;
          result[3] += 1313668;
          result[4] += 3320662;
          result[5] += 510871;
        } else {
          result[0] += 7447330;
          result[1] += 1020182;
          result[2] += 9997786;
          result[3] += 9793749;
          result[4] += 4182747;
          result[5] += 10507877;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 543666;
          result[3] += 3805667;
          result[4] += 2718333;
          result[5] += 35882005;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 876523;
          result[1] += 0;
          result[2] += 3506095;
          result[3] += 26733980;
          result[4] += 1753047;
          result[5] += 10080025;
        } else {
          result[0] += 7730941;
          result[1] += 6012954;
          result[2] += 23192823;
          result[3] += 3435973;
          result[4] += 0;
          result[5] += 2576980;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 3463683;
          result[1] += 0;
          result[2] += 12469259;
          result[3] += 20782099;
          result[4] += 0;
          result[5] += 6234629;
        } else {
          result[0] += 1487434;
          result[1] += 0;
          result[2] += 31979843;
          result[3] += 8366819;
          result[4] += 0;
          result[5] += 1115575;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31236125;
          result[1] += 0;
          result[2] += 11713547;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41636052;
          result[3] += 1256506;
          result[4] += 0;
          result[5] += 57113;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 4772185;
        } else {
          result[0] += 308990;
          result[1] += 0;
          result[2] += 617980;
          result[3] += 0;
          result[4] += 40632244;
          result[5] += 1390457;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 954437;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 3149642;
          result[5] += 36459500;
        } else {
          result[0] += 2353406;
          result[1] += 1176703;
          result[2] += 2059230;
          result[3] += 18827253;
          result[4] += 2206318;
          result[5] += 16326759;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 1455921;
          result[1] += 6187664;
          result[2] += 0;
          result[3] += 363980;
          result[4] += 32394244;
          result[5] += 2547861;
        } else {
          result[0] += 0;
          result[1] += 41868559;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1081113;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36971195;
          result[1] += 1357077;
          result[2] += 183388;
          result[3] += 990299;
          result[4] += 2127310;
          result[5] += 1320399;
        } else {
          result[0] += 11825104;
          result[1] += 892460;
          result[2] += 9928625;
          result[3] += 9370837;
          result[4] += 2008036;
          result[5] += 8924607;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 2863311;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37223049;
          result[5] += 2863311;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3606461;
          result[3] += 16065144;
          result[4] += 655720;
          result[5] += 22622346;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34598347;
          result[3] += 0;
          result[4] += 2386092;
          result[5] += 5965232;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9203501;
          result[3] += 30064771;
          result[4] += 0;
          result[5] += 3681400;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39370533;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 3734754;
          result[1] += 0;
          result[2] += 14005328;
          result[3] += 20541147;
          result[4] += 0;
          result[5] += 4668442;
        } else {
          result[0] += 330745;
          result[1] += 0;
          result[2] += 39311471;
          result[3] += 2929460;
          result[4] += 0;
          result[5] += 377994;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 39645851;
          result[2] += 0;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 188375;
          result[2] += 188375;
          result[3] += 188375;
          result[4] += 42007794;
          result[5] += 376751;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 216371;
          result[1] += 0;
          result[2] += 54092;
          result[3] += 1081855;
          result[4] += 2380082;
          result[5] += 39217270;
        } else {
          result[0] += 2911842;
          result[1] += 1698574;
          result[2] += 485307;
          result[3] += 14073904;
          result[4] += 2345650;
          result[5] += 21434394;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 19522578;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23427094;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42743184;
          result[2] += 0;
          result[3] += 0;
          result[4] += 206488;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31600784;
          result[1] += 1467528;
          result[2] += 97835;
          result[3] += 1239246;
          result[4] += 5967949;
          result[5] += 2576328;
        } else {
          result[0] += 9524021;
          result[1] += 2381005;
          result[2] += 8058787;
          result[3] += 9890329;
          result[4] += 3388353;
          result[5] += 9707175;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 24542670;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 33500744;
          result[4] += 0;
          result[5] += 5153960;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15907286;
          result[3] += 22270200;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38859227;
          result[3] += 4090445;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 4443069;
          result[1] += 0;
          result[2] += 13329208;
          result[3] += 17772278;
          result[4] += 0;
          result[5] += 7405116;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32142981;
          result[3] += 9975407;
          result[4] += 0;
          result[5] += 831283;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24865600;
          result[3] += 0;
          result[4] += 0;
          result[5] += 18084072;
        } else {
          result[0] += 297847;
          result[1] += 0;
          result[2] += 41341294;
          result[3] += 1250961;
          result[4] += 0;
          result[5] += 59569;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 172488;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41224786;
          result[5] += 1552397;
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
          result[0] += 55063;
          result[1] += 0;
          result[2] += 110127;
          result[3] += 1376592;
          result[4] += 1927228;
          result[5] += 39480660;
        } else {
          result[0] += 3291162;
          result[1] += 246837;
          result[2] += 0;
          result[3] += 12341860;
          result[4] += 3126604;
          result[5] += 23943208;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 23427094;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19522578;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42755769;
          result[2] += 0;
          result[3] += 0;
          result[4] += 193903;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1309441;
          result[1] += 12570635;
          result[2] += 523776;
          result[3] += 523776;
          result[4] += 25926936;
          result[5] += 2095105;
        } else {
          result[0] += 30251270;
          result[1] += 274263;
          result[2] += 2934620;
          result[3] += 3675131;
          result[4] += 2715209;
          result[5] += 3099178;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 1342177;
          result[2] += 1342177;
          result[3] += 34896609;
          result[4] += 0;
          result[5] += 5368709;
        } else {
          result[0] += 0;
          result[1] += 7809031;
          result[2] += 5856773;
          result[3] += 3904515;
          result[4] += 5856773;
          result[5] += 19522578;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 1244918;
          result[1] += 622459;
          result[2] += 25520820;
          result[3] += 10581803;
          result[4] += 311229;
          result[5] += 4668442;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 3655291;
          result[2] += 22845570;
          result[3] += 13707342;
          result[4] += 0;
          result[5] += 2741468;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37080773;
          result[3] += 5602131;
          result[4] += 0;
          result[5] += 266768;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 19685266;
          result[1] += 0;
          result[2] += 23264406;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41311459;
          result[3] += 1424533;
          result[4] += 0;
          result[5] += 213679;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 2076117;
          result[1] += 6358108;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33607145;
          result[5] += 908301;
        } else {
          result[0] += 33789380;
          result[1] += 1037014;
          result[2] += 86417;
          result[3] += 86417;
          result[4] += 4752981;
          result[5] += 3197460;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
          result[0] += 107643;
          result[1] += 42519099;
          result[2] += 0;
          result[3] += 0;
          result[4] += 322929;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 2202547;
          result[2] += 0;
          result[3] += 4405094;
          result[4] += 22025473;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 60322;
          result[3] += 1387419;
          result[4] += 361935;
          result[5] += 41139995;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 622459;
          result[1] += 0;
          result[2] += 995934;
          result[3] += 7096032;
          result[4] += 7345016;
          result[5] += 26890230;
        } else {
          result[0] += 5771362;
          result[1] += 3623878;
          result[2] += 805306;
          result[3] += 17448304;
          result[4] += 4093640;
          result[5] += 11207180;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 6442450;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 39268272;
          result[1] += 0;
          result[2] += 2147483;
          result[3] += 613566;
          result[4] += 920350;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 588351;
          result[1] += 0;
          result[2] += 17650550;
          result[3] += 20003957;
          result[4] += 0;
          result[5] += 4706813;
        } else {
          result[0] += 800304;
          result[1] += 0;
          result[2] += 36280469;
          result[3] += 4588412;
          result[4] += 106707;
          result[5] += 1173779;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 5368709;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37580963;
          result[5] += 0;
        } else {
          result[0] += 42144995;
          result[1] += 0;
          result[2] += 704092;
          result[3] += 0;
          result[4] += 100584;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 27331610;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 11713547;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1101273;
          result[1] += 0;
          result[2] += 40747125;
          result[3] += 825955;
          result[4] += 0;
          result[5] += 275318;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2095105;
          result[1] += 0;
          result[2] += 0;
          result[3] += 299300;
          result[4] += 33222395;
          result[5] += 7332870;
        } else {
          result[0] += 20089363;
          result[1] += 2078209;
          result[2] += 0;
          result[3] += 3463683;
          result[4] += 16625679;
          result[5] += 692736;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 95869;
          result[1] += 47934;
          result[2] += 287609;
          result[3] += 2588484;
          result[4] += 2780224;
          result[5] += 37149549;
        } else {
          result[0] += 0;
          result[1] += 593774;
          result[2] += 0;
          result[3] += 23157196;
          result[4] += 197924;
          result[5] += 19000776;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 103743;
          result[1] += 42742186;
          result[2] += 0;
          result[3] += 0;
          result[4] += 103743;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1620742;
          result[1] += 6888155;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34440775;
          result[5] += 0;
        } else {
          result[0] += 31433559;
          result[1] += 1485950;
          result[2] += 1543102;
          result[3] += 2600412;
          result[4] += 3657723;
          result[5] += 2228925;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2587329;
          result[3] += 3622261;
          result[4] += 4139727;
          result[5] += 32600354;
        } else {
          result[0] += 210537;
          result[1] += 0;
          result[2] += 5684515;
          result[3] += 22738062;
          result[4] += 210537;
          result[5] += 14106020;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1101273;
          result[1] += 1835456;
          result[2] += 26797659;
          result[3] += 7708915;
          result[4] += 734182;
          result[5] += 4772185;
        } else {
          result[0] += 20975421;
          result[1] += 9988296;
          result[2] += 4994148;
          result[3] += 0;
          result[4] += 5992977;
          result[5] += 998829;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18253611;
          result[3] += 18790481;
          result[4] += 0;
          result[5] += 5905580;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39467267;
          result[3] += 3482405;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 22906492;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 2863311;
        } else {
          result[0] += 341321;
          result[1] += 0;
          result[2] += 40731080;
          result[3] += 1763496;
          result[4] += 0;
          result[5] += 113773;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 186737;
          result[2] += 0;
          result[3] += 186737;
          result[4] += 41082295;
          result[5] += 1493901;
        } else {
          result[0] += 0;
          result[1] += 35140641;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 704092;
          result[4] += 1232162;
          result[5] += 41013417;
        } else {
          result[0] += 5025016;
          result[1] += 189623;
          result[2] += 1327362;
          result[3] += 12704759;
          result[4] += 5119828;
          result[5] += 18583081;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 18293379;
          result[2] += 0;
          result[3] += 6362914;
          result[4] += 15111921;
          result[5] += 3181457;
        } else {
          result[0] += 110981;
          result[1] += 42061824;
          result[2] += 0;
          result[3] += 110981;
          result[4] += 665886;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 19414832;
          result[1] += 1241646;
          result[2] += 2765484;
          result[3] += 4176446;
          result[4] += 6659739;
          result[5] += 8691523;
        } else {
          result[0] += 38177487;
          result[1] += 1143336;
          result[2] += 546812;
          result[3] += 248551;
          result[4] += 2336382;
          result[5] += 497102;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1970168;
          result[1] += 394033;
          result[2] += 3152269;
          result[3] += 4728404;
          result[4] += 6304539;
          result[5] += 26400257;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7423400;
          result[3] += 30223843;
          result[4] += 0;
          result[5] += 5302428;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34973305;
          result[3] += 6749234;
          result[4] += 0;
          result[5] += 1227133;
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 37993941;
          result[1] += 0;
          result[2] += 4955731;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 16702650;
          result[1] += 16702650;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 0;
        } else {
          result[0] += 277094;
          result[1] += 0;
          result[2] += 39485989;
          result[3] += 2770946;
          result[4] += 0;
          result[5] += 415641;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 201641;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42143106;
          result[5] += 604924;
        } else {
          result[0] += 0;
          result[1] += 37223049;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5726623;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 502335;
          result[4] += 1318630;
          result[5] += 41128707;
        } else {
          result[0] += 3290140;
          result[1] += 1511686;
          result[2] += 88922;
          result[3] += 12449180;
          result[4] += 3023372;
          result[5] += 22586370;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 3734754;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39214918;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42747080;
          result[2] += 0;
          result[3] += 0;
          result[4] += 202592;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 7648571;
          result[1] += 4314579;
          result[2] += 784468;
          result[3] += 0;
          result[4] += 27260294;
          result[5] += 2941758;
        } else {
          result[0] += 31052673;
          result[1] += 572260;
          result[2] += 1987853;
          result[3] += 2861303;
          result[4] += 2710708;
          result[5] += 3764873;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 2045222;
          result[2] += 0;
          result[3] += 7499149;
          result[4] += 6817408;
          result[5] += 26587892;
        } else {
          result[0] += 561433;
          result[1] += 0;
          result[2] += 6456486;
          result[3] += 28071681;
          result[4] += 280716;
          result[5] += 7579354;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 707961;
          result[1] += 943948;
          result[2] += 26430567;
          result[3] += 7787578;
          result[4] += 471974;
          result[5] += 6607641;
        } else {
          result[0] += 25520820;
          result[1] += 622459;
          result[2] += 11826721;
          result[3] += 3112295;
          result[4] += 1244918;
          result[5] += 622459;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33627263;
          result[3] += 8323580;
          result[4] += 0;
          result[5] += 998829;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39993622;
          result[3] += 2956050;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42709730;
          result[3] += 239942;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 445074;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42504598;
          result[5] += 0;
        } else {
          result[0] += 1034931;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25355831;
          result[5] += 16558910;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 173417;
          result[2] += 346834;
          result[3] += 2081007;
          result[4] += 924892;
          result[5] += 39423522;
        } else {
          result[0] += 4683975;
          result[1] += 1190841;
          result[2] += 158778;
          result[3] += 13258032;
          result[4] += 3651913;
          result[5] += 20006132;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25769803;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42756205;
          result[2] += 0;
          result[3] += 0;
          result[4] += 193466;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33448982;
          result[1] += 1605289;
          result[2] += 327610;
          result[3] += 1408723;
          result[4] += 5405565;
          result[5] += 753503;
        } else {
          result[0] += 5017485;
          result[1] += 200699;
          result[2] += 8228675;
          result[3] += 11339516;
          result[4] += 4515736;
          result[5] += 13647559;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2902004;
          result[3] += 31341653;
          result[4] += 0;
          result[5] += 8706014;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21974251;
          result[3] += 20975421;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 600694;
          result[1] += 0;
          result[2] += 33338557;
          result[3] += 8109378;
          result[4] += 0;
          result[5] += 901042;
        } else {
          result[0] += 14316557;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13329208;
          result[3] += 23696371;
          result[4] += 0;
          result[5] += 5924092;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38506603;
          result[3] += 4443069;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37647244;
          result[3] += 4772185;
          result[4] += 0;
          result[5] += 530242;
        } else {
          result[0] += 132765;
          result[1] += 0;
          result[2] += 41887548;
          result[3] += 663828;
          result[4] += 0;
          result[5] += 265531;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 954437;
          result[1] += 795364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39450069;
          result[5] += 1749801;
        } else {
          result[0] += 24696061;
          result[1] += 3221225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8858370;
          result[5] += 6174015;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1605077;
          result[4] += 1826468;
          result[5] += 39518126;
        } else {
          result[0] += 1219391;
          result[1] += 1354879;
          result[2] += 2438782;
          result[3] += 8942203;
          result[4] += 5419517;
          result[5] += 23574899;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 42521247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 428425;
          result[5] += 0;
        } else {
          result[0] += 5651272;
          result[1] += 15823563;
          result[2] += 6781527;
          result[3] += 2260509;
          result[4] += 10172290;
          result[5] += 2260509;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34574486;
          result[1] += 1431655;
          result[2] += 107374;
          result[3] += 1539029;
          result[4] += 3865470;
          result[5] += 1431655;
        } else {
          result[0] += 9684730;
          result[1] += 1157956;
          result[2] += 5684515;
          result[3] += 13895482;
          result[4] += 1894838;
          result[5] += 10632149;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 3904515;
          result[2] += 2342709;
          result[3] += 3123612;
          result[4] += 11713547;
          result[5] += 21865288;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3401954;
          result[3] += 30192344;
          result[4] += 0;
          result[5] += 9355374;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2147483;
          result[1] += 0;
          result[2] += 31138512;
          result[3] += 4294967;
          result[4] += 1073741;
          result[5] += 4294967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16106127;
          result[3] += 0;
          result[4] += 0;
          result[5] += 26843545;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 660764;
          result[2] += 5286113;
          result[3] += 27091332;
          result[4] += 2643056;
          result[5] += 7268406;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26733980;
          result[3] += 9641763;
          result[4] += 0;
          result[5] += 6573929;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 2045222;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 199765;
          result[1] += 0;
          result[2] += 39353886;
          result[3] += 3146313;
          result[4] += 99882;
          result[5] += 149824;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42870000))) ) ) {
          result[0] += 1301505;
          result[1] += 1487434;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37929581;
          result[5] += 2231151;
        } else {
          result[0] += 26160255;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10542192;
          result[5] += 6247225;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 94187;
          result[1] += 376751;
          result[2] += 706409;
          result[3] += 2966918;
          result[4] += 3296575;
          result[5] += 35508830;
        } else {
          result[0] += 711087;
          result[1] += 2275479;
          result[2] += 568869;
          result[3] += 19483792;
          result[4] += 3128784;
          result[5] += 16781660;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 981706;
          result[1] += 15216455;
          result[2] += 1227133;
          result[3] += 1227133;
          result[4] += 22333829;
          result[5] += 1963413;
        } else {
          result[0] += 32519963;
          result[1] += 744979;
          result[2] += 1263225;
          result[3] += 3303820;
          result[4] += 2850355;
          result[5] += 2267328;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 11713547;
          result[1] += 24207997;
          result[2] += 1561806;
          result[3] += 0;
          result[4] += 5466322;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 23126746;
          result[2] += 9911462;
          result[3] += 0;
          result[4] += 9911462;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1363481;
          result[3] += 10907853;
          result[4] += 2726963;
          result[5] += 27951374;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
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
          result[3] += 20969546;
          result[4] += 505290;
          result[5] += 4294967;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2060316;
          result[1] += 0;
          result[2] += 33599006;
          result[3] += 5863977;
          result[4] += 0;
          result[5] += 1426372;
        } else {
          result[0] += 119971;
          result[1] += 0;
          result[2] += 41150105;
          result[3] += 1619610;
          result[4] += 0;
          result[5] += 59985;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 33038209;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 0;
          result[4] += 3303820;
          result[5] += 0;
        } else {
          result[0] += 8380423;
          result[1] += 0;
          result[2] += 34569248;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1651910;
          result[1] += 4645998;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34483631;
          result[5] += 2168132;
        } else {
          result[0] += 0;
          result[1] += 42524428;
          result[2] += 0;
          result[3] += 0;
          result[4] += 425244;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 3303820;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9911462;
          result[5] += 29734388;
        } else {
          result[0] += 40481300;
          result[1] += 197469;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1875962;
          result[5] += 394939;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1073741;
          result[4] += 27917287;
          result[5] += 13958643;
        } else {
          result[0] += 133799;
          result[1] += 89199;
          result[2] += 44599;
          result[3] += 2988191;
          result[4] += 2051593;
          result[5] += 37642288;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 1233742;
          result[1] += 1619287;
          result[2] += 1773505;
          result[3] += 18891687;
          result[4] += 2236158;
          result[5] += 17195290;
        } else {
          result[0] += 14815392;
          result[1] += 2693707;
          result[2] += 5836366;
          result[3] += 5387415;
          result[4] += 9427976;
          result[5] += 4788813;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 42480277;
          result[1] += 0;
          result[2] += 234697;
          result[3] += 0;
          result[4] += 234697;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30963717;
          result[3] += 7990636;
          result[4] += 0;
          result[5] += 3995318;
        } else {
          result[0] += 33405301;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26755533;
          result[3] += 15490045;
          result[4] += 0;
          result[5] += 704092;
        } else {
          result[0] += 36552913;
          result[1] += 0;
          result[2] += 6396759;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1675341;
          result[1] += 0;
          result[2] += 35334482;
          result[3] += 5178329;
          result[4] += 0;
          result[5] += 761519;
        } else {
          result[0] += 66485;
          result[1] += 0;
          result[2] += 41354019;
          result[3] += 1396196;
          result[4] += 0;
          result[5] += 132971;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 4579193;
          result[1] += 157903;
          result[2] += 0;
          result[3] += 947419;
          result[4] += 32370157;
          result[5] += 4894999;
        } else {
          result[0] += 9005576;
          result[1] += 32558623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1385473;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 96084;
          result[2] += 0;
          result[3] += 2594275;
          result[4] += 2209938;
          result[5] += 38049374;
        } else {
          result[0] += 550636;
          result[1] += 917728;
          result[2] += 1468364;
          result[3] += 20557108;
          result[4] += 2019001;
          result[5] += 17436833;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 42396197;
          result[2] += 0;
          result[3] += 0;
          result[4] += 553475;
          result[5] += 0;
        } else {
          result[0] += 320519;
          result[1] += 12500277;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30128875;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35699856;
          result[1] += 475998;
          result[2] += 0;
          result[3] += 1281533;
          result[4] += 3917830;
          result[5] += 1574455;
        } else {
          result[0] += 7953643;
          result[1] += 1325607;
          result[2] += 7025718;
          result[3] += 9809493;
          result[4] += 2651214;
          result[5] += 14183996;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2882528;
          result[3] += 19312940;
          result[4] += 864758;
          result[5] += 19889445;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27331610;
          result[3] += 1952257;
          result[4] += 1952257;
          result[5] += 11713547;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1847297;
          result[1] += 4387332;
          result[2] += 25631256;
          result[3] += 7158278;
          result[4] += 461824;
          result[5] += 3463683;
        } else {
          result[0] += 40802189;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2147483;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 16106127;
          result[3] += 16106127;
          result[4] += 0;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 9085507;
          result[4] += 0;
          result[5] += 1651910;
        } else {
          result[0] += 331657;
          result[1] += 0;
          result[2] += 41015002;
          result[3] += 1547735;
          result[4] += 0;
          result[5] += 55276;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 180460;
          result[2] += 0;
          result[3] += 360921;
          result[4] += 41686447;
          result[5] += 721843;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30064771;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 721085;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1306968;
          result[4] += 3920904;
          result[5] += 37000715;
        } else {
          result[0] += 2112278;
          result[1] += 281637;
          result[2] += 0;
          result[3] += 18588055;
          result[4] += 1549004;
          result[5] += 20418696;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 5153960;
          result[2] += 0;
          result[3] += 3435973;
          result[4] += 32641751;
          result[5] += 1717986;
        } else {
          result[0] += 0;
          result[1] += 42288908;
          result[2] += 0;
          result[3] += 0;
          result[4] += 660764;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33372389;
          result[1] += 2205078;
          result[2] += 197469;
          result[3] += 1184818;
          result[4] += 4805097;
          result[5] += 1184818;
        } else {
          result[0] += 5145012;
          result[1] += 559240;
          result[2] += 11632203;
          result[3] += 10961114;
          result[4] += 5256861;
          result[5] += 9395240;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 1342177;
          result[1] += 0;
          result[2] += 1342177;
          result[3] += 23488102;
          result[4] += 1342177;
          result[5] += 15435038;
        } else {
          result[0] += 740511;
          result[1] += 1481023;
          result[2] += 19993813;
          result[3] += 14810232;
          result[4] += 0;
          result[5] += 5924092;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32938846;
          result[3] += 9042036;
          result[4] += 0;
          result[5] += 968789;
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 28633115;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 3579139;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 398142;
          result[1] += 0;
          result[2] += 41008725;
          result[3] += 1542804;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 21474836;
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
