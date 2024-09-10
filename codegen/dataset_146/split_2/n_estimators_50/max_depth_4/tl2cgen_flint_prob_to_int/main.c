
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 454493;
          result[1] += 454493;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82717888;
          result[5] += 2272469;
        } else {
          result[0] += 38859227;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 0;
          result[4] += 33746171;
          result[5] += 9203501;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 403662;
          result[2] += 0;
          result[3] += 5732005;
          result[4] += 7508119;
          result[5] += 72255558;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 353495;
          result[3] += 43479915;
          result[4] += 1060485;
          result[5] += 41005449;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 23696371;
          result[2] += 0;
          result[3] += 0;
          result[4] += 62202974;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84563133;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1336212;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 70057253;
          result[1] += 1901051;
          result[2] += 211227;
          result[3] += 2534734;
          result[4] += 9434846;
          result[5] += 1760232;
        } else {
          result[0] += 14746668;
          result[1] += 2580667;
          result[2] += 24147670;
          result[3] += 24332003;
          result[4] += 3502333;
          result[5] += 16590002;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 61356675;
          result[4] += 0;
          result[5] += 20452225;
        } else {
          result[0] += 0;
          result[1] += 36814005;
          result[2] += 24542670;
          result[3] += 0;
          result[4] += 0;
          result[5] += 24542670;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 13071639;
          result[2] += 13071639;
          result[3] += 7469508;
          result[4] += 7469508;
          result[5] += 44817050;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65856165;
          result[3] += 12884901;
          result[4] += 0;
          result[5] += 7158278;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 463069;
          result[1] += 0;
          result[2] += 68071179;
          result[3] += 15512819;
          result[4] += 0;
          result[5] += 1852277;
        } else {
          result[0] += 73628010;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 62772598;
          result[3] += 23126746;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83924648;
          result[3] += 1974697;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 371858;
          result[1] += 371858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82180759;
          result[5] += 2974869;
        } else {
          result[0] += 12271335;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 2988545;
          result[1] += 1963901;
          result[2] += 85387;
          result[3] += 5550156;
          result[4] += 4098577;
          result[5] += 71212777;
        } else {
          result[0] += 354955;
          result[1] += 1064867;
          result[2] += 0;
          result[3] += 47919056;
          result[4] += 4969383;
          result[5] += 31591081;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 19822925;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66076419;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85046746;
          result[2] += 0;
          result[3] += 0;
          result[4] += 852598;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64766932;
          result[1] += 3848186;
          result[2] += 782681;
          result[3] += 2804610;
          result[4] += 12196793;
          result[5] += 1500140;
        } else {
          result[0] += 15199348;
          result[1] += 460586;
          result[2] += 17962865;
          result[3] += 20496090;
          result[4] += 9672312;
          result[5] += 22108142;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1130254;
          result[3] += 29386618;
          result[4] += 4521018;
          result[5] += 50861454;
        } else {
          result[0] += 4139727;
          result[1] += 8279455;
          result[2] += 13454114;
          result[3] += 44502070;
          result[4] += 3104795;
          result[5] += 12419182;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 71582788;
        } else {
          result[0] += 6737203;
          result[1] += 0;
          result[2] += 60634832;
          result[3] += 16843009;
          result[4] += 0;
          result[5] += 1684300;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 2471923;
          result[1] += 0;
          result[2] += 58708186;
          result[3] += 21629331;
          result[4] += 0;
          result[5] += 3089904;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71047589;
          result[3] += 13647559;
          result[4] += 0;
          result[5] += 1204196;
        } else {
          result[0] += 138547;
          result[1] += 0;
          result[2] += 83544041;
          result[3] += 2216757;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82741281;
          result[5] += 3158064;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1496069;
          result[4] += 2244104;
          result[5] += 82159171;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 32797932;
          result[4] += 6247225;
          result[5] += 46854188;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
          result[0] += 70171296;
          result[1] += 3629549;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8468949;
          result[5] += 3629549;
        } else {
          result[0] += 1615201;
          result[1] += 1174691;
          result[2] += 1615201;
          result[3] += 27311586;
          result[4] += 6167132;
          result[5] += 48015531;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 842150;
          result[1] += 37054619;
          result[2] += 0;
          result[3] += 0;
          result[4] += 45476124;
          result[5] += 2526451;
        } else {
          result[0] += 0;
          result[1] += 84934184;
          result[2] += 0;
          result[3] += 0;
          result[4] += 965161;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 6607641;
          result[1] += 15103181;
          result[2] += 10383437;
          result[3] += 12271335;
          result[4] += 5663693;
          result[5] += 35870056;
        } else {
          result[0] += 71065322;
          result[1] += 1310913;
          result[2] += 2345845;
          result[3] += 4001736;
          result[4] += 5864613;
          result[5] += 1310913;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9544371;
          result[3] += 40086361;
          result[4] += 9544371;
          result[5] += 26724240;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 55145259;
          result[3] += 24391172;
          result[4] += 0;
          result[5] += 6362914;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 704092;
          result[2] += 50694695;
          result[3] += 28867812;
          result[4] += 0;
          result[5] += 5632743;
        } else {
          result[0] += 1772082;
          result[1] += 466337;
          result[2] += 77785075;
          result[3] += 4197036;
          result[4] += 559604;
          result[5] += 1119209;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 340870;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82831512;
          result[5] += 2726963;
        } else {
          result[0] += 0;
          result[1] += 66810602;
          result[2] += 0;
          result[3] += 0;
          result[4] += 19088743;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2188518;
          result[4] += 4705314;
          result[5] += 79005513;
        } else {
          result[0] += 10993943;
          result[1] += 1172687;
          result[2] += 0;
          result[3] += 31515971;
          result[4] += 6742952;
          result[5] += 35473791;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 18407002;
          result[2] += 0;
          result[3] += 0;
          result[4] += 67492343;
          result[5] += 0;
        } else {
          result[0] += 205500;
          result[1] += 85488344;
          result[2] += 0;
          result[3] += 0;
          result[4] += 205500;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 25362197;
          result[1] += 1358689;
          result[2] += 13284960;
          result[3] += 19172613;
          result[4] += 12832063;
          result[5] += 13888822;
        } else {
          result[0] += 67470031;
          result[1] += 2264619;
          result[2] += 4919689;
          result[3] += 2733161;
          result[4] += 7340489;
          result[5] += 1171354;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2863311;
          result[3] += 0;
          result[4] += 5726623;
          result[5] += 77309411;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 2260509;
          result[1] += 22605091;
          result[2] += 0;
          result[3] += 33907636;
          result[4] += 0;
          result[5] += 27126109;
        } else {
          result[0] += 2603010;
          result[1] += 0;
          result[2] += 48589528;
          result[3] += 25162434;
          result[4] += 0;
          result[5] += 9544371;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 734182;
          result[1] += 0;
          result[2] += 63139690;
          result[3] += 19822925;
          result[4] += 0;
          result[5] += 2202547;
        } else {
          result[0] += 1739733;
          result[1] += 0;
          result[2] += 80353945;
          result[3] += 3479467;
          result[4] += 0;
          result[5] += 326200;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 312361;
          result[1] += 3435973;
          result[2] += 0;
          result[3] += 312361;
          result[4] += 79652120;
          result[5] += 2186528;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 85134095;
          result[2] += 0;
          result[3] += 0;
          result[4] += 765250;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 46253493;
          result[2] += 2202547;
          result[3] += 0;
          result[4] += 37443304;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1395116;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4583955;
          result[4] += 6776282;
          result[5] += 73143990;
        } else {
          result[0] += 5419517;
          result[1] += 3251710;
          result[2] += 0;
          result[3] += 36581740;
          result[4] += 3522686;
          result[5] += 37123692;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 70300024;
          result[1] += 2405181;
          result[2] += 962072;
          result[3] += 3023656;
          result[4] += 6734508;
          result[5] += 2473901;
        } else {
          result[0] += 17094397;
          result[1] += 3846239;
          result[2] += 13889197;
          result[3] += 20726956;
          result[4] += 7051438;
          result[5] += 23291116;
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 1047552;
          result[2] += 9427976;
          result[3] += 25141271;
          result[4] += 2095105;
          result[5] += 48187437;
        } else {
          result[0] += 1034931;
          result[1] += 3104795;
          result[2] += 29495558;
          result[3] += 40362343;
          result[4] += 1552397;
          result[5] += 10349318;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73130524;
          result[3] += 12188420;
          result[4] += 0;
          result[5] += 580400;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 61356675;
          result[1] += 24542670;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1061796;
          result[1] += 0;
          result[2] += 80908901;
          result[3] += 3185389;
          result[4] += 0;
          result[5] += 743257;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 81378327;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4521018;
          result[5] += 0;
        } else {
          result[0] += 278893;
          result[1] += 1115575;
          result[2] += 0;
          result[3] += 0;
          result[4] += 76138056;
          result[5] += 8366819;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1451002;
          result[1] += 0;
          result[2] += 96733;
          result[3] += 4643207;
          result[4] += 3966073;
          result[5] += 75742328;
        } else {
          result[0] += 10708937;
          result[1] += 1139248;
          result[2] += 3873445;
          result[3] += 29164764;
          result[4] += 5468393;
          result[5] += 35544556;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 84629897;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1269448;
          result[5] += 0;
        } else {
          result[0] += 636291;
          result[1] += 25451658;
          result[2] += 0;
          result[3] += 4454040;
          result[4] += 52175898;
          result[5] += 3181457;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 74446099;
          result[1] += 2219066;
          result[2] += 644245;
          result[3] += 1288490;
          result[4] += 4724464;
          result[5] += 2576980;
        } else {
          result[0] += 18969438;
          result[1] += 2863311;
          result[2] += 9305762;
          result[3] += 21832750;
          result[4] += 3579139;
          result[5] += 29348943;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7754802;
          result[3] += 60248846;
          result[4] += 0;
          result[5] += 17895697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 8180890;
          result[4] += 0;
          result[5] += 49085340;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 943948;
          result[1] += 0;
          result[2] += 35870056;
          result[3] += 32094261;
          result[4] += 3775795;
          result[5] += 13215283;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76504104;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 1342177;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f00000))) ) ) {
          result[0] += 4706813;
          result[1] += 0;
          result[2] += 60011871;
          result[3] += 3530110;
          result[4] += 1176703;
          result[5] += 16473847;
        } else {
          result[0] += 79763678;
          result[1] += 0;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68255155;
          result[3] += 13929623;
          result[4] += 0;
          result[5] += 3714566;
        } else {
          result[0] += 649768;
          result[1] += 0;
          result[2] += 82520551;
          result[3] += 2729026;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82252675;
          result[5] += 3646670;
        } else {
          result[0] += 0;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 48318382;
          result[4] += 0;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1421292;
          result[1] += 799476;
          result[2] += 88830;
          result[3] += 3730891;
          result[4] += 6129322;
          result[5] += 73729531;
        } else {
          result[0] += 6336836;
          result[1] += 704092;
          result[2] += 3755162;
          result[3] += 36847533;
          result[4] += 5398046;
          result[5] += 32857673;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 85255100;
          result[2] += 0;
          result[3] += 0;
          result[4] += 644245;
          result[5] += 0;
        } else {
          result[0] += 10412041;
          result[1] += 44251178;
          result[2] += 0;
          result[3] += 5206020;
          result[4] += 26030104;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 7650953;
          result[1] += 19475155;
          result[2] += 1391082;
          result[3] += 4173247;
          result[4] += 50426741;
          result[5] += 2782165;
        } else {
          result[0] += 60571504;
          result[1] += 509956;
          result[2] += 4816256;
          result[3] += 8329290;
          result[4] += 4362961;
          result[5] += 7309377;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9042036;
          result[4] += 0;
          result[5] += 76857309;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 31019208;
          result[4] += 0;
          result[5] += 40563580;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 54084773;
          result[3] += 22270200;
          result[4] += 0;
          result[5] += 9544371;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 479884;
          result[2] += 59025807;
          result[3] += 22554576;
          result[4] += 0;
          result[5] += 3839076;
        } else {
          result[0] += 755396;
          result[1] += 0;
          result[2] += 81043227;
          result[3] += 3237412;
          result[4] += 0;
          result[5] += 863310;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 838042;
          result[4] += 85061303;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5924092;
          result[3] += 0;
          result[4] += 56278881;
          result[5] += 23696371;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2346976;
          result[4] += 3520464;
          result[5] += 80031904;
        } else {
          result[0] += 4613113;
          result[1] += 477218;
          result[2] += 0;
          result[3] += 23860929;
          result[4] += 10180663;
          result[5] += 46767421;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 10737418;
          result[1] += 14913080;
          result[2] += 0;
          result[3] += 2386092;
          result[4] += 54880137;
          result[5] += 2982616;
        } else {
          result[0] += 0;
          result[1] += 83567236;
          result[2] += 194342;
          result[3] += 0;
          result[4] += 2137766;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 72079806;
          result[1] += 3491251;
          result[2] += 145468;
          result[3] += 1381953;
          result[4] += 7346176;
          result[5] += 1454688;
        } else {
          result[0] += 15490045;
          result[1] += 704092;
          result[2] += 16428836;
          result[3] += 26755533;
          result[4] += 2816371;
          result[5] += 23704464;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 1789569;
          result[1] += 596523;
          result[2] += 7754802;
          result[3] += 42353149;
          result[4] += 4175662;
          result[5] += 29229638;
        } else {
          result[0] += 17179869;
          result[1] += 0;
          result[2] += 51539607;
          result[3] += 7362801;
          result[4] += 0;
          result[5] += 9817068;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 37580963;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 37580963;
        } else {
          result[0] += 12844762;
          result[1] += 0;
          result[2] += 63421012;
          result[3] += 8830773;
          result[4] += 0;
          result[5] += 802797;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 55921050;
          result[3] += 23636732;
          result[4] += 0;
          result[5] += 6341562;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72630341;
          result[3] += 13269004;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 283029;
          result[1] += 0;
          result[2] += 83210569;
          result[3] += 2405747;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1172687;
          result[1] += 2052202;
          result[2] += 0;
          result[3] += 2638546;
          result[4] += 73586129;
          result[5] += 6449780;
        } else {
          result[0] += 40563580;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11930464;
          result[4] += 10737418;
          result[5] += 22667882;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2570553;
          result[4] += 2677660;
          result[5] += 80651131;
        } else {
          result[0] += 1034931;
          result[1] += 206986;
          result[2] += 620959;
          result[3] += 30426997;
          result[4] += 7451509;
          result[5] += 46157961;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
          result[0] += 602098;
          result[1] += 83290253;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2006994;
          result[5] += 0;
        } else {
          result[0] += 2321603;
          result[1] += 22442171;
          result[2] += 0;
          result[3] += 0;
          result[4] += 58040098;
          result[5] += 3095471;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 66741937;
          result[1] += 4051208;
          result[2] += 2609252;
          result[3] += 2609252;
          result[4] += 6248473;
          result[5] += 3639220;
        } else {
          result[0] += 16581835;
          result[1] += 2446500;
          result[2] += 21746669;
          result[3] += 23105836;
          result[4] += 7339501;
          result[5] += 14679002;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 7158278;
          result[3] += 14316557;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7953643;
          result[3] += 11135100;
          result[4] += 3181457;
          result[5] += 63629145;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3655291;
          result[3] += 60312306;
          result[4] += 0;
          result[5] += 21931747;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41160103;
          result[3] += 32212254;
          result[4] += 894784;
          result[5] += 11632203;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41518017;
          result[3] += 31496426;
          result[4] += 0;
          result[5] += 12884901;
        } else {
          result[0] += 511305;
          result[1] += 0;
          result[2] += 70048871;
          result[3] += 13293946;
          result[4] += 0;
          result[5] += 2045222;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 1478898;
          result[1] += 0;
          result[2] += 80969684;
          result[3] += 2464830;
          result[4] += 0;
          result[5] += 985932;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 3482405;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80095336;
          result[5] += 2321603;
        } else {
          result[0] += 2386092;
          result[1] += 1193046;
          result[2] += 0;
          result[3] += 3579139;
          result[4] += 40563580;
          result[5] += 38177487;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2309122;
          result[4] += 1385473;
          result[5] += 82204750;
        } else {
          result[0] += 9458231;
          result[1] += 155052;
          result[2] += 930317;
          result[3] += 24808475;
          result[4] += 6822330;
          result[5] += 43724937;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 1419823;
          result[1] += 15618062;
          result[2] += 0;
          result[3] += 0;
          result[4] += 67441635;
          result[5] += 1419823;
        } else {
          result[0] += 0;
          result[1] += 83638836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2260509;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 70262158;
          result[1] += 2173779;
          result[2] += 1262194;
          result[3] += 2524388;
          result[4] += 5539631;
          result[5] += 4137192;
        } else {
          result[0] += 14696643;
          result[1] += 506780;
          result[2] += 16723766;
          result[3] += 24325478;
          result[4] += 11149177;
          result[5] += 18497499;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 1115575;
          result[1] += 0;
          result[2] += 20080366;
          result[3] += 53547644;
          result[4] += 0;
          result[5] += 11155759;
        } else {
          result[0] += 885560;
          result[1] += 0;
          result[2] += 47820254;
          result[3] += 30994609;
          result[4] += 0;
          result[5] += 6198921;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 2489836;
          result[1] += 0;
          result[2] += 73450165;
          result[3] += 4357213;
          result[4] += 0;
          result[5] += 5602131;
        } else {
          result[0] += 1047552;
          result[1] += 0;
          result[2] += 55520308;
          result[3] += 28283930;
          result[4] += 0;
          result[5] += 1047552;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 391638;
          result[1] += 0;
          result[2] += 81852416;
          result[3] += 3002560;
          result[4] += 0;
          result[5] += 652730;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84678028;
          result[5] += 1221317;
        } else {
          result[0] += 2290649;
          result[1] += 2290649;
          result[2] += 0;
          result[3] += 5726623;
          result[4] += 40086361;
          result[5] += 35505062;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 775865;
          result[3] += 2549270;
          result[4] += 1773405;
          result[5] += 80800804;
        } else {
          result[0] += 7944448;
          result[1] += 993056;
          result[2] += 993056;
          result[3] += 31612283;
          result[4] += 3972224;
          result[5] += 40384278;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85329217;
          result[2] += 0;
          result[3] += 570128;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 67082041;
          result[1] += 4027563;
          result[2] += 198076;
          result[3] += 1650640;
          result[4] += 11950639;
          result[5] += 990384;
        } else {
          result[0] += 11158493;
          result[1] += 1052688;
          result[2] += 22527524;
          result[3] += 28001502;
          result[4] += 4000214;
          result[5] += 19158922;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 72884293;
          result[4] += 0;
          result[5] += 13015052;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15823563;
          result[3] += 15823563;
          result[4] += 2260509;
          result[5] += 51991709;
        } else {
          result[0] += 0;
          result[1] += 5052902;
          result[2] += 65687735;
          result[3] += 15158708;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 2061584;
          result[1] += 1374389;
          result[2] += 47416438;
          result[3] += 26800595;
          result[4] += 0;
          result[5] += 8246337;
        } else {
          result[0] += 1982292;
          result[1] += 0;
          result[2] += 72023297;
          result[3] += 9250698;
          result[4] += 0;
          result[5] += 2643056;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75415567;
          result[3] += 8792846;
          result[4] += 0;
          result[5] += 1690932;
        } else {
          result[0] += 380928;
          result[1] += 0;
          result[2] += 83423311;
          result[3] += 2095105;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 344977;
          result[1] += 2069863;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81414641;
          result[5] += 2069863;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 8589934;
          result[3] += 12884901;
          result[4] += 32212254;
          result[5] += 32212254;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 802797;
          result[1] += 1204196;
          result[2] += 0;
          result[3] += 3913638;
          result[4] += 3110840;
          result[5] += 76867872;
        } else {
          result[0] += 6118857;
          result[1] += 706022;
          result[2] += 941362;
          result[3] += 31770990;
          result[4] += 6354198;
          result[5] += 40007914;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 49557314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36342030;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85036035;
          result[2] += 0;
          result[3] += 0;
          result[4] += 863310;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 6794298;
          result[1] += 17471053;
          result[2] += 0;
          result[3] += 0;
          result[4] += 60663379;
          result[5] += 970614;
        } else {
          result[0] += 60372387;
          result[1] += 1242462;
          result[2] += 3049680;
          result[3] += 7172397;
          result[4] += 5760508;
          result[5] += 8301909;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12041964;
          result[3] += 52984643;
          result[4] += 0;
          result[5] += 20872738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 66810602;
          result[3] += 0;
          result[4] += 0;
          result[5] += 19088743;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 10105805;
          result[1] += 0;
          result[2] += 36633544;
          result[3] += 26527739;
          result[4] += 1263225;
          result[5] += 11369031;
        } else {
          result[0] += 788067;
          result[1] += 0;
          result[2] += 72502200;
          result[3] += 9456808;
          result[4] += 0;
          result[5] += 3152269;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
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
          result[2] += 54084773;
          result[3] += 22270200;
          result[4] += 0;
          result[5] += 9544371;
        } else {
          result[0] += 409044;
          result[1] += 0;
          result[2] += 81195334;
          result[3] += 3885922;
          result[4] += 0;
          result[5] += 409044;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 829945;
          result[1] += 1244918;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83409509;
          result[5] += 414972;
        } else {
          result[0] += 0;
          result[1] += 45691141;
          result[2] += 0;
          result[3] += 3655291;
          result[4] += 21931747;
          result[5] += 14621165;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1292467;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4672765;
          result[4] += 4672765;
          result[5] += 75261348;
        } else {
          result[0] += 5245761;
          result[1] += 1311440;
          result[2] += 655720;
          result[3] += 38031771;
          result[4] += 3278600;
          result[5] += 37376051;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 83347880;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2551465;
          result[5] += 0;
        } else {
          result[0] += 561433;
          result[1] += 23018778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 62319133;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 74500032;
          result[1] += 1103159;
          result[2] += 367719;
          result[3] += 1617967;
          result[4] += 6692500;
          result[5] += 1617967;
        } else {
          result[0] += 14195230;
          result[1] += 1637911;
          result[2] += 12739309;
          result[3] += 28208471;
          result[4] += 6915625;
          result[5] += 22202797;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9250698;
          result[3] += 5286113;
          result[4] += 6607641;
          result[5] += 64754891;
        } else {
          result[0] += 0;
          result[1] += 1419823;
          result[2] += 19167622;
          result[3] += 44014540;
          result[4] += 0;
          result[5] += 21297358;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42f20000))) ) ) {
          result[0] += 3272356;
          result[1] += 818089;
          result[2] += 56448141;
          result[3] += 13907513;
          result[4] += 1636178;
          result[5] += 9817068;
        } else {
          result[0] += 0;
          result[1] += 79763678;
          result[2] += 6135667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 2684354;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 29527900;
        } else {
          result[0] += 79291703;
          result[1] += 0;
          result[2] += 6607641;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 1095654;
          result[1] += 0;
          result[2] += 71655831;
          result[3] += 12490466;
          result[4] += 0;
          result[5] += 657392;
        } else {
          result[0] += 169426;
          result[1] += 0;
          result[2] += 84205078;
          result[3] += 1524840;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 60129542;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25769803;
          result[5] += 0;
        } else {
          result[0] += 298261;
          result[1] += 0;
          result[2] += 0;
          result[3] += 596523;
          result[4] += 80828898;
          result[5] += 4175662;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 363595;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5999319;
          result[4] += 5999319;
          result[5] += 73537111;
        } else {
          result[0] += 22020386;
          result[1] += 1983818;
          result[2] += 3967637;
          result[3] += 20830095;
          result[4] += 16068930;
          result[5] += 21028477;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 85437521;
          result[2] += 0;
          result[3] += 0;
          result[4] += 461824;
          result[5] += 0;
        } else {
          result[0] += 1997659;
          result[1] += 45946161;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36956695;
          result[5] += 998829;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 72418791;
          result[1] += 2508010;
          result[2] += 862128;
          result[3] += 2664760;
          result[4] += 4310642;
          result[5] += 3135012;
        } else {
          result[0] += 14931722;
          result[1] += 2852126;
          result[2] += 16944988;
          result[3] += 28017950;
          result[4] += 4026531;
          result[5] += 19126026;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1533916;
          result[3] += 16873085;
          result[4] += 4601750;
          result[5] += 62890592;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46253493;
          result[3] += 13215283;
          result[4] += 0;
          result[5] += 26430567;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5052902;
          result[3] += 80846443;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 47721858;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6299285;
          result[1] += 572662;
          result[2] += 48676296;
          result[3] += 22333829;
          result[4] += 0;
          result[5] += 8017272;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 320519;
          result[1] += 0;
          result[2] += 80236826;
          result[3] += 4594119;
          result[4] += 0;
          result[5] += 747879;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 1209849;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82673079;
          result[5] += 2016416;
        } else {
          result[0] += 0;
          result[1] += 75161927;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10737418;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 3773820;
          result[1] += 1527498;
          result[2] += 0;
          result[3] += 2605733;
          result[4] += 4582496;
          result[5] += 73409796;
        } else {
          result[0] += 1684300;
          result[1] += 0;
          result[2] += 1122867;
          result[3] += 43791823;
          result[4] += 1122867;
          result[5] += 38177487;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 33038209;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52861135;
          result[5] += 0;
        } else {
          result[0] += 197016;
          result[1] += 85702329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 14056256;
          result[1] += 7028128;
          result[2] += 780903;
          result[3] += 2733161;
          result[4] += 54663220;
          result[5] += 6637676;
        } else {
          result[0] += 65761770;
          result[1] += 1824967;
          result[2] += 1384458;
          result[3] += 5663693;
          result[4] += 4782674;
          result[5] += 6481782;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9848332;
          result[3] += 54712959;
          result[4] += 0;
          result[5] += 21338054;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40320101;
          result[3] += 39443577;
          result[4] += 0;
          result[5] += 6135667;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 2770946;
          result[1] += 0;
          result[2] += 58189879;
          result[3] += 8312839;
          result[4] += 0;
          result[5] += 16625679;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80530636;
          result[3] += 4026531;
          result[4] += 0;
          result[5] += 1342177;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 671088;
          result[1] += 335544;
          result[2] += 65766686;
          result[3] += 15099494;
          result[4] += 0;
          result[5] += 4026531;
        } else {
          result[0] += 57266230;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 57266230;
          result[3] += 0;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 264712;
          result[1] += 0;
          result[2] += 81928651;
          result[3] += 3176555;
          result[4] += 0;
          result[5] += 529425;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 4173247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81030557;
          result[5] += 695541;
        } else {
          result[0] += 1101273;
          result[1] += 20924199;
          result[2] += 0;
          result[3] += 2202547;
          result[4] += 37443304;
          result[5] += 24228020;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          result[0] += 79135617;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4058236;
          result[5] += 2705491;
        } else {
          result[0] += 2561219;
          result[1] += 131344;
          result[2] += 919411;
          result[3] += 11755338;
          result[4] += 7815001;
          result[5] += 62717030;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 51041640;
          result[2] += 0;
          result[3] += 2489836;
          result[4] += 31122951;
          result[5] += 1244918;
        } else {
          result[0] += 634724;
          result[1] += 83783598;
          result[2] += 423149;
          result[3] += 423149;
          result[4] += 634724;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 72824108;
          result[1] += 3641205;
          result[2] += 1241320;
          result[3] += 2068866;
          result[4] += 4303242;
          result[5] += 1820602;
        } else {
          result[0] += 11544559;
          result[1] += 782681;
          result[2] += 13696934;
          result[3] += 28567891;
          result[4] += 7239808;
          result[5] += 24067470;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12570635;
          result[3] += 58662967;
          result[4] += 0;
          result[5] += 14665741;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41082295;
          result[3] += 14939016;
          result[4] += 0;
          result[5] += 29878033;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1328340;
          result[1] += 0;
          result[2] += 62431998;
          result[3] += 19482325;
          result[4] += 0;
          result[5] += 2656680;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80846443;
          result[3] += 5052902;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 61356675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 24542670;
        } else {
          result[0] += 885560;
          result[1] += 0;
          result[2] += 82989647;
          result[3] += 1897629;
          result[4] += 0;
          result[5] += 126508;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 943948;
          result[1] += 2123884;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78819729;
          result[5] += 4011782;
        } else {
          result[0] += 0;
          result[1] += 74695083;
          result[2] += 0;
          result[3] += 0;
          result[4] += 7469508;
          result[5] += 3734754;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          result[0] += 58648518;
          result[1] += 888613;
          result[2] += 0;
          result[3] += 3554455;
          result[4] += 10959571;
          result[5] += 11848185;
        } else {
          result[0] += 1704593;
          result[1] += 1278445;
          result[2] += 852296;
          result[3] += 15523978;
          result[4] += 4565875;
          result[5] += 61974156;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 5726623;
          result[1] += 37223049;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42900000))) ) ) {
          result[0] += 10737418;
          result[1] += 33554431;
          result[2] += 2684354;
          result[3] += 0;
          result[4] += 34896609;
          result[5] += 4026531;
        } else {
          result[0] += 72240718;
          result[1] += 236854;
          result[2] += 3868628;
          result[3] += 4184435;
          result[4] += 2605402;
          result[5] += 2763306;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11802963;
          result[3] += 55736216;
          result[4] += 0;
          result[5] += 18360165;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 62772598;
          result[3] += 16519104;
          result[4] += 0;
          result[5] += 6607641;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 35791394;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 42949672;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 73968881;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 1193046;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 440509;
          result[1] += 0;
          result[2] += 60349796;
          result[3] += 18501397;
          result[4] += 0;
          result[5] += 6607641;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79536431;
          result[3] += 6362914;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 18855953;
          result[1] += 0;
          result[2] += 67043391;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 823974;
          result[1] += 0;
          result[2] += 83427422;
          result[3] += 1235961;
          result[4] += 0;
          result[5] += 411987;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83854123;
          result[5] += 2045222;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 27331610;
          result[5] += 58567735;
        } else {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 0;
          result[3] += 55221008;
          result[4] += 24542670;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 2863311;
          result[2] += 0;
          result[3] += 0;
          result[4] += 71582788;
          result[5] += 11453246;
        } else {
          result[0] += 1340566;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4434179;
          result[4] += 1753047;
          result[5] += 78371552;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 74051160;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2962046;
          result[4] += 8886139;
          result[5] += 0;
        } else {
          result[0] += 206986;
          result[1] += 413972;
          result[2] += 2276850;
          result[3] += 30633983;
          result[4] += 5381645;
          result[5] += 46985907;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 9413626;
          result[1] += 26279708;
          result[2] += 0;
          result[3] += 392234;
          result[4] += 48637072;
          result[5] += 1176703;
        } else {
          result[0] += 0;
          result[1] += 85491272;
          result[2] += 0;
          result[3] += 0;
          result[4] += 408072;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          result[0] += 13474407;
          result[1] += 27790964;
          result[2] += 4210752;
          result[3] += 9263654;
          result[4] += 7579354;
          result[5] += 23580212;
        } else {
          result[0] += 75582827;
          result[1] += 1217922;
          result[2] += 1002994;
          result[3] += 1934347;
          result[4] += 5373186;
          result[5] += 788067;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 1221317;
          result[1] += 0;
          result[2] += 13434494;
          result[3] += 44374543;
          result[4] += 2442635;
          result[5] += 24426354;
        } else {
          result[0] += 4691981;
          result[1] += 1804608;
          result[2] += 47280732;
          result[3] += 16241472;
          result[4] += 2526451;
          result[5] += 13354099;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3006477;
          result[1] += 0;
          result[2] += 58411555;
          result[3] += 22333829;
          result[4] += 0;
          result[5] += 2147483;
        } else {
          result[0] += 504548;
          result[1] += 0;
          result[2] += 81484548;
          result[3] += 3657975;
          result[4] += 0;
          result[5] += 252274;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 864758;
          result[1] += 9224090;
          result[2] += 0;
          result[3] += 0;
          result[4] += 74369232;
          result[5] += 1441264;
        } else {
          result[0] += 69673913;
          result[1] += 954437;
          result[2] += 1431655;
          result[3] += 0;
          result[4] += 7158278;
          result[5] += 6681060;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 91188;
          result[1] += 91188;
          result[2] += 0;
          result[3] += 5015354;
          result[4] += 6200802;
          result[5] += 74500812;
        } else {
          result[0] += 5239446;
          result[1] += 1240921;
          result[2] += 3722764;
          result[3] += 34745802;
          result[4] += 9513731;
          result[5] += 31436678;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 85245289;
          result[2] += 0;
          result[3] += 0;
          result[4] += 654055;
          result[5] += 0;
        } else {
          result[0] += 2684354;
          result[1] += 33554431;
          result[2] += 1342177;
          result[3] += 1342177;
          result[4] += 46976204;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 71924562;
          result[1] += 3189896;
          result[2] += 1367098;
          result[3] += 1898747;
          result[4] += 4556994;
          result[5] += 2962046;
        } else {
          result[0] += 7108911;
          result[1] += 2962046;
          result[2] += 24288780;
          result[3] += 17179869;
          result[4] += 4739274;
          result[5] += 29620464;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14889219;
          result[3] += 62992853;
          result[4] += 0;
          result[5] += 8017272;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64424509;
          result[3] += 16702650;
          result[4] += 0;
          result[5] += 4772185;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 47721858;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73014444;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 2147483;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 1010580;
          result[1] += 0;
          result[2] += 82109668;
          result[3] += 2526451;
          result[4] += 0;
          result[5] += 252645;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85456565;
          result[5] += 442780;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 70281283;
          result[5] += 15618062;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35140641;
          result[5] += 50758704;
        } else {
          result[0] += 3435973;
          result[1] += 3435973;
          result[2] += 0;
          result[3] += 6871947;
          result[4] += 65283502;
          result[5] += 6871947;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 43590712;
          result[1] += 0;
          result[2] += 1282079;
          result[3] += 2564159;
          result[4] += 30769914;
          result[5] += 7692478;
        } else {
          result[0] += 432960;
          result[1] += 432960;
          result[2] += 86592;
          result[3] += 4849156;
          result[4] += 4416196;
          result[5] += 75681480;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4772185;
          result[3] += 0;
          result[4] += 0;
          result[5] += 81127160;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1598127;
          result[3] += 57932117;
          result[4] += 1198595;
          result[5] += 25170506;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 780903;
          result[1] += 24207997;
          result[2] += 0;
          result[3] += 1561806;
          result[4] += 59348638;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 82873081;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1629526;
          result[5] += 1396737;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 73712422;
          result[1] += 2658965;
          result[2] += 0;
          result[3] += 1698783;
          result[4] += 6499692;
          result[5] += 1329482;
        } else {
          result[0] += 22080709;
          result[1] += 6193369;
          result[2] += 17772278;
          result[3] += 18041555;
          result[4] += 3769877;
          result[5] += 18041555;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          result[0] += 2120971;
          result[1] += 10604857;
          result[2] += 11665343;
          result[3] += 8483886;
          result[4] += 19088743;
          result[5] += 33935544;
        } else {
          result[0] += 0;
          result[1] += 429496;
          result[2] += 32212254;
          result[3] += 41661182;
          result[4] += 858993;
          result[5] += 10737418;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 21913098;
          result[1] += 5259143;
          result[2] += 39443577;
          result[3] += 4382619;
          result[4] += 3506095;
          result[5] += 11394811;
        } else {
          result[0] += 1185447;
          result[1] += 0;
          result[2] += 77692402;
          result[3] += 6018425;
          result[4] += 0;
          result[5] += 1003070;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 643440;
          result[1] += 0;
          result[2] += 0;
          result[3] += 965161;
          result[4] += 77856335;
          result[5] += 6434407;
        } else {
          result[0] += 0;
          result[1] += 46017506;
          result[2] += 0;
          result[3] += 6135667;
          result[4] += 24542670;
          result[5] += 9203501;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 75487303;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9544371;
          result[5] += 867670;
        } else {
          result[0] += 994205;
          result[1] += 397682;
          result[2] += 729083;
          result[3] += 15045641;
          result[4] += 5236148;
          result[5] += 63496584;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 84375632;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1523713;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 34569248;
          result[2] += 0;
          result[3] += 1047552;
          result[4] += 50282543;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          result[0] += 70685760;
          result[1] += 2942249;
          result[2] += 574097;
          result[3] += 2726963;
          result[4] += 7750316;
          result[5] += 1219957;
        } else {
          result[0] += 13474407;
          result[1] += 1122867;
          result[2] += 34247451;
          result[3] += 16843009;
          result[4] += 3649318;
          result[5] += 16562292;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9042036;
          result[3] += 0;
          result[4] += 18084072;
          result[5] += 58773236;
        } else {
          result[0] += 1753047;
          result[1] += 6135667;
          result[2] += 17530478;
          result[3] += 44702720;
          result[4] += 876523;
          result[5] += 14900906;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 85899345;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 976128;
          result[1] += 5856773;
          result[2] += 36116770;
          result[3] += 25379352;
          result[4] += 976128;
          result[5] += 16594191;
        } else {
          result[0] += 3131746;
          result[1] += 0;
          result[2] += 71135395;
          result[3] += 11632203;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 75559609;
          result[3] += 10339736;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83972631;
          result[3] += 1926714;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42860000))) ) ) {
          result[0] += 897902;
          result[1] += 1496504;
          result[2] += 897902;
          result[3] += 0;
          result[4] += 78117523;
          result[5] += 4489512;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2106523;
          result[4] += 1053261;
          result[5] += 82739560;
        } else {
          result[0] += 4873721;
          result[1] += 2132253;
          result[2] += 3046076;
          result[3] += 27871596;
          result[4] += 7615190;
          result[5] += 40360508;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77309411;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85177502;
          result[2] += 0;
          result[3] += 0;
          result[4] += 721843;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 30504029;
          result[1] += 4026531;
          result[2] += 5002660;
          result[3] += 17326288;
          result[4] += 11103466;
          result[5] += 17936369;
        } else {
          result[0] += 68133015;
          result[1] += 1379909;
          result[2] += 5519636;
          result[3] += 2242352;
          result[4] += 8106966;
          result[5] += 517465;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14810232;
          result[3] += 20734324;
          result[4] += 2962046;
          result[5] += 47392742;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2603010;
          result[3] += 62472251;
          result[4] += 0;
          result[5] += 20824083;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 4772185;
          result[4] += 9544371;
          result[5] += 52494044;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76354974;
          result[3] += 0;
          result[4] += 0;
          result[5] += 9544371;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 295186;
          result[1] += 0;
          result[2] += 67302580;
          result[3] += 14168964;
          result[4] += 0;
          result[5] += 4132614;
        } else {
          result[0] += 275318;
          result[1] += 0;
          result[2] += 82733184;
          result[3] += 2340206;
          result[4] += 275318;
          result[5] += 275318;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1419823;
          result[1] += 3904515;
          result[2] += 0;
          result[3] += 0;
          result[4] += 79865094;
          result[5] += 709911;
        } else {
          result[0] += 40578218;
          result[1] += 12647756;
          result[2] += 0;
          result[3] += 2634949;
          result[4] += 10012807;
          result[5] += 20025614;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 183545;
          result[1] += 550636;
          result[2] += 642409;
          result[3] += 4129776;
          result[4] += 4863958;
          result[5] += 75529018;
        } else {
          result[0] += 1412818;
          result[1] += 1130254;
          result[2] += 847690;
          result[3] += 40124036;
          result[4] += 4238454;
          result[5] += 38146091;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 18673770;
          result[2] += 0;
          result[3] += 3734754;
          result[4] += 61623443;
          result[5] += 1867377;
        } else {
          result[0] += 423149;
          result[1] += 85053046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 423149;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 65652591;
          result[1] += 3451905;
          result[2] += 1460421;
          result[3] += 3651054;
          result[4] += 8032319;
          result[5] += 3651054;
        } else {
          result[0] += 14405480;
          result[1] += 800304;
          result[2] += 25342974;
          result[3] += 26943583;
          result[4] += 4001522;
          result[5] += 14405480;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19685266;
          result[3] += 0;
          result[4] += 3579139;
          result[5] += 62634939;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 23696371;
          result[3] += 38506603;
          result[4] += 0;
          result[5] += 23696371;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 85899345;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 59407024;
          result[3] += 22879732;
          result[4] += 401398;
          result[5] += 3211190;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72846013;
          result[3] += 11790106;
          result[4] += 0;
          result[5] += 1263225;
        } else {
          result[0] += 327235;
          result[1] += 0;
          result[2] += 84099550;
          result[3] += 1472560;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 6182149;
          result[2] += 0;
          result[3] += 976128;
          result[4] += 74185798;
          result[5] += 4555268;
        } else {
          result[0] += 38177487;
          result[1] += 1735340;
          result[2] += 0;
          result[3] += 3470680;
          result[4] += 16485733;
          result[5] += 26030104;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 356428;
          result[1] += 356428;
          result[2] += 0;
          result[3] += 6148397;
          result[4] += 4188038;
          result[5] += 74850052;
        } else {
          result[0] += 2670445;
          result[1] += 0;
          result[2] += 890148;
          result[3] += 49848325;
          result[4] += 445074;
          result[5] += 32045351;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 31236125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 54663220;
          result[5] += 0;
        } else {
          result[0] += 221390;
          result[1] += 85235175;
          result[2] += 0;
          result[3] += 221390;
          result[4] += 221390;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 68011991;
          result[1] += 2202547;
          result[2] += 0;
          result[3] += 2336035;
          result[4] += 12080638;
          result[5] += 1268133;
        } else {
          result[0] += 12439435;
          result[1] += 2017205;
          result[2] += 21012560;
          result[3] += 23197866;
          result[4] += 8236923;
          result[5] += 18995354;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 85899345;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 17620378;
          result[3] += 13215283;
          result[4] += 2202547;
          result[5] += 52861135;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 37180313;
          result[3] += 33334074;
          result[4] += 0;
          result[5] += 15384957;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42960000))) ) ) {
          result[0] += 33405301;
          result[1] += 52494044;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1808407;
          result[1] += 0;
          result[2] += 56060625;
          result[3] += 24413498;
          result[4] += 0;
          result[5] += 3616814;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 4090445;
          result[1] += 16361780;
          result[2] += 40904450;
          result[3] += 0;
          result[4] += 0;
          result[5] += 24542670;
        } else {
          result[0] += 103994;
          result[1] += 0;
          result[2] += 80699627;
          result[3] += 4887735;
          result[4] += 0;
          result[5] += 207988;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 70281283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15618062;
          result[5] += 0;
        } else {
          result[0] += 1498244;
          result[1] += 749122;
          result[2] += 0;
          result[3] += 0;
          result[4] += 77159586;
          result[5] += 6492392;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 80437537;
          result[1] += 0;
          result[2] += 1489584;
          result[3] += 0;
          result[4] += 3972224;
          result[5] += 0;
        } else {
          result[0] += 2066544;
          result[1] += 619963;
          result[2] += 688848;
          result[3] += 11572646;
          result[4] += 5510784;
          result[5] += 65440560;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 85520099;
          result[2] += 0;
          result[3] += 0;
          result[4] += 379246;
          result[5] += 0;
        } else {
          result[0] += 4026531;
          result[1] += 32212254;
          result[2] += 2684354;
          result[3] += 6710886;
          result[4] += 37580963;
          result[5] += 2684354;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 41623042;
          result[1] += 5969838;
          result[2] += 4809036;
          result[3] += 16582885;
          result[4] += 4643207;
          result[5] += 12271335;
        } else {
          result[0] += 78591312;
          result[1] += 599019;
          result[2] += 2755488;
          result[3] += 239607;
          result[4] += 3474311;
          result[5] += 239607;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 1590728;
          result[2] += 4772185;
          result[3] += 4772185;
          result[4] += 3181457;
          result[5] += 71582788;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1087333;
          result[3] += 61978009;
          result[4] += 0;
          result[5] += 22834003;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 6135667;
          result[2] += 4601750;
          result[3] += 23008753;
          result[4] += 19940919;
          result[5] += 32212254;
        } else {
          result[0] += 1789569;
          result[1] += 2386092;
          result[2] += 48914905;
          result[3] += 25053975;
          result[4] += 0;
          result[5] += 7754802;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 32212254;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1097755;
          result[1] += 0;
          result[2] += 66139751;
          result[3] += 15643011;
          result[4] += 1097755;
          result[5] += 1921071;
        } else {
          result[0] += 1495083;
          result[1] += 0;
          result[2] += 82637345;
          result[3] += 1495083;
          result[4] += 0;
          result[5] += 271833;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 381774;
          result[4] += 82845146;
          result[5] += 2672424;
        } else {
          result[0] += 0;
          result[1] += 70281283;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15618062;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1753047;
          result[1] += 738125;
          result[2] += 92265;
          result[3] += 4428752;
          result[4] += 4151955;
          result[5] += 74735198;
        } else {
          result[0] += 10970840;
          result[1] += 2567643;
          result[2] += 2100799;
          result[3] += 31978832;
          result[4] += 4201598;
          result[5] += 34079631;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 83681287;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2218058;
          result[5] += 0;
        } else {
          result[0] += 6165024;
          result[1] += 24249097;
          result[2] += 0;
          result[3] += 1233004;
          result[4] += 52197210;
          result[5] += 2055008;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 32877916;
          result[1] += 1852277;
          result[2] += 4167623;
          result[3] += 20375047;
          result[4] += 8103711;
          result[5] += 18522770;
        } else {
          result[0] += 71874962;
          result[1] += 1274943;
          result[2] += 5577879;
          result[3] += 2151467;
          result[4] += 3027991;
          result[5] += 1992099;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 16106127;
          result[4] += 48318382;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 6362914;
          result[3] += 4772185;
          result[4] += 6362914;
          result[5] += 68401330;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10642396;
          result[3] += 50931470;
          result[4] += 2280513;
          result[5] += 22044964;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56021312;
          result[3] += 0;
          result[4] += 0;
          result[5] += 29878033;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27790964;
          result[3] += 37896770;
          result[4] += 0;
          result[5] += 20211610;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 17412029;
          result[1] += 0;
          result[2] += 47592880;
          result[3] += 4643207;
          result[4] += 8125613;
          result[5] += 8125613;
        } else {
          result[0] += 0;
          result[1] += 194122;
          result[2] += 78328556;
          result[3] += 6891359;
          result[4] += 0;
          result[5] += 485307;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 3031741;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 70740637;
          result[5] += 12126966;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 227246;
          result[3] += 2272469;
          result[4] += 4544938;
          result[5] += 78854690;
        } else {
          result[0] += 13071639;
          result[1] += 871442;
          result[2] += 1369409;
          result[3] += 28384131;
          result[4] += 5726623;
          result[5] += 36476099;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 32843867;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53055478;
          result[5] += 0;
        } else {
          result[0] += 1187548;
          result[1] += 82732549;
          result[2] += 0;
          result[3] += 395849;
          result[4] += 1583398;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 70161531;
          result[1] += 4021115;
          result[2] += 207988;
          result[3] += 2079887;
          result[4] += 8250219;
          result[5] += 1178602;
        } else {
          result[0] += 16843009;
          result[1] += 3087884;
          result[2] += 27510248;
          result[3] += 21334478;
          result[4] += 3087884;
          result[5] += 14035840;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11204262;
          result[3] += 0;
          result[4] += 7469508;
          result[5] += 67225575;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15823563;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 27126109;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30923764;
          result[3] += 13743895;
          result[4] += 0;
          result[5] += 41231686;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65617555;
          result[3] += 17895697;
          result[4] += 0;
          result[5] += 2386092;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f10000))) ) ) {
          result[0] += 0;
          result[1] += 2147483;
          result[2] += 62277025;
          result[3] += 4294967;
          result[4] += 6442450;
          result[5] += 10737418;
        } else {
          result[0] += 75161927;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73790187;
          result[3] += 12109158;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 144126;
          result[2] += 83737449;
          result[3] += 2017769;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 770397;
          result[1] += 1540795;
          result[2] += 0;
          result[3] += 1155596;
          result[4] += 78195368;
          result[5] += 4237187;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 310854;
          result[3] += 3937485;
          result[4] += 4351957;
          result[5] += 77299049;
        } else {
          result[0] += 9712237;
          result[1] += 1079137;
          result[2] += 0;
          result[3] += 31726642;
          result[4] += 5611515;
          result[5] += 37769812;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          result[0] += 2442635;
          result[1] += 32568472;
          result[2] += 0;
          result[3] += 1221317;
          result[4] += 48852708;
          result[5] += 814211;
        } else {
          result[0] += 59090973;
          result[1] += 920898;
          result[2] += 6599771;
          result[3] += 7674152;
          result[4] += 5730033;
          result[5] += 5883516;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 85671496;
          result[2] += 0;
          result[3] += 0;
          result[4] += 227849;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 62992853;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22906492;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 0;
          result[4] += 64424509;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12271335;
          result[4] += 3067833;
          result[5] += 70560176;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 1481023;
          result[1] += 0;
          result[2] += 28139440;
          result[3] += 48133254;
          result[4] += 0;
          result[5] += 8145627;
        } else {
          result[0] += 3655291;
          result[1] += 0;
          result[2] += 74933471;
          result[3] += 7310582;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 64424509;
          result[1] += 21474836;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1311440;
          result[1] += 0;
          result[2] += 63604859;
          result[3] += 13114403;
          result[4] += 1967160;
          result[5] += 5901481;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71416316;
          result[3] += 13484199;
          result[4] += 0;
          result[5] += 998829;
        } else {
          result[0] += 149130;
          result[1] += 0;
          result[2] += 84109776;
          result[3] += 1640438;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 70740637;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15158708;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 3769877;
          result[2] += 0;
          result[3] += 0;
          result[4] += 75666821;
          result[5] += 6462646;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 3746117;
          result[1] += 87119;
          result[2] += 348476;
          result[3] += 4530188;
          result[4] += 4355950;
          result[5] += 72831494;
        } else {
          result[0] += 6701367;
          result[1] += 1218430;
          result[2] += 7107510;
          result[3] += 38989774;
          result[4] += 2639932;
          result[5] += 29242330;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          result[0] += 206488;
          result[1] += 83834457;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1858399;
          result[5] += 0;
        } else {
          result[0] += 16106127;
          result[1] += 32212254;
          result[2] += 0;
          result[3] += 32212254;
          result[4] += 0;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 70535850;
          result[1] += 2648878;
          result[2] += 151364;
          result[3] += 1740691;
          result[4] += 8098000;
          result[5] += 2724560;
        } else {
          result[0] += 17842594;
          result[1] += 1019576;
          result[2] += 19881747;
          result[3] += 23450266;
          result[4] += 5607672;
          result[5] += 18097488;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 6607641;
          result[2] += 6607641;
          result[3] += 0;
          result[4] += 66076419;
          result[5] += 6607641;
        } else {
          result[0] += 0;
          result[1] += 4210752;
          result[2] += 2526451;
          result[3] += 24422363;
          result[4] += 5052902;
          result[5] += 49686876;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 7158278;
          result[1] += 0;
          result[2] += 7158278;
          result[3] += 50107951;
          result[4] += 14316557;
          result[5] += 7158278;
        } else {
          result[0] += 1789569;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 10737418;
          result[4] += 0;
          result[5] += 1789569;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3067833;
          result[1] += 0;
          result[2] += 34768782;
          result[3] += 41927061;
          result[4] += 0;
          result[5] += 6135667;
        } else {
          result[0] += 15070060;
          result[1] += 0;
          result[2] += 70829285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 200231;
          result[2] += 81193903;
          result[3] += 3804399;
          result[4] += 0;
          result[5] += 700810;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 368666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80738011;
          result[5] += 4792667;
        } else {
          result[0] += 0;
          result[1] += 10737418;
          result[2] += 0;
          result[3] += 48318382;
          result[4] += 26843545;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 71233603;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13618188;
          result[5] += 1047552;
        } else {
          result[0] += 138212;
          result[1] += 138212;
          result[2] += 621958;
          result[3] += 13890401;
          result[4] += 5044772;
          result[5] += 66065788;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 84923216;
          result[2] += 0;
          result[3] += 195225;
          result[4] += 780903;
          result[5] += 0;
        } else {
          result[0] += 57266230;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64996324;
          result[1] += 4574521;
          result[2] += 889490;
          result[3] += 1778980;
          result[4] += 10928023;
          result[5] += 2732005;
        } else {
          result[0] += 16773245;
          result[1] += 254140;
          result[2] += 23380887;
          result[3] += 22110186;
          result[4] += 4574521;
          result[5] += 18806365;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 1908874;
          result[2] += 15270994;
          result[3] += 15270994;
          result[4] += 3817748;
          result[5] += 49630733;
        } else {
          result[0] += 0;
          result[1] += 894784;
          result[2] += 22369621;
          result[3] += 49213166;
          result[4] += 894784;
          result[5] += 12526987;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 496528;
          result[1] += 0;
          result[2] += 67527809;
          result[3] += 14895840;
          result[4] += 0;
          result[5] += 2979168;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ee0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42940000))) ) ) {
          result[0] += 21474836;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 21474836;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 654887;
          result[1] += 0;
          result[2] += 81315136;
          result[3] += 3929322;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
          result[0] += 14316557;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1201389;
          result[1] += 1201389;
          result[2] += 300347;
          result[3] += 300347;
          result[4] += 79291703;
          result[5] += 3604168;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          result[0] += 84944908;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 954437;
          result[5] += 0;
        } else {
          result[0] += 945547;
          result[1] += 436406;
          result[2] += 0;
          result[3] += 9019067;
          result[4] += 7637113;
          result[5] += 67861210;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 61356675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 24542670;
          result[5] += 0;
        } else {
          result[0] += 193466;
          result[1] += 85125477;
          result[2] += 0;
          result[3] += 0;
          result[4] += 580400;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 68719476;
          result[1] += 4532561;
          result[2] += 146211;
          result[3] += 1827645;
          result[4] += 8407170;
          result[5] += 2266280;
        } else {
          result[0] += 11663397;
          result[1] += 157613;
          result[2] += 19386457;
          result[3] += 29158493;
          result[4] += 2837042;
          result[5] += 22696340;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 3482405;
          result[1] += 6964811;
          result[2] += 22055237;
          result[3] += 22055237;
          result[4] += 3482405;
          result[5] += 27859247;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 15270994;
          result[3] += 66810602;
          result[4] += 0;
          result[5] += 3817748;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 67773795;
          result[3] += 9456808;
          result[4] += 0;
          result[5] += 8668741;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25451658;
          result[3] += 50903316;
          result[4] += 0;
          result[5] += 9544371;
        } else {
          result[0] += 8053063;
          result[1] += 5368709;
          result[2] += 59055800;
          result[3] += 8053063;
          result[4] += 0;
          result[5] += 5368709;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73677894;
          result[3] += 11872267;
          result[4] += 0;
          result[5] += 349184;
        } else {
          result[0] += 1434311;
          result[1] += 0;
          result[2] += 82074514;
          result[3] += 2390519;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 419021;
          result[1] += 5447275;
          result[2] += 0;
          result[3] += 0;
          result[4] += 80033049;
          result[5] += 0;
        } else {
          result[0] += 35314175;
          result[1] += 1908874;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15270994;
          result[5] += 33405301;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 102383;
          result[1] += 204766;
          result[2] += 0;
          result[3] += 4095320;
          result[4] += 4300086;
          result[5] += 77196789;
        } else {
          result[0] += 995934;
          result[1] += 3236786;
          result[2] += 1742885;
          result[3] += 39588394;
          result[4] += 2987803;
          result[5] += 37347541;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 24542670;
          result[2] += 0;
          result[3] += 0;
          result[4] += 61356675;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85699579;
          result[2] += 0;
          result[3] += 0;
          result[4] += 199765;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 33342509;
          result[1] += 2543072;
          result[2] += 5509990;
          result[3] += 13704336;
          result[4] += 14552027;
          result[5] += 16247409;
        } else {
          result[0] += 72827706;
          result[1] += 1358092;
          result[2] += 2376661;
          result[3] += 1867377;
          result[4] += 7045104;
          result[5] += 424403;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
          result[0] += 4521018;
          result[1] += 38428654;
          result[2] += 18084072;
          result[3] += 4521018;
          result[4] += 13563054;
          result[5] += 6781527;
        } else {
          result[0] += 676372;
          result[1] += 0;
          result[2] += 4734609;
          result[3] += 50051587;
          result[4] += 2705491;
          result[5] += 27731284;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26843545;
          result[3] += 59055800;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 75161927;
          result[3] += 3579139;
          result[4] += 0;
          result[5] += 3579139;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 75793540;
          result[1] += 0;
          result[2] += 10105805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 68719476;
          result[3] += 17179869;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1974697;
          result[1] += 0;
          result[2] += 48380091;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 6911441;
        } else {
          result[0] += 283184;
          result[1] += 0;
          result[2] += 79102914;
          result[3] += 6041272;
          result[4] += 0;
          result[5] += 471974;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 273564;
          result[2] += 0;
          result[3] += 1094259;
          result[4] += 77145272;
          result[5] += 7386249;
        } else {
          result[0] += 0;
          result[1] += 60361702;
          result[2] += 2321603;
          result[3] += 0;
          result[4] += 16251227;
          result[5] += 6964811;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 283808;
          result[3] += 7568224;
          result[4] += 3973317;
          result[5] += 74073995;
        } else {
          result[0] += 17546512;
          result[1] += 785664;
          result[2] += 1571329;
          result[3] += 31950366;
          result[4] += 8904200;
          result[5] += 25141271;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 22906492;
          result[2] += 954437;
          result[3] += 3817748;
          result[4] += 54402919;
          result[5] += 3817748;
        } else {
          result[0] += 0;
          result[1] += 85256707;
          result[2] += 0;
          result[3] += 0;
          result[4] += 642638;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 72282809;
          result[1] += 2574270;
          result[2] += 338719;
          result[3] += 1219391;
          result[4] += 6164700;
          result[5] += 3319454;
        } else {
          result[0] += 14870957;
          result[1] += 782681;
          result[2] += 19175708;
          result[3] += 22893447;
          result[4] += 5087432;
          result[5] += 23089118;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 8589934;
          result[1] += 6871947;
          result[2] += 12025908;
          result[3] += 6871947;
          result[4] += 5153960;
          result[5] += 46385646;
        } else {
          result[0] += 4090445;
          result[1] += 0;
          result[2] += 16361780;
          result[3] += 47040117;
          result[4] += 0;
          result[5] += 18407002;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2551465;
          result[1] += 0;
          result[2] += 52730291;
          result[3] += 26365145;
          result[4] += 0;
          result[5] += 4252442;
        } else {
          result[0] += 4066241;
          result[1] += 0;
          result[2] += 71667501;
          result[3] += 8132482;
          result[4] += 0;
          result[5] += 2033120;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71396858;
          result[3] += 11155759;
          result[4] += 0;
          result[5] += 3346727;
        } else {
          result[0] += 172142;
          result[1] += 0;
          result[2] += 84694345;
          result[3] += 1032857;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 349184;
          result[2] += 0;
          result[3] += 349184;
          result[4] += 82058318;
          result[5] += 3142658;
        } else {
          result[0] += 0;
          result[1] += 31814572;
          result[2] += 0;
          result[3] += 22270200;
          result[4] += 6362914;
          result[5] += 25451658;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 2904808;
          result[1] += 580961;
          result[2] += 414972;
          result[3] += 5062666;
          result[4] += 6556568;
          result[5] += 70379367;
        } else {
          result[0] += 517465;
          result[1] += 1034931;
          result[2] += 3104795;
          result[3] += 48124332;
          result[4] += 0;
          result[5] += 33117820;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 11405722;
          result[1] += 25306446;
          result[2] += 712857;
          result[3] += 712857;
          result[4] += 44197173;
          result[5] += 3564288;
        } else {
          result[0] += 63838422;
          result[1] += 1923568;
          result[2] += 3246021;
          result[3] += 5951039;
          result[4] += 4748809;
          result[5] += 6191485;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 12271335;
          result[5] += 73628010;
        } else {
          result[0] += 998829;
          result[1] += 998829;
          result[2] += 3995318;
          result[3] += 64923924;
          result[4] += 998829;
          result[5] += 13983614;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12984784;
          result[3] += 16980103;
          result[4] += 10987125;
          result[5] += 44947332;
        } else {
          result[0] += 4908534;
          result[1] += 0;
          result[2] += 55221008;
          result[3] += 12271335;
          result[4] += 3681400;
          result[5] += 9817068;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 54504661;
          result[3] += 26598274;
          result[4] += 0;
          result[5] += 4796410;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 77945702;
          result[3] += 7953643;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 14939016;
          result[1] += 0;
          result[2] += 41082295;
          result[3] += 0;
          result[4] += 0;
          result[5] += 29878033;
        } else {
          result[0] += 748034;
          result[1] += 0;
          result[2] += 82283843;
          result[3] += 2742794;
          result[4] += 0;
          result[5] += 124672;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 814211;
          result[1] += 814211;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81014075;
          result[5] += 3256847;
        } else {
          result[0] += 0;
          result[1] += 6285317;
          result[2] += 0;
          result[3] += 0;
          result[4] += 56567861;
          result[5] += 23046165;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 1420606;
          result[1] += 94707;
          result[2] += 0;
          result[3] += 3882991;
          result[4] += 4830062;
          result[5] += 75670978;
        } else {
          result[0] += 3834792;
          result[1] += 255652;
          result[2] += 2300875;
          result[3] += 40904450;
          result[4] += 5368709;
          result[5] += 33234865;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 84925430;
          result[2] += 0;
          result[3] += 0;
          result[4] += 973915;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 32212254;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 66775068;
          result[1] += 4797059;
          result[2] += 1023372;
          result[3] += 2046745;
          result[4] += 9722040;
          result[5] += 1535059;
        } else {
          result[0] += 11696932;
          result[1] += 365529;
          result[2] += 27597449;
          result[3] += 25404274;
          result[4] += 3472526;
          result[5] += 17362633;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 4090445;
          result[1] += 0;
          result[2] += 4090445;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 47040117;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 25451658;
          result[3] += 47721858;
          result[4] += 0;
          result[5] += 12725829;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 9544371;
          result[2] += 28633115;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 19088743;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 69537565;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 10226112;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 814211;
          result[1] += 0;
          result[2] += 65951156;
          result[3] += 17505553;
          result[4] += 407105;
          result[5] += 1221317;
        } else {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 73105826;
          result[3] += 12793519;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 446617;
          result[1] += 0;
          result[2] += 83964005;
          result[3] += 1042106;
          result[4] += 0;
          result[5] += 446617;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 1238932;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78465748;
          result[5] += 6194664;
        } else {
          result[0] += 0;
          result[1] += 6410398;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51283191;
          result[5] += 28205755;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2410194;
          result[1] += 96407;
          result[2] += 0;
          result[3] += 5013205;
          result[4] += 4241943;
          result[5] += 74137594;
        } else {
          result[0] += 6769241;
          result[1] += 7469508;
          result[2] += 2100799;
          result[3] += 37580963;
          result[4] += 1633954;
          result[5] += 30344877;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 39268272;
          result[2] += 0;
          result[3] += 14725602;
          result[4] += 31905471;
          result[5] += 0;
        } else {
          result[0] += 200699;
          result[1] += 85698646;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 67695511;
          result[1] += 3413219;
          result[2] += 948116;
          result[3] += 2085856;
          result[4] += 9923618;
          result[5] += 1833025;
        } else {
          result[0] += 11153218;
          result[1] += 978352;
          result[2] += 19762719;
          result[3] += 20154060;
          result[4] += 7044137;
          result[5] += 26806857;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 14939016;
          result[4] += 3734754;
          result[5] += 67225575;
        } else {
          result[0] += 0;
          result[1] += 3800856;
          result[2] += 34207704;
          result[3] += 26605992;
          result[4] += 1520342;
          result[5] += 19764451;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79763678;
          result[3] += 0;
          result[4] += 2045222;
          result[5] += 4090445;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 70452533;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 1130254;
        } else {
          result[0] += 66810602;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 74317411;
          result[3] += 10616773;
          result[4] += 0;
          result[5] += 965161;
        } else {
          result[0] += 327860;
          result[1] += 0;
          result[2] += 84096115;
          result[3] += 1475370;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 395849;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84315947;
          result[5] += 1187548;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 34359738;
          result[5] += 51539607;
        } else {
          result[0] += 12725829;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 73173516;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 78741067;
          result[5] += 7158278;
        } else {
          result[0] += 352528;
          result[1] += 117509;
          result[2] += 0;
          result[3] += 3055243;
          result[4] += 1175093;
          result[5] += 81198971;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 4320381;
          result[1] += 254140;
          result[2] += 2033120;
          result[3] += 15756684;
          result[4] += 8640762;
          result[5] += 54894256;
        } else {
          result[0] += 4521018;
          result[1] += 1644006;
          result[2] += 2466009;
          result[3] += 48087193;
          result[4] += 5343021;
          result[5] += 23838095;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x43048000))) ) ) {
          result[0] += 0;
          result[1] += 66571993;
          result[2] += 8589934;
          result[3] += 4294967;
          result[4] += 6442450;
          result[5] += 0;
        } else {
          result[0] += 34359738;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51539607;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 17417378;
          result[1] += 24146820;
          result[2] += 0;
          result[3] += 0;
          result[4] += 41168350;
          result[5] += 3166796;
        } else {
          result[0] += 67065118;
          result[1] += 1081695;
          result[2] += 1336212;
          result[3] += 6490172;
          result[4] += 4963073;
          result[5] += 4963073;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 30180851;
          result[3] += 36814005;
          result[4] += 0;
          result[5] += 18904489;
        } else {
          result[0] += 2303160;
          result[1] += 0;
          result[2] += 77027913;
          result[3] += 5459342;
          result[4] += 170604;
          result[5] += 938324;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 770397;
          result[3] += 385198;
          result[4] += 82432556;
          result[5] += 2311193;
        } else {
          result[0] += 0;
          result[1] += 68719476;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
          result[0] += 122538;
          result[1] += 0;
          result[2] += 122538;
          result[3] += 3185995;
          result[4] += 3553610;
          result[5] += 78914662;
        } else {
          result[0] += 4700152;
          result[1] += 3889781;
          result[2] += 3079410;
          result[3] += 21555873;
          result[4] += 7131266;
          result[5] += 45542860;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 24001287;
          result[2] += 0;
          result[3] += 7579354;
          result[4] += 54318704;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84738543;
          result[2] += 0;
          result[3] += 193466;
          result[4] += 967334;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 67867996;
          result[1] += 3380878;
          result[2] += 375653;
          result[3] += 1815656;
          result[4] += 9453936;
          result[5] += 3005224;
        } else {
          result[0] += 20053157;
          result[1] += 2095105;
          result[2] += 23345466;
          result[3] += 24542670;
          result[4] += 2394406;
          result[5] += 13468538;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4294967;
          result[4] += 51539607;
          result[5] += 30064771;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 2147483;
          result[4] += 4294967;
          result[5] += 68719476;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 7084482;
          result[3] += 51362495;
          result[4] += 0;
          result[5] += 27452368;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76354974;
          result[3] += 9544371;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 4294967;
          result[2] += 17179869;
          result[3] += 52971263;
          result[4] += 0;
          result[5] += 11453246;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 67131421;
          result[3] += 17324237;
          result[4] += 0;
          result[5] += 1443686;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 24778657;
          result[1] += 0;
          result[2] += 33038209;
          result[3] += 1651910;
          result[4] += 16519104;
          result[5] += 9911462;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 80598252;
          result[3] += 4651979;
          result[4] += 108185;
          result[5] += 540927;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        } else {
          result[0] += 681740;
          result[1] += 340870;
          result[2] += 1363481;
          result[3] += 0;
          result[4] += 80104548;
          result[5] += 3408704;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 2571836;
          result[1] += 600095;
          result[2] += 0;
          result[3] += 2571836;
          result[4] += 7201142;
          result[5] += 72954434;
        } else {
          result[0] += 294175;
          result[1] += 0;
          result[2] += 2647582;
          result[3] += 49715717;
          result[4] += 588351;
          result[5] += 32653518;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 11453246;
          result[1] += 29306835;
          result[2] += 0;
          result[3] += 0;
          result[4] += 44128683;
          result[5] += 1010580;
        } else {
          result[0] += 58822378;
          result[1] += 466844;
          result[2] += 4551731;
          result[3] += 7994708;
          result[4] += 4843509;
          result[5] += 9220174;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 85474101;
          result[2] += 0;
          result[3] += 0;
          result[4] += 425244;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 12271335;
          result[2] += 49085340;
          result[3] += 24542670;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12632256;
          result[3] += 65687735;
          result[4] += 0;
          result[5] += 7579354;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 85899345;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 70960329;
          result[3] += 11204262;
          result[4] += 0;
          result[5] += 3734754;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36612835;
          result[3] += 36612835;
          result[4] += 0;
          result[5] += 12673673;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71755276;
          result[3] += 12074205;
          result[4] += 0;
          result[5] += 2069863;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1140761;
          result[1] += 0;
          result[2] += 80765918;
          result[3] += 3764513;
          result[4] += 0;
          result[5] += 228152;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 412977;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85073390;
          result[5] += 412977;
        } else {
          result[0] += 3390763;
          result[1] += 2260509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50861454;
          result[5] += 29386618;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 80266601;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 5632743;
          result[5] += 0;
        } else {
          result[0] += 132152;
          result[1] += 264305;
          result[2] += 726840;
          result[3] += 15329729;
          result[4] += 4294967;
          result[5] += 65151350;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 84874294;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1025051;
          result[5] += 0;
        } else {
          result[0] += 3491843;
          result[1] += 34220064;
          result[2] += 0;
          result[3] += 1396737;
          result[4] += 45393963;
          result[5] += 1396737;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 69872848;
          result[1] += 2615202;
          result[2] += 335282;
          result[3] += 3352823;
          result[4] += 7309155;
          result[5] += 2414033;
        } else {
          result[0] += 12556715;
          result[1] += 285379;
          result[2] += 32247927;
          result[3] += 23115770;
          result[4] += 5422217;
          result[5] += 12271335;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1651910;
          result[3] += 19822925;
          result[4] += 1651910;
          result[5] += 62772598;
        } else {
          result[0] += 0;
          result[1] += 20211610;
          result[2] += 30317416;
          result[3] += 0;
          result[4] += 25264513;
          result[5] += 10105805;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27042386;
          result[3] += 41358944;
          result[4] += 0;
          result[5] += 17498014;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 81604378;
          result[3] += 0;
          result[4] += 0;
          result[5] += 4294967;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 54084773;
          result[3] += 27042386;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 1827645;
          result[1] += 0;
          result[2] += 77674940;
          result[3] += 5482936;
          result[4] += 0;
          result[5] += 913822;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 64948285;
          result[3] += 20951059;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 256033;
          result[1] += 0;
          result[2] += 83595041;
          result[3] += 1792236;
          result[4] += 0;
          result[5] += 256033;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 756822;
          result[1] += 1135233;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82493644;
          result[5] += 1513644;
        } else {
          result[0] += 3817748;
          result[1] += 0;
          result[2] += 3817748;
          result[3] += 5726623;
          result[4] += 40086361;
          result[5] += 32450864;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3195892;
          result[1] += 1792817;
          result[2] += 389742;
          result[3] += 6157938;
          result[4] += 3585635;
          result[5] += 70777319;
        } else {
          result[0] += 1060485;
          result[1] += 0;
          result[2] += 530242;
          result[3] += 53024287;
          result[4] += 530242;
          result[5] += 30754086;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 63663820;
          result[1] += 3978988;
          result[2] += 1930979;
          result[3] += 2925727;
          result[4] += 10883704;
          result[5] += 2516125;
        } else {
          result[0] += 11884132;
          result[1] += 0;
          result[2] += 17513458;
          result[3] += 29814578;
          result[4] += 6671793;
          result[5] += 20015381;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 85278386;
          result[2] += 0;
          result[3] += 206986;
          result[4] += 413972;
          result[5] += 0;
        } else {
          result[0] += 34359738;
          result[1] += 17179869;
          result[2] += 0;
          result[3] += 34359738;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2260509;
          result[3] += 38428654;
          result[4] += 0;
          result[5] += 45210182;
        } else {
          result[0] += 1847297;
          result[1] += 3694595;
          result[2] += 48029741;
          result[3] += 24014870;
          result[4] += 2770946;
          result[5] += 5541893;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 8589934;
          result[2] += 47244640;
          result[3] += 0;
          result[4] += 0;
          result[5] += 30064771;
        } else {
          result[0] += 1753047;
          result[1] += 0;
          result[2] += 80640202;
          result[3] += 1753047;
          result[4] += 0;
          result[5] += 1753047;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 55418932;
          result[3] += 27709466;
          result[4] += 0;
          result[5] += 2770946;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 76067493;
          result[3] += 9314386;
          result[4] += 0;
          result[5] += 517465;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 469395;
          result[1] += 0;
          result[2] += 79797206;
          result[3] += 5163348;
          result[4] += 0;
          result[5] += 469395;
        } else {
          result[0] += 229677;
          result[1] += 0;
          result[2] += 84980636;
          result[3] += 689032;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 695541;
          result[3] += 0;
          result[4] += 84508263;
          result[5] += 695541;
        } else {
          result[0] += 14810232;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50354788;
          result[5] += 20734324;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 60412726;
          result[1] += 0;
          result[2] += 0;
          result[3] += 943948;
          result[4] += 21710823;
          result[5] += 2831846;
        } else {
          result[0] += 132356;
          result[1] += 198534;
          result[2] += 330891;
          result[3] += 13963607;
          result[4] += 3573624;
          result[5] += 67700331;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 84165951;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1733394;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 26843545;
          result[2] += 894784;
          result[3] += 3579139;
          result[4] += 54581876;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 72298616;
          result[1] += 2863311;
          result[2] += 501079;
          result[3] += 2075900;
          result[4] += 6728782;
          result[5] += 1431655;
        } else {
          result[0] += 21555266;
          result[1] += 3860644;
          result[2] += 14155697;
          result[3] += 21876986;
          result[4] += 5790967;
          result[5] += 18659783;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 73173516;
          result[4] += 0;
          result[5] += 12725829;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 24542670;
          result[3] += 0;
          result[4] += 0;
          result[5] += 61356675;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 47721858;
        } else {
          result[0] += 2147483;
          result[1] += 0;
          result[2] += 36507222;
          result[3] += 39728447;
          result[4] += 0;
          result[5] += 7516192;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1080494;
          result[1] += 0;
          result[2] += 65910189;
          result[3] += 14316557;
          result[4] += 270123;
          result[5] += 4321979;
        } else {
          result[0] += 72684061;
          result[1] += 0;
          result[2] += 13215283;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78741067;
          result[3] += 6646973;
          result[4] += 0;
          result[5] += 511305;
        } else {
          result[0] += 526989;
          result[1] += 0;
          result[2] += 84845366;
          result[3] += 526989;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 681740;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 83854123;
          result[5] += 1363481;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 71874962;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10518287;
          result[5] += 3506095;
        } else {
          result[0] += 189623;
          result[1] += 0;
          result[2] += 94811;
          result[3] += 3318407;
          result[4] += 3792465;
          result[5] += 78504037;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 8765239;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5259143;
          result[4] += 2629571;
          result[5] += 69245391;
        } else {
          result[0] += 4820881;
          result[1] += 2191309;
          result[2] += 3944357;
          result[3] += 42949672;
          result[4] += 2848702;
          result[5] += 29144420;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 64424509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 21474836;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 28240880;
          result[1] += 2353406;
          result[2] += 1176703;
          result[3] += 13649759;
          result[4] += 26358155;
          result[5] += 14120440;
        } else {
          result[0] += 70513234;
          result[1] += 3479271;
          result[2] += 1237074;
          result[3] += 3247320;
          result[4] += 6108054;
          result[5] += 1314391;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 756822;
          result[2] += 26867196;
          result[3] += 32543364;
          result[4] += 1135233;
          result[5] += 24596729;
        } else {
          result[0] += 2364202;
          result[1] += 0;
          result[2] += 75917158;
          result[3] += 6216976;
          result[4] += 262689;
          result[5] += 1138319;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 6179809;
          result[2] += 0;
          result[3] += 0;
          result[4] += 73848718;
          result[5] += 5870818;
        } else {
          result[0] += 55743192;
          result[1] += 0;
          result[2] += 0;
          result[3] += 2741468;
          result[4] += 10052051;
          result[5] += 17362633;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 513342;
          result[1] += 598899;
          result[2] += 342228;
          result[3] += 6245669;
          result[4] += 7186797;
          result[5] += 71012407;
        } else {
          result[0] += 477218;
          result[1] += 3340530;
          result[2] += 0;
          result[3] += 54402919;
          result[4] += 2386092;
          result[5] += 25292585;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 31647127;
          result[2] += 0;
          result[3] += 0;
          result[4] += 54252218;
          result[5] += 0;
        } else {
          result[0] += 206488;
          result[1] += 85486368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 206488;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 6092152;
          result[1] += 18276456;
          result[2] += 0;
          result[3] += 609215;
          result[4] += 54220154;
          result[5] += 6701367;
        } else {
          result[0] += 62915631;
          result[1] += 1341224;
          result[2] += 3353061;
          result[3] += 6523229;
          result[4] += 4328497;
          result[5] += 7437700;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4051855;
          result[3] += 57536354;
          result[4] += 3241484;
          result[5] += 21069650;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 46061968;
          result[3] += 36102623;
          result[4] += 0;
          result[5] += 3734754;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 3067833;
          result[4] += 27610504;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 67108863;
          result[3] += 9842633;
          result[4] += 894784;
          result[5] += 8053063;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34359738;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 22906492;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          result[0] += 70281283;
          result[1] += 0;
          result[2] += 15618062;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 541382;
          result[1] += 0;
          result[2] += 77417687;
          result[3] += 6677049;
          result[4] += 0;
          result[5] += 1263225;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82014450;
          result[5] += 3884895;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4004631;
          result[4] += 4905673;
          result[5] += 76989040;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42820000))) ) ) {
          result[0] += 23730947;
          result[1] += 4679341;
          result[2] += 2339670;
          result[3] += 3676625;
          result[4] += 45790701;
          result[5] += 5682057;
        } else {
          result[0] += 695541;
          result[1] += 2434394;
          result[2] += 3477706;
          result[3] += 22605091;
          result[4] += 12171972;
          result[5] += 44514640;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 1827645;
          result[1] += 18276456;
          result[2] += 0;
          result[3] += 0;
          result[4] += 65795243;
          result[5] += 0;
        } else {
          result[0] += 616502;
          result[1] += 84666340;
          result[2] += 0;
          result[3] += 0;
          result[4] += 616502;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64734792;
          result[1] += 5813719;
          result[2] += 391936;
          result[3] += 3527425;
          result[4] += 5813719;
          result[5] += 5617751;
        } else {
          result[0] += 9138228;
          result[1] += 182764;
          result[2] += 19921337;
          result[3] += 38197794;
          result[4] += 2741468;
          result[5] += 15717752;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85899345;
          result[5] += 0;
        } else {
          result[0] += 788067;
          result[1] += 0;
          result[2] += 26006223;
          result[3] += 18913617;
          result[4] += 788067;
          result[5] += 39403369;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 526989;
          result[1] += 0;
          result[2] += 69826155;
          result[3] += 13701736;
          result[4] += 0;
          result[5] += 1844464;
        } else {
          result[0] += 8180890;
          result[1] += 0;
          result[2] += 36814005;
          result[3] += 36814005;
          result[4] += 0;
          result[5] += 4090445;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 85899345;
        } else {
          result[0] += 159664;
          result[1] += 0;
          result[2] += 83983375;
          result[3] += 1596642;
          result[4] += 0;
          result[5] += 159664;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84557168;
          result[5] += 1342177;
        } else {
          result[0] += 6247225;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42168769;
          result[5] += 37483350;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 129757;
          result[3] += 1557087;
          result[4] += 1816602;
          result[5] += 82395898;
        } else {
          result[0] += 4472317;
          result[1] += 5089189;
          result[2] += 154217;
          result[3] += 27296560;
          result[4] += 5089189;
          result[5] += 43797871;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 3734754;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82164591;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 84893498;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1005847;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 64847427;
          result[1] += 1816981;
          result[2] += 877163;
          result[3] += 2819453;
          result[4] += 10713922;
          result[5] += 4824397;
        } else {
          result[0] += 16519104;
          result[1] += 2137766;
          result[2] += 20794638;
          result[3] += 22543719;
          result[4] += 4081190;
          result[5] += 19822925;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 9988296;
          result[3] += 0;
          result[4] += 1997659;
          result[5] += 73913390;
        } else {
          result[0] += 7469508;
          result[1] += 3734754;
          result[2] += 12137951;
          result[3] += 47618115;
          result[4] += 1867377;
          result[5] += 13071639;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 28633115;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 79027398;
          result[3] += 6871947;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19088743;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 9544371;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 56754924;
          result[3] += 26076587;
          result[4] += 0;
          result[5] += 3067833;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 68719476;
          result[1] += 0;
          result[2] += 17179869;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 728842;
          result[1] += 0;
          result[2] += 80797445;
          result[3] += 4164816;
          result[4] += 0;
          result[5] += 208240;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81604378;
          result[5] += 4294967;
        } else {
          result[0] += 0;
          result[1] += 81127160;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4772185;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2373414;
          result[1] += 0;
          result[2] += 0;
          result[3] += 3468836;
          result[4] += 3833977;
          result[5] += 76223117;
        } else {
          result[0] += 10239657;
          result[1] += 379246;
          result[2] += 568869;
          result[3] += 38303902;
          result[4] += 6067944;
          result[5] += 30339724;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 23342213;
          result[2] += 3734754;
          result[3] += 0;
          result[4] += 56021312;
          result[5] += 2801065;
        } else {
          result[0] += 0;
          result[1] += 85300048;
          result[2] += 0;
          result[3] += 0;
          result[4] += 599297;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 26387380;
          result[1] += 2620023;
          result[2] += 11228672;
          result[3] += 19650177;
          result[4] += 10292949;
          result[5] += 15720141;
        } else {
          result[0] += 69998131;
          result[1] += 2868775;
          result[2] += 4344146;
          result[3] += 1393405;
          result[4] += 6311306;
          result[5] += 983580;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3067833;
          result[3] += 0;
          result[4] += 15339168;
          result[5] += 67492343;
        } else {
          result[0] += 965161;
          result[1] += 0;
          result[2] += 18338062;
          result[3] += 48258059;
          result[4] += 0;
          result[5] += 18338062;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21474836;
          result[3] += 64424509;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 78536544;
          result[3] += 7362801;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19822925;
          result[3] += 6607641;
          result[4] += 13215283;
          result[5] += 46253493;
        } else {
          result[0] += 77718455;
          result[1] += 0;
          result[2] += 8180890;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 954437;
          result[1] += 954437;
          result[2] += 67049211;
          result[3] += 13839339;
          result[4] += 0;
          result[5] += 3101920;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 83060932;
          result[3] += 2838413;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 68719476;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17179869;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 770397;
          result[2] += 0;
          result[3] += 0;
          result[4] += 85128948;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 68719476;
          result[5] += 17179869;
        } else {
          result[0] += 6135667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 49085340;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 74815559;
          result[5] += 11083786;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 118974;
          result[3] += 1903586;
          result[4] += 1665638;
          result[5] += 82211146;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 82831512;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3067833;
          result[5] += 0;
        } else {
          result[0] += 842150;
          result[1] += 2245734;
          result[2] += 1122867;
          result[3] += 33966734;
          result[4] += 6316128;
          result[5] += 41405730;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          result[0] += 193903;
          result[1] += 85705442;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 19327352;
          result[1] += 10021590;
          result[2] += 2863311;
          result[3] += 4294967;
          result[4] += 44381328;
          result[5] += 5010795;
        } else {
          result[0] += 68083675;
          result[1] += 2582941;
          result[2] += 1390814;
          result[3] += 4569818;
          result[4] += 4569818;
          result[5] += 4702277;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 12271335;
          result[3] += 50619257;
          result[4] += 0;
          result[5] += 23008753;
        } else {
          result[0] += 0;
          result[1] += 1533916;
          result[2] += 65958426;
          result[3] += 9203501;
          result[4] += 0;
          result[5] += 9203501;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 5325296;
          result[1] += 0;
          result[2] += 63672021;
          result[3] += 15281285;
          result[4] += 0;
          result[5] += 1620742;
        } else {
          result[0] += 302995;
          result[1] += 0;
          result[2] += 82263394;
          result[3] += 3029959;
          result[4] += 0;
          result[5] += 302995;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e60000))) ) ) {
          result[0] += 319328;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 82706061;
          result[5] += 2873955;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 74051160;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 11848185;
          result[5] += 0;
        } else {
          result[0] += 138324;
          result[1] += 207486;
          result[2] += 484134;
          result[3] += 12310856;
          result[4] += 5117996;
          result[5] += 67640547;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 28633115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 57266230;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 85704120;
          result[2] += 0;
          result[3] += 0;
          result[4] += 195225;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 1706609;
          result[1] += 25599142;
          result[2] += 0;
          result[3] += 3413219;
          result[4] += 54611504;
          result[5] += 568869;
        } else {
          result[0] += 65038976;
          result[1] += 1764623;
          result[2] += 1323467;
          result[3] += 5735026;
          result[4] += 6428270;
          result[5] += 5608981;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 4405094;
          result[3] += 55797865;
          result[4] += 0;
          result[5] += 25696385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34824059;
          result[3] += 30180851;
          result[4] += 0;
          result[5] += 20894435;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 18407002;
          result[3] += 24542670;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 1590728;
          result[2] += 62038416;
          result[3] += 11135100;
          result[4] += 3181457;
          result[5] += 7953643;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 9544371;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 57266230;
          result[4] += 0;
          result[5] += 4772185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 62472251;
          result[3] += 15618062;
          result[4] += 0;
          result[5] += 7809031;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 49085340;
          result[1] += 0;
          result[2] += 20452225;
          result[3] += 12271335;
          result[4] += 4090445;
          result[5] += 0;
        } else {
          result[0] += 804468;
          result[1] += 0;
          result[2] += 79195442;
          result[3] += 5363122;
          result[4] += 0;
          result[5] += 536312;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 84642282;
          result[5] += 1257063;
        } else {
          result[0] += 0;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 3067833;
          result[1] += 3067833;
          result[2] += 0;
          result[3] += 0;
          result[4] += 67492343;
          result[5] += 12271335;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 36814005;
          result[5] += 49085340;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 53316835;
          result[1] += 0;
          result[2] += 5924092;
          result[3] += 0;
          result[4] += 26658417;
          result[5] += 0;
        } else {
          result[0] += 291843;
          result[1] += 389125;
          result[2] += 972812;
          result[3] += 5253187;
          result[4] += 3891250;
          result[5] += 75101126;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 773867;
          result[1] += 0;
          result[2] += 0;
          result[3] += 12381887;
          result[4] += 5417075;
          result[5] += 67326514;
        } else {
          result[0] += 2684354;
          result[1] += 2684354;
          result[2] += 2300875;
          result[3] += 55987966;
          result[4] += 766958;
          result[5] += 21474836;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 18084072;
          result[2] += 0;
          result[3] += 4521018;
          result[4] += 63294254;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 83766405;
          result[2] += 0;
          result[3] += 581711;
          result[4] += 1551229;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 7032694;
          result[1] += 25619103;
          result[2] += 0;
          result[3] += 0;
          result[4] += 51740541;
          result[5] += 1507006;
        } else {
          result[0] += 66789297;
          result[1] += 703045;
          result[2] += 894784;
          result[3] += 5432622;
          result[4] += 5049143;
          result[5] += 7030452;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 3655291;
          result[3] += 41122027;
          result[4] += 2741468;
          result[5] += 38380558;
        } else {
          result[0] += 2045222;
          result[1] += 8180890;
          result[2] += 53175785;
          result[3] += 6135667;
          result[4] += 0;
          result[5] += 16361780;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 48948230;
          result[3] += 31192499;
          result[4] += 479884;
          result[5] += 5278730;
        } else {
          result[0] += 1942225;
          result[1] += 0;
          result[2] += 76276500;
          result[3] += 6444658;
          result[4] += 176565;
          result[5] += 1059395;
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
