
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 3564288;
            result[2] += 0;
            result[3] += 0;
            result[4] += 424150297;
            result[5] += 1782144;
          } else {
            result[0] += 11302545;
            result[1] += 0;
            result[2] += 0;
            result[3] += 11302545;
            result[4] += 282563637;
            result[5] += 124328000;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 0;
            result[1] += 406891638;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 22605091;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 251412719;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 178084009;
            result[5] += 0;
          } else {
            result[0] += 1598623;
            result[1] += 0;
            result[2] += 0;
            result[3] += 12256110;
            result[4] += 22380722;
            result[5] += 393261273;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            result[0] += 363757434;
            result[1] += 17530478;
            result[2] += 0;
            result[3] += 0;
            result[4] += 43826196;
            result[5] += 4382619;
          } else {
            result[0] += 20093414;
            result[1] += 1255838;
            result[2] += 12558383;
            result[3] += 159491475;
            result[4] += 41442666;
            result[5] += 194654950;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 429496729;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 428500217;
            result[2] += 0;
            result[3] += 996512;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 53024287;
            result[1] += 15907286;
            result[2] += 5302428;
            result[3] += 116653432;
            result[4] += 121955861;
            result[5] += 116653432;
          } else {
            result[0] += 374015218;
            result[1] += 9699564;
            result[2] += 775965;
            result[3] += 8923599;
            result[4] += 33366502;
            result[5] += 2715878;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 4367763;
            result[1] += 10191447;
            result[2] += 36398027;
            result[3] += 219844088;
            result[4] += 8735526;
            result[5] += 149959875;
          } else {
            result[0] += 142592914;
            result[1] += 12025908;
            result[2] += 170080704;
            result[3] += 32641751;
            result[4] += 36077725;
            result[5] += 36077725;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 23216039;
            result[2] += 0;
            result[3] += 23216039;
            result[4] += 69648118;
            result[5] += 313416532;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 10737418;
            result[3] += 397284474;
            result[4] += 0;
            result[5] += 21474836;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 343597383;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 0;
            result[4] += 0;
            result[5] += 368140053;
          } else {
            result[0] += 8421504;
            result[1] += 0;
            result[2] += 269488144;
            result[3] += 109479558;
            result[4] += 16843009;
            result[5] += 25264513;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 429496729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 25264513;
            result[4] += 75793540;
            result[5] += 328438675;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 273316100;
            result[3] += 97612893;
            result[4] += 0;
            result[5] += 58567735;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 429496729;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2529427;
            result[1] += 0;
            result[2] += 392567093;
            result[3] += 33388438;
            result[4] += 0;
            result[5] += 1011770;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 413289305;
            result[5] += 16207423;
          } else {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 360223063;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 41564199;
            result[5] += 27709466;
          } else {
            result[0] += 0;
            result[1] += 19822925;
            result[2] += 0;
            result[3] += 0;
            result[4] += 158583407;
            result[5] += 251090395;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 10120688;
            result[4] += 7590516;
            result[5] += 411785524;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 1639300;
            result[1] += 13114403;
            result[2] += 1639300;
            result[3] += 108193832;
            result[4] += 40982512;
            result[5] += 263927379;
          } else {
            result[0] += 0;
            result[1] += 5402474;
            result[2] += 0;
            result[3] += 299837339;
            result[4] += 13506186;
            result[5] += 110750728;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x421e0000))) ) ) {
            result[0] += 0;
            result[1] += 396458519;
            result[2] += 0;
            result[3] += 0;
            result[4] += 33038209;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 1068399;
            result[1] += 428428329;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 429496729;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
            result[0] += 284161977;
            result[1] += 3253763;
            result[2] += 3253763;
            result[3] += 1084587;
            result[4] += 130150524;
            result[5] += 7592113;
          } else {
            result[0] += 32482945;
            result[1] += 42107522;
            result[2] += 37295234;
            result[3] += 147977864;
            result[4] += 60153603;
            result[5] += 109479558;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 388256996;
            result[1] += 502923;
            result[2] += 10058471;
            result[3] += 1508770;
            result[4] += 27157872;
            result[5] += 2011694;
          } else {
            result[0] += 26843545;
            result[1] += 389231411;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 23860929;
            result[4] += 23860929;
            result[5] += 381774870;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 143165576;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 25478619;
            result[3] += 327582251;
            result[4] += 0;
            result[5] += 76435858;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 312361257;
            result[3] += 117135471;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 76354974;
            result[4] += 19088743;
            result[5] += 295875524;
          } else {
            result[0] += 13854733;
            result[1] += 0;
            result[2] += 221675731;
            result[3] += 41564199;
            result[4] += 41564199;
            result[5] += 110837865;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 429496729;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 351406415;
            result[3] += 48806446;
            result[4] += 0;
            result[5] += 29283867;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 219742512;
            result[3] += 184783476;
            result[4] += 0;
            result[5] += 24970740;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 12349746;
            result[1] += 4116582;
            result[2] += 336187535;
            result[3] += 63120925;
            result[4] += 8233164;
            result[5] += 5488776;
          } else {
            result[0] += 343597383;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 429496729;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 339076365;
            result[3] += 90420364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 420049254;
            result[3] += 8720745;
            result[4] += 0;
            result[5] += 726728;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 429496729;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 416144499;
            result[5] += 13352229;
          } else {
            result[0] += 162512276;
            result[1] += 0;
            result[2] += 5804009;
            result[3] += 0;
            result[4] += 174120295;
            result[5] += 87060147;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 8633100;
            result[2] += 431655;
            result[3] += 34100745;
            result[4] += 26762610;
            result[5] += 359568618;
          } else {
            result[0] += 0;
            result[1] += 4719744;
            result[2] += 30678337;
            result[3] += 278464912;
            result[4] += 11799360;
            result[5] += 103834374;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 36359511;
            result[1] += 72719022;
            result[2] += 0;
            result[3] += 13634816;
            result[4] += 288603622;
            result[5] += 18179755;
          } else {
            result[0] += 354110024;
            result[1] += 8645264;
            result[2] += 1037431;
            result[3] += 10028506;
            result[4] += 36310109;
            result[5] += 19365391;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 7953643;
            result[1] += 10604857;
            result[2] += 80862038;
            result[3] += 161724077;
            result[4] += 17232893;
            result[5] += 151119219;
          } else {
            result[0] += 322122547;
            result[1] += 0;
            result[2] += 53687091;
            result[3] += 0;
            result[4] += 26843545;
            result[5] += 26843545;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 368140053;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33038209;
            result[3] += 305603442;
            result[4] += 0;
            result[5] += 90855077;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 429496729;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 318145725;
            result[3] += 47721858;
            result[4] += 0;
            result[5] += 63629145;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 308936244;
            result[3] += 82885333;
            result[4] += 0;
            result[5] += 37675151;
          } else {
            result[0] += 16519104;
            result[1] += 0;
            result[2] += 165191049;
            result[3] += 247786574;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 312361257;
            result[3] += 0;
            result[4] += 0;
            result[5] += 117135471;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 411601032;
            result[3] += 17895697;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 429496729;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 352571942;
            result[3] += 76924787;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1136234;
            result[1] += 0;
            result[2] += 409044504;
            result[3] += 18179755;
            result[4] += 0;
            result[5] += 1136234;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ec0000))) ) ) {
            result[0] += 381774870;
            result[1] += 0;
            result[2] += 47721858;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42930000))) ) ) {
            result[0] += 5153960;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 419188807;
            result[5] += 5153960;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 214748364;
          }
        } else {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 343597383;
            result[5] += 85899345;
          } else {
            result[0] += 982830;
            result[1] += 0;
            result[2] += 982830;
            result[3] += 16708110;
            result[4] += 15725280;
            result[5] += 395097677;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42930000))) ) ) {
            result[0] += 369844405;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 59652323;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 8103711;
            result[2] += 0;
            result[3] += 129659390;
            result[4] += 0;
            result[5] += 291733627;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 20132659;
            result[1] += 0;
            result[2] += 0;
            result[3] += 40265318;
            result[4] += 0;
            result[5] += 369098751;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 62634939;
            result[1] += 0;
            result[2] += 8947848;
            result[3] += 143165576;
            result[4] += 17895697;
            result[5] += 196852667;
          } else {
            result[0] += 0;
            result[1] += 5651272;
            result[2] += 0;
            result[3] += 358855820;
            result[4] += 0;
            result[5] += 64989636;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 17179869;
            result[1] += 25769803;
            result[2] += 0;
            result[3] += 0;
            result[4] += 386547056;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 305141228;
            result[1] += 19855079;
            result[2] += 0;
            result[3] += 19855079;
            result[4] += 77330311;
            result[5] += 7315029;
          } else {
            result[0] += 401571064;
            result[1] += 1117026;
            result[2] += 2234053;
            result[3] += 7260672;
            result[4] += 17313912;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 18775813;
            result[2] += 70409299;
            result[3] += 161941389;
            result[4] += 32857673;
            result[5] += 145512553;
          } else {
            result[0] += 272909380;
            result[1] += 0;
            result[2] += 116322030;
            result[3] += 0;
            result[4] += 40265318;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 6410398;
            result[2] += 44872792;
            result[3] += 96155984;
            result[4] += 19231196;
            result[5] += 262826356;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 111208974;
            result[3] += 253096287;
            result[4] += 0;
            result[5] += 65191467;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 20698637;
            result[1] += 15523978;
            result[2] += 263907628;
            result[3] += 87969209;
            result[4] += 10349318;
            result[5] += 31047956;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 92035013;
            result[1] += 30678337;
            result[2] += 306783378;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 378366166;
            result[1] += 0;
            result[2] += 51130563;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 265277391;
            result[3] += 164219337;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 5671625;
            result[1] += 1031204;
            result[2] += 393404567;
            result[3] += 24748911;
            result[4] += 0;
            result[5] += 4640420;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 1731841;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 420837521;
            result[5] += 6927366;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 162912552;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 177722784;
            result[5] += 88861392;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1052688;
            result[3] += 20527417;
            result[4] += 18422041;
            result[5] += 389494583;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 174483046;
            result[1] += 187904819;
            result[2] += 0;
            result[3] += 13421772;
            result[4] += 40265318;
            result[5] += 13421772;
          } else {
            result[0] += 0;
            result[1] += 7099119;
            result[2] += 5324339;
            result[3] += 202324905;
            result[4] += 12423459;
            result[5] += 202324905;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 178406333;
            result[1] += 24228020;
            result[2] += 4405094;
            result[3] += 4405094;
            result[4] += 193824165;
            result[5] += 24228020;
          } else {
            result[0] += 13904570;
            result[1] += 0;
            result[2] += 7724761;
            result[3] += 156040178;
            result[4] += 54073329;
            result[5] += 197753889;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 13591668;
            result[1] += 203875029;
            result[2] += 8155001;
            result[3] += 16310002;
            result[4] += 187565027;
            result[5] += 0;
          } else {
            result[0] += 363420309;
            result[1] += 355249;
            result[2] += 14920481;
            result[3] += 18828227;
            result[4] += 22380722;
            result[5] += 9591738;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 429496729;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 39045157;
            result[1] += 331883836;
            result[2] += 0;
            result[3] += 0;
            result[4] += 58567735;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 89478485;
            result[4] += 35791394;
            result[5] += 232644061;
          } else {
            result[0] += 3408704;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 310192082;
            result[4] += 0;
            result[5] += 54539267;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 107374182;
            result[3] += 178956970;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 339602065;
            result[3] += 79906368;
            result[4] += 0;
            result[5] += 9988296;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 393705335;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 171798691;
            result[3] += 257698037;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 14810232;
            result[1] += 0;
            result[2] += 351743011;
            result[3] += 57389649;
            result[4] += 0;
            result[5] += 5553837;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 429496729;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 429496729;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 9988296;
            result[1] += 0;
            result[2] += 357913941;
            result[3] += 59929776;
            result[4] += 0;
            result[5] += 1664716;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 419633547;
            result[3] += 9863181;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 3655291;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 420358501;
            result[5] += 5482936;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 429496729;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 9696473;
            result[4] += 11977996;
            result[5] += 407822259;
          } else {
            result[0] += 66502719;
            result[1] += 0;
            result[2] += 0;
            result[3] += 44335146;
            result[4] += 88670292;
            result[5] += 229988571;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 8994695;
            result[1] += 0;
            result[2] += 4497347;
            result[3] += 80952263;
            result[4] += 31481435;
            result[5] += 303570986;
          } else {
            result[0] += 18407002;
            result[1] += 3067833;
            result[2] += 0;
            result[3] += 297579876;
            result[4] += 3067833;
            result[5] += 107374182;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 428464285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1032444;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 374957462;
            result[2] += 0;
            result[3] += 0;
            result[4] += 47721858;
            result[5] += 6817408;
          } else {
            result[0] += 0;
            result[1] += 35422410;
            result[2] += 0;
            result[3] += 8855602;
            result[4] += 385218716;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 38177487;
            result[1] += 4772185;
            result[2] += 33405301;
            result[3] += 90671531;
            result[4] += 57266230;
            result[5] += 205203992;
          } else {
            result[0] += 383965774;
            result[1] += 7170229;
            result[2] += 1434045;
            result[3] += 5019160;
            result[4] += 29397939;
            result[5] += 2509580;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 13244392;
            result[1] += 0;
            result[2] += 96494859;
            result[3] += 157040654;
            result[4] += 11352336;
            result[5] += 151364486;
          } else {
            result[0] += 272476419;
            result[1] += 0;
            result[2] += 92364888;
            result[3] += 0;
            result[4] += 60037177;
            result[5] += 4618244;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            result[0] += 22605091;
            result[1] += 67815273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 293866183;
            result[5] += 45210182;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 429496729;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 10226112;
            result[1] += 20452225;
            result[2] += 40904450;
            result[3] += 40904450;
            result[4] += 0;
            result[5] += 317009490;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 33907636;
            result[3] += 305168728;
            result[4] += 0;
            result[5] += 90420364;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 286331153;
            result[3] += 57266230;
            result[4] += 0;
            result[5] += 57266230;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 286331153;
            result[4] += 0;
            result[5] += 57266230;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 355868718;
            result[3] += 67492343;
            result[4] += 0;
            result[5] += 6135667;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d80000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 174483046;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 40265318;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 365351114;
            result[3] += 64145615;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 429496729;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 229064922;
            result[3] += 200431807;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 328438675;
            result[3] += 0;
            result[4] += 0;
            result[5] += 101058054;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 361681456;
            result[3] += 31647127;
            result[4] += 0;
            result[5] += 36168145;
          } else {
            result[0] += 1470879;
            result[1] += 0;
            result[2] += 412581618;
            result[3] += 15444231;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0;
            result[1] += 7469508;
            result[2] += 0;
            result[3] += 0;
            result[4] += 416425089;
            result[5] += 5602131;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            result[0] += 184070026;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 184070026;
            result[5] += 61356675;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42580000))) ) ) {
            result[0] += 369367187;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 25769803;
            result[5] += 34359738;
          } else {
            result[0] += 4740582;
            result[1] += 0;
            result[2] += 474058;
            result[3] += 23228851;
            result[4] += 25125084;
            result[5] += 375928152;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 59929776;
            result[1] += 23306024;
            result[2] += 0;
            result[3] += 33294320;
            result[4] += 66588640;
            result[5] += 246377968;
          } else {
            result[0] += 3408704;
            result[1] += 0;
            result[2] += 3408704;
            result[3] += 289739857;
            result[4] += 1704352;
            result[5] += 131235111;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 89478485;
            result[2] += 0;
            result[3] += 0;
            result[4] += 340018244;
            result[5] += 0;
          } else {
            result[0] += 71582788;
            result[1] += 143165576;
            result[2] += 161061273;
            result[3] += 53687091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 11545611;
            result[1] += 131619965;
            result[2] += 2309122;
            result[3] += 18472977;
            result[4] += 258621686;
            result[5] += 6927366;
          } else {
            result[0] += 372026159;
            result[1] += 2298822;
            result[2] += 1532548;
            result[3] += 21072542;
            result[4] += 22988228;
            result[5] += 9578428;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 14497779;
            result[1] += 3624444;
            result[2] += 233776700;
            result[3] += 103296681;
            result[4] += 7248889;
            result[5] += 67052232;
          } else {
            result[0] += 317454104;
            result[1] += 0;
            result[2] += 24898361;
            result[3] += 24898361;
            result[4] += 56021312;
            result[5] += 6224590;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 198229259;
            result[3] += 0;
            result[4] += 198229259;
            result[5] += 33038209;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 107374182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 322122547;
            result[5] += 0;
          } else {
            result[0] += 28633115;
            result[1] += 0;
            result[2] += 0;
            result[3] += 42949672;
            result[4] += 0;
            result[5] += 357913941;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 357913941;
            result[3] += 0;
            result[4] += 0;
            result[5] += 71582788;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 33038209;
            result[4] += 0;
            result[5] += 396458519;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 46854188;
            result[3] += 351406415;
            result[4] += 0;
            result[5] += 31236125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 286331153;
            result[3] += 125985707;
            result[4] += 0;
            result[5] += 17179869;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 429496729;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 393705335;
            result[1] += 0;
            result[2] += 35791394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 8305185;
            result[1] += 0;
            result[2] += 351190695;
            result[3] += 67627938;
            result[4] += 0;
            result[5] += 2372910;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 420747722;
            result[3] += 8749007;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41e00000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 3734754;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 425761975;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 40904450;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 102261126;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 107374182;
            result[4] += 0;
            result[5] += 322122547;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 334053011;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95443717;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 2921746;
            result[2] += 0;
            result[3] += 29634856;
            result[4] += 20034832;
            result[5] += 376905293;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 357244943;
            result[4] += 0;
            result[5] += 72251786;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 71582788;
            result[4] += 0;
            result[5] += 357913941;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 428459297;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1037431;
            result[5] += 0;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
            result[0] += 15907286;
            result[1] += 318145725;
            result[2] += 0;
            result[3] += 0;
            result[4] += 95443717;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 68719476;
            result[3] += 0;
            result[4] += 360777252;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 48456041;
            result[1] += 125545197;
            result[2] += 0;
            result[3] += 4405094;
            result[4] += 248887848;
            result[5] += 2202547;
          } else {
            result[0] += 384863523;
            result[1] += 5481270;
            result[2] += 1174558;
            result[3] += 8221906;
            result[4] += 25057238;
            result[5] += 4698232;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 19346699;
            result[1] += 1934669;
            result[2] += 23216039;
            result[3] += 179924305;
            result[4] += 32889389;
            result[5] += 172185625;
          } else {
            result[0] += 171798691;
            result[1] += 0;
            result[2] += 166256798;
            result[3] += 22167573;
            result[4] += 27709466;
            result[5] += 41564199;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 322122547;
            result[4] += 0;
            result[5] += 107374182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 11012736;
            result[2] += 38544578;
            result[3] += 319369362;
            result[4] += 0;
            result[5] += 60570051;
          } else {
            result[0] += 0;
            result[1] += 66076419;
            result[2] += 330382099;
            result[3] += 33038209;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 54829369;
            result[3] += 210179250;
            result[4] += 0;
            result[5] += 164488109;
          } else {
            result[0] += 40904450;
            result[1] += 0;
            result[2] += 255652815;
            result[3] += 71582788;
            result[4] += 20452225;
            result[5] += 40904450;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 355604819;
            result[3] += 46182444;
            result[4] += 4618244;
            result[5] += 23091222;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 429496729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 429496729;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f70000))) ) ) {
            result[0] += 4405094;
            result[1] += 0;
            result[2] += 339192288;
            result[3] += 81494251;
            result[4] += 0;
            result[5] += 4405094;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            result[0] += 599855;
            result[1] += 599855;
            result[2] += 409701489;
            result[3] += 16795961;
            result[4] += 0;
            result[5] += 1799567;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 3904515;
            result[4] += 409974150;
            result[5] += 15618062;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 405635800;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23860929;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 297343889;
            result[1] += 33038209;
            result[2] += 0;
            result[3] += 0;
            result[4] += 99114629;
            result[5] += 0;
          } else {
            result[0] += 2813297;
            result[1] += 1406648;
            result[2] += 0;
            result[3] += 21568613;
            result[4] += 35166216;
            result[5] += 368541953;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38347922;
            result[3] += 53687091;
            result[4] += 46017506;
            result[5] += 291444209;
          } else {
            result[0] += 8421504;
            result[1] += 0;
            result[2] += 8421504;
            result[3] += 336860180;
            result[4] += 0;
            result[5] += 75793540;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
            result[2] += 0;
            result[3] += 71582788;
            result[4] += 125269879;
            result[5] += 17895697;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 38710005;
            result[1] += 138250020;
            result[2] += 0;
            result[3] += 16590002;
            result[4] += 206453363;
            result[5] += 29493337;
          } else {
            result[0] += 379910073;
            result[1] += 7628716;
            result[2] += 1525743;
            result[3] += 13350253;
            result[4] += 19834662;
            result[5] += 7247280;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 7405116;
            result[1] += 22215348;
            result[2] += 35544556;
            result[3] += 165874598;
            result[4] += 31101487;
            result[5] += 167355622;
          } else {
            result[0] += 200603262;
            result[1] += 12859183;
            result[2] += 151738365;
            result[3] += 20574693;
            result[4] += 33433877;
            result[5] += 10287346;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 429496729;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 391599959;
            result[4] += 0;
            result[5] += 37896770;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 102261126;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 112487238;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 42949672;
            result[3] += 28633115;
            result[4] += 0;
            result[5] += 357913941;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 143165576;
            result[4] += 0;
            result[5] += 286331153;
          } else {
            result[0] += 18673770;
            result[1] += 0;
            result[2] += 364138531;
            result[3] += 0;
            result[4] += 0;
            result[5] += 46684427;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42dc0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 78090314;
            result[3] += 58567735;
            result[4] += 0;
            result[5] += 292838679;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 227380621;
            result[3] += 157903209;
            result[4] += 0;
            result[5] += 44212898;
          }
        } else {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 2610922;
            result[1] += 0;
            result[2] += 348558136;
            result[3] += 73105826;
            result[4] += 1305461;
            result[5] += 3916383;
          } else {
            result[0] += 343597383;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 2268468;
            result[1] += 0;
            result[2] += 414373605;
            result[3] += 12854655;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 214748364;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 2260509;
            result[2] += 0;
            result[3] += 0;
            result[4] += 415933674;
            result[5] += 11302545;
          } else {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 383064650;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 23216039;
            result[5] += 23216039;
          } else {
            result[0] += 6316128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 18948385;
            result[4] += 176851594;
            result[5] += 227380621;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 71582788;
            result[2] += 35791394;
            result[3] += 7158278;
            result[4] += 236223201;
            result[5] += 78741067;
          } else {
            result[0] += 0;
            result[1] += 3771650;
            result[2] += 942912;
            result[3] += 33944856;
            result[4] += 15086603;
            result[5] += 375750706;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 344166253;
            result[4] += 0;
            result[5] += 85330476;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 138547332;
            result[3] += 69273666;
            result[4] += 0;
            result[5] += 221675731;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x420e0000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 92035013;
            result[2] += 0;
            result[3] += 0;
            result[4] += 337461716;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 429496729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 106389098;
            result[1] += 33492864;
            result[2] += 0;
            result[3] += 3940336;
            result[4] += 283704261;
            result[5] += 1970168;
          } else {
            result[0] += 366807371;
            result[1] += 9328773;
            result[2] += 1119452;
            result[3] += 17164943;
            result[4] += 22389056;
            result[5] += 12687131;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 9170748;
            result[1] += 3056916;
            result[2] += 61138324;
            result[3] += 148260436;
            result[4] += 19869955;
            result[5] += 188000347;
          } else {
            result[0] += 154285232;
            result[1] += 12509613;
            result[2] += 170964717;
            result[3] += 47953518;
            result[4] += 39613776;
            result[5] += 4169871;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42800000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 429496729;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 61356675;
            result[4] += 0;
            result[5] += 368140053;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 29620464;
            result[3] += 311014873;
            result[4] += 0;
            result[5] += 88861392;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 214748364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 214748364;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 214748364;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 61356675;
            result[3] += 276105040;
            result[4] += 0;
            result[5] += 92035013;
          } else {
            result[0] += 61356675;
            result[1] += 0;
            result[2] += 245426702;
            result[3] += 30678337;
            result[4] += 92035013;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 429496729;
          } else {
            result[0] += 0;
            result[1] += 6817408;
            result[2] += 313600786;
            result[3] += 92035013;
            result[4] += 0;
            result[5] += 17043521;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
            result[2] += 143165576;
            result[3] += 0;
            result[4] += 143165576;
            result[5] += 0;
          } else {
            result[0] += 429496729;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 200431807;
            result[3] += 229064922;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2160989;
            result[1] += 0;
            result[2] += 401403861;
            result[3] += 23770888;
            result[4] += 0;
            result[5] += 2160989;
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
