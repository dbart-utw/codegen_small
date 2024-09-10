
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32212254;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53646088;
        result[1] += 0;
        result[2] += 38952;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2050;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 36258606;
        result[1] += 88791;
        result[2] += 310769;
        result[3] += 15227726;
        result[4] += 1750459;
        result[5] += 19026;
        result[6] += 31711;
      } else {
        result[0] += 19316718;
        result[1] += 0;
        result[2] += 504233;
        result[3] += 27705326;
        result[4] += 6114974;
        result[5] += 27503;
        result[6] += 18335;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 751920;
        result[1] += 2255760;
        result[2] += 0;
        result[3] += 12030720;
        result[4] += 38648690;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 500578;
        result[4] += 53186512;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10163143;
        result[1] += 491155;
        result[2] += 491155;
        result[3] += 42541635;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53649941;
        result[1] += 0;
        result[2] += 30957;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6191;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 27960194;
        result[1] += 105510;
        result[2] += 422040;
        result[3] += 21465457;
        result[4] += 3686994;
        result[5] += 17585;
        result[6] += 29308;
      } else {
        result[0] += 31782838;
        result[1] += 0;
        result[2] += 60481;
        result[3] += 18487068;
        result[4] += 3296222;
        result[5] += 20160;
        result[6] += 40320;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 9574767;
        result[1] += 341955;
        result[2] += 427444;
        result[3] += 43342922;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 142406;
        result[1] += 1993685;
        result[2] += 0;
        result[3] += 19652038;
        result[4] += 31898961;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1462294;
        result[4] += 52224796;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 16970544;
        result[1] += 211866;
        result[2] += 466107;
        result[3] += 35953825;
        result[4] += 84746;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 512933;
        result[1] += 1367823;
        result[2] += 0;
        result[3] += 9232811;
        result[4] += 42573521;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 46881685;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6805405;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1403370;
        result[1] += 0;
        result[2] += 195819;
        result[3] += 7277946;
        result[4] += 44809955;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 137219;
        result[1] += 0;
        result[2] += 411658;
        result[3] += 48541363;
        result[4] += 4391020;
        result[5] += 205829;
        result[6] += 0;
      } else {
        result[0] += 11325099;
        result[1] += 0;
        result[2] += 795817;
        result[3] += 0;
        result[4] += 41566174;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53345049;
        result[1] += 34783;
        result[2] += 92757;
        result[3] += 208703;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5797;
      } else {
        result[0] += 34823892;
        result[1] += 0;
        result[2] += 209522;
        result[3] += 18585889;
        result[4] += 0;
        result[5] += 18487;
        result[6] += 49299;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 50991386;
        result[1] += 0;
        result[2] += 191536;
        result[3] += 2497074;
        result[4] += 0;
        result[5] += 7093;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
        result[0] += 9089428;
        result[1] += 467213;
        result[2] += 0;
        result[3] += 28754873;
        result[4] += 15375575;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 36141008;
        result[1] += 0;
        result[2] += 205847;
        result[3] += 16075740;
        result[4] += 1166471;
        result[5] += 29406;
        result[6] += 68615;
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 28633115;
        result[4] += 25053975;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 10135831;
        result[1] += 91149;
        result[2] += 291678;
        result[3] += 21073778;
        result[4] += 22094653;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 46827613;
        result[1] += 33077;
        result[2] += 124041;
        result[3] += 5370983;
        result[4] += 1318971;
        result[5] += 6202;
        result[6] += 6202;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53404932;
        result[1] += 0;
        result[2] += 282158;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53675969;
        result[1] += 0;
        result[2] += 11121;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 11106480;
        result[1] += 149931;
        result[2] += 196064;
        result[3] += 23124085;
        result[4] += 19110528;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42525206;
        result[1] += 72558;
        result[2] += 284186;
        result[3] += 9898160;
        result[4] += 870699;
        result[5] += 12093;
        result[6] += 24186;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 35378;
        result[2] += 566058;
        result[3] += 44683226;
        result[4] += 8331670;
        result[5] += 70757;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37951219;
        result[4] += 15735871;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 27529084;
        result[1] += 0;
        result[2] += 537677;
        result[3] += 24679393;
        result[4] += 940935;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9526642;
        result[1] += 516222;
        result[2] += 563151;
        result[3] += 43081074;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 19728914;
        result[4] += 33958176;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 78662;
        result[1] += 393312;
        result[2] += 0;
        result[3] += 2871177;
        result[4] += 50343938;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 53660570;
        result[1] += 0;
        result[2] += 26520;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 19978574;
        result[1] += 98352;
        result[2] += 373737;
        result[3] += 28554870;
        result[4] += 4635658;
        result[5] += 32784;
        result[6] += 13113;
      } else {
        result[0] += 51912311;
        result[1] += 0;
        result[2] += 388233;
        result[3] += 1317219;
        result[4] += 0;
        result[5] += 0;
        result[6] += 69327;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 155165;
        result[1] += 1396485;
        result[2] += 0;
        result[3] += 14430345;
        result[4] += 37705095;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 748624;
        result[4] += 52938466;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 52703811;
        result[1] += 0;
        result[2] += 983280;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2782793;
        result[1] += 189305;
        result[2] += 0;
        result[3] += 35059412;
        result[4] += 15655579;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 6183063;
        result[1] += 30161;
        result[2] += 0;
        result[3] += 47292898;
        result[4] += 30161;
        result[5] += 150806;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1333840;
        result[3] += 0;
        result[4] += 52353250;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53645696;
        result[1] += 0;
        result[2] += 37255;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4139;
      } else {
        result[0] += 37139594;
        result[1] += 61514;
        result[2] += 302448;
        result[3] += 16147649;
        result[4] += 0;
        result[5] += 10252;
        result[6] += 25631;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 17162540;
        result[1] += 483217;
        result[2] += 366578;
        result[3] += 31259150;
        result[4] += 4415604;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6155577;
        result[1] += 0;
        result[2] += 348428;
        result[3] += 2700324;
        result[4] += 44482760;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 52617829;
        result[1] += 21131;
        result[2] += 33810;
        result[3] += 986848;
        result[4] += 19018;
        result[5] += 4226;
        result[6] += 4226;
      } else {
        result[0] += 37823346;
        result[1] += 0;
        result[2] += 348334;
        result[3] += 15021935;
        result[4] += 478960;
        result[5] += 0;
        result[6] += 14513;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 17274710;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36412380;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26007105;
        result[1] += 0;
        result[2] += 0;
        result[3] += 27679986;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
        result[0] += 53117164;
        result[1] += 0;
        result[2] += 455941;
        result[3] += 16283;
        result[4] += 0;
        result[5] += 0;
        result[6] += 97701;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 651740;
        result[3] += 0;
        result[4] += 52546546;
        result[5] += 488805;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 52205082;
        result[1] += 33852;
        result[2] += 60183;
        result[3] += 1378569;
        result[4] += 3761;
        result[5] += 3761;
        result[6] += 1880;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53463860;
        result[4] += 223231;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 13878813;
        result[1] += 137112;
        result[2] += 685561;
        result[3] += 25274371;
        result[4] += 13711232;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 396842;
        result[1] += 963759;
        result[2] += 0;
        result[3] += 5215641;
        result[4] += 47110847;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 390779;
        result[1] += 0;
        result[2] += 360719;
        result[3] += 43241254;
        result[4] += 9694337;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 46820898;
        result[1] += 0;
        result[2] += 196176;
        result[3] += 6364852;
        result[4] += 174379;
        result[5] += 43594;
        result[6] += 87189;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 27143017;
        result[1] += 0;
        result[2] += 653392;
        result[3] += 24992266;
        result[4] += 898414;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10407318;
        result[1] += 550166;
        result[2] += 366777;
        result[3] += 42362828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 103443;
        result[1] += 1758536;
        result[2] += 0;
        result[3] += 25550503;
        result[4] += 26274607;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1446348;
        result[4] += 52240742;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 17895697;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35791394;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53654098;
        result[1] += 0;
        result[2] += 30930;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2062;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 63610;
        result[2] += 0;
        result[3] += 12276787;
        result[4] += 41283083;
        result[5] += 63610;
        result[6] += 0;
      } else {
        result[0] += 32341337;
        result[1] += 75376;
        result[2] += 315640;
        result[3] += 20620252;
        result[4] += 277951;
        result[5] += 18844;
        result[6] += 37688;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 7217971;
        result[1] += 0;
        result[2] += 438560;
        result[3] += 40585101;
        result[4] += 5354090;
        result[5] += 91366;
        result[6] += 0;
      } else {
        result[0] += 48882347;
        result[1] += 20470;
        result[2] += 118437;
        result[3] += 4649752;
        result[4] += 0;
        result[5] += 1462;
        result[6] += 14621;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 30456031;
        result[1] += 0;
        result[2] += 1333840;
        result[3] += 21897219;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 230219;
        result[1] += 1151095;
        result[2] += 0;
        result[3] += 52305776;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
        result[0] += 53561014;
        result[1] += 4347;
        result[2] += 30432;
        result[3] += 78254;
        result[4] += 8694;
        result[5] += 0;
        result[6] += 4347;
      } else {
        result[0] += 46058225;
        result[1] += 201200;
        result[2] += 201200;
        result[3] += 7176163;
        result[4] += 0;
        result[5] += 16766;
        result[6] += 33533;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 9576123;
        result[1] += 0;
        result[2] += 410405;
        result[3] += 42271744;
        result[4] += 1413618;
        result[5] += 15200;
        result[6] += 0;
      } else {
        result[0] += 53360309;
        result[1] += 0;
        result[2] += 137037;
        result[3] += 84330;
        result[4] += 0;
        result[5] += 0;
        result[6] += 105413;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 29431049;
        result[1] += 0;
        result[2] += 896230;
        result[3] += 23330900;
        result[4] += 0;
        result[5] += 28910;
        result[6] += 0;
      } else {
        result[0] += 3588240;
        result[1] += 448530;
        result[2] += 585039;
        result[3] += 49045780;
        result[4] += 0;
        result[5] += 19501;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 52208848;
        result[1] += 0;
        result[2] += 1276664;
        result[3] += 201578;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4137177;
        result[1] += 601333;
        result[2] += 48106;
        result[3] += 48900473;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 52850731;
        result[1] += 2581;
        result[2] += 36139;
        result[3] += 771826;
        result[4] += 25813;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2372036;
        result[1] += 0;
        result[2] += 1027882;
        result[3] += 0;
        result[4] += 50287172;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 43109662;
        result[1] += 50416;
        result[2] += 154611;
        result[3] += 10348873;
        result[4] += 0;
        result[5] += 6722;
        result[6] += 16805;
      } else {
        result[0] += 837614;
        result[1] += 0;
        result[2] += 837614;
        result[3] += 46587312;
        result[4] += 5304890;
        result[5] += 119659;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 24403223;
        result[1] += 0;
        result[2] += 31286;
        result[3] += 6319809;
        result[4] += 22901486;
        result[5] += 31286;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 17883;
        result[2] += 518629;
        result[3] += 50736268;
        result[4] += 2342774;
        result[5] += 71535;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40178726;
        result[4] += 13508364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 647242;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53039848;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 22106449;
        result[1] += 1315860;
        result[2] += 0;
        result[3] += 30264781;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53515442;
        result[1] += 15604;
        result[2] += 126786;
        result[3] += 21456;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7802;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 22284473;
        result[1] += 0;
        result[2] += 321129;
        result[3] += 31023100;
        result[4] += 0;
        result[5] += 9731;
        result[6] += 48656;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 24875245;
        result[1] += 0;
        result[2] += 33936;
        result[3] += 5972773;
        result[4] += 22805136;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 18897;
        result[2] += 510225;
        result[3] += 52005235;
        result[4] += 1020451;
        result[5] += 132280;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16327022;
        result[4] += 37360068;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 363569;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53323521;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 53095497;
        result[1] += 0;
        result[2] += 591593;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53644871;
        result[1] += 0;
        result[2] += 37998;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4222;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 32375019;
        result[1] += 42386;
        result[2] += 262798;
        result[3] += 20896680;
        result[4] += 0;
        result[5] += 0;
        result[6] += 110205;
      } else {
        result[0] += 43789826;
        result[1] += 201552;
        result[2] += 615264;
        result[3] += 9059232;
        result[4] += 0;
        result[5] += 10608;
        result[6] += 10608;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 16985370;
        result[1] += 383003;
        result[2] += 249784;
        result[3] += 31472891;
        result[4] += 4596041;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5995058;
        result[1] += 0;
        result[2] += 686001;
        result[3] += 2535223;
        result[4] += 44470807;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 49993383;
        result[1] += 0;
        result[2] += 11159;
        result[3] += 3676968;
        result[4] += 0;
        result[5] += 5579;
        result[6] += 0;
      } else {
        result[0] += 51113853;
        result[1] += 61267;
        result[2] += 105825;
        result[3] += 2308673;
        result[4] += 89116;
        result[5] += 2784;
        result[6] += 5569;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 110111;
        result[1] += 0;
        result[2] += 503365;
        result[3] += 43478206;
        result[4] += 9595407;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 44668584;
        result[1] += 0;
        result[2] += 385406;
        result[3] += 8093531;
        result[4] += 308325;
        result[5] += 38540;
        result[6] += 192703;
      } else {
        result[0] += 49578936;
        result[1] += 0;
        result[2] += 194596;
        result[3] += 3827070;
        result[4] += 43243;
        result[5] += 0;
        result[6] += 43243;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53665142;
        result[5] += 21948;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 243589;
        result[2] += 227350;
        result[3] += 53199912;
        result[4] += 0;
        result[5] += 16239;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53431924;
        result[1] += 0;
        result[2] += 204133;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 51033;
      } else {
        result[0] += 53677853;
        result[1] += 0;
        result[2] += 9237;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 48927490;
        result[1] += 138570;
        result[2] += 445836;
        result[3] += 4126995;
        result[4] += 0;
        result[5] += 6024;
        result[6] += 42173;
      } else {
        result[0] += 0;
        result[1] += 19766;
        result[2] += 276737;
        result[3] += 53390586;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 33668175;
        result[4] += 20018915;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16447788;
        result[1] += 343377;
        result[2] += 257533;
        result[3] += 32809731;
        result[4] += 3828660;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23188254;
        result[1] += 0;
        result[2] += 1827645;
        result[3] += 28671191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 70087;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53546916;
        result[5] += 70087;
        result[6] += 0;
      } else {
        result[0] += 7089491;
        result[1] += 33283;
        result[2] += 931951;
        result[3] += 45565795;
        result[4] += 0;
        result[5] += 66567;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53668551;
        result[1] += 0;
        result[2] += 18539;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 36717344;
        result[1] += 70256;
        result[2] += 286432;
        result[3] += 16542801;
        result[4] += 0;
        result[5] += 10808;
        result[6] += 59448;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 25254778;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6586763;
        result[4] += 21845548;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 340510;
        result[3] += 52060209;
        result[4] += 1172868;
        result[5] += 113503;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 2272469;
        result[2] += 0;
        result[3] += 51414621;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53455570;
        result[1] += 0;
        result[2] += 205796;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25724;
      } else {
        result[0] += 53675666;
        result[1] += 0;
        result[2] += 11424;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 50719328;
        result[1] += 204980;
        result[2] += 392136;
        result[3] += 2370645;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 22427365;
        result[1] += 0;
        result[2] += 331823;
        result[3] += 30859585;
        result[4] += 0;
        result[5] += 9759;
        result[6] += 58557;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53548543;
        result[5] += 138547;
        result[6] += 0;
      } else {
        result[0] += 10651974;
        result[1] += 14240;
        result[2] += 227849;
        result[3] += 42707582;
        result[4] += 0;
        result[5] += 85443;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35546247;
        result[4] += 18140843;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 423447;
        result[2] += 0;
        result[3] += 514186;
        result[4] += 52749457;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 53643049;
        result[1] += 0;
        result[2] += 14680;
        result[3] += 29361;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53381247;
        result[1] += 3288;
        result[2] += 29597;
        result[3] += 269668;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3288;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53649918;
        result[1] += 0;
        result[2] += 37172;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37353792;
        result[1] += 91060;
        result[2] += 455300;
        result[3] += 15719841;
        result[4] += 0;
        result[5] += 4792;
        result[6] += 62304;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53604022;
        result[1] += 0;
        result[2] += 78182;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4886;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 784171;
        result[1] += 258202;
        result[2] += 564221;
        result[3] += 36894335;
        result[4] += 15147907;
        result[5] += 38252;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 938006;
        result[2] += 0;
        result[3] += 4690033;
        result[4] += 48059050;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 29628027;
        result[1] += 0;
        result[2] += 123966;
        result[3] += 23916025;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19071;
      } else {
        result[0] += 52222408;
        result[1] += 0;
        result[2] += 312322;
        result[3] += 1076972;
        result[4] += 0;
        result[5] += 10769;
        result[6] += 64618;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 52092425;
        result[1] += 0;
        result[2] += 1594666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2584152;
        result[1] += 140634;
        result[2] += 140634;
        result[3] += 35193698;
        result[4] += 15627971;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 2693332;
        result[2] += 0;
        result[3] += 10593773;
        result[4] += 40399985;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2064888;
        result[4] += 51622203;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 10901421;
        result[1] += 0;
        result[2] += 48236;
        result[3] += 9020203;
        result[4] += 33717229;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 127927;
        result[2] += 810210;
        result[3] += 50744748;
        result[4] += 1961561;
        result[5] += 42642;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53656235;
        result[1] += 0;
        result[2] += 26741;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4114;
      } else {
        result[0] += 36359941;
        result[1] += 97465;
        result[2] += 265321;
        result[3] += 16926459;
        result[4] += 0;
        result[5] += 10829;
        result[6] += 27073;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53664038;
        result[1] += 0;
        result[2] += 20171;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2881;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1103999;
        result[1] += 109036;
        result[2] += 858666;
        result[3] += 38680874;
        result[4] += 12893624;
        result[5] += 40888;
        result[6] += 0;
      } else {
        result[0] += 39877648;
        result[1] += 0;
        result[2] += 167641;
        result[3] += 13594652;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47149;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 6846173;
        result[1] += 251697;
        result[2] += 302037;
        result[3] += 29121408;
        result[4] += 17165774;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 226289;
        result[1] += 848584;
        result[2] += 0;
        result[3] += 5204649;
        result[4] += 47407568;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 53623528;
        result[1] += 0;
        result[2] += 60217;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3345;
      } else {
        result[0] += 53681804;
        result[1] += 0;
        result[2] += 5286;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
        result[0] += 36997286;
        result[1] += 121210;
        result[2] += 111886;
        result[3] += 16344819;
        result[4] += 65267;
        result[5] += 9323;
        result[6] += 37295;
      } else {
        result[0] += 17310995;
        result[1] += 287558;
        result[2] += 316313;
        result[3] += 32810375;
        result[4] += 2961848;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 30100783;
        result[1] += 118908;
        result[2] += 373711;
        result[3] += 8620850;
        result[4] += 14421876;
        result[5] += 8493;
        result[6] += 42467;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 272686;
        result[3] += 43517501;
        result[4] += 9880862;
        result[5] += 16040;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 6438363;
        result[1] += 0;
        result[2] += 0;
        result[3] += 44932279;
        result[4] += 2316448;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2380620;
        result[1] += 1067174;
        result[2] += 902993;
        result[3] += 0;
        result[4] += 49090031;
        result[5] += 246271;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 52904806;
        result[1] += 0;
        result[2] += 27938;
        result[3] += 743170;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11175;
      } else {
        result[0] += 29562809;
        result[1] += 0;
        result[2] += 367468;
        result[3] += 23646573;
        result[4] += 0;
        result[5] += 0;
        result[6] += 110240;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 53155535;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 531555;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 43007;
        result[2] += 186363;
        result[3] += 27381133;
        result[4] += 25961901;
        result[5] += 114685;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53665921;
        result[1] += 0;
        result[2] += 18145;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3024;
      } else {
        result[0] += 37424794;
        result[1] += 167323;
        result[2] += 310744;
        result[3] += 15752356;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31871;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 53662715;
        result[1] += 0;
        result[2] += 22344;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2031;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 37157916;
        result[1] += 144690;
        result[2] += 172250;
        result[3] += 16157113;
        result[4] += 20670;
        result[5] += 0;
        result[6] += 34450;
      } else {
        result[0] += 19394223;
        result[1] += 0;
        result[2] += 632326;
        result[3] += 25396991;
        result[4] += 8194254;
        result[5] += 8662;
        result[6] += 60634;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 575218;
        result[1] += 1725656;
        result[2] += 0;
        result[3] += 5752188;
        result[4] += 45634027;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8399718;
        result[1] += 622201;
        result[2] += 0;
        result[3] += 44665171;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14655958;
        result[1] += 0;
        result[2] += 2314098;
        result[3] += 36717033;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53604875;
        result[5] += 82216;
        result[6] += 0;
      } else {
        result[0] += 10955929;
        result[1] += 303488;
        result[2] += 455232;
        result[3] += 41942091;
        result[4] += 0;
        result[5] += 30348;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 45883734;
        result[1] += 0;
        result[2] += 94229;
        result[3] += 7697348;
        result[4] += 0;
        result[5] += 11778;
        result[6] += 0;
      } else {
        result[0] += 53284689;
        result[1] += 0;
        result[2] += 134133;
        result[3] += 184434;
        result[4] += 0;
        result[5] += 0;
        result[6] += 83833;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 51266197;
        result[1] += 10775;
        result[2] += 32326;
        result[3] += 642937;
        result[4] += 1724078;
        result[5] += 0;
        result[6] += 10775;
      } else {
        result[0] += 39238107;
        result[1] += 68027;
        result[2] += 276644;
        result[3] += 13274380;
        result[4] += 811791;
        result[5] += 18140;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 3239738;
        result[1] += 378670;
        result[2] += 546968;
        result[3] += 27727110;
        result[4] += 21794602;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 76805;
        result[2] += 0;
        result[3] += 2534583;
        result[4] += 51075701;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 12216013;
        result[1] += 492865;
        result[2] += 0;
        result[3] += 40907803;
        result[4] += 70409;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28263314;
        result[1] += 0;
        result[2] += 1419769;
        result[3] += 23112523;
        result[4] += 891483;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1955490;
        result[2] += 0;
        result[3] += 51731601;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53680337;
        result[1] += 0;
        result[2] += 6753;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29650180;
        result[1] += 0;
        result[2] += 442540;
        result[3] += 21416607;
        result[4] += 2096242;
        result[5] += 23291;
        result[6] += 58228;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 51358958;
        result[1] += 3500;
        result[2] += 28007;
        result[3] += 665180;
        result[4] += 1627942;
        result[5] += 0;
        result[6] += 3500;
      } else {
        result[0] += 41088479;
        result[1] += 77292;
        result[2] += 159737;
        result[3] += 12083331;
        result[4] += 247334;
        result[5] += 15458;
        result[6] += 15458;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42640000))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53644784;
        result[5] += 42306;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 234368;
        result[2] += 418514;
        result[3] += 52933764;
        result[4] += 0;
        result[5] += 100443;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 53409638;
        result[1] += 0;
        result[2] += 277452;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53659230;
        result[1] += 0;
        result[2] += 25717;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2143;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        result[0] += 38433309;
        result[1] += 53453;
        result[2] += 311004;
        result[3] += 14845588;
        result[4] += 0;
        result[5] += 9718;
        result[6] += 34016;
      } else {
        result[0] += 8735193;
        result[1] += 1472223;
        result[2] += 0;
        result[3] += 43479673;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 47859469;
        result[1] += 0;
        result[2] += 41111;
        result[3] += 5390806;
        result[4] += 385424;
        result[5] += 5138;
        result[6] += 5138;
      } else {
        result[0] += 28336828;
        result[1] += 0;
        result[2] += 746641;
        result[3] += 21457059;
        result[4] += 3039898;
        result[5] += 71108;
        result[6] += 35554;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53639986;
        result[1] += 0;
        result[2] += 35328;
        result[3] += 0;
        result[4] += 5888;
        result[5] += 0;
        result[6] += 5888;
      } else {
        result[0] += 29297201;
        result[1] += 91668;
        result[2] += 262782;
        result[3] += 19892029;
        result[4] += 4106741;
        result[5] += 30556;
        result[6] += 6111;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        result[0] += 0;
        result[1] += 2753184;
        result[2] += 0;
        result[3] += 50933907;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 147898;
        result[1] += 961339;
        result[2] += 0;
        result[3] += 221847;
        result[4] += 52356006;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8741968;
        result[1] += 617639;
        result[2] += 0;
        result[3] += 44327483;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4382619;
        result[1] += 0;
        result[2] += 597629;
        result[3] += 10209511;
        result[4] += 38497329;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 53652410;
        result[1] += 0;
        result[2] += 32640;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2040;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 28541791;
        result[1] += 154812;
        result[2] += 328390;
        result[3] += 16475800;
        result[4] += 8172222;
        result[5] += 0;
        result[6] += 14073;
      } else {
        result[0] += 51773545;
        result[1] += 0;
        result[2] += 565978;
        result[3] += 1051102;
        result[4] += 134756;
        result[5] += 26951;
        result[6] += 134756;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 852176;
        result[3] += 0;
        result[4] += 52602503;
        result[5] += 232411;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 52789;
        result[2] += 299141;
        result[3] += 53335160;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 29433;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53657657;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10003721;
        result[1] += 284273;
        result[2] += 81221;
        result[3] += 43277264;
        result[4] += 0;
        result[5] += 40610;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
        result[0] += 53384959;
        result[1] += 26941;
        result[2] += 153952;
        result[3] += 119313;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1924;
      } else {
        result[0] += 194518;
        result[1] += 2334221;
        result[2] += 0;
        result[3] += 51158351;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 8709142;
        result[1] += 0;
        result[2] += 0;
        result[3] += 44977948;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2208405;
        result[3] += 0;
        result[4] += 51402534;
        result[5] += 76151;
        result[6] += 0;
      } else {
        result[0] += 53225095;
        result[1] += 0;
        result[2] += 270825;
        result[3] += 15930;
        result[4] += 0;
        result[5] += 31861;
        result[6] += 143377;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ec0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31317469;
        result[4] += 22369621;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 6787914;
        result[1] += 132724;
        result[2] += 85322;
        result[3] += 29995754;
        result[4] += 16647454;
        result[5] += 37921;
        result[6] += 0;
      } else {
        result[0] += 52901992;
        result[1] += 39920;
        result[2] += 119760;
        result[3] += 621615;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3801;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12955403;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40731687;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 52856466;
        result[1] += 0;
        result[2] += 702836;
        result[3] += 47920;
        result[4] += 0;
        result[5] += 0;
        result[6] += 79867;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 169359;
        result[3] += 0;
        result[4] += 53263691;
        result[5] += 254039;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 397498;
        result[2] += 397498;
        result[3] += 46035252;
        result[4] += 6856842;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 26219277;
        result[1] += 0;
        result[2] += 1623098;
        result[3] += 25844715;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1305997;
        result[4] += 52381093;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 7133249;
        result[1] += 31286;
        result[2] += 281575;
        result[3] += 44989532;
        result[4] += 1126302;
        result[5] += 125144;
        result[6] += 0;
      } else {
        result[0] += 53409409;
        result[1] += 29540;
        result[2] += 45295;
        result[3] += 200876;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1969;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 24158169;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29528921;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44187912;
        result[1] += 0;
        result[2] += 579218;
        result[3] += 38614;
        result[4] += 8778373;
        result[5] += 25743;
        result[6] += 77229;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 12559824;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40696292;
        result[4] += 307838;
        result[5] += 123135;
        result[6] += 0;
      } else {
        result[0] += 53426586;
        result[1] += 25085;
        result[2] += 46311;
        result[3] += 183318;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5788;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 7752149;
        result[1] += 175899;
        result[2] += 615648;
        result[3] += 32842980;
        result[4] += 12287848;
        result[5] += 12564;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 939938;
        result[2] += 0;
        result[3] += 5694923;
        result[4] += 47052229;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 24608316;
        result[1] += 0;
        result[2] += 322288;
        result[3] += 28756486;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47962780;
        result[1] += 0;
        result[2] += 289106;
        result[3] += 5146097;
        result[4] += 115642;
        result[5] += 43365;
        result[6] += 130097;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1451002;
        result[3] += 0;
        result[4] += 52236088;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45935c00))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 53611346;
        result[1] += 0;
        result[2] += 75744;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 33186145;
        result[1] += 76416;
        result[2] += 339630;
        result[3] += 17198039;
        result[4] += 2823178;
        result[5] += 4245;
        result[6] += 59435;
      } else {
        result[0] += 3921095;
        result[1] += 159579;
        result[2] += 1048665;
        result[3] += 48443765;
        result[4] += 68391;
        result[5] += 45594;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 22795709;
        result[4] += 30891381;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35935;
        result[1] += 610897;
        result[2] += 0;
        result[3] += 2767005;
        result[4] += 50273253;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 31159;
        result[2] += 0;
        result[3] += 50103797;
        result[4] += 3520975;
        result[5] += 31159;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41358944;
        result[1] += 5567550;
        result[2] += 6760596;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 22295672;
        result[1] += 1109237;
        result[2] += 0;
        result[3] += 30282181;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53528745;
        result[1] += 25413;
        result[2] += 105563;
        result[3] += 17593;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9774;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21973197;
        result[1] += 0;
        result[2] += 305320;
        result[3] += 31339630;
        result[4] += 0;
        result[5] += 0;
        result[6] += 68943;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 8738070;
        result[1] += 290462;
        result[2] += 0;
        result[3] += 33742022;
        result[4] += 10916536;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20320114;
        result[1] += 0;
        result[2] += 674837;
        result[3] += 20470078;
        result[4] += 12222061;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 589968;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53097123;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 751744;
        result[2] += 0;
        result[3] += 187936;
        result[4] += 52747410;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 52868030;
        result[1] += 7726;
        result[2] += 54088;
        result[3] += 736639;
        result[4] += 12878;
        result[5] += 7726;
        result[6] += 0;
      } else {
        result[0] += 39956771;
        result[1] += 43196;
        result[2] += 225238;
        result[3] += 12912671;
        result[4] += 490588;
        result[5] += 24683;
        result[6] += 33940;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 10494477;
        result[1] += 14124;
        result[2] += 0;
        result[3] += 43037244;
        result[4] += 127120;
        result[5] += 14124;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1241742;
        result[3] += 0;
        result[4] += 52299261;
        result[5] += 146087;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 1000053;
        result[2] += 0;
        result[3] += 8684676;
        result[4] += 44002361;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 2070576;
        result[2] += 0;
        result[3] += 51616514;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53657675;
        result[1] += 0;
        result[2] += 29415;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37827698;
        result[1] += 89181;
        result[2] += 336906;
        result[3] += 15403577;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29727;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 50901777;
        result[1] += 84403;
        result[2] += 155821;
        result[3] += 2525611;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19477;
      } else {
        result[0] += 53506795;
        result[1] += 8195;
        result[2] += 10927;
        result[3] += 142051;
        result[4] += 16390;
        result[5] += 2731;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 9350677;
        result[1] += 0;
        result[2] += 483395;
        result[3] += 42146028;
        result[4] += 1706989;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53411935;
        result[1] += 0;
        result[2] += 179909;
        result[3] += 42331;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52914;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 14568853;
        result[1] += 197879;
        result[2] += 766781;
        result[3] += 37349692;
        result[4] += 803884;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 105839;
        result[1] += 291058;
        result[2] += 0;
        result[3] += 7726284;
        result[4] += 45563908;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 20648881;
        result[5] += 33038209;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53572863;
        result[5] += 114227;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 358141;
        result[2] += 392250;
        result[3] += 52885536;
        result[4] += 0;
        result[5] += 51163;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 53529685;
        result[1] += 33035;
        result[2] += 102994;
        result[3] += 11659;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9716;
      } else {
        result[0] += 18228640;
        result[1] += 499414;
        result[2] += 0;
        result[3] += 34959036;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 23958233;
        result[1] += 0;
        result[2] += 101400;
        result[3] += 29627457;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52991327;
        result[1] += 0;
        result[2] += 582500;
        result[3] += 64722;
        result[4] += 0;
        result[5] += 0;
        result[6] += 48541;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53656398;
        result[1] += 0;
        result[2] += 28646;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2046;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53665160;
        result[5] += 21931;
        result[6] += 0;
      } else {
        result[0] += 942558;
        result[1] += 529382;
        result[2] += 890911;
        result[3] += 51285504;
        result[4] += 0;
        result[5] += 38735;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 53327619;
        result[1] += 8986;
        result[2] += 332511;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17973;
      } else {
        result[0] += 23118623;
        result[1] += 0;
        result[2] += 286973;
        result[3] += 30201141;
        result[4] += 0;
        result[5] += 11478;
        result[6] += 68873;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 437718;
        result[2] += 456749;
        result[3] += 52735529;
        result[4] += 0;
        result[5] += 57093;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53512418;
        result[1] += 0;
        result[2] += 44319;
        result[3] += 127745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2607;
      } else {
        result[0] += 13421772;
        result[1] += 2064888;
        result[2] += 0;
        result[3] += 38200430;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 28172780;
        result[1] += 181895;
        result[2] += 419758;
        result[3] += 24884673;
        result[4] += 0;
        result[5] += 6995;
        result[6] += 20987;
      } else {
        result[0] += 52908533;
        result[1] += 0;
        result[2] += 172394;
        result[3] += 567234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38927;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 460175;
        result[1] += 639132;
        result[2] += 409044;
        result[3] += 52178739;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53075747;
        result[1] += 0;
        result[2] += 611343;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 13421772;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40265318;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53660545;
        result[1] += 0;
        result[2] += 26545;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42614816;
        result[1] += 134431;
        result[2] += 336078;
        result[3] += 9679074;
        result[4] += 800479;
        result[5] += 36663;
        result[6] += 85547;
      } else {
        result[0] += 0;
        result[1] += 14331;
        result[2] += 429955;
        result[3] += 43497149;
        result[4] += 9716990;
        result[5] += 28663;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53652210;
        result[1] += 0;
        result[2] += 30776;
        result[3] += 0;
        result[4] += 2051;
        result[5] += 0;
        result[6] += 2051;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 26765833;
        result[1] += 73622;
        result[2] += 351751;
        result[3] += 25677857;
        result[4] += 768945;
        result[5] += 8180;
        result[6] += 40901;
      } else {
        result[0] += 52022483;
        result[1] += 0;
        result[2] += 405660;
        result[3] += 1189005;
        result[4] += 0;
        result[5] += 27976;
        result[6] += 41964;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 162330;
        result[1] += 132815;
        result[2] += 413204;
        result[3] += 43962024;
        result[4] += 8987201;
        result[5] += 29514;
        result[6] += 0;
      } else {
        result[0] += 52462955;
        result[1] += 0;
        result[2] += 655786;
        result[3] += 568348;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 45730;
        result[1] += 640220;
        result[2] += 0;
        result[3] += 13856208;
        result[4] += 39144931;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 29760;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53627571;
        result[5] += 29760;
        result[6] += 0;
      } else {
        result[0] += 19270;
        result[1] += 211973;
        result[2] += 231243;
        result[3] += 53128252;
        result[4] += 0;
        result[5] += 96351;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 51431331;
        result[1] += 0;
        result[2] += 2255760;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 49641107;
        result[1] += 0;
        result[2] += 155614;
        result[3] += 3890368;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23822725;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29864365;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 53446517;
        result[1] += 37161;
        result[2] += 103661;
        result[3] += 86058;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13691;
      } else {
        result[0] += 34779144;
        result[1] += 0;
        result[2] += 257047;
        result[3] += 18621009;
        result[4] += 0;
        result[5] += 5977;
        result[6] += 23911;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8095508;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45446650;
        result[4] += 62113;
        result[5] += 82818;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 985616;
        result[3] += 0;
        result[4] += 52643497;
        result[5] += 57977;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53130068;
        result[1] += 26615;
        result[2] += 125472;
        result[3] += 393527;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11406;
      } else {
        result[0] += 34551037;
        result[1] += 0;
        result[2] += 178956;
        result[3] += 18901558;
        result[4] += 0;
        result[5] += 0;
        result[6] += 55538;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 191739;
        result[1] += 3067833;
        result[2] += 0;
        result[3] += 4410011;
        result[4] += 46017506;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8217872;
        result[1] += 541837;
        result[2] += 0;
        result[3] += 44927380;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16223202;
        result[1] += 0;
        result[2] += 1839744;
        result[3] += 35624144;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 51800970;
        result[1] += 0;
        result[2] += 1684036;
        result[3] += 202084;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4274174;
        result[1] += 202156;
        result[2] += 57759;
        result[3] += 49095242;
        result[4] += 57759;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38028356;
        result[4] += 15658734;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 354689;
        result[2] += 0;
        result[3] += 3837095;
        result[4] += 49495306;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32212254;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53656601;
        result[1] += 0;
        result[2] += 30490;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 185768;
        result[2] += 0;
        result[3] += 10836494;
        result[4] += 42355213;
        result[5] += 309614;
        result[6] += 0;
      } else {
        result[0] += 32389884;
        result[1] += 50358;
        result[2] += 379980;
        result[3] += 20207625;
        result[4] += 631774;
        result[5] += 13734;
        result[6] += 13734;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 15652;
        result[2] += 0;
        result[3] += 50306213;
        result[4] += 3302616;
        result[5] += 62608;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 53175785;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 511305;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 235779;
        result[2] += 471559;
        result[3] += 0;
        result[4] += 52979751;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53375711;
        result[1] += 0;
        result[2] += 285431;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25948;
      } else {
        result[0] += 53675623;
        result[1] += 0;
        result[2] += 11468;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 35982546;
        result[1] += 203250;
        result[2] += 609750;
        result[3] += 16840731;
        result[4] += 0;
        result[5] += 7258;
        result[6] += 43553;
      } else {
        result[0] += 39935751;
        result[1] += 0;
        result[2] += 12924;
        result[3] += 13699642;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38772;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 73847;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53465548;
        result[5] += 147694;
        result[6] += 0;
      } else {
        result[0] += 6210859;
        result[1] += 17544;
        result[2] += 403530;
        result[3] += 46967432;
        result[4] += 0;
        result[5] += 87724;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16964322;
        result[4] += 36722768;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 425474;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53261617;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53649933;
        result[1] += 0;
        result[2] += 31849;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5308;
      } else {
        result[0] += 37217346;
        result[1] += 213892;
        result[2] += 0;
        result[3] += 16255852;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 44065214;
        result[1] += 29809;
        result[2] += 205355;
        result[3] += 9356902;
        result[4] += 0;
        result[5] += 3312;
        result[6] += 26497;
      } else {
        result[0] += 8939706;
        result[1] += 683911;
        result[2] += 586210;
        result[3] += 43477262;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40600000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53611261;
        result[5] += 75829;
        result[6] += 0;
      } else {
        result[0] += 52818657;
        result[1] += 2554;
        result[2] += 58746;
        result[3] += 802024;
        result[4] += 5108;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 18720519;
        result[1] += 110467;
        result[2] += 493420;
        result[3] += 32072329;
        result[4] += 2253532;
        result[5] += 14728;
        result[6] += 22093;
      } else {
        result[0] += 50531513;
        result[1] += 0;
        result[2] += 108003;
        result[3] += 3014704;
        result[4] += 0;
        result[5] += 4695;
        result[6] += 28174;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 9006715;
        result[1] += 1059613;
        result[2] += 0;
        result[3] += 37881187;
        result[4] += 5739573;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7624202;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11224520;
        result[4] += 34838368;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5839881;
        result[1] += 663622;
        result[2] += 0;
        result[3] += 34110216;
        result[4] += 13073370;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 667512;
        result[1] += 0;
        result[2] += 476794;
        result[3] += 6722806;
        result[4] += 45819977;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53514421;
        result[1] += 0;
        result[2] += 39243;
        result[3] += 122961;
        result[4] += 7848;
        result[5] += 0;
        result[6] += 2616;
      } else {
        result[0] += 738329;
        result[1] += 158213;
        result[2] += 1054756;
        result[3] += 14080995;
        result[4] += 37654796;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 18679485;
        result[1] += 87628;
        result[2] += 452747;
        result[3] += 32254608;
        result[4] += 2124992;
        result[5] += 58419;
        result[6] += 29209;
      } else {
        result[0] += 50406187;
        result[1] += 0;
        result[2] += 120655;
        result[3] += 3123123;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37124;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 17950091;
        result[1] += 0;
        result[2] += 2447739;
        result[3] += 33289260;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8085707;
        result[1] += 703105;
        result[2] += 0;
        result[3] += 44898278;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 34019542;
        result[4] += 19667548;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34839;
        result[1] += 418069;
        result[2] += 0;
        result[3] += 2961325;
        result[4] += 50272856;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
        result[0] += 48612436;
        result[1] += 167188;
        result[2] += 78676;
        result[3] += 4809120;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19669;
      } else {
        result[0] += 53006235;
        result[1] += 11423;
        result[2] += 27417;
        result[3] += 628306;
        result[4] += 4569;
        result[5] += 9139;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 1000824;
        result[2] += 0;
        result[3] += 5718997;
        result[4] += 46967268;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7061832;
        result[1] += 73560;
        result[2] += 772387;
        result[3] += 32403512;
        result[4] += 13363537;
        result[5] += 12260;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41180000))) ) ) {
        result[0] += 19333554;
        result[1] += 0;
        result[2] += 392142;
        result[3] += 27951577;
        result[4] += 5945979;
        result[5] += 18239;
        result[6] += 45598;
      } else {
        result[0] += 47113161;
        result[1] += 0;
        result[2] += 2191309;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4382619;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 230416;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53379868;
        result[5] += 76805;
        result[6] += 0;
      } else {
        result[0] += 6816245;
        result[1] += 36646;
        result[2] += 311495;
        result[3] += 46412765;
        result[4] += 0;
        result[5] += 109939;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38733152;
        result[4] += 14953938;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 375653;
        result[2] += 0;
        result[3] += 31304;
        result[4] += 53280133;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 51391261;
        result[1] += 1942625;
        result[2] += 0;
        result[3] += 353204;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4755142;
        result[1] += 0;
        result[2] += 0;
        result[3] += 48931948;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53660295;
        result[1] += 0;
        result[2] += 26796;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37344754;
        result[1] += 64106;
        result[2] += 468473;
        result[3] += 15750580;
        result[4] += 0;
        result[5] += 9862;
        result[6] += 49313;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        result[0] += 53652126;
        result[1] += 0;
        result[2] += 30851;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4113;
      } else {
        result[0] += 35791394;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 17895697;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 10939266;
        result[1] += 197208;
        result[2] += 324813;
        result[3] += 22748570;
        result[4] += 19477231;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42470942;
        result[1] += 65661;
        result[2] += 274583;
        result[3] += 9962614;
        result[4] += 895381;
        result[5] += 0;
        result[6] += 17907;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53617094;
        result[4] += 17499;
        result[5] += 52497;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1608315;
        result[3] += 0;
        result[4] += 52002189;
        result[5] += 76586;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 32212254;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53662631;
        result[1] += 0;
        result[2] += 18344;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6114;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 759034;
        result[1] += 223817;
        result[2] += 603335;
        result[3] += 36696396;
        result[4] += 15365582;
        result[5] += 38924;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 707124;
        result[2] += 0;
        result[3] += 5656998;
        result[4] += 47322967;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 52646566;
        result[1] += 0;
        result[2] += 266801;
        result[3] += 687013;
        result[4] += 0;
        result[5] += 6670;
        result[6] += 80040;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41281;
        result[3] += 53645809;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53458094;
        result[1] += 0;
        result[2] += 178108;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50888;
      } else {
        result[0] += 53671500;
        result[1] += 0;
        result[2] += 15590;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 907249;
        result[1] += 196162;
        result[2] += 809168;
        result[3] += 43216943;
        result[4] += 8459486;
        result[5] += 98081;
        result[6] += 0;
      } else {
        result[0] += 39843692;
        result[1] += 0;
        result[2] += 235909;
        result[3] += 13537218;
        result[4] += 0;
        result[5] += 5019;
        result[6] += 65251;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 161952;
        result[1] += 647808;
        result[2] += 0;
        result[3] += 29232337;
        result[4] += 23644993;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1113406;
        result[4] += 52573684;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 104449;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53478192;
        result[5] += 104449;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 3864366;
        result[1] += 354890;
        result[2] += 335174;
        result[3] += 49073510;
        result[4] += 0;
        result[5] += 59148;
        result[6] += 0;
      } else {
        result[0] += 24362585;
        result[1] += 0;
        result[2] += 44701;
        result[3] += 29235102;
        result[4] += 0;
        result[5] += 44701;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 53629520;
        result[1] += 0;
        result[2] += 57570;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 50717940;
        result[1] += 181784;
        result[2] += 484759;
        result[3] += 2285293;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17312;
      } else {
        result[0] += 22405622;
        result[1] += 0;
        result[2] += 441828;
        result[3] += 30780729;
        result[4] += 0;
        result[5] += 19636;
        result[6] += 39273;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 4413192;
        result[1] += 0;
        result[2] += 0;
        result[3] += 49111946;
        result[4] += 121464;
        result[5] += 40488;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1585390;
        result[3] += 0;
        result[4] += 52101700;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40463669;
        result[4] += 13223421;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 376311;
        result[2] += 0;
        result[3] += 125437;
        result[4] += 53185342;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 53629762;
        result[1] += 0;
        result[2] += 57329;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53681739;
        result[1] += 0;
        result[2] += 5351;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 45849559;
        result[1] += 119266;
        result[2] += 437311;
        result[3] += 7224159;
        result[4] += 0;
        result[5] += 22717;
        result[6] += 34076;
      } else {
        result[0] += 0;
        result[1] += 57873;
        result[2] += 443694;
        result[3] += 53185522;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53166979;
        result[1] += 0;
        result[2] += 520111;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53678150;
        result[1] += 0;
        result[2] += 8940;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 193119;
        result[2] += 64373;
        result[3] += 12681483;
        result[4] += 40683742;
        result[5] += 64373;
        result[6] += 0;
      } else {
        result[0] += 29923040;
        result[1] += 85335;
        result[2] += 363602;
        result[3] += 23085078;
        result[4] += 178091;
        result[5] += 14840;
        result[6] += 37102;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40997415;
        result[4] += 12689676;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30026;
        result[1] += 240210;
        result[2] += 0;
        result[3] += 4203687;
        result[4] += 49213166;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41280000))) ) ) {
        result[0] += 48425774;
        result[1] += 0;
        result[2] += 126343;
        result[3] += 5125948;
        result[4] += 0;
        result[5] += 9024;
        result[6] += 0;
      } else {
        result[0] += 46947980;
        result[1] += 0;
        result[2] += 156319;
        result[3] += 6513315;
        result[4] += 26053;
        result[5] += 0;
        result[6] += 43422;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 52838305;
        result[1] += 54117;
        result[2] += 74055;
        result[3] += 703523;
        result[4] += 0;
        result[5] += 5696;
        result[6] += 11393;
      } else {
        result[0] += 37274532;
        result[1] += 0;
        result[2] += 56922;
        result[3] += 15520777;
        result[4] += 834858;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53652632;
        result[5] += 34458;
        result[6] += 0;
      } else {
        result[0] += 13868651;
        result[1] += 123276;
        result[2] += 604056;
        result[3] += 39041795;
        result[4] += 0;
        result[5] += 49310;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 958698;
        result[1] += 6710886;
        result[2] += 0;
        result[3] += 46017506;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 53403781;
        result[1] += 0;
        result[2] += 283309;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53668283;
        result[1] += 0;
        result[2] += 16717;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2089;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 16337129;
        result[1] += 306147;
        result[2] += 389641;
        result[3] += 33731858;
        result[4] += 2922314;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37591204;
        result[1] += 204805;
        result[2] += 27928;
        result[3] += 15788678;
        result[4] += 27928;
        result[5] += 9309;
        result[6] += 37237;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 16668474;
        result[1] += 201947;
        result[2] += 543706;
        result[3] += 9429416;
        result[4] += 26828011;
        result[5] += 15534;
        result[6] += 0;
      } else {
        result[0] += 20894481;
        result[1] += 0;
        result[2] += 445109;
        result[3] += 26757947;
        result[4] += 5512513;
        result[5] += 34239;
        result[6] += 42799;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53486297;
        result[1] += 0;
        result[2] += 200793;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53671563;
        result[1] += 0;
        result[2] += 15527;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 49213166;
        result[1] += 93484;
        result[2] += 207002;
        result[3] += 4106661;
        result[4] += 0;
        result[5] += 20032;
        result[6] += 46742;
      } else {
        result[0] += 5861422;
        result[1] += 354045;
        result[2] += 629414;
        result[3] += 29966031;
        result[4] += 16846672;
        result[5] += 29503;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1049747;
        result[3] += 0;
        result[4] += 52262433;
        result[5] += 374909;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 54820;
        result[2] += 292373;
        result[3] += 53339897;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 12759712;
        result[1] += 515891;
        result[2] += 0;
        result[3] += 40342702;
        result[4] += 68785;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28160398;
        result[1] += 0;
        result[2] += 1485680;
        result[3] += 23061813;
        result[4] += 979198;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41975;
        result[1] += 377782;
        result[2] += 0;
        result[3] += 12592750;
        result[4] += 40674582;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 4948119;
        result[1] += 0;
        result[2] += 680366;
        result[3] += 37853110;
        result[4] += 10205495;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47850265;
        result[1] += 0;
        result[2] += 102400;
        result[3] += 5685662;
        result[4] += 0;
        result[5] += 4876;
        result[6] += 43885;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 48048098;
        result[1] += 24777;
        result[2] += 90851;
        result[3] += 5434576;
        result[4] += 74333;
        result[5] += 4129;
        result[6] += 10324;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 310330;
        result[3] += 0;
        result[4] += 53376761;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53459120;
        result[5] += 227970;
        result[6] += 0;
      } else {
        result[0] += 7325528;
        result[1] += 0;
        result[2] += 421468;
        result[3] += 45920024;
        result[4] += 0;
        result[5] += 20069;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53662191;
        result[1] += 0;
        result[2] += 24899;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38295906;
        result[1] += 73806;
        result[2] += 250943;
        result[3] += 15027071;
        result[4] += 0;
        result[5] += 4920;
        result[6] += 34443;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 433737;
        result[2] += 0;
        result[3] += 53253353;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52113843;
        result[1] += 0;
        result[2] += 1573248;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 108240;
        result[1] += 1948321;
        result[2] += 0;
        result[3] += 10174569;
        result[4] += 41455959;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 176747;
        result[2] += 0;
        result[3] += 3225644;
        result[4] += 50284699;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53644108;
        result[1] += 0;
        result[2] += 40935;
        result[3] += 0;
        result[4] += 2046;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 131424;
        result[3] += 12222520;
        result[4] += 41333146;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 31113104;
        result[1] += 88446;
        result[2] += 329664;
        result[3] += 20833196;
        result[4] += 1258354;
        result[5] += 28142;
        result[6] += 36182;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12271335;
        result[4] += 41415756;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7295458;
        result[1] += 1010140;
        result[2] += 0;
        result[3] += 36327641;
        result[4] += 9053850;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 9761289;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11092374;
        result[4] += 32833427;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 892436;
        result[1] += 0;
        result[2] += 516673;
        result[3] += 6340995;
        result[4] += 45936986;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53414290;
        result[5] += 272800;
        result[6] += 0;
      } else {
        result[0] += 7591500;
        result[1] += 40488;
        result[2] += 425124;
        result[3] += 45528758;
        result[4] += 0;
        result[5] += 101220;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53181930;
        result[1] += 26487;
        result[2] += 117303;
        result[3] += 355694;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5675;
      } else {
        result[0] += 35128982;
        result[1] += 0;
        result[2] += 184120;
        result[3] += 18335893;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38093;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 13442264;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40080897;
        result[4] += 163930;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 109565;
        result[1] += 1424351;
        result[2] += 0;
        result[3] += 7669584;
        result[4] += 44483589;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
        result[0] += 0;
        result[1] += 188045;
        result[2] += 0;
        result[3] += 2350573;
        result[4] += 51148472;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3875587;
        result[1] += 122386;
        result[2] += 611934;
        result[3] += 25986836;
        result[4] += 23090344;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 176602;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53333886;
        result[5] += 176602;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 50759;
        result[1] += 355319;
        result[2] += 135359;
        result[3] += 53027212;
        result[4] += 0;
        result[5] += 118439;
        result[6] += 0;
      } else {
        result[0] += 52751525;
        result[1] += 0;
        result[2] += 935565;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 20452225;
        result[1] += 1162058;
        result[2] += 0;
        result[3] += 32072807;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53540271;
        result[1] += 33279;
        result[2] += 92007;
        result[3] += 11745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9787;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 24055088;
        result[1] += 0;
        result[2] += 102243;
        result[3] += 29529759;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53174454;
        result[1] += 0;
        result[2] += 419430;
        result[3] += 62137;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31068;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 362400;
        result[1] += 543601;
        result[2] += 569486;
        result[3] += 52211602;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53084542;
        result[1] += 0;
        result[2] += 602548;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 53656312;
        result[1] += 0;
        result[2] += 28727;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2051;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 34832899;
        result[1] += 53701;
        result[2] += 263626;
        result[3] += 17091798;
        result[4] += 1406009;
        result[5] += 4881;
        result[6] += 34173;
      } else {
        result[0] += 497102;
        result[1] += 0;
        result[2] += 590309;
        result[3] += 34766119;
        result[4] += 17709283;
        result[5] += 124275;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 47287;
        result[1] += 15762;
        result[2] += 0;
        result[3] += 50093240;
        result[4] += 3530801;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53663102;
        result[5] += 23988;
        result[6] += 0;
      } else {
        result[0] += 35210364;
        result[1] += 5926497;
        result[2] += 11155759;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1394469;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 53396586;
        result[1] += 99725;
        result[2] += 156092;
        result[3] += 4335;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30351;
      } else {
        result[0] += 52769778;
        result[1] += 0;
        result[2] += 55594;
        result[3] += 861717;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 24041788;
        result[1] += 0;
        result[2] += 84193;
        result[3] += 29561109;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53130748;
        result[1] += 0;
        result[2] += 417257;
        result[3] += 77269;
        result[4] += 0;
        result[5] += 15453;
        result[6] += 46361;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53632187;
        result[1] += 0;
        result[2] += 54904;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 48828923;
        result[1] += 60142;
        result[2] += 220522;
        result[3] += 4477265;
        result[4] += 0;
        result[5] += 13364;
        result[6] += 86872;
      } else {
        result[0] += 5802133;
        result[1] += 238036;
        result[2] += 555417;
        result[3] += 29486739;
        result[4] += 17604763;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 35684;
        result[2] += 285474;
        result[3] += 53365932;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1014436;
        result[3] += 0;
        result[4] += 52360520;
        result[5] += 312134;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 10719796;
        result[1] += 763601;
        result[2] += 0;
        result[3] += 42203692;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28226750;
        result[1] += 0;
        result[2] += 1594201;
        result[3] += 23866139;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 50468854;
        result[1] += 0;
        result[2] += 45974;
        result[3] += 766246;
        result[4] += 2406015;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52676887;
        result[1] += 0;
        result[2] += 104503;
        result[3] += 842997;
        result[4] += 62702;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23253922;
        result[1] += 95723;
        result[2] += 417080;
        result[3] += 28901596;
        result[4] += 991419;
        result[5] += 13674;
        result[6] += 13674;
      } else {
        result[0] += 52871649;
        result[1] += 0;
        result[2] += 97623;
        result[3] += 689105;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28712;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52885791;
        result[1] += 0;
        result[2] += 801299;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53651899;
        result[1] += 0;
        result[2] += 35191;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1201741;
        result[1] += 489080;
        result[2] += 251527;
        result[3] += 48097597;
        result[4] += 3591249;
        result[5] += 55894;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 772183;
        result[3] += 9530373;
        result[4] += 43343893;
        result[5] += 40641;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 29315855;
        result[1] += 0;
        result[2] += 55557;
        result[3] += 24306418;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9259;
      } else {
        result[0] += 52066471;
        result[1] += 0;
        result[2] += 402435;
        result[3] += 1152923;
        result[4] += 0;
        result[5] += 10876;
        result[6] += 54383;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8646077;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45012941;
        result[4] += 0;
        result[5] += 28071;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 43775628;
        result[1] += 0;
        result[2] += 6194664;
        result[3] += 0;
        result[4] += 3716798;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 280106;
        result[2] += 350133;
        result[3] += 0;
        result[4] += 53033509;
        result[5] += 23342;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 26843545;
        result[1] += 1090519;
        result[2] += 0;
        result[3] += 25753026;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17747798;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35939292;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 50157993;
        result[1] += 38126;
        result[2] += 204930;
        result[3] += 3264594;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21446;
      } else {
        result[0] += 46750127;
        result[1] += 0;
        result[2] += 78295;
        result[3] += 6858668;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 27575521;
        result[1] += 0;
        result[2] += 878370;
        result[3] += 25233199;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7433597;
        result[1] += 1088759;
        result[2] += 225260;
        result[3] += 44939474;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        result[0] += 10737418;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53654475;
        result[1] += 0;
        result[2] += 28538;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4076;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 29272297;
        result[1] += 70706;
        result[2] += 487871;
        result[3] += 20483537;
        result[4] += 3294901;
        result[5] += 14141;
        result[6] += 63635;
      } else {
        result[0] += 33298172;
        result[1] += 0;
        result[2] += 49698;
        result[3] += 17580938;
        result[4] += 2708582;
        result[5] += 0;
        result[6] += 49698;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 383661;
        result[2] += 383661;
        result[3] += 46320782;
        result[4] += 6598985;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53557724;
        result[1] += 129366;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1736068;
        result[1] += 0;
        result[2] += 327560;
        result[3] += 6518444;
        result[4] += 45105018;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 6442450;
        result[1] += 29020;
        result[2] += 290200;
        result[3] += 43036733;
        result[4] += 3830646;
        result[5] += 58040;
        result[6] += 0;
      } else {
        result[0] += 53375692;
        result[1] += 25301;
        result[2] += 70064;
        result[3] += 206301;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9731;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 27930294;
        result[1] += 0;
        result[2] += 513424;
        result[3] += 21888998;
        result[4] += 3234574;
        result[5] += 34228;
        result[6] += 85570;
      } else {
        result[0] += 34057989;
        result[1] += 0;
        result[2] += 76976;
        result[3] += 14899301;
        result[4] += 4644271;
        result[5] += 8552;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 24285475;
        result[1] += 0;
        result[2] += 1036180;
        result[3] += 28365435;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6475236;
        result[1] += 696702;
        result[2] += 0;
        result[3] += 46515151;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53528346;
        result[1] += 0;
        result[2] += 15614;
        result[3] += 127516;
        result[4] += 15614;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 542293;
        result[1] += 108458;
        result[2] += 704982;
        result[3] += 15346915;
        result[4] += 36875981;
        result[5] += 108458;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 43164406;
        result[1] += 42029;
        result[2] += 217789;
        result[3] += 9613317;
        result[4] += 557847;
        result[5] += 42029;
        result[6] += 49671;
      } else {
        result[0] += 25429852;
        result[1] += 0;
        result[2] += 149685;
        result[3] += 28107553;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 29319009;
        result[1] += 0;
        result[2] += 773117;
        result[3] += 21067462;
        result[4] += 2527500;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5779588;
        result[1] += 392125;
        result[2] += 119342;
        result[3] += 19981349;
        result[4] += 27414684;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 42594893;
        result[1] += 0;
        result[2] += 341955;
        result[3] += 10707497;
        result[4] += 0;
        result[5] += 21372;
        result[6] += 21372;
      } else {
        result[0] += 52857302;
        result[1] += 25998;
        result[2] += 30331;
        result[3] += 753959;
        result[4] += 12999;
        result[5] += 0;
        result[6] += 6499;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21862007;
        result[1] += 0;
        result[2] += 486498;
        result[3] += 31196689;
        result[4] += 111489;
        result[5] += 0;
        result[6] += 30406;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 19324631;
        result[1] += 226814;
        result[2] += 181451;
        result[3] += 23815566;
        result[4] += 10138626;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18276198;
        result[1] += 121436;
        result[2] += 740762;
        result[3] += 18336916;
        result[4] += 16211777;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 53143368;
        result[1] += 24255;
        result[2] += 48510;
        result[3] += 456808;
        result[4] += 6063;
        result[5] += 0;
        result[6] += 8085;
      } else {
        result[0] += 0;
        result[1] += 264034;
        result[2] += 0;
        result[3] += 53071009;
        result[4] += 88011;
        result[5] += 264034;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 22164117;
        result[1] += 0;
        result[2] += 565978;
        result[3] += 30734646;
        result[4] += 141494;
        result[5] += 40427;
        result[6] += 40427;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 49074999;
        result[1] += 31023;
        result[2] += 112027;
        result[3] += 3991630;
        result[4] += 468792;
        result[5] += 6894;
        result[6] += 1723;
      } else {
        result[0] += 35004929;
        result[1] += 0;
        result[2] += 292589;
        result[3] += 18258840;
        result[4] += 80929;
        result[5] += 12450;
        result[6] += 37351;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42e50000))) ) ) {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 73847;
        result[3] += 0;
        result[4] += 53613243;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 7956346;
        result[1] += 1240898;
        result[2] += 255479;
        result[3] += 44234367;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
