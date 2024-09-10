
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
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 2403899;
          result[2] += 0;
          result[3] += 0;
          result[4] += 208337965;
          result[5] += 4006499;
        } else {
          result[0] += 0;
          result[1] += 189483851;
          result[2] += 0;
          result[3] += 0;
          result[4] += 25264513;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 2254576;
          result[3] += 7891016;
          result[4] += 4790974;
          result[5] += 199811798;
        } else {
          result[0] += 20641917;
          result[1] += 3983527;
          result[2] += 2534972;
          result[3] += 71341362;
          result[4] += 26074000;
          result[5] += 90172584;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 1376592;
          result[1] += 86725301;
          result[2] += 2753184;
          result[3] += 8259552;
          result[4] += 105997590;
          result[5] += 9636144;
        } else {
          result[0] += 0;
          result[1] += 214233380;
          result[2] += 0;
          result[3] += 0;
          result[4] += 514984;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 179269683;
          result[1] += 6652252;
          result[2] += 1364564;
          result[3] += 4434835;
          result[4] += 10916517;
          result[5] += 12110511;
        } else {
          result[0] += 39968938;
          result[1] += 2032318;
          result[2] += 46743334;
          result[3] += 60292127;
          result[4] += 10839034;
          result[5] += 54872610;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 40265318;
          result[4] += 26843545;
          result[5] += 147639500;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33746171;
          result[3] += 138052520;
          result[4] += 0;
          result[5] += 42949672;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 88425797;
          result[3] += 75793540;
          result[4] += 0;
          result[5] += 50529027;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 175377831;
          result[3] += 39370533;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 185394271;
          result[3] += 27036664;
          result[4] += 0;
          result[5] += 2317428;
        } else {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 107374182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 107374182;
        } else {
          result[0] += 417798;
          result[1] += 0;
          result[2] += 211823776;
          result[3] += 2088991;
          result[4] += 0;
          result[5] += 417798;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 1658288;
          result[1] += 0;
          result[2] += 829144;
          result[3] += 0;
          result[4] += 198165479;
          result[5] += 14095452;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 3017541;
          result[1] += 3017541;
          result[2] += 502923;
          result[3] += 9304086;
          result[4] += 9807009;
          result[5] += 189099262;
        } else {
          result[0] += 18370804;
          result[1] += 3800856;
          result[2] += 0;
          result[3] += 98188780;
          result[4] += 8235188;
          result[5] += 86152736;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 88900196;
          result[1] += 12566061;
          result[2] += 21005953;
          result[3] += 28132973;
          result[4] += 34322227;
          result[5] += 29820951;
        } else {
          result[0] += 196932204;
          result[1] += 1272582;
          result[2] += 7317351;
          result[3] += 318145;
          result[4] += 6681060;
          result[5] += 2227020;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 150323855;
          result[2] += 0;
          result[3] += 0;
          result[4] += 64424509;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 212688428;
          result[2] += 1029968;
          result[3] += 1029968;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 11930464;
          result[2] += 11930464;
          result[3] += 17895697;
          result[4] += 23860929;
          result[5] += 149130808;
        } else {
          result[0] += 0;
          result[1] += 3639802;
          result[2] += 47317436;
          result[3] += 120113492;
          result[4] += 3639802;
          result[5] += 40037830;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 13421772;
          result[1] += 20132659;
          result[2] += 60397977;
          result[3] += 93952409;
          result[4] += 0;
          result[5] += 26843545;
        } else {
          result[0] += 7579354;
          result[1] += 0;
          result[2] += 166745789;
          result[3] += 27790964;
          result[4] += 2526451;
          result[5] += 10105805;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 117135471;
          result[3] += 97612893;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 6135667;
          result[1] += 0;
          result[2] += 190205694;
          result[3] += 18407002;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 197217885;
          result[3] += 17530478;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214263605;
          result[3] += 484759;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 1350618;
          result[2] += 0;
          result[3] += 0;
          result[4] += 207995271;
          result[5] += 5402474;
        } else {
          result[0] += 0;
          result[1] += 40904450;
          result[2] += 0;
          result[3] += 17043521;
          result[4] += 64765379;
          result[5] += 92035013;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 6400516;
          result[1] += 662122;
          result[2] += 0;
          result[3] += 10814665;
          result[4] += 15228815;
          result[5] += 181642244;
        } else {
          result[0] += 17958051;
          result[1] += 748252;
          result[2] += 6734269;
          result[3] += 97272778;
          result[4] += 5986017;
          result[5] += 86048996;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 1579032;
          result[1] += 71056444;
          result[2] += 0;
          result[3] += 1579032;
          result[4] += 135796760;
          result[5] += 4737096;
        } else {
          result[0] += 1008208;
          result[1] += 211219635;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2520520;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 171248884;
          result[1] += 4527826;
          result[2] += 1293664;
          result[3] += 9702486;
          result[4] += 15038853;
          result[5] += 12936648;
        } else {
          result[0] += 47909740;
          result[1] += 2254576;
          result[2] += 62564484;
          result[3] += 52418892;
          result[4] += 7327372;
          result[5] += 42273300;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 18147749;
          result[2] += 6049249;
          result[3] += 39320123;
          result[4] += 15123124;
          result[5] += 136108118;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 117135471;
          result[3] += 0;
          result[4] += 97612893;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 167026505;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 23860929;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 65358197;
          result[3] += 149390166;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 7079616;
          result[1] += 18878977;
          result[2] += 89675141;
          result[3] += 68436292;
          result[4] += 7079616;
          result[5] += 23598721;
        } else {
          result[0] += 6061445;
          result[1] += 0;
          result[2] += 178379690;
          result[3] += 29441308;
          result[4] += 0;
          result[5] += 865920;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
          result[0] += 24778657;
          result[1] += 16519104;
          result[2] += 107374182;
          result[3] += 0;
          result[4] += 41297762;
          result[5] += 24778657;
        } else {
          result[0] += 1084587;
          result[1] += 0;
          result[2] += 206794721;
          result[3] += 6145996;
          result[4] += 0;
          result[5] += 723058;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 925639;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 211971446;
          result[5] += 1851279;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2788939;
          result[1] += 0;
          result[2] += 232411;
          result[3] += 13247464;
          result[4] += 7437172;
          result[5] += 191042376;
        } else {
          result[0] += 26482421;
          result[1] += 6740980;
          result[2] += 481498;
          result[3] += 79447264;
          result[4] += 16370951;
          result[5] += 85225247;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 58751911;
          result[2] += 6077783;
          result[3] += 2025927;
          result[4] += 137763101;
          result[5] += 10129639;
        } else {
          result[0] += 0;
          result[1] += 212324568;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2423796;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 185008361;
          result[1] += 6020982;
          result[2] += 729816;
          result[3] += 2919264;
          result[4] += 17515584;
          result[5] += 2554356;
        } else {
          result[0] += 59736340;
          result[1] += 756156;
          result[2] += 37051654;
          result[3] += 52174778;
          result[4] += 12854655;
          result[5] += 52174778;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 214748364;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 9491640;
          result[2] += 37966561;
          result[3] += 113899685;
          result[4] += 3559365;
          result[5] += 49831112;
        } else {
          result[0] += 7405116;
          result[1] += 0;
          result[2] += 88861392;
          result[3] += 27152092;
          result[4] += 24683720;
          result[5] += 66646044;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 2579559;
          result[1] += 0;
          result[2] += 161867386;
          result[3] += 43852518;
          result[4] += 0;
          result[5] += 6448899;
        } else {
          result[0] += 135630546;
          result[1] += 0;
          result[2] += 79117818;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 178143529;
          result[3] += 31724190;
          result[4] += 0;
          result[5] += 4880644;
        } else {
          result[0] += 898528;
          result[1] += 0;
          result[2] += 209357192;
          result[3] += 4043379;
          result[4] += 0;
          result[5] += 449264;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 211737873;
          result[5] += 3010491;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 153391689;
          result[5] += 61356675;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 9834057;
          result[1] += 2286990;
          result[2] += 0;
          result[3] += 6632271;
          result[4] += 14179338;
          result[5] += 181815708;
        } else {
          result[0] += 720632;
          result[1] += 0;
          result[2] += 720632;
          result[3] += 113859871;
          result[4] += 7926953;
          result[5] += 91520276;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 100215903;
          result[2] += 0;
          result[3] += 0;
          result[4] += 114532461;
          result[5] += 0;
        } else {
          result[0] += 1501736;
          result[1] += 210243154;
          result[2] += 0;
          result[3] += 1501736;
          result[4] += 1501736;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 163443836;
          result[1] += 10006765;
          result[2] += 3017913;
          result[3] += 6035826;
          result[4] += 28431921;
          result[5] += 3812101;
        } else {
          result[0] += 31476119;
          result[1] += 7615190;
          result[2] += 51275614;
          result[3] += 55337049;
          result[4] += 9138228;
          result[5] += 59906163;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 8053063;
          result[2] += 29527900;
          result[3] += 37580963;
          result[4] += 13421772;
          result[5] += 126164664;
        } else {
          result[0] += 5883516;
          result[1] += 2941758;
          result[2] += 70602202;
          result[3] += 108845061;
          result[4] += 0;
          result[5] += 26475825;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 85899345;
          result[3] += 120259084;
          result[4] += 0;
          result[5] += 8589934;
        } else {
          result[0] += 26188824;
          result[1] += 10475529;
          result[2] += 162370714;
          result[3] += 5237764;
          result[4] += 5237764;
          result[5] += 5237764;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 71582788;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 1690932;
          result[1] += 0;
          result[2] += 169938666;
          result[3] += 41427834;
          result[4] += 0;
          result[5] += 1690932;
        } else {
          result[0] += 988105;
          result[1] += 0;
          result[2] += 205855410;
          result[3] += 7575479;
          result[4] += 0;
          result[5] += 329368;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 792429;
          result[1] += 1584858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 211578647;
          result[5] += 792429;
        } else {
          result[0] += 0;
          result[1] += 8765239;
          result[2] += 0;
          result[3] += 13147859;
          result[4] += 105182872;
          result[5] += 87652393;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 131557556;
          result[1] += 5804009;
          result[2] += 0;
          result[3] += 13542689;
          result[4] += 58040098;
          result[5] += 5804009;
        } else {
          result[0] += 221162;
          result[1] += 663486;
          result[2] += 442324;
          result[3] += 14375534;
          result[4] += 14375534;
          result[5] += 184670323;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 79536431;
          result[2] += 0;
          result[3] += 0;
          result[4] += 135211933;
          result[5] += 0;
        } else {
          result[0] += 1728357;
          result[1] += 211723739;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1296267;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 168026319;
          result[1] += 5364383;
          result[2] += 2422624;
          result[3] += 7960052;
          result[4] += 19900130;
          result[5] += 11074855;
        } else {
          result[0] += 36413853;
          result[1] += 2334221;
          result[2] += 37814385;
          result[3] += 93835698;
          result[4] += 7002664;
          result[5] += 37347541;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15713294;
          result[5] += 199035069;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 71582788;
          result[4] += 12632256;
          result[5] += 130533319;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 200431807;
          result[2] += 0;
          result[3] += 14316557;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 90513773;
          result[3] += 69216415;
          result[4] += 1774779;
          result[5] += 53243396;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 2526451;
          result[1] += 0;
          result[2] += 163587724;
          result[3] += 41686447;
          result[4] += 0;
          result[5] += 6947741;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 107374182;
          result[3] += 107374182;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 347489;
          result[1] += 0;
          result[2] += 207451090;
          result[3] += 6254806;
          result[4] += 0;
          result[5] += 694978;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 798321;
          result[1] += 8781531;
          result[2] += 0;
          result[3] += 0;
          result[4] += 199580264;
          result[5] += 5588247;
        } else {
          result[0] += 151299984;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 26843545;
          result[5] += 36604834;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 877419;
          result[1] += 1535483;
          result[2] += 1316128;
          result[3] += 11845160;
          result[4] += 17767740;
          result[5] += 181406432;
        } else {
          result[0] += 3241484;
          result[1] += 4051855;
          result[2] += 7293340;
          result[3] += 114262337;
          result[4] += 13776310;
          result[5] += 72123035;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 69380240;
          result[2] += 9911462;
          result[3] += 4955731;
          result[4] += 127197108;
          result[5] += 3303820;
        } else {
          result[0] += 499414;
          result[1] += 213749535;
          result[2] += 0;
          result[3] += 0;
          result[4] += 499414;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 180508028;
          result[1] += 5443335;
          result[2] += 0;
          result[3] += 6321292;
          result[4] += 15452049;
          result[5] += 7023658;
        } else {
          result[0] += 44478625;
          result[1] += 2084935;
          result[2] += 55598282;
          result[3] += 47953518;
          result[4] += 10424677;
          result[5] += 54208325;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 32212254;
          result[3] += 7158278;
          result[4] += 14316557;
          result[5] += 161061273;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5804009;
          result[3] += 185728315;
          result[4] += 0;
          result[5] += 23216039;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 92035013;
          result[3] += 61356675;
          result[4] += 0;
          result[5] += 61356675;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x423a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 95443717;
          result[2] += 119304647;
          result[3] += 0;
          result[4] += 0;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 2372910;
          result[1] += 0;
          result[2] += 138815241;
          result[3] += 58136297;
          result[4] += 3559365;
          result[5] += 11864550;
        } else {
          result[0] += 4969815;
          result[1] += 261569;
          result[2] += 197223224;
          result[3] += 10201201;
          result[4] += 0;
          result[5] += 2092554;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 53687091;
          result[1] += 161061273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1539414;
          result[1] += 1539414;
          result[2] += 0;
          result[3] += 0;
          result[4] += 207051290;
          result[5] += 4618244;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 4051855;
          result[4] += 121555678;
          result[5] += 89140830;
        } else {
          result[0] += 0;
          result[1] += 30678337;
          result[2] += 153391689;
          result[3] += 0;
          result[4] += 30678337;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8259552;
          result[4] += 132152839;
          result[5] += 74335972;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 864758;
          result[3] += 6918068;
          result[4] += 1153011;
          result[5] += 205812526;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 16901491;
          result[1] += 4971026;
          result[2] += 0;
          result[3] += 55675501;
          result[4] += 25352237;
          result[5] += 111848106;
        } else {
          result[0] += 100495056;
          result[1] += 13160066;
          result[2] += 10169142;
          result[3] += 16749176;
          result[4] += 21534654;
          result[5] += 52640267;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 5174659;
          result[1] += 87969209;
          result[2] += 0;
          result[3] += 15523978;
          result[4] += 103493187;
          result[5] += 2587329;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
          result[0] += 6573929;
          result[1] += 0;
          result[2] += 13147859;
          result[3] += 83269774;
          result[4] += 21913098;
          result[5] += 89843703;
        } else {
          result[0] += 186702869;
          result[1] += 3004874;
          result[2] += 2403899;
          result[3] += 8413648;
          result[4] += 10216573;
          result[5] += 4006499;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27201459;
          result[3] += 136007297;
          result[4] += 4294967;
          result[5] += 47244640;
        } else {
          result[0] += 0;
          result[1] += 2412902;
          result[2] += 94103216;
          result[3] += 50670962;
          result[4] += 7238708;
          result[5] += 60322574;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 2191309;
          result[1] += 0;
          result[2] += 135861210;
          result[3] += 43826196;
          result[4] += 15339168;
          result[5] += 17530478;
        } else {
          result[0] += 6234629;
          result[1] += 0;
          result[2] += 198122684;
          result[3] += 10160137;
          result[4] += 0;
          result[5] += 230912;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 813440;
          result[4] += 195225786;
          result[5] += 18709137;
        } else {
          result[0] += 0;
          result[1] += 138052520;
          result[2] += 0;
          result[3] += 46017506;
          result[4] += 15339168;
          result[5] += 15339168;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 7654397;
          result[1] += 1063110;
          result[2] += 0;
          result[3] += 11481595;
          result[4] += 13182572;
          result[5] += 181366688;
        } else {
          result[0] += 6763728;
          result[1] += 0;
          result[2] += 5072796;
          result[3] += 108219648;
          result[4] += 845466;
          result[5] += 93846726;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 16519104;
          result[2] += 0;
          result[3] += 0;
          result[4] += 198229259;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 213338638;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1409726;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 171569714;
          result[1] += 4088887;
          result[2] += 2616887;
          result[3] += 6215108;
          result[4] += 24696879;
          result[5] += 5560886;
        } else {
          result[0] += 28102872;
          result[1] += 2651214;
          result[2] += 57266230;
          result[3] += 55145259;
          result[4] += 25981900;
          result[5] += 45600887;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 21238849;
          result[3] += 125073223;
          result[4] += 16519104;
          result[5] += 51917187;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 195225786;
          result[3] += 19522578;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 176400442;
          result[3] += 30678337;
          result[4] += 0;
          result[5] += 7669584;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 20259279;
          result[1] += 16207423;
          result[2] += 105348254;
          result[3] += 28362991;
          result[4] += 0;
          result[5] += 44570415;
        } else {
          result[0] += 200431807;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 2325794;
          result[1] += 0;
          result[2] += 167457208;
          result[3] += 36437448;
          result[4] += 0;
          result[5] += 8527913;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 206781309;
          result[3] += 7967055;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f00000))) ) ) {
          result[0] += 0;
          result[1] += 1539414;
          result[2] += 0;
          result[3] += 0;
          result[4] += 209360412;
          result[5] += 3848537;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 187280550;
          result[1] += 0;
          result[2] += 2497074;
          result[3] += 0;
          result[4] += 22473666;
          result[5] += 2497074;
        } else {
          result[0] += 859853;
          result[1] += 1289779;
          result[2] += 0;
          result[3] += 17412029;
          result[4] += 15262396;
          result[5] += 179924305;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 88011624;
          result[2] += 3520464;
          result[3] += 14081859;
          result[4] += 105613949;
          result[5] += 3520464;
        } else {
          result[0] += 2677660;
          result[1] += 212070704;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 173868146;
          result[1] += 11365039;
          result[2] += 1526647;
          result[3] += 6276216;
          result[4] += 15775353;
          result[5] += 5936961;
        } else {
          result[0] += 26040914;
          result[1] += 3567248;
          result[2] += 33175411;
          result[3] += 81333267;
          result[4] += 8561396;
          result[5] += 62070125;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 9336885;
          result[2] += 9336885;
          result[3] += 65358197;
          result[4] += 37347541;
          result[5] += 93368854;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 16953818;
          result[3] += 186492000;
          result[4] += 0;
          result[5] += 11302545;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 11930464;
          result[1] += 0;
          result[2] += 23860929;
          result[3] += 23860929;
          result[4] += 71582788;
          result[5] += 83513252;
        } else {
          result[0] += 8259552;
          result[1] += 0;
          result[2] += 173450602;
          result[3] += 24778657;
          result[4] += 0;
          result[5] += 8259552;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 59055800;
          result[1] += 5368709;
          result[2] += 64424509;
          result[3] += 16106127;
          result[4] += 16106127;
          result[5] += 53687091;
        } else {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 153166113;
          result[3] += 56845155;
          result[4] += 0;
          result[5] += 4737096;
        } else {
          result[0] += 1783201;
          result[1] += 0;
          result[2] += 200228012;
          result[3] += 12227664;
          result[4] += 0;
          result[5] += 509486;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 200431807;
          result[2] += 0;
          result[3] += 0;
          result[4] += 14316557;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 2972295;
          result[2] += 0;
          result[3] += 0;
          result[4] += 205088403;
          result[5] += 6687665;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 205800516;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8947848;
          result[5] += 0;
        } else {
          result[0] += 3499330;
          result[1] += 2762629;
          result[2] += 4420206;
          result[3] += 21364331;
          result[4] += 13260619;
          result[5] += 169441248;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 210255721;
          result[2] += 0;
          result[3] += 0;
          result[4] += 4492643;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 33323022;
          result[2] += 11107674;
          result[3] += 22215348;
          result[4] += 129589530;
          result[5] += 18512790;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 175079039;
          result[1] += 9917331;
          result[2] += 1525743;
          result[3] += 9345177;
          result[4] += 15829586;
          result[5] += 3051486;
        } else {
          result[0] += 32185872;
          result[1] += 2110549;
          result[2] += 49070265;
          result[3] += 79673226;
          result[4] += 10552745;
          result[5] += 41155706;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 7535030;
          result[1] += 5651272;
          result[2] += 18837575;
          result[3] += 33907636;
          result[4] += 28256363;
          result[5] += 120560485;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42949672;
          result[3] += 134984686;
          result[4] += 0;
          result[5] += 36814005;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 4294967;
          result[2] += 171798691;
          result[3] += 25769803;
          result[4] += 4294967;
          result[5] += 8589934;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 101570172;
          result[3] += 78354133;
          result[4] += 0;
          result[5] += 34824059;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 177722784;
          result[3] += 31101487;
          result[4] += 0;
          result[5] += 5924092;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 143165576;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 301612;
          result[1] += 0;
          result[2] += 205398365;
          result[3] += 8746773;
          result[4] += 0;
          result[5] += 301612;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 207788927;
          result[5] += 6959437;
        } else {
          result[0] += 72251786;
          result[1] += 22076934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 50174851;
          result[5] += 70244792;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 9786709;
          result[4] += 7549747;
          result[5] += 197411908;
        } else {
          result[0] += 0;
          result[1] += 7513062;
          result[2] += 6260885;
          result[3] += 80139331;
          result[4] += 15026124;
          result[5] += 105808961;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 3639802;
          result[1] += 34578126;
          result[2] += 10919408;
          result[3] += 5459704;
          result[4] += 156511520;
          result[5] += 3639802;
        } else {
          result[0] += 488064;
          result[1] += 206939333;
          result[2] += 488064;
          result[3] += 976128;
          result[4] += 5856773;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 68081456;
          result[1] += 5446516;
          result[2] += 16728586;
          result[3] += 52909017;
          result[4] += 20618955;
          result[5] += 50963832;
        } else {
          result[0] += 168858897;
          result[1] += 4660648;
          result[2] += 14698969;
          result[3] += 5736183;
          result[4] += 14519714;
          result[5] += 6273950;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 10737418;
          result[3] += 10737418;
          result[4] += 42949672;
          result[5] += 150323855;
        } else {
          result[0] += 1512312;
          result[1] += 0;
          result[2] += 90738745;
          result[3] += 102837245;
          result[4] += 0;
          result[5] += 19660061;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 28010656;
          result[2] += 56021312;
          result[3] += 46684427;
          result[4] += 0;
          result[5] += 84031968;
        } else {
          result[0] += 4110016;
          result[1] += 6165024;
          result[2] += 172620695;
          result[3] += 25687603;
          result[4] += 0;
          result[5] += 6165024;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 214748364;
          result[3] += 0;
          result[4] += 0;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 42949672;
          result[5] += 171798691;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 203328953;
          result[3] += 10784999;
          result[4] += 0;
          result[5] += 634411;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 6949785;
          result[1] += 13204592;
          result[2] += 0;
          result[3] += 0;
          result[4] += 184864288;
          result[5] += 9729699;
        } else {
          result[0] += 167452593;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15339168;
          result[5] += 31956601;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 3172644;
          result[1] += 1388031;
          result[2] += 396580;
          result[3] += 12492287;
          result[4] += 16061512;
          result[5] += 181237308;
        } else {
          result[0] += 7040929;
          result[1] += 0;
          result[2] += 0;
          result[3] += 126736739;
          result[4] += 0;
          result[5] += 80970694;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 11713547;
          result[1] += 54663220;
          result[2] += 0;
          result[3] += 0;
          result[4] += 121039987;
          result[5] += 27331610;
        } else {
          result[0] += 522502;
          result[1] += 213703360;
          result[2] += 0;
          result[3] += 0;
          result[4] += 522502;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 83452845;
          result[1] += 5436667;
          result[2] += 28270670;
          result[3] += 52192007;
          result[4] += 17397335;
          result[5] += 27998837;
        } else {
          result[0] += 191297316;
          result[1] += 8431837;
          result[2] += 6587373;
          result[3] += 790484;
          result[4] += 7114363;
          result[5] += 526989;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 34164512;
          result[3] += 19522578;
          result[4] += 9761289;
          result[5] += 151299984;
        } else {
          result[0] += 5804009;
          result[1] += 7738679;
          result[2] += 48366748;
          result[3] += 125753546;
          result[4] += 7738679;
          result[5] += 19346699;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 50107951;
          result[3] += 42949672;
          result[4] += 0;
          result[5] += 121690740;
        } else {
          result[0] += 16890320;
          result[1] += 6032257;
          result[2] += 165283853;
          result[3] += 25335481;
          result[4] += 0;
          result[5] += 1206451;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 5804009;
          result[1] += 0;
          result[2] += 150904256;
          result[3] += 52236088;
          result[4] += 0;
          result[5] += 5804009;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 204440443;
          result[3] += 10307921;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 71582788;
        } else {
          result[0] += 425244;
          result[1] += 0;
          result[2] += 210921166;
          result[3] += 2976710;
          result[4] += 0;
          result[5] += 425244;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
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
          result[4] += 214748364;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 200803665;
          result[5] += 13944699;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 212847936;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1900428;
          result[5] += 0;
        } else {
          result[0] += 11302545;
          result[1] += 33907636;
          result[2] += 67815273;
          result[3] += 0;
          result[4] += 90420364;
          result[5] += 11302545;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 2113665;
          result[1] += 1056832;
          result[2] += 211366;
          result[3] += 11625157;
          result[4] += 11202424;
          result[5] += 188538918;
        } else {
          result[0] += 1193046;
          result[1] += 3579139;
          result[2] += 7953643;
          result[3] += 99022857;
          result[4] += 21474836;
          result[5] += 81524842;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42580000))) ) ) {
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
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 527637;
          result[1] += 213165452;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1055274;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 173810873;
          result[1] += 6418165;
          result[2] += 1734639;
          result[3] += 3989670;
          result[4] += 24111488;
          result[5] += 4683526;
        } else {
          result[0] += 17895697;
          result[1] += 178956970;
          result[2] += 0;
          result[3] += 0;
          result[4] += 17895697;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 47721858;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 95443717;
        } else {
          result[0] += 5209529;
          result[1] += 192945;
          result[2] += 182526462;
          result[3] += 20838116;
          result[4] += 578836;
          result[5] += 5402474;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 1008208;
          result[2] += 0;
          result[3] += 0;
          result[4] += 207690906;
          result[5] += 6049249;
        } else {
          result[0] += 0;
          result[1] += 90855077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 66076419;
          result[5] += 57816867;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 739661;
          result[3] += 14300120;
          result[4] += 11094921;
          result[5] += 188613661;
        } else {
          result[0] += 24970740;
          result[1] += 1664716;
          result[2] += 2219621;
          result[3] += 86565232;
          result[4] += 19976592;
          result[5] += 79351462;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 169538182;
          result[5] += 2260509;
        } else {
          result[0] += 1008208;
          result[1] += 211723739;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2016416;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 177686953;
          result[1] += 5022340;
          result[2] += 865920;
          result[3] += 3463683;
          result[4] += 19050258;
          result[5] += 8659208;
        } else {
          result[0] += 45234230;
          result[1] += 1827645;
          result[2] += 54829369;
          result[3] += 44777318;
          result[4] += 8224405;
          result[5] += 59855395;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 122713351;
          result[3] += 0;
          result[4] += 92035013;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 11930464;
          result[3] += 0;
          result[4] += 11930464;
          result[5] += 190887435;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 15339168;
          result[1] += 138052520;
          result[2] += 0;
          result[3] += 7669584;
          result[4] += 7669584;
          result[5] += 46017506;
        } else {
          result[0] += 3579139;
          result[1] += 0;
          result[2] += 96636764;
          result[3] += 91268055;
          result[4] += 1789569;
          result[5] += 21474836;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 3205199;
          result[1] += 0;
          result[2] += 174362851;
          result[3] += 33975114;
          result[4] += 0;
          result[5] += 3205199;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 13421772;
          result[1] += 0;
          result[2] += 147639500;
          result[3] += 53687091;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1236554;
          result[1] += 0;
          result[2] += 209389960;
          result[3] += 2060924;
          result[4] += 0;
          result[5] += 2060924;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 10349318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 200949273;
          result[5] += 3449772;
        } else {
          result[0] += 121604495;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23285967;
          result[5] += 69857901;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 301612;
          result[2] += 1206451;
          result[3] += 5429031;
          result[4] += 7238708;
          result[5] += 200572559;
        } else {
          result[0] += 891072;
          result[1] += 3564288;
          result[2] += 4900896;
          result[3] += 82424164;
          result[4] += 19603585;
          result[5] += 103364358;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 35791394;
          result[4] += 178956970;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 214203318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 545046;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 102560135;
          result[1] += 15070060;
          result[2] += 10256013;
          result[3] += 29512202;
          result[4] += 31395959;
          result[5] += 25953993;
        } else {
          result[0] += 190714027;
          result[1] += 1872805;
          result[2] += 11861101;
          result[3] += 0;
          result[4] += 10300430;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 4051855;
          result[1] += 32414847;
          result[2] += 14181495;
          result[3] += 34440775;
          result[4] += 10129639;
          result[5] += 119529750;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52989856;
          result[3] += 117135471;
          result[4] += 0;
          result[5] += 44623036;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 3303820;
          result[1] += 0;
          result[2] += 175102512;
          result[3] += 36342030;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 39045157;
          result[1] += 0;
          result[2] += 78090314;
          result[3] += 97612893;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 27531841;
          result[3] += 121140103;
          result[4] += 0;
          result[5] += 66076419;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 198229259;
          result[3] += 16519104;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3807595;
          result[1] += 0;
          result[2] += 175910894;
          result[3] += 30460760;
          result[4] += 0;
          result[5] += 4569114;
        } else {
          result[0] += 1086416;
          result[1] += 0;
          result[2] += 207505586;
          result[3] += 5794222;
          result[4] += 0;
          result[5] += 362138;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 1940497;
          result[1] += 2587329;
          result[2] += 3234162;
          result[3] += 2587329;
          result[4] += 192756062;
          result[5] += 11642983;
        } else {
          result[0] += 0;
          result[1] += 190887435;
          result[2] += 0;
          result[3] += 0;
          result[4] += 23860929;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 13707342;
          result[4] += 7794371;
          result[5] += 193246651;
        } else {
          result[0] += 30263765;
          result[1] += 1243716;
          result[2] += 8706014;
          result[3] += 85401859;
          result[4] += 15753741;
          result[5] += 73379267;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 74051160;
          result[2] += 0;
          result[3] += 11107674;
          result[4] += 118481856;
          result[5] += 11107674;
        } else {
          result[0] += 497102;
          result[1] += 212262851;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1988410;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 167636901;
          result[1] += 9155938;
          result[2] += 0;
          result[3] += 4827676;
          result[4] += 22473666;
          result[5] += 10654182;
        } else {
          result[0] += 37856282;
          result[1] += 1376592;
          result[2] += 62634939;
          result[3] += 53687091;
          result[4] += 4818072;
          result[5] += 54375387;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42df0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 6410398;
          result[1] += 6410398;
          result[2] += 9615598;
          result[3] += 12820797;
          result[4] += 51283191;
          result[5] += 128207978;
        } else {
          result[0] += 0;
          result[1] += 6049249;
          result[2] += 45369372;
          result[3] += 124009619;
          result[4] += 0;
          result[5] += 39320123;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 128849018;
          result[1] += 85899345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 208432236;
          result[3] += 6316128;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 90995069;
          result[3] += 112833886;
          result[4] += 0;
          result[5] += 10919408;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 206158430;
          result[3] += 8589934;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 9850842;
          result[1] += 985084;
          result[2] += 161553815;
          result[3] += 33492864;
          result[4] += 0;
          result[5] += 8865758;
        } else {
          result[0] += 370895;
          result[1] += 0;
          result[2] += 208443145;
          result[3] += 5934324;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 1711142;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 208759366;
          result[5] += 4277855;
        } else {
          result[0] += 150133812;
          result[1] += 0;
          result[2] += 0;
          result[3] += 7601712;
          result[4] += 22805136;
          result[5] += 34207704;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 5113056;
          result[2] += 0;
          result[3] += 0;
          result[4] += 189183083;
          result[5] += 20452225;
        } else {
          result[0] += 426088;
          result[1] += 639132;
          result[2] += 0;
          result[3] += 17682653;
          result[4] += 15126124;
          result[5] += 180874366;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 212885038;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1863326;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 88425797;
          result[2] += 0;
          result[3] += 0;
          result[4] += 126322567;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 173993200;
          result[1] += 4702518;
          result[2] += 1741673;
          result[3] += 7489196;
          result[4] += 19680912;
          result[5] += 7140862;
        } else {
          result[0] += 28362991;
          result[1] += 4952268;
          result[2] += 34215672;
          result[3] += 78786087;
          result[4] += 10804949;
          result[5] += 57626395;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 5506368;
          result[2] += 0;
          result[3] += 132152839;
          result[4] += 8259552;
          result[5] += 68829604;
        } else {
          result[0] += 15339168;
          result[1] += 0;
          result[2] += 34513130;
          result[3] += 26843545;
          result[4] += 19173961;
          result[5] += 118878559;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 158235637;
          result[2] += 11302545;
          result[3] += 0;
          result[4] += 11302545;
          result[5] += 33907636;
        } else {
          result[0] += 2213900;
          result[1] += 0;
          result[2] += 101839430;
          result[3] += 81914324;
          result[4] += 0;
          result[5] += 28780708;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 35791394;
          result[1] += 0;
          result[2] += 107374182;
          result[3] += 71582788;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 6369654;
          result[1] += 0;
          result[2] += 167430928;
          result[3] += 38217929;
          result[4] += 0;
          result[5] += 2729852;
        } else {
          result[0] += 2178606;
          result[1] += 0;
          result[2] += 203232872;
          result[3] += 8091967;
          result[4] += 0;
          result[5] += 1244918;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1851279;
          result[2] += 0;
          result[3] += 0;
          result[4] += 209194527;
          result[5] += 3702558;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3600571;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5400857;
          result[4] += 9515795;
          result[5] += 196231140;
        } else {
          result[0] += 16674578;
          result[1] += 6063483;
          result[2] += 7579354;
          result[3] += 67708896;
          result[4] += 15663998;
          result[5] += 101058054;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 76113344;
          result[2] += 0;
          result[3] += 2718333;
          result[4] += 135916686;
          result[5] += 0;
        } else {
          result[0] += 881923;
          result[1] += 209897785;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3968655;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 175471779;
          result[1] += 6364261;
          result[2] += 1091016;
          result[3] += 2909376;
          result[4] += 20001964;
          result[5] += 8909966;
        } else {
          result[0] += 64506162;
          result[1] += 3266134;
          result[2] += 29395213;
          result[3] += 69405365;
          result[4] += 8981870;
          result[5] += 39193617;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 5804009;
          result[3] += 0;
          result[4] += 34824059;
          result[5] += 174120295;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 39045157;
          result[3] += 112952061;
          result[4] += 0;
          result[5] += 62751145;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 138954824;
          result[3] += 65266659;
          result[4] += 0;
          result[5] += 10526880;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 2902004;
          result[1] += 5804009;
          result[2] += 156708266;
          result[3] += 26118044;
          result[4] += 0;
          result[5] += 23216039;
        } else {
          result[0] += 134217727;
          result[1] += 13421772;
          result[2] += 13421772;
          result[3] += 0;
          result[4] += 53687091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 180360554;
          result[3] += 28071681;
          result[4] += 0;
          result[5] += 6316128;
        } else {
          result[0] += 1726273;
          result[1] += 0;
          result[2] += 207498018;
          result[3] += 5524073;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 6507526;
          result[2] += 0;
          result[3] += 0;
          result[4] += 208240838;
          result[5] += 0;
        } else {
          result[0] += 104620998;
          result[1] += 11012736;
          result[2] += 0;
          result[3] += 0;
          result[4] += 60570051;
          result[5] += 38544578;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 1008208;
          result[1] += 3427908;
          result[2] += 0;
          result[3] += 14518199;
          result[4] += 13509991;
          result[5] += 182284057;
        } else {
          result[0] += 1248537;
          result[1] += 0;
          result[2] += 1248537;
          result[3] += 153570051;
          result[4] += 3745611;
          result[5] += 54935628;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 121379510;
          result[2] += 0;
          result[3] += 0;
          result[4] += 93368854;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 213740156;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1008208;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 18771710;
          result[1] += 31536473;
          result[2] += 15768236;
          result[3] += 13515631;
          result[4] += 120138945;
          result[5] += 15017368;
        } else {
          result[0] += 145686432;
          result[1] += 2140349;
          result[2] += 15125133;
          result[3] += 18692382;
          result[4] += 13840924;
          result[5] += 19263142;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26295718;
          result[3] += 26295718;
          result[4] += 8765239;
          result[5] += 153391689;
        } else {
          result[0] += 2526451;
          result[1] += 0;
          result[2] += 50529027;
          result[3] += 116216762;
          result[4] += 0;
          result[5] += 45476124;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 119304647;
          result[3] += 23860929;
          result[4] += 0;
          result[5] += 71582788;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 28010656;
          result[2] += 28010656;
          result[3] += 121379510;
          result[4] += 0;
          result[5] += 37347541;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 163395494;
          result[3] += 51352869;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 61821498;
          result[1] += 16268815;
          result[2] += 130150524;
          result[3] += 6507526;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 2960190;
          result[1] += 0;
          result[2] += 198601871;
          result[3] += 12378978;
          result[4] += 269108;
          result[5] += 538216;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
