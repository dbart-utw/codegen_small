
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
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 4210752;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 854782706;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 38177487;
            result[3] += 0;
            result[4] += 553573562;
            result[5] += 267242409;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 687194767;
            result[5] += 171798691;
          } else {
            result[0] += 858993459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 80530636;
            result[4] += 228170137;
            result[5] += 550292684;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 43836847;
            result[4] += 19830954;
            result[5] += 795325657;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 792917039;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 66076419;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 132152839;
            result[2] += 0;
            result[3] += 0;
            result[4] += 528611359;
            result[5] += 198229259;
          }
        } else {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 20132659;
            result[3] += 301989887;
            result[4] += 26843545;
            result[5] += 510027366;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 153391689;
            result[3] += 153391689;
            result[4] += 61356675;
            result[5] += 490853405;
          } else {
            result[0] += 5269898;
            result[1] += 0;
            result[2] += 31619391;
            result[3] += 632387822;
            result[4] += 0;
            result[5] += 189716346;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 12271335;
            result[1] += 748551442;
            result[2] += 0;
            result[3] += 12271335;
            result[4] += 85899345;
            result[5] += 0;
          } else {
            result[0] += 133083493;
            result[1] += 84689495;
            result[2] += 0;
            result[3] += 0;
            result[4] += 623072720;
            result[5] += 18147749;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 742367715;
            result[1] += 14204417;
            result[2] += 1495201;
            result[3] += 14952018;
            result[4] += 58312871;
            result[5] += 27661234;
          } else {
            result[0] += 206728716;
            result[1] += 0;
            result[2] += 117621510;
            result[3] += 278014480;
            result[4] += 35642882;
            result[5] += 220985869;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 858993459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 15618062;
            result[3] += 359215446;
            result[4] += 0;
            result[5] += 484159949;
          } else {
            result[0] += 0;
            result[1] += 23216039;
            result[2] += 116080197;
            result[3] += 580400985;
            result[4] += 0;
            result[5] += 139296236;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 24027789;
            result[1] += 48055578;
            result[2] += 312361257;
            result[3] += 342395994;
            result[4] += 24027789;
            result[5] += 108125050;
          } else {
            result[0] += 42949672;
            result[1] += 0;
            result[2] += 794568949;
            result[3] += 21474836;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 171798691;
            result[3] += 220884032;
            result[4] += 0;
            result[5] += 466310734;
          } else {
            result[0] += 145024869;
            result[1] += 44623036;
            result[2] += 591255238;
            result[3] += 44623036;
            result[4] += 0;
            result[5] += 33467277;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 597560667;
            result[1] += 0;
            result[2] += 261432791;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2938404;
            result[1] += 0;
            result[2] += 796307505;
            result[3] += 55829677;
            result[4] += 979468;
            result[5] += 2938404;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 14759337;
            result[1] += 11807470;
            result[2] += 0;
            result[3] += 0;
            result[4] += 797004240;
            result[5] += 35422410;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 57266230;
            result[4] += 114532461;
            result[5] += 687194767;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 792917039;
            result[2] += 0;
            result[3] += 66076419;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 766486471;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 92506987;
            result[5] += 0;
          } else {
            result[0] += 118481856;
            result[1] += 207343248;
            result[2] += 0;
            result[3] += 88861392;
            result[4] += 177722784;
            result[5] += 266584176;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 2359872;
            result[1] += 0;
            result[2] += 0;
            result[3] += 17699041;
            result[4] += 30678337;
            result[5] += 808256207;
          } else {
            result[0] += 25565281;
            result[1] += 2556528;
            result[2] += 15339168;
            result[3] += 207078780;
            result[4] += 79252372;
            result[5] += 529201327;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x422a0000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 67815273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 791178185;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 644245094;
            result[2] += 0;
            result[3] += 0;
            result[4] += 214748364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 856851330;
            result[2] += 0;
            result[3] += 0;
            result[4] += 2142128;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 158455104;
            result[1] += 100076907;
            result[2] += 0;
            result[3] += 0;
            result[4] += 567102477;
            result[5] += 33358969;
          } else {
            result[0] += 736166903;
            result[1] += 12678870;
            result[2] += 15056158;
            result[3] += 30904746;
            result[4] += 37244181;
            result[5] += 26942599;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 45946161;
            result[1] += 9988296;
            result[2] += 43948502;
            result[3] += 391541204;
            result[4] += 75911049;
            result[5] += 291658244;
          } else {
            result[0] += 325631507;
            result[1] += 0;
            result[2] += 494061597;
            result[3] += 28071681;
            result[4] += 0;
            result[5] += 11228672;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 36552913;
            result[2] += 54829369;
            result[3] += 18276456;
            result[4] += 18276456;
            result[5] += 731058262;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 47721858;
            result[1] += 620384164;
            result[2] += 0;
            result[3] += 0;
            result[4] += 190887435;
            result[5] += 0;
          } else {
            result[0] += 85899345;
            result[1] += 0;
            result[2] += 171798691;
            result[3] += 300647710;
            result[4] += 85899345;
            result[5] += 214748364;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 40904450;
            result[3] += 736280107;
            result[4] += 0;
            result[5] += 81808900;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 528611359;
            result[3] += 330382099;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
            result[2] += 71582788;
            result[3] += 501079517;
            result[4] += 0;
            result[5] += 143165576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 827178886;
            result[3] += 31814572;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 773094113;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 719885206;
            result[3] += 118242014;
            result[4] += 0;
            result[5] += 20866237;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 601295421;
            result[3] += 257698037;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 2489836;
            result[1] += 0;
            result[2] += 799237392;
            result[3] += 57266230;
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
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42080000))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 3520464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 834350204;
            result[5] += 21122789;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 777956340;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 81037118;
            result[5] += 0;
          } else {
            result[0] += 18276456;
            result[1] += 0;
            result[2] += 0;
            result[3] += 73105826;
            result[4] += 182764565;
            result[5] += 584846610;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 27709466;
            result[1] += 55418932;
            result[2] += 0;
            result[3] += 55418932;
            result[4] += 554189328;
            result[5] += 166256798;
          } else {
            result[0] += 925639;
            result[1] += 0;
            result[2] += 0;
            result[3] += 65720404;
            result[4] += 33323022;
            result[5] += 759024392;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 34359738;
            result[2] += 0;
            result[3] += 206158430;
            result[4] += 68719476;
            result[5] += 549755813;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 22605091;
            result[3] += 689455276;
            result[4] += 0;
            result[5] += 146933091;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 101914478;
            result[1] += 77649126;
            result[2] += 19412281;
            result[3] += 19412281;
            result[4] += 626046080;
            result[5] += 14559211;
          } else {
            result[0] += 84215045;
            result[1] += 774778414;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 751619276;
            result[1] += 29283867;
            result[2] += 3003473;
            result[3] += 12764762;
            result[4] += 48806446;
            result[5] += 13515631;
          } else {
            result[0] += 217399579;
            result[1] += 10604857;
            result[2] += 196189864;
            result[3] += 198841078;
            result[4] += 26512143;
            result[5] += 209445935;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424a0000))) ) ) {
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
            result[4] += 322122547;
            result[5] += 536870911;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 854337667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 4655791;
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42970000))) ) ) {
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
            result[3] += 858993459;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 858993459;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 34359738;
            result[4] += 34359738;
            result[5] += 790273982;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 81808900;
            result[3] += 578505798;
            result[4] += 5843492;
            result[5] += 192835266;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 327235603;
            result[3] += 163617801;
            result[4] += 0;
            result[5] += 368140053;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 371456630;
            result[3] += 325024552;
            result[4] += 0;
            result[5] += 162512276;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 858993459;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 151587081;
            result[3] += 0;
            result[4] += 0;
            result[5] += 707406378;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 101058054;
            result[3] += 757935405;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 773094113;
            result[3] += 85899345;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 177722784;
            result[3] += 651650210;
            result[4] += 0;
            result[5] += 29620464;
          } else {
            result[0] += 0;
            result[1] += 6983686;
            result[2] += 628531799;
            result[3] += 202526913;
            result[4] += 0;
            result[5] += 20951059;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 338391362;
            result[1] += 0;
            result[2] += 442511781;
            result[3] += 0;
            result[4] += 78090314;
            result[5] += 0;
          } else {
            result[0] += 5570645;
            result[1] += 0;
            result[2] += 811085912;
            result[3] += 36766257;
            result[4] += 1114129;
            result[5] += 4456516;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421e0000))) ) ) {
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
            result[4] += 839470880;
            result[5] += 19522578;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 592409282;
            result[1] += 118481856;
            result[2] += 0;
            result[3] += 0;
            result[4] += 148102320;
            result[5] += 0;
          } else {
            result[0] += 13015052;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 247285995;
            result[5] += 598692410;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 13421772;
            result[3] += 0;
            result[4] += 671088639;
            result[5] += 174483046;
          } else {
            result[0] += 0;
            result[1] += 14540253;
            result[2] += 0;
            result[3] += 29080507;
            result[4] += 40265318;
            result[5] += 775107379;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 35370318;
            result[3] += 323385772;
            result[4] += 0;
            result[5] += 500237367;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 79906368;
            result[3] += 649239242;
            result[4] += 0;
            result[5] += 129847848;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 84955397;
            result[1] += 37757954;
            result[2] += 0;
            result[3] += 0;
            result[4] += 698522153;
            result[5] += 37757954;
          } else {
            result[0] += 51539607;
            result[1] += 721554505;
            result[2] += 8589934;
            result[3] += 8589934;
            result[4] += 60129542;
            result[5] += 8589934;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
            result[0] += 229307575;
            result[1] += 32758225;
            result[2] += 7279605;
            result[3] += 262065801;
            result[4] += 72796055;
            result[5] += 254786195;
          } else {
            result[0] += 718208307;
            result[1] += 14282551;
            result[2] += 28565103;
            result[3] += 38086804;
            result[4] += 43527776;
            result[5] += 16322916;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42700000))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 736280107;
            result[2] += 0;
            result[3] += 122713351;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 107374182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 751619276;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 132152839;
            result[3] += 0;
            result[4] += 660764199;
            result[5] += 66076419;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 100215903;
            result[4] += 0;
            result[5] += 758777555;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 90420364;
            result[1] += 45210182;
            result[2] += 0;
            result[3] += 45210182;
            result[4] += 180840728;
            result[5] += 497312002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 73105826;
            result[3] += 603123066;
            result[4] += 12184304;
            result[5] += 170580261;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 234270943;
            result[3] += 78090314;
            result[4] += 468541886;
            result[5] += 78090314;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 85899345;
            result[3] += 128849018;
            result[4] += 0;
            result[5] += 644245094;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 25514657;
            result[1] += 0;
            result[2] += 688895744;
            result[3] += 42524428;
            result[4] += 25514657;
            result[5] += 76543971;
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
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 171798691;
            result[3] += 644245094;
            result[4] += 0;
            result[5] += 42949672;
          } else {
            result[0] += 9651611;
            result[1] += 0;
            result[2] += 511535430;
            result[3] += 337806416;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
            result[2] += 322122547;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 268435455;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 823202064;
            result[3] += 35791394;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 572662306;
            result[3] += 0;
            result[4] += 286331153;
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 694066714;
            result[3] += 144310901;
            result[4] += 0;
            result[5] += 20615843;
          } else {
            result[0] += 7480349;
            result[1] += 0;
            result[2] += 829072061;
            result[3] += 22441048;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 9336885;
            result[1] += 18673770;
            result[2] += 0;
            result[3] += 0;
            result[4] += 830982802;
            result[5] += 0;
          } else {
            result[0] += 465719345;
            result[1] += 124191825;
            result[2] += 0;
            result[3] += 0;
            result[4] += 258732969;
            result[5] += 10349318;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 31814572;
            result[3] += 0;
            result[4] += 668106023;
            result[5] += 159072862;
          } else {
            result[0] += 0;
            result[1] += 107374182;
            result[2] += 0;
            result[3] += 119304647;
            result[4] += 107374182;
            result[5] += 524940447;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 858993459;
            result[5] += 0;
          } else {
            result[0] += 1106950;
            result[1] += 0;
            result[2] += 0;
            result[3] += 38743261;
            result[4] += 34315460;
            result[5] += 784827786;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 7405116;
            result[3] += 125886972;
            result[4] += 29620464;
            result[5] += 696080906;
          } else {
            result[0] += 26512143;
            result[1] += 5302428;
            result[2] += 37117001;
            result[3] += 562057448;
            result[4] += 10604857;
            result[5] += 217399579;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 95443717;
            result[2] += 0;
            result[3] += 0;
            result[4] += 763549741;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 693802409;
            result[2] += 0;
            result[3] += 0;
            result[4] += 165191049;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 858993459;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 142585958;
            result[1] += 153019077;
            result[2] += 0;
            result[3] += 0;
            result[4] += 542522184;
            result[5] += 20866237;
          } else {
            result[0] += 729320551;
            result[1] += 8597098;
            result[2] += 3582124;
            result[3] += 29373421;
            result[4] += 51582593;
            result[5] += 36537670;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 13369548;
            result[1] += 0;
            result[2] += 80217288;
            result[3] += 434510310;
            result[4] += 36766257;
            result[5] += 294130056;
          } else {
            result[0] += 294654733;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 64923924;
            result[4] += 44947332;
            result[5] += 24970740;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 780903144;
            result[4] += 0;
            result[5] += 78090314;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 286331153;
            result[5] += 572662306;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 122713351;
            result[2] += 87652393;
            result[3] += 35060957;
            result[4] += 52591436;
            result[5] += 560975320;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 515396075;
            result[3] += 0;
            result[4] += 171798691;
            result[5] += 171798691;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 736280107;
            result[4] += 0;
            result[5] += 122713351;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 858993459;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 858993459;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 29620464;
            result[1] += 0;
            result[2] += 829372994;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 858993459;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 590558003;
            result[3] += 268435455;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 630653425;
            result[3] += 173973358;
            result[4] += 0;
            result[5] += 54366674;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 780903144;
            result[3] += 78090314;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 858993459;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 429496729;
            result[3] += 214748364;
            result[4] += 0;
            result[5] += 214748364;
          } else {
            result[0] += 1303480;
            result[1] += 0;
            result[2] += 831620374;
            result[3] += 24766124;
            result[4] += 0;
            result[5] += 1303480;
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
