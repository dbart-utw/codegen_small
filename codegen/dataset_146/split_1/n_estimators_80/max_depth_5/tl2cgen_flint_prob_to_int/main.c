
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51063285;
            result[5] += 2623805;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5478274;
            result[4] += 16434823;
            result[5] += 31773992;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42940000))) ) ) {
            result[0] += 7669584;
            result[1] += 3834792;
            result[2] += 0;
            result[3] += 15339168;
            result[4] += 11504376;
            result[5] += 15339168;
          } else {
            result[0] += 0;
            result[1] += 51698680;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1988410;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 47975698;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4569114;
            result[5] += 1142278;
          } else {
            result[0] += 119040;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3095042;
            result[4] += 3214083;
            result[5] += 47258925;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 954437;
            result[1] += 0;
            result[2] += 2386092;
            result[3] += 36984440;
            result[4] += 477218;
            result[5] += 12884901;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 2477865;
            result[1] += 4129776;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47079449;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 31773992;
            result[2] += 3286964;
            result[3] += 5478274;
            result[4] += 4382619;
            result[5] += 8765239;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 36909875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16777215;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 48303832;
            result[1] += 1600428;
            result[2] += 0;
            result[3] += 242489;
            result[4] += 3249354;
            result[5] += 290986;
          } else {
            result[0] += 17812072;
            result[1] += 1254371;
            result[2] += 1756119;
            result[3] += 13045461;
            result[4] += 3010491;
            result[5] += 16808575;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 838860;
            result[1] += 2852126;
            result[2] += 14260633;
            result[3] += 20468203;
            result[4] += 3690987;
            result[5] += 11576279;
          } else {
            result[0] += 23569942;
            result[1] += 0;
            result[2] += 26625305;
            result[3] += 872960;
            result[4] += 2618882;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6927366;
            result[3] += 45027882;
            result[4] += 0;
            result[5] += 1731841;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 48806446;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 6316128;
            result[2] += 37896770;
            result[3] += 9474192;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36909875;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 3355443;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52634403;
            result[3] += 1052688;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 301612;
            result[1] += 0;
            result[2] += 52028220;
            result[3] += 1055645;
            result[4] += 0;
            result[5] += 301612;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 229432;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52769363;
            result[5] += 688296;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 5368709;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 2516582;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26004684;
            result[5] += 25165823;
          } else {
            result[0] += 42705640;
            result[1] += 0;
            result[2] += 1220161;
            result[3] += 4270564;
            result[4] += 5490725;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 28633115;
            result[5] += 14316557;
          } else {
            result[0] += 61638;
            result[1] += 123276;
            result[2] += 61638;
            result[3] += 2712091;
            result[4] += 1540961;
            result[5] += 49187484;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 550636;
            result[1] += 4680413;
            result[2] += 2477865;
            result[3] += 13490602;
            result[4] += 2477865;
            result[5] += 30009707;
          } else {
            result[0] += 2200290;
            result[1] += 1100145;
            result[2] += 2420319;
            result[3] += 32564301;
            result[4] += 1320174;
            result[5] += 14081859;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 37896770;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15790320;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 4098251;
            result[1] += 11065278;
            result[2] += 0;
            result[3] += 4098251;
            result[4] += 32786009;
            result[5] += 1639300;
          } else {
            result[0] += 44842273;
            result[1] += 570633;
            result[2] += 380422;
            result[3] += 1474136;
            result[4] += 4850383;
            result[5] += 1569241;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1731841;
            result[1] += 0;
            result[2] += 6927366;
            result[3] += 28055834;
            result[4] += 1039104;
            result[5] += 15932943;
          } else {
            result[0] += 16494226;
            result[1] += 323416;
            result[2] += 26196713;
            result[3] += 1940497;
            result[4] += 4851243;
            result[5] += 3880994;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          } else {
            result[0] += 4473924;
            result[1] += 1491308;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 1491308;
            result[5] += 41756626;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1988410;
            result[3] += 49710269;
            result[4] += 0;
            result[5] += 1988410;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21007992;
            result[3] += 18673770;
            result[4] += 4668442;
            result[5] += 9336885;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 32212254;
          } else {
            result[0] += 941878;
            result[1] += 0;
            result[2] += 36733272;
            result[3] += 12244424;
            result[4] += 0;
            result[5] += 3767515;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28362991;
            result[3] += 25324099;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23008753;
            result[3] += 0;
            result[4] += 0;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 39370533;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 1789569;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 71297;
            result[1] += 0;
            result[2] += 51975948;
            result[3] += 1639844;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42940000))) ) ) {
            result[0] += 204133;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52462290;
            result[5] += 1020667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15339168;
            result[4] += 15339168;
            result[5] += 23008753;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 6710886;
            result[5] += 6710886;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 53024287;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 662803;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 114227;
            result[1] += 399797;
            result[2] += 0;
            result[3] += 2113215;
            result[4] += 4340658;
            result[5] += 46719192;
          } else {
            result[0] += 0;
            result[1] += 268435;
            result[2] += 671088;
            result[3] += 29796335;
            result[4] += 1476395;
            result[5] += 21474836;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 41756626;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 6882960;
            result[2] += 0;
            result[3] += 1376592;
            result[4] += 44739242;
            result[5] += 688296;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
            result[0] += 4270564;
            result[1] += 1220161;
            result[2] += 3660483;
            result[3] += 26843545;
            result[4] += 610080;
            result[5] += 17082256;
          } else {
            result[0] += 47096607;
            result[1] += 2027841;
            result[2] += 709744;
            result[3] += 608352;
            result[4] += 3041761;
            result[5] += 202784;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 3497530;
            result[1] += 1399012;
            result[2] += 16438392;
            result[3] += 14339874;
            result[4] += 5246295;
            result[5] += 12765985;
          } else {
            result[0] += 45674092;
            result[1] += 801299;
            result[2] += 4807799;
            result[3] += 0;
            result[4] += 2403899;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42900000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 3158064;
            result[2] += 6316128;
            result[3] += 28422577;
            result[4] += 0;
            result[5] += 15790320;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 8947848;
          } else {
            result[0] += 1167110;
            result[1] += 0;
            result[2] += 31511988;
            result[3] += 10503996;
            result[4] += 583555;
            result[5] += 9920440;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42fd0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36796770;
            result[3] += 13270966;
            result[4] += 0;
            result[5] += 3619354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48412569;
            result[3] += 5086145;
            result[4] += 0;
            result[5] += 188375;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52327924;
            result[3] += 1359166;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52174778;
            result[5] += 1512312;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48035818;
            result[5] += 5651272;
          } else {
            result[0] += 0;
            result[1] += 1677721;
            result[2] += 0;
            result[3] += 11744051;
            result[4] += 11744051;
            result[5] += 28521267;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 73443;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1468867;
            result[4] += 954763;
            result[5] += 51190017;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 47975698;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5711392;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 822790;
            result[2] += 308546;
            result[3] += 19644127;
            result[4] += 5450988;
            result[5] += 27460638;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 13918875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39768215;
            result[5] += 0;
          } else {
            result[0] += 7090747;
            result[1] += 36466703;
            result[2] += 0;
            result[3] += 7090747;
            result[4] += 3038891;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 4255684;
            result[1] += 20296339;
            result[2] += 654720;
            result[3] += 982080;
            result[4] += 25861464;
            result[5] += 1636801;
          } else {
            result[0] += 47544725;
            result[1] += 562659;
            result[2] += 375106;
            result[3] += 843989;
            result[4] += 3704174;
            result[5] += 656436;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 997901;
            result[1] += 997901;
            result[2] += 6186988;
            result[3] += 24947533;
            result[4] += 2195382;
            result[5] += 18361384;
          } else {
            result[0] += 14384088;
            result[1] += 1012963;
            result[2] += 24311135;
            result[3] += 5267412;
            result[4] += 4457041;
            result[5] += 4254448;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 44739242;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20132659;
            result[3] += 0;
            result[4] += 0;
            result[5] += 33554431;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 50704475;
            result[4] += 0;
            result[5] += 2982616;
          } else {
            result[0] += 4668442;
            result[1] += 4668442;
            result[2] += 25676434;
            result[3] += 16339549;
            result[4] += 0;
            result[5] += 2334221;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 25430727;
            result[4] += 0;
            result[5] += 5651272;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48529379;
            result[3] += 4923270;
            result[4] += 0;
            result[5] += 234441;
          } else {
            result[0] += 456522;
            result[1] += 0;
            result[2] += 52774045;
            result[3] += 456522;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 42949672;
            result[5] += 10737418;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 3355443;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3355443;
            result[5] += 46976204;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42580000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 74981;
            result[3] += 1349675;
            result[4] += 524873;
            result[5] += 51737559;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 25264513;
            result[1] += 11842740;
            result[2] += 0;
            result[3] += 2368548;
            result[4] += 12632256;
            result[5] += 1579032;
          } else {
            result[0] += 903823;
            result[1] += 1807646;
            result[2] += 0;
            result[3] += 8134407;
            result[4] += 4157586;
            result[5] += 38683627;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 279620;
            result[2] += 1677721;
            result[3] += 34393292;
            result[4] += 559240;
            result[5] += 16777215;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49852298;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3834792;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51897521;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 401649;
            result[1] += 53151559;
            result[2] += 0;
            result[3] += 0;
            result[4] += 133883;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 13869165;
            result[1] += 5816101;
            result[2] += 0;
            result[3] += 0;
            result[4] += 29527900;
            result[5] += 4473924;
          } else {
            result[0] += 48660027;
            result[1] += 292838;
            result[2] += 0;
            result[3] += 1073741;
            result[4] += 2733161;
            result[5] += 927322;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2280146;
            result[1] += 414572;
            result[2] += 8291442;
            result[3] += 15131882;
            result[4] += 6633154;
            result[5] += 20935892;
          } else {
            result[0] += 46596343;
            result[1] += 2025927;
            result[2] += 3038891;
            result[3] += 1012963;
            result[4] += 1012963;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 3286964;
            result[1] += 8765239;
            result[2] += 0;
            result[3] += 13147859;
            result[4] += 2191309;
            result[5] += 26295718;
          } else {
            result[0] += 2556528;
            result[1] += 0;
            result[2] += 6391320;
            result[3] += 37069658;
            result[4] += 639132;
            result[5] += 7030452;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42930000))) ) ) {
            result[0] += 45791930;
            result[1] += 0;
            result[2] += 7895160;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 624268;
            result[1] += 0;
            result[2] += 37456110;
            result[3] += 9051893;
            result[4] += 312134;
            result[5] += 6242685;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7002664;
            result[3] += 35013320;
            result[4] += 0;
            result[5] += 11671106;
          } else {
            result[0] += 735439;
            result[1] += 1103159;
            result[2] += 39713738;
            result[3] += 10663874;
            result[4] += 0;
            result[5] += 1470879;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 430645;
            result[1] += 0;
            result[2] += 51103220;
            result[3] += 1937903;
            result[4] += 0;
            result[5] += 215322;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 813440;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48196365;
            result[5] += 4677284;
          } else {
            result[0] += 32494818;
            result[1] += 0;
            result[2] += 706409;
            result[3] += 0;
            result[4] += 4238454;
            result[5] += 16247409;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 126620;
            result[2] += 0;
            result[3] += 3102202;
            result[4] += 2279168;
            result[5] += 48179099;
          } else {
            result[0] += 174876;
            result[1] += 2448271;
            result[2] += 1573888;
            result[3] += 29554131;
            result[4] += 2273394;
            result[5] += 17662528;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 9099506;
            result[1] += 7886239;
            result[2] += 0;
            result[3] += 303316;
            result[4] += 33971492;
            result[5] += 2426535;
          } else {
            result[0] += 46711617;
            result[1] += 1250774;
            result[2] += 384853;
            result[3] += 1202667;
            result[4] += 3415576;
            result[5] += 721600;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 432960;
            result[2] += 12844492;
            result[3] += 19627538;
            result[4] += 2742082;
            result[5] += 18040017;
          } else {
            result[0] += 28991029;
            result[1] += 0;
            result[2] += 11274289;
            result[3] += 1073741;
            result[4] += 10737418;
            result[5] += 1610612;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 4294967;
            result[2] += 4294967;
            result[3] += 23622320;
            result[4] += 4294967;
            result[5] += 17179869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8785160;
            result[3] += 44901930;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29826161;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47444406;
            result[3] += 6242685;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 19522578;
            result[2] += 9761289;
            result[3] += 0;
            result[4] += 0;
            result[5] += 24403223;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 4129776;
            result[1] += 0;
            result[2] += 14454216;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 8259552;
          } else {
            result[0] += 1118481;
            result[1] += 0;
            result[2] += 43620761;
            result[3] += 8053063;
            result[4] += 0;
            result[5] += 894784;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 5965232;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 2982616;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50641015;
            result[3] += 3046076;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53196798;
            result[3] += 490293;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 219130;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52372305;
            result[5] += 1095654;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3355443;
            result[4] += 40265318;
            result[5] += 10066329;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 0;
            result[3] += 813440;
            result[4] += 26030104;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 970698;
            result[4] += 2986764;
            result[5] += 49729628;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5506368;
            result[4] += 2064888;
            result[5] += 46115834;
          } else {
            result[0] += 4532947;
            result[1] += 849927;
            result[2] += 0;
            result[3] += 27339336;
            result[4] += 1558200;
            result[5] += 19406679;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3772606;
            result[1] += 11027618;
            result[2] += 870601;
            result[3] += 0;
            result[4] += 37145663;
            result[5] += 870601;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 47037772;
            result[1] += 640304;
            result[2] += 344779;
            result[3] += 1576134;
            result[4] += 3103015;
            result[5] += 985084;
          } else {
            result[0] += 8345143;
            result[1] += 417257;
            result[2] += 13074058;
            result[3] += 15438515;
            result[4] += 4311657;
            result[5] += 12100458;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1309441;
            result[2] += 0;
            result[3] += 3928323;
            result[4] += 0;
            result[5] += 48449326;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 3579139;
            result[5] += 3579139;
          } else {
            result[0] += 20132659;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 13421772;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8476909;
            result[3] += 45210182;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 976128;
            result[1] += 0;
            result[2] += 39045157;
            result[3] += 12689676;
            result[4] += 0;
            result[5] += 976128;
          } else {
            result[0] += 53687091;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 37282702;
            result[4] += 0;
            result[5] += 4473924;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 531555;
            result[1] += 0;
            result[2] += 43853317;
            result[3] += 8239108;
            result[4] += 0;
            result[5] += 1063110;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 488064;
            result[1] += 0;
            result[2] += 47830317;
            result[3] += 5124676;
            result[4] += 0;
            result[5] += 244032;
          } else {
            result[0] += 336244;
            result[1] += 0;
            result[2] += 52790438;
            result[3] += 560408;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1193046;
            result[2] += 0;
            result[3] += 1193046;
            result[4] += 38177487;
            result[5] += 13123511;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
            result[0] += 39370533;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 3579139;
          } else {
            result[0] += 144969;
            result[1] += 144969;
            result[2] += 96646;
            result[3] += 3914180;
            result[4] += 2609453;
            result[5] += 46776871;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 2236962;
            result[5] += 46976204;
          } else {
            result[0] += 0;
            result[1] += 458864;
            result[2] += 0;
            result[3] += 44509810;
            result[4] += 0;
            result[5] += 8718416;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 116711;
            result[1] += 53220246;
            result[2] += 0;
            result[3] += 0;
            result[4] += 350133;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 29033978;
            result[1] += 5841155;
            result[2] += 0;
            result[3] += 3178275;
            result[4] += 12455405;
            result[5] += 3178275;
          } else {
            result[0] += 47572728;
            result[1] += 1118481;
            result[2] += 969350;
            result[3] += 596523;
            result[4] += 2908050;
            result[5] += 521957;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 535087;
            result[1] += 0;
            result[2] += 15874256;
            result[3] += 18906417;
            result[4] += 713449;
            result[5] += 17657880;
          } else {
            result[0] += 35338338;
            result[1] += 0;
            result[2] += 4077500;
            result[3] += 2718333;
            result[4] += 11552918;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 7320966;
            result[2] += 2440322;
            result[3] += 26843545;
            result[4] += 9761289;
            result[5] += 7320966;
          } else {
            result[0] += 0;
            result[1] += 2556528;
            result[2] += 5113056;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 38347922;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 7895160;
            result[2] += 12632256;
            result[3] += 30001609;
            result[4] += 1579032;
            result[5] += 1579032;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40728138;
            result[3] += 3702558;
            result[4] += 0;
            result[5] += 9256395;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 6194664;
            result[1] += 0;
            result[2] += 35103098;
            result[3] += 4129776;
            result[4] += 2064888;
            result[5] += 6194664;
          } else {
            result[0] += 1491308;
            result[1] += 0;
            result[2] += 52195783;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7669584;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 6710886;
            result[1] += 0;
            result[2] += 46976204;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45991330;
            result[3] += 6779598;
            result[4] += 0;
            result[5] += 916161;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52712930;
            result[3] += 865920;
            result[4] += 0;
            result[5] += 108240;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53385478;
            result[5] += 301612;
          } else {
            result[0] += 3355443;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30198988;
            result[5] += 20132659;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23264406;
            result[5] += 30422685;
          } else {
            result[0] += 32051994;
            result[1] += 2403899;
            result[2] += 0;
            result[3] += 4807799;
            result[4] += 12019498;
            result[5] += 2403899;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41756626;
            result[5] += 11930464;
          } else {
            result[0] += 65154;
            result[1] += 130308;
            result[2] += 0;
            result[3] += 2215244;
            result[4] += 1759164;
            result[5] += 49517220;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 501748;
            result[2] += 0;
            result[3] += 9533221;
            result[4] += 501748;
            result[5] += 43150372;
          } else {
            result[0] += 380759;
            result[1] += 0;
            result[2] += 1142278;
            result[3] += 37695191;
            result[4] += 0;
            result[5] += 14468861;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 9474192;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44212898;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53568051;
            result[2] += 0;
            result[3] += 0;
            result[4] += 119040;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42320000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1167110;
            result[1] += 7002664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45517316;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 9860894;
            result[1] += 547827;
            result[2] += 3286964;
            result[3] += 10956549;
            result[4] += 13147859;
            result[5] += 15886996;
          } else {
            result[0] += 47392742;
            result[1] += 1434741;
            result[2] += 277691;
            result[3] += 971921;
            result[4] += 2962046;
            result[5] += 647947;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2662169;
            result[3] += 29727562;
            result[4] += 2218474;
            result[5] += 19078883;
          } else {
            result[0] += 19850689;
            result[1] += 451152;
            result[2] += 16692624;
            result[3] += 2255760;
            result[4] += 8120736;
            result[5] += 6316128;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 21474836;
            result[4] += 10737418;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1167110;
            result[5] += 52519980;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4129776;
            result[2] += 0;
            result[3] += 12389328;
            result[4] += 0;
            result[5] += 37167986;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 41756626;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35013320;
            result[3] += 2334221;
            result[4] += 0;
            result[5] += 16339549;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9177280;
            result[3] += 39003442;
            result[4] += 0;
            result[5] += 5506368;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41756626;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2497074;
            result[1] += 2497074;
            result[2] += 1248537;
            result[3] += 23722203;
            result[4] += 0;
            result[5] += 23722203;
          } else {
            result[0] += 0;
            result[1] += 2982616;
            result[2] += 50704475;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 3355443;
            result[1] += 3355443;
            result[2] += 46976204;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 32537631;
            result[1] += 4880644;
            result[2] += 11388170;
            result[3] += 3253763;
            result[4] += 1626881;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 344148;
            result[1] += 0;
            result[2] += 36823838;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 3097332;
          } else {
            result[0] += 1227133;
            result[1] += 0;
            result[2] += 48471773;
            result[3] += 2761050;
            result[4] += 0;
            result[5] += 1227133;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52314897;
            result[3] += 1114907;
            result[4] += 0;
            result[5] += 257286;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c80000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42180000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 396214;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52498447;
            result[5] += 792429;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 35013320;
            result[1] += 6224590;
            result[2] += 778073;
            result[3] += 2334221;
            result[4] += 8558811;
            result[5] += 778073;
          } else {
            result[0] += 59520;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3095042;
            result[4] += 4047363;
            result[5] += 46485164;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3728270;
            result[4] += 3728270;
            result[5] += 46230550;
          } else {
            result[0] += 3609216;
            result[1] += 0;
            result[2] += 2030184;
            result[3] += 32257369;
            result[4] += 2030184;
            result[5] += 13760136;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20648881;
            result[5] += 0;
          } else {
            result[0] += 745654;
            result[1] += 1491308;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50704475;
            result[5] += 745654;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 30344877;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23342213;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 9138228;
            result[1] += 380759;
            result[2] += 761519;
            result[3] += 11042025;
            result[4] += 1523038;
            result[5] += 30841520;
          } else {
            result[0] += 46885106;
            result[1] += 1311811;
            result[2] += 485856;
            result[3] += 1020297;
            result[4] += 3352406;
            result[5] += 631612;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 284058;
            result[1] += 2272469;
            result[2] += 2272469;
            result[3] += 32382689;
            result[4] += 1704352;
            result[5] += 14771051;
          } else {
            result[0] += 15261305;
            result[1] += 817569;
            result[2] += 21801864;
            result[3] += 3542802;
            result[4] += 4360372;
            result[5] += 7903175;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428c0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2440322;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 51246768;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 1988410;
            result[1] += 9942053;
            result[2] += 1988410;
            result[3] += 9942053;
            result[4] += 11930464;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 34164512;
            result[4] += 0;
            result[5] += 3904515;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 4944863;
            result[1] += 0;
            result[2] += 32494818;
            result[3] += 10596136;
            result[4] += 0;
            result[5] += 5651272;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 2334221;
            result[1] += 0;
            result[2] += 29761322;
            result[3] += 15755994;
            result[4] += 0;
            result[5] += 5835553;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46137343;
            result[3] += 7549747;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x43038000))) ) ) {
            result[0] += 1084587;
            result[1] += 0;
            result[2] += 49348740;
            result[3] += 2711469;
            result[4] += 0;
            result[5] += 542293;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 12201611;
            result[1] += 0;
            result[2] += 41485479;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 186737;
            result[1] += 0;
            result[2] += 52193189;
            result[3] += 1307163;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53426474;
            result[5] += 260616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 40904450;
            result[1] += 12782640;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1431655;
            result[1] += 3579139;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27201459;
            result[5] += 21474836;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 440780;
            result[4] += 1674966;
            result[5] += 51571343;
          } else {
            result[0] += 0;
            result[1] += 2115747;
            result[2] += 264468;
            result[3] += 9256395;
            result[4] += 5289368;
            result[5] += 36761111;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14283721;
            result[4] += 1970168;
            result[5] += 37433201;
          } else {
            result[0] += 0;
            result[1] += 1328888;
            result[2] += 3720887;
            result[3] += 32424876;
            result[4] += 1063110;
            result[5] += 15149327;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 2876094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48893600;
            result[5] += 1917396;
          } else {
            result[0] += 0;
            result[1] += 36909875;
            result[2] += 6710886;
            result[3] += 3355443;
            result[4] += 6710886;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 129678;
            result[1] += 53557412;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 9761289;
            result[1] += 10981450;
            result[2] += 0;
            result[3] += 1708225;
            result[4] += 28063706;
            result[5] += 3172419;
          } else {
            result[0] += 45108469;
            result[1] += 141405;
            result[2] += 188541;
            result[3] += 2356764;
            result[4] += 3912228;
            result[5] += 1979682;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 2198788;
            result[1] += 1465859;
            result[2] += 15025056;
            result[3] += 17956774;
            result[4] += 916161;
            result[5] += 16124450;
          } else {
            result[0] += 39370533;
            result[1] += 0;
            result[2] += 8053063;
            result[3] += 0;
            result[4] += 5816101;
            result[5] += 447392;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
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
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2334221;
            result[3] += 46684427;
            result[4] += 0;
            result[5] += 4668442;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 4294967;
            result[1] += 0;
            result[2] += 4294967;
            result[3] += 42949672;
            result[4] += 2147483;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31580641;
            result[3] += 6316128;
            result[4] += 9474192;
            result[5] += 6316128;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 11302545;
            result[4] += 0;
            result[5] += 19779454;
          } else {
            result[0] += 1731841;
            result[1] += 0;
            result[2] += 45605163;
            result[3] += 5772805;
            result[4] += 0;
            result[5] += 577280;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 1184274;
            result[1] += 0;
            result[2] += 44212898;
            result[3] += 7500402;
            result[4] += 0;
            result[5] += 789516;
          } else {
            result[0] += 444920;
            result[1] += 0;
            result[2] += 51240027;
            result[3] += 1779682;
            result[4] += 0;
            result[5] += 222460;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45210182;
            result[5] += 8476909;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 37580963;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 142974;
            result[3] += 1930161;
            result[4] += 1072312;
            result[5] += 50541642;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 3914683;
            result[1] += 6151645;
            result[2] += 0;
            result[3] += 4753544;
            result[4] += 7549747;
            result[5] += 31317469;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2746781;
            result[3] += 28216936;
            result[4] += 998829;
            result[5] += 21724543;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 4880644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48806446;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53558345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 128746;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 34315460;
            result[1] += 1383687;
            result[2] += 0;
            result[3] += 2029408;
            result[4] += 15128321;
            result[5] += 830212;
          } else {
            result[0] += 447392;
            result[1] += 1006632;
            result[2] += 7717519;
            result[3] += 19685266;
            result[4] += 3355443;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42940000))) ) ) {
            result[0] += 3303820;
            result[1] += 15693149;
            result[2] += 2477865;
            result[3] += 825955;
            result[4] += 29734388;
            result[5] += 1651910;
          } else {
            result[0] += 46889500;
            result[1] += 832358;
            result[2] += 2427710;
            result[3] += 1317900;
            result[4] += 1942168;
            result[5] += 277452;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 3355443;
            result[1] += 16777215;
            result[2] += 10066329;
            result[3] += 3355443;
            result[4] += 20132659;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 48318382;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38654705;
            result[4] += 0;
            result[5] += 15032385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24159191;
            result[3] += 24159191;
            result[4] += 0;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 2064888;
            result[1] += 0;
            result[2] += 51622203;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 0;
            result[4] += 0;
            result[5] += 47721858;
          } else {
            result[0] += 1095654;
            result[1] += 0;
            result[2] += 24104408;
            result[3] += 27939200;
            result[4] += 0;
            result[5] += 547827;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 287096;
            result[2] += 45648382;
            result[3] += 7751612;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52537285;
            result[3] += 1149805;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 233422;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52519980;
            result[5] += 933688;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1470879;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26475825;
            result[5] += 25740386;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30870077;
            result[5] += 20132659;
          } else {
            result[0] += 0;
            result[1] += 124853;
            result[2] += 0;
            result[3] += 3558330;
            result[4] += 2060086;
            result[5] += 47943820;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 523776;
            result[2] += 0;
            result[3] += 13880077;
            result[4] += 4713988;
            result[5] += 34569248;
          } else {
            result[0] += 0;
            result[1] += 362750;
            result[2] += 362750;
            result[3] += 39177066;
            result[4] += 1088251;
            result[5] += 12696271;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x422c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1118481;
            result[1] += 3914683;
            result[2] += 0;
            result[3] += 559240;
            result[4] += 46976204;
            result[5] += 1118481;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 39475802;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14211288;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 40039224;
            result[1] += 3453074;
            result[2] += 82216;
            result[3] += 1068808;
            result[4] += 7152797;
            result[5] += 1890969;
          } else {
            result[0] += 3644554;
            result[1] += 2803503;
            result[2] += 12335415;
            result[3] += 17381721;
            result[4] += 2102627;
            result[5] += 15419269;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 52426337;
            result[1] += 0;
            result[2] += 0;
            result[3] += 105062;
            result[4] += 1155690;
            result[5] += 0;
          } else {
            result[0] += 20742739;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 7320966;
            result[4] += 9761289;
            result[5] += 6100805;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1142278;
            result[3] += 50260255;
            result[4] += 0;
            result[5] += 2284557;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 12389328;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49852298;
            result[3] += 3834792;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37856282;
            result[3] += 11012736;
            result[4] += 0;
            result[5] += 4818072;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49739510;
            result[3] += 3947580;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 468882;
            result[1] += 0;
            result[2] += 46888289;
            result[3] += 6329919;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51099761;
            result[3] += 2587329;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 126322;
            result[1] += 0;
            result[2] += 53434446;
            result[3] += 126322;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cc0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 215610;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52177815;
            result[5] += 1293664;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 35791394;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 46152060;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7535030;
            result[5] += 0;
          } else {
            result[0] += 59718;
            result[1] += 238874;
            result[2] += 0;
            result[3] += 1731841;
            result[4] += 5076087;
            result[5] += 46580568;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 688296;
            result[1] += 688296;
            result[2] += 688296;
            result[3] += 13421772;
            result[4] += 1720740;
            result[5] += 36479690;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 843252;
            result[3] += 37103120;
            result[4] += 0;
            result[5] += 15740717;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 4542753;
            result[1] += 8672530;
            result[2] += 412977;
            result[3] += 1238932;
            result[4] += 37167986;
            result[5] += 1651910;
          } else {
            result[0] += 0;
            result[1] += 52108059;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1579032;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
            result[0] += 45020525;
            result[1] += 1459632;
            result[2] += 729816;
            result[3] += 1505245;
            result[4] += 3238558;
            result[5] += 1733313;
          } else {
            result[0] += 14737632;
            result[1] += 526344;
            result[2] += 10658466;
            result[3] += 15000804;
            result[4] += 1973790;
            result[5] += 10790052;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2556528;
            result[1] += 38347922;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12782640;
            result[5] += 0;
          } else {
            result[0] += 143165;
            result[1] += 53543925;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 23008753;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 43620761;
            result[4] += 0;
            result[5] += 10066329;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 4880644;
            result[4] += 4880644;
            result[5] += 24403223;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43925801;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 4880644;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 847690;
            result[1] += 0;
            result[2] += 43797363;
            result[3] += 7346654;
            result[4] += 0;
            result[5] += 1695381;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 53687091;
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
          result[4] += 0;
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 2236962;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 7829367;
            result[4] += 0;
            result[5] += 3355443;
          } else {
            result[0] += 15339168;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 4628197;
            result[1] += 0;
            result[2] += 38876859;
            result[3] += 8330755;
            result[4] += 0;
            result[5] += 1851279;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52184801;
            result[3] += 1502289;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52094677;
            result[5] += 1592413;
          } else {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15339168;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 52848230;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 838860;
            result[5] += 0;
          } else {
            result[0] += 7856647;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24879383;
            result[5] += 20951059;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 16686528;
            result[2] += 0;
            result[3] += 3627506;
            result[4] += 26118044;
            result[5] += 7255012;
          } else {
            result[0] += 60458;
            result[1] += 120916;
            result[2] += 0;
            result[3] += 2660171;
            result[4] += 2599712;
            result[5] += 48245831;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 492542;
            result[1] += 246271;
            result[2] += 2708981;
            result[3] += 10589655;
            result[4] += 1723897;
            result[5] += 37925743;
          } else {
            result[0] += 290200;
            result[1] += 580400;
            result[2] += 4353007;
            result[3] += 36275061;
            result[4] += 0;
            result[5] += 12188420;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 31317469;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22369621;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 33323022;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20364069;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 778073;
            result[1] += 18673770;
            result[2] += 6224590;
            result[3] += 778073;
            result[4] += 25676434;
            result[5] += 1556147;
          } else {
            result[0] += 48095764;
            result[1] += 258857;
            result[2] += 258857;
            result[3] += 880116;
            result[4] += 3624008;
            result[5] += 569486;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 962134;
            result[1] += 1346987;
            result[2] += 10968330;
            result[3] += 18665404;
            result[4] += 3463683;
            result[5] += 18280550;
          } else {
            result[0] += 32424876;
            result[1] += 0;
            result[2] += 13820439;
            result[3] += 1063110;
            result[4] += 6378664;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1533916;
            result[5] += 52153174;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 3976821;
            result[1] += 7953643;
            result[2] += 9942053;
            result[3] += 9942053;
            result[4] += 0;
            result[5] += 21872518;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10574730;
            result[3] += 39045157;
            result[4] += 0;
            result[5] += 4067203;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 2440322;
            result[1] += 0;
            result[2] += 47586285;
            result[3] += 2440322;
            result[4] += 0;
            result[5] += 1220161;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 19600049;
            result[4] += 0;
            result[5] += 3408704;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51246768;
            result[3] += 2440322;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40802189;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 2147483;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49503681;
            result[3] += 4183409;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49897414;
            result[3] += 3158064;
            result[4] += 0;
            result[5] += 631612;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53379134;
            result[3] += 307956;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52507155;
            result[5] += 1179936;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1760232;
            result[4] += 38725114;
            result[5] += 13201743;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 49213166;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 30973321;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22713769;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1997659;
            result[4] += 2684354;
            result[5] += 49005077;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1614649;
            result[1] += 403662;
            result[2] += 403662;
            result[3] += 14531844;
            result[4] += 6862259;
            result[5] += 29871013;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 45674092;
            result[4] += 0;
            result[5] += 8012998;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
            result[0] += 4704538;
            result[1] += 15774042;
            result[2] += 0;
            result[3] += 830212;
            result[4] += 28503971;
            result[5] += 3874326;
          } else {
            result[0] += 44540716;
            result[1] += 850825;
            result[2] += 212706;
            result[3] += 1914357;
            result[4] += 2977889;
            result[5] += 3190595;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 353204;
            result[2] += 3002238;
            result[3] += 28079761;
            result[4] += 353204;
            result[5] += 21898681;
          } else {
            result[0] += 14415978;
            result[1] += 994205;
            result[2] += 24358032;
            result[3] += 5219578;
            result[4] += 5468129;
            result[5] += 3231167;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9138228;
            result[3] += 0;
            result[4] += 2284557;
            result[5] += 42264305;
          } else {
            result[0] += 3677198;
            result[1] += 2206318;
            result[2] += 9560714;
            result[3] += 27211265;
            result[4] += 3677198;
            result[5] += 7354396;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 43925801;
            result[4] += 0;
            result[5] += 9761289;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 300768;
            result[1] += 0;
            result[2] += 47070194;
            result[3] += 5413824;
            result[4] += 0;
            result[5] += 902304;
          } else {
            result[0] += 102261;
            result[1] += 0;
            result[2] += 53073524;
            result[3] += 409044;
            result[4] += 0;
            result[5] += 102261;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 1158714;
            result[1] += 965595;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47121044;
            result[5] += 4441737;
          } else {
            result[0] += 0;
            result[1] += 44100110;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9586980;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 44142719;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2783775;
            result[4] += 6362914;
            result[5] += 397682;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1167110;
            result[3] += 0;
            result[4] += 49018648;
            result[5] += 3501332;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32212254;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1874549;
            result[4] += 674837;
            result[5] += 51137704;
          } else {
            result[0] += 1530553;
            result[1] += 941878;
            result[2] += 1295083;
            result[3] += 16600613;
            result[4] += 5298068;
            result[5] += 28020894;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43620761;
            result[5] += 1118481;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 16404388;
            result[1] += 8947848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28334853;
            result[5] += 0;
          } else {
            result[0] += 48196965;
            result[1] += 950214;
            result[2] += 316738;
            result[3] += 1794848;
            result[4] += 1900428;
            result[5] += 527896;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 586744;
            result[1] += 440058;
            result[2] += 6454185;
            result[3] += 24643254;
            result[4] += 1760232;
            result[5] += 19802615;
          } else {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 8202194;
            result[3] += 0;
            result[4] += 5219578;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 48806446;
            result[4] += 0;
            result[5] += 4880644;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 46976204;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29283867;
            result[3] += 9761289;
            result[4] += 1626881;
            result[5] += 13015052;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36026863;
            result[3] += 16247409;
            result[4] += 0;
            result[5] += 1412818;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49609590;
            result[3] += 2718333;
            result[4] += 0;
            result[5] += 1359166;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 1917396;
            result[1] += 0;
            result[2] += 24926149;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 1491308;
            result[1] += 0;
            result[2] += 48467512;
            result[3] += 3541856;
            result[4] += 0;
            result[5] += 186413;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51371177;
            result[3] += 2105376;
            result[4] += 0;
            result[5] += 210537;
          } else {
            result[0] += 189039;
            result[1] += 0;
            result[2] += 53498052;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53185342;
            result[5] += 501748;
          } else {
            result[0] += 14005328;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21007992;
            result[5] += 18673770;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1988410;
            result[1] += 662803;
            result[2] += 0;
            result[3] += 4639625;
            result[4] += 22535322;
            result[5] += 23860929;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3463683;
            result[3] += 1731841;
            result[4] += 43296041;
            result[5] += 5195524;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2177518;
            result[4] += 2027344;
            result[5] += 49482228;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 449264;
            result[2] += 0;
            result[3] += 8760655;
            result[4] += 8760655;
            result[5] += 35716516;
          } else {
            result[0] += 0;
            result[1] += 458864;
            result[2] += 0;
            result[3] += 30973321;
            result[4] += 2523752;
            result[5] += 19731153;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 1809677;
            result[2] += 0;
            result[3] += 1809677;
            result[4] += 50067736;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 40802189;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12884901;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 3834792;
            result[3] += 0;
            result[4] += 9586980;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53321872;
            result[2] += 0;
            result[3] += 0;
            result[4] += 365218;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 45634027;
            result[1] += 94187;
            result[2] += 47093;
            result[3] += 1836663;
            result[4] += 4238454;
            result[5] += 1836663;
          } else {
            result[0] += 0;
            result[1] += 51897521;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1789569;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 3950998;
            result[1] += 2556528;
            result[2] += 6042702;
            result[3] += 22079106;
            result[4] += 4415821;
            result[5] += 14641933;
          } else {
            result[0] += 10893032;
            result[1] += 778073;
            result[2] += 30344877;
            result[3] += 8558811;
            result[4] += 1037431;
            result[5] += 2074863;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4026531;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 44291850;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 14316557;
            result[3] += 7158278;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 41756626;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 2788939;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 10458524;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 23008753;
          } else {
            result[0] += 2091704;
            result[1] += 0;
            result[2] += 43925801;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50662466;
            result[3] += 3024624;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53089461;
            result[3] += 498024;
            result[4] += 0;
            result[5] += 99604;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53390477;
            result[5] += 296613;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 11671106;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4668442;
            result[4] += 30344877;
            result[5] += 7002664;
          } else {
            result[0] += 319946;
            result[1] += 63989;
            result[2] += 0;
            result[3] += 2239628;
            result[4] += 1727713;
            result[5] += 49335813;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20498707;
            result[5] += 33188383;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 39681763;
            result[4] += 0;
            result[5] += 14005328;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 3355443;
            result[1] += 6194664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43104539;
            result[5] += 1032444;
          } else {
            result[0] += 0;
            result[1] += 51246768;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2440322;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 43206344;
            result[1] += 684456;
            result[2] += 684456;
            result[3] += 2395599;
            result[4] += 3850070;
            result[5] += 2866163;
          } else {
            result[0] += 7889500;
            result[1] += 769707;
            result[2] += 9813769;
            result[3] += 19338898;
            result[4] += 4233390;
            result[5] += 11641824;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 53562815;
            result[2] += 0;
            result[3] += 0;
            result[4] += 124275;
            result[5] += 0;
          } else {
            result[0] += 10737418;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1451002;
            result[3] += 0;
            result[4] += 1451002;
            result[5] += 50785086;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 33554431;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10391049;
            result[3] += 42430120;
            result[4] += 0;
            result[5] += 865920;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
            result[0] += 21474836;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37025580;
            result[3] += 12958953;
            result[4] += 0;
            result[5] += 3702558;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 15339168;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7669584;
            result[4] += 30678337;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 1012963;
            result[1] += 0;
            result[2] += 43354858;
            result[3] += 8711490;
            result[4] += 0;
            result[5] += 607778;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 12632256;
            result[1] += 0;
            result[2] += 31580641;
            result[3] += 0;
            result[4] += 6316128;
            result[5] += 3158064;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52289418;
            result[3] += 1315457;
            result[4] += 0;
            result[5] += 82216;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
            result[0] += 8947848;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52992861;
            result[5] += 694229;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 46976204;
            result[5] += 0;
          } else {
            result[0] += 68917;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1791866;
            result[4] += 964851;
            result[5] += 50861454;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 7361775;
            result[1] += 1615999;
            result[2] += 0;
            result[3] += 6284442;
            result[4] += 9516440;
            result[5] += 28908433;
          } else {
            result[0] += 0;
            result[1] += 239674;
            result[2] += 2636419;
            result[3] += 37628898;
            result[4] += 958698;
            result[5] += 12223400;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
            result[0] += 6182149;
            result[1] += 14316557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33188383;
            result[5] += 0;
          } else {
            result[0] += 45551290;
            result[1] += 1470879;
            result[2] += 183859;
            result[3] += 1332984;
            result[4] += 4090882;
            result[5] += 1057194;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 843252;
            result[1] += 281084;
            result[2] += 1686505;
            result[3] += 21643487;
            result[4] += 3654095;
            result[5] += 25578666;
          } else {
            result[0] += 14824047;
            result[1] += 1602599;
            result[2] += 22837046;
            result[3] += 5208449;
            result[4] += 4807799;
            result[5] += 4407149;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13109638;
            result[4] += 3121342;
            result[5] += 37456110;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 16106127;
            result[4] += 0;
            result[5] += 10737418;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 8259552;
            result[1] += 45427538;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15070060;
            result[3] += 34849515;
            result[4] += 0;
            result[5] += 3767515;
          } else {
            result[0] += 3205199;
            result[1] += 0;
            result[2] += 33654594;
            result[3] += 11218198;
            result[4] += 2403899;
            result[5] += 3205199;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 8476909;
            result[2] += 8476909;
            result[3] += 0;
            result[4] += 0;
            result[5] += 36733272;
          } else {
            result[0] += 4880644;
            result[1] += 0;
            result[2] += 4880644;
            result[3] += 43925801;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 4353007;
            result[1] += 0;
            result[2] += 43530073;
            result[3] += 2902004;
            result[4] += 2902004;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 945195;
            result[1] += 0;
            result[2] += 44802255;
            result[3] += 6427327;
            result[4] += 0;
            result[5] += 1512312;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52849684;
            result[3] += 837406;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 208899;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51598099;
            result[5] += 1880092;
          } else {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13421772;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 51246768;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2440322;
            result[5] += 0;
          } else {
            result[0] += 706409;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5651272;
            result[4] += 16953818;
            result[5] += 30375591;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2417324;
            result[4] += 3035709;
            result[5] += 48234056;
          } else {
            result[0] += 0;
            result[1] += 9761289;
            result[2] += 0;
            result[3] += 21149460;
            result[4] += 13015052;
            result[5] += 9761289;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1412818;
            result[3] += 19073045;
            result[4] += 0;
            result[5] += 33201227;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 41465639;
            result[4] += 436480;
            result[5] += 11784971;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 5059516;
            result[1] += 25578666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22486739;
            result[5] += 562168;
          } else {
            result[0] += 46692483;
            result[1] += 602184;
            result[2] += 185287;
            result[3] += 787472;
            result[4] += 4539546;
            result[5] += 880116;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 2407492;
            result[2] += 5296484;
            result[3] += 23111931;
            result[4] += 4574236;
            result[5] += 18296945;
          } else {
            result[0] += 9628663;
            result[1] += 1167110;
            result[2] += 25676434;
            result[3] += 5543775;
            result[4] += 875333;
            result[5] += 10795773;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 53016002;
            result[2] += 0;
            result[3] += 134217;
            result[4] += 536870;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428e0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2147483;
            result[5] += 51539607;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9761289;
            result[4] += 4880644;
            result[5] += 39045157;
          } else {
            result[0] += 0;
            result[1] += 2982616;
            result[2] += 0;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 2982616;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42900000))) ) ) {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3834792;
            result[3] += 34513130;
            result[4] += 0;
            result[5] += 15339168;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28908433;
            result[3] += 12389328;
            result[4] += 0;
            result[5] += 12389328;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31661617;
            result[3] += 22025473;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48539013;
            result[3] += 3677198;
            result[4] += 0;
            result[5] += 1470879;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 925639;
            result[1] += 0;
            result[2] += 47392742;
            result[3] += 4813325;
            result[4] += 0;
            result[5] += 555383;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52640002;
            result[3] += 951898;
            result[4] += 0;
            result[5] += 95189;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 477218;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52494044;
            result[5] += 715827;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39370533;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 51352869;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2334221;
            result[5] += 0;
          } else {
            result[0] += 1556147;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21786065;
            result[5] += 30344877;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36909875;
            result[5] += 16777215;
          } else {
            result[0] += 0;
            result[1] += 309435;
            result[2] += 0;
            result[3] += 2011331;
            result[4] += 309435;
            result[5] += 51056887;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 427785;
            result[2] += 0;
            result[3] += 7914033;
            result[4] += 8555711;
            result[5] += 36789560;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40563580;
            result[4] += 0;
            result[5] += 13123511;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 50861454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2825636;
            result[5] += 0;
          } else {
            result[0] += 1660425;
            result[1] += 4981276;
            result[2] += 0;
            result[3] += 1106950;
            result[4] += 45384963;
            result[5] += 553475;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 53181800;
            result[2] += 0;
            result[3] += 0;
            result[4] += 505290;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 16106127;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 40802189;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12884901;
            result[5] += 0;
          } else {
            result[0] += 48068125;
            result[1] += 330527;
            result[2] += 47218;
            result[3] += 755491;
            result[4] += 3494146;
            result[5] += 991582;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 317675;
            result[2] += 2223725;
            result[3] += 21284231;
            result[4] += 4129776;
            result[5] += 25731682;
          } else {
            result[0] += 17602324;
            result[1] += 0;
            result[2] += 26403487;
            result[3] += 4400581;
            result[4] += 880116;
            result[5] += 4400581;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 5651272;
            result[2] += 0;
            result[3] += 14128181;
            result[4] += 31082000;
            result[5] += 2825636;
          } else {
            result[0] += 838860;
            result[1] += 0;
            result[2] += 1677721;
            result[3] += 4194303;
            result[4] += 0;
            result[5] += 46976204;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 39527858;
            result[4] += 589968;
            result[5] += 13569264;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 36909875;
            result[3] += 3355443;
            result[4] += 0;
            result[5] += 13421772;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 2396745;
            result[1] += 3834792;
            result[2] += 14859819;
            result[3] += 24926149;
            result[4] += 479349;
            result[5] += 7190235;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44921851;
            result[3] += 8765239;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 44291850;
            result[1] += 4026531;
            result[2] += 5368709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5651272;
            result[1] += 8476909;
            result[2] += 22605091;
            result[3] += 0;
            result[4] += 14128181;
            result[5] += 2825636;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 488064;
            result[1] += 0;
            result[2] += 22939029;
            result[3] += 26355481;
            result[4] += 0;
            result[5] += 3904515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41485479;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 3253763;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50933907;
            result[3] += 2753184;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51130563;
            result[3] += 2556528;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 443694;
            result[1] += 0;
            result[2] += 44813191;
            result[3] += 8430204;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51068208;
            result[3] += 2618882;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 126322;
            result[1] += 0;
            result[2] += 53560768;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 1056832;
            result[1] += 211366;
            result[2] += 211366;
            result[3] += 0;
            result[4] += 50305227;
            result[5] += 1902298;
          } else {
            result[0] += 22215348;
            result[1] += 925639;
            result[2] += 0;
            result[3] += 4165377;
            result[4] += 10182034;
            result[5] += 16198691;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 130625;
            result[2] += 0;
            result[3] += 1959382;
            result[4] += 3265638;
            result[5] += 48331444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25438941;
            result[4] += 1248537;
            result[5] += 26999612;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 5167741;
            result[1] += 19522578;
            result[2] += 0;
            result[3] += 574193;
            result[4] += 28135480;
            result[5] += 287096;
          } else {
            result[0] += 47107323;
            result[1] += 238397;
            result[2] += 238397;
            result[3] += 1430384;
            result[4] += 3671319;
            result[5] += 1001269;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 187717;
            result[1] += 2440322;
            result[2] += 8447269;
            result[3] += 23652354;
            result[4] += 3003473;
            result[5] += 15955953;
          } else {
            result[0] += 24269506;
            result[1] += 0;
            result[2] += 19856869;
            result[3] += 3309478;
            result[4] += 5148077;
            result[5] += 1103159;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2236962;
            result[3] += 2236962;
            result[4] += 0;
            result[5] += 49213166;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5553837;
            result[3] += 27769185;
            result[4] += 0;
            result[5] += 20364069;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 6710886;
          } else {
            result[0] += 0;
            result[1] += 38347922;
            result[2] += 15339168;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 20878313;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49710269;
            result[3] += 3976821;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22369621;
            result[3] += 15658734;
            result[4] += 0;
            result[5] += 15658734;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39505595;
            result[3] += 14181495;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49334083;
            result[3] += 4353007;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 5965232;
            result[1] += 0;
            result[2] += 38774010;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 73143;
            result[1] += 0;
            result[2] += 52663086;
            result[3] += 877718;
            result[4] += 0;
            result[5] += 73143;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 862443;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52177815;
            result[5] += 646832;
          } else {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 994205;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3976821;
            result[4] += 13918875;
            result[5] += 34797188;
          } else {
            result[0] += 52310499;
            result[1] += 1376592;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 16777215;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30198988;
            result[5] += 6710886;
          } else {
            result[0] += 0;
            result[1] += 71297;
            result[2] += 0;
            result[3] += 1283356;
            result[4] += 1283356;
            result[5] += 51049080;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 795364;
            result[1] += 1988410;
            result[2] += 1789569;
            result[3] += 14714239;
            result[4] += 3579139;
            result[5] += 30820367;
          } else {
            result[0] += 315806;
            result[1] += 631612;
            result[2] += 0;
            result[3] += 36949350;
            result[4] += 631612;
            result[5] += 15158708;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 4737096;
            result[1] += 3158064;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45791930;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 5965232;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2206318;
            result[1] += 6986676;
            result[2] += 1103159;
            result[3] += 367719;
            result[4] += 41184617;
            result[5] += 1838599;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 45401750;
            result[1] += 143676;
            result[2] += 526813;
            result[3] += 2011469;
            result[4] += 3639802;
            result[5] += 1963577;
          } else {
            result[0] += 8121893;
            result[1] += 275318;
            result[2] += 13352943;
            result[3] += 15142512;
            result[4] += 3166161;
            result[5] += 13628261;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 51002736;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24403223;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 24403223;
          } else {
            result[0] += 2640348;
            result[1] += 880116;
            result[2] += 7040929;
            result[3] += 37844998;
            result[4] += 880116;
            result[5] += 4400581;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38891436;
            result[3] += 12681990;
            result[4] += 0;
            result[5] += 2113665;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 0;
            result[4] += 3579139;
            result[5] += 3579139;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 46976204;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 321095;
            result[1] += 0;
            result[2] += 50540359;
            result[3] += 2504541;
            result[4] += 0;
            result[5] += 321095;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 240749;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53446341;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
            result[0] += 7158278;
            result[1] += 46528812;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 801299;
            result[1] += 4006499;
            result[2] += 801299;
            result[3] += 6410398;
            result[4] += 23237696;
            result[5] += 18429896;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47370962;
            result[5] += 6316128;
          } else {
            result[0] += 77358;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1624537;
            result[4] += 1160383;
            result[5] += 50824811;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 15007630;
            result[1] += 309435;
            result[2] += 0;
            result[3] += 6343431;
            result[4] += 9747224;
            result[5] += 22279369;
          } else {
            result[0] += 3364204;
            result[1] += 140175;
            result[2] += 1541926;
            result[3] += 27334158;
            result[4] += 1401751;
            result[5] += 19904874;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b80000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 14278481;
            result[2] += 0;
            result[3] += 571139;
            result[4] += 38837470;
            result[5] += 0;
          } else {
            result[0] += 45549849;
            result[1] += 841783;
            result[2] += 514423;
            result[3] += 1496504;
            result[4] += 3694494;
            result[5] += 1590035;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 2319812;
            result[1] += 2982616;
            result[2] += 4971026;
            result[3] += 10604857;
            result[4] += 8285044;
            result[5] += 24523733;
          } else {
            result[0] += 4915015;
            result[1] += 0;
            result[2] += 33270873;
            result[3] += 7561562;
            result[4] += 2268468;
            result[5] += 5671171;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 1988410;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 51698680;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 45634027;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 4473924;
            result[1] += 0;
            result[2] += 29080507;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 11184810;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 2147483;
            result[1] += 0;
            result[2] += 38654705;
            result[3] += 8589934;
            result[4] += 0;
            result[5] += 4294967;
          } else {
            result[0] += 34164512;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 0;
            result[4] += 9761289;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 38347922;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 41756626;
            result[4] += 0;
            result[5] += 2982616;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 24403223;
          } else {
            result[0] += 1789569;
            result[1] += 0;
            result[2] += 46528812;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29283867;
            result[3] += 0;
            result[4] += 0;
            result[5] += 24403223;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48636771;
            result[3] += 4720950;
            result[4] += 0;
            result[5] += 329368;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 11302545;
            result[1] += 0;
            result[2] += 42384545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53406006;
            result[3] += 281084;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 196656;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52507155;
            result[5] += 983280;
          } else {
            result[0] += 0;
            result[1] += 53687091;
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
            result[3] += 0;
            result[4] += 23008753;
            result[5] += 30678337;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 32655034;
            result[1] += 6641702;
            result[2] += 0;
            result[3] += 1106950;
            result[4] += 9962553;
            result[5] += 3320851;
          } else {
            result[0] += 52945;
            result[1] += 211783;
            result[2] += 52945;
            result[3] += 4765126;
            result[4] += 2170779;
            result[5] += 46433509;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 250874;
            result[3] += 39889007;
            result[4] += 0;
            result[5] += 13547209;
          } else {
            result[0] += 1052688;
            result[1] += 0;
            result[2] += 16843009;
            result[3] += 8421504;
            result[4] += 2105376;
            result[5] += 25264513;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 3006477;
            result[1] += 6442450;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43808666;
            result[5] += 429496;
          } else {
            result[0] += 0;
            result[1] += 47139884;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6547206;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 53551174;
            result[2] += 0;
            result[3] += 0;
            result[4] += 135916;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
            result[0] += 13884592;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12033313;
            result[4] += 10182034;
            result[5] += 17587150;
          } else {
            result[0] += 48788080;
            result[1] += 404042;
            result[2] += 757578;
            result[3] += 1313136;
            result[4] += 2070715;
            result[5] += 353536;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 2470953;
            result[1] += 1797057;
            result[2] += 3594114;
            result[3] += 18419838;
            result[4] += 8985287;
            result[5] += 18419838;
          } else {
            result[0] += 21786065;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 4668442;
            result[4] += 0;
            result[5] += 389036;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 2334221;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5835553;
            result[4] += 8169774;
            result[5] += 37347541;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8947848;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 1894838;
            result[2] += 10105805;
            result[3] += 37896770;
            result[4] += 631612;
            result[5] += 3158064;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42730541;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 3286964;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 50704475;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12389328;
            result[3] += 41297762;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35174301;
            result[3] += 18512790;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45427538;
            result[3] += 8259552;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 3158064;
            result[1] += 0;
            result[2] += 47370962;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3158064;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 261888;
            result[1] += 0;
            result[2] += 48449326;
            result[3] += 4975876;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 108240;
            result[1] += 0;
            result[2] += 53470610;
            result[3] += 108240;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d20000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42f50000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
            result[0] += 14641933;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34164512;
            result[5] += 4880644;
          } else {
            result[0] += 179555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52968869;
            result[5] += 538666;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2684354;
            result[4] += 34896609;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 916422;
            result[4] += 1603739;
            result[5] += 51166929;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
            result[0] += 283309;
            result[1] += 1133236;
            result[2] += 283309;
            result[3] += 13457186;
            result[4] += 3541364;
            result[5] += 34988684;
          } else {
            result[0] += 9474192;
            result[1] += 0;
            result[2] += 1353456;
            result[3] += 6316128;
            result[4] += 21655297;
            result[5] += 14888016;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 47934902;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5752188;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 11504376;
            result[2] += 1917396;
            result[3] += 2876094;
            result[4] += 36430526;
            result[5] += 958698;
          } else {
            result[0] += 0;
            result[1] += 45427538;
            result[2] += 0;
            result[3] += 2064888;
            result[4] += 6194664;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 3038891;
            result[1] += 31401883;
            result[2] += 0;
            result[3] += 6077783;
            result[4] += 12155567;
            result[5] += 1012963;
          } else {
            result[0] += 47558906;
            result[1] += 261888;
            result[2] += 314265;
            result[3] += 2252238;
            result[4] += 2304616;
            result[5] += 995175;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1253395;
            result[1] += 417798;
            result[2] += 6475874;
            result[3] += 23814507;
            result[4] += 1044495;
            result[5] += 20681019;
          } else {
            result[0] += 39728447;
            result[1] += 1073741;
            result[2] += 3221225;
            result[3] += 0;
            result[4] += 7516192;
            result[5] += 2147483;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 1937163;
            result[2] += 6918439;
            result[3] += 33485247;
            result[4] += 0;
            result[5] += 11346240;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46366124;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7320966;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28908433;
            result[3] += 20648881;
            result[4] += 0;
            result[5] += 4129776;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 3834792;
            result[4] += 0;
            result[5] += 3834792;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 39558909;
            result[1] += 0;
            result[2] += 14128181;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 2300875;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 11504376;
            result[4] += 1533916;
            result[5] += 6135667;
          } else {
            result[0] += 1120939;
            result[1] += 0;
            result[2] += 49498318;
            result[3] += 2713852;
            result[4] += 0;
            result[5] += 353980;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 526344;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53160747;
            result[5] += 0;
          } else {
            result[0] += 4129776;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33038209;
            result[5] += 16519104;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 2556528;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48574034;
            result[5] += 2556528;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 26843545;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          } else {
            result[0] += 172258;
            result[1] += 631612;
            result[2] += 0;
            result[3] += 3559999;
            result[4] += 3215483;
            result[5] += 46107737;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 5752188;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5752188;
            result[4] += 0;
            result[5] += 42182714;
          } else {
            result[0] += 290200;
            result[1] += 0;
            result[2] += 290200;
            result[3] += 38306465;
            result[4] += 0;
            result[5] += 14800225;
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
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 53568837;
            result[2] += 0;
            result[3] += 0;
            result[4] += 118253;
            result[5] += 0;
          } else {
            result[0] += 13421772;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 5070447;
            result[1] += 8351325;
            result[2] += 298261;
            result[3] += 894784;
            result[4] += 36089655;
            result[5] += 2982616;
          } else {
            result[0] += 47960468;
            result[1] += 811271;
            result[2] += 0;
            result[3] += 1288490;
            result[4] += 2863311;
            result[5] += 763549;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 2295829;
            result[1] += 1059613;
            result[2] += 14128181;
            result[3] += 17483625;
            result[4] += 4061852;
            result[5] += 14657988;
          } else {
            result[0] += 39937958;
            result[1] += 0;
            result[2] += 3928323;
            result[3] += 0;
            result[4] += 9820809;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2386092;
            result[4] += 0;
            result[5] += 51300998;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ec0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43620761;
            result[3] += 3355443;
            result[4] += 0;
            result[5] += 6710886;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 745654;
            result[3] += 40265318;
            result[4] += 745654;
            result[5] += 11930464;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 501748;
            result[1] += 0;
            result[2] += 23080431;
            result[3] += 24585677;
            result[4] += 0;
            result[5] += 5519233;
          } else {
            result[0] += 10391049;
            result[1] += 0;
            result[2] += 43296041;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5368709;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 4473924;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 12884901;
            result[1] += 2147483;
            result[2] += 38654705;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 46017506;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45076897;
            result[3] += 8103711;
            result[4] += 0;
            result[5] += 506481;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52538704;
            result[3] += 1004838;
            result[4] += 0;
            result[5] += 143548;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 3158064;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41054834;
            result[5] += 9474192;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 17895697;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50529027;
            result[5] += 3158064;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 838860;
            result[4] += 587202;
            result[5] += 52261027;
          } else {
            result[0] += 0;
            result[1] += 2042443;
            result[2] += 0;
            result[3] += 4084887;
            result[4] += 5251998;
            result[5] += 42307762;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
            result[0] += 23685481;
            result[1] += 6316128;
            result[2] += 0;
            result[3] += 9474192;
            result[4] += 11053224;
            result[5] += 3158064;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 801299;
            result[3] += 5208449;
            result[4] += 4407149;
            result[5] += 43270192;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42599539;
            result[4] += 291777;
            result[5] += 10795773;
          } else {
            result[0] += 1704352;
            result[1] += 852176;
            result[2] += 7669584;
            result[3] += 17895697;
            result[4] += 1704352;
            result[5] += 23860929;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 51698680;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1988410;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 14490763;
            result[1] += 4513516;
            result[2] += 0;
            result[3] += 712660;
            result[4] += 31119508;
            result[5] += 2850642;
          } else {
            result[0] += 47961908;
            result[1] += 972200;
            result[2] += 0;
            result[3] += 1188245;
            result[4] += 2484513;
            result[5] += 1080223;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 894784;
            result[1] += 1342177;
            result[2] += 0;
            result[3] += 31317469;
            result[4] += 0;
            result[5] += 20132659;
          } else {
            result[0] += 23860929;
            result[1] += 1325607;
            result[2] += 19552706;
            result[3] += 3645419;
            result[4] += 3976821;
            result[5] += 1325607;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2236962;
            result[3] += 2236962;
            result[4] += 2236962;
            result[5] += 46976204;
          } else {
            result[0] += 0;
            result[1] += 1206451;
            result[2] += 9048386;
            result[3] += 35288706;
            result[4] += 301612;
            result[5] += 7841934;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 2403899;
            result[1] += 2403899;
            result[2] += 2403899;
            result[3] += 3205199;
            result[4] += 17628597;
            result[5] += 25641595;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28831956;
            result[3] += 14913080;
            result[4] += 1988410;
            result[5] += 7953643;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 39370533;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 553475;
            result[1] += 0;
            result[2] += 37636311;
            result[3] += 11622978;
            result[4] += 553475;
            result[5] += 3320851;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 368140;
            result[1] += 0;
            result[2] += 50312474;
            result[3] += 2699693;
            result[4] += 0;
            result[5] += 306783;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 419430;
            result[1] += 209715;
            result[2] += 0;
            result[3] += 1887436;
            result[4] += 48024780;
            result[5] += 3145727;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 19327352;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27917287;
            result[5] += 6442450;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2422466;
            result[4] += 1833217;
            result[5] += 49431407;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 39045157;
            result[1] += 1626881;
            result[2] += 1626881;
            result[3] += 0;
            result[4] += 11388170;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 551579;
            result[2] += 1103159;
            result[3] += 27395125;
            result[4] += 1103159;
            result[5] += 23534067;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 10066329;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43620761;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 53560470;
            result[2] += 0;
            result[3] += 0;
            result[4] += 126620;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
            result[0] += 36559920;
            result[1] += 2140896;
            result[2] += 411710;
            result[3] += 1152790;
            result[4] += 11774929;
            result[5] += 1646843;
          } else {
            result[0] += 2831597;
            result[1] += 1132639;
            result[2] += 7248889;
            result[3] += 16083474;
            result[4] += 5776459;
            result[5] += 20614030;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 51094723;
            result[1] += 668998;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1923369;
            result[5] += 0;
          } else {
            result[0] += 11784971;
            result[1] += 0;
            result[2] += 37973796;
            result[3] += 1309441;
            result[4] += 1309441;
            result[5] += 1309441;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 9761289;
            result[2] += 39045157;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4880644;
          } else {
            result[0] += 766958;
            result[1] += 2300875;
            result[2] += 3834792;
            result[3] += 31445296;
            result[4] += 1533916;
            result[5] += 13805252;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 0;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 6710886;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 8053063;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 30678337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 23008753;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45250548;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 766958;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 31173149;
            result[1] += 1731841;
            result[2] += 20782099;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 194049;
            result[1] += 0;
            result[2] += 51164444;
            result[3] += 2263913;
            result[4] += 0;
            result[5] += 64683;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
            result[0] += 869426;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51730881;
            result[5] += 1086783;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 796544;
            result[4] += 1035507;
            result[5] += 51855039;
          } else {
            result[0] += 3355443;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8236087;
            result[4] += 12201611;
            result[5] += 29893948;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 6964811;
            result[1] += 3772606;
            result[2] += 290200;
            result[3] += 6094210;
            result[4] += 6094210;
            result[5] += 30471051;
          } else {
            result[0] += 0;
            result[1] += 547827;
            result[2] += 547827;
            result[3] += 37800094;
            result[4] += 273913;
            result[5] += 14517427;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 807324;
            result[1] += 20586779;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32292987;
            result[5] += 0;
          } else {
            result[0] += 44636224;
            result[1] += 1898474;
            result[2] += 662258;
            result[3] += 1721872;
            result[4] += 3090539;
            result[5] += 1677721;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 1293664;
            result[2] += 5390270;
            result[3] += 18758140;
            result[4] += 3665383;
            result[5] += 24579632;
          } else {
            result[0] += 13958643;
            result[1] += 805306;
            result[2] += 21474836;
            result[3] += 10468982;
            result[4] += 4831838;
            result[5] += 2147483;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 38347922;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 4473924;
            result[2] += 0;
            result[3] += 1491308;
            result[4] += 1491308;
            result[5] += 46230550;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2556528;
            result[3] += 51130563;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 3253763;
            result[1] += 9761289;
            result[2] += 13015052;
            result[3] += 6507526;
            result[4] += 0;
            result[5] += 21149460;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27633061;
            result[3] += 21316933;
            result[4] += 789516;
            result[5] += 3947580;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48035818;
            result[3] += 5247610;
            result[4] += 0;
            result[5] += 403662;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 29826161;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 5459704;
            result[1] += 0;
            result[2] += 43677633;
            result[3] += 3639802;
            result[4] += 909950;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51748390;
            result[3] += 1938700;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52504556;
            result[5] += 1182535;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 2440322;
            result[1] += 6100805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43925801;
            result[5] += 1220161;
          } else {
            result[0] += 25623384;
            result[1] += 5490725;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5490725;
            result[5] += 17082256;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 181375;
            result[2] += 0;
            result[3] += 634813;
            result[4] += 634813;
            result[5] += 52236088;
          } else {
            result[0] += 376751;
            result[1] += 0;
            result[2] += 188375;
            result[3] += 9795539;
            result[4] += 11302545;
            result[5] += 32023878;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 1470879;
            result[2] += 0;
            result[3] += 2941758;
            result[4] += 3677198;
            result[5] += 45597255;
          } else {
            result[0] += 1512312;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38185888;
            result[4] += 0;
            result[5] += 13988889;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 48806446;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4880644;
            result[5] += 0;
          } else {
            result[0] += 1664716;
            result[1] += 6658864;
            result[2] += 0;
            result[3] += 3329432;
            result[4] += 38704647;
            result[5] += 3329432;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 45441791;
            result[1] += 555862;
            result[2] += 277931;
            result[3] += 1250691;
            result[4] += 2964602;
            result[5] += 3196211;
          } else {
            result[0] += 9981262;
            result[1] += 453693;
            result[2] += 9981262;
            result[3] += 14669430;
            result[4] += 2268468;
            result[5] += 16332974;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 24403223;
            result[1] += 29283867;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 2191309;
            result[1] += 3286964;
            result[2] += 0;
            result[3] += 17530478;
            result[4] += 8765239;
            result[5] += 21913098;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1167110;
            result[3] += 2334221;
            result[4] += 3501332;
            result[5] += 46684427;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1894838;
            result[3] += 48634188;
            result[4] += 631612;
            result[5] += 2526451;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20817443;
            result[3] += 24104408;
            result[4] += 0;
            result[5] += 8765239;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22215348;
            result[3] += 24066627;
            result[4] += 0;
            result[5] += 7405116;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43745037;
            result[3] += 9942053;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 16519104;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32758225;
            result[3] += 7279605;
            result[4] += 909950;
            result[5] += 12739309;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 29826161;
            result[4] += 0;
            result[5] += 23860929;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 323416;
            result[1] += 0;
            result[2] += 46248518;
            result[3] += 6468324;
            result[4] += 161708;
            result[5] += 485124;
          } else {
            result[0] += 100726;
            result[1] += 0;
            result[2] += 52478376;
            result[3] += 906536;
            result[4] += 0;
            result[5] += 201452;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 6194664;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43362650;
            result[5] += 4129776;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 53687091;
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
            result[4] += 26843545;
            result[5] += 26843545;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42600000))) ) ) {
            result[0] += 45830443;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7856647;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 838860;
            result[2] += 0;
            result[3] += 2516582;
            result[4] += 30198988;
            result[5] += 20132659;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 2334221;
            result[2] += 0;
            result[3] += 7002664;
            result[4] += 23342213;
            result[5] += 21007992;
          } else {
            result[0] += 0;
            result[1] += 266768;
            result[2] += 0;
            result[3] += 1733993;
            result[4] += 1600608;
            result[5] += 50085721;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6419108;
            result[4] += 0;
            result[5] += 47267982;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 813440;
            result[3] += 13828493;
            result[4] += 5694085;
            result[5] += 33351071;
          } else {
            result[0] += 1723897;
            result[1] += 492542;
            result[2] += 738813;
            result[3] += 37433201;
            result[4] += 246271;
            result[5] += 13052366;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 14913080;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38774010;
            result[5] += 0;
          } else {
            result[0] += 3158064;
            result[1] += 47370962;
            result[2] += 0;
            result[3] += 3158064;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 51955249;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1731841;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 3067833;
            result[1] += 45250548;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4601750;
            result[5] += 766958;
          } else {
            result[0] += 610080;
            result[1] += 4880644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46976204;
            result[5] += 1220161;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 26171163;
            result[1] += 1137876;
            result[2] += 3620516;
            result[3] += 6103156;
            result[4] += 8482353;
            result[5] += 8172023;
          } else {
            result[0] += 46822184;
            result[1] += 0;
            result[2] += 1818906;
            result[3] += 1877581;
            result[4] += 2699023;
            result[5] += 469395;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 11671106;
            result[1] += 7002664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35013320;
            result[5] += 0;
          } else {
            result[0] += 706409;
            result[1] += 353204;
            result[2] += 6357681;
            result[3] += 29315977;
            result[4] += 353204;
            result[5] += 16600613;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 7158278;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37757954;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 8259552;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24211825;
            result[3] += 24211825;
            result[4] += 0;
            result[5] += 5263440;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48133254;
            result[3] += 3702558;
            result[4] += 1851279;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 123845;
            result[1] += 0;
            result[2] += 50714795;
            result[3] += 2476913;
            result[4] += 0;
            result[5] += 371536;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42360000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53380307;
            result[5] += 306783;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45356335;
            result[5] += 8330755;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 26843545;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 53687091;
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
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1315101;
            result[4] += 1005665;
            result[5] += 51366323;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 5368709;
            result[4] += 26843545;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 218240;
            result[1] += 4146563;
            result[2] += 0;
            result[3] += 9166088;
            result[4] += 6983686;
            result[5] += 33172511;
          } else {
            result[0] += 928842;
            result[1] += 0;
            result[2] += 2972295;
            result[3] += 30094494;
            result[4] += 743073;
            result[5] += 18948385;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 48318382;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1602599;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51283191;
            result[5] += 801299;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53266565;
            result[2] += 0;
            result[3] += 0;
            result[4] += 420525;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 3579139;
            result[1] += 4294967;
            result[2] += 0;
            result[3] += 5726623;
            result[4] += 35791394;
            result[5] += 4294967;
          } else {
            result[0] += 4129776;
            result[1] += 45427538;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4129776;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 48030685;
            result[1] += 195048;
            result[2] += 0;
            result[3] += 487621;
            result[4] += 4486114;
            result[5] += 487621;
          } else {
            result[0] += 17134178;
            result[1] += 1903797;
            result[2] += 6472911;
            result[3] += 12565063;
            result[4] += 7615190;
            result[5] += 7995949;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 2255760;
            result[2] += 1804608;
            result[3] += 7669584;
            result[4] += 7669584;
            result[5] += 34287554;
          } else {
            result[0] += 475107;
            result[1] += 3325749;
            result[2] += 9502140;
            result[3] += 23755350;
            result[4] += 1425321;
            result[5] += 15203424;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 20909709;
            result[1] += 0;
            result[2] += 24865600;
            result[3] += 1130254;
            result[4] += 5086145;
            result[5] += 1695381;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 1066630;
            result[1] += 0;
            result[2] += 23465880;
            result[3] += 20977075;
            result[4] += 0;
            result[5] += 8177503;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50026607;
            result[3] += 1220161;
            result[4] += 0;
            result[5] += 2440322;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 394758;
            result[1] += 0;
            result[2] += 41844350;
            result[3] += 9474192;
            result[4] += 0;
            result[5] += 1973790;
          } else {
            result[0] += 477521;
            result[1] += 0;
            result[2] += 51231264;
            result[3] += 1705434;
            result[4] += 0;
            result[5] += 272869;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42980000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 261888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52377649;
            result[5] += 1047552;
          } else {
            result[0] += 1491308;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37282702;
            result[5] += 14913080;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 23216039;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2902004;
            result[4] += 25392543;
            result[5] += 2176503;
          } else {
            result[0] += 232814;
            result[1] += 139688;
            result[2] += 186251;
            result[3] += 5354740;
            result[4] += 3026592;
            result[5] += 44747003;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 49357487;
            result[4] += 0;
            result[5] += 4329604;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6275114;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 0;
            result[4] += 32072807;
            result[5] += 0;
          } else {
            result[0] += 47024484;
            result[1] += 482797;
            result[2] += 337958;
            result[3] += 2076029;
            result[4] += 2220868;
            result[5] += 1544952;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 3912419;
            result[1] += 1304139;
            result[2] += 6303342;
            result[3] += 24996014;
            result[4] += 1956209;
            result[5] += 15214965;
          } else {
            result[0] += 19472001;
            result[1] += 1390857;
            result[2] += 24757259;
            result[3] += 2503543;
            result[4] += 3059886;
            result[5] += 2503543;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38347922;
            result[5] += 15339168;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1851279;
            result[3] += 3702558;
            result[4] += 0;
            result[5] += 48133254;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50861454;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2825636;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 1412818;
            result[1] += 1412818;
            result[2] += 5651272;
            result[3] += 32494818;
            result[4] += 0;
            result[5] += 12715363;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30678337;
            result[3] += 0;
            result[4] += 0;
            result[5] += 23008753;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34959036;
            result[3] += 17063339;
            result[4] += 0;
            result[5] += 1664716;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 3660483;
            result[1] += 2440322;
            result[2] += 28063706;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 492542;
            result[1] += 0;
            result[2] += 47776585;
            result[3] += 5417963;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40802189;
            result[3] += 12884901;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 85082;
            result[1] += 0;
            result[2] += 52240687;
            result[3] += 1361320;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 233422;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52053136;
            result[5] += 1400532;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 38347922;
            result[2] += 0;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 4473924;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 40265318;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45427538;
            result[5] += 8259552;
          } else {
            result[0] += 0;
            result[1] += 211644;
            result[2] += 0;
            result[3] += 1199317;
            result[4] += 987673;
            result[5] += 51288456;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1032444;
            result[4] += 9291996;
            result[5] += 3097332;
          } else {
            result[0] += 313348;
            result[1] += 104449;
            result[2] += 104449;
            result[3] += 19323174;
            result[4] += 5326929;
            result[5] += 28514739;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 479349;
            result[1] += 7190235;
            result[2] += 1917396;
            result[3] += 1438047;
            result[4] += 41703365;
            result[5] += 958698;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 41054834;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12632256;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 8834584;
            result[1] += 31260837;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13591668;
            result[5] += 0;
          } else {
            result[0] += 47256603;
            result[1] += 249243;
            result[2] += 149546;
            result[3] += 2193344;
            result[4] += 2442588;
            result[5] += 1395764;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 2448884;
            result[1] += 565127;
            result[2] += 12432800;
            result[3] += 20721333;
            result[4] += 1883757;
            result[5] += 15635187;
          } else {
            result[0] += 33234865;
            result[1] += 730436;
            result[2] += 14973950;
            result[3] += 0;
            result[4] += 1460873;
            result[5] += 3286964;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4294967;
            result[4] += 2147483;
            result[5] += 47244640;
          } else {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 8947848;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 10066329;
            result[2] += 30198988;
            result[3] += 6710886;
            result[4] += 3355443;
            result[5] += 3355443;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49058893;
            result[3] += 1851279;
            result[4] += 0;
            result[5] += 2776918;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12884901;
            result[3] += 38654705;
            result[4] += 0;
            result[5] += 2147483;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46815143;
            result[3] += 5153960;
            result[4] += 0;
            result[5] += 1717986;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47255825;
            result[3] += 6431266;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49557314;
            result[3] += 3494426;
            result[4] += 0;
            result[5] += 635350;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53290388;
            result[3] += 396702;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 188375;
            result[1] += 188375;
            result[2] += 0;
            result[3] += 376751;
            result[4] += 51238206;
            result[5] += 1695381;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 7158278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 46528812;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 35791394;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 50491430;
            result[1] += 1917396;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1278264;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 7561562;
            result[1] += 1512312;
            result[2] += 0;
            result[3] += 2268468;
            result[4] += 31002404;
            result[5] += 11342343;
          } else {
            result[0] += 58228;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3784881;
            result[4] += 2562073;
            result[5] += 47281906;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2684354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51002736;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 41634887;
            result[2] += 0;
            result[3] += 3286964;
            result[4] += 8765239;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42940000))) ) ) {
            result[0] += 16631327;
            result[1] += 5835553;
            result[2] += 875333;
            result[3] += 291777;
            result[4] += 26551767;
            result[5] += 3501332;
          } else {
            result[0] += 48402455;
            result[1] += 780684;
            result[2] += 60052;
            result[3] += 1261106;
            result[4] += 1801580;
            result[5] += 1381211;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 1273930;
            result[1] += 2274876;
            result[2] += 6187664;
            result[3] += 26479565;
            result[4] += 1910896;
            result[5] += 15560156;
          } else {
            result[0] += 34332088;
            result[1] += 921666;
            result[2] += 11290418;
            result[3] += 1382500;
            result[4] += 3686667;
            result[5] += 2073750;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 20132659;
            result[4] += 0;
            result[5] += 33554431;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 23008753;
            result[4] += 0;
            result[5] += 30678337;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35174301;
            result[3] += 7405116;
            result[4] += 0;
            result[5] += 11107674;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20782099;
            result[3] += 31173149;
            result[4] += 0;
            result[5] += 1731841;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41136862;
            result[3] += 11155759;
            result[4] += 0;
            result[5] += 1394469;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 13421772;
          } else {
            result[0] += 617093;
            result[1] += 0;
            result[2] += 50725044;
            result[3] += 1851279;
            result[4] += 0;
            result[5] += 493674;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 201075;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52882790;
            result[5] += 603225;
          } else {
            result[0] += 2147483;
            result[1] += 2147483;
            result[2] += 2147483;
            result[3] += 2147483;
            result[4] += 27917287;
            result[5] += 17179869;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 68653;
            result[1] += 68653;
            result[2] += 0;
            result[3] += 1510378;
            result[4] += 2402874;
            result[5] += 49636530;
          } else {
            result[0] += 5571301;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7090747;
            result[4] += 12662049;
            result[5] += 28362991;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 7273734;
            result[1] += 692736;
            result[2] += 0;
            result[3] += 12469259;
            result[4] += 2770946;
            result[5] += 30480413;
          } else {
            result[0] += 571139;
            result[1] += 285569;
            result[2] += 1713417;
            result[3] += 39694179;
            result[4] += 0;
            result[5] += 11422785;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 45674092;
            result[2] += 0;
            result[3] += 4006499;
            result[4] += 4006499;
            result[5] += 0;
          } else {
            result[0] += 5064819;
            result[1] += 6415438;
            result[2] += 675309;
            result[3] += 1350618;
            result[4] += 37142012;
            result[5] += 3038891;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 23869191;
            result[1] += 743588;
            result[2] += 5130760;
            result[3] += 9666650;
            result[4] += 2751277;
            result[5] += 11525622;
          } else {
            result[0] += 48680004;
            result[1] += 139085;
            result[2] += 1529943;
            result[3] += 208628;
            result[4] += 2642628;
            result[5] += 486800;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 0;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 16106127;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 48806446;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 39045157;
            result[4] += 0;
            result[5] += 4880644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 2556528;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49334083;
            result[3] += 4353007;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39426457;
            result[3] += 12582911;
            result[4] += 0;
            result[5] += 1677721;
          } else {
            result[0] += 201831;
            result[1] += 0;
            result[2] += 49785021;
            result[3] += 3162021;
            result[4] += 0;
            result[5] += 538216;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 48318382;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53207742;
            result[5] += 479349;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
            result[0] += 2477865;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28082478;
            result[5] += 23126746;
          } else {
            result[0] += 47721858;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 613066;
            result[4] += 875808;
            result[5] += 52198215;
          } else {
            result[0] += 195225;
            result[1] += 2928386;
            result[2] += 2147483;
            result[3] += 7613805;
            result[4] += 4099741;
            result[5] += 36702447;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12439691;
            result[4] += 1964161;
            result[5] += 39283237;
          } else {
            result[0] += 0;
            result[1] += 774333;
            result[2] += 2839221;
            result[3] += 36909875;
            result[4] += 0;
            result[5] += 13163661;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 654720;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51068208;
            result[5] += 1964161;
          } else {
            result[0] += 0;
            result[1] += 41297762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12389328;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42620000))) ) ) {
            result[0] += 124275;
            result[1] += 53438539;
            result[2] += 0;
            result[3] += 0;
            result[4] += 124275;
            result[5] += 0;
          } else {
            result[0] += 994205;
            result[1] += 30820367;
            result[2] += 0;
            result[3] += 9942053;
            result[4] += 9942053;
            result[5] += 1988410;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 17664784;
            result[1] += 8659208;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27016729;
            result[5] += 346368;
          } else {
            result[0] += 47931358;
            result[1] += 198473;
            result[2] += 347328;
            result[3] += 1041986;
            result[4] += 2530537;
            result[5] += 1637406;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 629145;
            result[1] += 209715;
            result[2] += 9437183;
            result[3] += 19293798;
            result[4] += 1468006;
            result[5] += 22649241;
          } else {
            result[0] += 27069121;
            result[1] += 1804608;
            result[2] += 15790320;
            result[3] += 2706912;
            result[4] += 5413824;
            result[5] += 902304;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 6710886;
            result[3] += 6710886;
            result[4] += 13421772;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 11302545;
            result[1] += 0;
            result[2] += 16953818;
            result[3] += 0;
            result[4] += 8476909;
            result[5] += 16953818;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4473924;
            result[3] += 45857723;
            result[4] += 0;
            result[5] += 3355443;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28633115;
            result[3] += 19685266;
            result[4] += 0;
            result[5] += 5368709;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 4473924;
            result[1] += 0;
            result[2] += 22369621;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51352869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2334221;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35516075;
            result[3] += 18171015;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 227487;
            result[1] += 0;
            result[2] += 47999899;
            result[3] += 5459704;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44650650;
            result[3] += 7441775;
            result[4] += 0;
            result[5] += 1594666;
          } else {
            result[0] += 1364926;
            result[1] += 0;
            result[2] += 50047288;
            result[3] += 1819901;
            result[4] += 0;
            result[5] += 454975;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47492426;
            result[3] += 6194664;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53412476;
            result[3] += 274614;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53443058;
            result[5] += 244032;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 43925801;
            result[5] += 4880644;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 5033164;
            result[2] += 0;
            result[3] += 1677721;
            result[4] += 36909875;
            result[5] += 10066329;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5113056;
            result[4] += 12782640;
            result[5] += 35791394;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 29981102;
            result[1] += 697234;
            result[2] += 0;
            result[3] += 2091704;
            result[4] += 18128108;
            result[5] += 2788939;
          } else {
            result[0] += 395173;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2935571;
            result[4] += 2822665;
            result[5] += 47533681;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 49852298;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3834792;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 161222;
            result[2] += 483667;
            result[3] += 29826161;
            result[4] += 1612224;
            result[5] += 21603814;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 852176;
            result[1] += 47721858;
            result[2] += 0;
            result[3] += 1704352;
            result[4] += 3408704;
            result[5] += 0;
          } else {
            result[0] += 6251236;
            result[1] += 9192995;
            result[2] += 735439;
            result[3] += 1470879;
            result[4] += 33830221;
            result[5] += 2206318;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
            result[0] += 46914862;
            result[1] += 736111;
            result[2] += 637963;
            result[3] += 1374075;
            result[4] += 2748150;
            result[5] += 1275927;
          } else {
            result[0] += 6669203;
            result[1] += 2500951;
            result[2] += 16339549;
            result[3] += 13338407;
            result[4] += 1667300;
            result[5] += 13171677;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 17895697;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 2236962;
            result[2] += 8947848;
            result[3] += 36909875;
            result[4] += 0;
            result[5] += 5592405;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42182714;
            result[3] += 11504376;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 26843545;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 44483589;
            result[1] += 0;
            result[2] += 9203501;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17179869;
            result[3] += 34359738;
            result[4] += 0;
            result[5] += 2147483;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42015984;
            result[3] += 10503996;
            result[4] += 0;
            result[5] += 1167110;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32808777;
            result[3] += 20878313;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51624761;
            result[3] += 1729695;
            result[4] += 0;
            result[5] += 332633;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 728784;
            result[1] += 1214640;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50043170;
            result[5] += 1700496;
          } else {
            result[0] += 43925801;
            result[1] += 1626881;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3253763;
            result[5] += 4880644;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16434823;
            result[5] += 37252267;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 273913;
            result[2] += 0;
            result[3] += 1575003;
            result[4] += 2122831;
            result[5] += 49715342;
          } else {
            result[0] += 0;
            result[1] += 1875531;
            result[2] += 0;
            result[3] += 12425396;
            result[4] += 4688828;
            result[5] += 34697334;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 45857723;
            result[4] += 0;
            result[5] += 7829367;
          } else {
            result[0] += 925639;
            result[1] += 0;
            result[2] += 7405116;
            result[3] += 9256395;
            result[4] += 925639;
            result[5] += 35174301;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38347922;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 4129776;
            result[1] += 3871665;
            result[2] += 774333;
            result[3] += 2322999;
            result[4] += 39490985;
            result[5] += 3097332;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 43904320;
            result[1] += 897935;
            result[2] += 330818;
            result[3] += 1417792;
            result[4] += 3875300;
            result[5] += 3260923;
          } else {
            result[0] += 12024220;
            result[1] += 2214988;
            result[2] += 11707793;
            result[3] += 16348721;
            result[4] += 2004036;
            result[5] += 9387330;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cc0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b80000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42eb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 48806446;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51450129;
            result[3] += 0;
            result[4] += 0;
            result[5] += 2236962;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48806446;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4880644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32808777;
            result[3] += 20878313;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 227487;
            result[1] += 0;
            result[2] += 45952510;
            result[3] += 6597142;
            result[4] += 0;
            result[5] += 909950;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 172074;
            result[1] += 0;
            result[2] += 52138425;
            result[3] += 1204518;
            result[4] += 0;
            result[5] += 172074;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 201075;
            result[1] += 201075;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51073112;
            result[5] += 2211827;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38347922;
            result[5] += 15339168;
          } else {
            result[0] += 76805;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1766528;
            result[4] += 998472;
            result[5] += 50845285;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
            result[0] += 19135992;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1063110;
            result[4] += 23919991;
            result[5] += 9567996;
          } else {
            result[0] += 1608138;
            result[1] += 123702;
            result[2] += 371108;
            result[3] += 23503565;
            result[4] += 1731841;
            result[5] += 26348733;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 11875485;
            result[1] += 9154020;
            result[2] += 0;
            result[3] += 989623;
            result[4] += 27709466;
            result[5] += 3958495;
          } else {
            result[0] += 46458129;
            result[1] += 530123;
            result[2] += 433737;
            result[3] += 1590371;
            result[4] += 1493985;
            result[5] += 3180743;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4210752;
            result[3] += 28422577;
            result[4] += 1052688;
            result[5] += 20001073;
          } else {
            result[0] += 9256395;
            result[1] += 2314098;
            result[2] += 24760856;
            result[3] += 8562165;
            result[4] += 3239738;
            result[5] += 5553837;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 17895697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3426835;
            result[3] += 3426835;
            result[4] += 3426835;
            result[5] += 43406584;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 20132659;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9395240;
            result[3] += 41607495;
            result[4] += 0;
            result[5] += 2684354;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 4880644;
            result[2] += 4880644;
            result[3] += 29283867;
            result[4] += 0;
            result[5] += 14641933;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40439627;
            result[3] += 10458524;
            result[4] += 0;
            result[5] += 2788939;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 778073;
            result[1] += 0;
            result[2] += 46100871;
            result[3] += 6030071;
            result[4] += 0;
            result[5] += 778073;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50571322;
            result[3] += 3115768;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 193816;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52524193;
            result[5] += 969081;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 16106127;
            result[4] += 21474836;
            result[5] += 16106127;
          } else {
            result[0] += 147087;
            result[1] += 0;
            result[2] += 294175;
            result[3] += 1176703;
            result[4] += 1838599;
            result[5] += 50230525;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 40485347;
            result[1] += 1760232;
            result[2] += 0;
            result[3] += 2640348;
            result[4] += 3520464;
            result[5] += 5280697;
          } else {
            result[0] += 488064;
            result[1] += 610080;
            result[2] += 610080;
            result[3] += 21474836;
            result[4] += 3660483;
            result[5] += 26843545;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 344148;
            result[1] += 52310499;
            result[2] += 0;
            result[3] += 229432;
            result[4] += 803012;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42260000))) ) ) {
            result[0] += 2684354;
            result[1] += 49660559;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1342177;
          } else {
            result[0] += 0;
            result[1] += 1533916;
            result[2] += 0;
            result[3] += 766958;
            result[4] += 50619257;
            result[5] += 766958;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
            result[0] += 46452660;
            result[1] += 237974;
            result[2] += 237974;
            result[3] += 1523038;
            result[4] += 4045569;
            result[5] += 1189873;
          } else {
            result[0] += 13143312;
            result[1] += 1336608;
            result[2] += 13588848;
            result[3] += 13366080;
            result[4] += 1670760;
            result[5] += 10581480;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 35791394;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 20878313;
            result[4] += 0;
            result[5] += 29826161;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2729852;
            result[3] += 40947781;
            result[4] += 0;
            result[5] += 10009457;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2684354;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 1193046;
            result[2] += 28633115;
            result[3] += 22667882;
            result[4] += 0;
            result[5] += 1193046;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 3463683;
            result[1] += 0;
            result[2] += 48491566;
            result[3] += 0;
            result[4] += 1731841;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 13421772;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 20132659;
            result[5] += 13421772;
          } else {
            result[0] += 189707;
            result[1] += 569121;
            result[2] += 44960567;
            result[3] += 6829453;
            result[4] += 0;
            result[5] += 1138242;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46976204;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53189066;
            result[3] += 498024;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 1731841;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39832357;
            result[5] += 12122891;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 28760941;
            result[1] += 3834792;
            result[2] += 1917396;
            result[3] += 0;
            result[4] += 17256565;
            result[5] += 1917396;
          } else {
            result[0] += 0;
            result[1] += 809934;
            result[2] += 0;
            result[3] += 2545508;
            result[4] += 2429803;
            result[5] += 47901844;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 715827;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 35075566;
          } else {
            result[0] += 1258291;
            result[1] += 0;
            result[2] += 419430;
            result[3] += 45298483;
            result[4] += 0;
            result[5] += 6710886;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x422e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3745611;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49317211;
            result[5] += 624268;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42820000))) ) ) {
            result[0] += 40981561;
            result[1] += 1121076;
            result[2] += 1245640;
            result[3] += 996512;
            result[4] += 7598405;
            result[5] += 1743896;
          } else {
            result[0] += 2721897;
            result[1] += 4317493;
            result[2] += 7696401;
            result[3] += 16612963;
            result[4] += 4035917;
            result[5] += 18302417;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
            result[0] += 14849620;
            result[1] += 10280506;
            result[2] += 0;
            result[3] += 1142278;
            result[4] += 27414684;
            result[5] += 0;
          } else {
            result[0] += 49914484;
            result[1] += 0;
            result[2] += 1233352;
            result[3] += 580400;
            result[4] += 1741202;
            result[5] += 217650;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 5368709;
            result[4] += 16106127;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1988410;
            result[3] += 9942053;
            result[4] += 0;
            result[5] += 41756626;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8476909;
            result[3] += 39558909;
            result[4] += 0;
            result[5] += 5651272;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13421772;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 925639;
            result[1] += 4628197;
            result[2] += 34248661;
            result[3] += 9256395;
            result[4] += 925639;
            result[5] += 3702558;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 783753;
            result[1] += 0;
            result[2] += 42518608;
            result[3] += 9013161;
            result[4] += 0;
            result[5] += 1371568;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44947332;
            result[3] += 8739759;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53232885;
            result[3] += 454205;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 264468;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52629217;
            result[5] += 793405;
          } else {
            result[0] += 7953643;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37779804;
            result[5] += 7953643;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34959036;
            result[5] += 18728055;
          } else {
            result[0] += 145296;
            result[1] += 0;
            result[2] += 145296;
            result[3] += 1743559;
            result[4] += 290593;
            result[5] += 51362345;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
            result[0] += 2119227;
            result[1] += 16247409;
            result[2] += 0;
            result[3] += 3532045;
            result[4] += 26137136;
            result[5] += 5651272;
          } else {
            result[0] += 5102931;
            result[1] += 0;
            result[2] += 531555;
            result[3] += 17541326;
            result[4] += 3295643;
            result[5] += 27215634;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51897521;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
            result[0] += 3914683;
            result[1] += 14540253;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34113672;
            result[5] += 1118481;
          } else {
            result[0] += 45274455;
            result[1] += 271375;
            result[2] += 407063;
            result[3] += 2216232;
            result[4] += 3166045;
            result[5] += 2351919;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 569624;
            result[1] += 1993685;
            result[2] += 11962110;
            result[3] += 22500160;
            result[4] += 1708872;
            result[5] += 14952638;
          } else {
            result[0] += 36064610;
            result[1] += 4917901;
            result[2] += 9835802;
            result[3] += 0;
            result[4] += 2868775;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42dc0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4880644;
            result[3] += 42298920;
            result[4] += 0;
            result[5] += 6507526;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31317469;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 4473924;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47179564;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 1626881;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2825636;
            result[1] += 0;
            result[2] += 44268303;
            result[3] += 3767515;
            result[4] += 0;
            result[5] += 2825636;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41595403;
            result[3] += 11124352;
            result[4] += 0;
            result[5] += 967334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50406213;
            result[3] += 2684354;
            result[4] += 0;
            result[5] += 596523;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50861454;
            result[3] += 2825636;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 51622203;
            result[2] += 0;
            result[3] += 2064888;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 186413;
            result[1] += 0;
            result[2] += 0;
            result[3] += 186413;
            result[4] += 52382196;
            result[5] += 932067;
          } else {
            result[0] += 4294967;
            result[1] += 4294967;
            result[2] += 0;
            result[3] += 8589934;
            result[4] += 10737418;
            result[5] += 25769803;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 52568610;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 559240;
            result[5] += 559240;
          } else {
            result[0] += 15486660;
            result[1] += 0;
            result[2] += 1032444;
            result[3] += 0;
            result[4] += 30973321;
            result[5] += 6194664;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 844516;
            result[1] += 60322;
            result[2] += 0;
            result[3] += 1508064;
            result[4] += 3981289;
            result[5] += 47292898;
          } else {
            result[0] += 1268199;
            result[1] += 422733;
            result[2] += 1479565;
            result[3] += 18177519;
            result[4] += 1690932;
            result[5] += 30648142;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 6573929;
            result[1] += 17530478;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28121809;
            result[5] += 1460873;
          } else {
            result[0] += 45606912;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 2657239;
            result[4] += 2060716;
            result[5] += 1572652;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 1002159;
            result[1] += 2576980;
            result[2] += 3149642;
            result[3] += 25197141;
            result[4] += 4724464;
            result[5] += 17036703;
          } else {
            result[0] += 22194663;
            result[1] += 599855;
            result[2] += 24594086;
            result[3] += 4198990;
            result[4] += 1499639;
            result[5] += 599855;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4382619;
            result[3] += 28487027;
            result[4] += 0;
            result[5] += 20817443;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 12632256;
            result[3] += 33159673;
            result[4] += 0;
            result[5] += 7895160;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43296041;
            result[3] += 6927366;
            result[4] += 0;
            result[5] += 3463683;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39881839;
            result[3] += 3067833;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 8947848;
            result[2] += 8947848;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 26843545;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 15339168;
            result[4] += 0;
            result[5] += 30678337;
          } else {
            result[0] += 294984;
            result[1] += 0;
            result[2] += 51150228;
            result[3] += 2182881;
            result[4] += 0;
            result[5] += 58996;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 43925801;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9761289;
            result[5] += 0;
          } else {
            result[0] += 563644;
            result[1] += 422733;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49459761;
            result[5] += 3240953;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 12526987;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41160103;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 49852298;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3834792;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 49984533;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3702558;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1433567;
            result[4] += 788461;
            result[5] += 51465062;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 766958;
            result[1] += 383479;
            result[2] += 1917396;
            result[3] += 9970459;
            result[4] += 3834792;
            result[5] += 36814005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 725501;
            result[3] += 38451565;
            result[4] += 0;
            result[5] += 14510024;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 46823812;
            result[1] += 812756;
            result[2] += 0;
            result[3] += 993369;
            result[4] += 3838017;
            result[5] += 1219134;
          } else {
            result[0] += 10421611;
            result[1] += 1263225;
            result[2] += 3789677;
            result[3] += 12632256;
            result[4] += 3473870;
            result[5] += 22106449;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 1064616;
            result[1] += 760440;
            result[2] += 5323082;
            result[3] += 27527941;
            result[4] += 3498025;
            result[5] += 15512983;
          } else {
            result[0] += 16625679;
            result[1] += 346368;
            result[2] += 23899414;
            result[3] += 2078209;
            result[4] += 4156419;
            result[5] += 6580998;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2825636;
            result[4] += 2825636;
            result[5] += 48035818;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 41297762;
            result[5] += 8259552;
          } else {
            result[0] += 8947848;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 0;
            result[4] += 0;
            result[5] += 38347922;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5711392;
            result[3] += 44548862;
            result[4] += 0;
            result[5] += 3426835;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ec0000))) ) ) {
            result[0] += 2497074;
            result[1] += 0;
            result[2] += 37456110;
            result[3] += 6242685;
            result[4] += 0;
            result[5] += 7491222;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 3067833;
            result[1] += 0;
            result[2] += 15339168;
            result[3] += 32212254;
            result[4] += 0;
            result[5] += 3067833;
          } else {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 7456540;
            result[4] += 0;
            result[5] += 2982616;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 34164512;
            result[4] += 0;
            result[5] += 9761289;
          } else {
            result[0] += 1491308;
            result[1] += 0;
            result[2] += 45298483;
            result[3] += 6524472;
            result[4] += 0;
            result[5] += 372827;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31724190;
            result[3] += 21962900;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52327924;
            result[3] += 1359166;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42990000))) ) ) {
            result[0] += 20132659;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53240628;
            result[3] += 334846;
            result[4] += 0;
            result[5] += 111615;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42100000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53037650;
            result[5] += 649440;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1220161;
            result[3] += 0;
            result[4] += 31724190;
            result[5] += 20742739;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 47721858;
            result[4] += 5965232;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 30678337;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23008753;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 57977;
            result[2] += 0;
            result[3] += 2435051;
            result[4] += 2782916;
            result[5] += 48411145;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 3869339;
            result[1] += 6771344;
            result[2] += 0;
            result[3] += 8706014;
            result[4] += 3869339;
            result[5] += 30471051;
          } else {
            result[0] += 1022611;
            result[1] += 255652;
            result[2] += 2045222;
            result[3] += 37836616;
            result[4] += 766958;
            result[5] += 11760029;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 36909875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16777215;
            result[5] += 0;
          } else {
            result[0] += 263172;
            result[1] += 53160747;
            result[2] += 0;
            result[3] += 131586;
            result[4] += 131586;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 42248453;
            result[1] += 745045;
            result[2] += 394435;
            result[3] += 1183307;
            result[4] += 8414629;
            result[5] += 701219;
          } else {
            result[0] += 0;
            result[1] += 48406393;
            result[2] += 0;
            result[3] += 2640348;
            result[4] += 2640348;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 1412818;
            result[1] += 1695381;
            result[2] += 9748445;
            result[3] += 18649200;
            result[4] += 2543072;
            result[5] += 19638172;
          } else {
            result[0] += 41365463;
            result[1] += 1760232;
            result[2] += 2640348;
            result[3] += 0;
            result[4] += 7921046;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 6710886;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 44739242;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 756156;
            result[1] += 0;
            result[2] += 43100904;
            result[3] += 7561562;
            result[4] += 0;
            result[5] += 2268468;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 4473924;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1080948;
            result[1] += 0;
            result[2] += 45760138;
            result[3] += 5945214;
            result[4] += 0;
            result[5] += 900790;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49498736;
            result[3] += 4188354;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53565075;
            result[3] += 122016;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 47721858;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51819714;
            result[5] += 1867377;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 801299;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 27244195;
            result[5] += 25641595;
          } else {
            result[0] += 0;
            result[1] += 33907636;
            result[2] += 0;
            result[3] += 19779454;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42660000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2508742;
            result[4] += 3386802;
            result[5] += 47791546;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 12565063;
            result[1] += 571139;
            result[2] += 2855696;
            result[3] += 3426835;
            result[4] += 6282531;
            result[5] += 27985824;
          } else {
            result[0] += 1747951;
            result[1] += 0;
            result[2] += 998829;
            result[3] += 36207573;
            result[4] += 249707;
            result[5] += 14483029;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 39063368;
            result[1] += 2003249;
            result[2] += 0;
            result[3] += 200324;
            result[4] += 10617223;
            result[5] += 1802924;
          } else {
            result[0] += 3373778;
            result[1] += 586744;
            result[2] += 7187616;
            result[3] += 19802615;
            result[4] += 4547267;
            result[5] += 18189069;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 45038090;
            result[1] += 2320463;
            result[2] += 369164;
            result[3] += 738329;
            result[4] += 5010092;
            result[5] += 210951;
          } else {
            result[0] += 8180890;
            result[1] += 2045222;
            result[2] += 29655726;
            result[3] += 6646973;
            result[4] += 5624361;
            result[5] += 1533916;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6135667;
            result[3] += 6135667;
            result[4] += 1533916;
            result[5] += 39881839;
          } else {
            result[0] += 0;
            result[1] += 4382619;
            result[2] += 6573929;
            result[3] += 31773992;
            result[4] += 0;
            result[5] += 10956549;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 26843545;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34134385;
            result[3] += 14581679;
            result[4] += 0;
            result[5] += 4971026;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 31082000;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2913253;
            result[1] += 0;
            result[2] += 47028227;
            result[3] += 3745611;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42384545;
            result[3] += 11302545;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 93045;
            result[1] += 0;
            result[2] += 52570548;
            result[3] += 1023497;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 299927;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52787307;
            result[5] += 599855;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 10503996;
            result[2] += 0;
            result[3] += 2334221;
            result[4] += 8169774;
            result[5] += 32679098;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1579032;
            result[2] += 0;
            result[3] += 0;
            result[4] += 30001609;
            result[5] += 22106449;
          } else {
            result[0] += 0;
            result[1] += 808337;
            result[2] += 0;
            result[3] += 2357651;
            result[4] += 2020844;
            result[5] += 48500258;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5195524;
            result[3] += 3463683;
            result[4] += 0;
            result[5] += 45027882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 36875981;
            result[4] += 542293;
            result[5] += 16268815;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 50861454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2825636;
            result[5] += 0;
          } else {
            result[0] += 2781714;
            result[1] += 6119772;
            result[2] += 0;
            result[3] += 3059886;
            result[4] += 38109489;
            result[5] += 3616228;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 46138119;
            result[1] += 347649;
            result[2] += 297985;
            result[3] += 893957;
            result[4] += 4271128;
            result[5] += 1738249;
          } else {
            result[0] += 14158333;
            result[1] += 1473121;
            result[2] += 3437283;
            result[3] += 14322013;
            result[4] += 4419364;
            result[5] += 15876975;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42740000))) ) ) {
            result[0] += 14641933;
            result[1] += 4880644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34164512;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 46976204;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 45691141;
            result[4] += 0;
            result[5] += 7995949;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40265318;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 3158064;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6316128;
            result[4] += 0;
            result[5] += 44212898;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19293798;
            result[3] += 25165823;
            result[4] += 0;
            result[5] += 9227468;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 9761289;
            result[3] += 14641933;
            result[4] += 0;
            result[5] += 29283867;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41237910;
            result[3] += 10893032;
            result[4] += 0;
            result[5] += 1556147;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 49557314;
            result[1] += 0;
            result[2] += 4129776;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 621858;
            result[1] += 0;
            result[2] += 44151932;
            result[3] += 8706014;
            result[4] += 0;
            result[5] += 207286;
          } else {
            result[0] += 156067;
            result[1] += 0;
            result[2] += 51502151;
            result[3] += 1638704;
            result[4] += 0;
            result[5] += 390167;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 40265318;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52159409;
            result[5] += 1527681;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 6710886;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 40265318;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 35791394;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 113743;
            result[2] += 0;
            result[3] += 2957339;
            result[4] += 3639802;
            result[5] += 46976204;
          } else {
            result[0] += 130625;
            result[1] += 261251;
            result[2] += 653127;
            result[3] += 24035096;
            result[4] += 2873761;
            result[5] += 25733228;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 2334221;
            result[1] += 23925768;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25676434;
            result[5] += 1750666;
          } else {
            result[0] += 49164002;
            result[1] += 688296;
            result[2] += 49164;
            result[3] += 835788;
            result[4] += 2851512;
            result[5] += 98328;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 1371568;
            result[1] += 783753;
            result[2] += 12540050;
            result[3] += 20573520;
            result[4] += 1763444;
            result[5] += 16654754;
          } else {
            result[0] += 37282702;
            result[1] += 497102;
            result[2] += 5965232;
            result[3] += 0;
            result[4] += 6959437;
            result[5] += 2982616;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cc0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1731841;
            result[3] += 48491566;
            result[4] += 0;
            result[5] += 3463683;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 0;
            result[5] += 49557314;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27656986;
            result[3] += 22776341;
            result[4] += 0;
            result[5] += 3253763;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51539607;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50107951;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3579139;
          } else {
            result[0] += 357913;
            result[1] += 0;
            result[2] += 34001824;
            result[3] += 18253611;
            result[4] += 0;
            result[5] += 1073741;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48765774;
            result[3] += 4921316;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 165700;
            result[1] += 0;
            result[2] += 51864381;
            result[3] += 1491308;
            result[4] += 0;
            result[5] += 165700;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 454975;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51412214;
            result[5] += 1819901;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 51002736;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2684354;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 880116;
            result[3] += 7040929;
            result[4] += 13201743;
            result[5] += 32564301;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3639802;
            result[4] += 24568668;
            result[5] += 25478619;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1675627;
            result[4] += 1206451;
            result[5] += 50805012;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 5592405;
            result[2] += 0;
            result[3] += 10625570;
            result[4] += 1118481;
            result[5] += 36350634;
          } else {
            result[0] += 1095654;
            result[1] += 821741;
            result[2] += 3286964;
            result[3] += 33143561;
            result[4] += 547827;
            result[5] += 14791341;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 9474192;
            result[2] += 0;
            result[3] += 3158064;
            result[4] += 41054834;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 53561946;
            result[2] += 0;
            result[3] += 0;
            result[4] += 125144;
            result[5] += 0;
          } else {
            result[0] += 23488102;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 3355443;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 24251754;
            result[1] += 3147174;
            result[2] += 185127;
            result[3] += 1110767;
            result[4] += 19808685;
            result[5] += 5183581;
          } else {
            result[0] += 46912534;
            result[1] += 2088397;
            result[2] += 203746;
            result[3] += 713111;
            result[4] += 3412746;
            result[5] += 356555;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 172074;
            result[1] += 1204518;
            result[2] += 5678442;
            result[3] += 20476807;
            result[4] += 688296;
            result[5] += 25466953;
          } else {
            result[0] += 21474836;
            result[1] += 1533916;
            result[2] += 14955689;
            result[3] += 3451313;
            result[4] += 9203501;
            result[5] += 3067833;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10490581;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 7405116;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49557314;
            result[3] += 4129776;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 40265318;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30097308;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 4067203;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50529027;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3158064;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44885928;
            result[3] += 8214418;
            result[4] += 0;
            result[5] += 586744;
          } else {
            result[0] += 169627;
            result[1] += 0;
            result[2] += 52245257;
            result[3] += 1102578;
            result[4] += 0;
            result[5] += 169627;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2440322;
            result[1] += 0;
            result[2] += 51246768;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 40728138;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12958953;
            result[5] += 0;
          } else {
            result[0] += 183859;
            result[1] += 183859;
            result[2] += 0;
            result[3] += 551579;
            result[4] += 48539013;
            result[5] += 4228777;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 4129776;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20648881;
            result[5] += 28908433;
          } else {
            result[0] += 52009369;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1677721;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45427538;
            result[5] += 8259552;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2416296;
            result[4] += 1359166;
            result[5] += 49911627;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 865920;
            result[2] += 216480;
            result[3] += 8659208;
            result[4] += 12555851;
            result[5] += 31389629;
          } else {
            result[0] += 2880770;
            result[1] += 0;
            result[2] += 1309441;
            result[3] += 34045472;
            result[4] += 785664;
            result[5] += 14665741;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1677721;
            result[1] += 52009369;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 6044242;
            result[1] += 7466416;
            result[2] += 0;
            result[3] += 7110873;
            result[4] += 32710015;
            result[5] += 355543;
          } else {
            result[0] += 48642666;
            result[1] += 617684;
            result[2] += 154421;
            result[3] += 978000;
            result[4] += 2522212;
            result[5] += 772105;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 649440;
            result[1] += 3030722;
            result[2] += 5195524;
            result[3] += 17318416;
            result[4] += 1082401;
            result[5] += 26410585;
          } else {
            result[0] += 19396626;
            result[1] += 1731841;
            result[2] += 22167573;
            result[3] += 1385473;
            result[4] += 4849156;
            result[5] += 4156419;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3158064;
            result[4] += 0;
            result[5] += 50529027;
          } else {
            result[0] += 0;
            result[1] += 15339168;
            result[2] += 0;
            result[3] += 2556528;
            result[4] += 25565281;
            result[5] += 10226112;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7743330;
            result[3] += 36135542;
            result[4] += 0;
            result[5] += 9808218;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29826161;
            result[3] += 2982616;
            result[4] += 0;
            result[5] += 20878313;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34465786;
            result[3] += 16570089;
            result[4] += 0;
            result[5] += 2651214;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0;
            result[1] += 2556528;
            result[2] += 20452225;
            result[3] += 5113056;
            result[4] += 0;
            result[5] += 25565281;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 5280697;
            result[1] += 0;
            result[2] += 33444417;
            result[3] += 14081859;
            result[4] += 0;
            result[5] += 880116;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38774010;
            result[3] += 13918875;
            result[4] += 0;
            result[5] += 994205;
          } else {
            result[0] += 2334221;
            result[1] += 0;
            result[2] += 49018648;
            result[3] += 2334221;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 32212254;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51937289;
            result[3] += 1511192;
            result[4] += 0;
            result[5] += 238609;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 40265318;
            result[1] += 13421772;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
            result[0] += 53687091;
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
            result[4] += 52489609;
            result[5] += 1197481;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42600000))) ) ) {
            result[0] += 50465865;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3221225;
            result[5] += 0;
          } else {
            result[0] += 52022;
            result[1] += 208089;
            result[2] += 0;
            result[3] += 3433476;
            result[4] += 3589543;
            result[5] += 46403958;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 15032385;
            result[4] += 1073741;
            result[5] += 37580963;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 45634027;
            result[4] += 0;
            result[5] += 8053063;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 1248537;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52438554;
            result[5] += 0;
          } else {
            result[0] += 26843545;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 53563102;
            result[2] += 0;
            result[3] += 0;
            result[4] += 123988;
            result[5] += 0;
          } else {
            result[0] += 1118481;
            result[1] += 32435950;
            result[2] += 2236962;
            result[3] += 1118481;
            result[4] += 16777215;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 8053063;
            result[1] += 24159191;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 46900801;
            result[1] += 301612;
            result[2] += 351881;
            result[3] += 1859946;
            result[4] += 2463171;
            result[5] += 1809677;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 1370734;
            result[1] += 1370734;
            result[2] += 9138228;
            result[3] += 21246380;
            result[4] += 1599189;
            result[5] += 18961823;
          } else {
            result[0] += 28929831;
            result[1] += 278171;
            result[2] += 18081144;
            result[3] += 1947200;
            result[4] += 2781714;
            result[5] += 1669028;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 0;
            result[5] += 49213166;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 44739242;
            result[4] += 1118481;
            result[5] += 1118481;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19327352;
            result[3] += 27917287;
            result[4] += 0;
            result[5] += 6442450;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 3834792;
            result[2] += 13421772;
            result[3] += 11504376;
            result[4] += 0;
            result[5] += 24926149;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 14913080;
            result[4] += 0;
            result[5] += 2982616;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1193046;
            result[1] += 0;
            result[2] += 48914905;
            result[3] += 3579139;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 10324440;
            result[1] += 2064888;
            result[2] += 16519104;
            result[3] += 0;
            result[4] += 2064888;
            result[5] += 22713769;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11930464;
            result[3] += 41756626;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1278264;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 5113056;
            result[4] += 0;
            result[5] += 6391320;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 841490;
            result[1] += 0;
            result[2] += 47964956;
            result[3] += 4880644;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52626081;
            result[3] += 1061009;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47492426;
            result[5] += 6194664;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4473924;
            result[5] += 49213166;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2440322;
            result[4] += 36604834;
            result[5] += 14641933;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52236088;
            result[5] += 1451002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 69095;
            result[3] += 2280146;
            result[4] += 1796479;
            result[5] += 49541369;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 32072807;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18825343;
            result[5] += 2788939;
          } else {
            result[0] += 0;
            result[1] += 1419610;
            result[2] += 129055;
            result[3] += 20390770;
            result[4] += 4516942;
            result[5] += 27230712;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 5856773;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47830317;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 43460978;
            result[2] += 0;
            result[3] += 2556528;
            result[4] += 7669584;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 1220161;
            result[1] += 34164512;
            result[2] += 2440322;
            result[3] += 0;
            result[4] += 15862095;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53428980;
            result[2] += 0;
            result[3] += 258111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 47252683;
            result[1] += 603225;
            result[2] += 0;
            result[3] += 854569;
            result[4] += 4021504;
            result[5] += 955107;
          } else {
            result[0] += 2147483;
            result[1] += 51539607;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 692736;
            result[1] += 1039104;
            result[2] += 8659208;
            result[3] += 25631256;
            result[4] += 2078209;
            result[5] += 15586574;
          } else {
            result[0] += 23522694;
            result[1] += 7195177;
            result[2] += 15497304;
            result[3] += 3044113;
            result[4] += 2213900;
            result[5] += 2213900;
          }
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2556528;
            result[5] += 51130563;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11302545;
            result[4] += 31082000;
            result[5] += 11302545;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 375434;
            result[1] += 0;
            result[2] += 6757815;
            result[3] += 28532999;
            result[4] += 750868;
            result[5] += 17269973;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 34513130;
            result[3] += 0;
            result[4] += 0;
            result[5] += 19173961;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 4880644;
            result[2] += 2440322;
            result[3] += 7320966;
            result[4] += 7320966;
            result[5] += 31724190;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27917287;
            result[3] += 4294967;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 671088;
            result[1] += 0;
            result[2] += 45634027;
            result[3] += 5368709;
            result[4] += 0;
            result[5] += 2013265;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 953025;
            result[2] += 38756361;
            result[3] += 13024678;
            result[4] += 0;
            result[5] += 953025;
          } else {
            result[0] += 1464193;
            result[1] += 0;
            result[2] += 49294510;
            result[3] += 2928386;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49852298;
            result[3] += 3834792;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53482568;
            result[3] += 204522;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53439685;
            result[5] += 247405;
          } else {
            result[0] += 6507526;
            result[1] += 4880644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34164512;
            result[5] += 8134407;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 2982616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8947848;
            result[4] += 8947848;
            result[5] += 32808777;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44395094;
            result[5] += 9291996;
          } else {
            result[0] += 2091704;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3195660;
            result[4] += 1917396;
            result[5] += 46482330;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 7507093;
            result[1] += 227487;
            result[2] += 0;
            result[3] += 13194285;
            result[4] += 5914679;
            result[5] += 26843545;
          } else {
            result[0] += 312134;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42762392;
            result[4] += 0;
            result[5] += 10612564;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 32808777;
            result[2] += 0;
            result[3] += 0;
            result[4] += 20878313;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53062822;
            result[2] += 0;
            result[3] += 0;
            result[4] += 624268;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 3463683;
            result[1] += 3463683;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46759724;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42940000))) ) ) {
            result[0] += 30436776;
            result[1] += 3804597;
            result[2] += 0;
            result[3] += 2536398;
            result[4] += 13104723;
            result[5] += 3804597;
          } else {
            result[0] += 49256886;
            result[1] += 641213;
            result[2] += 582921;
            result[3] += 1049259;
            result[4] += 1399012;
            result[5] += 757798;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 971712;
            result[1] += 242928;
            result[2] += 7773696;
            result[3] += 24292801;
            result[4] += 2915136;
            result[5] += 17490817;
          } else {
            result[0] += 12341860;
            result[1] += 0;
            result[2] += 23758080;
            result[3] += 4628197;
            result[4] += 7405116;
            result[5] += 5553837;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3253763;
            result[4] += 1626881;
            result[5] += 48806446;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22513941;
            result[3] += 17318416;
            result[4] += 0;
            result[5] += 13854733;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7921046;
            result[3] += 43125696;
            result[4] += 0;
            result[5] += 2640348;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42eb0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 31317469;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4473924;
            result[5] += 17895697;
          } else {
            result[0] += 5883516;
            result[1] += 0;
            result[2] += 42655497;
            result[3] += 4412637;
            result[4] += 0;
            result[5] += 735439;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e40000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43883361;
            result[3] += 8403196;
            result[4] += 0;
            result[5] += 1400532;
          } else {
            result[0] += 547827;
            result[1] += 0;
            result[2] += 50947953;
            result[3] += 2191309;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 96733;
            result[1] += 0;
            result[2] += 51945888;
            result[3] += 1644469;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 603225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52782252;
            result[5] += 301612;
          } else {
            result[0] += 1342177;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 36238786;
            result[5] += 16106127;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 9636144;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25466953;
            result[5] += 18583993;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2572647;
            result[4] += 2031037;
            result[5] += 49083406;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 49117977;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4569114;
            result[5] += 0;
          } else {
            result[0] += 4880644;
            result[1] += 39045157;
            result[2] += 0;
            result[3] += 0;
            result[4] += 9761289;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 3028502;
            result[2] += 1651910;
            result[3] += 13765920;
            result[4] += 6607641;
            result[5] += 28633115;
          } else {
            result[0] += 889841;
            result[1] += 296613;
            result[2] += 2076296;
            result[3] += 35890265;
            result[4] += 2076296;
            result[5] += 12457778;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 3189332;
            result[1] += 3189332;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47308426;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 34513130;
            result[2] += 0;
            result[3] += 0;
            result[4] += 19173961;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53567786;
            result[2] += 0;
            result[3] += 0;
            result[4] += 119304;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 27340648;
            result[1] += 3479718;
            result[2] += 0;
            result[3] += 1491308;
            result[4] += 19884107;
            result[5] += 1491308;
          } else {
            result[0] += 48214135;
            result[1] += 677604;
            result[2] += 0;
            result[3] += 677604;
            result[4] += 2137058;
            result[5] += 1980688;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 1109237;
            result[1] += 887389;
            result[2] += 7099119;
            result[3] += 26178003;
            result[4] += 221847;
            result[5] += 18191493;
          } else {
            result[0] += 23899414;
            result[1] += 0;
            result[2] += 23206678;
            result[3] += 2770946;
            result[4] += 3810051;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3745611;
            result[5] += 49941480;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 35791394;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 838860;
            result[2] += 3355443;
            result[3] += 39426457;
            result[4] += 0;
            result[5] += 10066329;
          } else {
            result[0] += 2928386;
            result[1] += 0;
            result[2] += 11713547;
            result[3] += 10737418;
            result[4] += 10737418;
            result[5] += 17570320;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 11930464;
            result[2] += 5965232;
            result[3] += 29826161;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39370533;
            result[3] += 8351325;
            result[4] += 0;
            result[5] += 5965232;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 37580963;
            result[4] += 0;
            result[5] += 16106127;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 259357;
            result[1] += 0;
            result[2] += 44350205;
            result[3] += 9077527;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 23860929;
            result[1] += 0;
            result[2] += 23860929;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 0;
          } else {
            result[0] += 154495;
            result[1] += 0;
            result[2] += 52064891;
            result[3] += 1235961;
            result[4] += 0;
            result[5] += 231742;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42940000))) ) ) {
            result[0] += 468882;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51108235;
            result[5] += 2109973;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 21474836;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 1301505;
            result[1] += 867670;
            result[2] += 54229;
            result[3] += 3253763;
            result[4] += 2169175;
            result[5] += 46040747;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6068975;
            result[3] += 34079631;
            result[4] += 466844;
            result[5] += 13071639;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
            result[0] += 6678776;
            result[1] += 14898809;
            result[2] += 0;
            result[3] += 770628;
            result[4] += 31338876;
            result[5] += 0;
          } else {
            result[0] += 44797063;
            result[1] += 303561;
            result[2] += 216829;
            result[3] += 2775423;
            result[4] += 4336598;
            result[5] += 1257613;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 1958191;
            result[2] += 4079566;
            result[3] += 24966945;
            result[4] += 3590018;
            result[5] += 19092369;
          } else {
            result[0] += 18597489;
            result[1] += 0;
            result[2] += 16843009;
            result[3] += 2807168;
            result[4] += 9825088;
            result[5] += 5614336;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1451002;
            result[3] += 5804009;
            result[4] += 2902004;
            result[5] += 43530073;
          } else {
            result[0] += 6369654;
            result[1] += 5459704;
            result[2] += 0;
            result[3] += 7279605;
            result[4] += 20018915;
            result[5] += 14559211;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 7158278;
            result[1] += 7158278;
            result[2] += 7158278;
            result[3] += 14316557;
            result[4] += 3579139;
            result[5] += 14316557;
          } else {
            result[0] += 5651272;
            result[1] += 2825636;
            result[2] += 45210182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5965232;
            result[5] += 47721858;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8308716;
            result[3] += 43460978;
            result[4] += 639132;
            result[5] += 1278264;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 30344877;
            result[3] += 23342213;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 0;
            result[4] += 0;
            result[5] += 16106127;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47380988;
            result[3] += 5624361;
            result[4] += 0;
            result[5] += 681740;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 419430;
            result[1] += 0;
            result[2] += 48234495;
            result[3] += 5033164;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 382568;
            result[1] += 0;
            result[2] += 52794431;
            result[3] += 510091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 400649;
            result[1] += 0;
            result[2] += 0;
            result[3] += 200324;
            result[4] += 52284816;
            result[5] += 801299;
          } else {
            result[0] += 0;
            result[1] += 21474836;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 35791394;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42660000))) ) ) {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1386467;
            result[4] += 1078363;
            result[5] += 51222260;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 6710886;
            result[1] += 1744830;
            result[2] += 671088;
            result[3] += 8724152;
            result[4] += 4831838;
            result[5] += 31004295;
          } else {
            result[0] += 0;
            result[1] += 1588375;
            result[2] += 1270700;
            result[3] += 40027062;
            result[4] += 0;
            result[5] += 10800953;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 395727;
            result[1] += 52499907;
            result[2] += 131909;
            result[3] += 131909;
            result[4] += 527637;
            result[5] += 0;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42890000))) ) ) {
            result[0] += 3482405;
            result[1] += 17412029;
            result[2] += 0;
            result[3] += 1160801;
            result[4] += 30180851;
            result[5] += 1451002;
          } else {
            result[0] += 44069470;
            result[1] += 406378;
            result[2] += 90306;
            result[3] += 1715819;
            result[4] += 4695927;
            result[5] += 2709188;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1977945;
            result[1] += 706409;
            result[2] += 17236381;
            result[3] += 20909709;
            result[4] += 2119227;
            result[5] += 10737418;
          } else {
            result[0] += 38252052;
            result[1] += 0;
            result[2] += 7381975;
            result[3] += 0;
            result[4] += 8053063;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 44739242;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 44739242;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 41607495;
            result[3] += 8053063;
            result[4] += 0;
            result[5] += 4026531;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42068243;
            result[3] += 9615598;
            result[4] += 0;
            result[5] += 2003249;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 962997;
            result[1] += 0;
            result[2] += 50075851;
            result[3] += 2407492;
            result[4] += 0;
            result[5] += 240749;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51610794;
            result[3] += 1779682;
            result[4] += 0;
            result[5] += 296613;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 819650;
            result[2] += 204912;
            result[3] += 0;
            result[4] += 51433053;
            result[5] += 1229475;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 191511;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1978953;
            result[4] += 1723604;
            result[5] += 49793021;
          } else {
            result[0] += 16304968;
            result[1] += 8351325;
            result[2] += 0;
            result[3] += 9942053;
            result[4] += 5965232;
            result[5] += 13123511;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 7669584;
            result[1] += 766958;
            result[2] += 0;
            result[3] += 2300875;
            result[4] += 4601750;
            result[5] += 38347922;
          } else {
            result[0] += 245146;
            result[1] += 0;
            result[2] += 980586;
            result[3] += 40449178;
            result[4] += 0;
            result[5] += 12012180;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 53442503;
            result[2] += 0;
            result[3] += 0;
            result[4] += 244588;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 3317741;
            result[1] += 1206451;
            result[2] += 3016128;
            result[3] += 7238708;
            result[4] += 17493546;
            result[5] += 21414513;
          } else {
            result[0] += 44635197;
            result[1] += 980993;
            result[2] += 713449;
            result[3] += 1382308;
            result[4] += 4860376;
            result[5] += 1114765;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1977945;
            result[1] += 3673327;
            result[2] += 1695381;
            result[3] += 20909709;
            result[4] += 5086145;
            result[5] += 20344581;
          } else {
            result[0] += 9309900;
            result[1] += 0;
            result[2] += 26378050;
            result[3] += 11792540;
            result[4] += 2482640;
            result[5] += 3723960;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1917396;
            result[4] += 9586980;
            result[5] += 42182714;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3158064;
            result[3] += 45265586;
            result[4] += 0;
            result[5] += 5263440;
          } else {
            result[0] += 0;
            result[1] += 5195524;
            result[2] += 19050258;
            result[3] += 13854733;
            result[4] += 0;
            result[5] += 15586574;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3579139;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 521233;
            result[1] += 0;
            result[2] += 33880203;
            result[3] += 17200718;
            result[4] += 0;
            result[5] += 2084935;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52519980;
            result[3] += 583555;
            result[4] += 0;
            result[5] += 583555;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 4129776;
            result[1] += 0;
            result[2] += 49557314;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 50331647;
            result[1] += 0;
            result[2] += 3355443;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46144276;
            result[3] += 7542814;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52366143;
            result[3] += 1320947;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52041509;
            result[5] += 1645581;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 4473924;
            result[2] += 0;
            result[3] += 17895697;
            result[4] += 31317469;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5965232;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 47721858;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 38617030;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15070060;
            result[5] += 0;
          } else {
            result[0] += 59785;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2630547;
            result[4] += 3108829;
            result[5] += 47887928;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            result[0] += 47551423;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6135667;
            result[5] += 0;
          } else {
            result[0] += 560700;
            result[1] += 280350;
            result[2] += 700875;
            result[3] += 28735910;
            result[4] += 1121401;
            result[5] += 22287852;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 10737418;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 129366;
            result[1] += 53040258;
            result[2] += 0;
            result[3] += 0;
            result[4] += 517465;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 12958953;
            result[1] += 3702558;
            result[2] += 0;
            result[3] += 2221534;
            result[4] += 31101487;
            result[5] += 3702558;
          } else {
            result[0] += 45575030;
            result[1] += 3048168;
            result[2] += 49164;
            result[3] += 442476;
            result[4] += 4375596;
            result[5] += 196656;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 367719;
            result[2] += 8457555;
            result[3] += 25004946;
            result[4] += 735439;
            result[5] += 19121429;
          } else {
            result[0] += 16078875;
            result[1] += 0;
            result[2] += 25889714;
            result[3] += 4087849;
            result[4] += 3270279;
            result[5] += 4360372;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14913080;
            result[4] += 0;
            result[5] += 38774010;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8169774;
            result[3] += 37347541;
            result[4] += 0;
            result[5] += 8169774;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 5033164;
            result[1] += 5033164;
            result[2] += 21810380;
            result[3] += 8388607;
            result[4] += 3355443;
            result[5] += 10066329;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42880000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 4129776;
            result[1] += 41297762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8259552;
            result[5] += 0;
          } else {
            result[0] += 1988410;
            result[1] += 0;
            result[2] += 41756626;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 994205;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ed0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 933688;
            result[1] += 0;
            result[2] += 37347541;
            result[3] += 14005328;
            result[4] += 0;
            result[5] += 1400532;
          } else {
            result[0] += 941878;
            result[1] += 0;
            result[2] += 48035818;
            result[3] += 4709393;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 50331647;
            result[1] += 0;
            result[2] += 3355443;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 2236962;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1080948;
            result[1] += 0;
            result[2] += 47201402;
            result[3] += 5044424;
            result[4] += 0;
            result[5] += 360316;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50223407;
            result[3] += 3463683;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53376162;
            result[3] += 310929;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 728784;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52229523;
            result[5] += 728784;
          } else {
            result[0] += 2556528;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17043521;
            result[5] += 34087042;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 1695381;
            result[1] += 6781527;
            result[2] += 0;
            result[3] += 0;
            result[4] += 45210182;
            result[5] += 0;
          } else {
            result[0] += 47492426;
            result[1] += 688296;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4818072;
            result[5] += 688296;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1321528;
            result[4] += 1486719;
            result[5] += 50878843;
          } else {
            result[0] += 0;
            result[1] += 553475;
            result[2] += 0;
            result[3] += 4427801;
            result[4] += 12729928;
            result[5] += 35975885;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 3579139;
            result[4] += 46528812;
            result[5] += 1789569;
          } else {
            result[0] += 2432949;
            result[1] += 648786;
            result[2] += 1135376;
            result[3] += 21247761;
            result[4] += 4217112;
            result[5] += 24005104;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 48318382;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5368709;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 27633061;
            result[1] += 6052956;
            result[2] += 394758;
            result[3] += 3815994;
            result[4] += 7895160;
            result[5] += 7895160;
          } else {
            result[0] += 49190456;
            result[1] += 545046;
            result[2] += 1430747;
            result[3] += 817569;
            result[4] += 817569;
            result[5] += 885700;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 1417480;
            result[1] += 1594666;
            result[2] += 10099551;
            result[3] += 26223397;
            result[4] += 1417480;
            result[5] += 12934513;
          } else {
            result[0] += 37650687;
            result[1] += 0;
            result[2] += 9064054;
            result[3] += 0;
            result[4] += 6972349;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 0;
            result[4] += 0;
            result[5] += 50704475;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 39370533;
            result[4] += 0;
            result[5] += 8351325;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52153174;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1533916;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 2556528;
            result[2] += 14060904;
            result[3] += 34513130;
            result[4] += 0;
            result[5] += 2556528;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 329368;
            result[2] += 42817925;
            result[3] += 9881059;
            result[4] += 0;
            result[5] += 658737;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 0;
            result[4] += 0;
            result[5] += 16106127;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
            result[0] += 8259552;
            result[1] += 8259552;
            result[2] += 16519104;
            result[3] += 0;
            result[4] += 4129776;
            result[5] += 16519104;
          } else {
            result[0] += 160021;
            result[1] += 0;
            result[2] += 52326911;
            result[3] += 1120147;
            result[4] += 0;
            result[5] += 80010;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1016800;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51246768;
            result[5] += 1423521;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 49958820;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2982616;
            result[5] += 745654;
          } else {
            result[0] += 2206318;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9560714;
            result[4] += 15444231;
            result[5] += 26475825;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38028356;
            result[5] += 15658734;
          } else {
            result[0] += 122154;
            result[1] += 427542;
            result[2] += 0;
            result[3] += 2259866;
            result[4] += 3176028;
            result[5] += 47701499;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10296154;
            result[4] += 735439;
            result[5] += 42655497;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 235469;
            result[3] += 33672166;
            result[4] += 470939;
            result[5] += 19308515;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 6710886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46976204;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 4549753;
            result[1] += 9554482;
            result[2] += 0;
            result[3] += 0;
            result[4] += 39582855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 45733448;
            result[2] += 0;
            result[3] += 0;
            result[4] += 7953643;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 13147859;
            result[1] += 3286964;
            result[2] += 1095654;
            result[3] += 12052204;
            result[4] += 6573929;
            result[5] += 17530478;
          } else {
            result[0] += 49530017;
            result[1] += 760440;
            result[2] += 152088;
            result[3] += 354872;
            result[4] += 2686889;
            result[5] += 202784;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 5602131;
            result[1] += 1400532;
            result[2] += 7469508;
            result[3] += 16806393;
            result[4] += 7002664;
            result[5] += 15405860;
          } else {
            result[0] += 48449326;
            result[1] += 0;
            result[2] += 3273603;
            result[3] += 654720;
            result[4] += 0;
            result[5] += 1309441;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12389328;
            result[4] += 1376592;
            result[5] += 39921170;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4843948;
            result[3] += 40769896;
            result[4] += 807324;
            result[5] += 7265922;
          } else {
            result[0] += 1309441;
            result[1] += 0;
            result[2] += 9166088;
            result[3] += 11784971;
            result[4] += 0;
            result[5] += 31426589;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 1248537;
            result[2] += 12485370;
            result[3] += 9988296;
            result[4] += 1248537;
            result[5] += 28716351;
          } else {
            result[0] += 1677721;
            result[1] += 1677721;
            result[2] += 36071014;
            result[3] += 4194303;
            result[4] += 2516582;
            result[5] += 7549747;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3158064;
            result[3] += 41054834;
            result[4] += 0;
            result[5] += 9474192;
          } else {
            result[0] += 317675;
            result[1] += 0;
            result[2] += 39074036;
            result[3] += 13977704;
            result[4] += 0;
            result[5] += 317675;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 15339168;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 7669584;
            result[4] += 23008753;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 228455;
            result[1] += 0;
            result[2] += 47747242;
            result[3] += 5482936;
            result[4] += 0;
            result[5] += 228455;
          } else {
            result[0] += 1146343;
            result[1] += 0;
            result[2] += 51776518;
            result[3] += 382114;
            result[4] += 0;
            result[5] += 382114;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53130748;
            result[5] += 556342;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51450129;
            result[5] += 2236962;
          } else {
            result[0] += 14913080;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 14913080;
            result[5] += 23860929;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2753184;
            result[4] += 37167986;
            result[5] += 13765920;
          } else {
            result[0] += 128746;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1738071;
            result[4] += 2059936;
            result[5] += 49760337;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
            result[0] += 34896609;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 14763950;
            result[4] += 0;
            result[5] += 38923141;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 0;
            result[4] += 44739242;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 13421772;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4569114;
            result[4] += 0;
            result[5] += 49117977;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42840000))) ) ) {
            result[0] += 31580641;
            result[1] += 15790320;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6316128;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 362750;
            result[2] += 725501;
            result[3] += 26480794;
            result[4] += 362750;
            result[5] += 25755293;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 479349;
            result[1] += 479349;
            result[2] += 0;
            result[3] += 49372949;
            result[4] += 0;
            result[5] += 3355443;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41756626;
            result[5] += 11930464;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 53562237;
            result[2] += 0;
            result[3] += 0;
            result[4] += 124853;
            result[5] += 0;
          } else {
            result[0] += 26843545;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 6892261;
            result[1] += 2902004;
            result[2] += 0;
            result[3] += 2539254;
            result[4] += 39902567;
            result[5] += 1451002;
          } else {
            result[0] += 1651910;
            result[1] += 45427538;
            result[2] += 0;
            result[3] += 3303820;
            result[4] += 3303820;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 35333996;
            result[1] += 943383;
            result[2] += 857621;
            result[3] += 5917586;
            result[4] += 5917586;
            result[5] += 4716916;
          } else {
            result[0] += 52416891;
            result[1] += 0;
            result[2] += 592759;
            result[3] += 338719;
            result[4] += 338719;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1917396;
            result[5] += 51769695;
          } else {
            result[0] += 0;
            result[1] += 217356;
            result[2] += 15867035;
            result[3] += 26734867;
            result[4] += 0;
            result[5] += 10867832;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 4668442;
            result[2] += 9336885;
            result[3] += 7002664;
            result[4] += 0;
            result[5] += 32679098;
          } else {
            result[0] += 0;
            result[1] += 1095654;
            result[2] += 23008753;
            result[3] += 27391373;
            result[4] += 0;
            result[5] += 2191309;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 845466;
            result[1] += 0;
            result[2] += 49459761;
            result[3] += 2838350;
            result[4] += 241561;
            result[5] += 301952;
          } else {
            result[0] += 14366968;
            result[1] += 0;
            result[2] += 39320123;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42880000))) ) ) {
            result[0] += 258111;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52912758;
            result[5] += 516222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2982616;
            result[4] += 17895697;
            result[5] += 32808777;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 23342213;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24509324;
            result[5] += 5835553;
          } else {
            result[0] += 185554;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1855544;
            result[4] += 2412208;
            result[5] += 49233784;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1491308;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4473924;
            result[4] += 745654;
            result[5] += 46976204;
          } else {
            result[0] += 742217;
            result[1] += 494811;
            result[2] += 247405;
            result[3] += 29441308;
            result[4] += 247405;
            result[5] += 22513941;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 53325155;
            result[2] += 0;
            result[3] += 0;
            result[4] += 361935;
            result[5] += 0;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 22071359;
            result[1] += 5845927;
            result[2] += 238609;
            result[3] += 3937053;
            result[4] += 15867518;
            result[5] += 5726623;
          } else {
            result[0] += 47273957;
            result[1] += 1832323;
            result[2] += 183232;
            result[3] += 732929;
            result[4] += 3481415;
            result[5] += 183232;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 1234186;
            result[1] += 2468372;
            result[2] += 4525348;
            result[3] += 24478022;
            result[4] += 3085465;
            result[5] += 17895697;
          } else {
            result[0] += 11816297;
            result[1] += 1798132;
            result[2] += 26971983;
            result[3] += 4880644;
            result[4] += 3596264;
            result[5] += 4623768;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dc0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 38347922;
            result[5] += 15339168;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1952257;
            result[4] += 0;
            result[5] += 51734833;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 53687091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 1451002;
            result[1] += 1451002;
            result[2] += 15477359;
            result[3] += 25634376;
            result[4] += 2418337;
            result[5] += 7255012;
          } else {
            result[0] += 38028356;
            result[1] += 4473924;
            result[2] += 11184810;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 1883757;
            result[1] += 0;
            result[2] += 45210182;
            result[3] += 4709393;
            result[4] += 0;
            result[5] += 1883757;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 22369621;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 24778657;
            result[3] += 28908433;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 249707;
            result[1] += 0;
            result[2] += 47943820;
            result[3] += 4744440;
            result[4] += 0;
            result[5] += 749122;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 44739242;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51480772;
            result[3] += 2206318;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53346581;
            result[3] += 340510;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 477218;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52494044;
            result[5] += 715827;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 0;
            result[3] += 0;
            result[4] += 12079595;
            result[5] += 36238786;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 505422;
            result[1] += 112316;
            result[2] += 56158;
            result[3] += 4211853;
            result[4] += 2807902;
            result[5] += 45993438;
          } else {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 3067833;
            result[3] += 10737418;
            result[4] += 7669584;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40114511;
            result[4] += 603225;
            result[5] += 12969353;
          } else {
            result[0] += 3834792;
            result[1] += 0;
            result[2] += 7669584;
            result[3] += 5752188;
            result[4] += 3834792;
            result[5] += 32595733;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 1731841;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51955249;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42940000))) ) ) {
            result[0] += 15967281;
            result[1] += 4628197;
            result[2] += 2314098;
            result[3] += 462819;
            result[4] += 28463414;
            result[5] += 1851279;
          } else {
            result[0] += 46448382;
            result[1] += 1357257;
            result[2] += 100537;
            result[3] += 1809677;
            result[4] += 2714515;
            result[5] += 1256720;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 1556147;
            result[2] += 10893032;
            result[3] += 18284733;
            result[4] += 2334221;
            result[5] += 20618955;
          } else {
            result[0] += 21172373;
            result[1] += 0;
            result[2] += 20038139;
            result[3] += 2268468;
            result[4] += 8317718;
            result[5] += 1890390;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43925801;
            result[3] += 0;
            result[4] += 0;
            result[5] += 9761289;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4412637;
            result[3] += 40449178;
            result[4] += 1470879;
            result[5] += 7354396;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22473666;
            result[3] += 18728055;
            result[4] += 0;
            result[5] += 12485370;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 35791394;
          } else {
            result[0] += 1731841;
            result[1] += 0;
            result[2] += 42430120;
            result[3] += 7793287;
            result[4] += 865920;
            result[5] += 865920;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
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
          result[5] += 53687091;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 32212254;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 25917906;
            result[1] += 0;
            result[2] += 25917906;
            result[3] += 1851279;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 252348;
            result[1] += 0;
            result[2] += 50848173;
            result[3] += 2334221;
            result[4] += 0;
            result[5] += 252348;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53423919;
            result[5] += 263172;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 2532409;
            result[1] += 506481;
            result[2] += 0;
            result[3] += 2532409;
            result[4] += 38999113;
            result[5] += 9116675;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5651272;
            result[4] += 11302545;
            result[5] += 36733272;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 23159137;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24211825;
            result[5] += 6316128;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2796913;
            result[4] += 2251174;
            result[5] += 48639003;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 556342;
            result[1] += 3338057;
            result[2] += 1112685;
            result[3] += 24061831;
            result[4] += 2503543;
            result[5] += 22114630;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 50861454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2825636;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
            result[0] += 5835553;
            result[1] += 12449180;
            result[2] += 0;
            result[3] += 2723258;
            result[4] += 31122951;
            result[5] += 1556147;
          } else {
            result[0] += 49772407;
            result[1] += 508400;
            result[2] += 50840;
            result[3] += 355880;
            result[4] += 2847042;
            result[5] += 152520;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 592137;
            result[1] += 0;
            result[2] += 11053224;
            result[3] += 18751006;
            result[4] += 1973790;
            result[5] += 21316933;
          } else {
            result[0] += 25154091;
            result[1] += 375434;
            result[2] += 21399749;
            result[3] += 1501736;
            result[4] += 3754342;
            result[5] += 1501736;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 1193046;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5965232;
            result[4] += 13123511;
            result[5] += 33405301;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 4129776;
            result[1] += 20648881;
            result[2] += 24778657;
            result[3] += 0;
            result[4] += 0;
            result[5] += 4129776;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10391049;
            result[3] += 43296041;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 21474836;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39114880;
            result[3] += 9970459;
            result[4] += 0;
            result[5] += 4601750;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2982616;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 2982616;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20132659;
            result[3] += 24606583;
            result[4] += 0;
            result[5] += 8947848;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45756043;
            result[3] += 7931047;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48297653;
            result[3] += 4974865;
            result[4] += 0;
            result[5] += 414572;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50419181;
            result[3] += 3267909;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42300000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
            result[0] += 641678;
            result[1] += 641678;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49837020;
            result[5] += 2566713;
          } else {
            result[0] += 19272289;
            result[1] += 688296;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15830808;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
            result[0] += 2172310;
            result[1] += 23274750;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25136730;
            result[5] += 3103300;
          } else {
            result[0] += 51955249;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1587521;
            result[5] += 144320;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 2753184;
            result[2] += 0;
            result[3] += 8259552;
            result[4] += 30285025;
            result[5] += 12389328;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 48318382;
            result[5] += 5368709;
          } else {
            result[0] += 0;
            result[1] += 238080;
            result[2] += 119040;
            result[3] += 2202242;
            result[4] += 1785601;
            result[5] += 49342127;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 1148386;
            result[1] += 4593547;
            result[2] += 0;
            result[3] += 4306451;
            result[4] += 14067740;
            result[5] += 29570964;
          } else {
            result[0] += 1934669;
            result[1] += 120916;
            result[2] += 2539254;
            result[3] += 31317469;
            result[4] += 967334;
            result[5] += 16807445;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 30748061;
            result[1] += 5856773;
            result[2] += 0;
            result[3] += 0;
            result[4] += 16106127;
            result[5] += 976128;
          } else {
            result[0] += 1819901;
            result[1] += 10009457;
            result[2] += 15014186;
            result[3] += 4549753;
            result[4] += 8189556;
            result[5] += 14104235;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47244640;
            result[3] += 2147483;
            result[4] += 0;
            result[5] += 4294967;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 53235939;
            result[1] += 0;
            result[2] += 180460;
            result[3] += 0;
            result[4] += 270691;
            result[5] += 0;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 15658734;
            result[3] += 2236962;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 52195783;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1491308;
            result[5] += 0;
          } else {
            result[0] += 7158278;
            result[1] += 0;
            result[2] += 39370533;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7158278;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 14641933;
            result[3] += 34164512;
            result[4] += 0;
            result[5] += 4880644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37973796;
            result[3] += 15713294;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 22605091;
            result[1] += 0;
            result[2] += 11302545;
            result[3] += 14128181;
            result[4] += 0;
            result[5] += 5651272;
          } else {
            result[0] += 266437;
            result[1] += 0;
            result[2] += 44894664;
            result[3] += 7460240;
            result[4] += 0;
            result[5] += 1065748;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49352108;
            result[3] += 4334982;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 138726;
            result[1] += 0;
            result[2] += 53548364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46976204;
            result[5] += 6710886;
          } else {
            result[0] += 1032444;
            result[1] += 1032444;
            result[2] += 0;
            result[3] += 4129776;
            result[4] += 22713769;
            result[5] += 24778657;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50107951;
            result[5] += 3579139;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1115382;
            result[4] += 1338459;
            result[5] += 51233249;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 52130943;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1556147;
            result[5] += 0;
          } else {
            result[0] += 362750;
            result[1] += 816188;
            result[2] += 90687;
            result[3] += 20132659;
            result[4] += 4625070;
            result[5] += 27659734;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3355443;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 43620761;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 480421;
            result[1] += 52726248;
            result[2] += 0;
            result[3] += 120105;
            result[4] += 360316;
            result[5] += 0;
          } else {
            result[0] += 26843545;
            result[1] += 0;
            result[2] += 0;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 36935104;
            result[1] += 2522889;
            result[2] += 605493;
            result[3] += 605493;
            result[4] += 12513532;
            result[5] += 504577;
          } else {
            result[0] += 783753;
            result[1] += 979691;
            result[2] += 9796914;
            result[3] += 18418199;
            result[4] += 3135012;
            result[5] += 20573520;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 48974986;
            result[1] += 154495;
            result[2] += 1313209;
            result[3] += 308990;
            result[4] += 2858161;
            result[5] += 77247;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5113056;
            result[3] += 42608802;
            result[4] += 2556528;
            result[5] += 3408704;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32808777;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 11930464;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 51698680;
            result[3] += 1988410;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19173961;
            result[3] += 30678337;
            result[4] += 0;
            result[5] += 3834792;
          } else {
            result[0] += 2684354;
            result[1] += 0;
            result[2] += 37580963;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 2684354;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 17895697;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45154043;
            result[3] += 8533047;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 503091;
            result[1] += 0;
            result[2] += 51315372;
            result[3] += 1365535;
            result[4] += 0;
            result[5] += 503091;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1342177;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52076478;
            result[5] += 268435;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2477865;
            result[4] += 37993941;
            result[5] += 13215283;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 10996151;
            result[1] += 3880994;
            result[2] += 0;
            result[3] += 1293664;
            result[4] += 23285967;
            result[5] += 14230313;
          } else {
            result[0] += 66526;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2062329;
            result[4] += 1995802;
            result[5] += 49562432;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 7911781;
            result[1] += 2260509;
            result[2] += 2260509;
            result[3] += 8759472;
            result[4] += 9607163;
            result[5] += 22887654;
          } else {
            result[0] += 583555;
            result[1] += 1458888;
            result[2] += 583555;
            result[3] += 41432429;
            result[4] += 0;
            result[5] += 9628663;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 6710886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46976204;
            result[5] += 0;
          } else {
            result[0] += 11930464;
            result[1] += 41756626;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 7904847;
            result[1] += 3293686;
            result[2] += 0;
            result[3] += 2964317;
            result[4] += 34913077;
            result[5] += 4611161;
          } else {
            result[0] += 3627506;
            result[1] += 42804572;
            result[2] += 0;
            result[3] += 5078508;
            result[4] += 2176503;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 48782731;
            result[1] += 365218;
            result[2] += 417392;
            result[3] += 939132;
            result[4] += 2191309;
            result[5] += 991306;
          } else {
            result[0] += 8278850;
            result[1] += 125437;
            result[2] += 12292838;
            result[3] += 14801581;
            result[4] += 1379808;
            result[5] += 16808575;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 4668442;
            result[3] += 11671106;
            result[4] += 9336885;
            result[5] += 28010656;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10919408;
            result[3] += 36398027;
            result[4] += 0;
            result[5] += 6369654;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 19522578;
            result[2] += 0;
            result[3] += 14641933;
            result[4] += 0;
            result[5] += 19522578;
          } else {
            result[0] += 0;
            result[1] += 1988410;
            result[2] += 47721858;
            result[3] += 3976821;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
            result[0] += 14913080;
            result[1] += 5965232;
            result[2] += 20878313;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 2982616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 49213166;
            result[3] += 1118481;
            result[4] += 0;
            result[5] += 3355443;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 23488102;
            result[4] += 3355443;
            result[5] += 13421772;
          } else {
            result[0] += 291777;
            result[1] += 0;
            result[2] += 42891317;
            result[3] += 9045107;
            result[4] += 0;
            result[5] += 1458888;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 72354;
            result[1] += 0;
            result[2] += 51661163;
            result[3] += 1808864;
            result[4] += 0;
            result[5] += 144709;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53433850;
            result[5] += 253240;
          } else {
            result[0] += 2902004;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 44981076;
            result[5] += 5804009;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 21962900;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21962900;
            result[5] += 9761289;
          } else {
            result[0] += 145690;
            result[1] += 0;
            result[2] += 218536;
            result[3] += 1675445;
            result[4] += 2112517;
            result[5] += 49534900;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 5165230;
            result[1] += 2191309;
            result[2] += 1878265;
            result[3] += 10800027;
            result[4] += 2504354;
            result[5] += 31147904;
          } else {
            result[0] += 267099;
            result[1] += 0;
            result[2] += 1602599;
            result[3] += 38462393;
            result[4] += 801299;
            result[5] += 12553697;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429c0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 16106127;
            result[2] += 0;
            result[3] += 0;
            result[4] += 37580963;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53545061;
            result[2] += 0;
            result[3] += 0;
            result[4] += 142029;
            result[5] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 50704475;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2982616;
            result[5] += 0;
          } else {
            result[0] += 5526612;
            result[1] += 263172;
            result[2] += 526344;
            result[3] += 1842204;
            result[4] += 42897038;
            result[5] += 2631720;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 43505869;
            result[1] += 2309629;
            result[2] += 282811;
            result[3] += 1791140;
            result[4] += 4807799;
            result[5] += 989841;
          } else {
            result[0] += 9291996;
            result[1] += 294984;
            result[2] += 14454216;
            result[3] += 14749200;
            result[4] += 2212380;
            result[5] += 12684312;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 1789569;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3579139;
            result[5] += 48318382;
          } else {
            result[0] += 0;
            result[1] += 4880644;
            result[2] += 24403223;
            result[3] += 4880644;
            result[4] += 14641933;
            result[5] += 4880644;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3579139;
            result[3] += 44142719;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 26843545;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7995949;
            result[3] += 28556963;
            result[4] += 2284557;
            result[5] += 14849620;
          } else {
            result[0] += 6316128;
            result[1] += 0;
            result[2] += 34738706;
            result[3] += 0;
            result[4] += 0;
            result[5] += 12632256;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 5965232;
            result[1] += 14913080;
            result[2] += 8947848;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 11930464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42813756;
            result[3] += 10646807;
            result[4] += 0;
            result[5] += 226527;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43211561;
            result[3] += 9166088;
            result[4] += 0;
            result[5] += 1309441;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52236088;
            result[3] += 1451002;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 5965232;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52310499;
            result[3] += 1376592;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42810000))) ) ) {
            result[0] += 636605;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52201677;
            result[5] += 848807;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22369621;
            result[5] += 31317469;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 51381510;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2305580;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 50861454;
            result[5] += 2825636;
          } else {
            result[0] += 121601;
            result[1] += 121601;
            result[2] += 0;
            result[3] += 2918437;
            result[4] += 2492832;
            result[5] += 48032618;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 15693149;
            result[2] += 0;
            result[3] += 1651910;
            result[4] += 24778657;
            result[5] += 11563373;
          } else {
            result[0] += 3859856;
            result[1] += 2105376;
            result[2] += 1403584;
            result[3] += 18246593;
            result[4] += 3508960;
            result[5] += 24562721;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 4880644;
            result[4] += 6100805;
            result[5] += 42705640;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 411395;
            result[2] += 205697;
            result[3] += 39493952;
            result[4] += 411395;
            result[5] += 13164650;
          } else {
            result[0] += 1957341;
            result[1] += 838860;
            result[2] += 7549747;
            result[3] += 18734557;
            result[4] += 1677721;
            result[5] += 22928861;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 6529511;
            result[1] += 7255012;
            result[2] += 1451002;
            result[3] += 362750;
            result[4] += 36275061;
            result[5] += 1813753;
          } else {
            result[0] += 1731841;
            result[1] += 50223407;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1731841;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 50198612;
            result[1] += 177380;
            result[2] += 118253;
            result[3] += 473014;
            result[4] += 2365070;
            result[5] += 354760;
          } else {
            result[0] += 12079595;
            result[1] += 2684354;
            result[2] += 16777215;
            result[3] += 9395240;
            result[4] += 7381975;
            result[5] += 5368709;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 880116;
            result[2] += 9681278;
            result[3] += 18482441;
            result[4] += 1760232;
            result[5] += 22883022;
          } else {
            result[0] += 7320966;
            result[1] += 7320966;
            result[2] += 29283867;
            result[3] += 0;
            result[4] += 7320966;
            result[5] += 2440322;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 35791394;
            result[1] += 3355443;
            result[2] += 11184810;
            result[3] += 2236962;
            result[4] += 0;
            result[5] += 1118481;
          } else {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5368709;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 1602599;
            result[1] += 0;
            result[2] += 27244195;
            result[3] += 20032496;
            result[4] += 0;
            result[5] += 4807799;
          } else {
            result[0] += 922987;
            result[1] += 0;
            result[2] += 43688062;
            result[3] += 8306885;
            result[4] += 0;
            result[5] += 769156;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1059613;
            result[1] += 0;
            result[2] += 48389022;
            result[3] += 3885250;
            result[4] += 0;
            result[5] += 353204;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52666908;
            result[3] += 765136;
            result[4] += 0;
            result[5] += 255045;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51853873;
            result[5] += 1833217;
          } else {
            result[0] += 0;
            result[1] += 42015984;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11671106;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 1760232;
            result[1] += 1760232;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26403487;
            result[5] += 23763138;
          } else {
            result[0] += 36844082;
            result[1] += 2105376;
            result[2] += 0;
            result[3] += 0;
            result[4] += 5263440;
            result[5] += 9474192;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41297762;
            result[5] += 12389328;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 2039672;
            result[4] += 655608;
            result[5] += 50991809;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 915120;
            result[2] += 0;
            result[3] += 3965523;
            result[4] += 15557054;
            result[5] += 33249391;
          } else {
            result[0] += 170977;
            result[1] += 0;
            result[2] += 3077603;
            result[3] += 32314841;
            result[4] += 341955;
            result[5] += 17781711;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 6259481;
            result[1] += 13722709;
            result[2] += 0;
            result[3] += 1685245;
            result[4] += 30815908;
            result[5] += 1203746;
          } else {
            result[0] += 47831212;
            result[1] += 492090;
            result[2] += 639717;
            result[3] += 836554;
            result[4] += 2903334;
            result[5] += 984181;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 666920;
            result[3] += 18340310;
            result[4] += 1000380;
            result[5] += 33679479;
          } else {
            result[0] += 12842794;
            result[1] += 210537;
            result[2] += 19158922;
            result[3] += 12000643;
            result[4] += 5052902;
            result[5] += 4421289;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2025927;
            result[3] += 29375955;
            result[4] += 0;
            result[5] += 22285207;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 0;
            result[5] += 5965232;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 26843545;
            result[3] += 26843545;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 4880644;
            result[1] += 0;
            result[2] += 14641933;
            result[3] += 9761289;
            result[4] += 0;
            result[5] += 24403223;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 48035818;
            result[3] += 2825636;
            result[4] += 0;
            result[5] += 2825636;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 8053063;
            result[3] += 40265318;
            result[4] += 2684354;
            result[5] += 2684354;
          } else {
            result[0] += 0;
            result[1] += 10737418;
            result[2] += 32212254;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1533916;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 1533916;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42700000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1124336;
            result[1] += 0;
            result[2] += 45535648;
            result[3] += 5902769;
            result[4] += 281084;
            result[5] += 843252;
          } else {
            result[0] += 78261;
            result[1] += 0;
            result[2] += 51652303;
            result[3] += 1956526;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x420a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 213044;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53474047;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 2025927;
            result[1] += 1012963;
            result[2] += 0;
            result[3] += 0;
            result[4] += 15194459;
            result[5] += 35453739;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 453055;
            result[4] += 1585694;
            result[5] += 51648340;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40265318;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 224632;
            result[2] += 224632;
            result[3] += 8760655;
            result[4] += 4717275;
            result[5] += 39759895;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 5965232;
            result[4] += 1193046;
            result[5] += 46528812;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 43028624;
            result[4] += 0;
            result[5] += 10658466;
          } else {
            result[0] += 2729852;
            result[1] += 0;
            result[2] += 909950;
            result[3] += 24568668;
            result[4] += 0;
            result[5] += 25478619;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 34896609;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18790481;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 147492;
            result[1] += 53539599;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 28797118;
            result[1] += 5498947;
            result[2] += 144709;
            result[3] += 1881218;
            result[4] += 16930969;
            result[5] += 434127;
          } else {
            result[0] += 1902298;
            result[1] += 1902298;
            result[2] += 5495529;
            result[3] += 18811618;
            result[4] += 8243293;
            result[5] += 17332053;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 3734754;
            result[1] += 35013320;
            result[2] += 1867377;
            result[3] += 0;
            result[4] += 13071639;
            result[5] += 0;
          } else {
            result[0] += 48999103;
            result[1] += 256876;
            result[2] += 1091723;
            result[3] += 899066;
            result[4] += 1990789;
            result[5] += 449533;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 397682;
            result[2] += 6362914;
            result[3] += 21474836;
            result[4] += 4772185;
            result[5] += 20679472;
          } else {
            result[0] += 2776918;
            result[1] += 0;
            result[2] += 37025580;
            result[3] += 8330755;
            result[4] += 0;
            result[5] += 5553837;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 7320966;
            result[2] += 9761289;
            result[3] += 31724190;
            result[4] += 0;
            result[5] += 4880644;
          } else {
            result[0] += 2064888;
            result[1] += 0;
            result[2] += 28220137;
            result[3] += 8259552;
            result[4] += 688296;
            result[5] += 14454216;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
            result[0] += 46976204;
            result[1] += 0;
            result[2] += 6710886;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 477218;
            result[1] += 0;
            result[2] += 49272819;
            result[3] += 3221225;
            result[4] += 0;
            result[5] += 715827;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 215610;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51315372;
            result[5] += 2156108;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 32212254;
          } else {
            result[0] += 5651272;
            result[1] += 0;
            result[2] += 2825636;
            result[3] += 28256363;
            result[4] += 11302545;
            result[5] += 5651272;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 21474836;
            result[5] += 32212254;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 864526;
            result[4] += 345810;
            result[5] += 52476754;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 4796253;
            result[1] += 2630203;
            result[2] += 154717;
            result[3] += 8509481;
            result[4] += 6498149;
            result[5] += 31098286;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 813440;
            result[3] += 40400891;
            result[4] += 271146;
            result[5] += 12201611;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 41643541;
            result[1] += 720916;
            result[2] += 551289;
            result[3] += 1611460;
            result[4] += 8184524;
            result[5] += 975357;
          } else {
            result[0] += 3745611;
            result[1] += 49941480;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 2382021;
            result[1] += 1832323;
            result[2] += 4764042;
            result[3] += 19422633;
            result[4] += 4764042;
            result[5] += 20522028;
          } else {
            result[0] += 18734557;
            result[1] += 838860;
            result[2] += 27962026;
            result[3] += 1398101;
            result[4] += 838860;
            result[5] += 3914683;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 23008753;
            result[4] += 0;
            result[5] += 30678337;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1917396;
            result[3] += 47934902;
            result[4] += 0;
            result[5] += 3834792;
          } else {
            result[0] += 0;
            result[1] += 5368709;
            result[2] += 21474836;
            result[3] += 10737418;
            result[4] += 0;
            result[5] += 16106127;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 2064888;
            result[1] += 6194664;
            result[2] += 8259552;
            result[3] += 30973321;
            result[4] += 6194664;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 37814385;
            result[3] += 12604795;
            result[4] += 0;
            result[5] += 3267909;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15658734;
            result[3] += 31317469;
            result[4] += 0;
            result[5] += 6710886;
          } else {
            result[0] += 3928323;
            result[1] += 0;
            result[2] += 40592678;
            result[3] += 9166088;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 135402;
            result[1] += 0;
            result[2] += 51588352;
            result[3] += 1692531;
            result[4] += 0;
            result[5] += 270804;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 391876;
            result[1] += 1175629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52119584;
            result[5] += 0;
          } else {
            result[0] += 5368709;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 24159191;
            result[5] += 24159191;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 49596646;
            result[1] += 1533916;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2556528;
            result[5] += 0;
          } else {
            result[0] += 2941758;
            result[1] += 2206318;
            result[2] += 1470879;
            result[3] += 0;
            result[4] += 18385990;
            result[5] += 28682144;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1789569;
            result[4] += 1932735;
            result[5] += 49964786;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7158278;
            result[4] += 32212254;
            result[5] += 14316557;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 50529027;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 3158064;
          } else {
            result[0] += 367719;
            result[1] += 1470879;
            result[2] += 2757898;
            result[3] += 18385990;
            result[4] += 4780357;
            result[5] += 25924246;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42520000))) ) ) {
            result[0] += 42949672;
            result[1] += 10737418;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10737418;
            result[4] += 42949672;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 136956;
            result[1] += 53139263;
            result[2] += 0;
            result[3] += 0;
            result[4] += 410870;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 531555;
            result[1] += 34551098;
            result[2] += 0;
            result[3] += 0;
            result[4] += 18072882;
            result[5] += 531555;
          } else {
            result[0] += 45055244;
            result[1] += 1646537;
            result[2] += 1147586;
            result[3] += 2145487;
            result[4] += 2744228;
            result[5] += 948006;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 662803;
            result[1] += 1546541;
            result[2] += 1988410;
            result[3] += 26291209;
            result[4] += 3755887;
            result[5] += 19442238;
          } else {
            result[0] += 24738169;
            result[1] += 3158064;
            result[2] += 15790320;
            result[3] += 4210752;
            result[4] += 4737096;
            result[5] += 1052688;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 5113056;
            result[3] += 0;
            result[4] += 3834792;
            result[5] += 44739242;
          } else {
            result[0] += 0;
            result[1] += 2902004;
            result[2] += 5804009;
            result[3] += 14510024;
            result[4] += 10157017;
            result[5] += 20314034;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7617762;
            result[3] += 34824059;
            result[4] += 0;
            result[5] += 11245269;
          } else {
            result[0] += 0;
            result[1] += 1731841;
            result[2] += 25977624;
            result[3] += 10391049;
            result[4] += 0;
            result[5] += 15586574;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40802189;
            result[3] += 5010795;
            result[4] += 1431655;
            result[5] += 6442450;
          } else {
            result[0] += 37580963;
            result[1] += 0;
            result[2] += 16106127;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 5965232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46140712;
            result[3] += 6468324;
            result[4] += 0;
            result[5] += 1078054;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 745654;
            result[1] += 0;
            result[2] += 41010972;
            result[3] += 11184810;
            result[4] += 0;
            result[5] += 745654;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52009369;
            result[3] += 1677721;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53564797;
            result[3] += 122294;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 985084;
            result[4] += 51963193;
            result[5] += 738813;
          } else {
            result[0] += 0;
            result[1] += 44739242;
            result[2] += 0;
            result[3] += 0;
            result[4] += 8947848;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 19522578;
            result[4] += 0;
            result[5] += 34164512;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 46976204;
            result[5] += 6710886;
          } else {
            result[0] += 0;
            result[1] += 156979;
            result[2] += 0;
            result[3] += 941878;
            result[4] += 1098858;
            result[5] += 51489374;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 44278013;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 6641702;
            result[5] += 2767375;
          } else {
            result[0] += 504104;
            result[1] += 1092225;
            result[2] += 1512312;
            result[3] += 20416217;
            result[4] += 7309510;
            result[5] += 22852721;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 3834792;
            result[2] += 0;
            result[3] += 0;
            result[4] += 49852298;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 6710886;
            result[1] += 8388607;
            result[2] += 0;
            result[3] += 3914683;
            result[4] += 34113672;
            result[5] += 559240;
          } else {
            result[0] += 45038271;
            result[1] += 414039;
            result[2] += 138013;
            result[3] += 1840174;
            result[4] += 2760261;
            result[5] += 3496331;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 17530478;
            result[1] += 4017401;
            result[2] += 2921746;
            result[3] += 6208711;
            result[4] += 5478274;
            result[5] += 17530478;
          } else {
            result[0] += 4172571;
            result[1] += 2225371;
            result[2] += 25313602;
            result[3] += 15299430;
            result[4] += 1669028;
            result[5] += 5007086;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 976128;
            result[2] += 8785160;
            result[3] += 40997415;
            result[4] += 0;
            result[5] += 2928386;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 3834792;
            result[3] += 3834792;
            result[4] += 11504376;
            result[5] += 34513130;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 32212254;
            result[3] += 18790481;
            result[4] += 0;
            result[5] += 2684354;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 27802243;
            result[3] += 24926149;
            result[4] += 0;
            result[5] += 958698;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 43460978;
            result[3] += 5113056;
            result[4] += 0;
            result[5] += 5113056;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 6316128;
            result[3] += 9474192;
            result[4] += 0;
            result[5] += 37896770;
          } else {
            result[0] += 0;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45298483;
            result[3] += 5033164;
            result[4] += 0;
            result[5] += 3355443;
          } else {
            result[0] += 35791394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 10737418;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 45356335;
            result[3] += 7867935;
            result[4] += 0;
            result[5] += 462819;
          } else {
            result[0] += 82468;
            result[1] += 0;
            result[2] += 52202655;
            result[3] += 1237029;
            result[4] += 0;
            result[5] += 164937;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 666920;
            result[4] += 53020170;
            result[5] += 0;
          } else {
            result[0] += 4955731;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 31386299;
            result[5] += 17345060;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 2236962;
            result[2] += 0;
            result[3] += 0;
            result[4] += 51450129;
            result[5] += 0;
          } else {
            result[0] += 50465865;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3221225;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 1193046;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41756626;
            result[5] += 10737418;
          } else {
            result[0] += 0;
            result[1] += 124419;
            result[2] += 0;
            result[3] += 2177344;
            result[4] += 2923862;
            result[5] += 48461464;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 7456540;
            result[4] += 6860017;
            result[5] += 39370533;
          } else {
            result[0] += 0;
            result[1] += 766958;
            result[2] += 255652;
            result[3] += 33234865;
            result[4] += 1278264;
            result[5] += 18151349;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 49710269;
            result[2] += 0;
            result[3] += 0;
            result[4] += 3976821;
            result[5] += 0;
          } else {
            result[0] += 735439;
            result[1] += 4412637;
            result[2] += 1470879;
            result[3] += 0;
            result[4] += 47068134;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 33323022;
            result[2] += 0;
            result[3] += 3702558;
            result[4] += 16661511;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 3158064;
            result[1] += 26843545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 22895965;
            result[5] += 789516;
          } else {
            result[0] += 45997533;
            result[1] += 419430;
            result[2] += 186413;
            result[3] += 2236962;
            result[4] += 2982616;
            result[5] += 1864135;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 737966;
            result[1] += 3689834;
            result[2] += 9962553;
            result[3] += 21770023;
            result[4] += 4427801;
            result[5] += 13098912;
          } else {
            result[0] += 23298171;
            result[1] += 675309;
            result[2] += 22622862;
            result[3] += 3038891;
            result[4] += 2025927;
            result[5] += 2025927;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 53687091;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 16036403;
            result[3] += 31375572;
            result[4] += 0;
            result[5] += 6275114;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46976204;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 1988410;
            result[2] += 5965232;
            result[3] += 0;
            result[4] += 0;
            result[5] += 45733448;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46017506;
            result[3] += 0;
            result[4] += 0;
            result[5] += 7669584;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 39232874;
            result[3] += 4818072;
            result[4] += 0;
            result[5] += 9636144;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 17895697;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 10737418;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 0;
            result[4] += 0;
            result[5] += 32212254;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46318274;
            result[3] += 6667024;
            result[4] += 0;
            result[5] += 701792;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 52250647;
            result[3] += 1256888;
            result[4] += 89777;
            result[5] += 89777;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 52796019;
            result[5] += 891072;
          } else {
            result[0] += 0;
            result[1] += 40265318;
            result[2] += 0;
            result[3] += 0;
            result[4] += 13421772;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 3976821;
            result[2] += 0;
            result[3] += 13918875;
            result[4] += 25849340;
            result[5] += 9942053;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 35549560;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3627506;
            result[4] += 14510024;
            result[5] += 0;
          } else {
            result[0] += 245595;
            result[1] += 196476;
            result[2] += 49119;
            result[3] += 3683926;
            result[4] += 2505070;
            result[5] += 47006904;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 6710886;
            result[4] += 10066329;
            result[5] += 36909875;
          } else {
            result[0] += 766958;
            result[1] += 0;
            result[2] += 383479;
            result[3] += 41799235;
            result[4] += 0;
            result[5] += 10737418;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 53055478;
            result[2] += 0;
            result[3] += 126322;
            result[4] += 505290;
            result[5] += 0;
          } else {
            result[0] += 53687091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 1229475;
            result[1] += 24179682;
            result[2] += 0;
            result[3] += 0;
            result[4] += 28277933;
            result[5] += 0;
          } else {
            result[0] += 45931776;
            result[1] += 415463;
            result[2] += 0;
            result[3] += 1292552;
            result[4] += 5262535;
            result[5] += 784764;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 2191309;
            result[1] += 219130;
            result[2] += 15777430;
            result[3] += 20817443;
            result[4] += 219130;
            result[5] += 14462644;
          } else {
            result[0] += 49304471;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4382619;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 29080507;
            result[4] += 6710886;
            result[5] += 17895697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 2236962;
            result[3] += 8947848;
            result[4] += 0;
            result[5] += 42502280;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 5965232;
            result[1] += 32808777;
            result[2] += 0;
            result[3] += 0;
            result[4] += 11930464;
            result[5] += 2982616;
          } else {
            result[0] += 1563701;
            result[1] += 521233;
            result[2] += 10424677;
            result[3] += 33358969;
            result[4] += 1563701;
            result[5] += 6254806;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 29826161;
            result[1] += 0;
            result[2] += 5965232;
            result[3] += 5965232;
            result[4] += 0;
            result[5] += 11930464;
          } else {
            result[0] += 1988410;
            result[1] += 0;
            result[2] += 38774010;
            result[3] += 11930464;
            result[4] += 0;
            result[5] += 994205;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 11184810;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 2236962;
          } else {
            result[0] += 1118481;
            result[1] += 0;
            result[2] += 33554431;
            result[3] += 12303291;
            result[4] += 0;
            result[5] += 6710886;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 28121809;
            result[3] += 7669584;
            result[4] += 0;
            result[5] += 17895697;
          } else {
            result[0] += 248551;
            result[1] += 0;
            result[2] += 46479102;
            result[3] += 6710886;
            result[4] += 0;
            result[5] += 248551;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 50653922;
            result[3] += 2729852;
            result[4] += 0;
            result[5] += 303316;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
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
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 287096;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53399994;
            result[5] += 0;
          } else {
            result[0] += 3660483;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 34164512;
            result[5] += 15862095;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 16339549;
            result[1] += 12838217;
            result[2] += 0;
            result[3] += 2334221;
            result[4] += 16339549;
            result[5] += 5835553;
          } else {
            result[0] += 524800;
            result[1] += 314880;
            result[2] += 0;
            result[3] += 3621123;
            result[4] += 1836801;
            result[5] += 47389485;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 795364;
            result[2] += 8749007;
            result[3] += 18691061;
            result[4] += 397682;
            result[5] += 25053975;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 443694;
            result[3] += 46587971;
            result[4] += 0;
            result[5] += 6655424;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 35791394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 17895697;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 2084935;
            result[1] += 15115782;
            result[2] += 1042467;
            result[3] += 521233;
            result[4] += 31795267;
            result[5] += 3127403;
          } else {
            result[0] += 45912353;
            result[1] += 598056;
            result[2] += 506047;
            result[3] += 1242117;
            result[4] += 4554431;
            result[5] += 874082;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 1370734;
            result[1] += 456911;
            result[2] += 5026025;
            result[3] += 25587039;
            result[4] += 3883747;
            result[5] += 17362633;
          } else {
            result[0] += 16174956;
            result[1] += 2064888;
            result[2] += 25122805;
            result[3] += 2409036;
            result[4] += 2409036;
            result[5] += 5506368;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1626881;
            result[5] += 52060209;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 18078306;
            result[3] += 32321820;
            result[4] += 0;
            result[5] += 3286964;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 19173961;
            result[3] += 11504376;
            result[4] += 0;
            result[5] += 23008753;
          } else {
            result[0] += 2191309;
            result[1] += 0;
            result[2] += 47113161;
            result[3] += 4382619;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 53687091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 17895697;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 17895697;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 498641;
            result[1] += 0;
            result[2] += 46041251;
            result[3] += 6149914;
            result[4] += 0;
            result[5] += 997283;
          } else {
            result[0] += 9761289;
            result[1] += 0;
            result[2] += 19522578;
            result[3] += 24403223;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 53687091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 53054237;
            result[3] += 527378;
            result[4] += 0;
            result[5] += 105475;
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
