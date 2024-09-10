
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 1550529;
          result[1] += 0;
          result[2] += 0;
          result[3] += 775264;
          result[4] += 196917273;
          result[5] += 15505297;
        } else {
          result[0] += 0;
          result[1] += 171798691;
          result[2] += 0;
          result[3] += 28633115;
          result[4] += 14316557;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 302462;
          result[1] += 0;
          result[2] += 302462;
          result[3] += 4839399;
          result[4] += 5746787;
          result[5] += 203557252;
        } else {
          result[0] += 25612190;
          result[1] += 7552312;
          result[2] += 6895589;
          result[3] += 69940981;
          result[4] += 14776263;
          result[5] += 89971027;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x424a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 173080771;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41667593;
          result[5] += 0;
        } else {
          result[0] += 2670999;
          result[1] += 207803765;
          result[2] += 534199;
          result[3] += 0;
          result[4] += 3739399;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 19108964;
          result[1] += 70066203;
          result[2] += 0;
          result[3] += 5459704;
          result[4] += 111013985;
          result[5] += 9099506;
        } else {
          result[0] += 147502343;
          result[1] += 1410755;
          result[2] += 17242569;
          result[3] += 21318085;
          result[4] += 13167053;
          result[5] += 14107556;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5965232;
          result[3] += 172991738;
          result[4] += 0;
          result[5] += 35791394;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44430696;
          result[5] += 170317668;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 158022381;
          result[3] += 24311135;
          result[4] += 0;
          result[5] += 32414847;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 77175193;
          result[3] += 114085068;
          result[4] += 0;
          result[5] += 23488102;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 174059200;
          result[3] += 31647127;
          result[4] += 0;
          result[5] += 9042036;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 57266230;
          result[1] += 14316557;
          result[2] += 85899345;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2150171;
          result[1] += 0;
          result[2] += 204266279;
          result[3] += 8063142;
          result[4] += 0;
          result[5] += 268771;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
          result[0] += 869426;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 205184672;
          result[5] += 8694265;
        } else {
          result[0] += 0;
          result[1] += 190887435;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2678267;
          result[1] += 486957;
          result[2] += 486957;
          result[3] += 8034802;
          result[4] += 9982633;
          result[5] += 193078745;
        } else {
          result[0] += 13695686;
          result[1] += 7121756;
          result[2] += 3286964;
          result[3] += 90391531;
          result[4] += 9313066;
          result[5] += 90939358;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 200431807;
          result[5] += 14316557;
        } else {
          result[0] += 969518;
          result[1] += 211355049;
          result[2] += 969518;
          result[3] += 0;
          result[4] += 1454277;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 161356026;
          result[1] += 9095224;
          result[2] += 336860;
          result[3] += 2694881;
          result[4] += 31327996;
          result[5] += 9937375;
        } else {
          result[0] += 49521713;
          result[1] += 10182034;
          result[2] += 39339678;
          result[3] += 56464009;
          result[4] += 10182034;
          result[5] += 49058893;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12820797;
          result[3] += 163465173;
          result[4] += 0;
          result[5] += 38462393;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 77309411;
          result[3] += 103079215;
          result[4] += 0;
          result[5] += 34359738;
        } else {
          result[0] += 11608019;
          result[1] += 0;
          result[2] += 185728315;
          result[3] += 11608019;
          result[4] += 0;
          result[5] += 5804009;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59652323;
          result[3] += 131235111;
          result[4] += 0;
          result[5] += 23860929;
        } else {
          result[0] += 5804009;
          result[1] += 0;
          result[2] += 168316285;
          result[3] += 17412029;
          result[4] += 0;
          result[5] += 23216039;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 148671944;
          result[3] += 66076419;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2921746;
          result[1] += 0;
          result[2] += 202330942;
          result[3] += 7304366;
          result[4] += 0;
          result[5] += 2191309;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 2753184;
          result[1] += 2753184;
          result[2] += 0;
          result[3] += 917728;
          result[4] += 200064715;
          result[5] += 8259552;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 11713547;
          result[2] += 0;
          result[3] += 0;
          result[4] += 62472251;
          result[5] += 140562566;
        } else {
          result[0] += 163208757;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 28633115;
          result[5] += 8589934;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13421772;
          result[4] += 127506841;
          result[5] += 73819750;
        } else {
          result[0] += 652069;
          result[1] += 1086783;
          result[2] += 1521496;
          result[3] += 19996811;
          result[4] += 11085188;
          result[5] += 180406014;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 7158278;
          result[4] += 7158278;
          result[5] += 171798691;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 168730858;
          result[4] += 0;
          result[5] += 41927061;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 214228392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 519971;
          result[5] += 0;
        } else {
          result[0] += 4536937;
          result[1] += 55955559;
          result[2] += 0;
          result[3] += 0;
          result[4] += 154255867;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 192010302;
          result[1] += 2137766;
          result[2] += 194342;
          result[3] += 2526451;
          result[4] += 12632256;
          result[5] += 5247245;
        } else {
          result[0] += 82902857;
          result[1] += 6991807;
          result[2] += 26968399;
          result[3] += 51939139;
          result[4] += 2996488;
          result[5] += 42949672;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 43122161;
          result[3] += 81069663;
          result[4] += 10349318;
          result[5] += 80207220;
        } else {
          result[0] += 0;
          result[1] += 182536110;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 1027504;
          result[1] += 0;
          result[2] += 164400662;
          result[3] += 46237686;
          result[4] += 0;
          result[5] += 3082512;
        } else {
          result[0] += 5074899;
          result[1] += 0;
          result[2] += 200859167;
          result[3] += 7745898;
          result[4] += 0;
          result[5] += 1068399;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 5592405;
          result[2] += 0;
          result[3] += 0;
          result[4] += 209155959;
          result[5] += 0;
        } else {
          result[0] += 9761289;
          result[1] += 14641933;
          result[2] += 0;
          result[3] += 19522578;
          result[4] += 87851603;
          result[5] += 82970959;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 8632042;
          result[1] += 1894838;
          result[2] += 0;
          result[3] += 8842579;
          result[4] += 13263869;
          result[5] += 182115034;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 124096391;
          result[4] += 10561394;
          result[5] += 80090578;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 4853070;
          result[1] += 55810309;
          result[2] += 0;
          result[3] += 0;
          result[4] += 149231914;
          result[5] += 4853070;
        } else {
          result[0] += 0;
          result[1] += 212335461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2412902;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 177455653;
          result[1] += 5224582;
          result[2] += 0;
          result[3] += 4684108;
          result[4] += 21078488;
          result[5] += 6305530;
        } else {
          result[0] += 27033925;
          result[1] += 1903797;
          result[2] += 66632914;
          result[3] += 67775193;
          result[4] += 4569114;
          result[5] += 46833419;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 171798691;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 69918072;
          result[3] += 119859552;
          result[4] += 0;
          result[5] += 24970740;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 171798691;
        } else {
          result[0] += 5237764;
          result[1] += 5237764;
          result[2] += 175465127;
          result[3] += 10475529;
          result[4] += 0;
          result[5] += 18332177;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 989623;
          result[1] += 0;
          result[2] += 186049274;
          result[3] += 25730218;
          result[4] += 0;
          result[5] += 1979247;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 199702300;
          result[3] += 12310415;
          result[4] += 0;
          result[5] += 2735647;
        } else {
          result[0] += 497102;
          result[1] += 0;
          result[2] += 213754159;
          result[3] += 497102;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 909950;
          result[1] += 16379112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 195639400;
          result[5] += 1819901;
        } else {
          result[0] += 81207364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 55942851;
          result[5] += 77598148;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 790484;
          result[1] += 790484;
          result[2] += 2898444;
          result[3] += 9749312;
          result[4] += 11593776;
          result[5] += 188925861;
        } else {
          result[0] += 1765055;
          result[1] += 4706813;
          result[2] += 0;
          result[3] += 101196489;
          result[4] += 14120440;
          result[5] += 92959566;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 165191049;
          result[1] += 12271335;
          result[2] += 471974;
          result[3] += 2359872;
          result[4] += 27689166;
          result[5] += 6764966;
        } else {
          result[0] += 39249048;
          result[1] += 5046306;
          result[2] += 40370449;
          result[3] += 64480579;
          result[4] += 4485605;
          result[5] += 61116375;
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
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24778657;
          result[3] += 49557314;
          result[4] += 0;
          result[5] += 140412392;
        } else {
          result[0] += 5436667;
          result[1] += 0;
          result[2] += 62521675;
          result[3] += 133198352;
          result[4] += 0;
          result[5] += 13591668;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 47721858;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 95443717;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 188100757;
          result[3] += 18810075;
          result[4] += 0;
          result[5] += 7837531;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 66076419;
          result[3] += 123893287;
          result[4] += 0;
          result[5] += 24778657;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 184070026;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          result[0] += 102261126;
          result[1] += 0;
          result[2] += 102261126;
          result[3] += 0;
          result[4] += 10226112;
          result[5] += 0;
        } else {
          result[0] += 854436;
          result[1] += 0;
          result[2] += 206488812;
          result[3] += 6835491;
          result[4] += 0;
          result[5] += 569624;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 1342177;
          result[1] += 671088;
          result[2] += 0;
          result[3] += 671088;
          result[4] += 205353123;
          result[5] += 6710886;
        } else {
          result[0] += 0;
          result[1] += 198229259;
          result[2] += 0;
          result[3] += 0;
          result[4] += 16519104;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
          result[0] += 170317668;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44430696;
          result[5] += 0;
        } else {
          result[0] += 1516890;
          result[1] += 0;
          result[2] += 3033781;
          result[3] += 18852782;
          result[4] += 14518809;
          result[5] += 176826100;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 12632256;
          result[2] += 0;
          result[3] += 0;
          result[4] += 202116108;
          result[5] += 0;
        } else {
          result[0] += 967334;
          result[1] += 209428022;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4353007;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 167948489;
          result[1] += 7136151;
          result[2] += 165957;
          result[3] += 6472323;
          result[4] += 16595700;
          result[5] += 16429743;
        } else {
          result[0] += 21614283;
          result[1] += 348617;
          result[2] += 43228566;
          result[3] += 90989161;
          result[4] += 7320966;
          result[5] += 51246768;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 47721858;
          result[4] += 4772185;
          result[5] += 133621204;
        } else {
          result[0] += 0;
          result[1] += 18332177;
          result[2] += 57615414;
          result[3] += 112611947;
          result[4] += 0;
          result[5] += 26188824;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 25769803;
          result[1] += 0;
          result[2] += 154618822;
          result[3] += 0;
          result[4] += 8589934;
          result[5] += 25769803;
        } else {
          result[0] += 113025455;
          result[1] += 0;
          result[2] += 96071636;
          result[3] += 0;
          result[4] += 0;
          result[5] += 5651272;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 138635020;
          result[3] += 67958343;
          result[4] += 0;
          result[5] += 8155001;
        } else {
          result[0] += 3660483;
          result[1] += 0;
          result[2] += 186684657;
          result[3] += 21962900;
          result[4] += 0;
          result[5] += 2440322;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 214748364;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 211776069;
          result[3] += 2972295;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2191309;
          result[1] += 4382619;
          result[2] += 0;
          result[3] += 1460873;
          result[4] += 192104829;
          result[5] += 14608732;
        } else {
          result[0] += 148046221;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1626881;
          result[4] += 26030104;
          result[5] += 39045157;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 224397;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9873488;
          result[4] += 15483424;
          result[5] += 189167054;
        } else {
          result[0] += 1022611;
          result[1] += 3579139;
          result[2] += 4090445;
          result[3] += 115043766;
          result[4] += 12271335;
          result[5] += 78741067;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 100663295;
          result[2] += 0;
          result[3] += 0;
          result[4] += 114085068;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 214239482;
          result[2] += 0;
          result[3] += 0;
          result[4] += 508882;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 100838362;
          result[1] += 8091967;
          result[2] += 24898361;
          result[3] += 29878033;
          result[4] += 28633115;
          result[5] += 22408525;
        } else {
          result[0] += 183764769;
          result[1] += 12820797;
          result[2] += 8280098;
          result[3] += 267099;
          result[4] += 9081398;
          result[5] += 534199;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41122027;
          result[3] += 68536712;
          result[4] += 15991899;
          result[5] += 89097725;
        } else {
          result[0] += 5856773;
          result[1] += 8785160;
          result[2] += 148371597;
          result[3] += 40021286;
          result[4] += 0;
          result[5] += 11713547;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 161061273;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 5965232;
        } else {
          result[0] += 5471295;
          result[1] += 0;
          result[2] += 198334476;
          result[3] += 10942591;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 207820998;
          result[3] += 6927366;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 780903;
          result[1] += 1561806;
          result[2] += 0;
          result[3] += 0;
          result[4] += 204596623;
          result[5] += 7809031;
        } else {
          result[0] += 0;
          result[1] += 202817900;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11930464;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6681060;
          result[4] += 8589934;
          result[5] += 199477369;
        } else {
          result[0] += 22171660;
          result[1] += 0;
          result[2] += 7601712;
          result[3] += 65248028;
          result[4] += 20271232;
          result[5] += 99455732;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 29475265;
          result[2] += 8421504;
          result[3] += 33686018;
          result[4] += 143165576;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 204171892;
          result[2] += 0;
          result[3] += 459846;
          result[4] += 5518159;
          result[5] += 4598466;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 178363052;
          result[1] += 2813297;
          result[2] += 0;
          result[3] += 3563509;
          result[4] += 23631697;
          result[5] += 6376807;
        } else {
          result[0] += 46491914;
          result[1] += 7195177;
          result[2] += 58668367;
          result[3] += 50919715;
          result[4] += 12176453;
          result[5] += 39296736;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24465003;
          result[3] += 54366674;
          result[4] += 2718333;
          result[5] += 133198352;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 193273528;
          result[3] += 0;
          result[4] += 0;
          result[5] += 21474836;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 7218432;
          result[1] += 5413824;
          result[2] += 128127175;
          result[3] += 57747459;
          result[4] += 3609216;
          result[5] += 12632256;
        } else {
          result[0] += 189969707;
          result[1] += 0;
          result[2] += 24778657;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15339168;
          result[3] += 76695844;
          result[4] += 0;
          result[5] += 122713351;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 181710154;
          result[3] += 33038209;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 1403584;
          result[1] += 4210752;
          result[2] += 169833674;
          result[3] += 32282433;
          result[4] += 0;
          result[5] += 7017920;
        } else {
          result[0] += 308103;
          result[1] += 0;
          result[2] += 206429561;
          result[3] += 7086387;
          result[4] += 0;
          result[5] += 924311;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 0;
          result[1] += 4719744;
          result[2] += 0;
          result[3] += 0;
          result[4] += 204522252;
          result[5] += 5506368;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 284434;
          result[2] += 1991044;
          result[3] += 5119828;
          result[4] += 9670787;
          result[5] += 197682269;
        } else {
          result[0] += 21069650;
          result[1] += 2836299;
          result[2] += 5672598;
          result[3] += 75364520;
          result[4] += 23500764;
          result[5] += 86304531;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 67108863;
          result[2] += 0;
          result[3] += 0;
          result[4] += 147639500;
          result[5] += 0;
        } else {
          result[0] += 492542;
          result[1] += 214255822;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 168693896;
          result[1] += 7934477;
          result[2] += 1552397;
          result[3] += 5519636;
          result[4] += 24493387;
          result[5] += 6554568;
        } else {
          result[0] += 41943039;
          result[1] += 0;
          result[2] += 40265318;
          result[3] += 67108863;
          result[4] += 22649241;
          result[5] += 42781900;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2497074;
          result[3] += 27467814;
          result[4] += 4994148;
          result[5] += 179789328;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 214748364;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 4569114;
          result[2] += 43406584;
          result[3] += 150780766;
          result[4] += 0;
          result[5] += 15991899;
        } else {
          result[0] += 9023040;
          result[1] += 19850689;
          result[2] += 99253445;
          result[3] += 30678337;
          result[4] += 12632256;
          result[5] += 43310594;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 10226112;
          result[1] += 0;
          result[2] += 122713351;
          result[3] += 81808900;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 157482134;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 168879781;
          result[3] += 39613776;
          result[4] += 0;
          result[5] += 6254806;
        } else {
          result[0] += 845466;
          result[1] += 0;
          result[2] += 202630018;
          result[3] += 9018304;
          result[4] += 0;
          result[5] += 2254576;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1789569;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 201326591;
          result[5] += 11632203;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 183251937;
          result[1] += 5726623;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 8589934;
        } else {
          result[0] += 6410398;
          result[1] += 16025997;
          result[2] += 6410398;
          result[3] += 9615598;
          result[4] += 115387181;
          result[5] += 60898790;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 91105366;
          result[2] += 0;
          result[3] += 6507526;
          result[4] += 78090314;
          result[5] += 39045157;
        } else {
          result[0] += 2037944;
          result[1] += 764229;
          result[2] += 254743;
          result[3] += 9170748;
          result[4] += 8151776;
          result[5] += 194368923;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40689163;
          result[4] += 0;
          result[5] += 174059200;
        } else {
          result[0] += 3186177;
          result[1] += 2548942;
          result[2] += 12744710;
          result[3] += 127447100;
          result[4] += 4460648;
          result[5] += 64360785;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 30678337;
          result[2] += 0;
          result[3] += 0;
          result[4] += 163617801;
          result[5] += 20452225;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 203140345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11608019;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
          result[0] += 50810997;
          result[1] += 29719639;
          result[2] += 0;
          result[3] += 0;
          result[4] += 130382935;
          result[5] += 3834792;
        } else {
          result[0] += 194872258;
          result[1] += 1080223;
          result[2] += 1728357;
          result[3] += 7777606;
          result[4] += 6481338;
          result[5] += 2808580;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 6979321;
          result[1] += 8589934;
          result[2] += 43486543;
          result[3] += 65498251;
          result[4] += 17716740;
          result[5] += 72477573;
        } else {
          result[0] += 8476909;
          result[1] += 0;
          result[2] += 191739611;
          result[3] += 11504376;
          result[4] += 0;
          result[5] += 3027467;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1835456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 205571084;
          result[5] += 7341824;
        } else {
          result[0] += 170535466;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25264513;
          result[5] += 18948385;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 1363481;
          result[2] += 0;
          result[3] += 10453359;
          result[4] += 18861496;
          result[5] += 184070026;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 139789029;
          result[4] += 4051855;
          result[5] += 70907478;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 187904819;
          result[5] += 0;
        } else {
          result[0] += 998829;
          result[1] += 211751875;
          result[2] += 1498244;
          result[3] += 0;
          result[4] += 499414;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 167944233;
          result[1] += 13765920;
          result[2] += 367091;
          result[3] += 5139277;
          result[4] += 25879931;
          result[5] += 1651910;
        } else {
          result[0] += 39459063;
          result[1] += 758828;
          result[2] += 38700235;
          result[3] += 47806173;
          result[4] += 20488359;
          result[5] += 67535704;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 1970168;
          result[1] += 33492864;
          result[2] += 7880673;
          result[3] += 15761347;
          result[4] += 39403369;
          result[5] += 116239940;
        } else {
          result[0] += 1544952;
          result[1] += 3089904;
          result[2] += 3089904;
          result[3] += 162219987;
          result[4] += 0;
          result[5] += 44803615;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 6817408;
          result[1] += 0;
          result[2] += 73287140;
          result[3] += 103965478;
          result[4] += 0;
          result[5] += 30678337;
        } else {
          result[0] += 39443577;
          result[1] += 0;
          result[2] += 146817759;
          result[3] += 21913098;
          result[4] += 4382619;
          result[5] += 2191309;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57816867;
          result[3] += 41297762;
          result[4] += 0;
          result[5] += 115633734;
        } else {
          result[0] += 7669584;
          result[1] += 0;
          result[2] += 168730858;
          result[3] += 23008753;
          result[4] += 0;
          result[5] += 15339168;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 180840728;
          result[1] += 0;
          result[2] += 22605091;
          result[3] += 0;
          result[4] += 11302545;
          result[5] += 0;
        } else {
          result[0] += 1177348;
          result[1] += 0;
          result[2] += 199678304;
          result[3] += 13421772;
          result[4] += 0;
          result[5] += 470939;
        }
      }
    }
  }
  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
          result[0] += 6593151;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 202503940;
          result[5] += 5651272;
        } else {
          result[0] += 94359129;
          result[1] += 22776341;
          result[2] += 0;
          result[3] += 0;
          result[4] += 87851603;
          result[5] += 9761289;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 200431807;
        } else {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 144955146;
          result[5] += 59055800;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 156931497;
          result[2] += 0;
          result[3] += 16519104;
          result[4] += 41297762;
          result[5] += 0;
        } else {
          result[0] += 229923;
          result[1] += 1839386;
          result[2] += 4138619;
          result[3] += 18163940;
          result[4] += 7127622;
          result[5] += 183248872;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4994148;
          result[3] += 152820929;
          result[4] += 0;
          result[5] += 56933287;
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
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 8659208;
          result[1] += 45027882;
          result[2] += 0;
          result[3] += 1731841;
          result[4] += 157597590;
          result[5] += 1731841;
        } else {
          result[0] += 0;
          result[1] += 210718234;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4030130;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          result[0] += 45323775;
          result[1] += 2158275;
          result[2] += 3237412;
          result[3] += 47482050;
          result[4] += 24820162;
          result[5] += 91726688;
        } else {
          result[0] += 173489623;
          result[1] += 6425541;
          result[2] += 5749168;
          result[3] += 7947380;
          result[4] += 16909320;
          result[5] += 4227330;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 5013580;
          result[2] += 27574692;
          result[3] += 94422432;
          result[4] += 13369548;
          result[5] += 74368110;
        } else {
          result[0] += 2718333;
          result[1] += 0;
          result[2] += 157663356;
          result[3] += 10873334;
          result[4] += 21746669;
          result[5] += 21746669;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 15932943;
          result[1] += 2078209;
          result[2] += 150323855;
          result[3] += 37407779;
          result[4] += 0;
          result[5] += 9005576;
        } else {
          result[0] += 323416;
          result[1] += 970248;
          result[2] += 203105381;
          result[3] += 9055653;
          result[4] += 0;
          result[5] += 1293664;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1486147;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 204345329;
          result[5] += 8916887;
        } else {
          result[0] += 82244054;
          result[1] += 18276456;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47975698;
          result[5] += 66252155;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 953025;
          result[3] += 6353501;
          result[4] += 6035826;
          result[5] += 201406010;
        } else {
          result[0] += 0;
          result[1] += 5015354;
          result[2] += 7751002;
          result[3] += 75230318;
          result[4] += 14590122;
          result[5] += 112161566;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 50107951;
          result[2] += 0;
          result[3] += 0;
          result[4] += 164640412;
          result[5] += 0;
        } else {
          result[0] += 493674;
          result[1] += 213267341;
          result[2] += 0;
          result[3] += 0;
          result[4] += 987348;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 165767868;
          result[1] += 8136825;
          result[2] += 2393183;
          result[3] += 6541369;
          result[4] += 28399115;
          result[5] += 3510002;
        } else {
          result[0] += 32940752;
          result[1] += 3800856;
          result[2] += 39275512;
          result[3] += 65248028;
          result[4] += 18370804;
          result[5] += 55112412;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 11012736;
          result[2] += 2753184;
          result[3] += 33038209;
          result[4] += 8259552;
          result[5] += 159684681;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 196852667;
          result[5] += 17895697;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 1900428;
          result[1] += 3800856;
          result[2] += 53211984;
          result[3] += 131129532;
          result[4] += 0;
          result[5] += 24705564;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 152502461;
          result[3] += 49796722;
          result[4] += 0;
          result[5] += 12449180;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 122713351;
          result[1] += 0;
          result[2] += 81808900;
          result[3] += 0;
          result[4] += 0;
          result[5] += 10226112;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 158727052;
          result[3] += 46684427;
          result[4] += 0;
          result[5] += 9336885;
        } else {
          result[0] += 1425951;
          result[1] += 0;
          result[2] += 203911129;
          result[3] += 7129759;
          result[4] += 0;
          result[5] += 2281523;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 4754576;
          result[2] += 0;
          result[3] += 792429;
          result[4] += 201277065;
          result[5] += 7924293;
        } else {
          result[0] += 0;
          result[1] += 167772159;
          result[2] += 0;
          result[3] += 40265318;
          result[4] += 6710886;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4933408;
          result[4] += 6964811;
          result[5] += 202850144;
        } else {
          result[0] += 17792253;
          result[1] += 0;
          result[2] += 1241320;
          result[3] += 76134295;
          result[4] += 27309040;
          result[5] += 92271455;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 65358197;
          result[2] += 0;
          result[3] += 0;
          result[4] += 149390166;
          result[5] += 0;
        } else {
          result[0] += 1115575;
          result[1] += 213075000;
          result[2] += 0;
          result[3] += 0;
          result[4] += 557787;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 162133366;
          result[1] += 7092303;
          result[2] += 3133808;
          result[3] += 6762429;
          result[4] += 21771723;
          result[5] += 13854733;
        } else {
          result[0] += 30902813;
          result[1] += 9951753;
          result[2] += 61805626;
          result[3] += 52377649;
          result[4] += 10475529;
          result[5] += 49234990;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 15907286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 103397360;
          result[5] += 95443717;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 45845156;
          result[3] += 135122566;
          result[4] += 0;
          result[5] += 33780641;
        } else {
          result[0] += 3520464;
          result[1] += 0;
          result[2] += 161941389;
          result[3] += 35204649;
          result[4] += 0;
          result[5] += 14081859;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 23216039;
          result[2] += 29020049;
          result[3] += 58040098;
          result[4] += 0;
          result[5] += 104472177;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 894784;
          result[1] += 1342177;
          result[2] += 182983502;
          result[3] += 26843545;
          result[4] += 1342177;
          result[5] += 1342177;
        } else {
          result[0] += 4159774;
          result[1] += 519971;
          result[2] += 208508702;
          result[3] += 1559915;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 1843333;
          result[1] += 921666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 210140030;
          result[5] += 1843333;
        } else {
          result[0] += 107374182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 65029434;
          result[5] += 42344747;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 728784;
          result[2] += 0;
          result[3] += 13118112;
          result[4] += 11174688;
          result[5] += 189726779;
        } else {
          result[0] += 0;
          result[1] += 3504052;
          result[2] += 1501736;
          result[3] += 97112314;
          result[4] += 14016210;
          result[5] += 98614050;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 47721858;
          result[4] += 167026505;
          result[5] += 0;
        } else {
          result[0] += 500578;
          result[1] += 212245470;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2002315;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 98678385;
          result[1] += 16635436;
          result[2] += 22873725;
          result[3] += 26843545;
          result[4] += 32703756;
          result[5] += 17013514;
        } else {
          result[0] += 199608405;
          result[1] += 0;
          result[2] += 8366819;
          result[3] += 0;
          result[4] += 5577879;
          result[5] += 1195259;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 187904819;
          result[5] += 26843545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6507526;
          result[4] += 0;
          result[5] += 208240838;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 12485370;
          result[2] += 49941480;
          result[3] += 104877108;
          result[4] += 12485370;
          result[5] += 34959036;
        } else {
          result[0] += 15339168;
          result[1] += 0;
          result[2] += 127826407;
          result[3] += 15339168;
          result[4] += 0;
          result[5] += 56243619;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 13421772;
          result[1] += 0;
          result[2] += 140928614;
          result[3] += 40265318;
          result[4] += 6710886;
          result[5] += 13421772;
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 913822;
          result[1] += 0;
          result[2] += 194187351;
          result[3] += 19190279;
          result[4] += 0;
          result[5] += 456911;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 213524727;
          result[3] += 1223637;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 2296773;
          result[2] += 0;
          result[3] += 0;
          result[4] += 210154816;
          result[5] += 2296773;
        } else {
          result[0] += 5506368;
          result[1] += 22025473;
          result[2] += 0;
          result[3] += 49557314;
          result[4] += 33038209;
          result[5] += 104620998;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 4326849;
          result[1] += 683186;
          result[2] += 455457;
          result[3] += 7515054;
          result[4] += 16396481;
          result[5] += 185371335;
        } else {
          result[0] += 5162220;
          result[1] += 0;
          result[2] += 3097332;
          result[3] += 98082185;
          result[4] += 5162220;
          result[5] += 103244406;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 101408950;
          result[2] += 0;
          result[3] += 0;
          result[4] += 113339414;
          result[5] += 0;
        } else {
          result[0] += 962997;
          result[1] += 213785367;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 155626090;
          result[1] += 10010120;
          result[2] += 1251265;
          result[3] += 8289630;
          result[4] += 32220075;
          result[5] += 7351182;
        } else {
          result[0] += 29927267;
          result[1] += 2022112;
          result[2] += 49339548;
          result[3] += 65516450;
          result[4] += 25074197;
          result[5] += 42868788;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 20648881;
          result[1] += 8259552;
          result[2] += 12389328;
          result[3] += 12389328;
          result[4] += 33038209;
          result[5] += 128023063;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 155692564;
          result[4] += 0;
          result[5] += 48318382;
        } else {
          result[0] += 0;
          result[1] += 3205199;
          result[2] += 115387181;
          result[3] += 73719587;
          result[4] += 0;
          result[5] += 22436396;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6607641;
          result[1] += 0;
          result[2] += 173120220;
          result[3] += 31716681;
          result[4] += 0;
          result[5] += 3303820;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 157482134;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 210461192;
          result[3] += 4287172;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 8558811;
          result[2] += 0;
          result[3] += 0;
          result[4] += 203077257;
          result[5] += 3112295;
        } else {
          result[0] += 120089546;
          result[1] += 1412818;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42384545;
          result[5] += 50861454;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4116582;
          result[4] += 4802679;
          result[5] += 205829103;
        } else {
          result[0] += 3920355;
          result[1] += 6533925;
          result[2] += 5227140;
          result[3] += 48351051;
          result[4] += 24828918;
          result[5] += 125886972;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 55418932;
          result[2] += 0;
          result[3] += 0;
          result[4] += 159329431;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 214292423;
          result[2] += 0;
          result[3] += 0;
          result[4] += 455941;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 167755535;
          result[1] += 6738594;
          result[2] += 354662;
          result[3] += 6383931;
          result[4] += 22343760;
          result[5] += 11171880;
        } else {
          result[0] += 36361774;
          result[1] += 2994499;
          result[2] += 47484200;
          result[3] += 80423690;
          result[4] += 5561212;
          result[5] += 41922987;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 12632256;
          result[2] += 0;
          result[3] += 25264513;
          result[4] += 0;
          result[5] += 176851594;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 174980149;
          result[4] += 7953643;
          result[5] += 7953643;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8947848;
          result[3] += 8947848;
          result[4] += 53687091;
          result[5] += 143165576;
        } else {
          result[0] += 14159232;
          result[1] += 4719744;
          result[2] += 141592328;
          result[3] += 42477698;
          result[4] += 4719744;
          result[5] += 7079616;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 87851603;
          result[3] += 107374182;
          result[4] += 0;
          result[5] += 19522578;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 198229259;
          result[3] += 16519104;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 179584889;
          result[3] += 18837575;
          result[4] += 2511676;
          result[5] += 13814222;
        } else {
          result[0] += 660764;
          result[1] += 0;
          result[2] += 207479958;
          result[3] += 6607641;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1677721;
          result[1] += 7549747;
          result[2] += 0;
          result[3] += 0;
          result[4] += 196293427;
          result[5] += 9227468;
        } else {
          result[0] += 104246779;
          result[1] += 16679484;
          result[2] += 0;
          result[3] += 0;
          result[4] += 47953518;
          result[5] += 45868582;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 224867;
          result[1] += 1574071;
          result[2] += 0;
          result[3] += 13941778;
          result[4] += 18439126;
          result[5] += 180568520;
        } else {
          result[0] += 4709393;
          result[1] += 0;
          result[2] += 1883757;
          result[3] += 133746788;
          result[4] += 941878;
          result[5] += 73466545;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 162071062;
          result[1] += 13632145;
          result[2] += 504894;
          result[3] += 3365961;
          result[4] += 28778973;
          result[5] += 6395327;
        } else {
          result[0] += 40068353;
          result[1] += 4952268;
          result[2] += 49522683;
          result[3] += 52223920;
          result[4] += 8553918;
          result[5] += 59427220;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 212420469;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2327895;
          result[5] += 0;
        } else {
          result[0] += 61356675;
          result[1] += 153391689;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
          result[0] += 12155567;
          result[1] += 28362991;
          result[2] += 20259279;
          result[3] += 0;
          result[4] += 44570415;
          result[5] += 109400110;
        } else {
          result[0] += 8366819;
          result[1] += 0;
          result[2] += 39045157;
          result[3] += 136658050;
          result[4] += 0;
          result[5] += 30678337;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 177167400;
          result[3] += 10737418;
          result[4] += 10737418;
          result[5] += 16106127;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 104306348;
          result[3] += 104306348;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 171364856;
          result[3] += 43383508;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 8589934;
          result[1] += 0;
          result[2] += 150323855;
          result[3] += 51539607;
          result[4] += 0;
          result[5] += 4294967;
        } else {
          result[0] += 547129;
          result[1] += 0;
          result[2] += 205720726;
          result[3] += 7933379;
          result[4] += 0;
          result[5] += 547129;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 1008208;
          result[2] += 0;
          result[3] += 0;
          result[4] += 213740156;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 9761289;
          result[2] += 0;
          result[3] += 29283867;
          result[4] += 68329025;
          result[5] += 107374182;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 7631728;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12507555;
          result[4] += 19927291;
          result[5] += 174681789;
        } else {
          result[0] += 7669584;
          result[1] += 5113056;
          result[2] += 0;
          result[3] += 110782886;
          result[4] += 9373936;
          result[5] += 81808900;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 956562;
          result[1] += 212835239;
          result[2] += 0;
          result[3] += 0;
          result[4] += 956562;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 159242712;
          result[1] += 7432380;
          result[2] += 316271;
          result[3] += 7116109;
          result[4] += 32417831;
          result[5] += 8223059;
        } else {
          result[0] += 36507222;
          result[1] += 3758096;
          result[2] += 63350767;
          result[3] += 60129542;
          result[4] += 8589934;
          result[5] += 42412802;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25264513;
          result[5] += 189483851;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 49367440;
          result[3] += 120950228;
          result[4] += 4936744;
          result[5] += 39493952;
        } else {
          result[0] += 17895697;
          result[1] += 0;
          result[2] += 187904819;
          result[3] += 8947848;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 42949672;
          result[4] += 128849018;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 199409195;
          result[2] += 0;
          result[3] += 15339168;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 10814665;
          result[1] += 1544952;
          result[2] += 163764940;
          result[3] += 32443997;
          result[4] += 0;
          result[5] += 6179809;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 206662959;
          result[3] += 7115156;
          result[4] += 0;
          result[5] += 970248;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 213618110;
          result[5] += 1130254;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 196852667;
        } else {
          result[0] += 0;
          result[1] += 33038209;
          result[2] += 0;
          result[3] += 33038209;
          result[4] += 115633734;
          result[5] += 33038209;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          result[0] += 86342126;
          result[1] += 13283404;
          result[2] += 0;
          result[3] += 2213900;
          result[4] += 84128225;
          result[5] += 28780708;
        } else {
          result[0] += 860714;
          result[1] += 215178;
          result[2] += 0;
          result[3] += 11834829;
          result[4] += 13986616;
          result[5] += 187851024;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 13944699;
          result[1] += 0;
          result[2] += 8366819;
          result[3] += 64145615;
          result[4] += 0;
          result[5] += 128291230;
        } else {
          result[0] += 3426835;
          result[1] += 0;
          result[2] += 2284557;
          result[3] += 162203552;
          result[4] += 0;
          result[5] += 46833419;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 3135012;
          result[1] += 57997733;
          result[2] += 3135012;
          result[3] += 6270025;
          result[4] += 141075568;
          result[5] += 3135012;
        } else {
          result[0] += 517465;
          result[1] += 210091171;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4139727;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 180082858;
          result[1] += 7644188;
          result[2] += 177771;
          result[3] += 5155382;
          result[4] += 16177236;
          result[5] += 5510926;
        } else {
          result[0] += 43282616;
          result[1] += 9988296;
          result[2] += 27467814;
          result[3] += 43282616;
          result[4] += 25803098;
          result[5] += 64923924;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 8081927;
          result[2] += 41564199;
          result[3] += 108528743;
          result[4] += 6927366;
          result[5] += 49646127;
        } else {
          result[0] += 0;
          result[1] += 3702558;
          result[2] += 155507436;
          result[3] += 29620464;
          result[4] += 0;
          result[5] += 25917906;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 20084379;
          result[1] += 7724761;
          result[2] += 123596181;
          result[3] += 21629331;
          result[4] += 6179809;
          result[5] += 35533902;
        } else {
          result[0] += 1774779;
          result[1] += 0;
          result[2] += 200803665;
          result[3] += 11155759;
          result[4] += 0;
          result[5] += 1014159;
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
