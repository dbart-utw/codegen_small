
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 15961505;
        result[1] += 1558371;
        result[2] += 0;
        result[3] += 68379468;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 43254821;
        result[1] += 0;
        result[2] += 1830891;
        result[3] += 40813632;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 102627;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85796718;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9790567;
        result[1] += 0;
        result[2] += 979056;
        result[3] += 75026663;
        result[4] += 0;
        result[5] += 103058;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 75879742;
        result[1] += 0;
        result[2] += 322534;
        result[3] += 9612929;
        result[4] += 0;
        result[5] += 28046;
        result[6] += 56092;
      } else {
        result[0] += 79312474;
        result[1] += 67503;
        result[2] += 127900;
        result[3] += 6387915;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3552;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 96516;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85802829;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15135878;
        result[1] += 366538;
        result[2] += 301855;
        result[3] += 70073512;
        result[4] += 0;
        result[5] += 21561;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85518703;
        result[1] += 42975;
        result[2] += 168833;
        result[3] += 159624;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9209;
      } else {
        result[0] += 327860;
        result[1] += 2950740;
        result[2] += 0;
        result[3] += 82620744;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85678098;
        result[4] += 193591;
        result[5] += 27655;
        result[6] += 0;
      } else {
        result[0] += 41995235;
        result[1] += 0;
        result[2] += 1908874;
        result[3] += 0;
        result[4] += 41995235;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 85795665;
        result[1] += 0;
        result[2] += 0;
        result[3] += 103680;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84950705;
        result[1] += 0;
        result[2] += 806343;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 142295;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 50993897;
        result[1] += 216287;
        result[2] += 316112;
        result[3] += 26120854;
        result[4] += 8119093;
        result[5] += 49912;
        result[6] += 83187;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1742014;
        result[3] += 72323645;
        result[4] += 11833686;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 4837153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 78457570;
        result[4] += 2604621;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2297526;
        result[1] += 46888;
        result[2] += 656436;
        result[3] += 46888;
        result[4] += 82804718;
        result[5] += 46888;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 83238962;
        result[1] += 110849;
        result[2] += 208396;
        result[3] += 2314533;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26603;
      } else {
        result[0] += 59116718;
        result[1] += 0;
        result[2] += 197762;
        result[3] += 26584865;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1700977;
        result[1] += 14458305;
        result[2] += 0;
        result[3] += 69740063;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 39957761;
        result[1] += 0;
        result[2] += 1181017;
        result[3] += 35273058;
        result[4] += 9487507;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8180890;
        result[1] += 436843;
        result[2] += 436843;
        result[3] += 46980548;
        result[4] += 29864220;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 356922;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85542423;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9875852;
        result[1] += 0;
        result[2] += 1491665;
        result[3] += 74377517;
        result[4] += 0;
        result[5] += 154310;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 85442986;
        result[1] += 4148;
        result[2] += 49784;
        result[3] += 402426;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 69050703;
        result[1] += 50698;
        result[2] += 259123;
        result[3] += 16482489;
        result[4] += 0;
        result[5] += 0;
        result[6] += 56331;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 297229;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85007657;
        result[5] += 594459;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 340870;
        result[2] += 498195;
        result[3] += 84850513;
        result[4] += 0;
        result[5] += 209766;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46426200))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84757632;
        result[1] += 110786;
        result[2] += 163101;
        result[3] += 852438;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15386;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35700482;
        result[1] += 0;
        result[2] += 505941;
        result[3] += 49534815;
        result[4] += 0;
        result[5] += 63242;
        result[6] += 94863;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 22797;
        result[2] += 592723;
        result[3] += 68550778;
        result[4] += 16687452;
        result[5] += 45594;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 870307;
        result[2] += 0;
        result[3] += 8224405;
        result[4] += 76804632;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 85807817;
        result[1] += 0;
        result[2] += 84990;
        result[3] += 6537;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85030531;
        result[1] += 0;
        result[2] += 0;
        result[3] += 868814;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 82507428;
        result[1] += 185190;
        result[2] += 428863;
        result[3] += 2758370;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19493;
      } else {
        result[0] += 53290953;
        result[1] += 0;
        result[2] += 323165;
        result[3] += 32233104;
        result[4] += 0;
        result[5] += 10424;
        result[6] += 41698;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 84866901;
        result[1] += 0;
        result[2] += 1032444;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4181712;
        result[1] += 1045428;
        result[2] += 58079;
        result[3] += 50180550;
        result[4] += 30433574;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
        result[0] += 19507229;
        result[1] += 259750;
        result[2] += 597425;
        result[3] += 31923282;
        result[4] += 33611658;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18855953;
        result[1] += 0;
        result[2] += 0;
        result[3] += 67043391;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85827136;
        result[1] += 0;
        result[2] += 65644;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6564;
      } else {
        result[0] += 51667255;
        result[1] += 105121;
        result[2] += 480555;
        result[3] += 33180874;
        result[4] += 367925;
        result[5] += 45052;
        result[6] += 52560;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 266354;
        result[3] += 0;
        result[4] += 85632991;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 626379;
        result[1] += 370133;
        result[2] += 569435;
        result[3] += 59762256;
        result[4] += 24571142;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84822012;
        result[1] += 0;
        result[2] += 1077332;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f70000))) ) ) {
        result[0] += 0;
        result[1] += 832358;
        result[2] += 0;
        result[3] += 14483029;
        result[4] += 70583958;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 2969360;
        result[2] += 0;
        result[3] += 1696777;
        result[4] += 81233208;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85856715;
        result[1] += 0;
        result[2] += 39350;
        result[3] += 0;
        result[4] += 3279;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 92663;
        result[2] += 0;
        result[3] += 17606122;
        result[4] += 68200559;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 51854385;
        result[1] += 122244;
        result[2] += 603579;
        result[3] += 32830160;
        result[4] += 359091;
        result[5] += 38201;
        result[6] += 91683;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 28633115;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 57266230;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85863427;
        result[1] += 0;
        result[2] += 32652;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3265;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 60226535;
        result[1] += 234904;
        result[2] += 575895;
        result[3] += 24778657;
        result[4] += 30310;
        result[5] += 15155;
        result[6] += 37887;
      } else {
        result[0] += 0;
        result[1] += 47961;
        result[2] += 863310;
        result[3] += 69544417;
        result[4] += 15395695;
        result[5] += 47961;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 535615;
        result[2] += 0;
        result[3] += 28052865;
        result[4] += 57310865;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 81651796;
        result[1] += 0;
        result[2] += 120213;
        result[3] += 1469278;
        result[4] += 2658057;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 70080258;
        result[1] += 0;
        result[2] += 1020586;
        result[3] += 14798501;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 371144;
        result[1] += 494859;
        result[2] += 164953;
        result[3] += 66104969;
        result[4] += 18763419;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 70086131;
        result[1] += 0;
        result[2] += 278574;
        result[3] += 15403545;
        result[4] += 0;
        result[5] += 16386;
        result[6] += 114707;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30538360;
        result[1] += 571573;
        result[2] += 1143147;
        result[3] += 53646264;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 81894621;
        result[1] += 17089;
        result[2] += 62662;
        result[3] += 1236166;
        result[4] += 2683108;
        result[5] += 0;
        result[6] += 5696;
      } else {
        result[0] += 65125160;
        result[1] += 99795;
        result[2] += 249489;
        result[3] += 19959185;
        result[4] += 449081;
        result[5] += 8316;
        result[6] += 8316;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42440000))) ) ) {
        result[0] += 81127160;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4772185;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 52766741;
        result[4] += 33132604;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 29513337;
        result[1] += 323611;
        result[2] += 660166;
        result[3] += 33720282;
        result[4] += 21681947;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 82886663;
        result[1] += 60001;
        result[2] += 75790;
        result[3] += 2851627;
        result[4] += 3157;
        result[5] += 12631;
        result[6] += 9473;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 27438596;
        result[1] += 0;
        result[2] += 0;
        result[3] += 58460749;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 64820499;
        result[1] += 0;
        result[2] += 0;
        result[3] += 21078846;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4738436;
        result[3] += 0;
        result[4] += 81039411;
        result[5] += 121498;
        result[6] += 0;
      } else {
        result[0] += 85156404;
        result[1] += 0;
        result[2] += 537991;
        result[3] += 76855;
        result[4] += 0;
        result[5] += 25618;
        result[6] += 102474;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 18228228;
        result[1] += 0;
        result[2] += 259728;
        result[3] += 67198883;
        result[4] += 94446;
        result[5] += 118058;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 484312;
        result[2] += 0;
        result[3] += 9510127;
        result[4] += 75904906;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 84725378;
        result[1] += 79903;
        result[2] += 199758;
        result[3] += 885085;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9219;
      } else {
        result[0] += 69774895;
        result[1] += 0;
        result[2] += 1759030;
        result[3] += 14365419;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 502590;
        result[3] += 70843469;
        result[4] += 14465878;
        result[5] += 87407;
        result[6] += 0;
      } else {
        result[0] += 84926753;
        result[1] += 0;
        result[2] += 661362;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 311229;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 314745;
        result[3] += 82358456;
        result[4] += 3147456;
        result[5] += 78686;
        result[6] += 0;
      } else {
        result[0] += 42445124;
        result[1] += 0;
        result[2] += 756822;
        result[3] += 0;
        result[4] += 42697398;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 9938767;
        result[2] += 0;
        result[3] += 75960578;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 81149151;
        result[1] += 4750194;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 85668643;
        result[1] += 40528;
        result[2] += 171468;
        result[3] += 9352;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9352;
      } else {
        result[0] += 55258391;
        result[1] += 0;
        result[2] += 418696;
        result[3] += 30146131;
        result[4] += 0;
        result[5] += 9515;
        result[6] += 66610;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 84434920;
        result[1] += 12237;
        result[2] += 77504;
        result[3] += 1354287;
        result[4] += 12237;
        result[5] += 4079;
        result[6] += 4079;
      } else {
        result[0] += 402025;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85497320;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 65336695;
        result[1] += 49455;
        result[2] += 379161;
        result[3] += 18463523;
        result[4] += 1615558;
        result[5] += 21980;
        result[6] += 32970;
      } else {
        result[0] += 40519080;
        result[1] += 0;
        result[2] += 303824;
        result[3] += 45076441;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 10973169;
        result[1] += 1428798;
        result[2] += 742975;
        result[3] += 72754402;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84161497;
        result[1] += 0;
        result[2] += 1737848;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85842830;
        result[1] += 0;
        result[2] += 53190;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3324;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 26377451;
        result[1] += 184135;
        result[2] += 920678;
        result[3] += 54274024;
        result[4] += 4143055;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 59957684;
        result[1] += 251860;
        result[2] += 148153;
        result[3] += 25423124;
        result[4] += 0;
        result[5] += 44446;
        result[6] += 74076;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 47045118;
        result[1] += 238025;
        result[2] += 826089;
        result[3] += 14099534;
        result[4] += 23564563;
        result[5] += 28003;
        result[6] += 98010;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 708700;
        result[3] += 69281549;
        result[4] += 15835782;
        result[5] += 73313;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 83318235;
        result[1] += 0;
        result[2] += 2581110;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6381094;
        result[1] += 446230;
        result[2] += 44623;
        result[3] += 78982775;
        result[4] += 44623;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 72305;
        result[1] += 1156893;
        result[2] += 0;
        result[3] += 16919568;
        result[4] += 67750578;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 10466938;
        result[1] += 100643;
        result[2] += 0;
        result[3] += 74828545;
        result[4] += 0;
        result[5] += 503218;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2529427;
        result[3] += 0;
        result[4] += 83268741;
        result[5] += 101177;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 80449939;
        result[1] += 50710;
        result[2] += 230146;
        result[3] += 5117839;
        result[4] += 0;
        result[5] += 15603;
        result[6] += 35107;
      } else {
        result[0] += 74876410;
        result[1] += 0;
        result[2] += 66294;
        result[3] += 10956641;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 80206911;
        result[4] += 5641151;
        result[5] += 51283;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 84923216;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 976128;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 386064;
        result[2] += 887948;
        result[3] += 0;
        result[4] += 84432300;
        result[5] += 193032;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 85576230;
        result[1] += 40004;
        result[2] += 212332;
        result[3] += 55391;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15386;
      } else {
        result[0] += 28633115;
        result[1] += 1318630;
        result[2] += 0;
        result[3] += 55947600;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 36721655;
        result[1] += 0;
        result[2] += 0;
        result[3] += 49177690;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84720887;
        result[1] += 0;
        result[2] += 871034;
        result[3] += 51237;
        result[4] += 0;
        result[5] += 25618;
        result[6] += 230567;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 25494925;
        result[1] += 0;
        result[2] += 137438;
        result[3] += 13331578;
        result[4] += 46935402;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 73199;
        result[2] += 731992;
        result[3] += 74480259;
        result[4] += 10467495;
        result[5] += 146398;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85842624;
        result[1] += 0;
        result[2] += 56721;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 61326710;
        result[1] += 139837;
        result[2] += 590426;
        result[3] += 23780220;
        result[4] += 0;
        result[5] += 0;
        result[6] += 62150;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 1229328;
        result[2] += 0;
        result[3] += 84670017;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 83655706;
        result[1] += 0;
        result[2] += 2243639;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 502335;
        result[1] += 5525688;
        result[2] += 0;
        result[3] += 79871321;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 85824141;
        result[1] += 0;
        result[2] += 75204;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 52442811;
        result[1] += 94931;
        result[2] += 508561;
        result[3] += 28398047;
        result[4] += 4400747;
        result[5] += 20342;
        result[6] += 33904;
      } else {
        result[0] += 326200;
        result[1] += 0;
        result[2] += 1032966;
        result[3] += 68447643;
        result[4] += 16092535;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 34704320;
        result[1] += 0;
        result[2] += 2461299;
        result[3] += 48733726;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10825429;
        result[1] += 616081;
        result[2] += 0;
        result[3] += 74457834;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 5726623;
        result[2] += 0;
        result[3] += 80172722;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 508280;
        result[1] += 664674;
        result[2] += 1133855;
        result[3] += 83592535;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84754974;
        result[1] += 0;
        result[2] += 1144370;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85837381;
        result[1] += 0;
        result[2] += 61964;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 103244;
        result[2] += 0;
        result[3] += 18687237;
        result[4] += 67108863;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52201488;
        result[1] += 61143;
        result[2] += 596151;
        result[3] += 32574340;
        result[4] += 366862;
        result[5] += 53500;
        result[6] += 45857;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85856813;
        result[1] += 0;
        result[2] += 32717;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9815;
      } else {
        result[0] += 49151505;
        result[1] += 76135;
        result[2] += 444120;
        result[3] += 34260762;
        result[4] += 1820896;
        result[5] += 63445;
        result[6] += 82479;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 53615027;
        result[1] += 0;
        result[2] += 2306022;
        result[3] += 29978295;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 311511;
        result[1] += 1401802;
        result[2] += 0;
        result[3] += 84186031;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 84294039;
        result[1] += 33958;
        result[2] += 67916;
        result[3] += 1484908;
        result[4] += 0;
        result[5] += 3087;
        result[6] += 15435;
      } else {
        result[0] += 57613564;
        result[1] += 0;
        result[2] += 505825;
        result[3] += 27739489;
        result[4] += 0;
        result[5] += 10116;
        result[6] += 30349;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 394712;
        result[1] += 616738;
        result[2] += 789425;
        result[3] += 83950452;
        result[4] += 0;
        result[5] += 148017;
        result[6] += 0;
      } else {
        result[0] += 84378362;
        result[1] += 0;
        result[2] += 1086416;
        result[3] += 434566;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 85816581;
        result[1] += 0;
        result[2] += 82764;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85885043;
        result[1] += 0;
        result[2] += 14302;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 63021179;
        result[1] += 81707;
        result[2] += 498417;
        result[3] += 19912175;
        result[4] += 2328670;
        result[5] += 16341;
        result[6] += 40853;
      } else {
        result[0] += 7935070;
        result[1] += 619466;
        result[2] += 206488;
        result[3] += 34365638;
        result[4] += 42772682;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 55688;
        result[2] += 417662;
        result[3] += 85425994;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2063647;
        result[3] += 0;
        result[4] += 83577741;
        result[5] += 257955;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 83843751;
        result[1] += 0;
        result[2] += 231424;
        result[3] += 1796943;
        result[4] += 27226;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 67634494;
        result[1] += 0;
        result[2] += 280090;
        result[3] += 17852086;
        result[4] += 0;
        result[5] += 44224;
        result[6] += 88449;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85795965;
        result[1] += 0;
        result[2] += 79884;
        result[3] += 0;
        result[4] += 14097;
        result[5] += 0;
        result[6] += 9398;
      } else {
        result[0] += 57893538;
        result[1] += 223042;
        result[2] += 264863;
        result[3] += 26054183;
        result[4] += 1366136;
        result[5] += 27880;
        result[6] += 69700;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 21279017;
        result[1] += 0;
        result[2] += 348122;
        result[3] += 56265377;
        result[4] += 8006828;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1499829;
        result[2] += 0;
        result[3] += 18952395;
        result[4] += 65447120;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
        result[0] += 0;
        result[1] += 1036716;
        result[2] += 0;
        result[3] += 4739274;
        result[4] += 80123355;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15538656;
        result[1] += 367778;
        result[2] += 873474;
        result[3] += 42938179;
        result[4] += 26066325;
        result[5] += 114930;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 24840;
        result[2] += 0;
        result[3] += 80285334;
        result[4] += 5564330;
        result[5] += 24840;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85858067;
        result[5] += 41277;
        result[6] += 0;
      } else {
        result[0] += 63368369;
        result[1] += 9153208;
        result[2] += 12673673;
        result[3] += 0;
        result[4] += 0;
        result[5] += 704092;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 34741513;
        result[1] += 1717986;
        result[2] += 0;
        result[3] += 49439845;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85694268;
        result[1] += 15536;
        result[2] += 155361;
        result[3] += 18643;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15536;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34620610;
        result[1] += 0;
        result[2] += 455741;
        result[3] += 50822993;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85617708;
        result[5] += 281637;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 80254;
        result[1] += 267515;
        result[2] += 214012;
        result[3] += 85284059;
        result[4] += 0;
        result[5] += 53503;
        result[6] += 0;
      } else {
        result[0] += 84999876;
        result[1] += 0;
        result[2] += 899469;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85846397;
        result[1] += 0;
        result[2] += 48535;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4412;
      } else {
        result[0] += 44021330;
        result[1] += 285775;
        result[2] += 512014;
        result[3] += 41020688;
        result[4] += 0;
        result[5] += 0;
        result[6] += 59536;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 84630020;
        result[1] += 0;
        result[2] += 223998;
        result[3] += 978957;
        result[4] += 0;
        result[5] += 0;
        result[6] += 66369;
      } else {
        result[0] += 28633115;
        result[1] += 0;
        result[2] += 57266230;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 386759;
        result[1] += 1044251;
        result[2] += 812195;
        result[3] += 83656139;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84945723;
        result[1] += 0;
        result[2] += 953622;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 84434016;
        result[1] += 16326;
        result[2] += 61225;
        result[3] += 1346960;
        result[4] += 24490;
        result[5] += 8163;
        result[6] += 8163;
      } else {
        result[0] += 3558687;
        result[1] += 0;
        result[2] += 1963413;
        result[3] += 0;
        result[4] += 80377245;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 37223827;
        result[1] += 116616;
        result[2] += 618064;
        result[3] += 47357757;
        result[4] += 513110;
        result[5] += 46646;
        result[6] += 23323;
      } else {
        result[0] += 84680321;
        result[1] += 0;
        result[2] += 139582;
        result[3] += 1004997;
        result[4] += 0;
        result[5] += 0;
        result[6] += 74444;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4599b400))) ) ) {
        result[0] += 85866416;
        result[1] += 0;
        result[2] += 29636;
        result[3] += 0;
        result[4] += 3292;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28633115;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 57266230;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 41291128;
        result[1] += 291903;
        result[2] += 597076;
        result[3] += 42180108;
        result[4] += 1499324;
        result[5] += 26536;
        result[6] += 13268;
      } else {
        result[0] += 83056542;
        result[1] += 0;
        result[2] += 339439;
        result[3] += 2376074;
        result[4] += 0;
        result[5] += 0;
        result[6] += 127289;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 20262722;
        result[1] += 243291;
        result[2] += 955788;
        result[3] += 53576306;
        result[4] += 10791724;
        result[5] += 69511;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 15339168;
        result[4] += 70560176;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 943948;
        result[1] += 0;
        result[2] += 0;
        result[3] += 84955397;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 315034;
        result[1] += 1575171;
        result[2] += 0;
        result[3] += 105011;
        result[4] += 83904128;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 419021;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85480324;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17274091;
        result[1] += 22433;
        result[2] += 426243;
        result[3] += 68019539;
        result[4] += 0;
        result[5] += 157037;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11722502;
        result[4] += 74176843;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1283553;
        result[2] += 0;
        result[3] += 98734;
        result[4] += 84517057;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 53479270;
        result[1] += 277094;
        result[2] += 0;
        result[3] += 32142981;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85492447;
        result[1] += 71989;
        result[2] += 203449;
        result[3] += 112679;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18779;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 18030965;
        result[1] += 0;
        result[2] += 460645;
        result[3] += 67363863;
        result[4] += 0;
        result[5] += 43870;
        result[6] += 0;
      } else {
        result[0] += 85363417;
        result[1] += 0;
        result[2] += 401946;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 133982;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 83275463;
        result[4] += 2623882;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 82164591;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3734754;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 321988;
        result[2] += 608200;
        result[3] += 71552;
        result[4] += 84826051;
        result[5] += 71552;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85797846;
        result[1] += 0;
        result[2] += 85883;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15615;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 73177253;
        result[1] += 174275;
        result[2] += 715445;
        result[3] += 11731475;
        result[4] += 0;
        result[5] += 0;
        result[6] += 100896;
      } else {
        result[0] += 0;
        result[1] += 30788;
        result[2] += 461824;
        result[3] += 85406733;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 85826384;
        result[1] += 0;
        result[2] += 72960;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43750000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 50649550;
        result[1] += 330466;
        result[2] += 44062;
        result[3] += 32650123;
        result[4] += 2203112;
        result[5] += 0;
        result[6] += 22031;
      } else {
        result[0] += 28027123;
        result[1] += 0;
        result[2] += 1272582;
        result[3] += 39389470;
        result[4] += 16998071;
        result[5] += 60599;
        result[6] += 151497;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 49927622;
        result[1] += 282254;
        result[2] += 658593;
        result[3] += 21095884;
        result[4] += 13840907;
        result[5] += 73177;
        result[6] += 20907;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37708;
        result[3] += 68327311;
        result[4] += 17534326;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 405185;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85494160;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14100844;
        result[1] += 22706;
        result[2] += 0;
        result[3] += 71775794;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 686736;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85212608;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10117474;
        result[1] += 0;
        result[2] += 2578964;
        result[3] += 0;
        result[4] += 72905333;
        result[5] += 297572;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 85663790;
        result[1] += 0;
        result[2] += 235555;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85870049;
        result[1] += 0;
        result[2] += 29295;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 45928044;
        result[1] += 275664;
        result[2] += 767065;
        result[3] += 38880630;
        result[4] += 0;
        result[5] += 11985;
        result[6] += 35956;
      } else {
        result[0] += 83317997;
        result[1] += 0;
        result[2] += 555982;
        result[3] += 1826800;
        result[4] += 0;
        result[5] += 0;
        result[6] += 198565;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 85561325;
        result[1] += 0;
        result[2] += 211262;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 126757;
      } else {
        result[0] += 85867460;
        result[1] += 0;
        result[2] += 31885;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 1656866;
        result[1] += 478650;
        result[2] += 1012529;
        result[3] += 68170869;
        result[4] += 14562019;
        result[5] += 18409;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1004415;
        result[2] += 0;
        result[3] += 11965643;
        result[4] += 72929287;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 53954571;
        result[1] += 0;
        result[2] += 361271;
        result[3] += 31500132;
        result[4] += 0;
        result[5] += 0;
        result[6] += 83370;
      } else {
        result[0] += 79147602;
        result[1] += 39027;
        result[2] += 390274;
        result[3] += 6302927;
        result[4] += 0;
        result[5] += 19513;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 85273865;
        result[1] += 0;
        result[2] += 625480;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85852833;
        result[1] += 0;
        result[2] += 39868;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6644;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1673363;
        result[1] += 290049;
        result[2] += 1316379;
        result[3] += 60575772;
        result[4] += 21909911;
        result[5] += 133869;
        result[6] += 0;
      } else {
        result[0] += 63819000;
        result[1] += 0;
        result[2] += 298607;
        result[3] += 21665613;
        result[4] += 0;
        result[5] += 16589;
        result[6] += 99535;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 10263601;
        result[1] += 1341266;
        result[2] += 0;
        result[3] += 58840760;
        result[4] += 15453718;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4716695;
        result[1] += 0;
        result[2] += 388433;
        result[3] += 14094595;
        result[4] += 66699621;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 11763005;
        result[1] += 29407;
        result[2] += 352890;
        result[3] += 66343349;
        result[4] += 7351878;
        result[5] += 58815;
        result[6] += 0;
      } else {
        result[0] += 85162404;
        result[1] += 45678;
        result[2] += 155305;
        result[3] += 529866;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6090;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 33048053;
        result[1] += 0;
        result[2] += 415899;
        result[3] += 41893926;
        result[4] += 10541465;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 77382039;
        result[1] += 0;
        result[2] += 286111;
        result[3] += 7747007;
        result[4] += 220085;
        result[5] += 110042;
        result[6] += 154059;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        result[0] += 0;
        result[1] += 9286415;
        result[2] += 0;
        result[3] += 76612930;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1367428;
        result[2] += 0;
        result[3] += 870181;
        result[4] += 83661736;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 7736276;
        result[1] += 152438;
        result[2] += 419207;
        result[3] += 45998451;
        result[4] += 31592971;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85846685;
        result[1] += 0;
        result[2] += 49369;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3291;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 63582160;
        result[1] += 88880;
        result[2] += 517125;
        result[3] += 19376035;
        result[4] += 2213942;
        result[5] += 40400;
        result[6] += 80800;
      } else {
        result[0] += 0;
        result[1] += 92713;
        result[2] += 718532;
        result[3] += 69002253;
        result[4] += 16039489;
        result[5] += 46356;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 25053975;
        result[1] += 0;
        result[2] += 0;
        result[3] += 60845370;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 179330;
        result[1] += 3586611;
        result[2] += 0;
        result[3] += 13987784;
        result[4] += 68145618;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 10098816;
        result[1] += 1663334;
        result[2] += 950476;
        result[3] += 73186717;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 283496;
        result[2] += 0;
        result[3] += 3472828;
        result[4] += 82143021;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44640000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 85866668;
        result[1] += 0;
        result[2] += 32677;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1282316;
        result[1] += 506594;
        result[2] += 474931;
        result[3] += 54585503;
        result[4] += 29002506;
        result[5] += 47493;
        result[6] += 0;
      } else {
        result[0] += 84144308;
        result[1] += 10833;
        result[2] += 520011;
        result[3] += 1040022;
        result[4] += 0;
        result[5] += 10833;
        result[6] += 173337;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 472279;
        result[3] += 85427066;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1250354;
        result[3] += 0;
        result[4] += 83648708;
        result[5] += 1000283;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 3961682;
        result[1] += 0;
        result[2] += 943257;
        result[3] += 63512693;
        result[4] += 17355943;
        result[5] += 125767;
        result[6] += 0;
      } else {
        result[0] += 10941410;
        result[1] += 0;
        result[2] += 407984;
        result[3] += 49366161;
        result[4] += 25035431;
        result[5] += 148358;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 76109323;
        result[1] += 61592;
        result[2] += 210712;
        result[3] += 9491783;
        result[4] += 0;
        result[5] += 6483;
        result[6] += 19450;
      } else {
        result[0] += 84853527;
        result[1] += 0;
        result[2] += 92032;
        result[3] += 903587;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50199;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
        result[0] += 17850495;
        result[1] += 0;
        result[2] += 0;
        result[3] += 48225924;
        result[4] += 19822925;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 891688;
        result[1] += 3863984;
        result[2] += 0;
        result[3] += 15158708;
        result[4] += 65984964;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8004956;
        result[1] += 1744670;
        result[2] += 0;
        result[3] += 54905794;
        result[4] += 21243924;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1057473;
        result[1] += 0;
        result[2] += 894784;
        result[3] += 12038923;
        result[4] += 71908164;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x432e8000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85843849;
        result[1] += 0;
        result[2] += 48967;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6529;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 63330770;
        result[1] += 106109;
        result[2] += 661140;
        result[3] += 19205735;
        result[4] += 2481318;
        result[5] += 24486;
        result[6] += 89784;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 372665;
        result[3] += 69828155;
        result[4] += 15651941;
        result[5] += 46583;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 10960633;
        result[1] += 1354685;
        result[2] += 738919;
        result[3] += 72845108;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 85067390;
        result[1] += 0;
        result[2] += 831954;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85856235;
        result[1] += 0;
        result[2] += 39794;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3316;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 1262107;
        result[1] += 380152;
        result[2] += 897160;
        result[3] += 59440705;
        result[4] += 23858395;
        result[5] += 60824;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1452843;
        result[2] += 0;
        result[3] += 8263044;
        result[4] += 76183457;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84194570;
        result[1] += 10654;
        result[2] += 617980;
        result[3] += 948281;
        result[4] += 0;
        result[5] += 10654;
        result[6] += 117203;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34141;
        result[3] += 85865204;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 76760742;
        result[1] += 211705;
        result[2] += 282273;
        result[3] += 8591698;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52926;
      } else {
        result[0] += 84791915;
        result[1] += 10751;
        result[2] += 43007;
        result[3] += 1025000;
        result[4] += 14335;
        result[5] += 10751;
        result[6] += 3583;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15251516;
        result[1] += 300522;
        result[2] += 1177046;
        result[3] += 69170260;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33831276;
        result[1] += 0;
        result[2] += 810524;
        result[3] += 50998177;
        result[4] += 162104;
        result[5] += 48631;
        result[6] += 48631;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 85899345;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 79856;
        result[1] += 26618;
        result[2] += 159713;
        result[3] += 81773408;
        result[4] += 3753271;
        result[5] += 106475;
        result[6] += 0;
      } else {
        result[0] += 43743905;
        result[1] += 0;
        result[2] += 855327;
        result[3] += 0;
        result[4] += 41300112;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 10581803;
        result[2] += 0;
        result[3] += 75317542;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85832664;
        result[1] += 8890;
        result[2] += 40009;
        result[3] += 17781;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 77586505;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8312839;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 47113009;
        result[1] += 214420;
        result[2] += 667086;
        result[3] += 37857179;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47649;
      } else {
        result[0] += 84541902;
        result[1] += 0;
        result[2] += 363137;
        result[3] += 933782;
        result[4] += 0;
        result[5] += 0;
        result[6] += 60522;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85761382;
        result[1] += 0;
        result[2] += 120717;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17245;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 72011531;
        result[1] += 225959;
        result[2] += 156433;
        result[3] += 13418513;
        result[4] += 0;
        result[5] += 34762;
        result[6] += 52144;
      } else {
        result[0] += 13864007;
        result[1] += 287502;
        result[2] += 734728;
        result[3] += 67946414;
        result[4] += 3002803;
        result[5] += 63889;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 11102484;
        result[1] += 0;
        result[2] += 646530;
        result[3] += 59213252;
        result[4] += 14870195;
        result[5] += 66882;
        result[6] += 0;
      } else {
        result[0] += 43564337;
        result[1] += 245865;
        result[2] += 906629;
        result[3] += 15689308;
        result[4] += 25370271;
        result[5] += 46099;
        result[6] += 76833;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85850407;
        result[1] += 0;
        result[2] += 42412;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6525;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 63398784;
        result[1] += 106250;
        result[2] += 531251;
        result[3] += 19174107;
        result[4] += 2590874;
        result[5] += 24519;
        result[6] += 73557;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 774290;
        result[3] += 68536462;
        result[4] += 16518202;
        result[5] += 70390;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 715827;
        result[2] += 79536;
        result[3] += 85103981;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 82959824;
        result[1] += 0;
        result[2] += 2939521;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 52153174;
        result[4] += 33746171;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 111412;
        result[1] += 668477;
        result[2] += 0;
        result[3] += 4512222;
        result[4] += 80607233;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 12744901;
        result[1] += 32184;
        result[2] += 0;
        result[3] += 72832603;
        result[4] += 96552;
        result[5] += 193104;
        result[6] += 0;
      } else {
        result[0] += 87741;
        result[1] += 0;
        result[2] += 1754838;
        result[3] += 0;
        result[4] += 83881281;
        result[5] += 175483;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 85532470;
        result[1] += 8433;
        result[2] += 29518;
        result[3] += 324705;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4216;
      } else {
        result[0] += 69603850;
        result[1] += 47096;
        result[2] += 313978;
        result[3] += 15845459;
        result[4] += 0;
        result[5] += 15698;
        result[6] += 73261;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
        result[0] += 16508030;
        result[1] += 0;
        result[2] += 0;
        result[3] += 49812022;
        result[4] += 19579292;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 727960;
        result[1] += 2183881;
        result[2] += 0;
        result[3] += 18199013;
        result[4] += 64788489;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10201822;
        result[1] += 1224218;
        result[2] += 816145;
        result[3] += 73657158;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 11218307;
        result[1] += 58734;
        result[2] += 381774;
        result[3] += 65224768;
        result[4] += 8957025;
        result[5] += 58734;
        result[6] += 0;
      } else {
        result[0] += 85102771;
        result[1] += 42565;
        result[2] += 152018;
        result[3] += 589830;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12161;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 39188657;
        result[1] += 0;
        result[2] += 0;
        result[3] += 46710688;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 69684884;
        result[1] += 0;
        result[2] += 1118995;
        result[3] += 109705;
        result[4] += 14722467;
        result[5] += 0;
        result[6] += 263293;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
        result[0] += 22594377;
        result[1] += 0;
        result[2] += 0;
        result[3] += 63304968;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 11620335;
        result[1] += 1594948;
        result[2] += 911398;
        result[3] += 71772663;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85128083;
        result[1] += 0;
        result[2] += 771262;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 85841364;
        result[1] += 0;
        result[2] += 57981;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 1332567;
        result[1] += 424664;
        result[2] += 761467;
        result[3] += 57930073;
        result[4] += 25362711;
        result[5] += 87861;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 53211014;
        result[1] += 0;
        result[2] += 301401;
        result[3] += 32277329;
        result[4] += 0;
        result[5] += 0;
        result[6] += 109600;
      } else {
        result[0] += 78107633;
        result[1] += 38101;
        result[2] += 552468;
        result[3] += 7143990;
        result[4] += 0;
        result[5] += 19050;
        result[6] += 38101;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85685310;
        result[5] += 214034;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 6144315;
        result[1] += 0;
        result[2] += 0;
        result[3] += 79724762;
        result[4] += 0;
        result[5] += 30267;
        result[6] += 0;
      } else {
        result[0] += 43984604;
        result[1] += 5692125;
        result[2] += 5950858;
        result[3] += 29236825;
        result[4] += 0;
        result[5] += 1034931;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42540000))) ) ) {
        result[0] += 85577292;
        result[1] += 33738;
        result[2] += 196299;
        result[3] += 85880;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6134;
      } else {
        result[0] += 14967310;
        result[1] += 1626881;
        result[2] += 0;
        result[3] += 69305154;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 38603395;
        result[1] += 0;
        result[2] += 181094;
        result[3] += 47114855;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84822473;
        result[1] += 0;
        result[2] += 801393;
        result[3] += 75130;
        result[4] += 0;
        result[5] += 0;
        result[6] += 200348;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 618574;
        result[1] += 1154671;
        result[2] += 948480;
        result[3] += 83177619;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85611736;
        result[1] += 0;
        result[2] += 287609;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 10598260;
        result[1] += 44530;
        result[2] += 712488;
        result[3] += 67285594;
        result[4] += 7124880;
        result[5] += 133591;
        result[6] += 0;
      } else {
        result[0] += 77887762;
        result[1] += 35554;
        result[2] += 180142;
        result[3] += 7769813;
        result[4] += 0;
        result[5] += 2370;
        result[6] += 23702;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 64424509;
        result[1] += 0;
        result[2] += 21474836;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 12734404;
        result[1] += 501658;
        result[2] += 0;
        result[3] += 53330141;
        result[4] += 19217373;
        result[5] += 115767;
        result[6] += 0;
      } else {
        result[0] += 85444118;
        result[1] += 0;
        result[2] += 89066;
        result[3] += 366160;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 28250063;
        result[1] += 0;
        result[2] += 0;
        result[3] += 57649282;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 69926958;
        result[1] += 0;
        result[2] += 2598378;
        result[3] += 0;
        result[4] += 12380510;
        result[5] += 305691;
        result[6] += 687806;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
        result[0] += 17890255;
        result[1] += 443991;
        result[2] += 679046;
        result[3] += 33534436;
        result[4] += 33351615;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15618062;
        result[1] += 0;
        result[2] += 0;
        result[3] += 70281283;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 7434697;
        result[1] += 114379;
        result[2] += 457519;
        result[3] += 44836942;
        result[4] += 32941426;
        result[5] += 114379;
        result[6] += 0;
      } else {
        result[0] += 79066404;
        result[1] += 44953;
        result[2] += 148692;
        result[3] += 6628921;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10373;
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
  result[6] += 0;
  
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_2/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
