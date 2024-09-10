
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 202592;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41936708;
          result[5] += 810371;
        } else {
          result[0] += 0;
          result[1] += 40086361;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2863311;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 926638;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1621616;
          result[4] += 2223931;
          result[5] += 38177487;
        } else {
          result[0] += 2040109;
          result[1] += 536870;
          result[2] += 1073741;
          result[3] += 20615843;
          result[4] += 3221225;
          result[5] += 15461882;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32710015;
          result[1] += 2686329;
          result[2] += 316038;
          result[3] += 884908;
          result[4] += 4708978;
          result[5] += 1643401;
        } else {
          result[0] += 5955687;
          result[1] += 229064;
          result[2] += 8360869;
          result[3] += 12369505;
          result[4] += 3092376;
          result[5] += 12942168;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d70000))) ) ) {
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
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 429496;
          result[1] += 0;
          result[2] += 12025908;
          result[3] += 23622320;
          result[4] += 858993;
          result[5] += 6012954;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27201459;
          result[3] += 6442450;
          result[4] += 0;
          result[5] += 9305762;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37407779;
          result[3] += 5541893;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 0;
          result[4] += 0;
          result[5] += 24542670;
        } else {
          result[0] += 577151;
          result[1] += 0;
          result[2] += 40496780;
          result[3] += 1539070;
          result[4] += 0;
          result[5] += 336671;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 150173;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42499151;
          result[5] += 300347;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 54922;
          result[1] += 0;
          result[2] += 109845;
          result[3] += 1592762;
          result[4] += 1592762;
          result[5] += 39599378;
        } else {
          result[0] += 5585721;
          result[1] += 905792;
          result[2] += 452896;
          result[3] += 16002338;
          result[4] += 3925101;
          result[5] += 16077821;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 17037886;
          result[2] += 0;
          result[3] += 1064867;
          result[4] += 24137006;
          result[5] += 709911;
        } else {
          result[0] += 100349;
          result[1] += 42648623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 200699;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 38164519;
          result[1] += 583555;
          result[2] += 272325;
          result[3] += 544651;
          result[4] += 3112295;
          result[5] += 272325;
        } else {
          result[0] += 10532617;
          result[1] += 936232;
          result[2] += 9362326;
          result[3] += 10883704;
          result[4] += 2691668;
          result[5] += 8543122;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 3332302;
          result[1] += 5924092;
          result[2] += 4072813;
          result[3] += 6664604;
          result[4] += 5183581;
          result[5] += 17772278;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10140895;
          result[3] += 27440068;
          result[4] += 596523;
          result[5] += 4772185;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2712610;
          result[1] += 0;
          result[2] += 33003432;
          result[3] += 6329425;
          result[4] += 0;
          result[5] += 904203;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23427094;
          result[3] += 17179869;
          result[4] += 780903;
          result[5] += 1561806;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39768215;
          result[3] += 0;
          result[4] += 1590728;
          result[5] += 1590728;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39189102;
          result[3] += 3562645;
          result[4] += 0;
          result[5] += 197924;
        } else {
          result[0] += 119304;
          result[1] += 0;
          result[2] += 42353149;
          result[3] += 477218;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 173885;
          result[4] += 41384705;
          result[5] += 1391082;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1320645;
          result[4] += 861290;
          result[5] += 40767737;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42940000))) ) ) {
          result[0] += 7012191;
          result[1] += 4820881;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26295718;
          result[5] += 4820881;
        } else {
          result[0] += 1314785;
          result[1] += 350609;
          result[2] += 1665395;
          result[3] += 18319350;
          result[4] += 1139481;
          result[5] += 20160050;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 1890866;
          result[1] += 15937300;
          result[2] += 0;
          result[3] += 1620742;
          result[4] += 23500764;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42355898;
          result[2] += 0;
          result[3] += 98962;
          result[4] += 494811;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 38239787;
          result[1] += 560700;
          result[2] += 149520;
          result[3] += 897121;
          result[4] += 2280182;
          result[5] += 822361;
        } else {
          result[0] += 8454660;
          result[1] += 1183652;
          result[2] += 5749168;
          result[3] += 10314685;
          result[4] += 7271007;
          result[5] += 9976498;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 1827645;
          result[2] += 4264506;
          result[3] += 13707342;
          result[4] += 609215;
          result[5] += 22540963;
        } else {
          result[0] += 5215317;
          result[1] += 4908534;
          result[2] += 21474836;
          result[3] += 5522100;
          result[4] += 1533916;
          result[5] += 4294967;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 171798;
          result[2] += 27831388;
          result[3] += 12025908;
          result[4] += 0;
          result[5] += 2920577;
        } else {
          result[0] += 499414;
          result[1] += 0;
          result[2] += 40889586;
          result[3] += 1435817;
          result[4] += 0;
          result[5] += 124853;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2526451;
          result[1] += 40423221;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          result[0] += 769707;
          result[1] += 307882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39716901;
          result[5] += 2155180;
        } else {
          result[0] += 3336269;
          result[1] += 153391;
          result[2] += 38347;
          result[3] += 3336269;
          result[4] += 3719748;
          result[5] += 32365646;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33259174;
          result[1] += 2803322;
          result[2] += 34608;
          result[3] += 1280530;
          result[4] += 4464551;
          result[5] += 1107485;
        } else {
          result[0] += 5563780;
          result[1] += 339254;
          result[2] += 8820627;
          result[3] += 16352087;
          result[4] += 1153466;
          result[5] += 10720455;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ce0000))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 565127;
          result[2] += 8476909;
          result[3] += 27126109;
          result[4] += 2260509;
          result[5] += 4521018;
        } else {
          result[0] += 1419823;
          result[1] += 709911;
          result[2] += 28041522;
          result[3] += 10648679;
          result[4] += 0;
          result[5] += 2129735;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 795364;
          result[2] += 31019208;
          result[3] += 7953643;
          result[4] += 795364;
          result[5] += 2386092;
        } else {
          result[0] += 35370318;
          result[1] += 2526451;
          result[2] += 5052902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 16702650;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41143642;
          result[3] += 1693153;
          result[4] += 0;
          result[5] += 112876;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 330382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42288908;
          result[5] += 330382;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 3904515;
          result[1] += 0;
          result[2] += 7809031;
          result[3] += 0;
          result[4] += 11713547;
          result[5] += 19522578;
        } else {
          result[0] += 0;
          result[1] += 2863311;
          result[2] += 0;
          result[3] += 40086361;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 40452598;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2497074;
          result[5] += 0;
        } else {
          result[0] += 2603010;
          result[1] += 5206020;
          result[2] += 0;
          result[3] += 6507526;
          result[4] += 27331610;
          result[5] += 1301505;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 93674;
          result[1] += 281022;
          result[2] += 46837;
          result[3] += 2857066;
          result[4] += 1217766;
          result[5] += 38453305;
        } else {
          result[0] += 869133;
          result[1] += 289711;
          result[2] += 1883122;
          result[3] += 19048505;
          result[4] += 2534972;
          result[5] += 18324228;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42485853;
          result[2] += 0;
          result[3] += 0;
          result[4] += 463819;
          result[5] += 0;
        } else {
          result[0] += 386933;
          result[1] += 15090425;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27472313;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 40452029;
          result[1] += 293840;
          result[2] += 0;
          result[3] += 195893;
          result[4] += 1860989;
          result[5] += 146920;
        } else {
          result[0] += 21990232;
          result[1] += 687194;
          result[2] += 9964324;
          result[3] += 5153960;
          result[4] += 687194;
          result[5] += 4466765;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1291719;
          result[1] += 3552228;
          result[2] += 6781527;
          result[3] += 15500633;
          result[4] += 4198088;
          result[5] += 11625475;
        } else {
          result[0] += 7046430;
          result[1] += 0;
          result[2] += 28521267;
          result[3] += 7046430;
          result[4] += 0;
          result[5] += 335544;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30912821;
          result[3] += 9848332;
          result[4] += 0;
          result[5] += 2188518;
        } else {
          result[0] += 323741;
          result[1] += 0;
          result[2] += 41169096;
          result[3] += 1402878;
          result[4] += 0;
          result[5] += 53956;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42788208;
          result[5] += 161464;
        } else {
          result[0] += 2202547;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35240757;
          result[5] += 5506368;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 483259;
          result[4] += 1087333;
          result[5] += 41379080;
        } else {
          result[0] += 4473924;
          result[1] += 417566;
          result[2] += 298261;
          result[3] += 12407683;
          result[4] += 4951142;
          result[5] += 20401094;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 928641;
          result[1] += 13929623;
          result[2] += 0;
          result[3] += 232160;
          result[4] += 27859247;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42847411;
          result[2] += 0;
          result[3] += 0;
          result[4] += 102261;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          result[0] += 37132390;
          result[1] += 717716;
          result[2] += 415520;
          result[3] += 1359884;
          result[4] += 2719768;
          result[5] += 604392;
        } else {
          result[0] += 5368709;
          result[1] += 145100;
          result[2] += 11898220;
          result[3] += 11462919;
          result[4] += 2902004;
          result[5] += 11172718;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8053063;
          result[3] += 10737418;
          result[4] += 2684354;
          result[5] += 21474836;
        } else {
          result[0] += 1263225;
          result[1] += 0;
          result[2] += 7579354;
          result[3] += 29685803;
          result[4] += 0;
          result[5] += 4421289;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 753503;
          result[1] += 0;
          result[2] += 31647127;
          result[3] += 7535030;
          result[4] += 0;
          result[5] += 3014012;
        } else {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 332943;
          result[1] += 0;
          result[2] += 40452598;
          result[3] += 1997659;
          result[4] += 0;
          result[5] += 166471;
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
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42103373;
          result[5] += 846298;
        } else {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 1533916;
          result[1] += 766958;
          result[2] += 0;
          result[3] += 1917396;
          result[4] += 23775711;
          result[5] += 14955689;
        } else {
          result[0] += 28163719;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4928650;
          result[4] += 8449115;
          result[5] += 1408185;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 537617;
          result[4] += 836294;
          result[5] += 41575761;
        } else {
          result[0] += 0;
          result[1] += 2358021;
          result[2] += 0;
          result[3] += 7579354;
          result[4] += 7242493;
          result[5] += 25769803;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3530110;
          result[3] += 10001978;
          result[4] += 1765055;
          result[5] += 27652529;
        } else {
          result[0] += 588351;
          result[1] += 0;
          result[2] += 2941758;
          result[3] += 28829232;
          result[4] += 1176703;
          result[5] += 9413626;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2410440;
          result[1] += 16653954;
          result[2] += 438261;
          result[3] += 1533916;
          result[4] += 20817443;
          result[5] += 1095654;
        } else {
          result[0] += 30172949;
          result[1] += 760171;
          result[2] += 2426700;
          result[3] += 3040684;
          result[4] += 2397463;
          result[5] += 4151704;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 441641;
          result[1] += 41955978;
          result[2] += 0;
          result[3] += 0;
          result[4] += 552052;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 1510792;
          result[1] += 3884895;
          result[2] += 15323752;
          result[3] += 15323752;
          result[4] += 1079137;
          result[5] += 5827342;
        } else {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 10498808;
          result[3] += 0;
          result[4] += 1908874;
          result[5] += 1908874;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27236377;
          result[3] += 11523082;
          result[4] += 0;
          result[5] += 4190211;
        } else {
          result[0] += 323741;
          result[1] += 0;
          result[2] += 40737441;
          result[3] += 1834533;
          result[4] += 0;
          result[5] += 53956;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          result[0] += 331657;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41954699;
          result[5] += 663315;
        } else {
          result[0] += 4502788;
          result[1] += 1385473;
          result[2] += 0;
          result[3] += 2078209;
          result[4] += 21128468;
          result[5] += 13854733;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 41184617;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1176703;
          result[5] += 588351;
        } else {
          result[0] += 0;
          result[1] += 177661;
          result[2] += 0;
          result[3] += 3331153;
          result[4] += 3064661;
          result[5] += 36376196;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19088743;
          result[5] += 0;
        } else {
          result[0] += 97171;
          result[1] += 42755330;
          result[2] += 0;
          result[3] += 97171;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34590857;
          result[1] += 1771914;
          result[2] += 0;
          result[3] += 885957;
          result[4] += 4506826;
          result[5] += 1194116;
        } else {
          result[0] += 4428662;
          result[1] += 417798;
          result[2] += 7938169;
          result[3] += 16962614;
          result[4] += 584917;
          result[5] += 12617510;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 572662;
          result[1] += 572662;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4008636;
          result[5] += 37795712;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33405301;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9544371;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 454493;
          result[1] += 2499716;
          result[2] += 9544371;
          result[3] += 24315423;
          result[4] += 681740;
          result[5] += 5453926;
        } else {
          result[0] += 13805252;
          result[1] += 1533916;
          result[2] += 23008753;
          result[3] += 766958;
          result[4] += 3451313;
          result[5] += 383479;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30266548;
          result[3] += 11241860;
          result[4] += 0;
          result[5] += 1441264;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39268272;
          result[3] += 1227133;
          result[4] += 0;
          result[5] += 2454267;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 123418;
          result[1] += 0;
          result[2] += 41592068;
          result[3] += 1110767;
          result[4] += 0;
          result[5] += 123418;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 702174;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40258004;
          result[5] += 1989494;
        } else {
          result[0] += 0;
          result[1] += 39645851;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3303820;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 32359342;
          result[1] += 2059230;
          result[2] += 294175;
          result[3] += 882527;
          result[4] += 6766044;
          result[5] += 588351;
        } else {
          result[0] += 1020934;
          result[1] += 246432;
          result[2] += 281637;
          result[3] += 5738357;
          result[4] += 3450055;
          result[5] += 32212254;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 42844145;
          result[2] += 0;
          result[3] += 0;
          result[4] += 105527;
          result[5] += 0;
        } else {
          result[0] += 2684354;
          result[1] += 15435038;
          result[2] += 0;
          result[3] += 2013265;
          result[4] += 21474836;
          result[5] += 1342177;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36031336;
          result[1] += 759817;
          result[2] += 119971;
          result[3] += 1719586;
          result[4] += 1839557;
          result[5] += 2479403;
        } else {
          result[0] += 7485781;
          result[1] += 2152162;
          result[2] += 9076510;
          result[3] += 15252280;
          result[4] += 1777873;
          result[5] += 7205064;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 20452225;
          result[4] += 0;
          result[5] += 18407002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 4026531;
          result[4] += 0;
          result[5] += 28185722;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29734388;
          result[3] += 8259552;
          result[4] += 0;
          result[5] += 4955731;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42300000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 1639300;
          result[1] += 0;
          result[2] += 29507408;
          result[3] += 8524362;
          result[4] += 655720;
          result[5] += 2622880;
        } else {
          result[0] += 103244;
          result[1] += 0;
          result[2] += 40781540;
          result[3] += 1806777;
          result[4] += 0;
          result[5] += 258111;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 567616;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41057616;
          result[5] += 1324439;
        } else {
          result[0] += 26797659;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7708915;
          result[5] += 8443098;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 218240;
          result[2] += 0;
          result[3] += 2444290;
          result[4] += 3142658;
          result[5] += 37144483;
        } else {
          result[0] += 0;
          result[1] += 140358;
          result[2] += 842150;
          result[3] += 24282004;
          result[4] += 842150;
          result[5] += 16843009;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 3904515;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 35140641;
          result[5] += 0;
        } else {
          result[0] += 88738;
          result[1] += 41618588;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1242345;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35922224;
          result[1] += 1383061;
          result[2] += 0;
          result[3] += 224280;
          result[4] += 5046306;
          result[5] += 373800;
        } else {
          result[0] += 7497449;
          result[1] += 107106;
          result[2] += 11567492;
          result[3] += 13495408;
          result[4] += 2677660;
          result[5] += 7604555;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5924092;
          result[3] += 26658417;
          result[4] += 0;
          result[5] += 10367162;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 1227133;
          result[2] += 19634136;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 4908534;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38654705;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2260509;
          result[3] += 4521018;
          result[4] += 2260509;
          result[5] += 33907636;
        } else {
          result[0] += 1227133;
          result[1] += 1227133;
          result[2] += 29451204;
          result[3] += 2454267;
          result[4] += 0;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 3390763;
          result[1] += 0;
          result[2] += 27126109;
          result[3] += 5651272;
          result[4] += 0;
          result[5] += 6781527;
        } else {
          result[0] += 328576;
          result[1] += 0;
          result[2] += 40602696;
          result[3] += 1783702;
          result[4] += 0;
          result[5] += 234697;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42960000))) ) ) {
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
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 347770;
          result[4] += 41384705;
          result[5] += 1217197;
        } else {
          result[0] += 861342;
          result[1] += 78303;
          result[2] += 39151;
          result[3] += 6381765;
          result[4] += 2035900;
          result[5] += 33553208;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31379309;
          result[1] += 2968313;
          result[2] += 0;
          result[3] += 999533;
          result[4] += 6300093;
          result[5] += 1302423;
        } else {
          result[0] += 5961468;
          result[1] += 677439;
          result[2] += 10906778;
          result[3] += 15581111;
          result[4] += 1151647;
          result[5] += 8671227;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a60000))) ) ) {
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 373475;
          result[2] += 25022852;
          result[3] += 13071639;
          result[4] += 0;
          result[5] += 4481705;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39114880;
          result[3] += 1533916;
          result[4] += 0;
          result[5] += 2300875;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 3904515;
          result[1] += 0;
          result[2] += 39045157;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 311229;
          result[1] += 0;
          result[2] += 39059304;
          result[3] += 3112295;
          result[4] += 0;
          result[5] += 466844;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42521033;
          result[3] += 428639;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 723058;
          result[1] += 867670;
          result[2] += 0;
          result[3] += 144611;
          result[4] += 38755933;
          result[5] += 2458398;
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
          result[0] += 5005700;
          result[1] += 496748;
          result[2] += 0;
          result[3] += 1795938;
          result[4] += 3935779;
          result[5] += 31715505;
        } else {
          result[0] += 2095105;
          result[1] += 0;
          result[2] += 1047552;
          result[3] += 26072430;
          result[4] += 0;
          result[5] += 13734583;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          result[0] += 33955938;
          result[1] += 3450657;
          result[2] += 0;
          result[3] += 513927;
          result[4] += 4294967;
          result[5] += 734182;
        } else {
          result[0] += 4961183;
          result[1] += 566992;
          result[2] += 16868023;
          result[3] += 7512649;
          result[4] += 1700977;
          result[5] += 11339847;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 111848;
          result[1] += 42390432;
          result[2] += 0;
          result[3] += 0;
          result[4] += 335544;
          result[5] += 111848;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5259143;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 31554861;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1282079;
          result[1] += 3205199;
          result[2] += 4487279;
          result[3] += 28205755;
          result[4] += 641039;
          result[5] += 5128319;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33960206;
          result[3] += 6991807;
          result[4] += 0;
          result[5] += 1997659;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8259552;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 13215283;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31565422;
          result[3] += 7761989;
          result[4] += 0;
          result[5] += 3622261;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          result[0] += 11713547;
          result[1] += 15618062;
          result[2] += 7809031;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 0;
        } else {
          result[0] += 441263;
          result[1] += 98058;
          result[2] += 40449178;
          result[3] += 1912142;
          result[4] += 0;
          result[5] += 49029;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 418340;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38069028;
          result[5] += 4462303;
        } else {
          result[0] += 0;
          result[1] += 25769803;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4294967;
          result[5] += 12884901;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 450324;
          result[1] += 0;
          result[2] += 281452;
          result[3] += 1857587;
          result[4] += 1632425;
          result[5] += 38727883;
        } else {
          result[0] += 2069863;
          result[1] += 3104795;
          result[2] += 1241918;
          result[3] += 17179869;
          result[4] += 1655891;
          result[5] += 17697335;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36814005;
          result[5] += 0;
        } else {
          result[0] += 101296;
          result[1] += 42848376;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32443767;
          result[1] += 1245380;
          result[2] += 702522;
          result[3] += 1692440;
          result[4] += 5715978;
          result[5] += 1149582;
        } else {
          result[0] += 4314579;
          result[1] += 490293;
          result[2] += 8040806;
          result[3] += 11963150;
          result[4] += 3530110;
          result[5] += 14610733;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2147483;
          result[5] += 40802189;
        } else {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 12271335;
          result[3] += 0;
          result[4] += 3067833;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 511305;
          result[1] += 0;
          result[2] += 7669584;
          result[3] += 25565281;
          result[4] += 0;
          result[5] += 9203501;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30480413;
          result[3] += 12469259;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 27331610;
          result[4] += 7809031;
          result[5] += 3904515;
        } else {
          result[0] += 1902833;
          result[1] += 271833;
          result[2] += 32891838;
          result[3] += 6252167;
          result[4] += 0;
          result[5] += 1631000;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 235987;
          result[1] += 0;
          result[2] += 37521967;
          result[3] += 4483757;
          result[4] += 0;
          result[5] += 707961;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42314948;
          result[3] += 564199;
          result[4] += 0;
          result[5] += 70524;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 607062;
          result[1] += 0;
          result[2] += 0;
          result[3] += 758828;
          result[4] += 38244938;
          result[5] += 3338843;
        } else {
          result[0] += 0;
          result[1] += 38177487;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1023965;
          result[4] += 1137739;
          result[5] += 40787967;
        } else {
          result[0] += 3389142;
          result[1] += 801069;
          result[2] += 862690;
          result[3] += 15651674;
          result[4] += 5545868;
          result[5] += 16699227;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 41875931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1073741;
          result[5] += 0;
        } else {
          result[0] += 810371;
          result[1] += 13371124;
          result[2] += 0;
          result[3] += 405185;
          result[4] += 28362991;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35706465;
          result[1] += 1601513;
          result[2] += 291184;
          result[3] += 837154;
          result[4] += 3348618;
          result[5] += 1164736;
        } else {
          result[0] += 11577737;
          result[1] += 124491;
          result[2] += 10457311;
          result[3] += 9710360;
          result[4] += 2240852;
          result[5] += 8838918;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7310582;
          result[3] += 10052051;
          result[4] += 0;
          result[5] += 25587039;
        } else {
          result[0] += 2684354;
          result[1] += 8053063;
          result[2] += 21474836;
          result[3] += 8053063;
          result[4] += 2684354;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18119393;
          result[3] += 22817013;
          result[4] += 0;
          result[5] += 2013265;
        } else {
          result[0] += 164558;
          result[1] += 0;
          result[2] += 34886324;
          result[3] += 6253209;
          result[4] += 0;
          result[5] += 1645581;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 36814005;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40086361;
          result[3] += 2863311;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38227457;
          result[3] += 4497347;
          result[4] += 0;
          result[5] += 224867;
        } else {
          result[0] += 95443;
          result[1] += 0;
          result[2] += 42472454;
          result[3] += 381774;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1051828;
          result[1] += 1051828;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40144796;
          result[5] += 701219;
        } else {
          result[0] += 31609028;
          result[1] += 0;
          result[2] += 482580;
          result[3] += 0;
          result[4] += 9892902;
          result[5] += 965161;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 42356;
          result[1] += 169426;
          result[2] += 0;
          result[3] += 2287260;
          result[4] += 3176750;
          result[5] += 37273877;
        } else {
          result[0] += 1843333;
          result[1] += 2949333;
          result[2] += 1474666;
          result[3] += 18249002;
          result[4] += 4608334;
          result[5] += 13825002;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 42738618;
          result[2] += 0;
          result[3] += 0;
          result[4] += 211054;
          result[5] += 0;
        } else {
          result[0] += 14316557;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34558477;
          result[1] += 2649851;
          result[2] += 220820;
          result[3] += 1177711;
          result[4] += 3496331;
          result[5] += 846480;
        } else {
          result[0] += 4516533;
          result[1] += 0;
          result[2] += 8862630;
          result[3] += 16873085;
          result[4] += 2726963;
          result[5] += 9970459;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1507006;
          result[3] += 13563054;
          result[4] += 5274521;
          result[5] += 22605091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 1561806;
          result[1] += 0;
          result[2] += 14056256;
          result[3] += 26550706;
          result[4] += 0;
          result[5] += 780903;
        } else {
          result[0] += 2221534;
          result[1] += 0;
          result[2] += 28139440;
          result[3] += 6664604;
          result[4] += 0;
          result[5] += 5924092;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1700977;
          result[1] += 0;
          result[2] += 35720520;
          result[3] += 4961183;
          result[4] += 0;
          result[5] += 566992;
        } else {
          result[0] += 595489;
          result[1] += 0;
          result[2] += 40791023;
          result[3] += 1339851;
          result[4] += 0;
          result[5] += 223308;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 240614;
          result[1] += 1203072;
          result[2] += 120307;
          result[3] += 0;
          result[4] += 40663836;
          result[5] += 721843;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 42646498;
          result[2] += 0;
          result[3] += 101058;
          result[4] += 202116;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 344977;
          result[1] += 0;
          result[2] += 43122;
          result[3] += 2587329;
          result[4] += 2069863;
          result[5] += 37904380;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 33188383;
          result[4] += 0;
          result[5] += 9761289;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 34903692;
          result[1] += 1473207;
          result[2] += 491069;
          result[3] += 1510982;
          result[4] += 3664132;
          result[5] += 906589;
        } else {
          result[0] += 7852964;
          result[1] += 845703;
          result[2] += 7490519;
          result[3] += 14497779;
          result[4] += 2235074;
          result[5] += 10027631;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1101273;
          result[2] += 3303820;
          result[3] += 2202547;
          result[4] += 2202547;
          result[5] += 34139483;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12407683;
          result[3] += 27201459;
          result[4] += 0;
          result[5] += 3340530;
        } else {
          result[0] += 0;
          result[1] += 631612;
          result[2] += 28422577;
          result[3] += 10105805;
          result[4] += 0;
          result[5] += 3789677;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 35140641;
          result[3] += 4880644;
          result[4] += 0;
          result[5] += 976128;
        } else {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 12725829;
          result[3] += 1590728;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29655726;
          result[3] += 10226112;
          result[4] += 0;
          result[5] += 3067833;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40706441;
          result[3] += 2133805;
          result[4] += 0;
          result[5] += 109425;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 825955;
          result[2] += 0;
          result[3] += 1156337;
          result[4] += 38489514;
          result[5] += 2477865;
        } else {
          result[0] += 0;
          result[1] += 33907636;
          result[2] += 0;
          result[3] += 7911781;
          result[4] += 1130254;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 321319;
          result[1] += 0;
          result[2] += 53553;
          result[3] += 963957;
          result[4] += 3320298;
          result[5] += 38290543;
        } else {
          result[0] += 5999783;
          result[1] += 73168;
          result[2] += 365840;
          result[3] += 15145796;
          result[4] += 4170581;
          result[5] += 17194502;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42433450;
          result[2] += 0;
          result[3] += 0;
          result[4] += 516222;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 10483778;
          result[2] += 0;
          result[3] += 2705491;
          result[4] += 22996675;
          result[5] += 6763728;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35498073;
          result[1] += 1273137;
          result[2] += 374452;
          result[3] += 1497808;
          result[4] += 2696056;
          result[5] += 1610144;
        } else {
          result[0] += 7530901;
          result[1] += 1412044;
          result[2] += 9295956;
          result[3] += 11061011;
          result[4] += 4236132;
          result[5] += 9413626;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7721289;
          result[3] += 29437416;
          result[4] += 0;
          result[5] += 5790967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 1060485;
          result[1] += 0;
          result[2] += 30223843;
          result[3] += 6893157;
          result[4] += 1060485;
          result[5] += 3711700;
        } else {
          result[0] += 36814005;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 499414;
          result[1] += 0;
          result[2] += 36582134;
          result[3] += 4869294;
          result[4] += 0;
          result[5] += 998829;
        } else {
          result[0] += 78951;
          result[1] += 0;
          result[2] += 42002253;
          result[3] += 789516;
          result[4] += 0;
          result[5] += 78951;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 406463;
          result[1] += 270975;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40646378;
          result[5] += 1625855;
        } else {
          result[0] += 25876511;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8536580;
          result[5] += 8536580;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2038289;
          result[4] += 2766250;
          result[5] += 38145133;
        } else {
          result[0] += 0;
          result[1] += 509284;
          result[2] += 339523;
          result[3] += 12901878;
          result[4] += 8148554;
          result[5] += 21050432;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 42752203;
          result[2] += 0;
          result[3] += 0;
          result[4] += 197469;
          result[5] += 0;
        } else {
          result[0] += 1396737;
          result[1] += 19205138;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22347797;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34879635;
          result[1] += 659570;
          result[2] += 1086351;
          result[3] += 2677079;
          result[4] += 1629526;
          result[5] += 2017509;
        } else {
          result[0] += 4259471;
          result[1] += 212973;
          result[2] += 9015881;
          result[3] += 17250860;
          result[4] += 2129735;
          result[5] += 10080749;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5052902;
          result[3] += 5052902;
          result[4] += 0;
          result[5] += 32843867;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7405116;
          result[3] += 16291255;
          result[4] += 0;
          result[5] += 19253301;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31138512;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 3221225;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 17895697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37347541;
          result[3] += 4481705;
          result[4] += 0;
          result[5] += 1120426;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x43028000))) ) ) {
          result[0] += 239273;
          result[1] += 0;
          result[2] += 41214936;
          result[3] += 1375825;
          result[4] += 0;
          result[5] += 119636;
        } else {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 706990;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38530982;
          result[5] += 3711700;
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
          result[0] += 188651;
          result[1] += 0;
          result[2] += 62883;
          result[3] += 943257;
          result[4] += 1446328;
          result[5] += 40308551;
        } else {
          result[0] += 2521154;
          result[1] += 2431113;
          result[2] += 360164;
          result[3] += 16207423;
          result[4] += 3961814;
          result[5] += 17468001;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 511305;
          result[1] += 11248723;
          result[2] += 0;
          result[3] += 2045222;
          result[4] += 27354851;
          result[5] += 1789569;
        } else {
          result[0] += 0;
          result[1] += 42850021;
          result[2] += 0;
          result[3] += 0;
          result[4] += 99651;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35556414;
          result[1] += 928455;
          result[2] += 68774;
          result[3] += 550195;
          result[4] += 3335563;
          result[5] += 2510269;
        } else {
          result[0] += 6771762;
          result[1] += 278291;
          result[2] += 10204025;
          result[3] += 13543525;
          result[4] += 1762513;
          result[5] += 10389553;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 13421772;
          result[2] += 13421772;
          result[3] += 2684354;
          result[4] += 13421772;
          result[5] += 0;
        } else {
          result[0] += 1717986;
          result[1] += 3435973;
          result[2] += 1717986;
          result[3] += 13743895;
          result[4] += 1717986;
          result[5] += 20615843;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 568869;
          result[1] += 0;
          result[2] += 29012361;
          result[3] += 11377396;
          result[4] += 0;
          result[5] += 1991044;
        } else {
          result[0] += 22088403;
          result[1] += 0;
          result[2] += 20861269;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 229677;
          result[1] += 0;
          result[2] += 32154835;
          result[3] += 8727741;
          result[4] += 0;
          result[5] += 1837419;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42369271;
          result[3] += 580400;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 125217;
          result[1] += 876523;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41071407;
          result[5] += 876523;
        } else {
          result[0] += 0;
          result[1] += 35140641;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42746119;
          result[2] += 0;
          result[3] += 0;
          result[4] += 203552;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1666869;
          result[4] += 944559;
          result[5] += 40338243;
        } else {
          result[0] += 4601750;
          result[1] += 426088;
          result[2] += 426088;
          result[3] += 15339168;
          result[4] += 4516533;
          result[5] += 17640044;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34366861;
          result[1] += 1104013;
          result[2] += 249293;
          result[3] += 1460146;
          result[4] += 3668172;
          result[5] += 2101186;
        } else {
          result[0] += 7306381;
          result[1] += 888613;
          result[2] += 12341860;
          result[3] += 9972222;
          result[4] += 2468372;
          result[5] += 9972222;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4156419;
          result[5] += 38793252;
        } else {
          result[0] += 5368709;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5368709;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 727960;
          result[2] += 13103290;
          result[3] += 25478619;
          result[4] += 0;
          result[5] += 3639802;
        } else {
          result[0] += 6135667;
          result[1] += 0;
          result[2] += 36814005;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 24159191;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 195225;
          result[1] += 0;
          result[2] += 36702447;
          result[3] += 6051999;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 64878;
          result[1] += 0;
          result[2] += 41522342;
          result[3] += 1297573;
          result[4] += 0;
          result[5] += 64878;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 344977;
          result[1] += 172488;
          result[2] += 0;
          result[3] += 689954;
          result[4] += 39154922;
          result[5] += 2587329;
        } else {
          result[0] += 0;
          result[1] += 31236125;
          result[2] += 0;
          result[3] += 11713547;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2395270;
          result[1] += 165191;
          result[2] += 0;
          result[3] += 2436567;
          result[4] += 2188781;
          result[5] += 35763862;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 27350027;
          result[4] += 0;
          result[5] += 15599645;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 176747;
          result[1] += 42772925;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32679866;
          result[1] += 1764571;
          result[2] += 70582;
          result[3] += 1058742;
          result[4] += 6811246;
          result[5] += 564662;
        } else {
          result[0] += 6042349;
          result[1] += 898187;
          result[2] += 11513125;
          result[3] += 12656272;
          result[4] += 2694561;
          result[5] += 9145177;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3221225;
          result[4] += 2147483;
          result[5] += 37580963;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1952257;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 727960;
          result[1] += 6551645;
          result[2] += 8735526;
          result[3] += 18926974;
          result[4] += 0;
          result[5] += 8007566;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35984861;
          result[3] += 3482405;
          result[4] += 0;
          result[5] += 3482405;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 1278264;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 2300875;
        } else {
          result[0] += 1034931;
          result[1] += 0;
          result[2] += 41397275;
          result[3] += 517465;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 131144;
          result[1] += 0;
          result[2] += 41113656;
          result[3] += 1442584;
          result[4] += 0;
          result[5] += 262288;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 839407;
          result[1] += 279802;
          result[2] += 139901;
          result[3] += 699506;
          result[4] += 38752636;
          result[5] += 2238419;
        } else {
          result[0] += 34459621;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1498244;
          result[5] += 6991807;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 46083;
          result[1] += 138250;
          result[2] += 0;
          result[3] += 1889416;
          result[4] += 2857167;
          result[5] += 38018755;
        } else {
          result[0] += 263494;
          result[1] += 131747;
          result[2] += 658737;
          result[3] += 21211341;
          result[4] += 0;
          result[5] += 20684351;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 2879307;
          result[1] += 10317519;
          result[2] += 719826;
          result[3] += 479884;
          result[4] += 27593365;
          result[5] += 959769;
        } else {
          result[0] += 199765;
          result[1] += 42550141;
          result[2] += 0;
          result[3] += 99882;
          result[4] += 99882;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 38422438;
          result[1] += 1732159;
          result[2] += 78734;
          result[3] += 354305;
          result[4] += 1928995;
          result[5] += 433039;
        } else {
          result[0] += 12526987;
          result[1] += 1118481;
          result[2] += 4697620;
          result[3] += 9842633;
          result[4] += 3131746;
          result[5] += 11632203;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2684354;
          result[3] += 30422685;
          result[4] += 0;
          result[5] += 9842633;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12725829;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 20679472;
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
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 572662;
          result[1] += 0;
          result[2] += 22715604;
          result[3] += 13934782;
          result[4] += 0;
          result[5] += 5726623;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42154308;
          result[3] += 0;
          result[4] += 0;
          result[5] += 795364;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 13421772;
          result[3] += 18790481;
          result[4] += 0;
          result[5] += 8053063;
        } else {
          result[0] += 756156;
          result[1] += 50410;
          result[2] += 39874637;
          result[3] += 1915595;
          result[4] += 201641;
          result[5] += 151231;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 378411;
          result[1] += 946028;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41057616;
          result[5] += 567616;
        } else {
          result[0] += 16836271;
          result[1] += 1717986;
          result[2] += 0;
          result[3] += 343597;
          result[4] += 12369505;
          result[5] += 11682311;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48149;
          result[3] += 1300046;
          result[4] += 2311193;
          result[5] += 39290283;
        } else {
          result[0] += 592409;
          result[1] += 444306;
          result[2] += 296204;
          result[3] += 21178631;
          result[4] += 444306;
          result[5] += 19993813;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 4294967;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38654705;
          result[5] += 0;
        } else {
          result[0] += 89107;
          result[1] += 40989314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1871251;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35123288;
          result[1] += 1183502;
          result[2] += 38177;
          result[3] += 1107147;
          result[4] += 4848540;
          result[5] += 649017;
        } else {
          result[0] += 11204262;
          result[1] += 1333840;
          result[2] += 3601370;
          result[3] += 11070878;
          result[4] += 4935210;
          result[5] += 10804110;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 10226112;
        } else {
          result[0] += 1311440;
          result[1] += 0;
          result[2] += 20983046;
          result[3] += 15737284;
          result[4] += 0;
          result[5] += 4917901;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35974939;
          result[3] += 4772185;
          result[4] += 367091;
          result[5] += 1835456;
        } else {
          result[0] += 20043180;
          result[1] += 0;
          result[2] += 15748213;
          result[3] += 4294967;
          result[4] += 1431655;
          result[5] += 1431655;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16919568;
          result[3] += 18221073;
          result[4] += 0;
          result[5] += 7809031;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40086361;
          result[3] += 2863311;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 602802;
          result[1] += 0;
          result[2] += 36620247;
          result[3] += 4068916;
          result[4] += 0;
          result[5] += 1657706;
        } else {
          result[0] += 149390;
          result[1] += 74695;
          result[2] += 41903941;
          result[3] += 821645;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 340870;
          result[1] += 340870;
          result[2] += 0;
          result[3] += 511305;
          result[4] += 39711403;
          result[5] += 2045222;
        } else {
          result[0] += 0;
          result[1] += 38506603;
          result[2] += 0;
          result[3] += 2962046;
          result[4] += 1481023;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 54922;
          result[1] += 0;
          result[2] += 0;
          result[3] += 823842;
          result[4] += 1592762;
          result[5] += 40478144;
        } else {
          result[0] += 4054689;
          result[1] += 225260;
          result[2] += 525607;
          result[3] += 13740891;
          result[4] += 4355036;
          result[5] += 20048186;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39370533;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32817056;
          result[1] += 1823169;
          result[2] += 35060;
          result[3] += 1051828;
          result[4] += 5434448;
          result[5] += 1788108;
        } else {
          result[0] += 7874106;
          result[1] += 1252698;
          result[2] += 9216283;
          result[3] += 11363767;
          result[4] += 3221225;
          result[5] += 10021590;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11453246;
          result[4] += 2863311;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6781527;
          result[3] += 28256363;
          result[4] += 0;
          result[5] += 7911781;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 25053975;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40563580;
          result[3] += 2386092;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32683653;
          result[3] += 8799445;
          result[4] += 0;
          result[5] += 1466574;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 355445;
          result[1] += 0;
          result[2] += 41587131;
          result[3] += 1007095;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 10307921;
          result[1] += 0;
          result[2] += 32641751;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 588351;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40988500;
          result[5] += 1372820;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 58197;
          result[3] += 872960;
          result[4] += 1280342;
          result[5] += 40738172;
        } else {
          result[0] += 1877581;
          result[1] += 1642883;
          result[2] += 2346976;
          result[3] += 14433906;
          result[4] += 3403116;
          result[5] += 19245208;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
          result[0] += 4913733;
          result[1] += 8371546;
          result[2] += 181990;
          result[3] += 181990;
          result[4] += 27480511;
          result[5] += 1819901;
        } else {
          result[0] += 27186750;
          result[1] += 759954;
          result[2] += 3088846;
          result[3] += 3922344;
          result[4] += 2475980;
          result[5] += 5515797;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c60000))) ) ) {
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 0;
          result[4] += 24542670;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 810371;
          result[1] += 810371;
          result[2] += 810371;
          result[3] += 3241484;
          result[4] += 810371;
          result[5] += 36466703;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5726623;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 11453246;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 1363481;
          result[1] += 0;
          result[2] += 27951374;
          result[3] += 11589594;
          result[4] += 0;
          result[5] += 2045222;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 30678337;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 48149;
          result[1] += 0;
          result[2] += 40397730;
          result[3] += 2070443;
          result[4] += 0;
          result[5] += 433348;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 197924;
          result[1] += 197924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41168350;
          result[5] += 1385473;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19088743;
          result[5] += 23860929;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1047552;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41902119;
          result[5] += 0;
        } else {
          result[0] += 34745802;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4825805;
          result[5] += 3378064;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17043521;
          result[5] += 25906151;
        } else {
          result[0] += 0;
          result[1] += 207486;
          result[2] += 0;
          result[3] += 3008551;
          result[4] += 1400532;
          result[5] += 38333101;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 523776;
          result[2] += 785664;
          result[3] += 5237764;
          result[4] += 6285317;
          result[5] += 30117148;
        } else {
          result[0] += 0;
          result[1] += 763549;
          result[2] += 954437;
          result[3] += 30923764;
          result[4] += 572662;
          result[5] += 9735259;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 98058;
          result[1] += 42557438;
          result[2] += 0;
          result[3] += 0;
          result[4] += 294175;
          result[5] += 0;
        } else {
          result[0] += 965161;
          result[1] += 13512256;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28472255;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 37136656;
          result[1] += 1777227;
          result[2] += 0;
          result[3] += 592409;
          result[4] += 3295276;
          result[5] += 148102;
        } else {
          result[0] += 10888649;
          result[1] += 2016416;
          result[2] += 3831191;
          result[3] += 11896857;
          result[4] += 3427908;
          result[5] += 10888649;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6927366;
          result[3] += 24384330;
          result[4] += 831283;
          result[5] += 10806691;
        } else {
          result[0] += 4494733;
          result[1] += 0;
          result[2] += 24970740;
          result[3] += 9988296;
          result[4] += 0;
          result[5] += 3495903;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 5368709;
          result[1] += 298261;
          result[2] += 27440068;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 4473924;
        } else {
          result[0] += 249707;
          result[1] += 0;
          result[2] += 40003125;
          result[3] += 2397191;
          result[4] += 0;
          result[5] += 299648;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 534643;
          result[1] += 2316787;
          result[2] += 0;
          result[3] += 178214;
          result[4] += 34930024;
          result[5] += 4990003;
        } else {
          result[0] += 18673770;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3734754;
          result[4] += 12324688;
          result[5] += 8216459;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1632589;
          result[4] += 627919;
          result[5] += 40689163;
        } else {
          result[0] += 486222;
          result[1] += 81037;
          result[2] += 243111;
          result[3] += 14505644;
          result[4] += 3646670;
          result[5] += 23986987;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 9911462;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33038209;
          result[5] += 0;
        } else {
          result[0] += 294175;
          result[1] += 42459379;
          result[2] += 0;
          result[3] += 0;
          result[4] += 196117;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 2236962;
          result[1] += 11632203;
          result[2] += 894784;
          result[3] += 1342177;
          result[4] += 25501368;
          result[5] += 1342177;
        } else {
          result[0] += 31518452;
          result[1] += 231267;
          result[2] += 2510903;
          result[3] += 3601164;
          result[4] += 2543942;
          result[5] += 2543942;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 1620742;
          result[1] += 810371;
          result[2] += 810371;
          result[3] += 2431113;
          result[4] += 5672598;
          result[5] += 31604476;
        } else {
          result[0] += 885560;
          result[1] += 3985021;
          result[2] += 3985021;
          result[3] += 25681247;
          result[4] += 885560;
          result[5] += 7527262;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 660764;
          result[1] += 0;
          result[2] += 21805218;
          result[3] += 19162161;
          result[4] += 0;
          result[5] += 1321528;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34139483;
          result[3] += 3854457;
          result[4] += 0;
          result[5] += 4955731;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1060485;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 13786314;
          result[4] += 0;
          result[5] += 4241943;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 9817068;
          result[1] += 613566;
          result[2] += 27610504;
          result[3] += 3681400;
          result[4] += 0;
          result[5] += 1227133;
        } else {
          result[0] += 808464;
          result[1] += 0;
          result[2] += 40069518;
          result[3] += 1920103;
          result[4] += 0;
          result[5] += 151587;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 371858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40904450;
          result[5] += 1673363;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1502612;
          result[4] += 2316527;
          result[5] += 39130532;
        } else {
          result[0] += 3867506;
          result[1] += 1357019;
          result[2] += 1560572;
          result[3] += 11398965;
          result[4] += 4817419;
          result[5] += 19948189;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 1204196;
          result[1] += 6020982;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33717500;
          result[5] += 2006994;
        } else {
          result[0] += 293505;
          result[1] += 40992968;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1663199;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34994765;
          result[1] += 1433931;
          result[2] += 341412;
          result[3] += 1365649;
          result[4] += 2663016;
          result[5] += 2150897;
        } else {
          result[0] += 5457693;
          result[1] += 830518;
          result[2] += 12457778;
          result[3] += 13525587;
          result[4] += 3796656;
          result[5] += 6881439;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3734754;
          result[3] += 6535819;
          result[4] += 4668442;
          result[5] += 28010656;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5052902;
          result[3] += 27790964;
          result[4] += 0;
          result[5] += 10105805;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 704092;
          result[2] += 14081859;
          result[3] += 25347347;
          result[4] += 0;
          result[5] += 2816371;
        } else {
          result[0] += 0;
          result[1] += 1311440;
          result[2] += 30818849;
          result[3] += 7212922;
          result[4] += 0;
          result[5] += 3606461;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f40000))) ) ) {
          result[0] += 0;
          result[1] += 4772185;
          result[2] += 19088743;
          result[3] += 0;
          result[4] += 0;
          result[5] += 19088743;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 11453246;
          result[1] += 0;
          result[2] += 22906492;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 699681;
          result[1] += 0;
          result[2] += 40366233;
          result[3] += 1829935;
          result[4] += 0;
          result[5] += 53821;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1073741;
          result[1] += 1073741;
          result[2] += 153391;
          result[3] += 0;
          result[4] += 39728447;
          result[5] += 920350;
        } else {
          result[0] += 25367935;
          result[1] += 1255838;
          result[2] += 753503;
          result[3] += 1255838;
          result[4] += 5023353;
          result[5] += 9293204;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 704092;
          result[2] += 0;
          result[3] += 2816371;
          result[4] += 36612835;
          result[5] += 2816371;
        } else {
          result[0] += 537905;
          result[1] += 165509;
          result[2] += 82754;
          result[3] += 5296298;
          result[4] += 2937790;
          result[5] += 33929414;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42520000))) ) ) {
          result[0] += 98734;
          result[1] += 42850938;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 987348;
          result[1] += 22709022;
          result[2] += 0;
          result[3] += 987348;
          result[4] += 18265952;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36595265;
          result[1] += 880430;
          result[2] += 344516;
          result[3] += 1110107;
          result[4] += 2756128;
          result[5] += 1263225;
        } else {
          result[0] += 4234474;
          result[1] += 1008208;
          result[2] += 4032833;
          result[3] += 17038720;
          result[4] += 3327087;
          result[5] += 13308349;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3067833;
          result[3] += 29451204;
          result[4] += 0;
          result[5] += 10430634;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16268815;
          result[3] += 14967310;
          result[4] += 2603010;
          result[5] += 9110536;
        } else {
          result[0] += 1651910;
          result[1] += 0;
          result[2] += 37993941;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f70000))) ) ) {
          result[0] += 1163661;
          result[1] += 0;
          result[2] += 34698257;
          result[3] += 6453029;
          result[4] += 0;
          result[5] += 634724;
        } else {
          result[0] += 20452225;
          result[1] += 0;
          result[2] += 22497447;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38100516;
          result[3] += 4618244;
          result[4] += 0;
          result[5] += 230912;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42543529;
          result[3] += 406143;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          result[0] += 593774;
          result[1] += 197924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41366274;
          result[5] += 791699;
        } else {
          result[0] += 0;
          result[1] += 885560;
          result[2] += 885560;
          result[3] += 3985021;
          result[4] += 29223488;
          result[5] += 7970042;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 53956;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1402878;
          result[4] += 1780576;
          result[5] += 39712260;
        } else {
          result[0] += 4623287;
          result[1] += 335020;
          result[2] += 402025;
          result[3] += 14271888;
          result[4] += 4154258;
          result[5] += 19163192;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 5169868;
          result[1] += 18094538;
          result[2] += 0;
          result[3] += 1193046;
          result[4] += 17895697;
          result[5] += 596523;
        } else {
          result[0] += 31953804;
          result[1] += 814508;
          result[2] += 2944762;
          result[3] += 2788126;
          result[4] += 2192908;
          result[5] += 2255562;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
          result[0] += 104500;
          result[1] += 42845172;
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 876523;
          result[1] += 0;
          result[2] += 4820881;
          result[3] += 30240075;
          result[4] += 0;
          result[5] += 7012191;
        } else {
          result[0] += 1789569;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 1789569;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33405301;
          result[3] += 9544371;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2321603;
          result[1] += 0;
          result[2] += 29310249;
          result[3] += 9576616;
          result[4] += 0;
          result[5] += 1741202;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38911669;
          result[3] += 4038003;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 65974;
          result[1] += 0;
          result[2] += 41498224;
          result[3] += 1187548;
          result[4] += 0;
          result[5] += 197924;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 35791394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 0;
        } else {
          result[0] += 316971;
          result[1] += 158485;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41364814;
          result[5] += 1109401;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 433835;
          result[2] += 0;
          result[3] += 1797316;
          result[4] += 743717;
          result[5] += 39974803;
        } else {
          result[0] += 3544790;
          result[1] += 164873;
          result[2] += 659495;
          result[3] += 13519666;
          result[4] += 4616471;
          result[5] += 20444374;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 38654705;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4294967;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42829701;
          result[2] += 0;
          result[3] += 0;
          result[4] += 119971;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 30696860;
          result[1] += 3209069;
          result[2] += 259318;
          result[3] += 907615;
          result[4] += 6320895;
          result[5] += 1555912;
        } else {
          result[0] += 7605671;
          result[1] += 1879048;
          result[2] += 8679413;
          result[3] += 12169074;
          result[4] += 1521134;
          result[5] += 11095332;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4294967;
          result[4] += 4294967;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4224557;
          result[3] += 30275998;
          result[4] += 0;
          result[5] += 8449115;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 1533916;
          result[2] += 4601750;
          result[3] += 3067833;
          result[4] += 0;
          result[5] += 33746171;
        } else {
          result[0] += 298261;
          result[1] += 0;
          result[2] += 28036592;
          result[3] += 11035679;
          result[4] += 596523;
          result[5] += 2982616;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42930000))) ) ) {
          result[0] += 30317416;
          result[1] += 12632256;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6135667;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19327352;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 6442450;
        } else {
          result[0] += 354537;
          result[1] += 0;
          result[2] += 39961429;
          result[3] += 2380465;
          result[4] += 0;
          result[5] += 253240;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 187553;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42199460;
          result[5] += 562659;
        } else {
          result[0] += 3123612;
          result[1] += 2342709;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28112513;
          result[5] += 9370837;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1002716;
          result[4] += 1114129;
          result[5] += 40832827;
        } else {
          result[0] += 4061639;
          result[1] += 691342;
          result[2] += 345671;
          result[3] += 14950288;
          result[4] += 3197460;
          result[5] += 19703270;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 10638909;
          result[2] += 0;
          result[3] += 788067;
          result[4] += 30340594;
          result[5] += 1182101;
        } else {
          result[0] += 0;
          result[1] += 41405415;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1544257;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36956695;
          result[1] += 845163;
          result[2] += 0;
          result[3] += 1229328;
          result[4] += 3380654;
          result[5] += 537831;
        } else {
          result[0] += 8000429;
          result[1] += 1515870;
          result[2] += 7242493;
          result[3] += 13895482;
          result[4] += 2526451;
          result[5] += 9768945;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3253763;
          result[3] += 32537631;
          result[4] += 0;
          result[5] += 7158278;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 15339168;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32665948;
          result[3] += 6654174;
          result[4] += 0;
          result[5] += 3629549;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 894784;
          result[1] += 0;
          result[2] += 34717652;
          result[3] += 6442450;
          result[4] += 0;
          result[5] += 894784;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 3904515;
          result[1] += 0;
          result[2] += 27331610;
          result[3] += 0;
          result[4] += 0;
          result[5] += 11713547;
        } else {
          result[0] += 194635;
          result[1] += 0;
          result[2] += 42041371;
          result[3] += 648786;
          result[4] += 0;
          result[5] += 64878;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 185127;
          result[1] += 1481023;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41098393;
          result[5] += 185127;
        } else {
          result[0] += 17740082;
          result[1] += 1400532;
          result[2] += 0;
          result[3] += 2567643;
          result[4] += 12838217;
          result[5] += 8403196;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 197696;
          result[1] += 98848;
          result[2] += 0;
          result[3] += 1729848;
          result[4] += 3014879;
          result[5] += 37908399;
        } else {
          result[0] += 432742;
          result[1] += 324556;
          result[2] += 0;
          result[3] += 22069857;
          result[4] += 324556;
          result[5] += 19797960;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 3067833;
          result[4] += 27610504;
          result[5] += 0;
        } else {
          result[0] += 199765;
          result[1] += 42150609;
          result[2] += 0;
          result[3] += 199765;
          result[4] += 399531;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33210019;
          result[1] += 2416605;
          result[2] += 0;
          result[3] += 732304;
          result[4] += 6187975;
          result[5] += 402767;
        } else {
          result[0] += 6006371;
          result[1] += 246837;
          result[2] += 12753255;
          result[3] += 13822883;
          result[4] += 1974697;
          result[5] += 8145627;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 2147483;
          result[1] += 0;
          result[2] += 12884901;
          result[3] += 15032385;
          result[4] += 0;
          result[5] += 12884901;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40689163;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2260509;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16291255;
          result[3] += 19253301;
          result[4] += 0;
          result[5] += 7405116;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36404960;
          result[3] += 4908534;
          result[4] += 0;
          result[5] += 1636178;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 55063;
          result[1] += 0;
          result[2] += 41242698;
          result[3] += 1651910;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 557787;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40346662;
          result[5] += 2045222;
        } else {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 1789569;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 224573;
          result[2] += 112286;
          result[3] += 1572014;
          result[4] += 1852730;
          result[5] += 39188067;
        } else {
          result[0] += 4205994;
          result[1] += 485307;
          result[2] += 242653;
          result[3] += 14073904;
          result[4] += 3073611;
          result[5] += 20868202;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31969553;
          result[1] += 2644601;
          result[2] += 0;
          result[3] += 1472942;
          result[4] += 6159578;
          result[5] += 702995;
        } else {
          result[0] += 6490172;
          result[1] += 1145324;
          result[2] += 7540053;
          result[3] += 10880583;
          result[4] += 4390411;
          result[5] += 12503127;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 319724;
          result[1] += 42629948;
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
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7745022;
          result[3] += 27459626;
          result[4] += 0;
          result[5] += 7745022;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40904450;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2045222;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16625679;
          result[3] += 23553046;
          result[4] += 0;
          result[5] += 2770946;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36488217;
          result[3] += 4941112;
          result[4] += 0;
          result[5] += 1520342;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25264513;
          result[3] += 0;
          result[4] += 0;
          result[5] += 17685159;
        } else {
          result[0] += 33038209;
          result[1] += 0;
          result[2] += 9911462;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37466735;
          result[3] += 5300172;
          result[4] += 0;
          result[5] += 182764;
        } else {
          result[0] += 266354;
          result[1] += 0;
          result[2] += 42017431;
          result[3] += 665886;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 593774;
          result[1] += 593774;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39980801;
          result[5] += 1781322;
        } else {
          result[0] += 0;
          result[1] += 12554519;
          result[2] += 0;
          result[3] += 9250698;
          result[4] += 13215283;
          result[5] += 7929170;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 748252;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1546387;
          result[4] += 2244756;
          result[5] += 38410276;
        } else {
          result[0] += 2050103;
          result[1] += 820041;
          result[2] += 1845093;
          result[3] += 17630891;
          result[4] += 2357619;
          result[5] += 18245923;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 9203501;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33746171;
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
          result[0] += 32571002;
          result[1] += 1067901;
          result[2] += 133487;
          result[3] += 1134645;
          result[4] += 6440782;
          result[5] += 1601852;
        } else {
          result[0] += 7158278;
          result[1] += 759211;
          result[2] += 11713547;
          result[3] += 11171253;
          result[4] += 2386092;
          result[5] += 9761289;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3904515;
          result[3] += 7809031;
          result[4] += 23427094;
          result[5] += 7809031;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5153960;
          result[3] += 0;
          result[4] += 0;
          result[5] += 37795712;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5453926;
          result[3] += 32723560;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 1047552;
          result[1] += 0;
          result[2] += 27760154;
          result[3] += 13618188;
          result[4] += 0;
          result[5] += 523776;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 2045222;
          result[1] += 30678337;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 4090445;
        } else {
          result[0] += 8259552;
          result[1] += 0;
          result[2] += 8259552;
          result[3] += 11563373;
          result[4] += 6607641;
          result[5] += 8259552;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 6607641;
          result[1] += 0;
          result[2] += 16519104;
          result[3] += 0;
          result[4] += 3303820;
          result[5] += 16519104;
        } else {
          result[0] += 255045;
          result[1] += 0;
          result[2] += 40807290;
          result[3] += 1734309;
          result[4] += 0;
          result[5] += 153027;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        } else {
          result[0] += 98283;
          result[1] += 42851389;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 171114;
          result[1] += 1368913;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40382959;
          result[5] += 1026685;
        } else {
          result[0] += 1592010;
          result[1] += 415307;
          result[2] += 830614;
          result[3] += 6610304;
          result[4] += 2318797;
          result[5] += 31182639;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32030799;
          result[1] += 1388527;
          result[2] += 63114;
          result[3] += 1640986;
          result[4] += 6122142;
          result[5] += 1704101;
        } else {
          result[0] += 7573920;
          result[1] += 1016013;
          result[2] += 9236488;
          result[3] += 11822705;
          result[4] += 2955676;
          result[5] += 10344867;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5856773;
          result[3] += 1952257;
          result[4] += 5856773;
          result[5] += 29283867;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2863311;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 5726623;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9336885;
          result[3] += 9336885;
          result[4] += 0;
          result[5] += 24275902;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30870077;
          result[3] += 8724152;
          result[4] += 0;
          result[5] += 3355443;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35124833;
          result[3] += 6433756;
          result[4] += 0;
          result[5] += 1391082;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 3579139;
          result[4] += 3579139;
          result[5] += 14316557;
        } else {
          result[0] += 130348;
          result[1] += 0;
          result[2] += 41385496;
          result[3] += 1303480;
          result[4] += 0;
          result[5] += 130348;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 308990;
          result[1] += 2935409;
          result[2] += 0;
          result[3] += 308990;
          result[4] += 37542340;
          result[5] += 1853942;
        } else {
          result[0] += 18695739;
          result[1] += 0;
          result[2] += 0;
          result[3] += 505290;
          result[4] += 7579354;
          result[5] += 16169288;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 49141;
          result[2] += 0;
          result[3] += 2358792;
          result[4] += 3538188;
          result[5] += 37003551;
        } else {
          result[0] += 325376;
          result[1] += 216917;
          result[2] += 2277634;
          result[3] += 19956413;
          result[4] += 2819928;
          result[5] += 17353403;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 1342177;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41607495;
          result[5] += 0;
        } else {
          result[0] += 95443;
          result[1] += 42472454;
          result[2] += 0;
          result[3] += 95443;
          result[4] += 286331;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 18895750;
          result[1] += 789516;
          result[2] += 4316021;
          result[3] += 6631934;
          result[4] += 5631881;
          result[5] += 6684569;
        } else {
          result[0] += 36577164;
          result[1] += 880753;
          result[2] += 2694068;
          result[3] += 518090;
          result[4] += 2279596;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1533916;
          result[3] += 0;
          result[4] += 3067833;
          result[5] += 38347922;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7433597;
          result[3] += 11563373;
          result[4] += 825955;
          result[5] += 23126746;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 18948385;
          result[1] += 0;
          result[2] += 18948385;
          result[3] += 3789677;
          result[4] += 0;
          result[5] += 1263225;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8842579;
          result[3] += 25264513;
          result[4] += 0;
          result[5] += 8842579;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32843867;
          result[3] += 7579354;
          result[4] += 0;
          result[5] += 2526451;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29314856;
          result[3] += 8180890;
          result[4] += 0;
          result[5] += 5453926;
        } else {
          result[0] += 266107;
          result[1] += 0;
          result[2] += 41033702;
          result[3] += 1490199;
          result[4] += 0;
          result[5] += 159664;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 732929;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41630399;
          result[5] += 586343;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 1651910;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 41297762;
        } else {
          result[0] += 0;
          result[1] += 4443069;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37025580;
          result[5] += 1481023;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 29527900;
          result[5] += 2684354;
        } else {
          result[0] += 50174;
          result[1] += 0;
          result[2] += 100349;
          result[3] += 2458567;
          result[4] += 401398;
          result[5] += 39939181;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 8283151;
          result[1] += 1227133;
          result[2] += 0;
          result[3] += 6135667;
          result[4] += 5828884;
          result[5] += 21474836;
        } else {
          result[0] += 414972;
          result[1] += 0;
          result[2] += 2697322;
          result[3] += 29878033;
          result[4] += 414972;
          result[5] += 9544371;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x424e0000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 34768782;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8180890;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42746601;
          result[2] += 0;
          result[3] += 0;
          result[4] += 203071;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 4294967;
          result[1] += 4955731;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32377445;
          result[5] += 1321528;
        } else {
          result[0] += 19942656;
          result[1] += 1653781;
          result[2] += 3356203;
          result[3] += 6517843;
          result[4] += 4280375;
          result[5] += 7198812;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 37227065;
          result[1] += 1084283;
          result[2] += 1264997;
          result[3] += 1626425;
          result[4] += 963807;
          result[5] += 783093;
        } else {
          result[0] += 643440;
          result[1] += 0;
          result[2] += 36676125;
          result[3] += 4504085;
          result[4] += 281505;
          result[5] += 844516;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1884938;
          result[1] += 1615661;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38371964;
          result[5] += 1077107;
        } else {
          result[0] += 23673048;
          result[1] += 676372;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6087355;
          result[5] += 12512896;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 125217;
          result[2] += 0;
          result[3] += 1126959;
          result[4] += 1064350;
          result[5] += 40633145;
        } else {
          result[0] += 933688;
          result[1] += 311229;
          result[2] += 622459;
          result[3] += 10685546;
          result[4] += 7780737;
          result[5] += 22616011;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 9336885;
          result[2] += 1867377;
          result[3] += 0;
          result[4] += 31745410;
          result[5] += 0;
        } else {
          result[0] += 100820;
          result[1] += 42243927;
          result[2] += 0;
          result[3] += 201641;
          result[4] += 403283;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34691507;
          result[1] += 1298226;
          result[2] += 36061;
          result[3] += 1406412;
          result[4] += 3606185;
          result[5] += 1911278;
        } else {
          result[0] += 5832671;
          result[1] += 984736;
          result[2] += 5756922;
          result[3] += 16210282;
          result[4] += 1893724;
          result[5] += 12271335;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 29734388;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13918875;
          result[3] += 25053975;
          result[4] += 397682;
          result[5] += 3579139;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 18790481;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37407779;
          result[3] += 5541893;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 4443069;
          result[1] += 0;
          result[2] += 16291255;
          result[3] += 19253301;
          result[4] += 0;
          result[5] += 2962046;
        } else {
          result[0] += 998829;
          result[1] += 0;
          result[2] += 36956695;
          result[3] += 1997659;
          result[4] += 0;
          result[5] += 2996488;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1115575;
          result[1] += 0;
          result[2] += 35977323;
          result[3] += 5298985;
          result[4] += 0;
          result[5] += 557787;
        } else {
          result[0] += 132560;
          result[1] += 0;
          result[2] += 41756626;
          result[3] += 994205;
          result[4] += 0;
          result[5] += 66280;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 198841;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41756626;
          result[5] += 994205;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 25379352;
          result[5] += 13665805;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 54922;
          result[1] += 0;
          result[2] += 54922;
          result[3] += 1153379;
          result[4] += 2087068;
          result[5] += 39599378;
        } else {
          result[0] += 4675972;
          result[1] += 606144;
          result[2] += 86592;
          result[3] += 14547469;
          result[4] += 5455301;
          result[5] += 17578192;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 92763;
          result[1] += 42764145;
          result[2] += 0;
          result[3] += 0;
          result[4] += 92763;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32823607;
          result[1] += 1894332;
          result[2] += 34442;
          result[3] += 1067714;
          result[4] += 6165189;
          result[5] += 964387;
        } else {
          result[0] += 9413626;
          result[1] += 504301;
          result[2] += 10254129;
          result[3] += 12775636;
          result[4] += 2017205;
          result[5] += 7984772;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1651910;
          result[3] += 9911462;
          result[4] += 4955731;
          result[5] += 26430567;
        } else {
          result[0] += 1777227;
          result[1] += 0;
          result[2] += 25177394;
          result[3] += 9478548;
          result[4] += 0;
          result[5] += 6516502;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19822925;
          result[3] += 14867194;
          result[4] += 1651910;
          result[5] += 6607641;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35893655;
          result[3] += 7056017;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37726064;
          result[3] += 4062806;
          result[4] += 0;
          result[5] += 1160801;
        } else {
          result[0] += 80430;
          result[1] += 0;
          result[2] += 42467092;
          result[3] += 321720;
          result[4] += 0;
          result[5] += 80430;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
          result[0] += 220254;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42288908;
          result[5] += 440509;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 25769803;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 30064771;
          result[2] += 0;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 4462303;
          result[1] += 1115575;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20080366;
          result[5] += 17291426;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1994423;
          result[4] += 881256;
          result[5] += 40073992;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2629571;
          result[1] += 1314785;
          result[2] += 438261;
          result[3] += 10080025;
          result[4] += 6135667;
          result[5] += 22351360;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2348810;
          result[3] += 27850178;
          result[4] += 0;
          result[5] += 12750684;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 107643;
          result[1] += 41550310;
          result[2] += 0;
          result[3] += 107643;
          result[4] += 1184076;
          result[5] += 0;
        } else {
          result[0] += 1293664;
          result[1] += 15006512;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26132029;
          result[5] += 517465;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 15388385;
          result[1] += 0;
          result[2] += 229677;
          result[3] += 12517418;
          result[4] += 5167741;
          result[5] += 9646450;
        } else {
          result[0] += 36141977;
          result[1] += 879646;
          result[2] += 803155;
          result[3] += 1223855;
          result[4] += 2868410;
          result[5] += 1032627;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 645859;
          result[2] += 1614649;
          result[3] += 18084072;
          result[4] += 3875158;
          result[5] += 18729932;
        } else {
          result[0] += 555383;
          result[1] += 0;
          result[2] += 22215348;
          result[3] += 14254848;
          result[4] += 0;
          result[5] += 5924092;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 913822;
          result[1] += 7310582;
          result[2] += 12793519;
          result[3] += 6396759;
          result[4] += 2741468;
          result[5] += 12793519;
        } else {
          result[0] += 809472;
          result[1] += 0;
          result[2] += 39568933;
          result[3] += 2285570;
          result[4] += 238080;
          result[5] += 47616;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1126548;
          result[1] += 844911;
          result[2] += 0;
          result[3] += 704092;
          result[4] += 37880203;
          result[5] += 2393916;
        } else {
          result[0] += 29177766;
          result[1] += 233422;
          result[2] += 0;
          result[3] += 466844;
          result[4] += 7702930;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 602802;
          result[2] += 0;
          result[3] += 2561910;
          result[4] += 2260509;
          result[5] += 37524451;
        } else {
          result[0] += 2302160;
          result[1] += 503597;
          result[2] += 1726620;
          result[3] += 17410085;
          result[4] += 2733815;
          result[5] += 18273395;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 1894838;
          result[1] += 7579354;
          result[2] += 3158064;
          result[3] += 0;
          result[4] += 30317416;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42742686;
          result[2] += 0;
          result[3] += 0;
          result[4] += 206986;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 36161649;
          result[1] += 1851279;
          result[2] += 164558;
          result[3] += 1069627;
          result[4] += 3414581;
          result[5] += 287976;
        } else {
          result[0] += 10158221;
          result[1] += 1603929;
          result[2] += 17643226;
          result[3] += 4098931;
          result[4] += 3207859;
          result[5] += 6237504;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 1447741;
          result[1] += 965161;
          result[2] += 2412902;
          result[3] += 15925159;
          result[4] += 4343225;
          result[5] += 17855482;
        } else {
          result[0] += 5506368;
          result[1] += 0;
          result[2] += 24228020;
          result[3] += 1101273;
          result[4] += 3303820;
          result[5] += 8810189;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 33038209;
          result[4] += 0;
          result[5] += 9911462;
        } else {
          result[0] += 753503;
          result[1] += 0;
          result[2] += 33154133;
          result[3] += 7346654;
          result[4] += 376751;
          result[5] += 1318630;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 235987;
          result[1] += 0;
          result[2] += 41120772;
          result[3] += 1474920;
          result[4] += 0;
          result[5] += 117993;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 470251;
          result[1] += 470251;
          result[2] += 0;
          result[3] += 156750;
          result[4] += 40128161;
          result[5] += 1724256;
        } else {
          result[0] += 0;
          result[1] += 33907636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9042036;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 718221;
          result[1] += 95762;
          result[2] += 0;
          result[3] += 1292799;
          result[4] += 2537717;
          result[5] += 38305170;
        } else {
          result[0] += 4785478;
          result[1] += 0;
          result[2] += 3469472;
          result[3] += 18184819;
          result[4] += 2512376;
          result[5] += 13997525;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42678411;
          result[2] += 0;
          result[3] += 0;
          result[4] += 271261;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33132604;
          result[1] += 1193046;
          result[2] += 954437;
          result[3] += 1942961;
          result[4] += 3101920;
          result[5] += 2624702;
        } else {
          result[0] += 5093761;
          result[1] += 347301;
          result[2] += 10650592;
          result[3] += 13660542;
          result[4] += 4399157;
          result[5] += 8798315;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d20000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2045222;
          result[3] += 29655726;
          result[4] += 0;
          result[5] += 11248723;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10307921;
          result[3] += 11166914;
          result[4] += 0;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40086361;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2863311;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 740511;
          result[1] += 0;
          result[2] += 25917906;
          result[3] += 5924092;
          result[4] += 740511;
          result[5] += 9626650;
        } else {
          result[0] += 277392;
          result[1] += 0;
          result[2] += 39852118;
          result[3] += 2589000;
          result[4] += 92464;
          result[5] += 138696;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42810000))) ) ) {
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
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 1155596;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41408877;
          result[5] += 385198;
        } else {
          result[0] += 1455921;
          result[1] += 5095723;
          result[2] += 0;
          result[3] += 3639802;
          result[4] += 13831250;
          result[5] += 18926974;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 768573;
          result[1] += 45210;
          result[2] += 0;
          result[3] += 2215298;
          result[4] += 3209922;
          result[5] += 36710667;
        } else {
          result[0] += 2632399;
          result[1] += 1246925;
          result[2] += 2493851;
          result[3] += 21197741;
          result[4] += 2216757;
          result[5] += 13161996;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 12578118;
          result[2] += 306783;
          result[3] += 613566;
          result[4] += 29144420;
          result[5] += 306783;
        } else {
          result[0] += 315806;
          result[1] += 41686447;
          result[2] += 0;
          result[3] += 210537;
          result[4] += 736881;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35760829;
          result[1] += 1283722;
          result[2] += 73355;
          result[3] += 1320399;
          result[4] += 2860866;
          result[5] += 1650499;
        } else {
          result[0] += 7319743;
          result[1] += 861146;
          result[2] += 8719106;
          result[3] += 12271335;
          result[4] += 2583438;
          result[5] += 11194902;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1481023;
          result[3] += 2962046;
          result[4] += 0;
          result[5] += 38506603;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4643207;
          result[3] += 20120567;
          result[4] += 386933;
          result[5] += 17798963;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 36077725;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3435973;
          result[5] += 3435973;
        } else {
          result[0] += 0;
          result[1] += 3579139;
          result[2] += 7158278;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 19733633;
          result[1] += 0;
          result[2] += 10447217;
          result[3] += 2321603;
          result[4] += 6964811;
          result[5] += 3482405;
        } else {
          result[0] += 139145;
          result[1] += 0;
          result[2] += 39471027;
          result[3] += 3061207;
          result[4] += 0;
          result[5] += 278291;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 1252698;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37938877;
          result[5] += 3758096;
        } else {
          result[0] += 0;
          result[1] += 25769803;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 262208;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1101273;
          result[4] += 2779404;
          result[5] += 38806786;
        } else {
          result[0] += 2147483;
          result[1] += 715827;
          result[2] += 1861152;
          result[3] += 16607206;
          result[4] += 4867629;
          result[5] += 16750372;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1574071;
          result[1] += 9444430;
          result[2] += 0;
          result[3] += 1124336;
          result[4] += 30132231;
          result[5] += 674602;
        } else {
          result[0] += 29372211;
          result[1] += 903339;
          result[2] += 2162539;
          result[3] += 4133461;
          result[4] += 2627895;
          result[5] += 3750226;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
          result[0] += 197924;
          result[1] += 42751748;
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 2770946;
          result[2] += 0;
          result[3] += 9698313;
          result[4] += 8312839;
          result[5] += 22167573;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 30601641;
          result[4] += 0;
          result[5] += 12348030;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21069650;
          result[3] += 12155567;
          result[4] += 0;
          result[5] += 9724454;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 1022611;
          result[1] += 0;
          result[2] += 9714806;
          result[3] += 16873085;
          result[4] += 3067833;
          result[5] += 12271335;
        } else {
          result[0] += 5259143;
          result[1] += 1753047;
          result[2] += 31554861;
          result[3] += 0;
          result[4] += 876523;
          result[5] += 3506095;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4294967;
          result[4] += 34359738;
          result[5] += 4294967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39413188;
          result[3] += 2931559;
          result[4] += 0;
          result[5] += 604924;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 466844;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41704754;
          result[5] += 778073;
        } else {
          result[0] += 0;
          result[1] += 36814005;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6135667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 56364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1409110;
          result[4] += 1127288;
          result[5] += 40356910;
        } else {
          result[0] += 4382619;
          result[1] += 486957;
          result[2] += 0;
          result[3] += 14998298;
          result[4] += 3019138;
          result[5] += 20062659;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 5602131;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37347541;
          result[5] += 0;
        } else {
          result[0] += 382625;
          result[1] += 42471391;
          result[2] += 0;
          result[3] += 0;
          result[4] += 95656;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33785692;
          result[1] += 1729052;
          result[2] += 34581;
          result[3] += 968269;
          result[4] += 5671293;
          result[5] += 760783;
        } else {
          result[0] += 10323215;
          result[1] += 254894;
          result[2] += 6627249;
          result[3] += 12872157;
          result[4] += 1784259;
          result[5] += 11087897;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 622459;
          result[3] += 13694098;
          result[4] += 1867377;
          result[5] += 26765738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6911441;
          result[3] += 30114138;
          result[4] += 0;
          result[5] += 5924092;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7158278;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20975421;
          result[3] += 15648330;
          result[4] += 2996488;
          result[5] += 3329432;
        } else {
          result[0] += 813783;
          result[1] += 0;
          result[2] += 39061597;
          result[3] += 2576980;
          result[4] += 45210;
          result[5] += 452101;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 352046;
          result[1] += 0;
          result[2] += 0;
          result[3] += 176023;
          result[4] += 40661370;
          result[5] += 1760232;
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
          result[0] += 1153011;
          result[1] += 96084;
          result[2] += 96084;
          result[3] += 2161896;
          result[4] += 1873643;
          result[5] += 37568953;
        } else {
          result[0] += 1916389;
          result[1] += 1803660;
          result[2] += 2141847;
          result[3] += 20178455;
          result[4] += 1690932;
          result[5] += 15218388;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27440068;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 42250492;
          result[2] += 0;
          result[3] += 0;
          result[4] += 699180;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31687314;
          result[1] += 1177139;
          result[2] += 159072;
          result[3] += 1368026;
          result[4] += 6267470;
          result[5] += 2290649;
        } else {
          result[0] += 9171544;
          result[1] += 1565873;
          result[2] += 9730785;
          result[3] += 11408506;
          result[4] += 1677721;
          result[5] += 9395240;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5651272;
          result[3] += 1130254;
          result[4] += 2260509;
          result[5] += 33907636;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 1576134;
          result[2] += 10638909;
          result[3] += 25612190;
          result[4] += 788067;
          result[5] += 4334370;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32582510;
          result[3] += 1481023;
          result[4] += 5924092;
          result[5] += 2962046;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 4294967;
          result[1] += 8589934;
          result[2] += 27917287;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2147483;
        } else {
          result[0] += 32843867;
          result[1] += 0;
          result[2] += 10105805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 147593;
          result[1] += 0;
          result[2] += 39899409;
          result[3] += 2607483;
          result[4] += 0;
          result[5] += 295186;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 2260509;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38428654;
          result[5] += 2260509;
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
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 31745410;
          result[5] += 11204262;
        } else {
          result[0] += 0;
          result[1] += 61269;
          result[2] += 0;
          result[3] += 1102844;
          result[4] += 1041575;
          result[5] += 40743983;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
          result[0] += 42412802;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 536870;
          result[5] += 0;
        } else {
          result[0] += 412977;
          result[1] += 825955;
          result[2] += 688296;
          result[3] += 15280172;
          result[4] += 3234991;
          result[5] += 22507280;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 1493901;
          result[1] += 12324688;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28010656;
          result[5] += 1120426;
        } else {
          result[0] += 96084;
          result[1] += 41604493;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1249095;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 38037770;
          result[1] += 825199;
          result[2] += 78590;
          result[3] += 864494;
          result[4] += 2593484;
          result[5] += 550133;
        } else {
          result[0] += 12142839;
          result[1] += 2248673;
          result[2] += 5621684;
          result[3] += 9894165;
          result[4] += 4947082;
          result[5] += 8095226;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 3444077;
          result[1] += 2836299;
          result[2] += 5470005;
          result[3] += 16815202;
          result[4] += 3241484;
          result[5] += 11142603;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 29386618;
          result[3] += 8396176;
          result[4] += 0;
          result[5] += 5166877;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 954437;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 1908874;
        } else {
          result[0] += 1257308;
          result[1] += 0;
          result[2] += 39228038;
          result[3] += 2162571;
          result[4] += 0;
          result[5] += 301754;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 319328;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39756388;
          result[5] += 2873955;
        } else {
          result[0] += 0;
          result[1] += 35140641;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7809031;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          result[0] += 40330790;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2618882;
          result[5] += 0;
        } else {
          result[0] += 475776;
          result[1] += 216262;
          result[2] += 0;
          result[3] += 2681651;
          result[4] += 3243933;
          result[5] += 36332049;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 18897856;
          result[2] += 2576980;
          result[3] += 2576980;
          result[4] += 18897856;
          result[5] += 0;
        } else {
          result[0] += 573937;
          result[1] += 41993110;
          result[2] += 0;
          result[3] += 382625;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
          result[0] += 4294967;
          result[1] += 1571329;
          result[2] += 1676084;
          result[3] += 17913156;
          result[4] += 4190211;
          result[5] += 13303923;
        } else {
          result[0] += 32274526;
          result[1] += 1921526;
          result[2] += 1850358;
          result[3] += 1921526;
          result[4] += 2953457;
          result[5] += 2028277;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4880644;
          result[3] += 2928386;
          result[4] += 1952257;
          result[5] += 33188383;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2839647;
          result[3] += 24846918;
          result[4] += 0;
          result[5] += 15263106;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 2987803;
          result[2] += 12324688;
          result[3] += 18673770;
          result[4] += 1493901;
          result[5] += 7469508;
        } else {
          result[0] += 2431113;
          result[1] += 810371;
          result[2] += 31604476;
          result[3] += 7293340;
          result[4] += 0;
          result[5] += 810371;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 4499489;
          result[1] += 1227133;
          result[2] += 29042159;
          result[3] += 5317578;
          result[4] += 1227133;
          result[5] += 1636178;
        } else {
          result[0] += 712660;
          result[1] += 0;
          result[2] += 39623923;
          result[3] += 2470556;
          result[4] += 0;
          result[5] += 142532;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 168430;
          result[2] += 0;
          result[3] += 505290;
          result[4] += 40086361;
          result[5] += 2189591;
        } else {
          result[0] += 3067833;
          result[1] += 27610504;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9203501;
          result[5] += 3067833;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1354879;
          result[1] += 225813;
          result[2] += 361301;
          result[3] += 2438782;
          result[4] += 3296872;
          result[5] += 35272023;
        } else {
          result[0] += 2854661;
          result[1] += 1427330;
          result[2] += 778543;
          result[3] += 19593355;
          result[4] += 2076117;
          result[5] += 16219665;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 42548274;
          result[2] += 0;
          result[3] += 0;
          result[4] += 401398;
          result[5] += 0;
        } else {
          result[0] += 1952257;
          result[1] += 13108017;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25937140;
          result[5] += 1952257;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36473134;
          result[1] += 605991;
          result[2] += 378744;
          result[3] += 1287732;
          result[4] += 3105708;
          result[5] += 1098360;
        } else {
          result[0] += 4772185;
          result[1] += 858993;
          result[2] += 9830702;
          result[3] += 11262358;
          result[4] += 2099761;
          result[5] += 14125670;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 4521018;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 38428654;
        } else {
          result[0] += 6362914;
          result[1] += 14316557;
          result[2] += 3181457;
          result[3] += 3181457;
          result[4] += 7953643;
          result[5] += 7953643;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 1412818;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 16953818;
          result[4] += 0;
          result[5] += 3108200;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1227133;
          result[1] += 0;
          result[2] += 22088403;
          result[3] += 19634136;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36814005;
          result[3] += 3834792;
          result[4] += 0;
          result[5] += 2300875;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 129366;
          result[1] += 0;
          result[2] += 38292479;
          result[3] += 4269093;
          result[4] += 0;
          result[5] += 258732;
        } else {
          result[0] += 96733;
          result[1] += 0;
          result[2] += 42272538;
          result[3] += 580400;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 254894;
          result[1] += 2548942;
          result[2] += 127447;
          result[3] += 0;
          result[4] += 38998812;
          result[5] += 1019576;
        } else {
          result[0] += 876523;
          result[1] += 39443577;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2629571;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 32535022;
          result[1] += 688571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5250360;
          result[5] += 4475717;
        } else {
          result[0] += 2092488;
          result[1] += 268267;
          result[2] += 777976;
          result[3] += 8343128;
          result[4] += 3246040;
          result[5] += 28221771;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 42653468;
          result[2] += 0;
          result[3] += 0;
          result[4] += 296204;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 10737418;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
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
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 36984440;
          result[1] += 0;
          result[2] += 1193046;
          result[3] += 0;
          result[4] += 2386092;
          result[5] += 2386092;
        } else {
          result[0] += 3390763;
          result[1] += 0;
          result[2] += 23735345;
          result[3] += 7911781;
          result[4] += 0;
          result[5] += 7911781;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          result[0] += 42873385;
          result[1] += 0;
          result[2] += 76287;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 22906492;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20043180;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 482580;
          result[1] += 0;
          result[2] += 8203870;
          result[3] += 28472255;
          result[4] += 0;
          result[5] += 5790967;
        } else {
          result[0] += 1053979;
          result[1] += 0;
          result[2] += 28457452;
          result[3] += 11330281;
          result[4] += 0;
          result[5] += 2107959;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 14641933;
          result[1] += 0;
          result[2] += 20986772;
          result[3] += 2928386;
          result[4] += 0;
          result[5] += 4392580;
        } else {
          result[0] += 1304433;
          result[1] += 0;
          result[2] += 39567808;
          result[3] += 1690932;
          result[4] += 0;
          result[5] += 386498;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 429496;
          result[1] += 0;
          result[2] += 143165;
          result[3] += 0;
          result[4] += 41661182;
          result[5] += 715827;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16106127;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 37636311;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3985021;
          result[5] += 1328340;
        } else {
          result[0] += 329431;
          result[1] += 905937;
          result[2] += 370610;
          result[3] += 3623749;
          result[4] += 2511917;
          result[5] += 35208025;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 97612;
          result[1] += 42559221;
          result[2] += 0;
          result[3] += 0;
          result[4] += 292838;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          result[0] += 4621880;
          result[1] += 225457;
          result[2] += 338186;
          result[3] += 18149336;
          result[4] += 4960067;
          result[5] += 14654744;
        } else {
          result[0] += 30020186;
          result[1] += 1099749;
          result[2] += 3418140;
          result[3] += 3002018;
          result[4] += 3626200;
          result[5] += 1783377;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5632743;
          result[3] += 29571905;
          result[4] += 704092;
          result[5] += 7040929;
        } else {
          result[0] += 438261;
          result[1] += 0;
          result[2] += 27610504;
          result[3] += 10080025;
          result[4] += 0;
          result[5] += 4820881;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42460000))) ) ) {
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
          result[4] += 34359738;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 1741202;
          result[1] += 0;
          result[2] += 30180851;
          result[3] += 9286415;
          result[4] += 0;
          result[5] += 1741202;
        } else {
          result[0] += 207236;
          result[1] += 0;
          result[2] += 41032739;
          result[3] += 1398843;
          result[4] += 0;
          result[5] += 310854;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42737050;
          result[5] += 212622;
        } else {
          result[0] += 2386092;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33405301;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 38117834;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4831838;
          result[5] += 0;
        } else {
          result[0] += 1342177;
          result[1] += 0;
          result[2] += 671088;
          result[3] += 0;
          result[4] += 22145925;
          result[5] += 18790481;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 101296;
          result[1] += 50648;
          result[2] += 0;
          result[3] += 1570094;
          result[4] += 2228520;
          result[5] += 38999113;
        } else {
          result[0] += 0;
          result[1] += 596523;
          result[2] += 0;
          result[3] += 13918875;
          result[4] += 4374503;
          result[5] += 24059770;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 1385473;
          result[2] += 0;
          result[3] += 6234629;
          result[4] += 2078209;
          result[5] += 33251359;
        } else {
          result[0] += 0;
          result[1] += 200699;
          result[2] += 602098;
          result[3] += 29703512;
          result[4] += 0;
          result[5] += 12443363;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 438261;
          result[1] += 9203501;
          result[2] += 0;
          result[3] += 1314785;
          result[4] += 31993123;
          result[5] += 0;
        } else {
          result[0] += 203552;
          result[1] += 42339014;
          result[2] += 0;
          result[3] += 203552;
          result[4] += 203552;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36275592;
          result[1] += 1531112;
          result[2] += 39259;
          result[3] += 863704;
          result[4] += 3258521;
          result[5] += 981482;
        } else {
          result[0] += 13227846;
          result[1] += 1796374;
          result[2] += 8002030;
          result[3] += 8328643;
          result[4] += 3102828;
          result[5] += 8491950;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1282079;
          result[1] += 1709439;
          result[2] += 6624078;
          result[3] += 16667037;
          result[4] += 6410398;
          result[5] += 10256638;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37675151;
          result[3] += 753503;
          result[4] += 0;
          result[5] += 4521018;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 20344581;
          result[1] += 5651272;
          result[2] += 12432800;
          result[3] += 2260509;
          result[4] += 2260509;
          result[5] += 0;
        } else {
          result[0] += 543093;
          result[1] += 0;
          result[2] += 39238531;
          result[3] += 2534438;
          result[4] += 135773;
          result[5] += 497836;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1263225;
          result[1] += 721843;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39881839;
          result[5] += 1082764;
        } else {
          result[0] += 15761347;
          result[1] += 9456808;
          result[2] += 0;
          result[3] += 2364202;
          result[4] += 3546303;
          result[5] += 11821010;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 42992;
          result[1] += 128977;
          result[2] += 128977;
          result[3] += 3181457;
          result[4] += 2450581;
          result[5] += 37016685;
        } else {
          result[0] += 0;
          result[1] += 496528;
          result[2] += 1986112;
          result[3] += 28798624;
          result[4] += 496528;
          result[5] += 11171880;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 920350;
          result[1] += 8283151;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32825821;
          result[5] += 920350;
        } else {
          result[0] += 0;
          result[1] += 42441993;
          result[2] += 0;
          result[3] += 0;
          result[4] += 507679;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35911861;
          result[1] += 684760;
          result[2] += 266295;
          result[3] += 1293435;
          result[4] += 3690095;
          result[5] += 1103224;
        } else {
          result[0] += 9427976;
          result[1] += 174592;
          result[2] += 5237764;
          result[3] += 9427976;
          result[4] += 5063172;
          result[5] += 13618188;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1455921;
          result[1] += 4367763;
          result[2] += 727960;
          result[3] += 8007566;
          result[4] += 5095723;
          result[5] += 23294737;
        } else {
          result[0] += 1052688;
          result[1] += 2315913;
          result[2] += 7368816;
          result[3] += 25685588;
          result[4] += 421075;
          result[5] += 6105590;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 3024624;
          result[1] += 0;
          result[2] += 30851173;
          result[3] += 4234474;
          result[4] += 2419699;
          result[5] += 2419699;
        } else {
          result[0] += 24359516;
          result[1] += 1282079;
          result[2] += 16667037;
          result[3] += 641039;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20483690;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 5286113;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40904450;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2045222;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 532433;
          result[1] += 0;
          result[2] += 34963163;
          result[3] += 7276597;
          result[4] += 0;
          result[5] += 177477;
        } else {
          result[0] += 201326;
          result[1] += 0;
          result[2] += 41473277;
          result[3] += 1140850;
          result[4] += 0;
          result[5] += 134217;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 163930;
          result[1] += 2458950;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39998932;
          result[5] += 327860;
        } else {
          result[0] += 4421289;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18948385;
          result[5] += 19579997;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 119636;
          result[2] += 59818;
          result[3] += 1316006;
          result[4] += 1495462;
          result[5] += 39958748;
        } else {
          result[0] += 5104953;
          result[1] += 952924;
          result[2] += 544528;
          result[3] += 13885472;
          result[4] += 3947830;
          result[5] += 18513963;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 1455921;
          result[1] += 6551645;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33486185;
          result[5] += 1455921;
        } else {
          result[0] += 0;
          result[1] += 41208469;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1741202;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35645306;
          result[1] += 620871;
          result[2] += 328696;
          result[3] += 1168698;
          result[4] += 2775659;
          result[5] += 2410440;
        } else {
          result[0] += 6412204;
          result[1] += 967879;
          result[2] += 9920769;
          result[3] += 13187364;
          result[4] += 2540684;
          result[5] += 9920769;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2078209;
          result[1] += 3463683;
          result[2] += 1385473;
          result[3] += 7620103;
          result[4] += 4849156;
          result[5] += 23553046;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17412029;
          result[3] += 21281369;
          result[4] += 0;
          result[5] += 4256273;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38725114;
          result[3] += 2816371;
          result[4] += 0;
          result[5] += 1408185;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 1827645;
          result[1] += 913822;
          result[2] += 18276456;
          result[3] += 10965873;
          result[4] += 0;
          result[5] += 10965873;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 22270200;
          result[1] += 0;
          result[2] += 20679472;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 269445;
          result[1] += 0;
          result[2] += 40255214;
          result[3] += 2371123;
          result[4] += 0;
          result[5] += 53889;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 178956;
          result[1] += 178956;
          result[2] += 0;
          result[3] += 357913;
          result[4] += 40444275;
          result[5] += 1789569;
        } else {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 0;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 907387;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1008208;
          result[4] += 3125445;
          result[5] += 37908631;
        } else {
          result[0] += 1930322;
          result[1] += 289548;
          result[2] += 386064;
          result[3] += 18338062;
          result[4] += 1833806;
          result[5] += 20171868;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 5368709;
          result[1] += 10379504;
          result[2] += 1252698;
          result[3] += 1252698;
          result[4] += 23085449;
          result[5] += 1610612;
        } else {
          result[0] += 29756355;
          result[1] += 856708;
          result[2] += 2655797;
          result[3] += 4483443;
          result[4] += 2341670;
          result[5] += 2855696;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 6135667;
          result[1] += 30678337;
          result[2] += 0;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1342177;
          result[1] += 1342177;
          result[2] += 2684354;
          result[3] += 2684354;
          result[4] += 2684354;
          result[5] += 32212254;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9714806;
          result[3] += 25565281;
          result[4] += 0;
          result[5] += 7669584;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 4908534;
          result[4] += 0;
          result[5] += 7362801;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 577798;
          result[1] += 0;
          result[2] += 33704900;
          result[3] += 7703977;
          result[4] += 0;
          result[5] += 962997;
        } else {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 5856773;
          result[1] += 0;
          result[2] += 35140641;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1952257;
        } else {
          result[0] += 62700;
          result[1] += 0;
          result[2] += 41131365;
          result[3] += 1692906;
          result[4] += 0;
          result[5] += 62700;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 972445;
          result[1] += 3241484;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37277074;
          result[5] += 1458668;
        } else {
          result[0] += 23638967;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12984784;
          result[5] += 6325920;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 268156;
          result[1] += 893853;
          result[2] += 0;
          result[3] += 2368712;
          result[4] += 4826810;
          result[5] += 34592140;
        } else {
          result[0] += 559604;
          result[1] += 419703;
          result[2] += 419703;
          result[3] += 25881724;
          result[4] += 1678814;
          result[5] += 13990121;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37223049;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42838115;
          result[2] += 0;
          result[3] += 111557;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 15096447;
          result[1] += 3342387;
          result[2] += 3063854;
          result[3] += 8133141;
          result[4] += 5403525;
          result[5] += 7910315;
        } else {
          result[0] += 34539285;
          result[1] += 1086735;
          result[2] += 3212956;
          result[3] += 614241;
          result[4] += 3354704;
          result[5] += 141748;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4129776;
          result[3] += 20648881;
          result[4] += 0;
          result[5] += 18171015;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18084072;
          result[3] += 9042036;
          result[4] += 0;
          result[5] += 15823563;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38923141;
          result[3] += 1342177;
          result[4] += 0;
          result[5] += 2684354;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28362991;
          result[3] += 12965939;
          result[4] += 0;
          result[5] += 1620742;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 236246;
          result[1] += 0;
          result[2] += 40020212;
          result[3] += 2267969;
          result[4] += 141748;
          result[5] += 283496;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
          result[0] += 737333;
          result[1] += 368666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40553339;
          result[5] += 1290333;
        } else {
          result[0] += 17179869;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12884901;
          result[5] += 12884901;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 639571;
          result[2] += 0;
          result[3] += 2853471;
          result[4] += 2951867;
          result[5] += 36504762;
        } else {
          result[0] += 0;
          result[1] += 237291;
          result[2] += 2372910;
          result[3] += 19932444;
          result[4] += 237291;
          result[5] += 20169735;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        } else {
          result[0] += 197016;
          result[1] += 42752656;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 11724099;
          result[1] += 870601;
          result[2] += 2727884;
          result[3] += 11549979;
          result[4] += 5281648;
          result[5] += 10795458;
        } else {
          result[0] += 31323907;
          result[1] += 1853942;
          result[2] += 3012656;
          result[3] += 1004218;
          result[4] += 4441737;
          result[5] += 1313209;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2684354;
          result[4] += 5368709;
          result[5] += 34896609;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 25224411;
          result[1] += 5453926;
          result[2] += 6817408;
          result[3] += 1363481;
          result[4] += 1363481;
          result[5] += 2726963;
        } else {
          result[0] += 2123884;
          result[1] += 1179936;
          result[2] += 21002862;
          result[3] += 15575156;
          result[4] += 235987;
          result[5] += 2831846;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3067833;
          result[3] += 24542670;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 709911;
          result[1] += 0;
          result[2] += 34963163;
          result[3] += 5324339;
          result[4] += 0;
          result[5] += 1952257;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42130283;
          result[3] += 819389;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1090093;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41641561;
          result[5] += 218018;
        } else {
          result[0] += 0;
          result[1] += 461824;
          result[2] += 0;
          result[3] += 1385473;
          result[4] += 27709466;
          result[5] += 13392908;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2929286;
          result[1] += 633359;
          result[2] += 39584;
          result[3] += 2770946;
          result[4] += 3166796;
          result[5] += 33409699;
        } else {
          result[0] += 288252;
          result[1] += 0;
          result[2] += 3314907;
          result[3] += 28392904;
          result[4] += 0;
          result[5] += 10953607;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33930922;
          result[1] += 1803750;
          result[2] += 544528;
          result[3] += 544528;
          result[4] += 5581415;
          result[5] += 544528;
        } else {
          result[0] += 5999319;
          result[1] += 0;
          result[2] += 9135327;
          result[3] += 11453246;
          result[4] += 4363141;
          result[5] += 11998638;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 107913;
          result[1] += 42841759;
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
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3221225;
          result[4] += 1073741;
          result[5] += 38654705;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6198921;
          result[3] += 19925106;
          result[4] += 1328340;
          result[5] += 15497304;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 23860929;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 4772185;
          result[4] += 4772185;
          result[5] += 4772185;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 655720;
          result[1] += 0;
          result[2] += 25245227;
          result[3] += 11802963;
          result[4] += 0;
          result[5] += 5245761;
        } else {
          result[0] += 555166;
          result[1] += 151408;
          result[2] += 40173842;
          result[3] += 1766437;
          result[4] += 0;
          result[5] += 302817;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
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
          result[4] += 17179869;
          result[5] += 25769803;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 34359738;
        } else {
          result[0] += 0;
          result[1] += 4294967;
          result[2] += 2863311;
          result[3] += 17179869;
          result[4] += 17179869;
          result[5] += 1431655;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 33405301;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8351325;
          result[5] += 1193046;
        } else {
          result[0] += 0;
          result[1] += 191739;
          result[2] += 0;
          result[3] += 1581851;
          result[4] += 2540549;
          result[5] += 38635531;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 4487279;
          result[1] += 641039;
          result[2] += 0;
          result[3] += 6410398;
          result[4] += 5128319;
          result[5] += 26282635;
        } else {
          result[0] += 0;
          result[1] += 360921;
          result[2] += 0;
          result[3] += 25986356;
          result[4] += 541382;
          result[5] += 16061012;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 1006632;
          result[1] += 14428405;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27514634;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41632819;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1316853;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36902050;
          result[1] += 847437;
          result[2] += 154079;
          result[3] += 1078556;
          result[4] += 3043070;
          result[5] += 924477;
        } else {
          result[0] += 13544295;
          result[1] += 1960358;
          result[2] += 5346432;
          result[3] += 9980006;
          result[4] += 2673216;
          result[5] += 9445363;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6737203;
          result[3] += 26668097;
          result[4] += 561433;
          result[5] += 8982938;
        } else {
          result[0] += 681740;
          result[1] += 0;
          result[2] += 23179188;
          result[3] += 6817408;
          result[4] += 0;
          result[5] += 12271335;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25969569;
          result[3] += 10321239;
          result[4] += 665886;
          result[5] += 5992977;
        } else {
          result[0] += 1051048;
          result[1] += 429974;
          result[2] += 39366552;
          result[3] += 1528798;
          result[4] += 286649;
          result[5] += 286649;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 166471;
          result[2] += 0;
          result[3] += 332943;
          result[4] += 40452598;
          result[5] += 1997659;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37580963;
          result[4] += 0;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
          result[0] += 24216304;
          result[1] += 913822;
          result[2] += 0;
          result[3] += 2741468;
          result[4] += 12793519;
          result[5] += 2284557;
        } else {
          result[0] += 71702;
          result[1] += 0;
          result[2] += 71702;
          result[3] += 4732351;
          result[4] += 2402026;
          result[5] += 35671890;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 0;
        } else {
          result[0] += 98058;
          result[1] += 42557438;
          result[2] += 0;
          result[3] += 0;
          result[4] += 294175;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 35051300;
          result[1] += 1637911;
          result[2] += 291184;
          result[3] += 946348;
          result[4] += 4695345;
          result[5] += 327582;
        } else {
          result[0] += 6517238;
          result[1] += 1175239;
          result[2] += 9188238;
          result[3] += 14102877;
          result[4] += 2029959;
          result[5] += 9936118;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 2576980;
          result[2] += 858993;
          result[3] += 7730941;
          result[4] += 6012954;
          result[5] += 25769803;
        } else {
          result[0] += 0;
          result[1] += 976128;
          result[2] += 9273224;
          result[3] += 28307738;
          result[4] += 488064;
          result[5] += 3904515;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1301505;
          result[1] += 18221073;
          result[2] += 1301505;
          result[3] += 3904515;
          result[4] += 7809031;
          result[5] += 10412041;
        } else {
          result[0] += 414972;
          result[1] += 0;
          result[2] += 30293006;
          result[3] += 10789289;
          result[4] += 0;
          result[5] += 1452404;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 7745022;
          result[1] += 0;
          result[2] += 23939161;
          result[3] += 5632743;
          result[4] += 0;
          result[5] += 5632743;
        } else {
          result[0] += 167336;
          result[1] += 0;
          result[2] += 41499424;
          result[3] += 1227133;
          result[4] += 0;
          result[5] += 55778;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 173184;
          result[2] += 0;
          result[3] += 346368;
          result[4] += 41910567;
          result[5] += 519552;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2006595;
          result[1] += 640402;
          result[2] += 0;
          result[3] += 2091982;
          result[4] += 3244706;
          result[5] += 34965986;
        } else {
          result[0] += 0;
          result[1] += 314649;
          result[2] += 2517196;
          result[3] += 22969422;
          result[4] += 629299;
          result[5] += 16519104;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 6710886;
          result[2] += 0;
          result[3] += 8053063;
          result[4] += 22817013;
          result[5] += 5368709;
        } else {
          result[0] += 103994;
          result[1] += 42845678;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32931388;
          result[1] += 1388673;
          result[2] += 363700;
          result[3] += 1190291;
          result[4] += 5753073;
          result[5] += 1322545;
        } else {
          result[0] += 6218957;
          result[1] += 971712;
          result[2] += 10300147;
          result[3] += 11466202;
          result[4] += 2720793;
          result[5] += 11271859;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 998829;
          result[3] += 5992977;
          result[4] += 0;
          result[5] += 35957865;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 1481023;
          result[1] += 2962046;
          result[2] += 5924092;
          result[3] += 25177394;
          result[4] += 0;
          result[5] += 7405116;
        } else {
          result[0] += 1717986;
          result[1] += 2290649;
          result[2] += 26342466;
          result[3] += 8017272;
          result[4] += 1145324;
          result[5] += 3435973;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17808400;
          result[3] += 19903506;
          result[4] += 0;
          result[5] += 5237764;
        } else {
          result[0] += 613566;
          result[1] += 0;
          result[2] += 39881839;
          result[3] += 2454267;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31554861;
          result[3] += 11394811;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 163100;
          result[1] += 0;
          result[2] += 41590506;
          result[3] += 1087333;
          result[4] += 0;
          result[5] += 108733;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 349184;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42425896;
          result[5] += 174592;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 715827;
          result[3] += 715827;
          result[4] += 30780598;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 37896770;
          result[1] += 1010580;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3031741;
          result[5] += 1010580;
        } else {
          result[0] += 604357;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2739753;
          result[4] += 3505273;
          result[5] += 36100287;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 27709466;
          result[2] += 0;
          result[3] += 2770946;
          result[4] += 12469259;
          result[5] += 0;
        } else {
          result[0] += 198841;
          result[1] += 42750831;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33718166;
          result[1] += 2495001;
          result[2] += 35642;
          result[3] += 1140572;
          result[4] += 4241502;
          result[5] += 1318786;
        } else {
          result[0] += 6556180;
          result[1] += 334499;
          result[2] += 7559677;
          result[3] += 16791850;
          result[4] += 1672495;
          result[5] += 10034970;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7405116;
          result[3] += 25917906;
          result[4] += 2221534;
          result[5] += 7405116;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23264406;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 12526987;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 550636;
          result[1] += 0;
          result[2] += 31936936;
          result[3] += 8259552;
          result[4] += 550636;
          result[5] += 1651910;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5368709;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 9110536;
          result[1] += 0;
          result[2] += 27331610;
          result[3] += 1301505;
          result[4] += 0;
          result[5] += 5206020;
        } else {
          result[0] += 156180;
          result[1] += 0;
          result[2] += 40398722;
          result[3] += 2134468;
          result[4] += 0;
          result[5] += 260301;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42777874;
          result[5] += 171798;
        } else {
          result[0] += 2962046;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39987626;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42830000))) ) ) {
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 0;
          result[4] += 28633115;
          result[5] += 7158278;
        } else {
          result[0] += 0;
          result[1] += 167772;
          result[2] += 0;
          result[3] += 1733645;
          result[4] += 894784;
          result[5] += 40153470;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 36096001;
          result[1] += 456911;
          result[2] += 0;
          result[3] += 913822;
          result[4] += 5026025;
          result[5] += 456911;
        } else {
          result[0] += 374126;
          result[1] += 299300;
          result[2] += 299300;
          result[3] += 14366441;
          result[4] += 4564338;
          result[5] += 23046165;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 3067833;
          result[1] += 10353939;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29527900;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42047368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 902304;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 38492238;
          result[1] += 708190;
          result[2] += 249949;
          result[3] += 916481;
          result[4] += 1874622;
          result[5] += 708190;
        } else {
          result[0] += 17330569;
          result[1] += 1507006;
          result[2] += 4332642;
          result[3] += 10172290;
          result[4] += 1318630;
          result[5] += 8288533;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6698572;
          result[3] += 26794291;
          result[4] += 1970168;
          result[5] += 7486640;
        } else {
          result[0] += 298261;
          result[1] += 1193046;
          result[2] += 26843545;
          result[3] += 3280877;
          result[4] += 4175662;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 2471923;
          result[1] += 308990;
          result[2] += 28427121;
          result[3] += 8342742;
          result[4] += 308990;
          result[5] += 3089904;
        } else {
          result[0] += 509486;
          result[1] += 0;
          result[2] += 39994653;
          result[3] += 2190789;
          result[4] += 0;
          result[5] += 254743;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2068397;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36501138;
          result[5] += 4380136;
        } else {
          result[0] += 20679472;
          result[1] += 5567550;
          result[2] += 795364;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 1590728;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2124169;
          result[4] += 1606079;
          result[5] += 39219423;
        } else {
          result[0] += 178584;
          result[1] += 1875141;
          result[2] += 1875141;
          result[3] += 17590614;
          result[4] += 3750283;
          result[5] += 17679906;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 6964811;
          result[2] += 580400;
          result[3] += 1160801;
          result[4] += 34243658;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42443190;
          result[2] += 0;
          result[3] += 0;
          result[4] += 506481;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34654209;
          result[1] += 2190576;
          result[2] += 323199;
          result[3] += 790044;
          result[4] += 4488887;
          result[5] += 502755;
        } else {
          result[0] += 7499149;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 11816841;
          result[4] += 1817975;
          result[5] += 12271335;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2962046;
          result[3] += 10367162;
          result[4] += 0;
          result[5] += 29620464;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 19088743;
          result[4] += 0;
          result[5] += 4772185;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10447217;
          result[3] += 13929623;
          result[4] += 0;
          result[5] += 18572831;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40904450;
          result[3] += 0;
          result[4] += 0;
          result[5] += 2045222;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 124132;
          result[2] += 36370676;
          result[3] += 5213544;
          result[4] += 0;
          result[5] += 1241320;
        } else {
          result[0] += 368983;
          result[1] += 0;
          result[2] += 41399942;
          result[3] += 590373;
          result[4] += 0;
          result[5] += 590373;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 701219;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41371929;
          result[5] += 876523;
        } else {
          result[0] += 1301505;
          result[1] += 2603010;
          result[2] += 0;
          result[3] += 7809031;
          result[4] += 16919568;
          result[5] += 14316557;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 607257;
          result[2] += 331231;
          result[3] += 1711362;
          result[4] += 1324925;
          result[5] += 38974896;
        } else {
          result[0] += 2869289;
          result[1] += 268995;
          result[2] += 448326;
          result[3] += 14346446;
          result[4] += 5469582;
          result[5] += 19547032;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42851614;
          result[2] += 0;
          result[3] += 0;
          result[4] += 98058;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32906249;
          result[1] += 2089780;
          result[2] += 405479;
          result[3] += 998104;
          result[4] += 5208856;
          result[5] += 1341202;
        } else {
          result[0] += 4090445;
          result[1] += 753503;
          result[2] += 7319743;
          result[3] += 12056048;
          result[4] += 3982801;
          result[5] += 14747130;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8967514;
          result[3] += 26902542;
          result[4] += 0;
          result[5] += 7079616;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 20043180;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 604924;
          result[1] += 0;
          result[2] += 36900423;
          result[3] += 2419699;
          result[4] += 1814774;
          result[5] += 1209849;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30445337;
          result[3] += 9242334;
          result[4] += 0;
          result[5] += 3262000;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 779890;
          result[1] += 0;
          result[2] += 40554295;
          result[3] += 1392661;
          result[4] += 0;
          result[5] += 222825;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 421075;
          result[1] += 842150;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41265372;
          result[5] += 421075;
        } else {
          result[0] += 20235903;
          result[1] += 0;
          result[2] += 1238932;
          result[3] += 0;
          result[4] += 17758037;
          result[5] += 3716798;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1173779;
          result[4] += 1653962;
          result[5] += 40121930;
        } else {
          result[0] += 0;
          result[1] += 1195601;
          result[2] += 1103631;
          result[3] += 18209925;
          result[4] += 4874374;
          result[5] += 17566140;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 1847297;
          result[1] += 3694595;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36945955;
          result[5] += 461824;
        } else {
          result[0] += 0;
          result[1] += 42318060;
          result[2] += 0;
          result[3] += 0;
          result[4] += 631612;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36997311;
          result[1] += 712857;
          result[2] += 677214;
          result[3] += 998000;
          result[4] += 2495001;
          result[5] += 1069286;
        } else {
          result[0] += 6036170;
          result[1] += 812561;
          result[2] += 8473854;
          result[3] += 13813543;
          result[4] += 3018085;
          result[5] += 10795458;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 33907636;
          result[4] += 0;
          result[5] += 9042036;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9911462;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 29734388;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18221073;
          result[3] += 16919568;
          result[4] += 0;
          result[5] += 7809031;
        } else {
          result[0] += 734182;
          result[1] += 0;
          result[2] += 35240757;
          result[3] += 4405094;
          result[4] += 734182;
          result[5] += 1835456;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 36814005;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 445844;
          result[1] += 0;
          result[2] += 40274606;
          result[3] += 1783377;
          result[4] += 0;
          result[5] += 445844;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 562659;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41074141;
          result[5] += 1312872;
        } else {
          result[0] += 0;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 4294967;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1689823;
          result[1] += 0;
          result[2] += 93879;
          result[3] += 1032669;
          result[4] += 3051069;
          result[5] += 37082231;
        } else {
          result[0] += 2279451;
          result[1] += 359913;
          result[2] += 719826;
          result[3] += 20035182;
          result[4] += 1799567;
          result[5] += 17755730;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 9336885;
          result[2] += 0;
          result[3] += 0;
          result[4] += 33612787;
          result[5] += 0;
        } else {
          result[0] += 381774;
          result[1] += 42186123;
          result[2] += 0;
          result[3] += 381774;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32849950;
          result[1] += 2585253;
          result[2] += 241290;
          result[3] += 723870;
          result[4] += 5928847;
          result[5] += 620460;
        } else {
          result[0] += 8473064;
          result[1] += 486957;
          result[2] += 9544371;
          result[3] += 10226112;
          result[4] += 3506095;
          result[5] += 10713070;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36814005;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1101273;
          result[3] += 2202547;
          result[4] += 5506368;
          result[5] += 34139483;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 2202547;
          result[1] += 2753184;
          result[2] += 4405094;
          result[3] += 29183752;
          result[4] += 0;
          result[5] += 4405094;
        } else {
          result[0] += 0;
          result[1] += 687194;
          result[2] += 26113401;
          result[3] += 11338713;
          result[4] += 0;
          result[5] += 4810363;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 301401;
          result[1] += 150700;
          result[2] += 35565343;
          result[3] += 6028024;
          result[4] += 0;
          result[5] += 904203;
        } else {
          result[0] += 27331610;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36001931;
          result[3] += 5684515;
          result[4] += 0;
          result[5] += 1263225;
        } else {
          result[0] += 80430;
          result[1] += 0;
          result[2] += 42547522;
          result[3] += 321720;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 173885;
          result[1] += 0;
          result[2] += 0;
          result[3] += 173885;
          result[4] += 39471966;
          result[5] += 3129935;
        } else {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 526696;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2011021;
          result[4] += 3016532;
          result[5] += 37395423;
        } else {
          result[0] += 3060781;
          result[1] += 1086083;
          result[2] += 789879;
          result[3] += 19746976;
          result[4] += 3258251;
          result[5] += 15007701;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42658159;
          result[2] += 0;
          result[3] += 0;
          result[4] += 291513;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 14003627;
          result[1] += 1486418;
          result[2] += 1721116;
          result[3] += 8762046;
          result[4] += 6727999;
          result[5] += 10248464;
        } else {
          result[0] += 33191743;
          result[1] += 1182779;
          result[2] += 2402520;
          result[3] += 1293664;
          result[4] += 3659223;
          result[5] += 1219741;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
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
          result[2] += 4772185;
          result[3] += 35450523;
          result[4] += 0;
          result[5] += 2726963;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 22906492;
          result[4] += 0;
          result[5] += 5726623;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33746171;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9203501;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20541147;
          result[3] += 15561475;
          result[4] += 622459;
          result[5] += 6224590;
        } else {
          result[0] += 2770946;
          result[1] += 0;
          result[2] += 38793252;
          result[3] += 1385473;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1204196;
          result[1] += 0;
          result[2] += 36794891;
          result[3] += 4549186;
          result[4] += 0;
          result[5] += 401398;
        } else {
          result[0] += 391162;
          result[1] += 0;
          result[2] += 41776184;
          result[3] += 625860;
          result[4] += 0;
          result[5] += 156465;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 175304;
          result[1] += 0;
          result[2] += 175304;
          result[3] += 0;
          result[4] += 41371929;
          result[5] += 1227133;
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
          result[0] += 534441;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1797667;
          result[4] += 3206649;
          result[5] += 37410914;
        } else {
          result[0] += 2899102;
          result[1] += 1503238;
          result[2] += 1288490;
          result[3] += 18683107;
          result[4] += 3113851;
          result[5] += 15461882;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 24159191;
          result[2] += 0;
          result[3] += 0;
          result[4] += 18790481;
          result[5] += 0;
        } else {
          result[0] += 96951;
          result[1] += 42755769;
          result[2] += 0;
          result[3] += 0;
          result[4] += 96951;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34088616;
          result[1] += 1421736;
          result[2] += 363700;
          result[3] += 628209;
          result[4] += 6017583;
          result[5] += 429827;
        } else {
          result[0] += 6022044;
          result[1] += 227246;
          result[2] += 7953643;
          result[3] += 12725829;
          result[4] += 4999432;
          result[5] += 11021476;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2643056;
          result[3] += 1982292;
          result[4] += 0;
          result[5] += 38324323;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 0;
          result[1] += 547129;
          result[2] += 16140322;
          result[3] += 18875970;
          result[4] += 820694;
          result[5] += 6565555;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 22605091;
          result[1] += 0;
          result[2] += 11302545;
          result[3] += 6781527;
          result[4] += 2260509;
          result[5] += 0;
        } else {
          result[0] += 849287;
          result[1] += 0;
          result[2] += 35670067;
          result[3] += 5095723;
          result[4] += 0;
          result[5] += 1334594;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42000508;
          result[3] += 870067;
          result[4] += 0;
          result[5] += 79097;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 876523;
          result[1] += 175304;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41196625;
          result[5] += 701219;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 31541166;
          result[1] += 4026531;
          result[2] += 0;
          result[3] += 2013265;
          result[4] += 3355443;
          result[5] += 2013265;
        } else {
          result[0] += 303263;
          result[1] += 606526;
          result[2] += 341171;
          result[3] += 5231292;
          result[4] += 1819580;
          result[5] += 34647838;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 1997659;
          result[1] += 4328261;
          result[2] += 0;
          result[3] += 332943;
          result[4] += 33960206;
          result[5] += 2330602;
        } else {
          result[0] += 0;
          result[1] += 41599054;
          result[2] += 0;
          result[3] += 450206;
          result[4] += 900412;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 36309926;
          result[1] += 1214125;
          result[2] += 682945;
          result[3] += 531179;
          result[4] += 3490609;
          result[5] += 720886;
        } else {
          result[0] += 18237091;
          result[1] += 396458;
          result[2] += 2907362;
          result[3] += 11232991;
          result[4] += 2907362;
          result[5] += 7268406;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1684300;
          result[3] += 1684300;
          result[4] += 2526451;
          result[5] += 37054619;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7809031;
          result[4] += 31236125;
          result[5] += 3904515;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 37766091;
          result[4] += 0;
          result[5] += 5183581;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9510284;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 16259519;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1073741;
          result[1] += 2147483;
          result[2] += 8053063;
          result[3] += 22548578;
          result[4] += 1073741;
          result[5] += 8053063;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30360975;
          result[3] += 12588697;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 7535030;
          result[1] += 0;
          result[2] += 24112097;
          result[3] += 1507006;
          result[4] += 3767515;
          result[5] += 6028024;
        } else {
          result[0] += 50233;
          result[1] += 100467;
          result[2] += 40086361;
          result[3] += 2612143;
          result[4] += 0;
          result[5] += 100467;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 330382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41628144;
          result[5] += 991146;
        } else {
          result[0] += 0;
          result[1] += 1717986;
          result[2] += 0;
          result[3] += 17179869;
          result[4] += 8589934;
          result[5] += 15461882;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1607264;
          result[1] += 89292;
          result[2] += 0;
          result[3] += 1741202;
          result[4] += 3214528;
          result[5] += 36297384;
        } else {
          result[0] += 4080218;
          result[1] += 107374;
          result[2] += 0;
          result[3] += 19542101;
          result[4] += 2147483;
          result[5] += 17072494;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 5052902;
          result[2] += 0;
          result[3] += 0;
          result[4] += 37896770;
          result[5] += 0;
        } else {
          result[0] += 327860;
          result[1] += 42184666;
          result[2] += 437146;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 19779454;
          result[2] += 1130254;
          result[3] += 847690;
          result[4] += 21192272;
          result[5] += 0;
        } else {
          result[0] += 29584317;
          result[1] += 436776;
          result[2] += 3581565;
          result[3] += 3930987;
          result[4] += 2504184;
          result[5] += 2911842;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 3142658;
          result[2] += 0;
          result[3] += 1047552;
          result[4] += 1047552;
          result[5] += 37711907;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 721843;
          result[1] += 3609216;
          result[2] += 7218432;
          result[3] += 20572532;
          result[4] += 1804608;
          result[5] += 9023040;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35140641;
          result[3] += 5206020;
          result[4] += 0;
          result[5] += 2603010;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
          result[0] += 1138817;
          result[1] += 0;
          result[2] += 32700319;
          result[3] += 8297095;
          result[4] += 0;
          result[5] += 813440;
        } else {
          result[0] += 16106127;
          result[1] += 0;
          result[2] += 20580051;
          result[3] += 5368709;
          result[4] += 0;
          result[5] += 894784;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41777691;
          result[3] += 1171981;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 373475;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40708820;
          result[5] += 1867377;
        } else {
          result[0] += 15670826;
          result[1] += 580400;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9866816;
          result[5] += 16831628;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1880636;
          result[4] += 1321528;
          result[5] += 39747507;
        } else {
          result[0] += 0;
          result[1] += 746950;
          result[2] += 124491;
          result[3] += 20416656;
          result[4] += 2863311;
          result[5] += 18798262;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 42210753;
          result[2] += 0;
          result[3] += 0;
          result[4] += 554189;
          result[5] += 184729;
        } else {
          result[0] += 4955731;
          result[1] += 6607641;
          result[2] += 14867194;
          result[3] += 0;
          result[4] += 16519104;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 31498495;
          result[1] += 2079211;
          result[2] += 434462;
          result[3] += 1675782;
          result[4] += 5648006;
          result[5] += 1613716;
        } else {
          result[0] += 4882909;
          result[1] += 2590931;
          result[2] += 11459889;
          result[3] += 12655704;
          result[4] += 2690582;
          result[5] += 8669655;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 5895053;
          result[2] += 5895053;
          result[3] += 0;
          result[4] += 7579354;
          result[5] += 23580212;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10066329;
          result[3] += 28185722;
          result[4] += 0;
          result[5] += 4697620;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3420770;
          result[1] += 0;
          result[2] += 26605992;
          result[3] += 9882225;
          result[4] += 0;
          result[5] += 3040684;
        } else {
          result[0] += 330382;
          result[1] += 0;
          result[2] += 38324323;
          result[3] += 2973438;
          result[4] += 0;
          result[5] += 1321528;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35639090;
          result[3] += 4569114;
          result[4] += 0;
          result[5] += 2741468;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 69836;
          result[1] += 0;
          result[2] += 42041793;
          result[3] += 838042;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 185127;
          result[2] += 0;
          result[3] += 740511;
          result[4] += 39802498;
          result[5] += 2221534;
        } else {
          result[0] += 0;
          result[1] += 39513699;
          result[2] += 1717986;
          result[3] += 0;
          result[4] += 1717986;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 313120;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1252481;
          result[4] += 2504962;
          result[5] += 38879108;
        } else {
          result[0] += 2887372;
          result[1] += 481228;
          result[2] += 2646758;
          result[3] += 16963316;
          result[4] += 1082764;
          result[5] += 18888231;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 4772185;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38177487;
          result[5] += 0;
        } else {
          result[0] += 201641;
          result[1] += 42344747;
          result[2] += 0;
          result[3] += 201641;
          result[4] += 201641;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 30823409;
          result[1] += 1075235;
          result[2] += 29867;
          result[3] += 1433646;
          result[4] += 6272205;
          result[5] += 3315308;
        } else {
          result[0] += 8222843;
          result[1] += 1762037;
          result[2] += 9030444;
          result[3] += 14243139;
          result[4] += 1174691;
          result[5] += 8516516;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3303820;
          result[5] += 39645851;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6781527;
          result[3] += 27126109;
          result[4] += 0;
          result[5] += 9042036;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33405301;
          result[3] += 7341824;
          result[4] += 0;
          result[5] += 2202547;
        } else {
          result[0] += 281084;
          result[1] += 0;
          result[2] += 41094516;
          result[3] += 1405421;
          result[4] += 0;
          result[5] += 168650;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1008208;
          result[1] += 403283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40933256;
          result[5] += 604924;
        } else {
          result[0] += 15842092;
          result[1] += 0;
          result[2] += 0;
          result[3] += 352046;
          result[4] += 11265487;
          result[5] += 15490045;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56736;
          result[3] += 1475153;
          result[4] += 2155994;
          result[5] += 39261788;
        } else {
          result[0] += 234697;
          result[1] += 2229627;
          result[2] += 0;
          result[3] += 18189069;
          result[4] += 1760232;
          result[5] += 20536045;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 23952702;
          result[2] += 0;
          result[3] += 4955731;
          result[4] += 14041239;
          result[5] += 0;
        } else {
          result[0] += 293505;
          result[1] += 42558331;
          result[2] += 0;
          result[3] += 0;
          result[4] += 97835;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34871043;
          result[1] += 1158959;
          result[2] += 238609;
          result[3] += 818089;
          result[4] += 5010795;
          result[5] += 852176;
        } else {
          result[0] += 6531929;
          result[1] += 1342177;
          result[2] += 8858370;
          result[3] += 10200547;
          result[4] += 4294967;
          result[5] += 11721681;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 466844;
          result[1] += 466844;
          result[2] += 2334221;
          result[3] += 15405860;
          result[4] += 0;
          result[5] += 24275902;
        } else {
          result[0] += 4994148;
          result[1] += 0;
          result[2] += 19976592;
          result[3] += 5992977;
          result[4] += 998829;
          result[5] += 10987125;
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 554189;
          result[1] += 0;
          result[2] += 27986561;
          result[3] += 10806691;
          result[4] += 0;
          result[5] += 3602230;
        } else {
          result[0] += 210279;
          result[1] += 105139;
          result[2] += 40584023;
          result[3] += 1892519;
          result[4] += 0;
          result[5] += 157709;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 3758096;
          result[2] += 0;
          result[3] += 0;
          result[4] += 38296791;
          result[5] += 894784;
        } else {
          result[0] += 14693309;
          result[1] += 4144266;
          result[2] += 0;
          result[3] += 376751;
          result[4] += 8288533;
          result[5] += 15446812;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 180082;
          result[1] += 45020;
          result[2] += 135061;
          result[3] += 2611196;
          result[4] += 4051855;
          result[5] += 35926455;
        } else {
          result[0] += 285379;
          result[1] += 0;
          result[2] += 998829;
          result[3] += 26254949;
          result[4] += 285379;
          result[5] += 15125133;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 1481023;
          result[2] += 0;
          result[3] += 1481023;
          result[4] += 39987626;
          result[5] += 0;
        } else {
          result[0] += 505290;
          result[1] += 40928511;
          result[2] += 202116;
          result[3] += 808464;
          result[4] += 505290;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 33385980;
          result[1] += 1182420;
          result[2] += 486878;
          result[3] += 938980;
          result[4] += 4868788;
          result[5] += 2086623;
        } else {
          result[0] += 7036952;
          result[1] += 1051498;
          result[2] += 11809137;
          result[3] += 11970906;
          result[4] += 1536805;
          result[5] += 9544371;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9663676;
          result[3] += 26843545;
          result[4] += 0;
          result[5] += 6442450;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7158278;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11204262;
          result[3] += 13071639;
          result[4] += 0;
          result[5] += 18673770;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37092899;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5856773;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 145921;
          result[1] += 0;
          result[2] += 39982594;
          result[3] += 2480671;
          result[4] += 0;
          result[5] += 340484;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 403915;
          result[1] += 807830;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40930095;
          result[5] += 807830;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 41920938;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1028734;
          result[5] += 0;
        } else {
          result[0] += 11116385;
          result[1] += 2526451;
          result[2] += 0;
          result[3] += 4547612;
          result[4] += 10611095;
          result[5] += 14148127;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23622320;
          result[5] += 19327352;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 730022;
          result[4] += 669187;
          result[5] += 41550462;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 833974;
          result[1] += 972969;
          result[2] += 694978;
          result[3] += 4725853;
          result[4] += 11119656;
          result[5] += 24602239;
        } else {
          result[0] += 326613;
          result[1] += 0;
          result[2] += 0;
          result[3] += 24985931;
          result[4] += 653226;
          result[5] += 16983901;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 35140641;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7809031;
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
          result[0] += 36652703;
          result[1] += 2649069;
          result[2] += 0;
          result[3] += 781692;
          result[4] += 2605642;
          result[5] += 260564;
        } else {
          result[0] += 7654397;
          result[1] += 1275732;
          result[2] += 9213626;
          result[3] += 12190336;
          result[4] += 3401954;
          result[5] += 9213626;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1352745;
          result[1] += 4734609;
          result[2] += 4396423;
          result[3] += 16909320;
          result[4] += 2367304;
          result[5] += 13189269;
        } else {
          result[0] += 14665741;
          result[1] += 0;
          result[2] += 24093718;
          result[3] += 3491843;
          result[4] += 0;
          result[5] += 698368;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25891646;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 2741468;
        } else {
          result[0] += 53089;
          result[1] += 0;
          result[2] += 40348271;
          result[3] += 2495222;
          result[4] += 0;
          result[5] += 53089;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42440388;
          result[5] += 509284;
        } else {
          result[0] += 19500138;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11354511;
          result[5] += 12095022;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 446810;
          result[2] += 0;
          result[3] += 1452134;
          result[4] += 1563837;
          result[5] += 39486890;
        } else {
          result[0] += 411001;
          result[1] += 2260509;
          result[2] += 1438505;
          result[3] += 11508046;
          result[4] += 2877011;
          result[5] += 24454598;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 16332974;
          result[2] += 0;
          result[3] += 1814774;
          result[4] += 24801923;
          result[5] += 0;
        } else {
          result[0] += 409044;
          result[1] += 42029322;
          result[2] += 0;
          result[3] += 204522;
          result[4] += 306783;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34149372;
          result[1] += 631097;
          result[2] += 35060;
          result[3] += 1542682;
          result[4] += 3961888;
          result[5] += 2629571;
        } else {
          result[0] += 5510239;
          result[1] += 226448;
          result[2] += 10114685;
          result[3] += 16908131;
          result[4] += 1132240;
          result[5] += 9057927;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 6263493;
          result[2] += 894784;
          result[3] += 1789569;
          result[4] += 3579139;
          result[5] += 30422685;
        } else {
          result[0] += 0;
          result[1] += 583027;
          result[2] += 19434241;
          result[3] += 19628583;
          result[4] += 194342;
          result[5] += 3109478;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 14316557;
          result[1] += 4772185;
          result[2] += 11930464;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 7158278;
        } else {
          result[0] += 1091940;
          result[1] += 0;
          result[2] += 38945889;
          result[3] += 1091940;
          result[4] += 0;
          result[5] += 1819901;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39214918;
          result[3] += 0;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34569248;
          result[3] += 8380423;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 129561;
          result[1] += 0;
          result[2] += 42431426;
          result[3] += 388684;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 245426;
          result[1] += 981706;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41722539;
          result[5] += 0;
        } else {
          result[0] += 19327352;
          result[1] += 3758096;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12884901;
          result[5] += 6979321;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 48042;
          result[1] += 912800;
          result[2] += 0;
          result[3] += 1489306;
          result[4] += 2834486;
          result[5] += 37665037;
        } else {
          result[0] += 414972;
          result[1] += 311229;
          result[2] += 622459;
          result[3] += 20644891;
          result[4] += 1452404;
          result[5] += 19503716;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 286331;
          result[1] += 8589934;
          result[2] += 286331;
          result[3] += 572662;
          result[4] += 30351102;
          result[5] += 2863311;
        } else {
          result[0] += 0;
          result[1] += 41788870;
          result[2] += 0;
          result[3] += 105527;
          result[4] += 1055274;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33953232;
          result[1] += 1432766;
          result[2] += 533122;
          result[3] += 1066244;
          result[4] += 3931777;
          result[5] += 2032529;
        } else {
          result[0] += 6236527;
          result[1] += 353011;
          result[2] += 9648967;
          result[3] += 12002374;
          result[4] += 2471077;
          result[5] += 12237715;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4026531;
          result[3] += 14763950;
          result[4] += 1342177;
          result[5] += 22817013;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 29996596;
          result[4] += 0;
          result[5] += 6817408;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a30000))) ) ) {
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
          result[3] += 2684354;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20734324;
          result[3] += 20734324;
          result[4] += 0;
          result[5] += 1481023;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34670217;
          result[3] += 7503256;
          result[4] += 0;
          result[5] += 776198;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 5726623;
          result[1] += 0;
          result[2] += 25769803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 11453246;
        } else {
          result[0] += 240614;
          result[1] += 0;
          result[2] += 41505986;
          result[3] += 1203072;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423a0000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42920000))) ) ) {
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 140358;
          result[1] += 0;
          result[2] += 140358;
          result[3] += 140358;
          result[4] += 41125013;
          result[5] += 1403584;
        } else {
          result[0] += 3354303;
          result[1] += 145839;
          result[2] += 0;
          result[3] += 3354303;
          result[4] += 2989705;
          result[5] += 33105520;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 32907613;
          result[1] += 2420208;
          result[2] += 36122;
          result[3] += 1661635;
          result[4] += 4190211;
          result[5] += 1733880;
        } else {
          result[0] += 6321879;
          result[1] += 1107958;
          result[2] += 7103967;
          result[3] += 17205938;
          result[4] += 1238306;
          result[5] += 9971623;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4156419;
          result[3] += 31173149;
          result[4] += 692736;
          result[5] += 6927366;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 25053975;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 12271335;
          result[3] += 3067833;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 31019208;
          result[3] += 11930464;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11453246;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 18611524;
        } else {
          result[0] += 3463683;
          result[1] += 1385473;
          result[2] += 33251359;
          result[3] += 2770946;
          result[4] += 692736;
          result[5] += 1385473;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33907636;
          result[3] += 7346654;
          result[4] += 0;
          result[5] += 1695381;
        } else {
          result[0] += 128784;
          result[1] += 0;
          result[2] += 41146688;
          result[3] += 1481023;
          result[4] += 0;
          result[5] += 193176;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41308284;
          result[5] += 1641388;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 33870880;
          result[1] += 2793474;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6285317;
          result[5] += 0;
        } else {
          result[0] += 213467;
          result[1] += 512322;
          result[2] += 341548;
          result[3] += 3628948;
          result[4] += 2433530;
          result[5] += 35819856;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 22548578;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20401094;
          result[5] += 0;
        } else {
          result[0] += 91188;
          result[1] += 42858484;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33162310;
          result[1] += 1075534;
          result[2] += 501916;
          result[3] += 2760538;
          result[4] += 3441710;
          result[5] += 2007664;
        } else {
          result[0] += 4508951;
          result[1] += 611383;
          result[2] += 5120334;
          result[3] += 15055312;
          result[4] += 4126836;
          result[5] += 13526854;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1282079;
          result[1] += 0;
          result[2] += 5128319;
          result[3] += 28205755;
          result[4] += 0;
          result[5] += 8333518;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24403223;
          result[3] += 11713547;
          result[4] += 0;
          result[5] += 6832902;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 28633115;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 14316557;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34896609;
          result[3] += 6263493;
          result[4] += 894784;
          result[5] += 894784;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24376841;
          result[3] += 17412029;
          result[4] += 0;
          result[5] += 1160801;
        } else {
          result[0] += 459354;
          result[1] += 0;
          result[2] += 37437415;
          result[3] += 4363870;
          result[4] += 0;
          result[5] += 689032;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 1087333;
          result[1] += 0;
          result[2] += 35338338;
          result[3] += 5980334;
          result[4] += 0;
          result[5] += 543666;
        } else {
          result[0] += 534366;
          result[1] += 0;
          result[2] += 41880940;
          result[3] += 333978;
          result[4] += 0;
          result[5] += 200387;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 192599;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42757073;
          result[5] += 0;
        } else {
          result[0] += 3681400;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26996937;
          result[5] += 12271335;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39370533;
          result[5] += 3579139;
        } else {
          result[0] += 0;
          result[1] += 112728;
          result[2] += 56364;
          result[3] += 1972754;
          result[4] += 1070923;
          result[5] += 39736902;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 35263942;
          result[1] += 1356305;
          result[2] += 0;
          result[3] += 904203;
          result[4] += 5425221;
          result[5] += 0;
        } else {
          result[0] += 448170;
          result[1] += 896341;
          result[2] += 522865;
          result[3] += 15312492;
          result[4] += 3660059;
          result[5] += 22109744;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 11608019;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29600450;
          result[5] += 1741202;
        } else {
          result[0] += 420045;
          result[1] += 41689535;
          result[2] += 0;
          result[3] += 0;
          result[4] += 840091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 36266875;
          result[1] += 2227599;
          result[2] += 0;
          result[3] += 742533;
          result[4] += 3243696;
          result[5] += 468968;
        } else {
          result[0] += 14019181;
          result[1] += 2676389;
          result[2] += 7009590;
          result[3] += 6627249;
          result[4] += 3313624;
          result[5] += 9303638;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 753503;
          result[2] += 5651272;
          result[3] += 27879612;
          result[4] += 0;
          result[5] += 8665284;
        } else {
          result[0] += 1493901;
          result[1] += 0;
          result[2] += 16806393;
          result[3] += 8589934;
          result[4] += 7469508;
          result[5] += 8589934;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36306790;
          result[3] += 6299285;
          result[4] += 0;
          result[5] += 343597;
        } else {
          result[0] += 439008;
          result[1] += 0;
          result[2] += 41705815;
          result[3] += 658512;
          result[4] += 0;
          result[5] += 146336;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 679046;
          result[1] += 169761;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42100865;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27126109;
          result[5] += 15823563;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 110410;
          result[1] += 55205;
          result[2] += 0;
          result[3] += 993694;
          result[4] += 993694;
          result[5] += 40796668;
        } else {
          result[0] += 5080797;
          result[1] += 406463;
          result[2] += 135487;
          result[3] += 14564952;
          result[4] += 3929149;
          result[5] += 18832821;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 15534988;
          result[2] += 0;
          result[3] += 913822;
          result[4] += 26500862;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 41523957;
          result[2] += 267321;
          result[3] += 0;
          result[4] += 1158393;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 35130723;
          result[1] += 1927462;
          result[2] += 690976;
          result[3] += 1091016;
          result[4] += 3491251;
          result[5] += 618242;
        } else {
          result[0] += 6330732;
          result[1] += 993056;
          result[2] += 10054692;
          result[3] += 14026916;
          result[4] += 2730904;
          result[5] += 8813372;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1385473;
          result[3] += 5541893;
          result[4] += 1385473;
          result[5] += 34636833;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33405301;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14998298;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 4090445;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33597728;
          result[3] += 7620103;
          result[4] += 0;
          result[5] += 1731841;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42980000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 5368709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 571815;
          result[1] += 0;
          result[2] += 41297762;
          result[3] += 1080095;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 34359738;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 42573745;
          result[2] += 0;
          result[3] += 93981;
          result[4] += 281945;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 300347;
          result[1] += 901042;
          result[2] += 0;
          result[3] += 450521;
          result[4] += 36942725;
          result[5] += 4355036;
        } else {
          result[0] += 1071955;
          result[1] += 71463;
          result[2] += 71463;
          result[3] += 6860513;
          result[4] += 2251105;
          result[5] += 32623170;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 31049502;
          result[1] += 2309467;
          result[2] += 288683;
          result[3] += 1218885;
          result[4] += 6896325;
          result[5] += 1186809;
        } else {
          result[0] += 8232847;
          result[1] += 1983818;
          result[2] += 9423138;
          result[3] += 12498057;
          result[4] += 1884627;
          result[5] += 8927183;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 1789569;
          result[1] += 10737418;
          result[2] += 1789569;
          result[3] += 5368709;
          result[4] += 3579139;
          result[5] += 19685266;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6551645;
          result[3] += 29118422;
          result[4] += 0;
          result[5] += 7279605;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27374516;
          result[3] += 7551590;
          result[4] += 471974;
          result[5] += 7551590;
        } else {
          result[0] += 18253611;
          result[1] += 2147483;
          result[2] += 13958643;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 6442450;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1112685;
          result[1] += 0;
          result[2] += 34938334;
          result[3] += 6453577;
          result[4] += 0;
          result[5] += 445074;
        } else {
          result[0] += 62976;
          result[1] += 0;
          result[2] += 42005032;
          result[3] += 629760;
          result[4] += 0;
          result[5] += 251904;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 149650;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41602819;
          result[5] += 1197203;
        } else {
          result[0] += 0;
          result[1] += 23860929;
          result[2] += 0;
          result[3] += 19088743;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 1914423;
          result[1] += 790740;
          result[2] += 0;
          result[3] += 2871635;
          result[4] += 2247366;
          result[5] += 35125507;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1831976;
          result[3] += 26665436;
          result[4] += 610658;
          result[5] += 13841600;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 367091;
          result[1] += 5506368;
          result[2] += 734182;
          result[3] += 1101273;
          result[4] += 33405301;
          result[5] += 1835456;
        } else {
          result[0] += 0;
          result[1] += 42554733;
          result[2] += 0;
          result[3] += 0;
          result[4] += 394939;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 34805191;
          result[1] += 1628896;
          result[2] += 531884;
          result[3] += 1662139;
          result[4] += 3191306;
          result[5] += 1130254;
        } else {
          result[0] += 4839399;
          result[1] += 241969;
          result[2] += 7138114;
          result[3] += 13187364;
          result[4] += 2298714;
          result[5] += 15244109;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9203501;
          result[3] += 12271335;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4862227;
          result[3] += 34845961;
          result[4] += 0;
          result[5] += 3241484;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30994609;
          result[3] += 11069503;
          result[4] += 0;
          result[5] += 885560;
        } else {
          result[0] += 26430567;
          result[1] += 0;
          result[2] += 9911462;
          result[3] += 3303820;
          result[4] += 0;
          result[5] += 3303820;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3579139;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38654705;
          result[3] += 4294967;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 1193046;
          result[4] += 0;
          result[5] += 13123511;
        } else {
          result[0] += 50351;
          result[1] += 0;
          result[2] += 40834917;
          result[3] += 1711944;
          result[4] += 0;
          result[5] += 352459;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 493674;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41304091;
          result[5] += 1151906;
        } else {
          result[0] += 0;
          result[1] += 14316557;
          result[2] += 0;
          result[3] += 28633115;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11453246;
          result[4] += 28633115;
          result[5] += 2863311;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 55924;
          result[3] += 1509949;
          result[4] += 1118481;
          result[5] += 40265318;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 4224557;
          result[1] += 968127;
          result[2] += 440058;
          result[3] += 13377766;
          result[4] += 2288302;
          result[5] += 21650859;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37580963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5368709;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423a0000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42844917;
          result[2] += 0;
          result[3] += 0;
          result[4] += 104755;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
          result[0] += 6384410;
          result[1] += 7158278;
          result[2] += 193466;
          result[3] += 967334;
          result[4] += 24957242;
          result[5] += 3288938;
        } else {
          result[0] += 34379440;
          result[1] += 656722;
          result[2] += 492542;
          result[3] += 1871660;
          result[4] += 2626891;
          result[5] += 2922416;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1342177;
          result[1] += 298261;
          result[2] += 13421772;
          result[3] += 18343089;
          result[4] += 298261;
          result[5] += 9246110;
        } else {
          result[0] += 1179010;
          result[1] += 42107;
          result[2] += 38949458;
          result[3] += 2147483;
          result[4] += 0;
          result[5] += 631612;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 153391;
          result[1] += 766958;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41108972;
          result[5] += 920350;
        } else {
          result[0] += 2911842;
          result[1] += 1455921;
          result[2] += 0;
          result[3] += 1455921;
          result[4] += 17471053;
          result[5] += 19654935;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 26492321;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14048958;
          result[5] += 2408392;
        } else {
          result[0] += 127447;
          result[1] += 212411;
          result[2] += 0;
          result[3] += 2973765;
          result[4] += 2591424;
          result[5] += 37044623;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42459379;
          result[2] += 0;
          result[3] += 490293;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33216722;
          result[1] += 2147483;
          result[2] += 138547;
          result[3] += 1627931;
          result[4] += 4294967;
          result[5] += 1524020;
        } else {
          result[0] += 4864849;
          result[1] += 277991;
          result[2] += 8200746;
          result[3] += 17791450;
          result[4] += 1528952;
          result[5] += 10285682;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 2801065;
          result[2] += 933688;
          result[3] += 0;
          result[4] += 5602131;
          result[5] += 33612787;
        } else {
          result[0] += 876523;
          result[1] += 2629571;
          result[2] += 8765239;
          result[3] += 21036574;
          result[4] += 0;
          result[5] += 9641763;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 34896609;
          result[3] += 4026531;
          result[4] += 0;
          result[5] += 1342177;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16873085;
          result[3] += 19173961;
          result[4] += 766958;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40180350;
          result[3] += 2769322;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 5331683;
          result[1] += 148102;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35692659;
          result[5] += 1777227;
        } else {
          result[0] += 976128;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16594191;
          result[5] += 25379352;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1833217;
          result[4] += 2147483;
          result[5] += 38968971;
        } else {
          result[0] += 0;
          result[1] += 1060485;
          result[2] += 530242;
          result[3] += 18028257;
          result[4] += 1988410;
          result[5] += 21342275;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 20861269;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22088403;
          result[5] += 0;
        } else {
          result[0] += 100349;
          result[1] += 42748973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 100349;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32138089;
          result[1] += 2010690;
          result[2] += 659242;
          result[3] += 1252561;
          result[4] += 5306905;
          result[5] += 1582182;
        } else {
          result[0] += 6011015;
          result[1] += 678663;
          result[2] += 10567752;
          result[3] += 13476308;
          result[4] += 3781122;
          result[5] += 8434811;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4294967;
          result[3] += 0;
          result[4] += 0;
          result[5] += 38654705;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 2996488;
          result[1] += 0;
          result[2] += 2996488;
          result[3] += 27967228;
          result[4] += 0;
          result[5] += 8989466;
        } else {
          result[0] += 4772185;
          result[1] += 3817748;
          result[2] += 23383710;
          result[3] += 7635497;
          result[4] += 477218;
          result[5] += 2863311;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 13563054;
          result[3] += 23735345;
          result[4] += 0;
          result[5] += 5651272;
        } else {
          result[0] += 4807799;
          result[1] += 961559;
          result[2] += 33975114;
          result[3] += 3205199;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 18407002;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 107508;
          result[1] += 0;
          result[2] += 41122027;
          result[3] += 1451365;
          result[4] += 0;
          result[5] += 268771;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 523776;
          result[1] += 3841027;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36140578;
          result[5] += 2444290;
        } else {
          result[0] += 22845570;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9138228;
          result[5] += 10965873;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 205500;
          result[1] += 205500;
          result[2] += 616502;
          result[3] += 3452413;
          result[4] += 3781215;
          result[5] += 34688539;
        } else {
          result[0] += 0;
          result[1] += 1186455;
          result[2] += 711873;
          result[3] += 27051175;
          result[4] += 0;
          result[5] += 14000169;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 882527;
          result[1] += 12649561;
          result[2] += 0;
          result[3] += 0;
          result[4] += 29417584;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 42444382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 505290;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 36554523;
          result[1] += 946028;
          result[2] += 151364;
          result[3] += 983869;
          result[4] += 3102971;
          result[5] += 1210915;
        } else {
          result[0] += 7818508;
          result[1] += 1042467;
          result[2] += 8860976;
          result[3] += 13343587;
          result[4] += 2918909;
          result[5] += 8965222;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1561806;
          result[3] += 3123612;
          result[4] += 2342709;
          result[5] += 35921544;
        } else {
          result[0] += 1160801;
          result[1] += 4875368;
          result[2] += 10447217;
          result[3] += 16251227;
          result[4] += 696481;
          result[5] += 9518576;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 2078209;
          result[1] += 0;
          result[2] += 38793252;
          result[3] += 1385473;
          result[4] += 0;
          result[5] += 692736;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 10737418;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 38654705;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4294967;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 249707;
          result[1] += 0;
          result[2] += 31962547;
          result[3] += 8490051;
          result[4] += 249707;
          result[5] += 1997659;
        } else {
          result[0] += 198534;
          result[1] += 0;
          result[2] += 41030504;
          result[3] += 1654455;
          result[4] += 0;
          result[5] += 66178;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 318145;
          result[1] += 477218;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41040798;
          result[5] += 1113510;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1719952;
          result[1] += 245707;
          result[2] += 147424;
          result[3] += 1867377;
          result[4] += 2309650;
          result[5] += 36659560;
        } else {
          result[0] += 2690152;
          result[1] += 1113166;
          result[2] += 1576985;
          result[3] += 18367246;
          result[4] += 2226332;
          result[5] += 16975788;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 5856773;
          result[2] += 0;
          result[3] += 3904515;
          result[4] += 33188383;
          result[5] += 0;
        } else {
          result[0] += 95656;
          result[1] += 41610484;
          result[2] += 0;
          result[3] += 478281;
          result[4] += 765250;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31452878;
          result[1] += 1404437;
          result[2] += 228629;
          result[3] += 1535083;
          result[4] += 6238317;
          result[5] += 2090326;
        } else {
          result[0] += 8927741;
          result[1] += 1689032;
          result[2] += 11340643;
          result[3] += 10858063;
          result[4] += 1930322;
          result[5] += 8203870;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 0;
          result[4] += 39645851;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 4955731;
          result[2] += 1651910;
          result[3] += 0;
          result[4] += 0;
          result[5] += 36342030;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 466844;
          result[1] += 1400532;
          result[2] += 10270573;
          result[3] += 22875369;
          result[4] += 0;
          result[5] += 7936352;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34001824;
          result[3] += 1789569;
          result[4] += 0;
          result[5] += 7158278;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 12271335;
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
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35414642;
          result[3] += 6530359;
          result[4] += 0;
          result[5] += 1004670;
        } else {
          result[0] += 178708;
          result[1] += 0;
          result[2] += 41579572;
          result[3] += 1012682;
          result[4] += 0;
          result[5] += 178708;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 825955;
          result[1] += 165191;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40967380;
          result[5] += 991146;
        } else {
          result[0] += 0;
          result[1] += 39370533;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1254441;
          result[4] += 1373911;
          result[5] += 40321320;
        } else {
          result[0] += 3284386;
          result[1] += 1684300;
          result[2] += 757935;
          result[3] += 15579783;
          result[4] += 2694881;
          result[5] += 18948385;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 976128;
          result[1] += 4229892;
          result[2] += 0;
          result[3] += 5531397;
          result[4] += 30259996;
          result[5] += 1952257;
        } else {
          result[0] += 185929;
          result[1] += 41927061;
          result[2] += 0;
          result[3] += 0;
          result[4] += 836681;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
          result[0] += 6781527;
          result[1] += 0;
          result[2] += 941878;
          result[3] += 6969903;
          result[4] += 6781527;
          result[5] += 21474836;
        } else {
          result[0] += 31669058;
          result[1] += 952452;
          result[2] += 2976415;
          result[3] += 3035943;
          result[4] += 3184764;
          result[5] += 1131037;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 2684354;
          result[2] += 2684354;
          result[3] += 5368709;
          result[4] += 2684354;
          result[5] += 29527900;
        } else {
          result[0] += 0;
          result[1] += 1385473;
          result[2] += 8312839;
          result[3] += 27709466;
          result[4] += 0;
          result[5] += 5541893;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8810189;
          result[3] += 6607641;
          result[4] += 1101273;
          result[5] += 26430567;
        } else {
          result[0] += 0;
          result[1] += 3639802;
          result[2] += 36398027;
          result[3] += 2183881;
          result[4] += 0;
          result[5] += 727960;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30805282;
          result[3] += 11255776;
          result[4] += 0;
          result[5] += 888613;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41518017;
          result[3] += 715827;
          result[4] += 0;
          result[5] += 715827;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1515870;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 5558192;
          result[4] += 0;
          result[5] += 1515870;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41937391;
          result[3] += 795364;
          result[4] += 0;
          result[5] += 216917;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 972445;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40194410;
          result[5] += 1782816;
        } else {
          result[0] += 0;
          result[1] += 36077725;
          result[2] += 0;
          result[3] += 0;
          result[4] += 6871947;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1288490;
          result[1] += 238609;
          result[2] += 0;
          result[3] += 1765708;
          result[4] += 2290649;
          result[5] += 37366215;
        } else {
          result[0] += 3894400;
          result[1] += 333805;
          result[2] += 778880;
          result[3] += 20250882;
          result[4] += 2225371;
          result[5] += 15466333;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 31949199;
          result[1] += 2869688;
          result[2] += 286968;
          result[3] += 956562;
          result[4] += 5324866;
          result[5] += 1562386;
        } else {
          result[0] += 7516192;
          result[1] += 843654;
          result[2] += 10507330;
          result[3] += 12041247;
          result[4] += 1840700;
          result[5] += 10200547;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 443924;
          result[1] += 41950843;
          result[2] += 0;
          result[3] += 110981;
          result[4] += 443924;
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
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5726623;
          result[3] += 25769803;
          result[4] += 0;
          result[5] += 11453246;
        } else {
          result[0] += 1789569;
          result[1] += 7158278;
          result[2] += 3579139;
          result[3] += 0;
          result[4] += 0;
          result[5] += 30422685;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3303820;
          result[3] += 19822925;
          result[4] += 3303820;
          result[5] += 16519104;
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 473709;
          result[1] += 0;
          result[2] += 35844028;
          result[3] += 6158225;
          result[4] += 0;
          result[5] += 473709;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30678337;
          result[3] += 0;
          result[4] += 0;
          result[5] += 12271335;
        } else {
          result[0] += 72427;
          result[1] += 0;
          result[2] += 42008111;
          result[3] += 651850;
          result[4] += 0;
          result[5] += 217283;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 582368;
          result[1] += 1164736;
          result[2] += 0;
          result[3] += 0;
          result[4] += 39601054;
          result[5] += 1601513;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 509956;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1416545;
          result[4] += 2266473;
          result[5] += 38756696;
        } else {
          result[0] += 3959288;
          result[1] += 86071;
          result[2] += 1549286;
          result[3] += 14890367;
          result[4] += 2840359;
          result[5] += 19624299;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 25141271;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14665741;
          result[5] += 3142658;
        } else {
          result[0] += 306054;
          result[1] += 42439581;
          result[2] += 0;
          result[3] += 102018;
          result[4] += 102018;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1544952;
          result[1] += 15449522;
          result[2] += 308990;
          result[3] += 0;
          result[4] += 24101255;
          result[5] += 1544952;
        } else {
          result[0] += 31650506;
          result[1] += 192599;
          result[2] += 1412395;
          result[3] += 3530989;
          result[4] += 3434689;
          result[5] += 2728491;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3711700;
          result[3] += 5832671;
          result[4] += 4241943;
          result[5] += 29163358;
        } else {
          result[0] += 459354;
          result[1] += 1148386;
          result[2] += 5052902;
          result[3] += 27790964;
          result[4] += 918709;
          result[5] += 7579354;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 2364202;
          result[1] += 1576134;
          result[2] += 22459920;
          result[3] += 11821010;
          result[4] += 1182101;
          result[5] += 3546303;
        } else {
          result[0] += 29283867;
          result[1] += 2928386;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14837159;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 10932644;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34598347;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 1193046;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 412977;
          result[1] += 0;
          result[2] += 36755008;
          result[3] += 5781686;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 138324;
          result[1] += 0;
          result[2] += 42050565;
          result[3] += 760783;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 565127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41819418;
          result[5] += 565127;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 733138;
          result[4] += 1221896;
          result[5] += 40994638;
        } else {
          result[0] += 3449113;
          result[1] += 1970921;
          result[2] += 246365;
          result[3] += 14781914;
          result[4] += 3859722;
          result[5] += 18641636;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 8830773;
          result[2] += 0;
          result[3] += 401398;
          result[4] += 32513303;
          result[5] += 1204196;
        } else {
          result[0] += 0;
          result[1] += 42843624;
          result[2] += 0;
          result[3] += 0;
          result[4] += 106048;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 16923270;
          result[1] += 1405181;
          result[2] += 1649560;
          result[3] += 6781527;
          result[4] += 6231673;
          result[5] += 9958459;
        } else {
          result[0] += 34716508;
          result[1] += 1509413;
          result[2] += 2195510;
          result[3] += 1417933;
          result[4] += 2561428;
          result[5] += 548877;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 39645851;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 3303820;
        } else {
          result[0] += 1263225;
          result[1] += 757935;
          result[2] += 7326708;
          result[3] += 18695739;
          result[4] += 1515870;
          result[5] += 13390192;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 2321603;
          result[1] += 0;
          result[2] += 30761252;
          result[3] += 6964811;
          result[4] += 580400;
          result[5] += 2321603;
        } else {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 8589934;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 2477865;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 24778657;
          result[4] += 0;
          result[5] += 4955731;
        } else {
          result[0] += 2863311;
          result[1] += 0;
          result[2] += 31496426;
          result[3] += 2863311;
          result[4] += 0;
          result[5] += 5726623;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 88556;
          result[1] += 0;
          result[2] += 39584543;
          result[3] += 2922348;
          result[4] += 0;
          result[5] += 354224;
        } else {
          result[0] += 711873;
          result[1] += 0;
          result[2] += 42119154;
          result[3] += 0;
          result[4] += 0;
          result[5] += 118645;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 373475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41829246;
          result[5] += 746950;
        } else {
          result[0] += 0;
          result[1] += 4210752;
          result[2] += 0;
          result[3] += 4210752;
          result[4] += 21895911;
          result[5] += 12632256;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1268312;
          result[4] += 2363673;
          result[5] += 39317687;
        } else {
          result[0] += 4377440;
          result[1] += 444088;
          result[2] += 507529;
          result[3] += 13068881;
          result[4] += 5075293;
          result[5] += 19476439;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
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
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 34679617;
          result[1] += 1794445;
          result[2] += 117029;
          result[3] += 819203;
          result[4] += 4993240;
          result[5] += 546135;
        } else {
          result[0] += 6492392;
          result[1] += 1398361;
          result[2] += 12385487;
          result[3] += 10487710;
          result[4] += 4594616;
          result[5] += 7591104;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427c0000))) ) ) {
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
          result[3] += 9544371;
          result[4] += 1193046;
          result[5] += 29826161;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8810189;
          result[3] += 29734388;
          result[4] += 0;
          result[5] += 4405094;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 4123168;
          result[1] += 687194;
          result[2] += 20959440;
          result[3] += 14774687;
          result[4] += 343597;
          result[5] += 2061584;
        } else {
          result[0] += 904203;
          result[1] += 904203;
          result[2] += 35942094;
          result[3] += 3842865;
          result[4] += 0;
          result[5] += 1356305;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19822925;
          result[3] += 9911462;
          result[4] += 0;
          result[5] += 13215283;
        } else {
          result[0] += 356922;
          result[1] += 0;
          result[2] += 41521982;
          result[3] += 1070767;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 22605091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 20344581;
          result[5] += 0;
        } else {
          result[0] += 301754;
          result[1] += 42647918;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 38654705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4294967;
          result[5] += 0;
        } else {
          result[0] += 1454277;
          result[1] += 1551229;
          result[2] += 0;
          result[3] += 581711;
          result[4] += 36938657;
          result[5] += 2423796;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1596794;
          result[1] += 655095;
          result[2] += 327547;
          result[3] += 2988871;
          result[4] += 1965285;
          result[5] += 35416079;
        } else {
          result[0] += 687194;
          result[1] += 343597;
          result[2] += 1717986;
          result[3] += 26285199;
          result[4] += 858993;
          result[5] += 13056700;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 20408709;
          result[1] += 1279351;
          result[2] += 2619625;
          result[3] += 9138228;
          result[4] += 3959898;
          result[5] += 5543858;
        } else {
          result[0] += 36238786;
          result[1] += 412977;
          result[2] += 2994087;
          result[3] += 309733;
          result[4] += 2581110;
          result[5] += 412977;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 913822;
          result[3] += 913822;
          result[4] += 913822;
          result[5] += 40208204;
        } else {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 23427094;
          result[3] += 0;
          result[4] += 9761289;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8180890;
          result[3] += 32723560;
          result[4] += 0;
          result[5] += 2045222;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36342030;
          result[3] += 0;
          result[4] += 0;
          result[5] += 6607641;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 3205199;
          result[2] += 14743917;
          result[3] += 19231196;
          result[4] += 0;
          result[5] += 5769359;
        } else {
          result[0] += 4825805;
          result[1] += 0;
          result[2] += 32332899;
          result[3] += 5790967;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 883738;
          result[1] += 0;
          result[2] += 36940253;
          result[3] += 4595438;
          result[4] += 0;
          result[5] += 530242;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41930793;
          result[3] += 1018879;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          result[0] += 511305;
          result[1] += 255652;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41671408;
          result[5] += 511305;
        } else {
          result[0] += 2603010;
          result[1] += 13015052;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9110536;
          result[5] += 18221073;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 448951;
          result[2] += 0;
          result[3] += 1596271;
          result[4] += 3541726;
          result[5] += 37362723;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1561806;
          result[3] += 33188383;
          result[4] += 0;
          result[5] += 8199483;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 29608592;
          result[1] += 1950953;
          result[2] += 0;
          result[3] += 1147619;
          result[4] += 7746433;
          result[5] += 2496073;
        } else {
          result[0] += 4317691;
          result[1] += 681740;
          result[2] += 10832104;
          result[3] += 13710565;
          result[4] += 1363481;
          result[5] += 12044088;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 394033;
          result[1] += 42161605;
          result[2] += 0;
          result[3] += 295525;
          result[4] += 98508;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4772185;
          result[4] += 7158278;
          result[5] += 31019208;
        } else {
          result[0] += 0;
          result[1] += 4685418;
          result[2] += 2342709;
          result[3] += 27331610;
          result[4] += 2342709;
          result[5] += 6247225;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 12884901;
        } else {
          result[0] += 1917396;
          result[1] += 0;
          result[2] += 27610504;
          result[3] += 11887855;
          result[4] += 0;
          result[5] += 1533916;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 36077725;
          result[1] += 0;
          result[2] += 1717986;
          result[3] += 1717986;
          result[4] += 0;
          result[5] += 3435973;
        } else {
          result[0] += 4643207;
          result[1] += 0;
          result[2] += 25537643;
          result[3] += 4062806;
          result[4] += 580400;
          result[5] += 8125613;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28362991;
          result[3] += 11345196;
          result[4] += 0;
          result[5] += 3241484;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40810632;
          result[3] += 2082749;
          result[4] += 0;
          result[5] += 56290;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 378411;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 40490000;
          result[5] += 2081261;
        } else {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 0;
          result[3] += 18407002;
          result[4] += 12271335;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 37443304;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5506368;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 92067;
          result[3] += 2439799;
          result[4] += 3268410;
          result[5] += 37149395;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 2985806;
          result[1] += 918709;
          result[2] += 1148386;
          result[3] += 11713547;
          result[4] += 689032;
          result[5] += 25494190;
        } else {
          result[0] += 0;
          result[1] += 723870;
          result[2] += 0;
          result[3] += 29919996;
          result[4] += 0;
          result[5] += 12305805;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 1472560;
          result[1] += 13743895;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27242363;
          result[5] += 490853;
        } else {
          result[0] += 0;
          result[1] += 42634638;
          result[2] += 0;
          result[3] += 0;
          result[4] += 315034;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 37350876;
          result[1] += 805306;
          result[2] += 306783;
          result[3] += 1035393;
          result[4] += 2722702;
          result[5] += 728610;
        } else {
          result[0] += 8066689;
          result[1] += 872074;
          result[2] += 5014428;
          result[3] += 11336969;
          result[4] += 8502727;
          result[5] += 9156783;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3463683;
          result[3] += 9005576;
          result[4] += 2770946;
          result[5] += 27709466;
        } else {
          result[0] += 802797;
          result[1] += 2809791;
          result[2] += 13045461;
          result[3] += 16858750;
          result[4] += 2207693;
          result[5] += 7225178;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 1285276;
          result[1] += 0;
          result[2] += 34595372;
          result[3] += 5997959;
          result[4] += 0;
          result[5] += 1071064;
        } else {
          result[0] += 1746447;
          result[1] += 0;
          result[2] += 40362343;
          result[3] += 840882;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 624268;
          result[1] += 499414;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41076867;
          result[5] += 749122;
        } else {
          result[0] += 1073741;
          result[1] += 34359738;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7516192;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36814005;
          result[5] += 0;
        } else {
          result[0] += 491415;
          result[1] += 42163408;
          result[2] += 0;
          result[3] += 0;
          result[4] += 294849;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 184333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 798777;
          result[4] += 1228889;
          result[5] += 40737672;
        } else {
          result[0] += 1580088;
          result[1] += 0;
          result[2] += 287288;
          result[3] += 9911462;
          result[4] += 6894930;
          result[5] += 24275902;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 32717353;
          result[1] += 1238306;
          result[2] += 456218;
          result[3] += 2281090;
          result[4] += 3682331;
          result[5] += 2574373;
        } else {
          result[0] += 6023906;
          result[1] += 1095255;
          result[2] += 6023906;
          result[3] += 14629487;
          result[4] += 1564651;
          result[5] += 13612464;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6285317;
          result[3] += 33521695;
          result[4] += 0;
          result[5] += 3142658;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24051816;
          result[3] += 15461882;
          result[4] += 0;
          result[5] += 3435973;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 20344581;
          result[3] += 6781527;
          result[4] += 0;
          result[5] += 15823563;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36342030;
          result[3] += 4625349;
          result[4] += 0;
          result[5] += 1982292;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 1952257;
          result[1] += 0;
          result[2] += 20498707;
          result[3] += 16594191;
          result[4] += 976128;
          result[5] += 2928386;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38281230;
          result[3] += 2801065;
          result[4] += 0;
          result[5] += 1867377;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 645486;
          result[1] += 0;
          result[2] += 40566338;
          result[3] += 1489584;
          result[4] += 0;
          result[5] += 248264;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 144126;
          result[1] += 432379;
          result[2] += 0;
          result[3] += 1153011;
          result[4] += 35887478;
          result[5] += 5332677;
        } else {
          result[0] += 0;
          result[1] += 34690120;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8259552;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 338719;
          result[3] += 1151647;
          result[4] += 1422623;
          result[5] += 40036682;
        } else {
          result[0] += 3142658;
          result[1] += 0;
          result[2] += 448951;
          result[3] += 14216790;
          result[4] += 4115386;
          result[5] += 21025885;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 23008753;
          result[2] += 0;
          result[3] += 10737418;
          result[4] += 9203501;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 33185279;
          result[1] += 1946050;
          result[2] += 341412;
          result[3] += 1092519;
          result[4] += 4745631;
          result[5] += 1638779;
        } else {
          result[0] += 10146367;
          result[1] += 1576134;
          result[2] += 7191114;
          result[3] += 10835926;
          result[4] += 2659727;
          result[5] += 10540401;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4026531;
          result[3] += 34896609;
          result[4] += 0;
          result[5] += 4026531;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17448304;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 4026531;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12025908;
          result[3] += 10307921;
          result[4] += 1717986;
          result[5] += 18897856;
        } else {
          result[0] += 2008437;
          result[1] += 0;
          result[2] += 33988949;
          result[3] += 6643294;
          result[4] += 0;
          result[5] += 308990;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 9544371;
          result[1] += 0;
          result[2] += 33405301;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38701903;
          result[3] += 3775795;
          result[4] += 0;
          result[5] += 471974;
        } else {
          result[0] += 153391;
          result[1] += 0;
          result[2] += 42642889;
          result[3] += 153391;
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
