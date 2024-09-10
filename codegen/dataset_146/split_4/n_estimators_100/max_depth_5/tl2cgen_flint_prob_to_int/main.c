
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
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42724805;
            result[5] += 224867;
          } else {
            result[0] += 2454267;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33132604;
            result[5] += 7362801;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42660000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37223049;
            result[5] += 5726623;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1377744;
            result[4] += 599019;
            result[5] += 40972909;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 38264254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3123612;
            result[5] += 1561806;
          } else {
            result[0] += 572662;
            result[1] += 1145324;
            result[2] += 2208840;
            result[3] += 13498468;
            result[4] += 3435973;
            result[5] += 22088403;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428a0000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 9277129;
            result[1] += 3607772;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28518582;
            result[5] += 1546188;
          } else {
            result[0] += 36919601;
            result[1] += 739170;
            result[2] += 155614;
            result[3] += 1906280;
            result[4] += 1867377;
            result[5] += 1361629;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1972953;
            result[1] += 607062;
            result[2] += 10927125;
            result[3] += 15328328;
            result[4] += 1214125;
            result[5] += 12900078;
          } else {
            result[0] += 26160255;
            result[1] += 3123612;
            result[2] += 7809031;
            result[3] += 0;
            result[4] += 5856773;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 38654705;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 20759008;
            result[4] += 0;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40802189;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 12271335;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 9203501;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27126109;
            result[3] += 11302545;
            result[4] += 0;
            result[5] += 4521018;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18673770;
            result[3] += 24275902;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36229656;
            result[3] += 4674794;
            result[4] += 0;
            result[5] += 2045222;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 28633115;
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 530242;
            result[1] += 0;
            result[2] += 37117001;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 530242;
          } else {
            result[0] += 81037;
            result[1] += 0;
            result[2] += 42301375;
            result[3] += 567259;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 668477;
            result[1] += 501358;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40108644;
            result[5] += 1671193;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36022306;
            result[5] += 6927366;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 771195;
            result[4] += 474582;
            result[5] += 41703895;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 5202354;
            result[1] += 120984;
            result[2] += 0;
            result[3] += 6896144;
            result[4] += 5444324;
            result[5] += 25285863;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 464320;
            result[3] += 29252209;
            result[4] += 0;
            result[5] += 13233142;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42857108;
            result[2] += 0;
            result[3] += 0;
            result[4] += 92563;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 32582510;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10367162;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5856773;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36604834;
            result[5] += 488064;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 38658753;
            result[1] += 566725;
            result[2] += 0;
            result[3] += 526244;
            result[4] += 2752665;
            result[5] += 445284;
          } else {
            result[0] += 15991899;
            result[1] += 3198379;
            result[2] += 0;
            result[3] += 9138228;
            result[4] += 4569114;
            result[5] += 10052051;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 3449772;
            result[1] += 1379909;
            result[2] += 3277284;
            result[3] += 17938819;
            result[4] += 7072034;
            result[5] += 9831852;
          } else {
            result[0] += 10270573;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 4201598;
            result[4] += 0;
            result[5] += 1633954;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424a0000))) ) ) {
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2603010;
            result[4] += 0;
            result[5] += 40346662;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 14316557;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 25053975;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10105805;
            result[3] += 26527739;
            result[4] += 0;
            result[5] += 6316128;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20344581;
            result[3] += 6781527;
            result[4] += 0;
            result[5] += 15823563;
          } else {
            result[0] += 753503;
            result[1] += 0;
            result[2] += 34661139;
            result[3] += 6781527;
            result[4] += 0;
            result[5] += 753503;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 36814005;
          } else {
            result[0] += 4156419;
            result[1] += 0;
            result[2] += 24938519;
            result[3] += 13854733;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 2386092;
            result[1] += 9544371;
            result[2] += 2386092;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 19088743;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30156153;
            result[3] += 8224405;
            result[4] += 0;
            result[5] += 4569114;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37009824;
            result[3] += 5482936;
            result[4] += 0;
            result[5] += 456911;
          } else {
            result[0] += 185929;
            result[1] += 0;
            result[2] += 41338285;
            result[3] += 1425458;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42192850;
            result[5] += 756822;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1047552;
            result[3] += 0;
            result[4] += 38759460;
            result[5] += 3142658;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42780000))) ) ) {
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
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
            result[0] += 2741468;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3655291;
            result[4] += 29242330;
            result[5] += 7310582;
          } else {
            result[0] += 40495405;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2454267;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1370734;
            result[4] += 913822;
            result[5] += 40665115;
          } else {
            result[0] += 1022611;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 13293946;
            result[5] += 22497447;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 1372820;
            result[2] += 588351;
            result[3] += 12355385;
            result[4] += 4510696;
            result[5] += 24122419;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 296204;
            result[3] += 31397691;
            result[4] += 1184818;
            result[5] += 10070957;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 11053224;
            result[1] += 5684515;
            result[2] += 0;
            result[3] += 315806;
            result[4] += 25580319;
            result[5] += 315806;
          } else {
            result[0] += 37972840;
            result[1] += 274313;
            result[2] += 313501;
            result[3] += 1645881;
            result[4] += 1724256;
            result[5] += 1018879;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 1747951;
            result[1] += 499414;
            result[2] += 5992977;
            result[3] += 12735077;
            result[4] += 1747951;
            result[5] += 20226299;
          } else {
            result[0] += 26172456;
            result[1] += 8053063;
            result[2] += 4697620;
            result[3] += 0;
            result[4] += 3355443;
            result[5] += 671088;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1235961;
            result[1] += 308990;
            result[2] += 4325866;
            result[3] += 25028226;
            result[4] += 1544952;
            result[5] += 10505675;
          } else {
            result[0] += 2941758;
            result[1] += 1176703;
            result[2] += 18238902;
            result[3] += 8236923;
            result[4] += 4118461;
            result[5] += 8236923;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 412977;
            result[1] += 0;
            result[2] += 28908433;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 2890843;
          } else {
            result[0] += 1302866;
            result[1] += 0;
            result[2] += 39849748;
            result[3] += 1662278;
            result[4] += 0;
            result[5] += 134779;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 305691;
            result[1] += 458537;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41574060;
            result[5] += 611383;
          } else {
            result[0] += 3099460;
            result[1] += 442780;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27452368;
            result[5] += 11955063;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 2147483;
            result[3] += 0;
            result[4] += 30064771;
            result[5] += 0;
          } else {
            result[0] += 39545125;
            result[1] += 0;
            result[2] += 261888;
            result[3] += 0;
            result[4] += 1309441;
            result[5] += 1833217;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 232474;
            result[3] += 1685440;
            result[4] += 1162372;
            result[5] += 39869385;
          } else {
            result[0] += 1051498;
            result[1] += 808845;
            result[2] += 242653;
            result[3] += 15044518;
            result[4] += 5581030;
            result[5] += 20221126;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 38654705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ac0000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 7158278;
            result[1] += 12114010;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23677383;
            result[5] += 0;
          } else {
            result[0] += 39788874;
            result[1] += 371858;
            result[2] += 0;
            result[3] += 278893;
            result[4] += 1998740;
            result[5] += 511305;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1710385;
            result[1] += 190042;
            result[2] += 3610813;
            result[3] += 24135435;
            result[4] += 380085;
            result[5] += 12922910;
          } else {
            result[0] += 14472172;
            result[1] += 1400532;
            result[2] += 16806393;
            result[3] += 3968176;
            result[4] += 2567643;
            result[5] += 3734754;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2526451;
            result[3] += 32843867;
            result[4] += 0;
            result[5] += 7579354;
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 0;
            result[4] += 0;
            result[5] += 39045157;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 19634136;
            result[4] += 0;
            result[5] += 4908534;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37347541;
            result[3] += 3734754;
            result[4] += 0;
            result[5] += 1867377;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42de0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40051228;
            result[3] += 2371454;
            result[4] += 0;
            result[5] += 526989;
          } else {
            result[0] += 1481023;
            result[1] += 0;
            result[2] += 34655943;
            result[3] += 6812706;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 150965;
            result[1] += 0;
            result[2] += 42345811;
            result[3] += 377413;
            result[4] += 0;
            result[5] += 75482;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
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
            result[4] += 42564474;
            result[5] += 385198;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 4521018;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33907636;
            result[5] += 4521018;
          } else {
            result[0] += 0;
            result[1] += 18407002;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 18407002;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 11976351;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1238932;
            result[4] += 19409948;
            result[5] += 10324440;
          } else {
            result[0] += 0;
            result[1] += 44369;
            result[2] += 88738;
            result[3] += 2928386;
            result[4] += 2573430;
            result[5] += 37314746;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38575169;
            result[4] += 0;
            result[5] += 4374503;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1431655;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 24338148;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42440000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 31236125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11713547;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42673764;
            result[2] += 183938;
            result[3] += 0;
            result[4] += 91969;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 34399972;
            result[1] += 502923;
            result[2] += 0;
            result[3] += 301754;
            result[4] += 7141514;
            result[5] += 603508;
          } else {
            result[0] += 915988;
            result[1] += 1933753;
            result[2] += 8854553;
            result[3] += 15470024;
            result[4] += 2849741;
            result[5] += 12925612;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42900000))) ) ) {
            result[0] += 1789569;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34001824;
            result[5] += 1789569;
          } else {
            result[0] += 38198815;
            result[1] += 911780;
            result[2] += 1775573;
            result[3] += 527873;
            result[4] += 1439653;
            result[5] += 95976;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1590728;
            result[3] += 0;
            result[4] += 1590728;
            result[5] += 39768215;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 21474836;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 1047552;
            result[1] += 0;
            result[2] += 8904200;
            result[3] += 26712601;
            result[4] += 0;
            result[5] += 6285317;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 12271335;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 2386092;
            result[1] += 0;
            result[2] += 26247022;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 2386092;
          } else {
            result[0] += 507279;
            result[1] += 0;
            result[2] += 37369597;
            result[3] += 4734609;
            result[4] += 0;
            result[5] += 338186;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35921544;
            result[3] += 6247225;
            result[4] += 0;
            result[5] += 780903;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42327213;
            result[3] += 622459;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 390451;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39240383;
            result[5] += 3318838;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42600000))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 172951;
            result[1] += 57650;
            result[2] += 0;
            result[3] += 980059;
            result[4] += 1671866;
            result[5] += 40067144;
          } else {
            result[0] += 15556574;
            result[1] += 1014559;
            result[2] += 0;
            result[3] += 4396423;
            result[4] += 4396423;
            result[5] += 17585692;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 1039104;
            result[5] += 31173149;
          } else {
            result[0] += 689032;
            result[1] += 1378064;
            result[2] += 0;
            result[3] += 28250319;
            result[4] += 689032;
            result[5] += 11943224;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 27053495;
            result[1] += 2399423;
            result[2] += 179956;
            result[3] += 839798;
            result[4] += 10797403;
            result[5] += 1679596;
          } else {
            result[0] += 2719520;
            result[1] += 1687978;
            result[2] += 10315423;
            result[3] += 12566061;
            result[4] += 4688828;
            result[5] += 10971859;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 40904450;
            result[1] += 240614;
            result[2] += 481228;
            result[3] += 60153;
            result[4] += 1263225;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d70000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
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
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1160801;
            result[3] += 0;
            result[4] += 1160801;
            result[5] += 40628069;
          } else {
            result[0] += 9544371;
            result[1] += 4772185;
            result[2] += 9544371;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 4772185;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9911462;
            result[3] += 6607641;
            result[4] += 0;
            result[5] += 26430567;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1431655;
            result[3] += 32928082;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 8180890;
            result[1] += 6135667;
            result[2] += 10226112;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 12271335;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 3067833;
            result[4] += 0;
            result[5] += 1533916;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 25769803;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7579354;
            result[3] += 30317416;
            result[4] += 0;
            result[5] += 5052902;
          } else {
            result[0] += 1060485;
            result[1] += 0;
            result[2] += 35172777;
            result[3] += 5479176;
            result[4] += 0;
            result[5] += 1237233;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 64683;
            result[1] += 0;
            result[2] += 41332591;
            result[3] += 1552397;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42401379;
            result[5] += 548293;
          } else {
            result[0] += 0;
            result[1] += 37580963;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 42154308;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 795364;
            result[5] += 0;
          } else {
            result[0] += 692736;
            result[1] += 0;
            result[2] += 0;
            result[3] += 692736;
            result[4] += 16625679;
            result[5] += 24938519;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1022611;
            result[4] += 21474836;
            result[5] += 20452225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1949725;
            result[4] += 1392661;
            result[5] += 39607285;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
            result[0] += 530242;
            result[1] += 1060485;
            result[2] += 2120971;
            result[3] += 9544371;
            result[4] += 9014128;
            result[5] += 20679472;
          } else {
            result[0] += 0;
            result[1] += 842150;
            result[2] += 210537;
            result[3] += 29475265;
            result[4] += 210537;
            result[5] += 12211181;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1867377;
            result[4] += 41082295;
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 25769803;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42859252;
            result[2] += 0;
            result[3] += 0;
            result[4] += 90420;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4392580;
            result[1] += 9273224;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29283867;
            result[5] += 0;
          } else {
            result[0] += 36733735;
            result[1] += 210709;
            result[2] += 702365;
            result[3] += 772602;
            result[4] += 3020173;
            result[5] += 1510086;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 497486;
            result[1] += 1989946;
            result[2] += 4477379;
            result[3] += 18241173;
            result[4] += 1160801;
            result[5] += 16582885;
          } else {
            result[0] += 16649030;
            result[1] += 0;
            result[2] += 20992255;
            result[3] += 2895483;
            result[4] += 723870;
            result[5] += 1689032;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19088743;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1193046;
            result[2] += 4175662;
            result[3] += 596523;
            result[4] += 3579139;
            result[5] += 33405301;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
            result[0] += 10737418;
            result[1] += 5368709;
            result[2] += 5368709;
            result[3] += 5368709;
            result[4] += 5368709;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 1789569;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8053063;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 0;
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
            result[0] += 438261;
            result[1] += 0;
            result[2] += 31993123;
            result[3] += 5259143;
            result[4] += 0;
            result[5] += 5259143;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
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
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29500785;
            result[3] += 13015052;
            result[4] += 0;
            result[5] += 433835;
          } else {
            result[0] += 530242;
            result[1] += 0;
            result[2] += 38442608;
            result[3] += 3711700;
            result[4] += 0;
            result[5] += 265121;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 302995;
            result[1] += 0;
            result[2] += 41510442;
            result[3] += 1136234;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 1233004;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37195649;
            result[5] += 4521018;
          } else {
            result[0] += 0;
            result[1] += 40689163;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2260509;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14939016;
            result[5] += 28010656;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 631612;
            result[1] += 3789677;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 17053546;
          } else {
            result[0] += 0;
            result[1] += 416481;
            result[2] += 0;
            result[3] += 3123612;
            result[4] += 1249445;
            result[5] += 38160133;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7527262;
            result[4] += 3542241;
            result[5] += 31880169;
          } else {
            result[0] += 0;
            result[1] += 469395;
            result[2] += 938790;
            result[3] += 24408557;
            result[4] += 3285767;
            result[5] += 13847162;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 39370533;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3579139;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1908874;
            result[2] += 1908874;
            result[3] += 954437;
            result[4] += 38177487;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 3361278;
            result[1] += 11577737;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 2240852;
          } else {
            result[0] += 15582109;
            result[1] += 632776;
            result[2] += 2768395;
            result[3] += 9649834;
            result[4] += 3084783;
            result[5] += 11231774;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42980000))) ) ) {
            result[0] += 3067833;
            result[1] += 10226112;
            result[2] += 511305;
            result[3] += 1022611;
            result[4] += 25565281;
            result[5] += 2556528;
          } else {
            result[0] += 36733800;
            result[1] += 1363481;
            result[2] += 1724403;
            result[3] += 721843;
            result[4] += 1804608;
            result[5] += 601536;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 19088743;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8053063;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7809031;
            result[3] += 15618062;
            result[4] += 0;
            result[5] += 19522578;
          } else {
            result[0] += 876523;
            result[1] += 0;
            result[2] += 35561828;
            result[3] += 5384361;
            result[4] += 0;
            result[5] += 1126959;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f00000))) ) ) {
            result[0] += 2260509;
            result[1] += 0;
            result[2] += 36168145;
            result[3] += 3014012;
            result[4] += 0;
            result[5] += 1507006;
          } else {
            result[0] += 26430567;
            result[1] += 0;
            result[2] += 16519104;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39744473;
            result[3] += 3205199;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42336106;
            result[3] += 613566;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 206488;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41297762;
            result[5] += 1445421;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1193046;
            result[4] += 10737418;
            result[5] += 23860929;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 38972851;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3976821;
            result[5] += 0;
          } else {
            result[0] += 7730941;
            result[1] += 1717986;
            result[2] += 0;
            result[3] += 1717986;
            result[4] += 21474836;
            result[5] += 10307921;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 0;
            result[4] += 35037891;
            result[5] += 5651272;
          } else {
            result[0] += 0;
            result[1] += 55276;
            result[2] += 0;
            result[3] += 1603012;
            result[4] += 1879393;
            result[5] += 39411990;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 322929;
            result[2] += 968789;
            result[3] += 9042036;
            result[4] += 2583438;
            result[5] += 30032478;
          } else {
            result[0] += 146087;
            result[1] += 584349;
            result[2] += 438261;
            result[3] += 24542670;
            result[4] += 1460873;
            result[5] += 15777430;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2260509;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40689163;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 14657428;
            result[1] += 2045222;
            result[2] += 0;
            result[3] += 3749574;
            result[4] += 19088743;
            result[5] += 3408704;
          } else {
            result[0] += 36708790;
            result[1] += 1085370;
            result[2] += 38763;
            result[3] += 814028;
            result[4] += 3953850;
            result[5] += 348869;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1314785;
            result[1] += 3506095;
            result[2] += 4163488;
            result[3] += 18407002;
            result[4] += 3506095;
            result[5] += 12052204;
          } else {
            result[0] += 11773006;
            result[1] += 436037;
            result[2] += 22019883;
            result[3] += 2834242;
            result[4] += 3924335;
            result[5] += 1962167;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
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
            result[2] += 1431655;
            result[3] += 3579139;
            result[4] += 715827;
            result[5] += 37223049;
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
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6135667;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429c0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c80000))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42eb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
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
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 0;
            result[4] += 3303820;
            result[5] += 33038209;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 28224070;
            result[4] += 0;
            result[5] += 2454267;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38177487;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 88192;
            result[1] += 0;
            result[2] += 37481747;
            result[3] += 4674194;
            result[4] += 0;
            result[5] += 705538;
          } else {
            result[0] += 447392;
            result[1] += 0;
            result[2] += 42390432;
            result[3] += 111848;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7405116;
            result[1] += 0;
            result[2] += 35544556;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 10737418;
            result[1] += 32212254;
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
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 381210;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1270700;
            result[4] += 37231521;
            result[5] += 4066241;
          } else {
            result[0] += 0;
            result[1] += 23860929;
            result[2] += 0;
            result[3] += 5965232;
            result[4] += 4772185;
            result[5] += 8351325;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 187144;
            result[1] += 46786;
            result[2] += 46786;
            result[3] += 3883249;
            result[4] += 2386092;
            result[5] += 36399613;
          } else {
            result[0] += 16418434;
            result[1] += 654357;
            result[2] += 773332;
            result[3] += 9398958;
            result[4] += 5056401;
            result[5] += 10648187;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42870000))) ) ) {
            result[0] += 3253763;
            result[1] += 24728599;
            result[2] += 1301505;
            result[3] += 650752;
            result[4] += 11062794;
            result[5] += 1952257;
          } else {
            result[0] += 39062188;
            result[1] += 374697;
            result[2] += 234185;
            result[3] += 1124091;
            result[4] += 1779811;
            result[5] += 374697;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 1385473;
            result[2] += 1385473;
            result[3] += 16625679;
            result[4] += 4156419;
            result[5] += 19396626;
          } else {
            result[0] += 3164712;
            result[1] += 452101;
            result[2] += 30290821;
            result[3] += 4068916;
            result[4] += 2260509;
            result[5] += 2712610;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2260509;
            result[5] += 40689163;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 6607641;
            result[1] += 9911462;
            result[2] += 1651910;
            result[3] += 8259552;
            result[4] += 11563373;
            result[5] += 4955731;
          } else {
            result[0] += 753503;
            result[1] += 0;
            result[2] += 5651272;
            result[3] += 26749357;
            result[4] += 0;
            result[5] += 9795539;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 7158278;
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 28633115;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25419194;
            result[3] += 14024383;
            result[4] += 438261;
            result[5] += 3067833;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40952013;
            result[3] += 1997659;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1639300;
            result[1] += 0;
            result[2] += 35736750;
            result[3] += 5573621;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 24338148;
            result[1] += 0;
            result[2] += 15748213;
            result[3] += 0;
            result[4] += 2863311;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 73418;
            result[1] += 0;
            result[2] += 41995235;
            result[3] += 881018;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 205500;
            result[1] += 0;
            result[2] += 205500;
            result[3] += 0;
            result[4] += 42127669;
            result[5] += 411001;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1047552;
            result[3] += 3142658;
            result[4] += 11523082;
            result[5] += 27236377;
          } else {
            result[0] += 23666146;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 1753047;
            result[4] += 10518287;
            result[5] += 3944357;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32979213;
            result[5] += 6902626;
          } else {
            result[0] += 101177;
            result[1] += 50588;
            result[2] += 50588;
            result[3] += 2681192;
            result[4] += 2529427;
            result[5] += 37536698;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 515396;
            result[3] += 24223615;
            result[4] += 515396;
            result[5] += 17695265;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cc0000))) ) ) {
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 42851614;
            result[2] += 0;
            result[3] += 0;
            result[4] += 98058;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 34942106;
            result[1] += 2183881;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5823684;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4629306;
            result[2] += 1028734;
            result[3] += 12087632;
            result[4] += 3086204;
            result[5] += 22117795;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 35648886;
            result[1] += 1578548;
            result[2] += 230204;
            result[3] += 822160;
            result[4] += 4045030;
            result[5] += 624842;
          } else {
            result[0] += 3755162;
            result[1] += 938790;
            result[2] += 18306417;
            result[3] += 12908371;
            result[4] += 1408185;
            result[5] += 5632743;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4521018;
            result[4] += 0;
            result[5] += 38428654;
          } else {
            result[0] += 0;
            result[1] += 1263225;
            result[2] += 0;
            result[3] += 36633544;
            result[4] += 0;
            result[5] += 5052902;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10888649;
            result[3] += 5444324;
            result[4] += 0;
            result[5] += 26616698;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 1193046;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 25053975;
            result[4] += 3579139;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2386092;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 35791394;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429c0000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 160860;
            result[1] += 804300;
            result[2] += 34102362;
            result[3] += 6916988;
            result[4] += 0;
            result[5] += 965161;
          } else {
            result[0] += 932129;
            result[1] += 0;
            result[2] += 41372222;
            result[3] += 645320;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39214918;
            result[5] += 3734754;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20344581;
            result[5] += 22605091;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 7158278;
          } else {
            result[0] += 38954354;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3995318;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 60322;
            result[3] += 965161;
            result[4] += 1387419;
            result[5] += 40536769;
          } else {
            result[0] += 493674;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7405116;
            result[4] += 4443069;
            result[5] += 30607812;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1160801;
            result[3] += 1160801;
            result[4] += 0;
            result[5] += 40628069;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 4224557;
            result[1] += 704092;
            result[2] += 0;
            result[3] += 7745022;
            result[4] += 0;
            result[5] += 30275998;
          } else {
            result[0] += 757935;
            result[1] += 252645;
            result[2] += 505290;
            result[3] += 34865028;
            result[4] += 0;
            result[5] += 6568773;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d50000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
            result[0] += 5095723;
            result[1] += 8250219;
            result[2] += 0;
            result[3] += 2183881;
            result[4] += 24993312;
            result[5] += 2426535;
          } else {
            result[0] += 38244406;
            result[1] += 414063;
            result[2] += 150568;
            result[3] += 828126;
            result[4] += 2973728;
            result[5] += 338779;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 637866;
            result[1] += 637866;
            result[2] += 11906840;
            result[3] += 16159282;
            result[4] += 1700977;
            result[5] += 11906840;
          } else {
            result[0] += 34996029;
            result[1] += 0;
            result[2] += 3711700;
            result[3] += 0;
            result[4] += 4241943;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 4772185;
            result[2] += 28633115;
            result[3] += 9544371;
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14081859;
            result[4] += 0;
            result[5] += 28867812;
          } else {
            result[0] += 3711700;
            result[1] += 530242;
            result[2] += 15907286;
            result[3] += 12195586;
            result[4] += 5302428;
            result[5] += 5302428;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 1789569;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 514367;
            result[1] += 0;
            result[2] += 29318938;
            result[3] += 9515795;
            result[4] += 514367;
            result[5] += 3086204;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 879692;
            result[1] += 0;
            result[2] += 39793130;
            result[3] += 2069863;
            result[4] += 0;
            result[5] += 206986;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 530242;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42065934;
            result[5] += 353495;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 34359738;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 12271335;
            result[1] += 0;
            result[2] += 9203501;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 502661;
            result[2] += 0;
            result[3] += 1452134;
            result[4] += 2066499;
            result[5] += 38928377;
          } else {
            result[0] += 6390435;
            result[1] += 297229;
            result[2] += 0;
            result[3] += 7579354;
            result[4] += 5201517;
            result[5] += 23481136;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1524840;
            result[3] += 34308910;
            result[4] += 0;
            result[5] += 7115922;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 6442450;
            result[4] += 0;
            result[5] += 15032385;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42460000))) ) ) {
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
            result[0] += 92166;
            result[1] += 42488839;
            result[2] += 0;
            result[3] += 184333;
            result[4] += 184333;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 29240779;
            result[1] += 2625107;
            result[2] += 72919;
            result[3] += 947955;
            result[4] += 9844152;
            result[5] += 218758;
          } else {
            result[0] += 1605595;
            result[1] += 0;
            result[2] += 10837767;
            result[3] += 13948608;
            result[4] += 2107343;
            result[5] += 14450357;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 1385473;
            result[1] += 36715043;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4849156;
            result[5] += 0;
          } else {
            result[0] += 39890579;
            result[1] += 61181;
            result[2] += 1040091;
            result[3] += 122363;
            result[4] += 1835456;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428b0000))) ) ) {
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
            result[3] += 2801065;
            result[4] += 933688;
            result[5] += 39214918;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 31138512;
            result[4] += 2147483;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 16106127;
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
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 9544371;
            result[2] += 4772185;
            result[3] += 26247022;
            result[4] += 0;
            result[5] += 2386092;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37993941;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4955731;
          } else {
            result[0] += 15032385;
            result[1] += 0;
            result[2] += 15032385;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 7158278;
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 825955;
            result[1] += 0;
            result[2] += 35870056;
            result[3] += 5899680;
            result[4] += 0;
            result[5] += 353980;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42054888;
            result[3] += 715827;
            result[4] += 0;
            result[5] += 178956;
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429b0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42e30000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 1039104;
            result[1] += 2193666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36484130;
            result[5] += 3232771;
          } else {
            result[0] += 0;
            result[1] += 38347922;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4601750;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18407002;
            result[5] += 24542670;
          } else {
            result[0] += 40505382;
            result[1] += 698368;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1745921;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 976128;
            result[2] += 0;
            result[3] += 1952257;
            result[4] += 23427094;
            result[5] += 16594191;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51934;
            result[3] += 1973503;
            result[4] += 1402226;
            result[5] += 39522008;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 8589934;
            result[1] += 3303820;
            result[2] += 0;
            result[3] += 1321528;
            result[4] += 25769803;
            result[5] += 3964585;
          } else {
            result[0] += 183938;
            result[1] += 367877;
            result[2] += 735754;
            result[3] += 20877035;
            result[4] += 1931355;
            result[5] += 18853710;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 24311135;
            result[1] += 5402474;
            result[2] += 540247;
            result[3] += 3241484;
            result[4] += 8103711;
            result[5] += 1350618;
          } else {
            result[0] += 3241484;
            result[1] += 2025927;
            result[2] += 12155567;
            result[3] += 7293340;
            result[4] += 2025927;
            result[5] += 16207423;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 32212254;
            result[1] += 3067833;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 0;
          } else {
            result[0] += 660764;
            result[1] += 4955731;
            result[2] += 7268406;
            result[3] += 14536812;
            result[4] += 660764;
            result[5] += 14867194;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 39881839;
            result[1] += 0;
            result[2] += 766958;
            result[3] += 0;
            result[4] += 1533916;
            result[5] += 766958;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 19327352;
            result[3] += 6442450;
            result[4] += 0;
            result[5] += 6442450;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10518287;
            result[3] += 21036574;
            result[4] += 0;
            result[5] += 11394811;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31199290;
            result[3] += 9521861;
            result[4] += 0;
            result[5] += 2228520;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42850000))) ) ) {
            result[0] += 16106127;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40142504;
            result[3] += 2620023;
            result[4] += 0;
            result[5] += 187144;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 39807013;
            result[1] += 0;
            result[2] += 1571329;
            result[3] += 0;
            result[4] += 1571329;
            result[5] += 0;
          } else {
            result[0] += 42862020;
            result[1] += 0;
            result[2] += 87652;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          } else {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 33405301;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42980000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42146875;
            result[3] += 802797;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 228455;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41807394;
            result[5] += 913822;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16806393;
            result[4] += 5602131;
            result[5] += 20541147;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 19088743;
            result[2] += 0;
            result[3] += 19088743;
            result[4] += 0;
            result[5] += 4772185;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
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
            result[2] += 61008;
            result[3] += 1159153;
            result[4] += 1342177;
            result[5] += 40387334;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 39881839;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1022611;
            result[4] += 2045222;
            result[5] += 0;
          } else {
            result[0] += 820694;
            result[1] += 364753;
            result[2] += 1185447;
            result[3] += 15410816;
            result[4] += 2735647;
            result[5] += 22432313;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17179869;
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
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 42653468;
            result[2] += 0;
            result[3] += 0;
            result[4] += 296204;
            result[5] += 0;
          } else {
            result[0] += 25769803;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 39987626;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2962046;
          } else {
            result[0] += 5037307;
            result[1] += 1855850;
            result[2] += 1590728;
            result[3] += 795364;
            result[4] += 31284329;
            result[5] += 2386092;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 36605271;
            result[1] += 1115076;
            result[2] += 0;
            result[3] += 1115076;
            result[4] += 3037622;
            result[5] += 1076625;
          } else {
            result[0] += 9181640;
            result[1] += 1020182;
            result[2] += 9691731;
            result[3] += 11834114;
            result[4] += 3060546;
            result[5] += 8161458;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3463683;
            result[3] += 2078209;
            result[4] += 4849156;
            result[5] += 32558623;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2497074;
            result[3] += 26468984;
            result[4] += 0;
            result[5] += 13983614;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24403223;
            result[3] += 16594191;
            result[4] += 0;
            result[5] += 1952257;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 7158278;
            result[4] += 10737418;
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 622459;
            result[1] += 0;
            result[2] += 31122951;
            result[3] += 10581803;
            result[4] += 0;
            result[5] += 622459;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 2321603;
            result[1] += 0;
            result[2] += 23216039;
            result[3] += 12768821;
            result[4] += 0;
            result[5] += 4643207;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41122027;
            result[3] += 913822;
            result[4] += 0;
            result[5] += 913822;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 183938;
            result[1] += 0;
            result[2] += 40006654;
            result[3] += 2575140;
            result[4] += 0;
            result[5] += 183938;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42789412;
            result[3] += 160259;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b80000))) ) ) {
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
            result[4] += 32212254;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 4294967;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 3904515;
            result[4] += 29283867;
            result[5] += 5856773;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42600000))) ) ) {
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
            result[3] += 932129;
            result[4] += 430213;
            result[5] += 41587329;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1331772;
            result[2] += 1997659;
            result[3] += 6325920;
            result[4] += 2663545;
            result[5] += 30630774;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 8589934;
          } else {
            result[0] += 41415756;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1533916;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3827198;
            result[4] += 6591286;
            result[5] += 32531187;
          } else {
            result[0] += 0;
            result[1] += 488064;
            result[2] += 162688;
            result[3] += 22613653;
            result[4] += 1789569;
            result[5] += 17895697;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 7469508;
            result[1] += 32367869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3112295;
            result[5] += 0;
          } else {
            result[0] += 4001522;
            result[1] += 4268290;
            result[2] += 0;
            result[3] += 2134145;
            result[4] += 31745410;
            result[5] += 800304;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 21122789;
            result[1] += 938790;
            result[2] += 1408185;
            result[3] += 9387906;
            result[4] += 3755162;
            result[5] += 6336836;
          } else {
            result[0] += 38874156;
            result[1] += 492644;
            result[2] += 1074861;
            result[3] += 313501;
            result[4] += 2015365;
            result[5] += 179143;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 92563;
            result[1] += 42857108;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
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
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
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
            result[3] += 6664604;
            result[4] += 3702558;
            result[5] += 32582510;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 842150;
            result[1] += 421075;
            result[2] += 11369031;
            result[3] += 20632686;
            result[4] += 2526451;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 766958;
            result[2] += 29144420;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 5368709;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 992236;
            result[1] += 0;
            result[2] += 33027306;
            result[3] += 6803908;
            result[4] += 0;
            result[5] += 2126221;
          } else {
            result[0] += 35370318;
            result[1] += 0;
            result[2] += 2526451;
            result[3] += 2526451;
            result[4] += 0;
            result[5] += 2526451;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 18407002;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41441608;
            result[3] += 1327096;
            result[4] += 0;
            result[5] += 180967;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 3390763;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29386618;
            result[5] += 10172290;
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 232579;
            result[4] += 620211;
            result[5] += 42096881;
          } else {
            result[0] += 338186;
            result[1] += 338186;
            result[2] += 338186;
            result[3] += 2705491;
            result[4] += 8116473;
            result[5] += 31113148;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 38177487;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2386092;
            result[5] += 2386092;
          } else {
            result[0] += 803632;
            result[1] += 267877;
            result[2] += 89292;
            result[3] += 14822548;
            result[4] += 3035943;
            result[5] += 23930379;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
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
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 1765055;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40007914;
            result[5] += 1176703;
          } else {
            result[0] += 0;
            result[1] += 25008670;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17941002;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 39243355;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3270279;
            result[5] += 436037;
          } else {
            result[0] += 1201389;
            result[1] += 2703126;
            result[2] += 3303820;
            result[3] += 14867194;
            result[4] += 6457468;
            result[5] += 14416673;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 39251100;
            result[1] += 693482;
            result[2] += 323625;
            result[3] += 138696;
            result[4] += 2496536;
            result[5] += 46232;
          } else {
            result[0] += 14033061;
            result[1] += 4252442;
            result[2] += 7654397;
            result[3] += 4677687;
            result[4] += 8079641;
            result[5] += 4252442;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1651910;
            result[3] += 18171015;
            result[4] += 0;
            result[5] += 23126746;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5274521;
            result[3] += 35414642;
            result[4] += 0;
            result[5] += 2260509;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5726623;
            result[4] += 2863311;
            result[5] += 31496426;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 11248723;
            result[4] += 0;
            result[5] += 3067833;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34050191;
            result[3] += 2321603;
            result[4] += 386933;
            result[5] += 6190943;
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26430567;
            result[3] += 0;
            result[4] += 0;
            result[5] += 16519104;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 696481;
            result[1] += 0;
            result[2] += 33431096;
            result[3] += 7661293;
            result[4] += 0;
            result[5] += 1160801;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
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
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 998829;
            result[1] += 0;
            result[2] += 35624922;
            result[3] += 6325920;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 143165;
            result[1] += 0;
            result[2] += 42090679;
            result[3] += 715827;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 1997659;
            result[1] += 0;
            result[2] += 998829;
            result[3] += 1997659;
            result[4] += 25969569;
            result[5] += 11985955;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2603010;
            result[1] += 5206020;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32537631;
            result[5] += 2603010;
          } else {
            result[0] += 36260789;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1408185;
            result[4] += 3520464;
            result[5] += 1760232;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 958698;
            result[4] += 894784;
            result[5] += 41096190;
          } else {
            result[0] += 1324925;
            result[1] += 220820;
            result[2] += 0;
            result[3] += 9053658;
            result[4] += 6293396;
            result[5] += 26056870;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
            result[0] += 954437;
            result[1] += 40086361;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1908874;
            result[5] += 0;
          } else {
            result[0] += 1507006;
            result[1] += 3767515;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37675151;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 4156419;
            result[1] += 0;
            result[2] += 3463683;
            result[3] += 11083786;
            result[4] += 692736;
            result[5] += 23553046;
          } else {
            result[0] += 39264876;
            result[1] += 356593;
            result[2] += 277350;
            result[3] += 396214;
            result[4] += 1862209;
            result[5] += 792429;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 406143;
            result[1] += 710751;
            result[2] += 9341300;
            result[3] += 21017925;
            result[4] += 406143;
            result[5] += 11067409;
          } else {
            result[0] += 32118885;
            result[1] += 746950;
            result[2] += 7096032;
            result[3] += 0;
            result[4] += 2987803;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 2603010;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1301505;
            result[4] += 5206020;
            result[5] += 33839136;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4156419;
            result[3] += 13854733;
            result[4] += 0;
            result[5] += 24938519;
          } else {
            result[0] += 0;
            result[1] += 1590728;
            result[2] += 13521193;
            result[3] += 25451658;
            result[4] += 0;
            result[5] += 2386092;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 9544371;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 11713547;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1321528;
            result[1] += 132152;
            result[2] += 35152655;
            result[3] += 5946877;
            result[4] += 132152;
            result[5] += 264305;
          } else {
            result[0] += 156465;
            result[1] += 0;
            result[2] += 41932649;
            result[3] += 860558;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b80000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 560213;
            result[1] += 186737;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40335345;
            result[5] += 1867377;
          } else {
            result[0] += 0;
            result[1] += 681740;
            result[2] += 0;
            result[3] += 681740;
            result[4] += 21815706;
            result[5] += 19770484;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 140129;
            result[1] += 70064;
            result[2] += 0;
            result[3] += 840776;
            result[4] += 840776;
            result[5] += 41057925;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1533916;
            result[3] += 19940919;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1620742;
            result[1] += 0;
            result[2] += 1980907;
            result[3] += 13055980;
            result[4] += 5672598;
            result[5] += 20619444;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42848137;
            result[2] += 0;
            result[3] += 0;
            result[4] += 101535;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 37580963;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 9062775;
            result[1] += 7683657;
            result[2] += 788067;
            result[3] += 1182101;
            result[4] += 20883785;
            result[5] += 3349286;
          } else {
            result[0] += 38168988;
            result[1] += 344209;
            result[2] += 114736;
            result[3] += 917891;
            result[4] += 1644555;
            result[5] += 1759292;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 727960;
            result[1] += 485307;
            result[2] += 2669188;
            result[3] += 19654935;
            result[4] += 0;
            result[5] += 19412281;
          } else {
            result[0] += 28633115;
            result[1] += 2105376;
            result[2] += 6316128;
            result[3] += 1263225;
            result[4] += 2526451;
            result[5] += 2105376;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1590728;
            result[3] += 5567550;
            result[4] += 1590728;
            result[5] += 34200665;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1328340;
            result[3] += 27009588;
            result[4] += 0;
            result[5] += 14611744;
          } else {
            result[0] += 1789569;
            result[1] += 16106127;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11608019;
            result[3] += 29020049;
            result[4] += 0;
            result[5] += 2321603;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15952735;
            result[3] += 13498468;
            result[4] += 0;
            result[5] += 13498468;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38544578;
            result[3] += 2202547;
            result[4] += 0;
            result[5] += 2202547;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e80000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 3904515;
            result[1] += 3904515;
            result[2] += 27331610;
            result[3] += 3904515;
            result[4] += 3904515;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 21474836;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 933688;
            result[1] += 0;
            result[2] += 28477500;
            result[3] += 10270573;
            result[4] += 0;
            result[5] += 3267909;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 110552;
            result[1] += 0;
            result[2] += 40296411;
            result[3] += 2542709;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 11713547;
            result[1] += 0;
            result[2] += 31236125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 599297;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40952013;
            result[5] += 1398361;
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
            result[0] += 1342177;
            result[1] += 0;
            result[2] += 0;
            result[3] += 671088;
            result[4] += 20803747;
            result[5] += 20132659;
          } else {
            result[0] += 36212469;
            result[1] += 0;
            result[2] += 1684300;
            result[3] += 1684300;
            result[4] += 3368601;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 19634136;
            result[2] += 0;
            result[3] += 7362801;
            result[4] += 8589934;
            result[5] += 7362801;
          } else {
            result[0] += 93267;
            result[1] += 186534;
            result[2] += 279802;
            result[3] += 3077826;
            result[4] += 1352378;
            result[5] += 37959862;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7362801;
            result[4] += 1227133;
            result[5] += 34359738;
          } else {
            result[0] += 625480;
            result[1] += 1667948;
            result[2] += 1667948;
            result[3] += 26270188;
            result[4] += 208493;
            result[5] += 12509613;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 32069089;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10880583;
            result[5] += 0;
          } else {
            result[0] += 7362801;
            result[1] += 2658789;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31291904;
            result[5] += 1636178;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 37001606;
            result[1] += 386238;
            result[2] += 579357;
            result[3] += 1776695;
            result[4] += 1815318;
            result[5] += 1390457;
          } else {
            result[0] += 8175406;
            result[1] += 690879;
            result[2] += 10823778;
            result[3] += 10823778;
            result[4] += 2763517;
            result[5] += 9672312;
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42800000))) ) ) {
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
            result[2] += 1101273;
            result[3] += 2202547;
            result[4] += 0;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 0;
            result[3] += 27201459;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 29734388;
            result[4] += 0;
            result[5] += 6607641;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31716681;
            result[3] += 11232991;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 3101920;
            result[4] += 238609;
            result[5] += 1431655;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 20615843;
            result[4] += 0;
            result[5] += 5153960;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42f10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38416096;
            result[3] += 4533576;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42349577;
            result[3] += 600095;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 238609;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42233845;
            result[5] += 477218;
          } else {
            result[0] += 2202547;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33038209;
            result[5] += 7708915;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42990000))) ) ) {
            result[0] += 2260509;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14693309;
            result[5] += 25995854;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 1789569;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1145324;
            result[3] += 0;
            result[4] += 17752531;
            result[5] += 24051816;
          } else {
            result[0] += 0;
            result[1] += 297847;
            result[2] += 59569;
            result[3] += 1787087;
            result[4] += 893543;
            result[5] += 39911623;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 4621167;
            result[2] += 271833;
            result[3] += 7339501;
            result[4] += 2174666;
            result[5] += 28542504;
          } else {
            result[0] += 185929;
            result[1] += 1115575;
            result[2] += 1115575;
            result[3] += 26959751;
            result[4] += 929646;
            result[5] += 12643193;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 25769803;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42758785;
            result[2] += 0;
            result[3] += 0;
            result[4] += 190887;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d20000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6576026;
            result[1] += 3493514;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31236125;
            result[5] += 1644006;
          } else {
            result[0] += 36852353;
            result[1] += 421827;
            result[2] += 0;
            result[3] += 1418873;
            result[4] += 2684354;
            result[5] += 1572264;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 1908874;
            result[1] += 1550960;
            result[2] += 11453246;
            result[3] += 15270994;
            result[4] += 2624702;
            result[5] += 10140895;
          } else {
            result[0] += 27582358;
            result[1] += 5122438;
            result[2] += 6304539;
            result[3] += 394033;
            result[4] += 2758235;
            result[5] += 788067;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 39045157;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b20000))) ) ) {
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
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 32212254;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 36168145;
            result[4] += 0;
            result[5] += 4521018;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 1533916;
            result[2] += 15339168;
            result[3] += 10737418;
            result[4] += 3067833;
            result[5] += 12271335;
          } else {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 34598347;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 0;
          }
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 6028024;
            result[4] += 0;
            result[5] += 1130254;
          } else {
            result[0] += 326862;
            result[1] += 0;
            result[2] += 41119245;
            result[3] += 1438193;
            result[4] += 0;
            result[5] += 65372;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38177487;
            result[5] += 4772185;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42668956;
            result[5] += 280716;
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
            result[0] += 20104102;
            result[1] += 913822;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9138228;
            result[5] += 12793519;
          } else {
            result[0] += 51934;
            result[1] += 207737;
            result[2] += 0;
            result[3] += 1194489;
            result[4] += 2856386;
            result[5] += 38639125;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5837819;
            result[3] += 2918909;
            result[4] += 7922755;
            result[5] += 26270188;
          } else {
            result[0] += 1120426;
            result[1] += 560213;
            result[2] += 746950;
            result[3] += 26516754;
            result[4] += 373475;
            result[5] += 13631852;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1176703;
            result[1] += 588351;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41184617;
            result[5] += 0;
          } else {
            result[0] += 14316557;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 10498808;
            result[2] += 954437;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 5726623;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 7527262;
            result[1] += 2656680;
            result[2] += 0;
            result[3] += 8412822;
            result[4] += 5756141;
            result[5] += 18596765;
          } else {
            result[0] += 36634570;
            result[1] += 1674723;
            result[2] += 244230;
            result[3] += 593131;
            result[4] += 3209886;
            result[5] += 593131;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 185929;
            result[1] += 1859293;
            result[2] += 7994960;
            result[3] += 13758769;
            result[4] += 2788939;
            result[5] += 16361780;
          } else {
            result[0] += 35404460;
            result[1] += 0;
            result[2] += 1741202;
            result[3] += 0;
            result[4] += 5804009;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4908534;
            result[3] += 31905471;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1481023;
            result[3] += 16291255;
            result[4] += 4443069;
            result[5] += 20734324;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6135667;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ed0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 1014559;
            result[1] += 0;
            result[2] += 32127708;
            result[3] += 9131032;
            result[4] += 0;
            result[5] += 676372;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 346368;
            result[1] += 0;
            result[2] += 36368674;
            result[3] += 6061445;
            result[4] += 0;
            result[5] += 173184;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 382341;
            result[1] += 0;
            result[2] += 41356584;
            result[3] += 955853;
            result[4] += 0;
            result[5] += 254894;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4955731;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36342030;
            result[5] += 1651910;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 32212254;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ef0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29527900;
            result[5] += 13421772;
          } else {
            result[0] += 128016;
            result[1] += 128016;
            result[2] += 0;
            result[3] += 1024135;
            result[4] += 1152152;
            result[5] += 40517351;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 1481023;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2962046;
            result[4] += 8515883;
            result[5] += 29990719;
          } else {
            result[0] += 26011773;
            result[1] += 1209849;
            result[2] += 0;
            result[3] += 3629549;
            result[4] += 1814774;
            result[5] += 10283724;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1385473;
            result[3] += 1385473;
            result[4] += 0;
            result[5] += 40178726;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 19822925;
            result[4] += 0;
            result[5] += 23126746;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 30594287;
            result[4] += 0;
            result[5] += 12355385;
          } else {
            result[0] += 810371;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9724454;
            result[4] += 810371;
            result[5] += 31604476;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 894784;
            result[4] += 34896609;
            result[5] += 0;
          } else {
            result[0] += 6135667;
            result[1] += 26295718;
            result[2] += 0;
            result[3] += 1753047;
            result[4] += 7888715;
            result[5] += 876523;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 7158278;
            result[1] += 12228726;
            result[2] += 0;
            result[3] += 596523;
            result[4] += 21474836;
            result[5] += 1491308;
          } else {
            result[0] += 38786978;
            result[1] += 583555;
            result[2] += 233422;
            result[3] += 1011495;
            result[4] += 1750666;
            result[5] += 583555;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 2309122;
            result[1] += 1154561;
            result[2] += 11545611;
            result[3] += 12007435;
            result[4] += 2540034;
            result[5] += 13392908;
          } else {
            result[0] += 33270873;
            result[1] += 0;
            result[2] += 3024624;
            result[3] += 0;
            result[4] += 6049249;
            result[5] += 604924;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7933379;
            result[3] += 22432313;
            result[4] += 2462083;
            result[5] += 10121897;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 1314785;
            result[1] += 1095654;
            result[2] += 28048766;
            result[3] += 5478274;
            result[4] += 2629571;
            result[5] += 4382619;
          } else {
            result[0] += 26724240;
            result[1] += 0;
            result[2] += 16225432;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 160259;
            result[1] += 0;
            result[2] += 36218754;
            result[3] += 5769359;
            result[4] += 0;
            result[5] += 801299;
          } else {
            result[0] += 224085;
            result[1] += 0;
            result[2] += 41605161;
            result[3] += 1120426;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42408290;
            result[5] += 541382;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 1952257;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 30259996;
          } else {
            result[0] += 27467814;
            result[1] += 1997659;
            result[2] += 499414;
            result[3] += 2996488;
            result[4] += 9488881;
            result[5] += 499414;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7809031;
            result[4] += 28633115;
            result[5] += 6507526;
          } else {
            result[0] += 0;
            result[1] += 47881;
            result[2] += 0;
            result[3] += 2250428;
            result[4] += 1819495;
            result[5] += 38831867;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 343597;
            result[3] += 10651518;
            result[4] += 2061584;
            result[5] += 29892972;
          } else {
            result[0] += 0;
            result[1] += 296204;
            result[2] += 296204;
            result[3] += 33471124;
            result[4] += 296204;
            result[5] += 8589934;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 4510696;
            result[1] += 13728205;
            result[2] += 196117;
            result[3] += 1568937;
            result[4] += 22161246;
            result[5] += 784468;
          } else {
            result[0] += 37783904;
            result[1] += 479678;
            result[2] += 405881;
            result[3] += 922458;
            result[4] += 2509087;
            result[5] += 848661;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1595653;
            result[1] += 0;
            result[2] += 13031170;
            result[3] += 15956534;
            result[4] += 1861595;
            result[5] += 10504718;
          } else {
            result[0] += 33467277;
            result[1] += 0;
            result[2] += 5020091;
            result[3] += 0;
            result[4] += 4462303;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3482405;
            result[3] += 23216039;
            result[4] += 0;
            result[5] += 16251227;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 11012736;
            result[1] += 1101273;
            result[2] += 8810189;
            result[3] += 9911462;
            result[4] += 3303820;
            result[5] += 8810189;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39214918;
            result[3] += 1867377;
            result[4] += 0;
            result[5] += 1867377;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 2095105;
            result[1] += 0;
            result[2] += 15713294;
            result[3] += 20951059;
            result[4] += 0;
            result[5] += 4190211;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 35280088;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 4090445;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2962046;
            result[1] += 0;
            result[2] += 31101487;
            result[3] += 8886139;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40234463;
            result[3] += 2715209;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 237291;
            result[1] += 0;
            result[2] += 42237799;
            result[3] += 474582;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42420000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
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
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0;
            result[1] += 41082295;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1867377;
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 783753;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39814660;
            result[5] += 2351259;
          } else {
            result[0] += 0;
            result[1] += 38654705;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 34295634;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6730918;
            result[5] += 1923119;
          } else {
            result[0] += 726017;
            result[1] += 76422;
            result[2] += 76422;
            result[3] += 4929277;
            result[4] += 2445532;
            result[5] += 34695999;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
            result[0] += 1651910;
            result[1] += 19492543;
            result[2] += 991146;
            result[3] += 1651910;
            result[4] += 19162161;
            result[5] += 0;
          } else {
            result[0] += 36023554;
            result[1] += 812561;
            result[2] += 657787;
            result[3] += 1663816;
            result[4] += 1741202;
            result[5] += 2050750;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 648786;
            result[1] += 519029;
            result[2] += 4152234;
            result[3] += 21539715;
            result[4] += 4022476;
            result[5] += 12067430;
          } else {
            result[0] += 15866758;
            result[1] += 0;
            result[2] += 22705878;
            result[3] += 2462083;
            result[4] += 0;
            result[5] += 1914953;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 11453246;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 2863311;
            result[5] += 20043180;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5506368;
            result[3] += 27531841;
            result[4] += 0;
            result[5] += 9911462;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 14763950;
            result[3] += 18790481;
            result[4] += 1342177;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x43000000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37863527;
            result[3] += 3955890;
            result[4] += 0;
            result[5] += 1130254;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 25053975;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30210363;
            result[3] += 12375329;
            result[4] += 0;
            result[5] += 363980;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 24542670;
            result[1] += 6135667;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40585470;
            result[3] += 2364202;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37896770;
            result[3] += 5052902;
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39691421;
            result[3] += 3258251;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 92166;
            result[1] += 0;
            result[2] += 42673172;
            result[3] += 184333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 409044;
            result[1] += 409044;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40699928;
            result[5] += 1431655;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 27859247;
            result[1] += 1741202;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12768821;
            result[5] += 580400;
          } else {
            result[0] += 2996488;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11985955;
            result[5] += 27967228;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x427a0000))) ) ) {
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
            result[3] += 1979949;
            result[4] += 1370734;
            result[5] += 39598989;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 2013265;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 2348810;
            result[5] += 25165823;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 29373626;
            result[4] += 246837;
            result[5] += 13329208;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
            result[0] += 6715258;
            result[1] += 10492591;
            result[2] += 0;
            result[3] += 559604;
            result[4] += 23643305;
            result[5] += 1538913;
          } else {
            result[0] += 37096569;
            result[1] += 363296;
            result[2] += 201831;
            result[3] += 1210987;
            result[4] += 2906368;
            result[5] += 1170620;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 1974697;
            result[1] += 493674;
            result[2] += 12958953;
            result[3] += 14563394;
            result[4] += 617093;
            result[5] += 12341860;
          } else {
            result[0] += 31700949;
            result[1] += 1533916;
            result[2] += 5113056;
            result[3] += 0;
            result[4] += 4601750;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
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
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 2741468;
            result[2] += 2741468;
            result[3] += 4569114;
            result[4] += 2741468;
            result[5] += 30156153;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4772185;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 740511;
            result[2] += 2221534;
            result[3] += 28139440;
            result[4] += 1481023;
            result[5] += 10367162;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41648167;
            result[3] += 1301505;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
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
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 30064771;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 0;
            result[4] += 0;
            result[5] += 6135667;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ff0000))) ) ) {
            result[0] += 0;
            result[1] += 409044;
            result[2] += 35995916;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 818089;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42890000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39485989;
            result[3] += 3463683;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 106574;
            result[1] += 0;
            result[2] += 42203648;
            result[3] += 639449;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
            result[0] += 685367;
            result[1] += 1142278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40436660;
            result[5] += 685367;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24275902;
            result[5] += 18673770;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19522578;
            result[5] += 23427094;
          } else {
            result[0] += 39159995;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3789677;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1717986;
            result[2] += 0;
            result[3] += 1717986;
            result[4] += 30923764;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 46633;
            result[2] += 46633;
            result[3] += 2844658;
            result[4] += 1958617;
            result[5] += 38053130;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 795364;
            result[2] += 0;
            result[3] += 1590728;
            result[4] += 6362914;
            result[5] += 34200665;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 550636;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 13765920;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 37580963;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3435973;
            result[4] += 39513699;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3435973;
            result[1] += 24051816;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13743895;
            result[5] += 1717986;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 4129776;
            result[1] += 34690120;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3303820;
            result[5] += 825955;
          } else {
            result[0] += 6551645;
            result[1] += 1455921;
            result[2] += 0;
            result[3] += 727960;
            result[4] += 31302304;
            result[5] += 2911842;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 38061395;
            result[1] += 74630;
            result[2] += 37315;
            result[3] += 858247;
            result[4] += 3321043;
            result[5] += 597041;
          } else {
            result[0] += 16146493;
            result[1] += 1614649;
            result[2] += 3229298;
            result[3] += 8557641;
            result[4] += 3067833;
            result[5] += 10333755;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2386092;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 38177487;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1507006;
            result[3] += 39182157;
            result[4] += 753503;
            result[5] += 1507006;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14725602;
            result[3] += 15952735;
            result[4] += 1227133;
            result[5] += 11044201;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10965873;
            result[3] += 17362633;
            result[4] += 0;
            result[5] += 14621165;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 681740;
            result[1] += 0;
            result[2] += 19088743;
            result[3] += 8180890;
            result[4] += 0;
            result[5] += 14998298;
          } else {
            result[0] += 1464193;
            result[1] += 0;
            result[2] += 36116770;
            result[3] += 2928386;
            result[4] += 0;
            result[5] += 2440322;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 10226112;
            result[4] += 0;
            result[5] += 18407002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34139483;
            result[3] += 6607641;
            result[4] += 0;
            result[5] += 2202547;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f00000))) ) ) {
            result[0] += 508280;
            result[1] += 0;
            result[2] += 36596171;
            result[3] += 5209871;
            result[4] += 254140;
            result[5] += 381210;
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
            result[2] += 34768782;
            result[3] += 8180890;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 245426;
            result[1] += 0;
            result[2] += 42131583;
            result[3] += 572662;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42729418;
            result[5] += 220254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35037891;
            result[5] += 7911781;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11302545;
            result[5] += 31647127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 2684354;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42260000))) ) ) {
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
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
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
            result[4] += 12884901;
            result[5] += 30064771;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 42278584;
            result[1] += 671088;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5052902;
            result[4] += 18948385;
            result[5] += 18948385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 104246;
            result[3] += 2345552;
            result[4] += 833974;
            result[5] += 39665899;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 572662;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6871947;
            result[4] += 1431655;
            result[5] += 34073407;
          } else {
            result[0] += 505290;
            result[1] += 252645;
            result[2] += 252645;
            result[3] += 31075351;
            result[4] += 0;
            result[5] += 10863740;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 39182157;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3767515;
            result[5] += 0;
          } else {
            result[0] += 7158278;
            result[1] += 5440291;
            result[2] += 0;
            result[3] += 858993;
            result[4] += 28919446;
            result[5] += 572662;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 17866117;
            result[1] += 1064867;
            result[2] += 3431241;
            result[3] += 9228855;
            result[4] += 3431241;
            result[5] += 7927350;
          } else {
            result[0] += 38026587;
            result[1] += 381963;
            result[2] += 1018569;
            result[3] += 1485413;
            result[4] += 1612734;
            result[5] += 424403;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 514367;
            result[1] += 514367;
            result[2] += 5143673;
            result[3] += 23146530;
            result[4] += 4372122;
            result[5] += 9258612;
          } else {
            result[0] += 904203;
            result[1] += 1808407;
            result[2] += 32551331;
            result[3] += 3616814;
            result[4] += 904203;
            result[5] += 3164712;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 2342709;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 7028128;
            result[4] += 7028128;
            result[5] += 9370837;
          } else {
            result[0] += 898726;
            result[1] += 0;
            result[2] += 38834450;
            result[3] += 3121892;
            result[4] += 0;
            result[5] += 94602;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a00000))) ) ) {
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 1840700;
            result[1] += 0;
            result[2] += 0;
            result[3] += 613566;
            result[4] += 10430634;
            result[5] += 30064771;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 2321603;
            result[1] += 1160801;
            result[2] += 0;
            result[3] += 1160801;
            result[4] += 30180851;
            result[5] += 8125613;
          } else {
            result[0] += 34087042;
            result[1] += 681740;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8180890;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 3629549;
            result[2] += 0;
            result[3] += 3024624;
            result[4] += 30851173;
            result[5] += 5444324;
          } else {
            result[0] += 0;
            result[1] += 109565;
            result[2] += 0;
            result[3] += 2410440;
            result[4] += 1588699;
            result[5] += 38840966;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
            result[0] += 360921;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6857510;
            result[4] += 721843;
            result[5] += 35009397;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26460066;
            result[4] += 575218;
            result[5] += 15914387;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42768450;
            result[2] += 0;
            result[3] += 0;
            result[4] += 181222;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 8369679;
            result[1] += 6607641;
            result[2] += 0;
            result[3] += 1762037;
            result[4] += 24228020;
            result[5] += 1982292;
          } else {
            result[0] += 39109932;
            result[1] += 356264;
            result[2] += 316679;
            result[3] += 1068793;
            result[4] += 1662567;
            result[5] += 435434;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 869426;
            result[1] += 1912738;
            result[2] += 4694903;
            result[3] += 18605728;
            result[4] += 2782165;
            result[5] += 14084710;
          } else {
            result[0] += 21357487;
            result[1] += 469395;
            result[2] += 14551255;
            result[3] += 2581674;
            result[4] += 2816371;
            result[5] += 1173488;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42960000))) ) ) {
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
            result[3] += 39645851;
            result[4] += 0;
            result[5] += 3303820;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 2045222;
            result[2] += 5453926;
            result[3] += 3408704;
            result[4] += 3408704;
            result[5] += 28633115;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 913822;
            result[2] += 17362633;
            result[3] += 17362633;
            result[4] += 0;
            result[5] += 7310582;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33907636;
            result[3] += 8288533;
            result[4] += 0;
            result[5] += 753503;
          } else {
            result[0] += 36814005;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 33405301;
            result[4] += 0;
            result[5] += 4772185;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37505348;
            result[3] += 4839399;
            result[4] += 0;
            result[5] += 604924;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42063281;
            result[3] += 886390;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42212339;
            result[5] += 737333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 18407002;
            result[4] += 14316557;
            result[5] += 10226112;
          } else {
            result[0] += 0;
            result[1] += 37580963;
            result[2] += 0;
            result[3] += 1789569;
            result[4] += 1789569;
            result[5] += 1789569;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1087333;
            result[1] += 1087333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30445337;
            result[5] += 10329668;
          } else {
            result[0] += 1448302;
            result[1] += 0;
            result[2] += 99882;
            result[3] += 2047600;
            result[4] += 2147483;
            result[5] += 37206402;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 249707;
            result[3] += 30963717;
            result[4] += 749122;
            result[5] += 10987125;
          } else {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 13665805;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1160801;
            result[1] += 34824059;
            result[2] += 0;
            result[3] += 5804009;
            result[4] += 1160801;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42870000))) ) ) {
            result[0] += 29795345;
            result[1] += 2482945;
            result[2] += 528286;
            result[3] += 950915;
            result[4] += 6814892;
            result[5] += 2377288;
          } else {
            result[0] += 3841828;
            result[1] += 2659727;
            result[2] += 6895589;
            result[3] += 13101620;
            result[4] += 2856744;
            result[5] += 13594162;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 42869242;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 80430;
            result[5] += 0;
          } else {
            result[0] += 8589934;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 5052902;
            result[2] += 5052902;
            result[3] += 0;
            result[4] += 22738062;
            result[5] += 10105805;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1193046;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1073741;
            result[3] += 35433480;
            result[4] += 0;
            result[5] += 6442450;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42990000))) ) ) {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32679098;
            result[3] += 7469508;
            result[4] += 0;
            result[5] += 2801065;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42bb0000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26468984;
            result[3] += 13484199;
            result[4] += 0;
            result[5] += 2996488;
          } else {
            result[0] += 2129735;
            result[1] += 0;
            result[2] += 35495597;
            result[3] += 5324339;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42043880;
            result[3] += 905792;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 209510;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41902119;
            result[5] += 838042;
          } else {
            result[0] += 5856773;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13665805;
            result[5] += 23427094;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29527900;
            result[5] += 0;
          } else {
            result[0] += 19976592;
            result[1] += 4994148;
            result[2] += 5992977;
            result[3] += 4994148;
            result[4] += 998829;
            result[5] += 5992977;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1101273;
            result[4] += 33038209;
            result[5] += 8810189;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2751024;
            result[4] += 1235153;
            result[5] += 38963494;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 2045222;
            result[2] += 4090445;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 654055;
            result[3] += 20711771;
            result[4] += 1962167;
            result[5] += 19621677;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
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
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 37092899;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5856773;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 28949503;
            result[1] += 1898328;
            result[2] += 0;
            result[3] += 1423746;
            result[4] += 8067894;
            result[5] += 2610201;
          } else {
            result[0] += 343597;
            result[1] += 229064;
            result[2] += 8933531;
            result[3] += 14431090;
            result[4] += 2176116;
            result[5] += 16836271;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6203841;
            result[1] += 5249404;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31496426;
            result[5] += 0;
          } else {
            result[0] += 35818104;
            result[1] += 400649;
            result[2] += 2684354;
            result[3] += 1121819;
            result[4] += 2443964;
            result[5] += 480779;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 7809031;
            result[2] += 7809031;
            result[3] += 0;
            result[4] += 19522578;
            result[5] += 7809031;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35984861;
            result[4] += 0;
            result[5] += 6964811;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21931747;
            result[3] += 17362633;
            result[4] += 0;
            result[5] += 3655291;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 5804009;
            result[2] += 9286415;
            result[3] += 6964811;
            result[4] += 1160801;
            result[5] += 19733633;
          } else {
            result[0] += 8053063;
            result[1] += 0;
            result[2] += 29527900;
            result[3] += 2684354;
            result[4] += 2684354;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38428654;
            result[3] += 3014012;
            result[4] += 1507006;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23427094;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42da0000))) ) ) {
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 30678337;
          } else {
            result[0] += 319724;
            result[1] += 0;
            result[2] += 41137900;
            result[3] += 1385473;
            result[4] += 0;
            result[5] += 106574;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 636291;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41358944;
            result[5] += 954437;
          } else {
            result[0] += 19253301;
            result[1] += 0;
            result[2] += 987348;
            result[3] += 0;
            result[4] += 11848185;
            result[5] += 10860836;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a70000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 679429;
            result[1] += 48530;
            result[2] += 0;
            result[3] += 2183881;
            result[4] += 1698574;
            result[5] += 38339256;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5541893;
            result[4] += 1385473;
            result[5] += 36022306;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 723870;
            result[3] += 27507093;
            result[4] += 482580;
            result[5] += 14236127;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d20000))) ) ) {
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 98962;
            result[1] += 42850710;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 1193046;
            result[1] += 8351325;
            result[2] += 1193046;
            result[3] += 5070447;
            result[4] += 5368709;
            result[5] += 21773098;
          } else {
            result[0] += 36111914;
            result[1] += 890333;
            result[2] += 71226;
            result[3] += 783493;
            result[4] += 4273599;
            result[5] += 819106;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1686845;
            result[1] += 778543;
            result[2] += 11807916;
            result[3] += 13494761;
            result[4] += 1686845;
            result[5] += 13494761;
          } else {
            result[0] += 31327996;
            result[1] += 0;
            result[2] += 3031741;
            result[3] += 0;
            result[4] += 8084644;
            result[5] += 505290;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 0;
            result[4] += 0;
            result[5] += 39045157;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 1087333;
            result[1] += 4893000;
            result[2] += 7067667;
            result[3] += 20659336;
            result[4] += 543666;
            result[5] += 8698667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27790964;
            result[3] += 10105805;
            result[4] += 0;
            result[5] += 5052902;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12271335;
            result[4] += 30678337;
            result[5] += 0;
          } else {
            result[0] += 1408185;
            result[1] += 0;
            result[2] += 38021021;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3520464;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a60000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 25053975;
            result[4] += 0;
            result[5] += 1789569;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33379365;
            result[3] += 8636619;
            result[4] += 0;
            result[5] += 933688;
          } else {
            result[0] += 1515870;
            result[1] += 0;
            result[2] += 39917931;
            result[3] += 1010580;
            result[4] += 0;
            result[5] += 505290;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35140641;
            result[3] += 6507526;
            result[4] += 0;
            result[5] += 1301505;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41468649;
            result[3] += 1481023;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 2045222;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42844145;
            result[3] += 105527;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42709730;
            result[5] += 239942;
          } else {
            result[0] += 0;
            result[1] += 2321603;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35984861;
            result[5] += 4643207;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42780000))) ) ) {
            result[0] += 933688;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36413853;
            result[5] += 5602131;
          } else {
            result[0] += 5153960;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15461882;
            result[5] += 22333829;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 27440068;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2386092;
            result[4] += 10737418;
            result[5] += 2386092;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2110669;
            result[4] += 1521645;
            result[5] += 39317357;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 4331059;
            result[1] += 721843;
            result[2] += 721843;
            result[3] += 9383962;
            result[4] += 3970137;
            result[5] += 23820827;
          } else {
            result[0] += 419021;
            result[1] += 419021;
            result[2] += 838042;
            result[3] += 28912462;
            result[4] += 628531;
            result[5] += 11732593;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42900000))) ) ) {
            result[0] += 795364;
            result[1] += 11930464;
            result[2] += 0;
            result[3] += 397682;
            result[4] += 29826161;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3303820;
            result[2] += 23126746;
            result[3] += 3303820;
            result[4] += 0;
            result[5] += 13215283;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 19858450;
            result[1] += 3386712;
            result[2] += 1385473;
            result[3] += 1539414;
            result[4] += 12007435;
            result[5] += 4772185;
          } else {
            result[0] += 39258685;
            result[1] += 623153;
            result[2] += 143804;
            result[3] += 719023;
            result[4] += 1485981;
            result[5] += 719023;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 1305461;
            result[1] += 3524745;
            result[2] += 12140789;
            result[3] += 14882257;
            result[4] += 1174915;
            result[5] += 9921504;
          } else {
            result[0] += 31684184;
            result[1] += 2112278;
            result[2] += 3520464;
            result[3] += 0;
            result[4] += 3520464;
            result[5] += 2112278;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2603010;
            result[2] += 1301505;
            result[3] += 0;
            result[4] += 0;
            result[5] += 39045157;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7990636;
            result[3] += 21974251;
            result[4] += 0;
            result[5] += 12984784;
          } else {
            result[0] += 0;
            result[1] += 5804009;
            result[2] += 32502455;
            result[3] += 4643207;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e80000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 25769803;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 15618062;
            result[4] += 0;
            result[5] += 11713547;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 7158278;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1122867;
            result[1] += 0;
            result[2] += 36072110;
            result[3] += 5193261;
            result[4] += 0;
            result[5] += 561433;
          } else {
            result[0] += 71463;
            result[1] += 0;
            result[2] += 41448935;
            result[3] += 1429273;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42199460;
            result[5] += 750212;
          } else {
            result[0] += 3435973;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32641751;
            result[5] += 6871947;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 33746171;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 30585373;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1301505;
            result[4] += 10412041;
            result[5] += 650752;
          } else {
            result[0] += 138547;
            result[1] += 138547;
            result[2] += 46182;
            result[3] += 2632399;
            result[4] += 2678581;
            result[5] += 37315414;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10987125;
            result[4] += 0;
            result[5] += 31962547;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 580400;
            result[3] += 32502455;
            result[4] += 0;
            result[5] += 9866816;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423c0000))) ) ) {
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 42849557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 100115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 39370533;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3579139;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 9008955;
            result[1] += 5237764;
            result[2] += 0;
            result[3] += 209510;
            result[4] += 27236377;
            result[5] += 1257063;
          } else {
            result[0] += 0;
            result[1] += 41082295;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1867377;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 39247801;
            result[1] += 358245;
            result[2] += 0;
            result[3] += 557271;
            result[4] += 2467914;
            result[5] += 318440;
          } else {
            result[0] += 8023565;
            result[1] += 235987;
            result[2] += 8849520;
            result[3] += 13333277;
            result[4] += 1651910;
            result[5] += 10855411;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 24542670;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 3579139;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 1997659;
            result[1] += 2996488;
            result[2] += 6991807;
            result[3] += 0;
            result[4] += 17978932;
            result[5] += 12984784;
          } else {
            result[0] += 727960;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2183881;
            result[4] += 0;
            result[5] += 40037830;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1717986;
            result[3] += 30064771;
            result[4] += 0;
            result[5] += 11166914;
          } else {
            result[0] += 3205199;
            result[1] += 641039;
            result[2] += 19231196;
            result[3] += 15384957;
            result[4] += 0;
            result[5] += 4487279;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e50000))) ) ) {
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
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 9544371;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 21474836;
            result[4] += 2386092;
            result[5] += 2386092;
          } else {
            result[0] += 1894838;
            result[1] += 0;
            result[2] += 36001931;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 230912;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 5310981;
            result[4] += 0;
            result[5] += 1616385;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 131344;
            result[1] += 0;
            result[2] += 41833244;
            result[3] += 985084;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 397682;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42353149;
            result[5] += 198841;
          } else {
            result[0] += 0;
            result[1] += 1022611;
            result[2] += 1022611;
            result[3] += 0;
            result[4] += 27610504;
            result[5] += 13293946;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 971986;
            result[4] += 425244;
            result[5] += 41552441;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 29527900;
            result[1] += 894784;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11632203;
            result[5] += 894784;
          } else {
            result[0] += 0;
            result[1] += 1639300;
            result[2] += 1748587;
            result[3] += 15627998;
            result[4] += 3060027;
            result[5] += 20873759;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42080000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2045222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40904450;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
            result[0] += 25419194;
            result[1] += 7888715;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9641763;
            result[5] += 0;
          } else {
            result[0] += 2260509;
            result[1] += 5274521;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33907636;
            result[5] += 1507006;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 36099022;
            result[1] += 354955;
            result[2] += 0;
            result[3] += 1277841;
            result[4] += 2910638;
            result[5] += 2307213;
          } else {
            result[0] += 12102656;
            result[1] += 1328340;
            result[2] += 5460954;
            result[3] += 11217096;
            result[4] += 1180747;
            result[5] += 11659876;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4521018;
            result[5] += 38428654;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 698368;
            result[1] += 0;
            result[2] += 3491843;
            result[3] += 24093718;
            result[4] += 698368;
            result[5] += 13967373;
          } else {
            result[0] += 0;
            result[1] += 37580963;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 18790481;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 2260509;
            result[1] += 0;
            result[2] += 36921648;
            result[3] += 1507006;
            result[4] += 753503;
            result[5] += 1507006;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 40086361;
            result[1] += 0;
            result[2] += 2863311;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6964811;
            result[3] += 34824059;
            result[4] += 0;
            result[5] += 1160801;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 4294967;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36956695;
            result[3] += 4994148;
            result[4] += 0;
            result[5] += 998829;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19685266;
            result[3] += 19685266;
            result[4] += 0;
            result[5] += 3579139;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 30678337;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 319328;
            result[1] += 0;
            result[2] += 37680753;
            result[3] += 4630262;
            result[4] += 0;
            result[5] += 319328;
          } else {
            result[0] += 75882;
            result[1] += 0;
            result[2] += 42418493;
            result[3] += 455296;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41990974;
            result[5] += 958698;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33663257;
            result[5] += 9286415;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
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
            result[3] += 635863;
            result[4] += 751474;
            result[5] += 41562334;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 423149;
            result[1] += 317362;
            result[2] += 0;
            result[3] += 15868105;
            result[4] += 3702558;
            result[5] += 22638497;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6401153;
            result[1] += 11356884;
            result[2] += 0;
            result[3] += 412977;
            result[4] += 23952702;
            result[5] += 825955;
          } else {
            result[0] += 37353861;
            result[1] += 763065;
            result[2] += 0;
            result[3] += 1199102;
            result[4] += 2834242;
            result[5] += 799401;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 1723732;
            result[1] += 3303820;
            result[2] += 3591109;
            result[3] += 14795372;
            result[4] += 4596620;
            result[5] += 14939016;
          } else {
            result[0] += 26981204;
            result[1] += 1651910;
            result[2] += 7158278;
            result[3] += 1651910;
            result[4] += 1651910;
            result[5] += 3854457;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42740000))) ) ) {
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40904450;
            result[4] += 0;
            result[5] += 2045222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12271335;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 0;
            result[4] += 0;
            result[5] += 33405301;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14900906;
            result[3] += 19283526;
            result[4] += 0;
            result[5] += 8765239;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d80000))) ) ) {
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 6263493;
            result[4] += 0;
            result[5] += 894784;
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
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2045222;
            result[3] += 26587892;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 9544371;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 325376;
            result[1] += 0;
            result[2] += 37092899;
            result[3] += 4880644;
            result[4] += 325376;
            result[5] += 325376;
          } else {
            result[0] += 28010656;
            result[1] += 0;
            result[2] += 13071639;
            result[3] += 0;
            result[4] += 1867377;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 536870;
            result[1] += 0;
            result[2] += 37715181;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 402653;
          } else {
            result[0] += 90995;
            result[1] += 0;
            result[2] += 42585692;
            result[3] += 272985;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 212622;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42099184;
            result[5] += 637866;
          } else {
            result[0] += 1533916;
            result[1] += 1533916;
            result[2] += 0;
            result[3] += 1533916;
            result[4] += 19940919;
            result[5] += 18407002;
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 982697;
            result[4] += 1156115;
            result[5] += 40810860;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 40563580;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2386092;
            result[5] += 0;
          } else {
            result[0] += 214748;
            result[1] += 1073741;
            result[2] += 429496;
            result[3] += 13529146;
            result[4] += 4402341;
            result[5] += 23300197;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
            result[0] += 14402285;
            result[1] += 22374979;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6172408;
            result[5] += 0;
          } else {
            result[0] += 2213900;
            result[1] += 2435290;
            result[2] += 1328340;
            result[3] += 3542241;
            result[4] += 28559318;
            result[5] += 4870581;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 38270797;
            result[1] += 239942;
            result[2] += 79980;
            result[3] += 1239701;
            result[4] += 2439413;
            result[5] += 679836;
          } else {
            result[0] += 11204262;
            result[1] += 622459;
            result[2] += 3112295;
            result[3] += 12075705;
            result[4] += 2116360;
            result[5] += 13818590;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 22738062;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15158708;
            result[5] += 5052902;
          } else {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8053063;
            result[1] += 29527900;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1631000;
            result[3] += 35882005;
            result[4] += 0;
            result[5] += 5436667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 25769803;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28139440;
            result[3] += 7405116;
            result[4] += 0;
            result[5] += 7405116;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12025908;
            result[3] += 29205777;
            result[4] += 0;
            result[5] += 1717986;
          } else {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 1867377;
            result[1] += 0;
            result[2] += 37347541;
            result[3] += 1867377;
            result[4] += 0;
            result[5] += 1867377;
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
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10367162;
            result[3] += 26658417;
            result[4] += 0;
            result[5] += 5924092;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4294967;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39214918;
            result[3] += 2489836;
            result[4] += 0;
            result[5] += 1244918;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cc0000))) ) ) {
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 13329208;
            result[1] += 0;
            result[2] += 29620464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 211314;
            result[1] += 0;
            result[2] += 40308241;
            result[3] += 2113145;
            result[4] += 0;
            result[5] += 316971;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 176747;
            result[4] += 39768215;
            result[5] += 3004709;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 12689676;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24403223;
            result[5] += 5856773;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1767476;
            result[4] += 1590728;
            result[5] += 39591468;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 4857403;
            result[1] += 255652;
            result[2] += 0;
            result[3] += 6391320;
            result[4] += 8692195;
            result[5] += 22753100;
          } else {
            result[0] += 442780;
            result[1] += 0;
            result[2] += 1106950;
            result[3] += 21696226;
            result[4] += 4870581;
            result[5] += 14833134;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5575197;
            result[1] += 12802306;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24572168;
            result[5] += 0;
          } else {
            result[0] += 37110809;
            result[1] += 573139;
            result[2] += 35821;
            result[3] += 1110458;
            result[4] += 2364202;
            result[5] += 1755241;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 1197203;
            result[1] += 1197203;
            result[2] += 8679724;
            result[3] += 15563644;
            result[4] += 598601;
            result[5] += 15713294;
          } else {
            result[0] += 31128662;
            result[1] += 2758235;
            result[2] += 6304539;
            result[3] += 0;
            result[4] += 2758235;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 6927366;
            result[2] += 4156419;
            result[3] += 0;
            result[4] += 11083786;
            result[5] += 20782099;
          } else {
            result[0] += 0;
            result[1] += 523776;
            result[2] += 4190211;
            result[3] += 27236377;
            result[4] += 523776;
            result[5] += 10475529;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1481023;
            result[3] += 0;
            result[4] += 10367162;
            result[5] += 31101487;
          } else {
            result[0] += 0;
            result[1] += 3123612;
            result[2] += 16398966;
            result[3] += 7809031;
            result[4] += 3123612;
            result[5] += 12494450;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 2147483;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 8589934;
            result[4] += 2147483;
            result[5] += 17179869;
          } else {
            result[0] += 671088;
            result[1] += 0;
            result[2] += 40936407;
            result[3] += 671088;
            result[4] += 0;
            result[5] += 671088;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
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
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428e0000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 300347;
            result[1] += 0;
            result[2] += 36642378;
            result[3] += 5706599;
            result[4] += 0;
            result[5] += 300347;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 71463;
            result[1] += 0;
            result[2] += 42092108;
            result[3] += 786100;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d40000))) ) ) {
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
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41318672;
            result[5] += 1631000;
          } else {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19685266;
            result[5] += 19685266;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 61444;
            result[1] += 61444;
            result[2] += 122888;
            result[3] += 1474666;
            result[4] += 2334889;
            result[5] += 38894339;
          } else {
            result[0] += 4045359;
            result[1] += 774643;
            result[2] += 0;
            result[3] += 13513223;
            result[4] += 3528931;
            result[5] += 21087514;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 7310582;
            result[1] += 11696932;
            result[2] += 0;
            result[3] += 182764;
            result[4] += 22297277;
            result[5] += 1462116;
          } else {
            result[0] += 38901635;
            result[1] += 445284;
            result[2] += 0;
            result[3] += 607205;
            result[4] += 2509782;
            result[5] += 485764;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 864758;
            result[1] += 576505;
            result[2] += 2594275;
            result[3] += 22483721;
            result[4] += 576505;
            result[5] += 15853906;
          } else {
            result[0] += 22408525;
            result[1] += 1120426;
            result[2] += 11951213;
            result[3] += 0;
            result[4] += 4481705;
            result[5] += 2987803;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 3067833;
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1952257;
            result[3] += 33188383;
            result[4] += 1952257;
            result[5] += 5856773;
          } else {
            result[0] += 3767515;
            result[1] += 2260509;
            result[2] += 0;
            result[3] += 6781527;
            result[4] += 6781527;
            result[5] += 23358594;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3390763;
            result[3] += 32777381;
            result[4] += 0;
            result[5] += 6781527;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22667882;
            result[3] += 13123511;
            result[4] += 0;
            result[5] += 7158278;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19579997;
            result[3] += 20211610;
            result[4] += 0;
            result[5] += 3158064;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 1342177;
            result[4] += 0;
            result[5] += 1342177;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 24542670;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18407002;
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1412818;
            result[1] += 0;
            result[2] += 27973800;
            result[3] += 11019981;
            result[4] += 565127;
            result[5] += 1977945;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41772969;
            result[3] += 1176703;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ac0000))) ) ) {
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
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
            result[0] += 21474836;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 453294;
            result[1] += 0;
            result[2] += 40343228;
            result[3] += 2153149;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 1205604;
            result[1] += 602802;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40387762;
            result[5] += 753503;
          } else {
            result[0] += 0;
            result[1] += 2564159;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25000555;
            result[5] += 15384957;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 41607495;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1342177;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 37025580;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5924092;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2280044;
            result[4] += 1219558;
            result[5] += 39450069;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 4272480;
            result[1] += 2698408;
            result[2] += 899469;
            result[3] += 12142839;
            result[4] += 2698408;
            result[5] += 20238065;
          } else {
            result[0] += 0;
            result[1] += 308990;
            result[2] += 1235961;
            result[3] += 32443997;
            result[4] += 0;
            result[5] += 8960723;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
            result[0] += 7981797;
            result[1] += 380085;
            result[2] += 0;
            result[3] += 8741968;
            result[4] += 7221626;
            result[5] += 18624194;
          } else {
            result[0] += 38343809;
            result[1] += 460586;
            result[2] += 0;
            result[3] += 767643;
            result[4] += 3185721;
            result[5] += 191910;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 1342177;
            result[1] += 2318306;
            result[2] += 10737418;
            result[3] += 16472175;
            result[4] += 1952257;
            result[5] += 10127337;
          } else {
            result[0] += 27126109;
            result[1] += 1130254;
            result[2] += 10737418;
            result[3] += 1130254;
            result[4] += 2260509;
            result[5] += 565127;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42960000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42eb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6396759;
            result[4] += 0;
            result[5] += 36552913;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 34896609;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37202885;
            result[3] += 4839399;
            result[4] += 0;
            result[5] += 907387;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 14316557;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 1263225;
            result[1] += 0;
            result[2] += 30317416;
            result[3] += 9684730;
            result[4] += 0;
            result[5] += 1684300;
          } else {
            result[0] += 390451;
            result[1] += 0;
            result[2] += 39826060;
            result[3] += 2733161;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39467267;
            result[3] += 3482405;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 82754;
            result[1] += 0;
            result[2] += 42370390;
            result[3] += 496528;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
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
            result[4] += 32212254;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4090445;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 8180890;
            result[5] += 24542670;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30317416;
            result[5] += 12632256;
          } else {
            result[0] += 244032;
            result[1] += 122016;
            result[2] += 0;
            result[3] += 915120;
            result[4] += 1098145;
            result[5] += 40570358;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 31496426;
            result[1] += 2147483;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7874106;
            result[5] += 1431655;
          } else {
            result[0] += 453055;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15856946;
            result[4] += 3715056;
            result[5] += 22924614;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ac0000))) ) ) {
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1789569;
            result[1] += 41160103;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 11545611;
            result[1] += 461824;
            result[2] += 2078209;
            result[3] += 4387332;
            result[4] += 19165714;
            result[5] += 5310981;
          } else {
            result[0] += 35365902;
            result[1] += 2027344;
            result[2] += 112630;
            result[3] += 600694;
            result[4] += 4317493;
            result[5] += 525607;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 349184;
            result[1] += 0;
            result[2] += 4539396;
            result[3] += 19554322;
            result[4] += 1222145;
            result[5] += 17284624;
          } else {
            result[0] += 15543691;
            result[1] += 204522;
            result[2] += 17588913;
            result[3] += 5113056;
            result[4] += 3272356;
            result[5] += 1227133;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4026531;
            result[4] += 0;
            result[5] += 38923141;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 22497447;
            result[4] += 0;
            result[5] += 16361780;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 2386092;
            result[4] += 4772185;
            result[5] += 7158278;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9042036;
            result[3] += 28256363;
            result[4] += 0;
            result[5] += 5651272;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 4772185;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 33746171;
            result[4] += 0;
            result[5] += 3067833;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41875931;
            result[3] += 1073741;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
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
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 26430567;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17685159;
            result[3] += 7579354;
            result[4] += 0;
            result[5] += 17685159;
          } else {
            result[0] += 341257;
            result[1] += 0;
            result[2] += 40170863;
            result[3] += 2291299;
            result[4] += 0;
            result[5] += 146253;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
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
            result[4] += 41364814;
            result[5] += 1584858;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 34359738;
          } else {
            result[0] += 2526451;
            result[1] += 3789677;
            result[2] += 1263225;
            result[3] += 11369031;
            result[4] += 18948385;
            result[5] += 5052902;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 41875931;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1073741;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 178770;
            result[1] += 44692;
            result[2] += 44692;
            result[3] += 3173180;
            result[4] += 3173180;
            result[5] += 36335155;
          } else {
            result[0] += 354955;
            result[1] += 532433;
            result[2] += 887389;
            result[3] += 23959528;
            result[4] += 1242345;
            result[5] += 15973018;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 24159191;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18790481;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42759208;
            result[2] += 0;
            result[3] += 0;
            result[4] += 190464;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 41082295;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1867377;
            result[5] += 0;
          } else {
            result[0] += 3181457;
            result[1] += 4772185;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34996029;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 8180890;
            result[1] += 34768782;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 37463664;
            result[1] += 433105;
            result[2] += 252645;
            result[3] += 1118857;
            result[4] += 2995649;
            result[5] += 685751;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1235961;
            result[1] += 1235961;
            result[2] += 12977599;
            result[3] += 14368056;
            result[4] += 2008437;
            result[5] += 11123656;
          } else {
            result[0] += 26247022;
            result[1] += 477218;
            result[2] += 9544371;
            result[3] += 477218;
            result[4] += 3817748;
            result[5] += 2386092;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1590728;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 27042386;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6871947;
            result[3] += 32641751;
            result[4] += 0;
            result[5] += 3435973;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 14316557;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 267599;
            result[1] += 267599;
            result[2] += 35323095;
            result[3] += 5351984;
            result[4] += 133799;
            result[5] += 1605595;
          } else {
            result[0] += 9698313;
            result[1] += 0;
            result[2] += 20782099;
            result[3] += 12469259;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42850000))) ) ) {
            result[0] += 6135667;
            result[1] += 18407002;
            result[2] += 12271335;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 209851;
            result[1] += 0;
            result[2] += 41550660;
            result[3] += 1189160;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 1379909;
            result[1] += 172488;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40534831;
            result[5] += 862443;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2431113;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21069650;
            result[5] += 19448908;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1512775;
            result[4] += 920819;
            result[5] += 40516077;
          } else {
            result[0] += 684456;
            result[1] += 171114;
            result[2] += 0;
            result[3] += 7357912;
            result[4] += 8726825;
            result[5] += 26009363;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6396759;
            result[4] += 913822;
            result[5] += 35639090;
          } else {
            result[0] += 0;
            result[1] += 1464193;
            result[2] += 0;
            result[3] += 22694997;
            result[4] += 488064;
            result[5] += 18302417;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 4338350;
            result[1] += 12581217;
            result[2] += 0;
            result[3] += 216917;
            result[4] += 25379352;
            result[5] += 433835;
          } else {
            result[0] += 36654360;
            result[1] += 409754;
            result[2] += 223502;
            result[3] += 1229262;
            result[4] += 3054530;
            result[5] += 1378263;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 2684354;
            result[1] += 565127;
            result[2] += 6922809;
            result[3] += 13845618;
            result[4] += 6075118;
            result[5] += 12856645;
          } else {
            result[0] += 36132264;
            result[1] += 0;
            result[2] += 3408704;
            result[3] += 0;
            result[4] += 2726963;
            result[5] += 681740;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 913822;
            result[3] += 38380558;
            result[4] += 0;
            result[5] += 3655291;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9042036;
            result[3] += 20344581;
            result[4] += 0;
            result[5] += 13563054;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7990636;
            result[3] += 12984784;
            result[4] += 0;
            result[5] += 21974251;
          } else {
            result[0] += 1481023;
            result[1] += 0;
            result[2] += 28139440;
            result[3] += 11848185;
            result[4] += 0;
            result[5] += 1481023;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 15270994;
            result[4] += 0;
            result[5] += 1908874;
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
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 381210;
            result[1] += 0;
            result[2] += 34944260;
            result[3] += 5972291;
            result[4] += 127070;
            result[5] += 1524840;
          } else {
            result[0] += 23860929;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a40000))) ) ) {
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 28633115;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 1101273;
            result[1] += 0;
            result[2] += 31936936;
            result[3] += 9911462;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42142348;
            result[3] += 726592;
            result[4] += 0;
            result[5] += 80732;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 208493;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41698711;
            result[5] += 1042467;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24542670;
            result[5] += 18407002;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2454267;
            result[4] += 1227133;
            result[5] += 4908534;
          } else {
            result[0] += 0;
            result[1] += 50888;
            result[2] += 0;
            result[3] += 2086417;
            result[4] += 1730200;
            result[5] += 39082166;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42600000))) ) ) {
            result[0] += 39645851;
            result[1] += 0;
            result[2] += 1651910;
            result[3] += 0;
            result[4] += 1651910;
            result[5] += 0;
          } else {
            result[0] += 244032;
            result[1] += 1342177;
            result[2] += 1464193;
            result[3] += 21230804;
            result[4] += 976128;
            result[5] += 17692336;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12271335;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1160801;
            result[4] += 39467267;
            result[5] += 2321603;
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
            result[0] += 3579139;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5174659;
            result[1] += 7761989;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29495558;
            result[5] += 517465;
          } else {
            result[0] += 37220486;
            result[1] += 76901;
            result[2] += 153803;
            result[3] += 1461134;
            result[4] += 2883818;
            result[5] += 1153527;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 403915;
            result[1] += 0;
            result[2] += 9693970;
            result[3] += 17503001;
            result[4] += 673192;
            result[5] += 14675593;
          } else {
            result[0] += 26323993;
            result[1] += 2770946;
            result[2] += 11083786;
            result[3] += 277094;
            result[4] += 2493851;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 876523;
            result[3] += 14900906;
            result[4] += 0;
            result[5] += 27172242;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12526987;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 23264406;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41160103;
            result[3] += 1789569;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25053975;
            result[3] += 15509604;
            result[4] += 0;
            result[5] += 2386092;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39443577;
            result[3] += 3506095;
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 27126109;
            result[4] += 0;
            result[5] += 4521018;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42fa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37961968;
            result[3] += 4987703;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41935113;
            result[3] += 1014559;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27331610;
            result[3] += 15618062;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39768215;
            result[3] += 3181457;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42760883;
            result[3] += 188789;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 41927061;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1022611;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 951416;
            result[1] += 407750;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39959505;
            result[5] += 1631000;
          } else {
            result[0] += 0;
            result[1] += 2651214;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31284329;
            result[5] += 9014128;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x427e0000))) ) ) {
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
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 42665864;
            result[2] += 0;
            result[3] += 0;
            result[4] += 283808;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18407002;
            result[5] += 24542670;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 9203501;
          } else {
            result[0] += 58594;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1582047;
            result[4] += 937509;
            result[5] += 40371520;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 6003717;
            result[1] += 1693356;
            result[2] += 0;
            result[3] += 7235249;
            result[4] += 2617005;
            result[5] += 25400344;
          } else {
            result[0] += 1027504;
            result[1] += 0;
            result[2] += 4521018;
            result[3] += 24660099;
            result[4] += 822003;
            result[5] += 11919047;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 37962717;
            result[1] += 193292;
            result[2] += 0;
            result[3] += 889147;
            result[4] += 3131344;
            result[5] += 773171;
          } else {
            result[0] += 10345541;
            result[1] += 1881007;
            result[2] += 2821511;
            result[3] += 6897027;
            result[4] += 7210529;
            result[5] += 13794055;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2218058;
            result[1] += 3629549;
            result[2] += 3629549;
            result[3] += 18752674;
            result[4] += 2822983;
            result[5] += 11896857;
          } else {
            result[0] += 18004155;
            result[1] += 0;
            result[2] += 21041001;
            result[3] += 2819928;
            result[4] += 650752;
            result[5] += 433835;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 32212254;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428e0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ae0000))) ) ) {
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
          result[4] += 0;
          result[5] += 42949672;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 28224070;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 2684354;
            result[4] += 8053063;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 3067833;
            result[1] += 9203501;
            result[2] += 6135667;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 18407002;
          } else {
            result[0] += 0;
            result[1] += 3817748;
            result[2] += 34359738;
            result[3] += 1908874;
            result[4] += 0;
            result[5] += 2863311;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24728599;
            result[3] += 13015052;
            result[4] += 2603010;
            result[5] += 2603010;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37223049;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 928641;
            result[1] += 0;
            result[2] += 37842144;
            result[3] += 3946726;
            result[4] += 0;
            result[5] += 232160;
          } else {
            result[0] += 84713;
            result[1] += 0;
            result[2] += 42187252;
            result[3] += 677706;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 168430;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41433802;
            result[5] += 1347440;
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
            result[0] += 2789472;
            result[1] += 738389;
            result[2] += 0;
            result[3] += 2010061;
            result[4] += 3938078;
            result[5] += 33473670;
          } else {
            result[0] += 775264;
            result[1] += 310105;
            result[2] += 2015688;
            result[3] += 22792786;
            result[4] += 2015688;
            result[5] += 15040138;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 2779096;
            result[1] += 9095224;
            result[2] += 505290;
            result[3] += 3537031;
            result[4] += 21727481;
            result[5] += 5305547;
          } else {
            result[0] += 39580275;
            result[1] += 284166;
            result[2] += 40595;
            result[3] += 852498;
            result[4] += 1786186;
            result[5] += 405951;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1460045;
            result[1] += 973363;
            result[2] += 7665239;
            result[3] += 15330478;
            result[4] += 2920091;
            result[5] += 14600455;
          } else {
            result[0] += 35329569;
            result[1] += 2078209;
            result[2] += 3810051;
            result[3] += 0;
            result[4] += 1731841;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2770946;
            result[3] += 37407779;
            result[4] += 0;
            result[5] += 2770946;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6507526;
            result[3] += 15618062;
            result[4] += 3904515;
            result[5] += 16919568;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38306465;
            result[3] += 4643207;
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
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27514634;
            result[3] += 14092861;
            result[4] += 0;
            result[5] += 1342177;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34677884;
            result[3] += 6999205;
            result[4] += 0;
            result[5] += 1272582;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42db0000))) ) ) {
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39665286;
            result[3] += 3284386;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 345671;
            result[1] += 0;
            result[2] += 42344747;
            result[3] += 259253;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 534643;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41345743;
            result[5] += 1069286;
          } else {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2260509;
            result[2] += 0;
            result[3] += 3390763;
            result[4] += 13563054;
            result[5] += 23735345;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36814005;
            result[5] += 6135667;
          } else {
            result[0] += 144287;
            result[1] += 0;
            result[2] += 48095;
            result[3] += 2212413;
            result[4] += 1827645;
            result[5] += 38717230;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 543666;
            result[2] += 0;
            result[3] += 4893000;
            result[4] += 543666;
            result[5] += 36969338;
          } else {
            result[0] += 469395;
            result[1] += 234697;
            result[2] += 469395;
            result[3] += 26051440;
            result[4] += 234697;
            result[5] += 15490045;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 2243639;
            result[1] += 2243639;
            result[2] += 1282079;
            result[3] += 1923119;
            result[4] += 33654594;
            result[5] += 1602599;
          } else {
            result[0] += 2045222;
            result[1] += 35450523;
            result[2] += 0;
            result[3] += 681740;
            result[4] += 4090445;
            result[5] += 681740;
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
            result[1] += 42735992;
            result[2] += 0;
            result[3] += 0;
            result[4] += 213679;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 23839038;
            result[1] += 4531387;
            result[2] += 197016;
            result[3] += 394033;
            result[4] += 12412061;
            result[5] += 1576134;
          } else {
            result[0] += 39085999;
            result[1] += 1482572;
            result[2] += 0;
            result[3] += 628970;
            result[4] += 1572425;
            result[5] += 179705;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 3655291;
            result[1] += 182764;
            result[2] += 6945053;
            result[3] += 16997104;
            result[4] += 1644881;
            result[5] += 13524577;
          } else {
            result[0] += 38725114;
            result[1] += 0;
            result[2] += 2816371;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1408185;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
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
            result[2] += 2976710;
            result[3] += 31893321;
            result[4] += 0;
            result[5] += 8079641;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 11713547;
            result[4] += 0;
            result[5] += 15618062;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38428654;
            result[3] += 4521018;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5368709;
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35681266;
            result[3] += 7268406;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 1263225;
            result[1] += 0;
            result[2] += 32843867;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 3789677;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 11713547;
            result[1] += 0;
            result[2] += 11713547;
            result[3] += 0;
            result[4] += 19522578;
            result[5] += 0;
          } else {
            result[0] += 38654705;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 38177487;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 9544371;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 474582;
            result[1] += 0;
            result[2] += 37254688;
            result[3] += 4745820;
            result[4] += 0;
            result[5] += 474582;
          } else {
            result[0] += 76833;
            result[1] += 0;
            result[2] += 42027676;
            result[3] += 845163;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x421a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c20000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
            result[0] += 160860;
            result[1] += 1126021;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41180210;
            result[5] += 482580;
          } else {
            result[0] += 6442450;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 2147483;
            result[4] += 12884901;
            result[5] += 19327352;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 50233;
            result[2] += 0;
            result[3] += 2109808;
            result[4] += 2762844;
            result[5] += 38026786;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1908874;
            result[4] += 12884901;
            result[5] += 20997617;
          } else {
            result[0] += 798321;
            result[1] += 319328;
            result[2] += 1596642;
            result[3] += 26663923;
            result[4] += 159664;
            result[5] += 13411793;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 3221225;
            result[1] += 24696061;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15032385;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 42758360;
            result[2] += 0;
            result[3] += 0;
            result[4] += 191312;
            result[5] += 0;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
            result[0] += 6885062;
            result[1] += 6229341;
            result[2] += 0;
            result[3] += 983580;
            result[4] += 24917367;
            result[5] += 3934321;
          } else {
            result[0] += 34802813;
            result[1] += 1465005;
            result[2] += 178659;
            result[3] += 1250614;
            result[4] += 2394033;
            result[5] += 2858547;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 229677;
            result[1] += 459354;
            result[2] += 3674838;
            result[3] += 19752256;
            result[4] += 2067096;
            result[5] += 16766449;
          } else {
            result[0] += 13008795;
            result[1] += 0;
            result[2] += 19409948;
            result[3] += 4955731;
            result[4] += 2477865;
            result[5] += 3097332;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1481023;
            result[3] += 11848185;
            result[4] += 0;
            result[5] += 29620464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25053975;
            result[3] += 3579139;
            result[4] += 7158278;
            result[5] += 7158278;
          }
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27731284;
            result[3] += 13189269;
            result[4] += 0;
            result[5] += 2029118;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38676073;
            result[3] += 3632559;
            result[4] += 0;
            result[5] += 641039;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37863527;
            result[3] += 5086145;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 9911462;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 184729;
            result[1] += 0;
            result[2] += 42580213;
            result[3] += 184729;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 340870;
            result[1] += 0;
            result[2] += 0;
            result[3] += 511305;
            result[4] += 40734015;
            result[5] += 1363481;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 17179869;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 23553046;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15240206;
            result[5] += 4156419;
          } else {
            result[0] += 0;
            result[1] += 93470;
            result[2] += 0;
            result[3] += 2290026;
            result[4] += 2476966;
            result[5] += 38089209;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 35280088;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7669584;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 819650;
            result[2] += 0;
            result[3] += 21966626;
            result[4] += 819650;
            result[5] += 19343745;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 3303820;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18171015;
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
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 894784;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 4473924;
          } else {
            result[0] += 0;
            result[1] += 30480413;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11776523;
            result[5] += 692736;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 1673363;
            result[1] += 17849214;
            result[2] += 2231151;
            result[3] += 2788939;
            result[4] += 17849214;
            result[5] += 557787;
          } else {
            result[0] += 35965986;
            result[1] += 384102;
            result[2] += 453939;
            result[3] += 1536411;
            result[4] += 3177577;
            result[5] += 1431655;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 536870;
            result[1] += 1342177;
            result[2] += 5905580;
            result[3] += 16106127;
            result[4] += 1610612;
            result[5] += 17448304;
          } else {
            result[0] += 20843223;
            result[1] += 0;
            result[2] += 12632256;
            result[3] += 2526451;
            result[4] += 5684515;
            result[5] += 1263225;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
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
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 28633115;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1533916;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 4601750;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22178929;
            result[3] += 9857301;
            result[4] += 1760232;
            result[5] += 9153208;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42df0000))) ) ) {
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 20344581;
            result[4] += 0;
            result[5] += 1130254;
          } else {
            result[0] += 452101;
            result[1] += 0;
            result[2] += 37072349;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 1130254;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 3303820;
            result[1] += 0;
            result[2] += 36342030;
            result[3] += 1101273;
            result[4] += 0;
            result[5] += 2202547;
          } else {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 66280;
            result[1] += 0;
            result[2] += 41160103;
            result[3] += 1723289;
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 205500;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42333170;
            result[5] += 411001;
          } else {
            result[0] += 0;
            result[1] += 2045222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 26587892;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x424a0000))) ) ) {
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
            result[3] += 509788;
            result[4] += 764682;
            result[5] += 41675201;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 32909489;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3346727;
            result[4] += 5577879;
            result[5] += 1115575;
          } else {
            result[0] += 296204;
            result[1] += 296204;
            result[2] += 691144;
            result[3] += 16883664;
            result[4] += 4541804;
            result[5] += 20240650;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423c0000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 42848137;
            result[2] += 0;
            result[3] += 0;
            result[4] += 101535;
            result[5] += 0;
          } else {
            result[0] += 16519104;
            result[1] += 3303820;
            result[2] += 16519104;
            result[3] += 3303820;
            result[4] += 3303820;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4661204;
            result[1] += 12651841;
            result[2] += 0;
            result[3] += 2996488;
            result[4] += 22307194;
            result[5] += 332943;
          } else {
            result[0] += 35977807;
            result[1] += 223696;
            result[2] += 0;
            result[3] += 1155763;
            result[4] += 2535223;
            result[5] += 3057181;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1782816;
            result[1] += 2917336;
            result[2] += 10048602;
            result[3] += 12641790;
            result[4] += 2431113;
            result[5] += 13128013;
          } else {
            result[0] += 26164743;
            result[1] += 493674;
            result[2] += 9873488;
            result[3] += 987348;
            result[4] += 5430418;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4521018;
            result[4] += 753503;
            result[5] += 37675151;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 33907636;
            result[4] += 2260509;
            result[5] += 4521018;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40997415;
            result[4] += 0;
            result[5] += 1952257;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 1282079;
            result[1] += 0;
            result[2] += 10256638;
            result[3] += 22436396;
            result[4] += 2564159;
            result[5] += 6410398;
          } else {
            result[0] += 1997659;
            result[1] += 998829;
            result[2] += 31962547;
            result[3] += 2996488;
            result[4] += 1997659;
            result[5] += 2996488;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b40000))) ) ) {
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7469508;
            result[3] += 0;
            result[4] += 9336885;
            result[5] += 26143279;
          } else {
            result[0] += 4156419;
            result[1] += 0;
            result[2] += 12469259;
            result[3] += 22167573;
            result[4] += 0;
            result[5] += 4156419;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ae0000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30451090;
            result[3] += 9317124;
            result[4] += 0;
            result[5] += 3181457;
          } else {
            result[0] += 749744;
            result[1] += 0;
            result[2] += 40057799;
            result[3] += 2035021;
            result[4] += 0;
            result[5] += 107106;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
            result[0] += 178956;
            result[1] += 1073741;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40623232;
            result[5] += 1073741;
          } else {
            result[0] += 2684354;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 2684354;
            result[4] += 21474836;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 34359738;
          } else {
            result[0] += 38782913;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4166759;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 289028;
            result[2] += 0;
            result[3] += 1734172;
            result[4] += 867086;
            result[5] += 40059385;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 1400532;
            result[1] += 466844;
            result[2] += 0;
            result[3] += 1867377;
            result[4] += 21474836;
            result[5] += 17740082;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13974056;
            result[4] += 1438505;
            result[5] += 27537110;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 27331610;
            result[2] += 0;
            result[3] += 9761289;
            result[4] += 1952257;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 188789;
            result[1] += 42572093;
            result[2] += 0;
            result[3] += 0;
            result[4] += 188789;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 32487573;
            result[1] += 825955;
            result[2] += 1927228;
            result[3] += 1101273;
            result[4] += 5781686;
            result[5] += 825955;
          } else {
            result[0] += 686410;
            result[1] += 2255348;
            result[2] += 5197106;
            result[3] += 20003957;
            result[4] += 2157289;
            result[5] += 12649561;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 8589934;
            result[1] += 15748213;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 715827;
          } else {
            result[0] += 37515224;
            result[1] += 350609;
            result[2] += 1402438;
            result[3] += 701219;
            result[4] += 2410440;
            result[5] += 569740;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1789569;
            result[3] += 894784;
            result[4] += 894784;
            result[5] += 39370533;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3834792;
            result[3] += 23008753;
            result[4] += 0;
            result[5] += 16106127;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e80000))) ) ) {
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
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 14316557;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e80000))) ) ) {
            result[0] += 2684354;
            result[1] += 1789569;
            result[2] += 12526987;
            result[3] += 17000912;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1053261;
            result[1] += 0;
            result[2] += 32768142;
            result[3] += 7840948;
            result[4] += 117029;
            result[5] += 1170290;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41742822;
            result[3] += 1206850;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
            result[0] += 753503;
            result[1] += 188375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41819418;
            result[5] += 188375;
          } else {
            result[0] += 20452225;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 0;
            result[4] += 8180890;
            result[5] += 10226112;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1263225;
            result[3] += 0;
            result[4] += 6316128;
            result[5] += 35370318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 41607495;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1342177;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 32212254;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 2147483;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36507222;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10105805;
            result[5] += 32843867;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50292;
            result[3] += 1810524;
            result[4] += 1357893;
            result[5] += 39730962;
          } else {
            result[0] += 0;
            result[1] += 523776;
            result[2] += 0;
            result[3] += 10475529;
            result[4] += 8904200;
            result[5] += 23046165;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 913822;
            result[2] += 0;
            result[3] += 5482936;
            result[4] += 1827645;
            result[5] += 34725267;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 29183752;
            result[4] += 367091;
            result[5] += 13398829;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22497447;
            result[3] += 0;
            result[4] += 0;
            result[5] += 20452225;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42320000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1101273;
            result[1] += 6057005;
            result[2] += 0;
            result[3] += 1101273;
            result[4] += 33588846;
            result[5] += 1101273;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 42261691;
            result[2] += 0;
            result[3] += 196566;
            result[4] += 491415;
            result[5] += 0;
          } else {
            result[0] += 3734754;
            result[1] += 16806393;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22408525;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 16789417;
            result[1] += 4294967;
            result[2] += 0;
            result[3] += 2342709;
            result[4] += 19132127;
            result[5] += 390451;
          } else {
            result[0] += 38079486;
            result[1] += 1418873;
            result[2] += 115043;
            result[3] += 882002;
            result[4] += 2147483;
            result[5] += 306783;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1533916;
            result[1] += 766958;
            result[2] += 5624361;
            result[3] += 17128738;
            result[4] += 255652;
            result[5] += 17640044;
          } else {
            result[0] += 20427283;
            result[1] += 2095105;
            result[2] += 8904200;
            result[3] += 2095105;
            result[4] += 8904200;
            result[5] += 523776;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 479884;
            result[1] += 479884;
            result[2] += 8397980;
            result[3] += 23994230;
            result[4] += 2159480;
            result[5] += 7438211;
          } else {
            result[0] += 1867377;
            result[1] += 9336885;
            result[2] += 28010656;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3734754;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37180313;
            result[3] += 5128319;
            result[4] += 0;
            result[5] += 641039;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1789569;
            result[1] += 894784;
            result[2] += 7158278;
            result[3] += 11632203;
            result[4] += 3579139;
            result[5] += 17895697;
          } else {
            result[0] += 7423400;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 1590728;
            result[4] += 0;
            result[5] += 530242;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 28633115;
          } else {
            result[0] += 114379;
            result[1] += 0;
            result[2] += 39861414;
            result[3] += 2916688;
            result[4] += 0;
            result[5] += 57189;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42880000))) ) ) {
            result[0] += 376751;
            result[1] += 753503;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39935660;
            result[5] += 1883757;
          } else {
            result[0] += 0;
            result[1] += 15618062;
            result[2] += 0;
            result[3] += 15618062;
            result[4] += 0;
            result[5] += 11713547;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 41082295;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1867377;
          } else {
            result[0] += 3520464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1408185;
            result[4] += 17602324;
            result[5] += 20418696;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            result[0] += 3834792;
            result[1] += 383479;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17640044;
            result[5] += 21091357;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2933148;
            result[4] += 1466574;
            result[5] += 38549950;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 1342177;
            result[2] += 335544;
            result[3] += 8724152;
            result[4] += 3019898;
            result[5] += 29527900;
          } else {
            result[0] += 0;
            result[1] += 254140;
            result[2] += 0;
            result[3] += 27192988;
            result[4] += 0;
            result[5] += 15502544;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42848376;
            result[2] += 0;
            result[3] += 0;
            result[4] += 101296;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39370533;
            result[5] += 3579139;
          } else {
            result[0] += 6316128;
            result[1] += 29054190;
            result[2] += 1894838;
            result[3] += 2526451;
            result[4] += 3158064;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 3467986;
            result[1] += 14939016;
            result[2] += 0;
            result[3] += 533536;
            result[4] += 23208829;
            result[5] += 800304;
          } else {
            result[0] += 36640882;
            result[1] += 392071;
            result[2] += 320785;
            result[3] += 1247500;
            result[4] += 2780144;
            result[5] += 1568286;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1168698;
            result[1] += 584349;
            result[2] += 10810461;
            result[3] += 15193081;
            result[4] += 3798270;
            result[5] += 11394811;
          } else {
            result[0] += 34896609;
            result[1] += 0;
            result[2] += 1789569;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 894784;
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cc0000))) ) ) {
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 25769803;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
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
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 30422685;
            result[4] += 0;
            result[5] += 1789569;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35370318;
            result[3] += 7579354;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 237291;
            result[1] += 0;
            result[2] += 35593651;
            result[3] += 3796656;
            result[4] += 0;
            result[5] += 3322074;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 307222;
            result[1] += 0;
            result[2] += 40737672;
            result[3] += 1904778;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 13665805;
            result[1] += 0;
            result[2] += 29283867;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1041204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41127565;
            result[5] += 780903;
          } else {
            result[0] += 3067833;
            result[1] += 766958;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19173961;
            result[5] += 19940919;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 35280088;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4601750;
            result[5] += 3067833;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5651272;
            result[4] += 25995854;
            result[5] += 11302545;
          } else {
            result[0] += 51746;
            result[1] += 155239;
            result[2] += 0;
            result[3] += 2587329;
            result[4] += 1966370;
            result[5] += 38188986;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37896770;
            result[5] += 5052902;
          } else {
            result[0] += 0;
            result[1] += 176023;
            result[2] += 0;
            result[3] += 22530975;
            result[4] += 528069;
            result[5] += 19714603;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
            result[0] += 2809791;
            result[1] += 15253154;
            result[2] += 0;
            result[3] += 1204196;
            result[4] += 23080431;
            result[5] += 602098;
          } else {
            result[0] += 37134363;
            result[1] += 114025;
            result[2] += 380085;
            result[3] += 1444325;
            result[4] += 2888650;
            result[5] += 988222;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 295186;
            result[1] += 147593;
            result[2] += 11512283;
            result[3] += 18596765;
            result[4] += 2361494;
            result[5] += 10036349;
          } else {
            result[0] += 26938848;
            result[1] += 2541400;
            result[2] += 8640762;
            result[3] += 1778980;
            result[4] += 2795540;
            result[5] += 254140;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
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
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 26076587;
            result[4] += 0;
            result[5] += 13805252;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8989466;
            result[3] += 29964888;
            result[4] += 0;
            result[5] += 3995318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23622320;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 6442450;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29283867;
            result[3] += 5206020;
            result[4] += 0;
            result[5] += 8459784;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 620660;
            result[1] += 124132;
            result[2] += 38108524;
            result[3] += 3723960;
            result[4] += 0;
            result[5] += 372396;
          } else {
            result[0] += 77666;
            result[1] += 0;
            result[2] += 42095339;
            result[3] += 776666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 773867;
            result[1] += 386933;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40821536;
            result[5] += 967334;
          } else {
            result[0] += 20160050;
            result[1] += 0;
            result[2] += 2191309;
            result[3] += 2629571;
            result[4] += 7012191;
            result[5] += 10956549;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 6362914;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27042386;
            result[5] += 9544371;
          } else {
            result[0] += 0;
            result[1] += 118974;
            result[2] += 178461;
            result[3] += 1844099;
            result[4] += 1606151;
            result[5] += 39201986;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 577798;
            result[1] += 1155596;
            result[2] += 385198;
            result[3] += 11941164;
            result[4] += 2311193;
            result[5] += 26578721;
          } else {
            result[0] += 0;
            result[1] += 600694;
            result[2] += 1201389;
            result[3] += 34840294;
            result[4] += 0;
            result[5] += 6307294;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42920000))) ) ) {
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 5602131;
            result[1] += 14939016;
            result[2] += 1867377;
            result[3] += 16806393;
            result[4] += 3734754;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 31859381;
            result[1] += 0;
            result[2] += 0;
            result[3] += 806566;
            result[4] += 9880441;
            result[5] += 403283;
          } else {
            result[0] += 1872165;
            result[1] += 330382;
            result[2] += 2863311;
            result[3] += 15307703;
            result[4] += 6277259;
            result[5] += 16298850;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 36083966;
            result[1] += 1989494;
            result[2] += 507126;
            result[3] += 351087;
            result[4] += 3861959;
            result[5] += 156038;
          } else {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 27141807;
            result[3] += 5965232;
            result[4] += 4175662;
            result[5] += 2684354;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1022611;
            result[3] += 5113056;
            result[4] += 0;
            result[5] += 36814005;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26247022;
            result[4] += 0;
            result[5] += 16702650;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426c0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 21474836;
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 753503;
            result[1] += 0;
            result[2] += 18084072;
            result[3] += 12056048;
            result[4] += 3014012;
            result[5] += 9042036;
          } else {
            result[0] += 37223049;
            result[1] += 0;
            result[2] += 5726623;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5804009;
            result[3] += 27859247;
            result[4] += 0;
            result[5] += 9286415;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35616801;
            result[3] += 3142658;
            result[4] += 0;
            result[5] += 4190211;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32641751;
            result[3] += 9735259;
            result[4] += 0;
            result[5] += 572662;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39699427;
            result[3] += 3250245;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 76151;
            result[1] += 0;
            result[2] += 42035850;
            result[3] += 837670;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 16106127;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x43058000))) ) ) {
            result[0] += 0;
            result[1] += 162074;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42139301;
            result[5] += 648296;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 6781527;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15823563;
            result[5] += 20344581;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 39881839;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1840700;
            result[5] += 1227133;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36342030;
            result[5] += 6607641;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 226647;
            result[2] += 113323;
            result[3] += 963251;
            result[4] += 1756516;
            result[5] += 39889933;
          } else {
            result[0] += 724888;
            result[1] += 724888;
            result[2] += 1812222;
            result[3] += 11779446;
            result[4] += 1631000;
            result[5] += 26277226;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42764943;
            result[2] += 0;
            result[3] += 0;
            result[4] += 184729;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 10047859;
            result[1] += 591050;
            result[2] += 1970168;
            result[3] += 8471724;
            result[4] += 12412061;
            result[5] += 9456808;
          } else {
            result[0] += 36194004;
            result[1] += 1351133;
            result[2] += 81886;
            result[3] += 941699;
            result[4] += 3725853;
            result[5] += 655095;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 1235961;
            result[1] += 154495;
            result[2] += 5252837;
            result[3] += 20238874;
            result[4] += 1699447;
            result[5] += 14368056;
          } else {
            result[0] += 22945715;
            result[1] += 2941758;
            result[2] += 8236923;
            result[3] += 4118461;
            result[4] += 3235934;
            result[5] += 1470879;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25053975;
            result[4] += 1789569;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40178726;
            result[4] += 0;
            result[5] += 2770946;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7405116;
            result[3] += 8886139;
            result[4] += 987348;
            result[5] += 25671068;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 33405301;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13215283;
            result[4] += 0;
            result[5] += 29734388;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5153960;
            result[3] += 30923764;
            result[4] += 3435973;
            result[5] += 3435973;
          } else {
            result[0] += 2753184;
            result[1] += 550636;
            result[2] += 28633115;
            result[3] += 8534870;
            result[4] += 1927228;
            result[5] += 550636;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 771551;
            result[1] += 0;
            result[2] += 33433877;
            result[3] += 7972693;
            result[4] += 0;
            result[5] += 771551;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40380034;
            result[3] += 2569638;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35140641;
            result[3] += 7809031;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 73543;
            result[1] += 0;
            result[2] += 42287777;
            result[3] += 514807;
            result[4] += 0;
            result[5] += 73543;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 34359738;
          } else {
            result[0] += 1431655;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38654705;
            result[5] += 2863311;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35140641;
            result[5] += 7809031;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1355065;
            result[4] += 1296149;
            result[5] += 40298458;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 42221712;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 727960;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 645166;
            result[2] += 460833;
            result[3] += 16037002;
            result[4] += 4147500;
            result[5] += 21659169;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 766958;
            result[1] += 1533916;
            result[2] += 0;
            result[3] += 2300875;
            result[4] += 35280088;
            result[5] += 3067833;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 2863311;
            result[4] += 11453246;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 99190;
            result[1] += 42850482;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4772185;
            result[1] += 25053975;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13123511;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5016020;
            result[1] += 18183073;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19437078;
            result[5] += 313501;
          } else {
            result[0] += 38578204;
            result[1] += 109286;
            result[2] += 291431;
            result[3] += 1457155;
            result[4] += 1821444;
            result[5] += 692149;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1614649;
            result[1] += 322929;
            result[2] += 1937579;
            result[3] += 13563054;
            result[4] += 3552228;
            result[5] += 21959231;
          } else {
            result[0] += 28991029;
            result[1] += 1073741;
            result[2] += 3221225;
            result[3] += 2147483;
            result[4] += 6442450;
            result[5] += 1073741;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
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
            result[3] += 41788870;
            result[4] += 0;
            result[5] += 1160801;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3734754;
            result[3] += 28010656;
            result[4] += 0;
            result[5] += 11204262;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4955731;
            result[4] += 0;
            result[5] += 37993941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7158278;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4955731;
            result[3] += 34690120;
            result[4] += 0;
            result[5] += 3303820;
          } else {
            result[0] += 0;
            result[1] += 332943;
            result[2] += 23971910;
            result[3] += 15315387;
            result[4] += 0;
            result[5] += 3329432;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 278893;
            result[1] += 0;
            result[2] += 27610504;
            result[3] += 10876865;
            result[4] += 1115575;
            result[5] += 3067833;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39687672;
            result[3] += 3262000;
            result[4] += 0;
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
            result[0] += 182764;
            result[1] += 0;
            result[2] += 41243870;
            result[3] += 1279351;
            result[4] += 60921;
            result[5] += 182764;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 36814005;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 1346001;
            result[1] += 489454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39401124;
            result[5] += 1713092;
          } else {
            result[0] += 1814774;
            result[1] += 39925048;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1209849;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 1827645;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21931747;
            result[5] += 19190279;
          } else {
            result[0] += 39677316;
            result[1] += 511305;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2761050;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 34001824;
            result[5] += 5368709;
          } else {
            result[0] += 51498;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2832412;
            result[4] += 1647949;
            result[5] += 38417812;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 896118;
            result[1] += 1216160;
            result[2] += 2560338;
            result[3] += 18370426;
            result[4] += 4352574;
            result[5] += 15554054;
          } else {
            result[0] += 17705783;
            result[1] += 3681400;
            result[2] += 4032010;
            result[3] += 2454267;
            result[4] += 8589934;
            result[5] += 6486277;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
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
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 12271335;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 18407002;
          } else {
            result[0] += 42390068;
            result[1] += 0;
            result[2] += 139901;
            result[3] += 69950;
            result[4] += 279802;
            result[5] += 69950;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5010795;
            result[1] += 0;
            result[2] += 33643910;
            result[3] += 1431655;
            result[4] += 0;
            result[5] += 2863311;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11713547;
            result[4] += 0;
            result[5] += 31236125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24632900;
            result[3] += 17053546;
            result[4] += 0;
            result[5] += 1263225;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34976979;
            result[3] += 6943959;
            result[4] += 0;
            result[5] += 1028734;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 6135667;
            result[1] += 0;
            result[2] += 32723560;
            result[3] += 4090445;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 38654705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1376592;
            result[1] += 0;
            result[2] += 35240757;
            result[3] += 6332323;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42381340;
            result[3] += 568332;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 192599;
            result[1] += 192599;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41408877;
            result[5] += 1155596;
          } else {
            result[0] += 6263493;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20580051;
            result[5] += 16106127;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 462653;
            result[4] += 385544;
            result[5] += 42101474;
          } else {
            result[0] += 282563;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6781527;
            result[4] += 1977945;
            result[5] += 33907636;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 27879612;
            result[1] += 0;
            result[2] += 753503;
            result[3] += 0;
            result[4] += 11302545;
            result[5] += 3014012;
          } else {
            result[0] += 0;
            result[1] += 763065;
            result[2] += 436037;
            result[3] += 14825267;
            result[4] += 2616223;
            result[5] += 24309078;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 386933;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40628069;
            result[5] += 1934669;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 42856304;
            result[2] += 0;
            result[3] += 0;
            result[4] += 93368;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 8589934;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
            result[0] += 12750684;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14092861;
            result[4] += 8053063;
            result[5] += 8053063;
          } else {
            result[0] += 39226600;
            result[1] += 729261;
            result[2] += 76764;
            result[3] += 729261;
            result[4] += 1957491;
            result[5] += 230293;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 1168698;
            result[1] += 2921746;
            result[2] += 5989580;
            result[3] += 12271335;
            result[4] += 3944357;
            result[5] += 16653954;
          } else {
            result[0] += 37371793;
            result[1] += 557787;
            result[2] += 557787;
            result[3] += 0;
            result[4] += 4462303;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 998829;
            result[3] += 39953184;
            result[4] += 0;
            result[5] += 1997659;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6871947;
            result[3] += 6871947;
            result[4] += 0;
            result[5] += 29205777;
          } else {
            result[0] += 13215283;
            result[1] += 0;
            result[2] += 0;
            result[3] += 19822925;
            result[4] += 9911462;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25625435;
            result[3] += 16602394;
            result[4] += 0;
            result[5] += 721843;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13215283;
            result[3] += 14867194;
            result[4] += 0;
            result[5] += 14867194;
          } else {
            result[0] += 575732;
            result[1] += 0;
            result[2] += 35349998;
            result[3] += 5872475;
            result[4] += 345439;
            result[5] += 806026;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42b00000))) ) ) {
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 153666;
            result[1] += 0;
            result[2] += 41874010;
            result[3] += 921996;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 9544371;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42513635;
            result[5] += 436037;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37347541;
            result[5] += 5602131;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 25109039;
            result[1] += 6607641;
            result[2] += 0;
            result[3] += 3303820;
            result[4] += 4625349;
            result[5] += 3303820;
          } else {
            result[0] += 380928;
            result[1] += 142848;
            result[2] += 0;
            result[3] += 1857025;
            result[4] += 2095105;
            result[5] += 38473764;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9042036;
            result[4] += 0;
            result[5] += 33907636;
          } else {
            result[0] += 822003;
            result[1] += 0;
            result[2] += 0;
            result[3] += 30414122;
            result[4] += 205500;
            result[5] += 11508046;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42344747;
            result[2] += 0;
            result[3] += 0;
            result[4] += 604924;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 13537425;
            result[1] += 6330450;
            result[2] += 292174;
            result[3] += 973915;
            result[4] += 19283526;
            result[5] += 2532180;
          } else {
            result[0] += 37442165;
            result[1] += 44415;
            result[2] += 266492;
            result[3] += 1421292;
            result[4] += 2354015;
            result[5] += 1421292;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1043311;
            result[1] += 1217197;
            result[2] += 3303820;
            result[3] += 15997449;
            result[4] += 2956050;
            result[5] += 18431843;
          } else {
            result[0] += 13707342;
            result[1] += 0;
            result[2] += 23302482;
            result[3] += 4112202;
            result[4] += 456911;
            result[5] += 1370734;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
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
            result[4] += 39881839;
            result[5] += 3067833;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4210752;
            result[3] += 2526451;
            result[4] += 842150;
            result[5] += 35370318;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 3904515;
            result[2] += 7809031;
            result[3] += 3904515;
            result[4] += 0;
            result[5] += 27331610;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9463487;
            result[3] += 24750658;
            result[4] += 0;
            result[5] += 8735526;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8053063;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34996029;
            result[3] += 7953643;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426a0000))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 41358944;
            result[1] += 0;
            result[2] += 1590728;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428c0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 16106127;
            result[3] += 5368709;
            result[4] += 16106127;
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
            result[0] += 1827645;
            result[1] += 0;
            result[2] += 33506837;
            result[3] += 6701367;
            result[4] += 0;
            result[5] += 913822;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41122027;
            result[3] += 1766724;
            result[4] += 0;
            result[5] += 60921;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41283521;
            result[5] += 1666151;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7405116;
            result[5] += 35544556;
          } else {
            result[0] += 4294967;
            result[1] += 17179869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 34824059;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8125613;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 313501;
            result[2] += 156750;
            result[3] += 2194508;
            result[4] += 2351259;
            result[5] += 37933652;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 7809031;
            result[1] += 2045222;
            result[2] += 0;
            result[3] += 4648233;
            result[4] += 9854253;
            result[5] += 18592932;
          } else {
            result[0] += 810371;
            result[1] += 405185;
            result[2] += 3916794;
            result[3] += 24311135;
            result[4] += 2160989;
            result[5] += 11345196;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 24988900;
            result[2] += 0;
            result[3] += 1561806;
            result[4] += 16398966;
            result[5] += 0;
          } else {
            result[0] += 94394;
            result[1] += 42855278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 4706813;
            result[1] += 8825275;
            result[2] += 0;
            result[3] += 1765055;
            result[4] += 25887474;
            result[5] += 1765055;
          } else {
            result[0] += 37391044;
            result[1] += 629977;
            result[2] += 963495;
            result[3] += 778208;
            result[4] += 2556969;
            result[5] += 629977;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 1699447;
            result[1] += 308990;
            result[2] += 9578704;
            result[3] += 13441084;
            result[4] += 3862380;
            result[5] += 14059065;
          } else {
            result[0] += 29571905;
            result[1] += 704092;
            result[2] += 4224557;
            result[3] += 1408185;
            result[4] += 6336836;
            result[5] += 704092;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
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
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 32212254;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8842579;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 12632256;
          } else {
            result[0] += 0;
            result[1] += 5052902;
            result[2] += 27159352;
            result[3] += 6316128;
            result[4] += 0;
            result[5] += 4421289;
          }
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35493132;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 298261;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42073149;
            result[3] += 876523;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 313501;
            result[1] += 0;
            result[2] += 41821068;
            result[3] += 815103;
            result[4] += 0;
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
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41794076;
            result[5] += 1155596;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 565127;
            result[1] += 2260509;
            result[2] += 0;
            result[3] += 2825636;
            result[4] += 26560981;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x427c0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2526451;
            result[5] += 40423221;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 42168769;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 780903;
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
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38654705;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 7158278;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 45788;
            result[2] += 91577;
            result[3] += 2747313;
            result[4] += 2289428;
            result[5] += 37775565;
          } else {
            result[0] += 7158278;
            result[1] += 5726623;
            result[2] += 1431655;
            result[3] += 4294967;
            result[4] += 20043180;
            result[5] += 4294967;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9988296;
            result[4] += 0;
            result[5] += 32961376;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
            result[0] += 175304;
            result[1] += 0;
            result[2] += 2103657;
            result[3] += 32431385;
            result[4] += 0;
            result[5] += 8239325;
          } else {
            result[0] += 313501;
            result[1] += 1254005;
            result[2] += 7210529;
            result[3] += 15048060;
            result[4] += 313501;
            result[5] += 18810075;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a30000))) ) ) {
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 2684354;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 0;
            result[4] += 27331610;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42520000))) ) ) {
            result[0] += 1651910;
            result[1] += 41297762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1022611;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34768782;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 40080565;
            result[1] += 217356;
            result[2] += 304299;
            result[3] += 478184;
            result[4] += 1695381;
            result[5] += 173885;
          } else {
            result[0] += 8125613;
            result[1] += 0;
            result[2] += 13542689;
            result[3] += 10060283;
            result[4] += 3482405;
            result[5] += 7738679;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
            result[0] += 32502455;
            result[1] += 5804009;
            result[2] += 3482405;
            result[3] += 0;
            result[4] += 1160801;
            result[5] += 0;
          } else {
            result[0] += 4652881;
            result[1] += 1789569;
            result[2] += 17537783;
            result[3] += 9305762;
            result[4] += 715827;
            result[5] += 8947848;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31220444;
            result[3] += 10349318;
            result[4] += 0;
            result[5] += 1379909;
          } else {
            result[0] += 543666;
            result[1] += 0;
            result[2] += 40472968;
            result[3] += 1872629;
            result[4] += 0;
            result[5] += 60407;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42140000))) ) ) {
            result[0] += 0;
            result[1] += 25769803;
            result[2] += 0;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 318145;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40563580;
            result[5] += 2067947;
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
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 4294967;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40904450;
            result[5] += 2045222;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 39759125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3190547;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42740000))) ) ) {
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
            result[3] += 5602131;
            result[4] += 20541147;
            result[5] += 16806393;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1566986;
            result[4] += 498586;
            result[5] += 40884099;
          } else {
            result[0] += 660764;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7268406;
            result[4] += 3469012;
            result[5] += 31551490;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 2342709;
            result[2] += 0;
            result[3] += 2342709;
            result[4] += 3123612;
            result[5] += 35140641;
          } else {
            result[0] += 580400;
            result[1] += 0;
            result[2] += 290200;
            result[3] += 23216039;
            result[4] += 1160801;
            result[5] += 17702230;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 1753047;
            result[2] += 0;
            result[3] += 1753047;
            result[4] += 34184433;
            result[5] += 5259143;
          } else {
            result[0] += 5541893;
            result[1] += 0;
            result[2] += 0;
            result[3] += 24938519;
            result[4] += 0;
            result[5] += 12469259;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a10000))) ) ) {
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
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 36268612;
            result[1] += 1908874;
            result[2] += 0;
            result[3] += 954437;
            result[4] += 954437;
            result[5] += 2863311;
          } else {
            result[0] += 554189;
            result[1] += 831283;
            result[2] += 1385473;
            result[3] += 21613383;
            result[4] += 1385473;
            result[5] += 17179869;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 39172478;
            result[1] += 763926;
            result[2] += 169761;
            result[3] += 636605;
            result[4] += 2164459;
            result[5] += 42440;
          } else {
            result[0] += 17412029;
            result[1] += 1857283;
            result[2] += 7893453;
            result[3] += 7196972;
            result[4] += 4875368;
            result[5] += 3714566;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 2547861;
            result[2] += 3639802;
            result[3] += 28754442;
            result[4] += 1091940;
            result[5] += 6915625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 9817068;
            result[4] += 0;
            result[5] += 7362801;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 2454267;
            result[1] += 2454267;
            result[2] += 2454267;
            result[3] += 1227133;
            result[4] += 12271335;
            result[5] += 22088403;
          } else {
            result[0] += 2095105;
            result[1] += 0;
            result[2] += 22522389;
            result[3] += 10999306;
            result[4] += 1047552;
            result[5] += 6285317;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 397682;
            result[1] += 0;
            result[2] += 34598347;
            result[3] += 6164073;
            result[4] += 0;
            result[5] += 1789569;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 947419;
            result[1] += 0;
            result[2] += 37896770;
            result[3] += 3473870;
            result[4] += 0;
            result[5] += 631612;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42486187;
            result[3] += 463485;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 157324;
            result[1] += 786624;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41219100;
            result[5] += 786624;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 39415839;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3533833;
            result[5] += 0;
          } else {
            result[0] += 7060220;
            result[1] += 0;
            result[2] += 1765055;
            result[3] += 4118461;
            result[4] += 13532088;
            result[5] += 16473847;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 4643207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24957242;
            result[5] += 13349222;
          } else {
            result[0] += 96084;
            result[1] += 48042;
            result[2] += 624547;
            result[3] += 2978612;
            result[4] += 2498191;
            result[5] += 36704194;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11475103;
            result[4] += 2950740;
            result[5] += 28523828;
          } else {
            result[0] += 2023806;
            result[1] += 337301;
            result[2] += 4722215;
            result[3] += 25522449;
            result[4] += 1349204;
            result[5] += 8994695;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 42852060;
            result[2] += 0;
            result[3] += 0;
            result[4] += 97612;
            result[5] += 0;
          } else {
            result[0] += 18407002;
            result[1] += 24542670;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 33612787;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9336885;
          } else {
            result[0] += 6039797;
            result[1] += 4362076;
            result[2] += 2348810;
            result[3] += 1342177;
            result[4] += 27850178;
            result[5] += 1006632;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 39148816;
            result[1] += 211158;
            result[2] += 0;
            result[3] += 1013561;
            result[4] += 1562574;
            result[5] += 1013561;
          } else {
            result[0] += 9286415;
            result[1] += 290200;
            result[2] += 18863032;
            result[3] += 5513809;
            result[4] += 2321603;
            result[5] += 6674611;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a60000))) ) ) {
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
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 681740;
            result[3] += 8180890;
            result[4] += 0;
            result[5] += 34087042;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 15032385;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 15032385;
            result[4] += 0;
            result[5] += 4294967;
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16041444;
            result[3] += 19146239;
            result[4] += 1552397;
            result[5] += 6209591;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32519038;
            result[3] += 7976367;
            result[4] += 0;
            result[5] += 2454267;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 946028;
            result[1] += 0;
            result[2] += 37273504;
            result[3] += 4351728;
            result[4] += 0;
            result[5] += 378411;
          } else {
            result[0] += 17179869;
            result[1] += 8589934;
            result[2] += 8589934;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38606447;
            result[3] += 4343225;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 94602;
            result[1] += 0;
            result[2] += 42382056;
            result[3] += 473014;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 638656;
            result[1] += 319328;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39437060;
            result[5] += 2554627;
          } else {
            result[0] += 0;
            result[1] += 37896770;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5052902;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3655291;
            result[1] += 4569114;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17362633;
            result[5] += 17362633;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2684354;
            result[4] += 34896609;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2135070;
            result[4] += 1986112;
            result[5] += 38828490;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 1753047;
            result[1] += 0;
            result[2] += 1314785;
            result[3] += 3067833;
            result[4] += 6573929;
            result[5] += 30240075;
          } else {
            result[0] += 502335;
            result[1] += 502335;
            result[2] += 251167;
            result[3] += 27628444;
            result[4] += 251167;
            result[5] += 13814222;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 42834526;
            result[2] += 0;
            result[3] += 0;
            result[4] += 115146;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 29054190;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5052902;
            result[5] += 8842579;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 1507006;
            result[2] += 1507006;
            result[3] += 2260509;
            result[4] += 30893624;
            result[5] += 6781527;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 2045222;
            result[1] += 24542670;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16361780;
            result[5] += 0;
          } else {
            result[0] += 37299404;
            result[1] += 419952;
            result[2] += 0;
            result[3] += 572662;
            result[4] += 2977843;
            result[5] += 1679809;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 1079137;
            result[2] += 4748205;
            result[3] += 16834545;
            result[4] += 0;
            result[5] += 20287785;
          } else {
            result[0] += 12310415;
            result[1] += 547129;
            result[2] += 17234582;
            result[3] += 6565555;
            result[4] += 4103471;
            result[5] += 2188518;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 842150;
            result[2] += 3368601;
            result[3] += 842150;
            result[4] += 6737203;
            result[5] += 31159566;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38177487;
            result[4] += 0;
            result[5] += 4772185;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6362914;
            result[3] += 33405301;
            result[4] += 0;
            result[5] += 3181457;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 19685266;
            result[4] += 0;
            result[5] += 1789569;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35433480;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 3221225;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 21474836;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1460873;
            result[1] += 0;
            result[2] += 26295718;
            result[3] += 12563509;
            result[4] += 0;
            result[5] += 2629571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39493952;
            result[3] += 2962046;
            result[4] += 0;
            result[5] += 493674;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 481228;
            result[1] += 0;
            result[2] += 40964604;
            result[3] += 1443686;
            result[4] += 0;
            result[5] += 60153;
          } else {
            result[0] += 5506368;
            result[1] += 0;
            result[2] += 34139483;
            result[3] += 3303820;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42140000))) ) ) {
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
            result[4] += 42579417;
            result[5] += 370255;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 37580963;
          } else {
            result[0] += 30949029;
            result[1] += 631612;
            result[2] += 0;
            result[3] += 3158064;
            result[4] += 8210966;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 95976;
            result[2] += 143965;
            result[3] += 2111492;
            result[4] += 1775573;
            result[5] += 38822665;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 858993;
            result[2] += 0;
            result[3] += 6442450;
            result[4] += 5153960;
            result[5] += 30494267;
          } else {
            result[0] += 284434;
            result[1] += 1137739;
            result[2] += 0;
            result[3] += 23608098;
            result[4] += 1137739;
            result[5] += 16781660;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 13805252;
            result[2] += 766958;
            result[3] += 1533916;
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
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 35370318;
            result[2] += 7579354;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42847896;
            result[2] += 0;
            result[3] += 0;
            result[4] += 101776;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 7415770;
            result[1] += 8342742;
            result[2] += 0;
            result[3] += 308990;
            result[4] += 26573178;
            result[5] += 308990;
          } else {
            result[0] += 37953723;
            result[1] += 580924;
            result[2] += 38728;
            result[3] += 1200576;
            result[4] += 2710980;
            result[5] += 464739;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 3502333;
            result[1] += 1106000;
            result[2] += 2580667;
            result[3] += 18433336;
            result[4] += 3318000;
            result[5] += 14009335;
          } else {
            result[0] += 15782711;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 1293664;
            result[4] += 1811130;
            result[5] += 2587329;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4051855;
            result[2] += 810371;
            result[3] += 7293340;
            result[4] += 0;
            result[5] += 30794105;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5651272;
            result[3] += 29386618;
            result[4] += 0;
            result[5] += 7911781;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25264513;
            result[3] += 10105805;
            result[4] += 0;
            result[5] += 7579354;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42dc0000))) ) ) {
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 1651910;
            result[1] += 0;
            result[2] += 37993941;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3303820;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38654705;
            result[4] += 0;
            result[5] += 4294967;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32304027;
            result[3] += 9177280;
            result[4] += 0;
            result[5] += 1468364;
          } else {
            result[0] += 18790481;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 32212254;
          } else {
            result[0] += 2770946;
            result[1] += 0;
            result[2] += 33251359;
            result[3] += 2770946;
            result[4] += 0;
            result[5] += 4156419;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 198841;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 5169868;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41957436;
            result[3] += 992236;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42320000))) ) ) {
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
            result[4] += 42727135;
            result[5] += 222537;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 1385473;
            result[1] += 1385473;
            result[2] += 0;
            result[3] += 461824;
            result[4] += 21243924;
            result[5] += 18472977;
          } else {
            result[0] += 27879612;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7535030;
            result[4] += 6028024;
            result[5] += 1507006;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38654705;
            result[5] += 4294967;
          } else {
            result[0] += 0;
            result[1] += 55778;
            result[2] += 111557;
            result[3] += 2119594;
            result[4] += 1394469;
            result[5] += 39268272;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 292174;
            result[2] += 0;
            result[3] += 8473064;
            result[4] += 4966968;
            result[5] += 29217464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 667611;
            result[3] += 28707294;
            result[4] += 667611;
            result[5] += 12907155;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2564159;
            result[1] += 2564159;
            result[2] += 0;
            result[3] += 641039;
            result[4] += 36539274;
            result[5] += 641039;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 42581795;
            result[2] += 0;
            result[3] += 183938;
            result[4] += 183938;
            result[5] += 0;
          } else {
            result[0] += 7028128;
            result[1] += 20303481;
            result[2] += 1561806;
            result[3] += 0;
            result[4] += 13275353;
            result[5] += 780903;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 36981389;
            result[1] += 475998;
            result[2] += 732304;
            result[3] += 1025226;
            result[4] += 2892603;
            result[5] += 842150;
          } else {
            result[0] += 3181457;
            result[1] += 39768215;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 2487432;
            result[1] += 1658288;
            result[2] += 4145721;
            result[3] += 15256254;
            result[4] += 2984919;
            result[5] += 16417056;
          } else {
            result[0] += 13446860;
            result[1] += 0;
            result[2] += 21274137;
            result[3] += 3010491;
            result[4] += 2408392;
            result[5] += 2809791;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2526451;
            result[1] += 13895482;
            result[2] += 12632256;
            result[3] += 1263225;
            result[4] += 10105805;
            result[5] += 2526451;
          } else {
            result[0] += 825955;
            result[1] += 0;
            result[2] += 5781686;
            result[3] += 4955731;
            result[4] += 825955;
            result[5] += 30560344;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 692736;
            result[1] += 692736;
            result[2] += 4156419;
            result[3] += 33944096;
            result[4] += 692736;
            result[5] += 2770946;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 2863311;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 24159191;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8589934;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38252052;
            result[3] += 3355443;
            result[4] += 0;
            result[5] += 1342177;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c70000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 24159191;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 2684354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38094492;
            result[3] += 4668442;
            result[4] += 0;
            result[5] += 186737;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 228051;
            result[1] += 0;
            result[2] += 41809416;
            result[3] += 912205;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
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
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 650752;
            result[1] += 325376;
            result[2] += 0;
            result[3] += 813440;
            result[4] += 38719780;
            result[5] += 2440322;
          } else {
            result[0] += 22478333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14048958;
            result[5] += 6422381;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 92763;
            result[1] += 278291;
            result[2] += 46381;
            result[3] += 2319096;
            result[4] += 2643770;
            result[5] += 37569368;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 22635638;
            result[4] += 0;
            result[5] += 20314034;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 3136773;
            result[1] += 12064514;
            result[2] += 0;
            result[3] += 482580;
            result[4] += 26541932;
            result[5] += 723870;
          } else {
            result[0] += 35675938;
            result[1] += 935194;
            result[2] += 484915;
            result[3] += 1558657;
            result[4] += 3013404;
            result[5] += 1281562;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 480779;
            result[1] += 1923119;
            result[2] += 13461837;
            result[3] += 15064437;
            result[4] += 1762859;
            result[5] += 10256638;
          } else {
            result[0] += 33907636;
            result[1] += 0;
            result[2] += 3014012;
            result[3] += 0;
            result[4] += 6028024;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3655291;
            result[3] += 36552913;
            result[4] += 0;
            result[5] += 2741468;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5153960;
            result[3] += 17179869;
            result[4] += 0;
            result[5] += 20615843;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 9203501;
            result[4] += 0;
            result[5] += 3067833;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a00000))) ) ) {
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 19522578;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15618062;
            result[4] += 0;
            result[5] += 7809031;
          } else {
            result[0] += 1263225;
            result[1] += 0;
            result[2] += 41686447;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 8589934;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 148102;
            result[1] += 0;
            result[2] += 37321784;
            result[3] += 5183581;
            result[4] += 0;
            result[5] += 296204;
          } else {
            result[0] += 19822925;
            result[1] += 0;
            result[2] += 23126746;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 3904515;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42572259;
            result[3] += 377413;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 238609;
            result[1] += 238609;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42233845;
            result[5] += 238609;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30678337;
            result[5] += 12271335;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 3067833;
            result[2] += 0;
            result[3] += 1533916;
            result[4] += 12271335;
            result[5] += 26076587;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 19522578;
            result[4] += 23427094;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 7158278;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 47774;
            result[1] += 95549;
            result[2] += 47774;
            result[3] += 1910997;
            result[4] += 3439795;
            result[5] += 37407779;
          } else {
            result[0] += 275318;
            result[1] += 275318;
            result[2] += 550636;
            result[3] += 20924199;
            result[4] += 1376592;
            result[5] += 19547607;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 6607641;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36342030;
            result[5] += 0;
          } else {
            result[0] += 186332;
            result[1] += 42763340;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 38177487;
            result[2] += 0;
            result[3] += 4772185;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3067833;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39881839;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 3707885;
            result[1] += 17303465;
            result[2] += 0;
            result[3] += 617980;
            result[4] += 21011350;
            result[5] += 308990;
          } else {
            result[0] += 37156294;
            result[1] += 286092;
            result[2] += 858278;
            result[3] += 1323178;
            result[4] += 1966887;
            result[5] += 1358940;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 725501;
            result[1] += 2176503;
            result[2] += 10157017;
            result[3] += 17266929;
            result[4] += 3047105;
            result[5] += 9576616;
          } else {
            result[0] += 27727004;
            result[1] += 0;
            result[2] += 6524000;
            result[3] += 0;
            result[4] += 7611334;
            result[5] += 1087333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 25769803;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1481023;
            result[3] += 20734324;
            result[4] += 0;
            result[5] += 20734324;
          } else {
            result[0] += 10737418;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39370533;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14559211;
            result[3] += 21838816;
            result[4] += 0;
            result[5] += 6551645;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31962547;
            result[3] += 9988296;
            result[4] += 0;
            result[5] += 998829;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40563580;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32641751;
            result[3] += 10307921;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 107913;
            result[1] += 0;
            result[2] += 40791397;
            result[3] += 1834533;
            result[4] += 0;
            result[5] += 215827;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 203552;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41117696;
            result[5] += 1628423;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42580000))) ) ) {
            result[0] += 38923141;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 1342177;
          } else {
            result[0] += 3463683;
            result[1] += 0;
            result[2] += 692736;
            result[3] += 692736;
            result[4] += 23553046;
            result[5] += 14547469;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2526451;
            result[3] += 0;
            result[4] += 40423221;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2171917;
            result[4] += 2389109;
            result[5] += 38388645;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 13743895;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 18897856;
            result[5] += 6012954;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3198379;
            result[3] += 20104102;
            result[4] += 456911;
            result[5] += 19190279;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 6099361;
            result[1] += 5336941;
            result[2] += 762420;
            result[3] += 1778980;
            result[4] += 25922287;
            result[5] += 3049680;
          } else {
            result[0] += 36933094;
            result[1] += 217466;
            result[2] += 0;
            result[3] += 1304800;
            result[4] += 2500867;
            result[5] += 1993444;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 276203;
            result[1] += 2485833;
            result[2] += 8286110;
            result[3] += 17538933;
            result[4] += 2762036;
            result[5] += 11600554;
          } else {
            result[0] += 20359260;
            result[1] += 0;
            result[2] += 19243684;
            result[3] += 0;
            result[4] += 3067833;
            result[5] += 278893;
          }
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4090445;
            result[5] += 38859227;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2801065;
            result[3] += 14939016;
            result[4] += 0;
            result[5] += 25209590;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 39045157;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8589934;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 5856773;
            result[4] += 0;
            result[5] += 15618062;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2684354;
            result[1] += 1342177;
            result[2] += 38923141;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 753503;
            result[1] += 0;
            result[2] += 21098084;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 6781527;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 30064771;
            result[1] += 0;
            result[2] += 12884901;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29527900;
            result[3] += 9842633;
            result[4] += 0;
            result[5] += 3579139;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40563580;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 185127;
            result[1] += 0;
            result[2] += 38321475;
            result[3] += 4257941;
            result[4] += 0;
            result[5] += 185127;
          } else {
            result[0] += 175304;
            result[1] += 0;
            result[2] += 42160801;
            result[3] += 613566;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 6135667;
            result[2] += 0;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 12271335;
          } else {
            result[0] += 0;
            result[1] += 40802189;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2147483;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
            result[0] += 216917;
            result[1] += 433835;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41648167;
            result[5] += 650752;
          } else {
            result[0] += 0;
            result[1] += 1651910;
            result[2] += 0;
            result[3] += 9911462;
            result[4] += 21474836;
            result[5] += 9911462;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1651910;
            result[3] += 0;
            result[4] += 37993941;
            result[5] += 3303820;
          } else {
            result[0] += 39247114;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3702558;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 148958;
            result[2] += 0;
            result[3] += 1886806;
            result[4] += 1936459;
            result[5] += 38977448;
          } else {
            result[0] += 283496;
            result[1] += 0;
            result[2] += 2551465;
            result[3] += 20411725;
            result[4] += 425244;
            result[5] += 19277740;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 194783;
            result[1] += 42754889;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 1576134;
            result[1] += 7486640;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33098830;
            result[5] += 788067;
          } else {
            result[0] += 0;
            result[1] += 10172290;
            result[2] += 0;
            result[3] += 22605091;
            result[4] += 6781527;
            result[5] += 3390763;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 11254192;
            result[1] += 4593547;
            result[2] += 689032;
            result[3] += 2756128;
            result[4] += 21359997;
            result[5] += 2296773;
          } else {
            result[0] += 38534286;
            result[1] += 80279;
            result[2] += 160559;
            result[3] += 1525315;
            result[4] += 1605595;
            result[5] += 1043636;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 239942;
            result[1] += 0;
            result[2] += 6718384;
            result[3] += 17515788;
            result[4] += 1199711;
            result[5] += 17275846;
          } else {
            result[0] += 16501716;
            result[1] += 1582356;
            result[2] += 17405920;
            result[3] += 1130254;
            result[4] += 2938661;
            result[5] += 3390763;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 32212254;
          } else {
            result[0] += 858993;
            result[1] += 0;
            result[2] += 6012954;
            result[3] += 24051816;
            result[4] += 858993;
            result[5] += 11166914;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 25379352;
            result[4] += 976128;
            result[5] += 5856773;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26587892;
            result[3] += 4090445;
            result[4] += 4090445;
            result[5] += 8180890;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 18407002;
            result[4] += 0;
            result[5] += 24542670;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37025580;
            result[3] += 3702558;
            result[4] += 0;
            result[5] += 2221534;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34824059;
            result[3] += 8125613;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13215283;
            result[3] += 26430567;
            result[4] += 0;
            result[5] += 3303820;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a00000))) ) ) {
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 155614;
            result[1] += 0;
            result[2] += 40719194;
            result[3] += 1919248;
            result[4] += 0;
            result[5] += 155614;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b20000))) ) ) {
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d50000))) ) ) {
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
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38944003;
            result[5] += 4005668;
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
            result[0] += 660764;
            result[1] += 711592;
            result[2] += 0;
            result[3] += 1778980;
            result[4] += 2948024;
            result[5] += 36850311;
          } else {
            result[0] += 356428;
            result[1] += 0;
            result[2] += 2673216;
            result[3] += 22276801;
            result[4] += 2316787;
            result[5] += 15326439;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 19861120;
            result[1] += 993056;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21598968;
            result[5] += 496528;
          } else {
            result[0] += 1260137;
            result[1] += 945102;
            result[2] += 945102;
            result[3] += 13756496;
            result[4] += 6720731;
            result[5] += 19322102;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
            result[0] += 35192748;
            result[1] += 1375612;
            result[2] += 191057;
            result[3] += 687806;
            result[4] += 4814643;
            result[5] += 687806;
          } else {
            result[0] += 7077848;
            result[1] += 2412902;
            result[2] += 7721289;
            result[3] += 9651611;
            result[4] += 4343225;
            result[5] += 11742794;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3976821;
            result[3] += 31019208;
            result[4] += 0;
            result[5] += 7953643;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9544371;
            result[5] += 33405301;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24338148;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 4294967;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18407002;
            result[3] += 18407002;
            result[4] += 0;
            result[5] += 6135667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x43008000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36279458;
            result[3] += 6344838;
            result[4] += 0;
            result[5] += 325376;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 39645851;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 0;
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
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36302699;
            result[3] += 6646973;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 74825;
            result[1] += 0;
            result[2] += 42276246;
            result[3] += 598601;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 156180;
            result[1] += 937083;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40138421;
            result[5] += 1717986;
          } else {
            result[0] += 25177394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5183581;
            result[5] += 12588697;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 203794;
            result[3] += 2955019;
            result[4] += 2139841;
            result[5] += 37651018;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 820694;
            result[1] += 0;
            result[2] += 4103471;
            result[3] += 9574767;
            result[4] += 4377036;
            result[5] += 24073702;
          } else {
            result[0] += 760171;
            result[1] += 0;
            result[2] += 380085;
            result[3] += 31547104;
            result[4] += 760171;
            result[5] += 9502140;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
            result[0] += 7456540;
            result[1] += 10140895;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 3877401;
          } else {
            result[0] += 36267818;
            result[1] += 1286346;
            result[2] += 107195;
            result[3] += 1465005;
            result[4] += 2358301;
            result[5] += 1465005;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 785664;
            result[1] += 0;
            result[2] += 3666435;
            result[3] += 22522389;
            result[4] += 523776;
            result[5] += 15451406;
          } else {
            result[0] += 12308747;
            result[1] += 4190211;
            result[2] += 15451406;
            result[3] += 6285317;
            result[4] += 3928323;
            result[5] += 785664;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e80000))) ) ) {
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 7158278;
            result[3] += 7158278;
            result[4] += 14316557;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 1101273;
            result[2] += 550636;
            result[3] += 5506368;
            result[4] += 3303820;
            result[5] += 32487573;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1431655;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 5726623;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31236125;
            result[3] += 11713547;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 0;
            result[4] += 0;
            result[5] += 39045157;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32367869;
            result[3] += 9336885;
            result[4] += 0;
            result[5] += 1244918;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 37993941;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 0;
            result[4] += 1651910;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            result[0] += 16873085;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 4601750;
          } else {
            result[0] += 1402438;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 5960362;
            result[4] += 0;
            result[5] += 1227133;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 67637;
            result[1] += 0;
            result[2] += 42070388;
            result[3] += 811647;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 583027;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41783618;
            result[5] += 583027;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20452225;
            result[5] += 22497447;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 39645851;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3303820;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 16898231;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15137999;
            result[5] += 10913441;
          } else {
            result[0] += 0;
            result[1] += 249707;
            result[2] += 0;
            result[3] += 1947717;
            result[4] += 1947717;
            result[5] += 38804530;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 913822;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7310582;
            result[4] += 0;
            result[5] += 34725267;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28558159;
            result[4] += 674602;
            result[5] += 13716911;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 2045222;
            result[1] += 4090445;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35280088;
            result[5] += 1533916;
          } else {
            result[0] += 0;
            result[1] += 41415756;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1533916;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 42853373;
            result[2] += 0;
            result[3] += 0;
            result[4] += 96299;
            result[5] += 0;
          } else {
            result[0] += 3734754;
            result[1] += 24275902;
            result[2] += 1867377;
            result[3] += 1867377;
            result[4] += 11204262;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 7310582;
            result[1] += 13707342;
            result[2] += 456911;
            result[3] += 1827645;
            result[4] += 17819545;
            result[5] += 1827645;
          } else {
            result[0] += 38152304;
            result[1] += 415520;
            result[2] += 226647;
            result[3] += 868814;
            result[4] += 2153149;
            result[5] += 1133236;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 357913;
            result[1] += 4831838;
            result[2] += 6979321;
            result[3] += 17895697;
            result[4] += 3042268;
            result[5] += 9842633;
          } else {
            result[0] += 29699241;
            result[1] += 1370734;
            result[2] += 3655291;
            result[3] += 913822;
            result[4] += 6853671;
            result[5] += 456911;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 31700949;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13071639;
            result[3] += 5602131;
            result[4] += 0;
            result[5] += 24275902;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36342030;
            result[3] += 3303820;
            result[4] += 3303820;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 20043180;
          } else {
            result[0] += 1047552;
            result[1] += 0;
            result[2] += 36664354;
            result[3] += 2095105;
            result[4] += 0;
            result[5] += 3142658;
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 620660;
            result[1] += 0;
            result[2] += 33515640;
            result[3] += 6951392;
            result[4] += 0;
            result[5] += 1861980;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 38654705;
            result[1] += 0;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30541989;
            result[3] += 11453246;
            result[4] += 0;
            result[5] += 954437;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42188753;
            result[3] += 676372;
            result[4] += 0;
            result[5] += 84546;
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 188375;
            result[2] += 0;
            result[3] += 188375;
            result[4] += 42384545;
            result[5] += 188375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 2684354;
          } else {
            result[0] += 5602131;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13071639;
            result[5] += 24275902;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 4156419;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20782099;
            result[5] += 18011153;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1179010;
            result[4] += 1347440;
            result[5] += 40423221;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 25995854;
            result[1] += 1695381;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14693309;
            result[5] += 565127;
          } else {
            result[0] += 0;
            result[1] += 342683;
            result[2] += 228455;
            result[3] += 16448810;
            result[4] += 1941873;
            result[5] += 23987849;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 16667037;
            result[1] += 641039;
            result[2] += 0;
            result[3] += 5448839;
            result[4] += 16346517;
            result[5] += 3846239;
          } else {
            result[0] += 37371248;
            result[1] += 880803;
            result[2] += 0;
            result[3] += 629145;
            result[4] += 3313500;
            result[5] += 754974;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 806566;
            result[1] += 2419699;
            result[2] += 6049249;
            result[3] += 18147749;
            result[4] += 3427908;
            result[5] += 12098499;
          } else {
            result[0] += 24589507;
            result[1] += 655720;
            result[2] += 14097984;
            result[3] += 655720;
            result[4] += 2950740;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 37223049;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 0;
            result[5] += 39370533;
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3390763;
            result[3] += 29386618;
            result[4] += 376751;
            result[5] += 9795539;
          } else {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 4294967;
            result[2] += 0;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 12884901;
          } else {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 33405301;
            result[3] += 3181457;
            result[4] += 0;
            result[5] += 3976821;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b90000))) ) ) {
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
            result[3] += 9448928;
            result[4] += 0;
            result[5] += 1288490;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35140641;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7809031;
          } else {
            result[0] += 39045157;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 154866;
            result[1] += 0;
            result[2] += 40884784;
            result[3] += 1910021;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42366645;
            result[5] += 583027;
          } else {
            result[0] += 4090445;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1022611;
            result[4] += 30678337;
            result[5] += 7158278;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 128784;
            result[2] += 0;
            result[3] += 1609807;
            result[4] += 1931769;
            result[5] += 39279311;
          } else {
            result[0] += 6135667;
            result[1] += 4090445;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 4090445;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 40997415;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1952257;
            result[5] += 0;
          } else {
            result[0] += 1168698;
            result[1] += 1168698;
            result[2] += 876523;
            result[3] += 13342642;
            result[4] += 4187836;
            result[5] += 22205273;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39768215;
            result[5] += 795364;
          } else {
            result[0] += 0;
            result[1] += 8125613;
            result[2] += 0;
            result[3] += 12768821;
            result[4] += 12768821;
            result[5] += 9286415;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 766958;
            result[1] += 28377462;
            result[2] += 766958;
            result[3] += 0;
            result[4] += 13038293;
            result[5] += 0;
          } else {
            result[0] += 280716;
            result[1] += 42575383;
            result[2] += 0;
            result[3] += 93572;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 5259143;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8326977;
            result[4] += 7450453;
            result[5] += 21913098;
          } else {
            result[0] += 37256261;
            result[1] += 996347;
            result[2] += 0;
            result[3] += 925179;
            result[4] += 2917873;
            result[5] += 854011;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 3234703;
            result[1] += 1797057;
            result[2] += 4672349;
            result[3] += 17251751;
            result[4] += 3773820;
            result[5] += 12219990;
          } else {
            result[0] += 15060274;
            result[1] += 0;
            result[2] += 24821564;
            result[3] += 1952257;
            result[4] += 0;
            result[5] += 1115575;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
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
            result[3] += 1431655;
            result[4] += 2863311;
            result[5] += 38654705;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
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
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 2770946;
            result[1] += 2770946;
            result[2] += 4156419;
            result[3] += 29094939;
            result[4] += 1385473;
            result[5] += 2770946;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 36814005;
            result[4] += 0;
            result[5] += 3067833;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 3579139;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 27610504;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 491790;
            result[1] += 983580;
            result[2] += 33605660;
            result[3] += 5409691;
            result[4] += 0;
            result[5] += 2458950;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 304607;
            result[1] += 0;
            result[2] += 38075951;
            result[3] += 4569114;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 168100;
            result[1] += 0;
            result[2] += 42277271;
            result[3] += 504301;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42285502;
            result[5] += 664170;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 3067833;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22088403;
            result[5] += 17793435;
          } else {
            result[0] += 36477804;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4706813;
            result[5] += 1765055;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30064771;
            result[5] += 12884901;
          } else {
            result[0] += 0;
            result[1] += 213414;
            result[2] += 0;
            result[3] += 2187498;
            result[4] += 1440548;
            result[5] += 39108211;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 1631000;
            result[2] += 0;
            result[3] += 6524000;
            result[4] += 4349333;
            result[5] += 30445337;
          } else {
            result[0] += 314649;
            result[1] += 471974;
            result[2] += 314649;
            result[3] += 23756046;
            result[4] += 1101273;
            result[5] += 16991079;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3303820;
            result[2] += 660764;
            result[3] += 2643056;
            result[4] += 34359738;
            result[5] += 1982292;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42748973;
            result[2] += 0;
            result[3] += 0;
            result[4] += 200699;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 3655291;
            result[1] += 21017925;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16448810;
            result[5] += 1827645;
          } else {
            result[0] += 37571290;
            result[1] += 696481;
            result[2] += 116080;
            result[3] += 425627;
            result[4] += 3637179;
            result[5] += 503014;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 314649;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 19665601;
            result[4] += 786624;
            result[5] += 15575156;
          } else {
            result[0] += 16594191;
            result[1] += 1464193;
            result[2] += 18546449;
            result[3] += 2440322;
            result[4] += 2440322;
            result[5] += 1464193;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
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
            result[3] += 3067833;
            result[4] += 1533916;
            result[5] += 38347922;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a20000))) ) ) {
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
            result[3] += 40802189;
            result[4] += 0;
            result[5] += 2147483;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17471053;
            result[3] += 24022698;
            result[4] += 727960;
            result[5] += 727960;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 11453246;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42990000))) ) ) {
            result[0] += 6607641;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 0;
            result[4] += 19822925;
            result[5] += 9911462;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41415756;
            result[3] += 1533916;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 30678337;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29030797;
            result[3] += 12725829;
            result[4] += 0;
            result[5] += 1193046;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40728138;
            result[3] += 2221534;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40594730;
            result[3] += 2130662;
            result[4] += 0;
            result[5] += 224280;
          } else {
            result[0] += 156750;
            result[1] += 0;
            result[2] += 42792922;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 370255;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41838905;
            result[5] += 740511;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 596523;
            result[4] += 21474836;
            result[5] += 20878313;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42600000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33405301;
            result[5] += 9544371;
          } else {
            result[0] += 65572;
            result[1] += 0;
            result[2] += 196716;
            result[3] += 1508156;
            result[4] += 327860;
            result[5] += 40851368;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 41756626;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1193046;
            result[5] += 0;
          } else {
            result[0] += 963957;
            result[1] += 0;
            result[2] += 963957;
            result[3] += 16387281;
            result[4] += 5034001;
            result[5] += 19600474;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428e0000))) ) ) {
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
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 42671981;
            result[2] += 0;
            result[3] += 0;
            result[4] += 277691;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 8731526;
            result[1] += 5427705;
            result[2] += 235987;
            result[3] += 2359872;
            result[4] += 24306683;
            result[5] += 1887897;
          } else {
            result[0] += 37384255;
            result[1] += 844408;
            result[2] += 498968;
            result[3] += 1420141;
            result[4] += 1919109;
            result[5] += 882790;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1481023;
            result[1] += 0;
            result[2] += 1269448;
            result[3] += 13540783;
            result[4] += 2327322;
            result[5] += 24331095;
          } else {
            result[0] += 16262497;
            result[1] += 3752884;
            result[2] += 13552081;
            result[3] += 1042467;
            result[4] += 5837819;
            result[5] += 2501922;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1301505;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16919568;
            result[4] += 3904515;
            result[5] += 20824083;
          } else {
            result[0] += 1342177;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 1342177;
            result[4] += 0;
            result[5] += 37580963;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4521018;
            result[3] += 9042036;
            result[4] += 0;
            result[5] += 29386618;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10060283;
            result[3] += 30180851;
            result[4] += 0;
            result[5] += 2708537;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 4772185;
            result[2] += 0;
            result[3] += 19088743;
            result[4] += 0;
            result[5] += 19088743;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37223049;
            result[3] += 1431655;
            result[4] += 0;
            result[5] += 4294967;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42de0000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 577798;
            result[1] += 0;
            result[2] += 31971505;
            result[3] += 9052173;
            result[4] += 0;
            result[5] += 1348196;
          } else {
            result[0] += 271833;
            result[1] += 0;
            result[2] += 40503172;
            result[3] += 1087333;
            result[4] += 0;
            result[5] += 1087333;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 9911462;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42437147;
            result[3] += 512525;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 11453246;
            result[1] += 0;
            result[2] += 31496426;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 232160;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42485352;
            result[5] += 232160;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x424c0000))) ) ) {
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
            result[4] += 29878033;
            result[5] += 13071639;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 18611524;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 186737;
            result[3] += 1307163;
            result[4] += 435721;
            result[5] += 41020049;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 41160103;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1789569;
            result[5] += 0;
          } else {
            result[0] += 179330;
            result[1] += 1882971;
            result[2] += 358661;
            result[3] += 15422429;
            result[4] += 3317615;
            result[5] += 21788664;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39370533;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42653468;
            result[2] += 0;
            result[3] += 0;
            result[4] += 296204;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
            result[0] += 2684354;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1288490;
            result[1] += 4724464;
            result[2] += 0;
            result[3] += 3865470;
            result[4] += 32212254;
            result[5] += 858993;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 13155755;
            result[1] += 8125613;
            result[2] += 773867;
            result[3] += 0;
            result[4] += 20894435;
            result[5] += 0;
          } else {
            result[0] += 39449788;
            result[1] += 114126;
            result[2] += 38042;
            result[3] += 722802;
            result[4] += 1787984;
            result[5] += 836928;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 2379797;
            result[1] += 1133236;
            result[2] += 6799420;
            result[3] += 12692251;
            result[4] += 4079652;
            result[5] += 15865314;
          } else {
            result[0] += 32843867;
            result[1] += 0;
            result[2] += 1894838;
            result[3] += 0;
            result[4] += 8210966;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5259143;
            result[3] += 35060957;
            result[4] += 0;
            result[5] += 2629571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 4772185;
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3067833;
            result[3] += 3067833;
            result[4] += 0;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 9544371;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38306465;
            result[3] += 3482405;
            result[4] += 0;
            result[5] += 1160801;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28829232;
            result[3] += 12355385;
            result[4] += 0;
            result[5] += 1765055;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39429207;
            result[3] += 2816371;
            result[4] += 0;
            result[5] += 704092;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x43028000))) ) ) {
            result[0] += 166042;
            result[1] += 0;
            result[2] += 40735772;
            result[3] += 1771120;
            result[4] += 0;
            result[5] += 276737;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42eb0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 28633115;
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f00000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41518017;
            result[5] += 1431655;
          } else {
            result[0] += 0;
            result[1] += 28633115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2260509;
            result[4] += 27126109;
            result[5] += 13563054;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 854112;
            result[4] += 671088;
            result[5] += 41424471;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 5875851;
            result[1] += 699506;
            result[2] += 279802;
            result[3] += 6575357;
            result[4] += 4476838;
            result[5] += 25042317;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 27252330;
            result[4] += 218018;
            result[5] += 15479323;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 3534952;
            result[1] += 11665343;
            result[2] += 883738;
            result[3] += 1237233;
            result[4] += 24214424;
            result[5] += 1413981;
          } else {
            result[0] += 35245372;
            result[1] += 432016;
            result[2] += 792030;
            result[3] += 2016078;
            result[4] += 3204124;
            result[5] += 1260049;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 530242;
            result[1] += 795364;
            result[2] += 13256071;
            result[3] += 15244482;
            result[4] += 1325607;
            result[5] += 11797903;
          } else {
            result[0] += 34896609;
            result[1] += 0;
            result[2] += 3221225;
            result[3] += 0;
            result[4] += 4831838;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42380000))) ) ) {
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
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1590728;
            result[4] += 2386092;
            result[5] += 38972851;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 21474836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2863311;
            result[3] += 32450864;
            result[4] += 0;
            result[5] += 7635497;
          } else {
            result[0] += 0;
            result[1] += 16519104;
            result[2] += 16519104;
            result[3] += 3303820;
            result[4] += 0;
            result[5] += 6607641;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
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
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 25769803;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 10447217;
            result[1] += 0;
            result[2] += 22055237;
            result[3] += 4643207;
            result[4] += 2321603;
            result[5] += 3482405;
          } else {
            result[0] += 540556;
            result[1] += 0;
            result[2] += 40148607;
            result[3] += 2063943;
            result[4] += 0;
            result[5] += 196566;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42718760;
            result[5] += 230912;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 7158278;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424c0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1789569;
            result[3] += 0;
            result[4] += 28633115;
            result[5] += 12526987;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
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
            result[3] += 603037;
            result[4] += 268016;
            result[5] += 42078618;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 2892233;
            result[1] += 4049127;
            result[2] += 578446;
            result[3] += 3904515;
            result[4] += 6073691;
            result[5] += 25451658;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3904515;
            result[3] += 22939029;
            result[4] += 732096;
            result[5] += 15374030;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 1481023;
            result[2] += 0;
            result[3] += 11848185;
            result[4] += 29620464;
            result[5] += 0;
          } else {
            result[0] += 7362801;
            result[1] += 26996937;
            result[2] += 2454267;
            result[3] += 2454267;
            result[4] += 3681400;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 42852721;
            result[2] += 0;
            result[3] += 0;
            result[4] += 96951;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
            result[0] += 8039840;
            result[1] += 1692597;
            result[2] += 0;
            result[3] += 4231494;
            result[4] += 17772278;
            result[5] += 11213461;
          } else {
            result[0] += 34702217;
            result[1] += 1677448;
            result[2] += 34946;
            result[3] += 838724;
            result[4] += 4578036;
            result[5] += 1118299;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 125217;
            result[1] += 626088;
            result[2] += 7763497;
            result[3] += 19158308;
            result[4] += 2253918;
            result[5] += 13022641;
          } else {
            result[0] += 28071681;
            result[1] += 0;
            result[2] += 10947955;
            result[3] += 1122867;
            result[4] += 2526451;
            result[5] += 280716;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3734754;
            result[3] += 28010656;
            result[4] += 0;
            result[5] += 11204262;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 10737418;
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38087445;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4862227;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2147483;
            result[3] += 40802189;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a60000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 901042;
            result[1] += 0;
            result[2] += 30935778;
            result[3] += 10211810;
            result[4] += 0;
            result[5] += 901042;
          } else {
            result[0] += 550636;
            result[1] += 0;
            result[2] += 39921170;
            result[3] += 2477865;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39144005;
            result[3] += 3805667;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 95021;
            result[1] += 0;
            result[2] += 42569587;
            result[3] += 285064;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
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
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42086362;
            result[5] += 863310;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40086361;
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 3579139;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3181457;
            result[5] += 39768215;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30064771;
            result[5] += 12884901;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 117509;
            result[3] += 646301;
            result[4] += 352528;
            result[5] += 41833333;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 2095105;
            result[2] += 0;
            result[3] += 4190211;
            result[4] += 23046165;
            result[5] += 13618188;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9687896;
            result[4] += 1614649;
            result[5] += 31647127;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 2147483;
            result[2] += 0;
            result[3] += 14316557;
            result[4] += 2147483;
            result[5] += 24338148;
          } else {
            result[0] += 0;
            result[1] += 452101;
            result[2] += 904203;
            result[3] += 32551331;
            result[4] += 0;
            result[5] += 9042036;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 6362914;
            result[1] += 22270200;
            result[2] += 0;
            result[3] += 1590728;
            result[4] += 11135100;
            result[5] += 1590728;
          } else {
            result[0] += 105268;
            result[1] += 42844404;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 1717986;
            result[1] += 41231686;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3525719;
            result[1] += 8012998;
            result[2] += 2564159;
            result[3] += 2243639;
            result[4] += 23397956;
            result[5] += 3205199;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 38055231;
            result[1] += 227648;
            result[2] += 75882;
            result[3] += 1176183;
            result[4] += 3035312;
            result[5] += 379414;
          } else {
            result[0] += 14747779;
            result[1] += 905565;
            result[2] += 7115156;
            result[3] += 8538187;
            result[4] += 2846062;
            result[5] += 8796920;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 1193046;
            result[2] += 0;
            result[3] += 2386092;
            result[4] += 17895697;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 322929;
            result[2] += 9364966;
            result[3] += 22928020;
            result[4] += 322929;
            result[5] += 10010826;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 2576980;
            result[2] += 16320875;
            result[3] += 15461882;
            result[4] += 0;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41722539;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1227133;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 354955;
            result[1] += 0;
            result[2] += 31946037;
            result[3] += 8163987;
            result[4] += 709911;
            result[5] += 1774779;
          } else {
            result[0] += 30064771;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 0;
            result[4] += 4294967;
            result[5] += 4294967;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 588351;
            result[1] += 0;
            result[2] += 34712749;
            result[3] += 6766044;
            result[4] += 0;
            result[5] += 882527;
          } else {
            result[0] += 335544;
            result[1] += 0;
            result[2] += 41137733;
            result[3] += 1342177;
            result[4] += 0;
            result[5] += 134217;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41297762;
            result[5] += 1651910;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3976821;
            result[3] += 3976821;
            result[4] += 15907286;
            result[5] += 19088743;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 323335;
            result[1] += 161667;
            result[2] += 0;
            result[3] += 1185561;
            result[4] += 1940010;
            result[5] += 39339098;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 419021;
            result[3] += 15922805;
            result[4] += 628531;
            result[5] += 25979314;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 993056;
            result[1] += 11171880;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30784736;
            result[5] += 0;
          } else {
            result[0] += 33857057;
            result[1] += 443542;
            result[2] += 147847;
            result[3] += 961008;
            result[4] += 5987820;
            result[5] += 1552397;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 7754802;
            result[1] += 16702650;
            result[2] += 1789569;
            result[3] += 596523;
            result[4] += 13123511;
            result[5] += 2982616;
          } else {
            result[0] += 734182;
            result[1] += 734182;
            result[2] += 1376592;
            result[3] += 20098244;
            result[4] += 2753184;
            result[5] += 17253287;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d20000))) ) ) {
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
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 41686447;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1263225;
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 37223049;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5726623;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 42789412;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 160259;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15158708;
            result[4] += 0;
            result[5] += 27790964;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2863311;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 5726623;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 5153960;
            result[1] += 0;
            result[2] += 29205777;
            result[3] += 0;
            result[4] += 1717986;
            result[5] += 6871947;
          } else {
            result[0] += 33188383;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5856773;
            result[5] += 3904515;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7433597;
            result[3] += 33864165;
            result[4] += 0;
            result[5] += 1651910;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7579354;
            result[3] += 17685159;
            result[4] += 0;
            result[5] += 17685159;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35194870;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 1789569;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a70000))) ) ) {
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 416987;
            result[1] += 0;
            result[2] += 28772111;
            result[3] += 8339742;
            result[4] += 833974;
            result[5] += 4586858;
          } else {
            result[0] += 1181234;
            result[1] += 0;
            result[2] += 39689466;
            result[3] += 2031722;
            result[4] += 0;
            result[5] += 47249;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 373475;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41455771;
            result[5] += 1120426;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13215283;
            result[5] += 29734388;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1346183;
            result[4] += 1217975;
            result[5] += 40385513;
          } else {
            result[0] += 4067203;
            result[1] += 0;
            result[2] += 325376;
            result[3] += 5856773;
            result[4] += 5856773;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 25141271;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17808400;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 436776;
            result[3] += 19800527;
            result[4] += 2329473;
            result[5] += 20382895;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 39881839;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3067833;
            result[5] += 0;
          } else {
            result[0] += 671088;
            result[1] += 1342177;
            result[2] += 0;
            result[3] += 671088;
            result[4] += 39594229;
            result[5] += 671088;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 274146;
            result[1] += 41761703;
            result[2] += 0;
            result[3] += 0;
            result[4] += 913822;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 23126746;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19822925;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 36955772;
            result[1] += 793894;
            result[2] += 79389;
            result[3] += 754199;
            result[4] += 3532828;
            result[5] += 833588;
          } else {
            result[0] += 9042036;
            result[1] += 7911781;
            result[2] += 4521018;
            result[3] += 9607163;
            result[4] += 1695381;
            result[5] += 10172290;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 911053;
            result[1] += 2342709;
            result[2] += 12364299;
            result[3] += 15097460;
            result[4] += 1301505;
            result[5] += 10932644;
          } else {
            result[0] += 31440283;
            result[1] += 0;
            result[2] += 7298637;
            result[3] += 1403584;
            result[4] += 1122867;
            result[5] += 1684300;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 39045157;
            result[2] += 3904515;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5052902;
            result[1] += 2526451;
            result[2] += 2526451;
            result[3] += 0;
            result[4] += 32843867;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
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
            result[3] += 5541893;
            result[4] += 2770946;
            result[5] += 34636833;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4521018;
            result[3] += 37298400;
            result[4] += 0;
            result[5] += 1130254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13563054;
            result[3] += 9042036;
            result[4] += 0;
            result[5] += 20344581;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 1082764;
            result[1] += 0;
            result[2] += 29595572;
            result[3] += 9023040;
            result[4] += 360921;
            result[5] += 2887372;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 1053979;
            result[1] += 0;
            result[2] += 35835309;
            result[3] += 6060383;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 207486;
            result[1] += 0;
            result[2] += 39629891;
            result[3] += 3112295;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 190042;
            result[1] += 0;
            result[2] += 42284523;
            result[3] += 475107;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 182764;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42035850;
            result[5] += 731058;
          } else {
            result[0] += 3846239;
            result[1] += 1282079;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26282635;
            result[5] += 11538718;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 8589934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34359738;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 39645851;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3303820;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 6902626;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 23008753;
            result[5] += 7669584;
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
            result[0] += 41436028;
            result[1] += 378411;
            result[2] += 0;
            result[3] += 0;
            result[4] += 756822;
            result[5] += 378411;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 3368601;
            result[2] += 0;
            result[3] += 842150;
            result[4] += 32001717;
            result[5] += 6737203;
          } else {
            result[0] += 97171;
            result[1] += 97171;
            result[2] += 0;
            result[3] += 3255235;
            result[4] += 1846252;
            result[5] += 37653842;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 1321528;
            result[1] += 6607641;
            result[2] += 2643056;
            result[3] += 2643056;
            result[4] += 27752096;
            result[5] += 1982292;
          } else {
            result[0] += 8053063;
            result[1] += 1073741;
            result[2] += 0;
            result[3] += 9126805;
            result[4] += 10200547;
            result[5] += 14495514;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2962046;
            result[4] += 0;
            result[5] += 39987626;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 984519;
            result[1] += 369194;
            result[2] += 1107584;
            result[3] += 29535591;
            result[4] += 0;
            result[5] += 10952781;
          } else {
            result[0] += 1997659;
            result[1] += 0;
            result[2] += 10987125;
            result[3] += 9488881;
            result[4] += 1997659;
            result[5] += 18478347;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
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
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42980000))) ) ) {
            result[0] += 13147859;
            result[1] += 6135667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23666146;
            result[5] += 0;
          } else {
            result[0] += 40707520;
            result[1] += 996512;
            result[2] += 0;
            result[3] += 348779;
            result[4] += 896860;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 1771120;
            result[1] += 0;
            result[2] += 5756141;
            result[3] += 13283404;
            result[4] += 11955063;
            result[5] += 10183943;
          } else {
            result[0] += 30516872;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1130254;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 704092;
            result[1] += 4224557;
            result[2] += 9153208;
            result[3] += 21122789;
            result[4] += 0;
            result[5] += 7745022;
          } else {
            result[0] += 5010795;
            result[1] += 0;
            result[2] += 33643910;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 715827;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42eb0000))) ) ) {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 41231686;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1717986;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
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
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 255652;
            result[1] += 0;
            result[2] += 36558352;
            result[3] += 5496535;
            result[4] += 127826;
            result[5] += 511305;
          } else {
            result[0] += 418340;
            result[1] += 0;
            result[2] += 41555203;
            result[3] += 976128;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
            result[0] += 28633115;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 862443;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40362343;
            result[5] += 1724886;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 37580963;
          } else {
            result[0] += 30902813;
            result[1] += 5761541;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4713988;
            result[5] += 1571329;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 787511;
            result[4] += 1575023;
            result[5] += 40587138;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12481101;
            result[4] += 3670912;
            result[5] += 26797659;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2770946;
            result[1] += 27709466;
            result[2] += 0;
            result[3] += 2770946;
            result[4] += 2770946;
            result[5] += 6927366;
          } else {
            result[0] += 136348;
            result[1] += 409044;
            result[2] += 2045222;
            result[3] += 20724921;
            result[4] += 545392;
            result[5] += 19088743;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 1789569;
            result[1] += 12526987;
            result[2] += 0;
            result[3] += 1193046;
            result[4] += 25650499;
            result[5] += 1789569;
          } else {
            result[0] += 0;
            result[1] += 2863311;
            result[2] += 40086361;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 14000169;
            result[1] += 3796656;
            result[2] += 0;
            result[3] += 237291;
            result[4] += 24440974;
            result[5] += 474582;
          } else {
            result[0] += 38518357;
            result[1] += 302995;
            result[2] += 75748;
            result[3] += 1287732;
            result[4] += 1931599;
            result[5] += 833238;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 375653;
            result[1] += 1252177;
            result[2] += 11394811;
            result[3] += 14775689;
            result[4] += 1377394;
            result[5] += 13773947;
          } else {
            result[0] += 24763775;
            result[1] += 1547735;
            result[2] += 6577877;
            result[3] += 386933;
            result[4] += 9286415;
            result[5] += 386933;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 1753047;
            result[2] += 2629571;
            result[3] += 5259143;
            result[4] += 0;
            result[5] += 33307909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25769803;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3390763;
            result[3] += 35037891;
            result[4] += 2260509;
            result[5] += 2260509;
          } else {
            result[0] += 0;
            result[1] += 2863311;
            result[2] += 40086361;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 3303820;
            result[4] += 0;
            result[5] += 18171015;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38428654;
            result[3] += 4521018;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 7158278;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 933688;
            result[2] += 17740082;
            result[3] += 20541147;
            result[4] += 0;
            result[5] += 3734754;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37483350;
            result[3] += 3123612;
            result[4] += 0;
            result[5] += 2342709;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1151906;
            result[1] += 0;
            result[2] += 36531905;
            result[3] += 4772185;
            result[4] += 164558;
            result[5] += 329116;
          } else {
            result[0] += 178214;
            result[1] += 0;
            result[2] += 42236815;
            result[3] += 534643;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 596523;
            result[1] += 149130;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41607495;
            result[5] += 596523;
          } else {
            result[0] += 8103711;
            result[1] += 2431113;
            result[2] += 0;
            result[3] += 3241484;
            result[4] += 12155567;
            result[5] += 17017794;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x426a0000))) ) ) {
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
            result[4] += 32212254;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 16702650;
            result[1] += 2386092;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 0;
          } else {
            result[0] += 38768731;
            result[1] += 190042;
            result[2] += 0;
            result[3] += 190042;
            result[4] += 3610813;
            result[5] += 190042;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 6727057;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27943160;
            result[5] += 8279455;
          } else {
            result[0] += 15872705;
            result[1] += 933688;
            result[2] += 0;
            result[3] += 4668442;
            result[4] += 1867377;
            result[5] += 19607459;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 71582;
            result[2] += 0;
            result[3] += 1288490;
            result[4] += 572662;
            result[5] += 41016937;
          } else {
            result[0] += 1745921;
            result[1] += 116394;
            result[2] += 465579;
            result[3] += 7216476;
            result[4] += 5354159;
            result[5] += 28051141;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 4994148;
            result[1] += 9988296;
            result[2] += 6991807;
            result[3] += 10987125;
            result[4] += 9988296;
            result[5] += 0;
          } else {
            result[0] += 1729517;
            result[1] += 288252;
            result[2] += 288252;
            result[3] += 11530113;
            result[4] += 1729517;
            result[5] += 27384019;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 466844;
            result[1] += 0;
            result[2] += 466844;
            result[3] += 36413853;
            result[4] += 0;
            result[5] += 5602131;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18134306;
            result[3] += 13362120;
            result[4] += 0;
            result[5] += 11453246;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b40000))) ) ) {
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42900000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 39214918;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3734754;
            result[5] += 0;
          } else {
            result[0] += 2684354;
            result[1] += 1342177;
            result[2] += 1342177;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 11155759;
            result[1] += 3904515;
            result[2] += 5577879;
            result[3] += 15060274;
            result[4] += 2231151;
            result[5] += 5020091;
          } else {
            result[0] += 38896098;
            result[1] += 637640;
            result[2] += 910915;
            result[3] += 227728;
            result[4] += 1912922;
            result[5] += 364366;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 2260509;
            result[2] += 3390763;
            result[3] += 14693309;
            result[4] += 0;
            result[5] += 22605091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13329208;
            result[3] += 25177394;
            result[4] += 0;
            result[5] += 4443069;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 1150437;
            result[1] += 0;
            result[2] += 28760941;
            result[3] += 4985229;
            result[4] += 383479;
            result[5] += 7669584;
          } else {
            result[0] += 18407002;
            result[1] += 12271335;
            result[2] += 1533916;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17448304;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 9395240;
          } else {
            result[0] += 137659;
            result[1] += 0;
            result[2] += 35240757;
            result[3] += 7433597;
            result[4] += 0;
            result[5] += 137659;
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
            result[0] += 145345;
            result[1] += 0;
            result[2] += 41496215;
            result[3] += 1308111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 218018;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40987505;
            result[5] += 1744149;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7469508;
            result[5] += 35480164;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 34359738;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1064350;
            result[4] += 2880007;
            result[5] += 39005315;
          } else {
            result[0] += 7244523;
            result[1] += 517465;
            result[2] += 129366;
            result[3] += 5821491;
            result[4] += 5174659;
            result[5] += 24062166;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 464320;
            result[1] += 0;
            result[2] += 928641;
            result[3] += 29020049;
            result[4] += 0;
            result[5] += 12536661;
          } else {
            result[0] += 3067833;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 33746171;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 42504136;
            result[2] += 0;
            result[3] += 0;
            result[4] += 445536;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 7158278;
            result[1] += 6911441;
            result[2] += 0;
            result[3] += 246837;
            result[4] += 26411580;
            result[5] += 2221534;
          } else {
            result[0] += 35803364;
            result[1] += 466844;
            result[2] += 610488;
            result[3] += 1400532;
            result[4] += 3267909;
            result[5] += 1400532;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 2726963;
            result[1] += 2045222;
            result[2] += 2726963;
            result[3] += 19088743;
            result[4] += 3863198;
            result[5] += 12498582;
          } else {
            result[0] += 15158708;
            result[1] += 0;
            result[2] += 22738062;
            result[3] += 3248294;
            result[4] += 721843;
            result[5] += 1082764;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2863311;
            result[4] += 40086361;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 2629571;
            result[1] += 0;
            result[2] += 876523;
            result[3] += 7888715;
            result[4] += 1753047;
            result[5] += 29801813;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 14316557;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 2928386;
            result[1] += 13665805;
            result[2] += 7809031;
            result[3] += 2928386;
            result[4] += 5856773;
            result[5] += 9761289;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 25981900;
            result[4] += 0;
            result[5] += 7423400;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19088743;
            result[3] += 23860929;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41231686;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1717986;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6607641;
            result[3] += 33038209;
            result[4] += 0;
            result[5] += 3303820;
          } else {
            result[0] += 1651910;
            result[1] += 0;
            result[2] += 41297762;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31782757;
            result[3] += 9448928;
            result[4] += 0;
            result[5] += 1717986;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38306465;
            result[3] += 4178887;
            result[4] += 0;
            result[5] += 464320;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42258528;
            result[3] += 691144;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5726623;
            result[1] += 0;
            result[2] += 37223049;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 887389;
            result[1] += 177477;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40110025;
            result[5] += 1774779;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 0;
            result[4] += 9042036;
            result[5] += 31647127;
          } else {
            result[0] += 39131924;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3817748;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1227133;
            result[3] += 0;
            result[4] += 31905471;
            result[5] += 9817068;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1050567;
            result[4] += 308990;
            result[5] += 41590114;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 3170781;
            result[2] += 0;
            result[3] += 5765056;
            result[4] += 8935837;
            result[5] += 25077996;
          } else {
            result[0] += 335544;
            result[1] += 671088;
            result[2] += 3019898;
            result[3] += 24662507;
            result[4] += 838860;
            result[5] += 13421772;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 1145324;
            result[1] += 5153960;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36650387;
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 39645851;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3303820;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 15490045;
            result[1] += 8097069;
            result[2] += 1760232;
            result[3] += 1408185;
            result[4] += 9857301;
            result[5] += 6336836;
          } else {
            result[0] += 38324942;
            result[1] += 241290;
            result[2] += 321720;
            result[3] += 1166236;
            result[4] += 2050967;
            result[5] += 844516;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 1043311;
            result[1] += 869426;
            result[2] += 10259233;
            result[3] += 16345219;
            result[4] += 1564967;
            result[5] += 12867513;
          } else {
            result[0] += 36633544;
            result[1] += 0;
            result[2] += 2526451;
            result[3] += 0;
            result[4] += 3789677;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
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
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 650752;
            result[3] += 7809031;
            result[4] += 3253763;
            result[5] += 31236125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29527900;
            result[3] += 0;
            result[4] += 8053063;
            result[5] += 5368709;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 1073741;
            result[2] += 4294967;
            result[3] += 33285996;
            result[4] += 0;
            result[5] += 4294967;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15713294;
            result[3] += 25141271;
            result[4] += 0;
            result[5] += 2095105;
          } else {
            result[0] += 1385473;
            result[1] += 0;
            result[2] += 30480413;
            result[3] += 6927366;
            result[4] += 0;
            result[5] += 4156419;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1717986;
            result[1] += 3435973;
            result[2] += 29205777;
            result[3] += 6871947;
            result[4] += 0;
            result[5] += 1717986;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428e0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20452225;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 10226112;
          } else {
            result[0] += 154310;
            result[1] += 102873;
            result[2] += 40120652;
            result[3] += 2263216;
            result[4] += 0;
            result[5] += 308620;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 178956;
            result[1] += 715827;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41518017;
            result[5] += 536870;
          } else {
            result[0] += 20861269;
            result[1] += 0;
            result[2] += 409044;
            result[3] += 0;
            result[4] += 12680379;
            result[5] += 8998979;
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 938488;
            result[4] += 2042593;
            result[5] += 39968590;
          } else {
            result[0] += 1145324;
            result[1] += 286331;
            result[2] += 0;
            result[3] += 6299285;
            result[4] += 10880583;
            result[5] += 24338148;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1684300;
            result[3] += 9263654;
            result[4] += 421075;
            result[5] += 31580641;
          } else {
            result[0] += 715827;
            result[1] += 715827;
            result[2] += 0;
            result[3] += 31138512;
            result[4] += 0;
            result[5] += 10379504;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 42629948;
            result[2] += 0;
            result[3] += 0;
            result[4] += 319724;
            result[5] += 0;
          } else {
            result[0] += 14316557;
            result[1] += 0;
            result[2] += 0;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 5052902;
            result[2] += 0;
            result[3] += 2526451;
            result[4] += 32843867;
            result[5] += 2526451;
          } else {
            result[0] += 15618062;
            result[1] += 25379352;
            result[2] += 0;
            result[3] += 1952257;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1520342;
            result[1] += 13683081;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27746248;
            result[5] += 0;
          } else {
            result[0] += 34905353;
            result[1] += 909357;
            result[2] += 664530;
            result[3] += 1503938;
            result[4] += 2972900;
            result[5] += 1993592;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 191739;
            result[2] += 7286105;
            result[3] += 15530908;
            result[4] += 2876094;
            result[5] += 17064825;
          } else {
            result[0] += 33569859;
            result[1] += 0;
            result[2] += 1481023;
            result[3] += 493674;
            result[4] += 4936744;
            result[5] += 2468372;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 3681400;
            result[2] += 0;
            result[3] += 13498468;
            result[4] += 9817068;
            result[5] += 15952735;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1827645;
            result[3] += 38380558;
            result[4] += 0;
            result[5] += 2741468;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 740511;
            result[1] += 1481023;
            result[2] += 17031766;
            result[3] += 2962046;
            result[4] += 740511;
            result[5] += 19993813;
          } else {
            result[0] += 5804009;
            result[1] += 1160801;
            result[2] += 8125613;
            result[3] += 23216039;
            result[4] += 1160801;
            result[5] += 3482405;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 1651910;
            result[1] += 0;
            result[2] += 22025473;
            result[3] += 17069741;
            result[4] += 0;
            result[5] += 2202547;
          } else {
            result[0] += 3834792;
            result[1] += 0;
            result[2] += 35280088;
            result[3] += 2300875;
            result[4] += 0;
            result[5] += 1533916;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24159191;
            result[3] += 16777215;
            result[4] += 0;
            result[5] += 2013265;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39237972;
            result[3] += 3711700;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 584349;
            result[1] += 0;
            result[2] += 38859227;
            result[3] += 3506095;
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42320702;
            result[3] += 628970;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 36342030;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6607641;
            result[5] += 0;
          } else {
            result[0] += 565127;
            result[1] += 0;
            result[2] += 188375;
            result[3] += 0;
            result[4] += 41065915;
            result[5] += 1130254;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3142658;
            result[4] += 10475529;
            result[5] += 29331483;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 563644;
            result[2] += 56364;
            result[3] += 1634567;
            result[4] += 1296381;
            result[5] += 39398715;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
            result[0] += 37896770;
            result[1] += 2526451;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2526451;
            result[5] += 0;
          } else {
            result[0] += 395849;
            result[1] += 98962;
            result[2] += 0;
            result[3] += 13656808;
            result[4] += 5047081;
            result[5] += 23750971;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423e0000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 38654705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4294967;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 15292686;
            result[1] += 1626881;
            result[2] += 0;
            result[3] += 1626881;
            result[4] += 20824083;
            result[5] += 3579139;
          } else {
            result[0] += 36569467;
            result[1] += 1672858;
            result[2] += 77807;
            result[3] += 816977;
            result[4] += 3423524;
            result[5] += 389036;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 531884;
            result[1] += 398913;
            result[2] += 8244209;
            result[3] += 16222477;
            result[4] += 531884;
            result[5] += 17020303;
          } else {
            result[0] += 27278846;
            result[1] += 0;
            result[2] += 5804009;
            result[3] += 580400;
            result[4] += 8706014;
            result[5] += 580400;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
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
            result[3] += 2863311;
            result[4] += 3817748;
            result[5] += 36268612;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 753503;
            result[2] += 3767515;
            result[3] += 34661139;
            result[4] += 0;
            result[5] += 3767515;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 1690932;
            result[1] += 1690932;
            result[2] += 23334861;
            result[3] += 9469219;
            result[4] += 676372;
            result[5] += 6087355;
          } else {
            result[0] += 36814005;
            result[1] += 0;
            result[2] += 4090445;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2045222;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28010656;
            result[3] += 13071639;
            result[4] += 0;
            result[5] += 1867377;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41122027;
            result[3] += 1827645;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 260301;
            result[1] += 0;
            result[2] += 38784856;
            result[3] += 3644214;
            result[4] += 0;
            result[5] += 260301;
          } else {
            result[0] += 2863311;
            result[1] += 0;
            result[2] += 27201459;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 82436;
            result[1] += 0;
            result[2] += 42372614;
            result[3] += 494621;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 583027;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41977960;
            result[5] += 388684;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 34359738;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38654705;
            result[5] += 4294967;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 5368709;
          } else {
            result[0] += 60921;
            result[1] += 0;
            result[2] += 0;
            result[3] += 913822;
            result[4] += 791979;
            result[5] += 41182948;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 7974369;
            result[1] += 559604;
            result[2] += 0;
            result[3] += 6715258;
            result[4] += 4756641;
            result[5] += 22943799;
          } else {
            result[0] += 723870;
            result[1] += 241290;
            result[2] += 0;
            result[3] += 27989674;
            result[4] += 241290;
            result[5] += 13753546;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42300000))) ) ) {
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
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 25769803;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17179869;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 42860933;
            result[2] += 0;
            result[3] += 0;
            result[4] += 88738;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 10131717;
            result[1] += 6387387;
            result[2] += 881018;
            result[3] += 1101273;
            result[4] += 22465982;
            result[5] += 1982292;
          } else {
            result[0] += 39066768;
            result[1] += 435836;
            result[2] += 39621;
            result[3] += 752807;
            result[4] += 2337666;
            result[5] += 316971;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 246837;
            result[1] += 987348;
            result[2] += 10613999;
            result[3] += 17402022;
            result[4] += 1234186;
            result[5] += 12465278;
          } else {
            result[0] += 28174985;
            result[1] += 0;
            result[2] += 9964324;
            result[3] += 343597;
            result[4] += 3779571;
            result[5] += 687194;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
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
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1533916;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 19940919;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27331610;
            result[3] += 11713547;
            result[4] += 0;
            result[5] += 3904515;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 5052902;
            result[1] += 12632256;
            result[2] += 15158708;
            result[3] += 7579354;
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
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34896609;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34359738;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25769803;
            result[4] += 0;
            result[5] += 17179869;
          } else {
            result[0] += 973363;
            result[1] += 0;
            result[2] += 36257797;
            result[3] += 4501807;
            result[4] += 0;
            result[5] += 1216704;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 456911;
            result[1] += 0;
            result[2] += 40208204;
            result[3] += 2284557;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42642157;
            result[3] += 307515;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42417238;
            result[5] += 532433;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 954437;
            result[4] += 1145324;
            result[5] += 40849911;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 10737418;
            result[4] += 17895697;
            result[5] += 3579139;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 31236125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2788939;
            result[4] += 7251243;
            result[5] += 1673363;
          } else {
            result[0] += 322929;
            result[1] += 215286;
            result[2] += 1184076;
            result[3] += 16361780;
            result[4] += 4090445;
            result[5] += 20775155;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 26724240;
            result[1] += 2386092;
            result[2] += 954437;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 954437;
          } else {
            result[0] += 507279;
            result[1] += 845466;
            result[2] += 4058236;
            result[3] += 15218388;
            result[4] += 4565516;
            result[5] += 17754786;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 505290;
            result[1] += 23748642;
            result[2] += 0;
            result[3] += 505290;
            result[4] += 18190449;
            result[5] += 0;
          } else {
            result[0] += 35493609;
            result[1] += 412316;
            result[2] += 1546188;
            result[3] += 1958505;
            result[4] += 2680059;
            result[5] += 858993;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8589934;
          } else {
            result[0] += 0;
            result[1] += 5726623;
            result[2] += 0;
            result[3] += 2863311;
            result[4] += 34359738;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 106574;
            result[1] += 42629948;
            result[2] += 0;
            result[3] += 0;
            result[4] += 213149;
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
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a90000))) ) ) {
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 363980;
            result[1] += 0;
            result[2] += 363980;
            result[3] += 7279605;
            result[4] += 0;
            result[5] += 34942106;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 18407002;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 580400;
            result[2] += 5223608;
            result[3] += 35984861;
            result[4] += 0;
            result[5] += 1160801;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9042036;
            result[3] += 4521018;
            result[4] += 0;
            result[5] += 29386618;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36686178;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3579139;
            result[1] += 3579139;
            result[2] += 7158278;
            result[3] += 0;
            result[4] += 28633115;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 13329208;
            result[1] += 2962046;
            result[2] += 19253301;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7405116;
          } else {
            result[0] += 238609;
            result[1] += 0;
            result[2] += 35433480;
            result[3] += 6561755;
            result[4] += 0;
            result[5] += 715827;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 14316557;
            result[4] += 0;
            result[5] += 4772185;
          } else {
            result[0] += 306783;
            result[1] += 0;
            result[2] += 41875931;
            result[3] += 766958;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 195225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41583092;
            result[5] += 1171354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6607641;
            result[5] += 36342030;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 27183337;
            result[1] += 5436667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10329668;
            result[5] += 0;
          } else {
            result[0] += 42148;
            result[1] += 632232;
            result[2] += 0;
            result[3] += 2402484;
            result[4] += 1854549;
            result[5] += 38018258;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 604924;
            result[3] += 35690573;
            result[4] += 0;
            result[5] += 6654174;
          } else {
            result[0] += 3767515;
            result[1] += 753503;
            result[2] += 5274521;
            result[3] += 9042036;
            result[4] += 753503;
            result[5] += 23358594;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 12884901;
            result[1] += 4294967;
            result[2] += 0;
            result[3] += 2684354;
            result[4] += 16106127;
            result[5] += 6979321;
          } else {
            result[0] += 36359313;
            result[1] += 1273137;
            result[2] += 0;
            result[3] += 524233;
            result[4] += 3594741;
            result[5] += 1198247;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 303531;
            result[1] += 1214125;
            result[2] += 8195343;
            result[3] += 19426000;
            result[4] += 2580015;
            result[5] += 11230656;
          } else {
            result[0] += 20782099;
            result[1] += 0;
            result[2] += 12746354;
            result[3] += 1108378;
            result[4] += 6927366;
            result[5] += 1385473;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1717986;
            result[1] += 41231686;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42810000))) ) ) {
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
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1263225;
            result[3] += 35370318;
            result[4] += 0;
            result[5] += 6316128;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42880000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5052902;
            result[4] += 0;
            result[5] += 37896770;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24542670;
            result[3] += 6135667;
            result[4] += 0;
            result[5] += 12271335;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39214918;
            result[3] += 933688;
            result[4] += 0;
            result[5] += 2801065;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 35140641;
            result[2] += 7809031;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10105805;
            result[4] += 0;
            result[5] += 32843867;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a90000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 514367;
            result[1] += 0;
            result[2] += 36262897;
            result[3] += 5915224;
            result[4] += 0;
            result[5] += 257183;
          } else {
            result[0] += 33405301;
            result[1] += 0;
            result[2] += 9544371;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 182505;
            result[1] += 0;
            result[2] += 41307121;
            result[3] += 1460045;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 541382;
            result[1] += 0;
            result[2] += 0;
            result[3] += 180460;
            result[4] += 41325525;
            result[5] += 902304;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9544371;
            result[4] += 14316557;
            result[5] += 19088743;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 1908874;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2863311;
            result[4] += 12407683;
            result[5] += 25769803;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1644321;
            result[4] += 1118138;
            result[5] += 40187213;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 21746669;
            result[1] += 9786001;
            result[2] += 0;
            result[3] += 543666;
            result[4] += 10329668;
            result[5] += 543666;
          } else {
            result[0] += 190887;
            result[1] += 477218;
            result[2] += 1049880;
            result[3] += 14602888;
            result[4] += 2004318;
            result[5] += 24624479;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 5349043;
            result[1] += 11170061;
            result[2] += 157324;
            result[3] += 786624;
            result[4] += 23284071;
            result[5] += 2202547;
          } else {
            result[0] += 38726985;
            result[1] += 228253;
            result[2] += 152168;
            result[3] += 760844;
            result[4] += 2168406;
            result[5] += 913013;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1952257;
            result[1] += 2147483;
            result[2] += 2537935;
            result[3] += 17179869;
            result[4] += 3123612;
            result[5] += 16008514;
          } else {
            result[0] += 12129305;
            result[1] += 0;
            result[2] += 23264406;
            result[3] += 4374503;
            result[4] += 795364;
            result[5] += 2386092;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42840000))) ) ) {
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 42843624;
            result[2] += 0;
            result[3] += 106048;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 3579139;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 1789569;
            result[4] += 16106127;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 36814005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5804009;
            result[3] += 31922054;
            result[4] += 0;
            result[5] += 5223608;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27709466;
            result[3] += 8312839;
            result[4] += 0;
            result[5] += 6927366;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 5368709;
            result[1] += 8053063;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 0;
          } else {
            result[0] += 2260509;
            result[1] += 0;
            result[2] += 2260509;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38428654;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 28633115;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 806566;
            result[1] += 0;
            result[2] += 33875798;
            result[3] += 6049249;
            result[4] += 201641;
            result[5] += 2016416;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42db0000))) ) ) {
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39278760;
            result[3] += 3670912;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 12271335;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40292992;
            result[3] += 2656680;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31236125;
            result[3] += 11713547;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 322122;
            result[1] += 0;
            result[2] += 42412802;
            result[3] += 214748;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42205955;
            result[5] += 743717;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1753047;
            result[3] += 0;
            result[4] += 19283526;
            result[5] += 21913098;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x422e0000))) ) ) {
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42720000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 3579139;
            result[5] += 21474836;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
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
            result[3] += 1789569;
            result[4] += 26843545;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 124311;
            result[2] += 0;
            result[3] += 808025;
            result[4] += 808025;
            result[5] += 41209309;
          } else {
            result[0] += 0;
            result[1] += 174592;
            result[2] += 0;
            result[3] += 7856647;
            result[4] += 4713988;
            result[5] += 30204444;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13895482;
            result[4] += 1894838;
            result[5] += 27159352;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 766958;
            result[3] += 33490518;
            result[4] += 0;
            result[5] += 8692195;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42860000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33405301;
            result[3] += 6362914;
            result[4] += 0;
            result[5] += 3181457;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 37167986;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5781686;
            result[5] += 0;
          } else {
            result[0] += 4462303;
            result[1] += 3625621;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34303959;
            result[5] += 557787;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 38247730;
            result[1] += 395121;
            result[2] += 39512;
            result[3] += 1145851;
            result[4] += 2410239;
            result[5] += 711218;
          } else {
            result[0] += 7655681;
            result[1] += 778543;
            result[2] += 4930778;
            result[3] += 9991313;
            result[4] += 4411748;
            result[5] += 15181606;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42990000))) ) ) {
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
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 894784;
            result[1] += 596523;
            result[2] += 6561755;
            result[3] += 27141807;
            result[4] += 2087831;
            result[5] += 5666970;
          } else {
            result[0] += 0;
            result[1] += 23860929;
            result[2] += 19088743;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 456911;
            result[1] += 456911;
            result[2] += 33354533;
            result[3] += 6853671;
            result[4] += 0;
            result[5] += 1827645;
          } else {
            result[0] += 34359738;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8589934;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 36238786;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30064771;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 0;
            result[4] += 0;
            result[5] += 27610504;
          } else {
            result[0] += 411493;
            result[1] += 0;
            result[2] += 40120652;
            result[3] += 1851722;
            result[4] += 0;
            result[5] += 565804;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 403283;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42143106;
            result[5] += 403283;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31360078;
            result[5] += 11589594;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42810000))) ) ) {
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
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 49481;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1830804;
            result[4] += 2523540;
            result[5] += 38545847;
          } else {
            result[0] += 0;
            result[1] += 602802;
            result[2] += 301401;
            result[3] += 18988276;
            result[4] += 1507006;
            result[5] += 21550186;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1193046;
            result[4] += 41756626;
            result[5] += 0;
          } else {
            result[0] += 1301505;
            result[1] += 36442146;
            result[2] += 0;
            result[3] += 1301505;
            result[4] += 3904515;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1867377;
            result[1] += 33612787;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7469508;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
            result[0] += 35889452;
            result[1] += 1372820;
            result[2] += 0;
            result[3] += 588351;
            result[4] += 4902930;
            result[5] += 196117;
          } else {
            result[0] += 2734623;
            result[1] += 0;
            result[2] += 4182365;
            result[3] += 15764299;
            result[4] += 6112687;
            result[5] += 14155697;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 36421987;
            result[1] += 1912570;
            result[2] += 956285;
            result[3] += 748397;
            result[4] += 2660967;
            result[5] += 249465;
          } else {
            result[0] += 6535819;
            result[1] += 0;
            result[2] += 30811721;
            result[3] += 2334221;
            result[4] += 466844;
            result[5] += 2801065;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 2006994;
            result[2] += 5619583;
            result[3] += 12443363;
            result[4] += 6823779;
            result[5] += 16055952;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9615598;
            result[3] += 29487835;
            result[4] += 0;
            result[5] += 3846239;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12526987;
            result[3] += 0;
            result[4] += 0;
            result[5] += 30422685;
          } else {
            result[0] += 1651910;
            result[1] += 825955;
            result[2] += 19822925;
            result[3] += 7433597;
            result[4] += 5781686;
            result[5] += 7433597;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1717986;
            result[1] += 0;
            result[2] += 36077725;
            result[3] += 4581298;
            result[4] += 0;
            result[5] += 572662;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 24542670;
            result[4] += 0;
            result[5] += 3067833;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30963717;
            result[3] += 8989466;
            result[4] += 0;
            result[5] += 2996488;
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34075773;
            result[3] += 8163987;
            result[4] += 0;
            result[5] += 709911;
          } else {
            result[0] += 319328;
            result[1] += 0;
            result[2] += 41512695;
            result[3] += 1117649;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 4772185;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42718138;
            result[3] += 231534;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a90000))) ) ) {
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
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42010882;
            result[5] += 938790;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2863311;
            result[3] += 0;
            result[4] += 22906492;
            result[5] += 17179869;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1068732;
            result[4] += 935140;
            result[5] += 40945800;
          } else {
            result[0] += 4730957;
            result[1] += 2040805;
            result[2] += 185527;
            result[3] += 12986942;
            result[4] += 3525027;
            result[5] += 19480413;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 24051816;
            result[1] += 13743895;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5153960;
            result[5] += 0;
          } else {
            result[0] += 776198;
            result[1] += 3622261;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35705149;
            result[5] += 2846062;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 37490292;
            result[1] += 458129;
            result[2] += 267242;
            result[3] += 1298034;
            result[4] += 1985229;
            result[5] += 1450744;
          } else {
            result[0] += 6607641;
            result[1] += 1601852;
            result[2] += 8509841;
            result[3] += 10512157;
            result[4] += 3103589;
            result[5] += 12614589;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 715827;
            result[3] += 4294967;
            result[4] += 715827;
            result[5] += 37223049;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 965161;
            result[2] += 2412902;
            result[3] += 26541932;
            result[4] += 965161;
            result[5] += 12064514;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30064771;
            result[3] += 0;
            result[4] += 0;
            result[5] += 12884901;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19440378;
            result[3] += 20796683;
            result[4] += 0;
            result[5] += 2712610;
          } else {
            result[0] += 11453246;
            result[1] += 0;
            result[2] += 31496426;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 14316557;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 41648167;
            result[1] += 0;
            result[2] += 1301505;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 3390763;
            result[1] += 0;
            result[2] += 38428654;
            result[3] += 1130254;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1700977;
            result[1] += 0;
            result[2] += 33381676;
            result[3] += 6803908;
            result[4] += 0;
            result[5] += 1063110;
          } else {
            result[0] += 59652;
            result[1] += 0;
            result[2] += 41637321;
            result[3] += 1252698;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40002146;
            result[5] += 2947526;
          } else {
            result[0] += 0;
            result[1] += 38654705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4294967;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 604924;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12098499;
            result[5] += 30246248;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30923764;
            result[5] += 12025908;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 170435;
            result[3] += 1988410;
            result[4] += 2102034;
            result[5] += 38688792;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1431655;
            result[3] += 5726623;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 937765;
            result[1] += 0;
            result[2] += 2063084;
            result[3] += 17629996;
            result[4] += 4688828;
            result[5] += 17629996;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42260000))) ) ) {
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5694085;
            result[5] += 1464193;
          } else {
            result[0] += 1025323;
            result[1] += 1708872;
            result[2] += 2050647;
            result[3] += 16405180;
            result[4] += 4443069;
            result[5] += 17316579;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 6422381;
            result[1] += 8830773;
            result[2] += 0;
            result[3] += 2809791;
            result[4] += 24886726;
            result[5] += 0;
          } else {
            result[0] += 37123166;
            result[1] += 582650;
            result[2] += 2497074;
            result[3] += 582650;
            result[4] += 1581480;
            result[5] += 582650;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42860000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x427e0000))) ) ) {
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15618062;
            result[4] += 3904515;
            result[5] += 23427094;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 825955;
            result[4] += 0;
            result[5] += 38819896;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1047552;
            result[3] += 23046165;
            result[4] += 0;
            result[5] += 18855953;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10518287;
            result[3] += 28048766;
            result[4] += 0;
            result[5] += 4382619;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 18407002;
            result[4] += 0;
            result[5] += 24542670;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40802189;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2147483;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10932644;
            result[3] += 26550706;
            result[4] += 1561806;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27487790;
            result[3] += 5153960;
            result[4] += 5153960;
            result[5] += 5153960;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 2863311;
            result[4] += 0;
            result[5] += 1431655;
          } else {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 14316557;
            result[3] += 25053975;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35400942;
            result[3] += 5466322;
            result[4] += 0;
            result[5] += 2082408;
          } else {
            result[0] += 724888;
            result[1] += 0;
            result[2] += 40533376;
            result[3] += 1631000;
            result[4] += 0;
            result[5] += 60407;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42810000))) ) ) {
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e50000))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 94602;
            result[1] += 42760467;
            result[2] += 0;
            result[3] += 0;
            result[4] += 94602;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 36984440;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4772185;
            result[5] += 1193046;
          } else {
            result[0] += 0;
            result[1] += 465158;
            result[2] += 0;
            result[3] += 1240423;
            result[4] += 38918295;
            result[5] += 2325794;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 122189;
            result[3] += 916422;
            result[4] += 1038612;
            result[5] += 40872448;
          } else {
            result[0] += 6270025;
            result[1] += 188100;
            result[2] += 1692906;
            result[3] += 15048060;
            result[4] += 5266821;
            result[5] += 14483758;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 7516192;
            result[1] += 2415919;
            result[2] += 2684354;
            result[3] += 536870;
            result[4] += 26306674;
            result[5] += 3489660;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
            result[0] += 35849591;
            result[1] += 969956;
            result[2] += 116394;
            result[3] += 1241544;
            result[4] += 2133904;
            result[5] += 2638281;
          } else {
            result[0] += 6594634;
            result[1] += 0;
            result[2] += 16232947;
            result[3] += 9976498;
            result[4] += 1521838;
            result[5] += 8623753;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 42949672;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e90000))) ) ) {
            result[0] += 0;
            result[1] += 5425221;
            result[2] += 14015156;
            result[3] += 14467258;
            result[4] += 1808407;
            result[5] += 7233629;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 7158278;
            result[5] += 3579139;
          } else {
            result[0] += 39645851;
            result[1] += 0;
            result[2] += 3303820;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7158278;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2386092;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 1193046;
            result[4] += 0;
            result[5] += 1193046;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 0;
            result[4] += 0;
            result[5] += 14316557;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4772185;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38177487;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2260509;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 29386618;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27917287;
            result[3] += 13600729;
            result[4] += 0;
            result[5] += 1431655;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40802189;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39961869;
            result[3] += 2614327;
            result[4] += 0;
            result[5] += 373475;
          } else {
            result[0] += 78806;
            result[1] += 0;
            result[2] += 42319219;
            result[3] += 551647;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
