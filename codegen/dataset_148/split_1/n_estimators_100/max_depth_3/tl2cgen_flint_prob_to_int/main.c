
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 406463;
        result[1] += 2032318;
        result[2] += 0;
        result[3] += 3251710;
        result[4] += 37259180;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13793552;
        result[1] += 155177;
        result[2] += 362080;
        result[3] += 28587136;
        result[4] += 51725;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12781269;
        result[1] += 0;
        result[2] += 690879;
        result[3] += 29477523;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42921834;
        result[1] += 0;
        result[2] += 24563;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3275;
      } else {
        result[0] += 25120432;
        result[1] += 42721;
        result[2] += 409417;
        result[3] += 16832398;
        result[4] += 484180;
        result[5] += 21360;
        result[6] += 39161;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42e50000))) ) ) {
        result[0] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42834951;
        result[1] += 0;
        result[2] += 14600;
        result[3] += 100120;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 529697;
        result[1] += 0;
        result[2] += 706263;
        result[3] += 12315476;
        result[4] += 29309951;
        result[5] += 88282;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 15363184;
        result[1] += 62683;
        result[2] += 450182;
        result[3] += 25540723;
        result[4] += 1458818;
        result[5] += 39889;
        result[6] += 34191;
      } else {
        result[0] += 40385286;
        result[1] += 0;
        result[2] += 106217;
        result[3] += 2450581;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7586;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 5766391;
        result[1] += 568117;
        result[2] += 255652;
        result[3] += 36359511;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 41937902;
        result[1] += 0;
        result[2] += 1011770;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2583737;
        result[1] += 357748;
        result[2] += 59624;
        result[3] += 39948562;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 40199261;
        result[1] += 12183;
        result[2] += 36550;
        result[3] += 569575;
        result[4] += 2129056;
        result[5] += 3045;
        result[6] += 0;
      } else {
        result[0] += 42283193;
        result[1] += 0;
        result[2] += 76481;
        result[3] += 568146;
        result[4] += 16388;
        result[5] += 0;
        result[6] += 5462;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 29834362;
        result[1] += 54002;
        result[2] += 126004;
        result[3] += 12910102;
        result[4] += 0;
        result[5] += 14400;
        result[6] += 10800;
      } else {
        result[0] += 35406663;
        result[1] += 0;
        result[2] += 532043;
        result[3] += 5783832;
        result[4] += 1175645;
        result[5] += 34325;
        result[6] += 17162;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 81215;
        result[1] += 216575;
        result[2] += 108287;
        result[3] += 42435305;
        result[4] += 0;
        result[5] += 108287;
        result[6] += 0;
      } else {
        result[0] += 42054888;
        result[1] += 0;
        result[2] += 894784;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 42743184;
        result[1] += 0;
        result[2] += 0;
        result[3] += 206488;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13114403;
        result[1] += 81965;
        result[2] += 0;
        result[3] += 29753303;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42761869;
        result[1] += 21729;
        result[2] += 105542;
        result[3] += 48115;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12416;
      } else {
        result[0] += 27881491;
        result[1] += 0;
        result[2] += 165584;
        result[3] += 14873375;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29220;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 19284651;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5124207;
        result[4] += 18485715;
        result[5] += 55099;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 318820;
        result[3] += 41461844;
        result[4] += 1123462;
        result[5] += 45545;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 2904808;
        result[2] += 0;
        result[3] += 40044864;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 22493137;
        result[1] += 316804;
        result[2] += 678867;
        result[3] += 19460863;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38193724;
        result[1] += 16605;
        result[2] += 78048;
        result[3] += 4656313;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4981;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 42419583;
        result[1] += 0;
        result[2] += 128381;
        result[3] += 389284;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12423;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 20319979;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4949386;
        result[4] += 17597817;
        result[5] += 82489;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 243787;
        result[3] += 40898987;
        result[4] += 1749535;
        result[5] += 57361;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31437389;
        result[4] += 11512283;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 363269;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42586403;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 26681888;
        result[1] += 68066;
        result[2] += 68066;
        result[3] += 16131652;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42740331;
        result[1] += 18887;
        result[2] += 107031;
        result[3] += 67681;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15739;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19304389;
        result[1] += 0;
        result[2] += 133338;
        result[3] += 23511945;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42396831;
        result[1] += 0;
        result[2] += 380846;
        result[3] += 61426;
        result[4] += 0;
        result[5] += 0;
        result[6] += 110568;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 748452;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42201220;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10037;
        result[1] += 0;
        result[2] += 90335;
        result[3] += 31918663;
        result[4] += 10840300;
        result[5] += 90335;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42163665;
        result[1] += 0;
        result[2] += 786007;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 42809161;
        result[1] += 29663;
        result[2] += 93674;
        result[3] += 6244;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10928;
      } else {
        result[0] += 15297143;
        result[1] += 1176703;
        result[2] += 0;
        result[3] += 26475825;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 8021107;
        result[1] += 0;
        result[2] += 138478;
        result[3] += 34790087;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42722426;
        result[1] += 0;
        result[2] += 193580;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33666;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 42827685;
        result[1] += 0;
        result[2] += 101656;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20331;
      } else {
        result[0] += 42937894;
        result[1] += 0;
        result[2] += 11778;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26048911;
        result[1] += 36901;
        result[2] += 325401;
        result[3] += 14143233;
        result[4] += 2344905;
        result[5] += 13418;
        result[6] += 36901;
      } else {
        result[0] += 3207503;
        result[1] += 137219;
        result[2] += 600334;
        result[3] += 37735335;
        result[4] += 1217822;
        result[5] += 51457;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 270123;
        result[1] += 1620742;
        result[2] += 0;
        result[3] += 41058806;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
        result[0] += 42576197;
        result[1] += 0;
        result[2] += 373475;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3046202;
        result[1] += 320652;
        result[2] += 178140;
        result[3] += 34505813;
        result[4] += 4898863;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 20894435;
        result[1] += 0;
        result[2] += 1607264;
        result[3] += 20447973;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1335364;
        result[4] += 41614308;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42921932;
        result[1] += 0;
        result[2] += 26108;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1631;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 15949679;
        result[1] += 58835;
        result[2] += 358359;
        result[3] += 22838742;
        result[4] += 3711964;
        result[5] += 16045;
        result[6] += 16045;
      } else {
        result[0] += 41341693;
        result[1] += 0;
        result[2] += 144163;
        result[3] += 1341830;
        result[4] += 0;
        result[5] += 0;
        result[6] += 121984;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42895286;
        result[1] += 0;
        result[2] += 54386;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 7221354;
        result[1] += 143199;
        result[2] += 225028;
        result[3] += 19782011;
        result[4] += 15578078;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33738658;
        result[1] += 50308;
        result[2] += 343011;
        result[3] += 7610292;
        result[4] += 1143373;
        result[5] += 27440;
        result[6] += 36587;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9515795;
        result[4] += 33331003;
        result[5] += 102873;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 441837;
        result[3] += 42385948;
        result[4] += 121886;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4848938;
        result[1] += 27089;
        result[2] += 338613;
        result[3] += 37653765;
        result[4] += 0;
        result[5] += 81267;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ea0000))) ) ) {
        result[0] += 0;
        result[1] += 1085370;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41864302;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
        result[0] += 0;
        result[1] += 465398;
        result[2] += 0;
        result[3] += 42484274;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42622989;
        result[1] += 27478;
        result[2] += 117544;
        result[3] += 169447;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12212;
      } else {
        result[0] += 27781993;
        result[1] += 0;
        result[2] += 196791;
        result[3] += 14936449;
        result[4] += 0;
        result[5] += 0;
        result[6] += 34438;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 38473;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40346273;
        result[4] += 2539275;
        result[5] += 25649;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 134892;
        result[2] += 269784;
        result[3] += 0;
        result[4] += 42437082;
        result[5] += 107913;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42111902;
        result[1] += 0;
        result[2] += 837769;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42918643;
        result[1] += 2216;
        result[2] += 26596;
        result[3] += 2216;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37950936;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4998736;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 41366457;
        result[1] += 79160;
        result[2] += 277062;
        result[3] += 1222044;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4947;
      } else {
        result[0] += 26919233;
        result[1] += 0;
        result[2] += 256569;
        result[3] += 15743082;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30788;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 384241;
        result[1] += 149427;
        result[2] += 469628;
        result[3] += 41412706;
        result[4] += 533668;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42627818;
        result[1] += 0;
        result[2] += 321854;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 18889237;
        result[4] += 24060435;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 31373;
        result[1] += 156865;
        result[2] += 0;
        result[3] += 2196111;
        result[4] += 40565322;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 42726267;
        result[1] += 0;
        result[2] += 22754;
        result[3] += 190308;
        result[4] += 4137;
        result[5] += 0;
        result[6] += 6205;
      } else {
        result[0] += 49141;
        result[1] += 98283;
        result[2] += 442273;
        result[3] += 11056838;
        result[4] += 31303136;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 30122055;
        result[1] += 0;
        result[2] += 259143;
        result[3] += 12452540;
        result[4] += 68195;
        result[5] += 13639;
        result[6] += 34097;
      } else {
        result[0] += 32672355;
        result[1] += 41357;
        result[2] += 194379;
        result[3] += 9863742;
        result[4] += 161293;
        result[5] += 4135;
        result[6] += 12407;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 13985;
        result[1] += 27971;
        result[2] += 83913;
        result[3] += 41704957;
        result[4] += 1020946;
        result[5] += 97898;
        result[6] += 0;
      } else {
        result[0] += 22896515;
        result[1] += 0;
        result[2] += 389091;
        result[3] += 0;
        result[4] += 19664066;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 471974;
        result[2] += 0;
        result[3] += 6371654;
        result[4] += 36106043;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3168675;
        result[4] += 39780997;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42913325;
        result[1] += 0;
        result[2] += 36347;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 40599928;
        result[1] += 161808;
        result[2] += 316582;
        result[3] += 1843212;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28140;
      } else {
        result[0] += 17433980;
        result[1] += 0;
        result[2] += 345784;
        result[3] += 25121658;
        result[4] += 0;
        result[5] += 0;
        result[6] += 48249;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 36979940;
        result[1] += 27573;
        result[2] += 96508;
        result[3] += 5804289;
        result[4] += 6893;
        result[5] += 6893;
        result[6] += 27573;
      } else {
        result[0] += 42710012;
        result[1] += 0;
        result[2] += 20181;
        result[3] += 206864;
        result[4] += 10090;
        result[5] += 2522;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 16734972;
        result[1] += 17111;
        result[2] += 906905;
        result[3] += 24298221;
        result[4] += 992462;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20869;
        result[1] += 187826;
        result[2] += 0;
        result[3] += 6073058;
        result[4] += 36667918;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 577412;
        result[1] += 0;
        result[2] += 294849;
        result[3] += 33944492;
        result[4] += 8132918;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37635062;
        result[1] += 0;
        result[2] += 207737;
        result[3] += 4829890;
        result[4] += 138491;
        result[5] += 34622;
        result[6] += 103868;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7084831;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35842242;
        result[4] += 0;
        result[5] += 22599;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 41451428;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1498244;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 154634;
        result[2] += 579878;
        result[3] += 0;
        result[4] += 42157172;
        result[5] += 57987;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 42146875;
        result[1] += 802797;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4930205;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38019467;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42769644;
        result[1] += 6429;
        result[2] += 19288;
        result[3] += 150023;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4286;
      } else {
        result[0] += 34661600;
        result[1] += 31553;
        result[2] += 205098;
        result[3] += 8025125;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26294;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 6329539;
        result[1] += 10856;
        result[2] += 0;
        result[3] += 33949349;
        result[4] += 2649069;
        result[5] += 10856;
        result[6] += 0;
      } else {
        result[0] += 2854963;
        result[1] += 275478;
        result[2] += 300522;
        result[3] += 0;
        result[4] += 39468620;
        result[5] += 50087;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 26034323;
        result[1] += 139220;
        result[2] += 139220;
        result[3] += 16636907;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42653522;
        result[1] += 26497;
        result[2] += 118460;
        result[3] += 144958;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6234;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 13827;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42714597;
        result[4] += 179763;
        result[5] += 41483;
        result[6] += 0;
      } else {
        result[0] += 20720804;
        result[1] += 0;
        result[2] += 1085806;
        result[3] += 0;
        result[4] += 21143062;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42414395;
        result[1] += 0;
        result[2] += 382341;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 152936;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42777184;
        result[1] += 0;
        result[2] += 150927;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21561;
      } else {
        result[0] += 42933680;
        result[1] += 0;
        result[2] += 15992;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 30443095;
        result[1] += 75363;
        result[2] += 376817;
        result[3] += 11975264;
        result[4] += 26377;
        result[5] += 22609;
        result[6] += 30145;
      } else {
        result[0] += 0;
        result[1] += 45776;
        result[2] += 514984;
        result[3] += 34561154;
        result[4] += 7816314;
        result[5] += 11444;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 273564;
        result[1] += 683911;
        result[2] += 0;
        result[3] += 24210484;
        result[4] += 17781711;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1048225;
        result[4] += 41901447;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 42922861;
        result[1] += 0;
        result[2] += 24130;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2681;
      } else {
        result[0] += 42945441;
        result[1] += 0;
        result[2] += 4231;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 99190;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9472733;
        result[4] += 33228961;
        result[5] += 148786;
        result[6] += 0;
      } else {
        result[0] += 24424137;
        result[1] += 84481;
        result[2] += 340942;
        result[3] += 18045802;
        result[4] += 30171;
        result[5] += 9051;
        result[6] += 15085;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 54297;
        result[1] += 0;
        result[2] += 0;
        result[3] += 18841386;
        result[4] += 24053988;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 179455;
        result[1] += 358910;
        result[2] += 0;
        result[3] += 2093647;
        result[4] += 40317659;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42744499;
        result[5] += 205173;
        result[6] += 0;
      } else {
        result[0] += 5791278;
        result[1] += 166256;
        result[2] += 471060;
        result[3] += 36465657;
        result[4] += 0;
        result[5] += 55418;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9530464;
        result[1] += 0;
        result[2] += 125165;
        result[3] += 33186758;
        result[4] += 0;
        result[5] += 107284;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 17050835;
        result[1] += 460833;
        result[2] += 0;
        result[3] += 25438003;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42812348;
        result[1] += 24968;
        result[2] += 99872;
        result[3] += 4681;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7802;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 23289303;
        result[1] += 0;
        result[2] += 364350;
        result[3] += 19252296;
        result[4] += 0;
        result[5] += 0;
        result[6] += 43722;
      } else {
        result[0] += 29793414;
        result[1] += 0;
        result[2] += 118587;
        result[3] += 13030694;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6975;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8480356;
        result[1] += 142927;
        result[2] += 190569;
        result[3] += 34111997;
        result[4] += 0;
        result[5] += 23821;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42944152;
        result[1] += 0;
        result[2] += 5520;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30419472;
        result[1] += 0;
        result[2] += 337351;
        result[3] += 12144656;
        result[4] += 0;
        result[5] += 0;
        result[6] += 48193;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 2926011;
        result[1] += 0;
        result[2] += 146300;
        result[3] += 28298713;
        result[4] += 11515946;
        result[5] += 62700;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 64488;
        result[2] += 0;
        result[3] += 2257114;
        result[4] += 40628069;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 24033621;
        result[1] += 113723;
        result[2] += 75815;
        result[3] += 18726512;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39380408;
        result[1] += 28299;
        result[2] += 122041;
        result[3] += 3406542;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12380;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 42189703;
        result[1] += 47627;
        result[2] += 72476;
        result[3] += 627440;
        result[4] += 0;
        result[5] += 2070;
        result[6] += 10353;
      } else {
        result[0] += 42943479;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6193;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 19257466;
        result[1] += 0;
        result[2] += 276092;
        result[3] += 23019230;
        result[4] += 396883;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41459227;
        result[1] += 0;
        result[2] += 235987;
        result[3] += 1167515;
        result[4] += 0;
        result[5] += 0;
        result[6] += 86942;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12537508;
        result[1] += 130599;
        result[2] += 409210;
        result[3] += 29854941;
        result[4] += 0;
        result[5] += 17413;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42883900;
        result[5] += 65772;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6607641;
        result[3] += 0;
        result[4] += 36342030;
        result[5] += 0;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 224014;
        result[1] += 509123;
        result[2] += 346204;
        result[3] += 41870330;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42505519;
        result[1] += 0;
        result[2] += 444153;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4638841;
        result[1] += 23078;
        result[2] += 253866;
        result[3] += 34733615;
        result[4] += 3207955;
        result[5] += 92315;
        result[6] += 0;
      } else {
        result[0] += 42656128;
        result[1] += 23421;
        result[2] += 67140;
        result[3] += 196737;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6245;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6414817;
        result[1] += 0;
        result[2] += 256592;
        result[3] += 29498293;
        result[4] += 6760231;
        result[5] += 19737;
        result[6] += 0;
      } else {
        result[0] += 42787598;
        result[1] += 0;
        result[2] += 119423;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42651;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 41772969;
        result[1] += 0;
        result[2] += 1176703;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2673612;
        result[1] += 362847;
        result[2] += 57291;
        result[3] += 39855921;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 41929947;
        result[1] += 28788;
        result[2] += 34849;
        result[3] += 943965;
        result[4] += 6060;
        result[5] += 1515;
        result[6] += 4545;
      } else {
        result[0] += 971223;
        result[1] += 0;
        result[2] += 899281;
        result[3] += 36043192;
        result[4] += 5035975;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 6266607;
        result[1] += 0;
        result[2] += 338735;
        result[3] += 29569619;
        result[4] += 6744822;
        result[5] += 29888;
        result[6] += 0;
      } else {
        result[0] += 42681561;
        result[1] += 0;
        result[2] += 138379;
        result[3] += 17297;
        result[4] += 0;
        result[5] += 0;
        result[6] += 112433;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 27496;
        result[1] += 137482;
        result[2] += 164979;
        result[3] += 42482230;
        result[4] += 0;
        result[5] += 137482;
        result[6] += 0;
      } else {
        result[0] += 41893988;
        result[1] += 0;
        result[2] += 1055684;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42800628;
        result[1] += 27945;
        result[2] += 99363;
        result[3] += 13972;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7762;
      } else {
        result[0] += 436776;
        result[1] += 1747105;
        result[2] += 0;
        result[3] += 40765791;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7881172;
        result[1] += 0;
        result[2] += 173929;
        result[3] += 34894571;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42668415;
        result[1] += 0;
        result[2] += 198534;
        result[3] += 41361;
        result[4] += 0;
        result[5] += 0;
        result[6] += 41361;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 16048915;
        result[1] += 103350;
        result[2] += 280523;
        result[3] += 26502118;
        result[4] += 14764;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3498000;
        result[1] += 0;
        result[2] += 576989;
        result[3] += 7825423;
        result[4] += 31049259;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1590728;
        result[1] += 3499602;
        result[2] += 0;
        result[3] += 37859341;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
        result[0] += 42926741;
        result[1] += 0;
        result[2] += 21293;
        result[3] += 0;
        result[4] += 1637;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28633115;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14316557;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 15839117;
        result[1] += 72585;
        result[2] += 269602;
        result[3] += 22755445;
        result[4] += 3924783;
        result[5] += 62215;
        result[6] += 25923;
      } else {
        result[0] += 41477112;
        result[1] += 0;
        result[2] += 156180;
        result[3] += 1215977;
        result[4] += 0;
        result[5] += 0;
        result[6] += 100401;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42258848;
        result[1] += 4087;
        result[2] += 34745;
        result[3] += 647903;
        result[4] += 2043;
        result[5] += 2043;
        result[6] += 0;
      } else {
        result[0] += 30540354;
        result[1] += 25296;
        result[2] += 177078;
        result[3] += 11542322;
        result[4] += 618626;
        result[5] += 6899;
        result[6] += 39095;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42a20000))) ) ) {
        result[0] += 42949672;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 219691;
        result[1] += 439382;
        result[2] += 0;
        result[3] += 3405217;
        result[4] += 38885381;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 4308431;
        result[1] += 76936;
        result[2] += 115404;
        result[3] += 22869306;
        result[4] += 15579594;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41196625;
        result[1] += 0;
        result[2] += 1753047;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 42917388;
        result[1] += 0;
        result[2] += 32284;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 7143534;
        result[1] += 486556;
        result[2] += 0;
        result[3] += 29878994;
        result[4] += 5440586;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29738202;
        result[1] += 86754;
        result[2] += 223082;
        result[3] += 12783894;
        result[4] += 55770;
        result[5] += 37180;
        result[6] += 24786;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 410246;
        result[3] += 25253839;
        result[4] += 17277697;
        result[5] += 7889;
        result[6] += 0;
      } else {
        result[0] += 42530576;
        result[1] += 0;
        result[2] += 357008;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 62088;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 325513;
        result[1] += 72336;
        result[2] += 434017;
        result[3] += 29947224;
        result[4] += 12098244;
        result[5] += 72336;
        result[6] += 0;
      } else {
        result[0] += 31601766;
        result[1] += 0;
        result[2] += 277028;
        result[3] += 10947754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 123123;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4289638;
        result[1] += 106574;
        result[2] += 293080;
        result[3] += 38100516;
        result[4] += 0;
        result[5] += 159862;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42733413;
        result[1] += 8887;
        result[2] += 23699;
        result[3] += 180709;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2962;
      } else {
        result[0] += 33398747;
        result[1] += 82572;
        result[2] += 251650;
        result[3] += 9169517;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47184;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42866031;
        result[5] += 83641;
        result[6] += 0;
      } else {
        result[0] += 5882824;
        result[1] += 50568;
        result[2] += 370837;
        result[3] += 36510593;
        result[4] += 0;
        result[5] += 134849;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42921594;
        result[1] += 0;
        result[2] += 26426;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1651;
      } else {
        result[0] += 30226770;
        result[1] += 55316;
        result[2] += 363511;
        result[3] += 12264561;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39512;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        result[0] += 3014012;
        result[1] += 2260509;
        result[2] += 0;
        result[3] += 37675151;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 292971;
        result[1] += 585943;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42070757;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7547315;
        result[1] += 233422;
        result[2] += 0;
        result[3] += 35168935;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3823523;
        result[1] += 0;
        result[2] += 408337;
        result[3] += 9317517;
        result[4] += 29400294;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 42920219;
        result[1] += 0;
        result[2] += 26180;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3272;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26090603;
        result[1] += 61429;
        result[2] += 266195;
        result[3] += 14159570;
        result[4] += 2327507;
        result[5] += 23889;
        result[6] += 20476;
      } else {
        result[0] += 84325;
        result[1] += 0;
        result[2] += 702710;
        result[3] += 34489037;
        result[4] += 7645491;
        result[5] += 28108;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 24089164;
        result[1] += 0;
        result[2] += 1307163;
        result[3] += 17553344;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 116289;
        result[1] += 426395;
        result[2] += 0;
        result[3] += 42406987;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8400718;
        result[1] += 11398;
        result[2] += 205173;
        result[3] += 34263990;
        result[4] += 0;
        result[5] += 68391;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12474661;
        result[4] += 30475011;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 158837;
        result[2] += 0;
        result[3] += 63535;
        result[4] += 42727300;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 42900067;
        result[1] += 0;
        result[2] += 49605;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39083523;
        result[1] += 82464;
        result[2] += 412324;
        result[3] += 3322851;
        result[4] += 0;
        result[5] += 0;
        result[6] += 48508;
      } else {
        result[0] += 0;
        result[1] += 15290;
        result[2] += 183480;
        result[3] += 42750902;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 44020;
        result[1] += 0;
        result[2] += 146736;
        result[3] += 42612179;
        result[4] += 73368;
        result[5] += 73368;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 276819;
        result[2] += 0;
        result[3] += 5195696;
        result[4] += 37477156;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42069556;
        result[1] += 0;
        result[2] += 880116;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 42780936;
        result[1] += 23009;
        result[2] += 110445;
        result[3] += 26077;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9203;
      } else {
        result[0] += 13006545;
        result[1] += 561433;
        result[2] += 0;
        result[3] += 29381693;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6900758;
        result[1] += 0;
        result[2] += 162644;
        result[3] += 35886269;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42742603;
        result[1] += 0;
        result[2] += 146674;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 60395;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 12470;
        result[2] += 0;
        result[3] += 39994076;
        result[4] += 2905712;
        result[5] += 37412;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42930498;
        result[5] += 19173;
        result[6] += 0;
      } else {
        result[0] += 34001824;
        result[1] += 2505397;
        result[2] += 5368709;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1073741;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
        result[0] += 25144587;
        result[1] += 815500;
        result[2] += 0;
        result[3] += 16989585;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 235987;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42713685;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42921114;
        result[1] += 0;
        result[2] += 25198;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3359;
      } else {
        result[0] += 30088326;
        result[1] += 51037;
        result[2] += 337629;
        result[3] += 12429494;
        result[4] += 0;
        result[5] += 0;
        result[6] += 43185;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 166928;
        result[2] += 412411;
        result[3] += 25137440;
        result[4] += 17232893;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42464061;
        result[1] += 0;
        result[2] += 485611;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 8982368;
        result[1] += 0;
        result[2] += 0;
        result[3] += 33444060;
        result[4] += 261622;
        result[5] += 261622;
        result[6] += 0;
      } else {
        result[0] += 42730283;
        result[1] += 21284;
        result[2] += 57303;
        result[3] += 134253;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6548;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42754952;
        result[4] += 166902;
        result[5] += 27817;
        result[6] += 0;
      } else {
        result[0] += 20240277;
        result[1] += 0;
        result[2] += 909675;
        result[3] += 0;
        result[4] += 21799720;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42680606;
        result[1] += 0;
        result[2] += 92491;
        result[3] += 58858;
        result[4] += 0;
        result[5] += 0;
        result[6] += 117716;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 245602;
        result[1] += 30700;
        result[2] += 230251;
        result[3] += 30362563;
        result[4] += 12080554;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42763340;
        result[1] += 0;
        result[2] += 186332;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 357913;
        result[1] += 3579139;
        result[2] += 0;
        result[3] += 39012619;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4248282;
        result[1] += 0;
        result[2] += 420159;
        result[3] += 34429765;
        result[4] += 3781438;
        result[5] += 70026;
        result[6] += 0;
      } else {
        result[0] += 39060324;
        result[1] += 21298;
        result[2] += 102942;
        result[3] += 3749724;
        result[4] += 0;
        result[5] += 4733;
        result[6] += 10649;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4500c800))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17179869;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 25769803;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 119785;
        result[2] += 385974;
        result[3] += 42377365;
        result[4] += 0;
        result[5] += 66547;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41907205;
        result[1] += 1042467;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 40071893;
        result[1] += 15096;
        result[2] += 154739;
        result[3] += 2690959;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16983;
      } else {
        result[0] += 37659240;
        result[1] += 0;
        result[2] += 37017;
        result[3] += 5253414;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 192455;
        result[2] += 336797;
        result[3] += 42356268;
        result[4] += 0;
        result[5] += 64151;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42919982;
        result[1] += 0;
        result[2] += 27569;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2120;
      } else {
        result[0] += 31791928;
        result[1] += 152845;
        result[2] += 0;
        result[3] += 11004898;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 36946550;
        result[1] += 45576;
        result[2] += 279972;
        result[3] += 5654785;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22788;
      } else {
        result[0] += 22315025;
        result[1] += 0;
        result[2] += 210047;
        result[3] += 20424599;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 335306;
        result[1] += 167653;
        result[2] += 167653;
        result[3] += 30040385;
        result[4] += 12238675;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42420024;
        result[1] += 0;
        result[2] += 529648;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 484394;
        result[1] += 322929;
        result[2] += 0;
        result[3] += 8557641;
        result[4] += 33584706;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 235340;
        result[2] += 0;
        result[3] += 3000593;
        result[4] += 39713738;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4643808;
        result[1] += 44438;
        result[2] += 555479;
        result[3] += 34173097;
        result[4] += 3510630;
        result[5] += 22219;
        result[6] += 0;
      } else {
        result[0] += 39094058;
        result[1] += 21373;
        result[2] += 87870;
        result[3] += 3724996;
        result[4] += 0;
        result[5] += 3562;
        result[6] += 17811;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42772925;
        result[1] += 0;
        result[2] += 137470;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39277;
      } else {
        result[0] += 42931808;
        result[1] += 0;
        result[2] += 17864;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 648242;
        result[1] += 280905;
        result[2] += 424959;
        result[3] += 28839592;
        result[4] += 12691149;
        result[5] += 64824;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42053673;
        result[1] += 0;
        result[2] += 291597;
        result[3] += 519573;
        result[4] += 0;
        result[5] += 0;
        result[6] += 84828;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33792;
        result[3] += 42915880;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 10318087;
        result[1] += 101656;
        result[2] += 0;
        result[3] += 32224961;
        result[4] += 101656;
        result[5] += 203312;
        result[6] += 0;
      } else {
        result[0] += 42706665;
        result[1] += 19868;
        result[2] += 44322;
        result[3] += 168118;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10698;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 5610682;
        result[1] += 20703;
        result[2] += 414072;
        result[3] += 26759437;
        result[4] += 10144776;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 209715;
        result[1] += 461373;
        result[2] += 0;
        result[3] += 4110417;
        result[4] += 38168166;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17296915;
        result[1] += 0;
        result[2] += 276360;
        result[3] += 25278857;
        result[4] += 48769;
        result[5] += 16256;
        result[6] += 32512;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 103306;
        result[2] += 60262;
        result[3] += 26885513;
        result[4] += 15866154;
        result[5] += 34435;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42740000))) ) ) {
        result[0] += 42733220;
        result[1] += 15351;
        result[2] += 113599;
        result[3] += 79826;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7675;
      } else {
        result[0] += 3545052;
        result[1] += 954437;
        result[2] += 0;
        result[3] += 38450183;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 18100219;
        result[1] += 0;
        result[2] += 306783;
        result[3] += 988524;
        result[4] += 23554146;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 804803;
        result[1] += 0;
        result[2] += 147547;
        result[3] += 41849775;
        result[4] += 107307;
        result[5] += 40240;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42428584;
        result[1] += 0;
        result[2] += 460962;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 60125;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 42285502;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 664170;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1195418;
        result[3] += 33130165;
        result[4] += 8453315;
        result[5] += 170774;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        result[0] += 41518585;
        result[1] += 44295;
        result[2] += 183997;
        result[3] += 1175536;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27258;
      } else {
        result[0] += 38331627;
        result[1] += 3694;
        result[2] += 44333;
        result[3] += 4570018;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 18226541;
        result[1] += 0;
        result[2] += 360921;
        result[3] += 13696975;
        result[4] += 10502819;
        result[5] += 162414;
        result[6] += 0;
      } else {
        result[0] += 3001048;
        result[1] += 45241;
        result[2] += 512741;
        result[3] += 35741125;
        result[4] += 3574112;
        result[5] += 75403;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 383479;
        result[1] += 0;
        result[2] += 0;
        result[3] += 26843545;
        result[4] += 15722648;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26726;
        result[1] += 400899;
        result[2] += 0;
        result[3] += 2512301;
        result[4] += 40009745;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 42909756;
        result[1] += 0;
        result[2] += 39916;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 25956147;
        result[1] += 57716;
        result[2] += 173150;
        result[3] += 13109998;
        result[4] += 3594942;
        result[5] += 8245;
        result[6] += 49471;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 982612;
        result[3] += 36895512;
        result[4] += 5071548;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 9568128;
        result[1] += 106906;
        result[2] += 374172;
        result[3] += 16463595;
        result[4] += 16436869;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40885729;
        result[1] += 42440;
        result[2] += 107217;
        result[3] += 1813768;
        result[4] += 82647;
        result[5] += 6701;
        result[6] += 11168;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19832993;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23116679;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35610074;
        result[1] += 0;
        result[2] += 61291;
        result[3] += 91936;
        result[4] += 7186370;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43390000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42899630;
        result[1] += 0;
        result[2] += 47866;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2175;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1080171;
        result[1] += 318907;
        result[2] += 771551;
        result[3] += 40727606;
        result[4] += 0;
        result[5] += 51436;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42051406;
        result[1] += 0;
        result[2] += 266346;
        result[3] += 579695;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52224;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42934925;
        result[1] += 0;
        result[2] += 14747;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 28753567;
        result[1] += 87757;
        result[2] += 268435;
        result[3] += 12368679;
        result[4] += 1398961;
        result[5] += 41297;
        result[6] += 30973;
      } else {
        result[0] += 15440043;
        result[1] += 0;
        result[2] += 356700;
        result[3] += 22006247;
        result[4] += 5081164;
        result[5] += 14559;
        result[6] += 50957;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 7377147;
        result[1] += 193119;
        result[2] += 0;
        result[3] += 35379406;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 500870;
        result[1] += 1252177;
        result[2] += 0;
        result[3] += 8389586;
        result[4] += 32807038;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 5734587;
        result[1] += 0;
        result[2] += 597352;
        result[3] += 11708116;
        result[4] += 24909615;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2209938;
        result[4] += 40739734;
        result[5] += 0;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 382580;
        result[1] += 302037;
        result[2] += 281901;
        result[3] += 41983154;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42552807;
        result[1] += 0;
        result[2] += 396865;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 37543913;
        result[1] += 28228;
        result[2] += 52928;
        result[3] += 5275202;
        result[4] += 24699;
        result[5] += 3528;
        result[6] += 21171;
      } else {
        result[0] += 42339061;
        result[1] += 0;
        result[2] += 77261;
        result[3] += 161998;
        result[4] += 368859;
        result[5] += 2492;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19097757;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23851915;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34960506;
        result[1] += 0;
        result[2] += 442671;
        result[3] += 31619;
        result[4] += 7430556;
        result[5] += 21079;
        result[6] += 63238;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42868328;
        result[5] += 81344;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 237436;
        result[2] += 329773;
        result[3] += 42303317;
        result[4] += 0;
        result[5] += 79145;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42640830;
        result[1] += 0;
        result[2] += 288252;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20589;
      } else {
        result[0] += 42935012;
        result[1] += 0;
        result[2] += 14660;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 40763400;
        result[1] += 126944;
        result[2] += 260942;
        result[3] += 1770175;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28209;
      } else {
        result[0] += 17123055;
        result[1] += 0;
        result[2] += 386649;
        result[3] += 25384732;
        result[4] += 0;
        result[5] += 0;
        result[6] += 55235;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42902004;
        result[5] += 47668;
        result[6] += 0;
      } else {
        result[0] += 5928739;
        result[1] += 0;
        result[2] += 303174;
        result[3] += 36549329;
        result[4] += 0;
        result[5] += 168430;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42933218;
        result[1] += 0;
        result[2] += 14809;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1645;
      } else {
        result[0] += 30320447;
        result[1] += 79279;
        result[2] += 265586;
        result[3] += 12240755;
        result[4] += 0;
        result[5] += 0;
        result[6] += 43603;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 11061939;
        result[1] += 451507;
        result[2] += 0;
        result[3] += 29573756;
        result[4] += 1862469;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 552210;
        result[2] += 0;
        result[3] += 29757987;
        result[4] += 12639475;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 6208231;
        result[1] += 0;
        result[2] += 790138;
        result[3] += 11795639;
        result[4] += 24155663;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 48258;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2316386;
        result[4] += 40585028;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 293457;
        result[2] += 293457;
        result[3] += 36745132;
        result[4] += 5617624;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42895099;
        result[1] += 54573;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1318032;
        result[4] += 41631640;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5866296;
        result[1] += 0;
        result[2] += 628531;
        result[3] += 11837348;
        result[4] += 24617495;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42842699;
        result[5] += 106973;
        result[6] += 0;
      } else {
        result[0] += 5719991;
        result[1] += 49739;
        result[2] += 646607;
        result[3] += 36458726;
        result[4] += 0;
        result[5] += 74608;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42926754;
        result[1] += 0;
        result[2] += 21281;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1637;
      } else {
        result[0] += 29407365;
        result[1] += 67817;
        result[2] += 275508;
        result[3] += 13143879;
        result[4] += 0;
        result[5] += 4238;
        result[6] += 50863;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43250000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42871611;
        result[1] += 0;
        result[2] += 74158;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3903;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 713844;
        result[1] += 261743;
        result[2] += 309332;
        result[3] += 27863749;
        result[4] += 13761344;
        result[5] += 39658;
        result[6] += 0;
      } else {
        result[0] += 42150609;
        result[1] += 0;
        result[2] += 248357;
        result[3] += 512912;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37793;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42906837;
        result[4] += 42835;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1786910;
        result[3] += 0;
        result[4] += 41162762;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42854138;
        result[1] += 0;
        result[2] += 95534;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        result[0] += 42944345;
        result[1] += 0;
        result[2] += 5327;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42903240;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 46432;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 22302420;
        result[1] += 61905;
        result[2] += 179201;
        result[3] += 20380079;
        result[4] += 6516;
        result[5] += 6516;
        result[6] += 13032;
      } else {
        result[0] += 26669440;
        result[1] += 0;
        result[2] += 1233004;
        result[3] += 159833;
        result[4] += 14590558;
        result[5] += 45666;
        result[6] += 251167;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 135701;
        result[1] += 882062;
        result[2] += 0;
        result[3] += 24222801;
        result[4] += 17709106;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 884179;
        result[4] += 42065493;
        result[5] += 0;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42532685;
        result[1] += 0;
        result[2] += 416987;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42928207;
        result[1] += 0;
        result[2] += 18163;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3302;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 676604;
        result[1] += 323593;
        result[2] += 419200;
        result[3] += 28432095;
        result[4] += 13039344;
        result[5] += 58835;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 31019208;
        result[1] += 0;
        result[2] += 304745;
        result[3] += 11586815;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38903;
      } else {
        result[0] += 33053334;
        result[1] += 0;
        result[2] += 43692;
        result[3] += 9830800;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21846;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42703895;
        result[1] += 0;
        result[2] += 204814;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40962;
      } else {
        result[0] += 42933757;
        result[1] += 0;
        result[2] += 15915;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26527340;
        result[1] += 33909;
        result[2] += 278057;
        result[3] += 13977463;
        result[4] += 2085429;
        result[5] += 20345;
        result[6] += 27127;
      } else {
        result[0] += 3319873;
        result[1] += 189707;
        result[2] += 701916;
        result[3] += 38605381;
        result[4] += 132794;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 507679;
        result[1] += 710751;
        result[2] += 0;
        result[3] += 41731242;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 39891;
        result[1] += 13297;
        result[2] += 119674;
        result[3] += 40662569;
        result[4] += 1981269;
        result[5] += 132971;
        result[6] += 0;
      } else {
        result[0] += 23524302;
        result[1] += 0;
        result[2] += 594048;
        result[3] += 0;
        result[4] += 18831322;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29890650;
        result[4] += 13059022;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 426299;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42523373;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42080000))) ) ) {
        result[0] += 0;
        result[1] += 897902;
        result[2] += 0;
        result[3] += 42051770;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42711465;
        result[1] += 10634;
        result[2] += 21268;
        result[3] += 199924;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6380;
      } else {
        result[0] += 34631253;
        result[1] += 18345;
        result[2] += 272563;
        result[3] += 7993440;
        result[4] += 0;
        result[5] += 0;
        result[6] += 34070;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7912950;
        result[1] += 11098;
        result[2] += 321845;
        result[3] += 34592798;
        result[4] += 0;
        result[5] += 110981;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 638317;
        result[2] += 0;
        result[3] += 5015354;
        result[4] += 37296000;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 36866;
        result[2] += 0;
        result[3] += 847933;
        result[4] += 42064872;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
        result[0] += 0;
        result[1] += 484394;
        result[2] += 0;
        result[3] += 42465278;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42733598;
        result[1] += 2139;
        result[2] += 25672;
        result[3] += 186123;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2139;
      } else {
        result[0] += 34560842;
        result[1] += 46647;
        result[2] += 199548;
        result[3] += 8116718;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25915;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42824089;
        result[5] += 125583;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39500;
        result[1] += 131666;
        result[2] += 158000;
        result[3] += 42515172;
        result[4] += 0;
        result[5] += 105333;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 1292799;
        result[2] += 0;
        result[3] += 41656873;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 37882521;
        result[1] += 24550;
        result[2] += 108020;
        result[3] += 4921487;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13093;
      } else {
        result[0] += 42316098;
        result[1] += 0;
        result[2] += 133384;
        result[3] += 466844;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33346;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7133229;
        result[1] += 23122;
        result[2] += 0;
        result[3] += 35781759;
        result[4] += 0;
        result[5] += 11561;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 13591668;
        result[1] += 5436667;
        result[2] += 0;
        result[3] += 0;
        result[4] += 23921336;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1406034;
        result[1] += 0;
        result[2] += 449931;
        result[3] += 0;
        result[4] += 41037465;
        result[5] += 56241;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 18954315;
        result[1] += 504104;
        result[2] += 0;
        result[3] += 23491253;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42817673;
        result[1] += 20188;
        result[2] += 94729;
        result[3] += 12423;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4658;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 8483078;
        result[1] += 0;
        result[2] += 163555;
        result[3] += 34303039;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42750486;
        result[1] += 0;
        result[2] += 182587;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16598;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 12503;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39786276;
        result[4] += 3113382;
        result[5] += 37510;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 221532;
        result[2] += 304607;
        result[3] += 0;
        result[4] += 42368149;
        result[5] += 55383;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 642959;
        result[3] += 0;
        result[4] += 42306713;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42885473;
        result[1] += 0;
        result[2] += 42799;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21399;
      } else {
        result[0] += 42942386;
        result[1] += 0;
        result[2] += 7286;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 22153315;
        result[1] += 162835;
        result[2] += 186097;
        result[3] += 20416408;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31016;
      } else {
        result[0] += 36770222;
        result[1] += 28509;
        result[2] += 377751;
        result[3] += 5723296;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49891;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 291154;
        result[3] += 28515477;
        result[4] += 14081281;
        result[5] += 61760;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 397682;
        result[2] += 0;
        result[3] += 149130;
        result[4] += 42402859;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 42813998;
        result[1] += 26511;
        result[2] += 96687;
        result[3] += 1559;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10916;
      } else {
        result[0] += 13199663;
        result[1] += 507679;
        result[2] += 0;
        result[3] += 29242330;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19338092;
        result[1] += 0;
        result[2] += 66657;
        result[3] += 23544923;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42415732;
        result[1] += 0;
        result[2] += 455803;
        result[3] += 26045;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52091;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6176815;
        result[1] += 0;
        result[2] += 384050;
        result[3] += 36308795;
        result[4] += 0;
        result[5] += 80010;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42924657;
        result[1] += 0;
        result[2] += 23347;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1667;
      } else {
        result[0] += 30048824;
        result[1] += 58339;
        result[2] += 330591;
        result[3] += 12473023;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38893;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 6511911;
        result[1] += 434127;
        result[2] += 376243;
        result[3] += 35627390;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3598730;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39314774;
        result[4] += 0;
        result[5] += 36168;
        result[6] += 0;
      } else {
        result[0] += 14916019;
        result[1] += 264468;
        result[2] += 608277;
        result[3] += 27108014;
        result[4] += 0;
        result[5] += 52893;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42918480;
        result[1] += 0;
        result[2] += 22280;
        result[3] += 4456;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4456;
      } else {
        result[0] += 37165429;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5784243;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23179643;
        result[1] += 97417;
        result[2] += 326635;
        result[3] += 19334515;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11460;
      } else {
        result[0] += 42304823;
        result[1] += 0;
        result[2] += 183603;
        result[3] += 425421;
        result[4] += 0;
        result[5] += 0;
        result[6] += 35824;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 10099680;
        result[1] += 0;
        result[2] += 0;
        result[3] += 32381450;
        result[4] += 52060;
        result[5] += 416481;
        result[6] += 0;
      } else {
        result[0] += 42706941;
        result[1] += 21372;
        result[2] += 41218;
        result[3] += 170980;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9159;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 6003938;
        result[1] += 30736;
        result[2] += 727439;
        result[3] += 26812808;
        result[4] += 9364504;
        result[5] += 10245;
        result[6] += 0;
      } else {
        result[0] += 86767;
        result[1] += 303684;
        result[2] += 0;
        result[3] += 4338350;
        result[4] += 38220870;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 17311439;
        result[1] += 0;
        result[2] += 477619;
        result[3] += 25097532;
        result[4] += 0;
        result[5] += 0;
        result[6] += 63081;
      } else {
        result[0] += 5281000;
        result[1] += 0;
        result[2] += 110790;
        result[3] += 12334643;
        result[4] += 25223238;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42931499;
        result[1] += 0;
        result[2] += 15901;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2271;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 444797;
        result[1] += 35583;
        result[2] += 533757;
        result[3] += 29534572;
        result[4] += 12383169;
        result[5] += 17791;
        result[6] += 0;
      } else {
        result[0] += 32084148;
        result[1] += 0;
        result[2] += 282357;
        result[3] += 10551794;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31373;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40b00000))) ) ) {
        result[0] += 18477680;
        result[1] += 186425;
        result[2] += 415873;
        result[3] += 15502035;
        result[4] += 8317465;
        result[5] += 21510;
        result[6] += 28680;
      } else {
        result[0] += 21225686;
        result[1] += 28748;
        result[2] += 57496;
        result[3] += 15782711;
        result[4] += 5835865;
        result[5] += 9582;
        result[6] += 9582;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42764722;
        result[1] += 0;
        result[2] += 184950;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42933624;
        result[1] += 0;
        result[2] += 16048;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 660417;
        result[1] += 142590;
        result[2] += 532837;
        result[3] += 29553697;
        result[4] += 12007596;
        result[5] += 52533;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 349539;
        result[2] += 0;
        result[3] += 5024631;
        result[4] += 37575502;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 42133347;
        result[1] += 0;
        result[2] += 226375;
        result[3] += 583089;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6859;
      } else {
        result[0] += 17286429;
        result[1] += 0;
        result[2] += 197333;
        result[3] += 25436309;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29600;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42064112;
        result[1] += 0;
        result[2] += 885560;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42929790;
        result[1] += 0;
        result[2] += 18225;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1656;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26197812;
        result[1] += 60854;
        result[2] += 307652;
        result[3] += 14040459;
        result[4] += 2305705;
        result[5] += 10142;
        result[6] += 27046;
      } else {
        result[0] += 3203380;
        result[1] += 52229;
        result[2] += 574519;
        result[3] += 38162011;
        result[4] += 922712;
        result[5] += 34819;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16714762;
        result[4] += 26234910;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30182;
        result[1] += 422554;
        result[2] += 0;
        result[3] += 2233503;
        result[4] += 40263431;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 12456;
        result[2] += 0;
        result[3] += 40321372;
        result[4] += 2553562;
        result[5] += 62282;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 14102877;
        result[1] += 6410398;
        result[2] += 0;
        result[3] += 0;
        result[4] += 22436396;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1262100;
        result[1] += 0;
        result[2] += 420700;
        result[3] += 0;
        result[4] += 41209503;
        result[5] += 57368;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42822263;
        result[1] += 0;
        result[2] += 29728;
        result[3] += 93433;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4246;
      } else {
        result[0] += 10737418;
        result[1] += 2684354;
        result[2] += 0;
        result[3] += 29527900;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 22833406;
        result[1] += 123774;
        result[2] += 288806;
        result[3] += 19680109;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23576;
      } else {
        result[0] += 42321622;
        result[1] += 0;
        result[2] += 139068;
        result[3] += 466551;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22430;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 9843712;
        result[1] += 51809;
        result[2] += 0;
        result[3] += 32846915;
        result[4] += 51809;
        result[5] += 155427;
        result[6] += 0;
      } else {
        result[0] += 42737345;
        result[1] += 27495;
        result[2] += 24440;
        result[3] += 152753;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7637;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 7846168;
        result[1] += 56345;
        result[2] += 732496;
        result[3] += 33384954;
        result[4] += 929707;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 316116;
        result[2] += 0;
        result[3] += 6006210;
        result[4] += 36627346;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10338599;
        result[1] += 0;
        result[2] += 0;
        result[3] += 32611073;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 42096368;
        result[1] += 0;
        result[2] += 659371;
        result[3] += 25857;
        result[4] += 77573;
        result[5] += 38786;
        result[6] += 51715;
      } else {
        result[0] += 64295;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42885377;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 107981;
        result[2] += 337442;
        result[3] += 42423262;
        result[4] += 0;
        result[5] += 80986;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42885753;
        result[1] += 0;
        result[2] += 63919;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 22560056;
        result[1] += 104348;
        result[2] += 187826;
        result[3] += 20076572;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20869;
      } else {
        result[0] += 36987467;
        result[1] += 38917;
        result[2] += 467013;
        result[3] += 5425139;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31134;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        result[0] += 42941860;
        result[1] += 0;
        result[2] += 7812;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42907627;
        result[1] += 0;
        result[2] += 42045;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 39270200;
        result[1] += 36327;
        result[2] += 171258;
        result[3] += 3409610;
        result[4] += 0;
        result[5] += 0;
        result[6] += 62275;
      } else {
        result[0] += 4626915;
        result[1] += 133092;
        result[2] += 438421;
        result[3] += 23854840;
        result[4] += 13872916;
        result[5] += 23486;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0;
        result[1] += 43093;
        result[2] += 387839;
        result[3] += 42518739;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 64199;
        result[3] += 0;
        result[4] += 42821273;
        result[5] += 64199;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42857580;
        result[1] += 0;
        result[2] += 84418;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7674;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 669366;
        result[1] += 244121;
        result[2] += 354370;
        result[3] += 27814126;
        result[4] += 13781064;
        result[5] += 86623;
        result[6] += 0;
      } else {
        result[0] += 42072825;
        result[1] += 0;
        result[2] += 269392;
        result[3] += 554632;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52822;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 29157;
        result[2] += 0;
        result[3] += 42774725;
        result[4] += 131210;
        result[5] += 14578;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1421356;
        result[3] += 0;
        result[4] += 41528316;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 30111968;
        result[1] += 0;
        result[2] += 94394;
        result[3] += 12623170;
        result[4] += 17162;
        result[5] += 51488;
        result[6] += 51488;
      } else {
        result[0] += 42215624;
        result[1] += 22666;
        result[2] += 19179;
        result[3] += 673022;
        result[4] += 10461;
        result[5] += 3487;
        result[6] += 5230;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 8501768;
        result[1] += 157440;
        result[2] += 314880;
        result[3] += 19994899;
        result[4] += 13980685;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7618168;
        result[1] += 149963;
        result[2] += 404902;
        result[3] += 15401296;
        result[4] += 19375341;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 10321027;
        result[1] += 0;
        result[2] += 737216;
        result[3] += 27277001;
        result[4] += 4614427;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18127090;
        result[1] += 0;
        result[2] += 22392;
        result[3] += 18888451;
        result[4] += 5911738;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39019432;
        result[1] += 0;
        result[2] += 178170;
        result[3] += 3573899;
        result[4] += 83845;
        result[5] += 20961;
        result[6] += 73364;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 317473;
        result[3] += 34173789;
        result[4] += 8345026;
        result[5] += 113383;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 218907;
        result[2] += 0;
        result[3] += 3568194;
        result[4] += 39162571;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42918567;
        result[1] += 4443;
        result[2] += 24439;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2221;
      } else {
        result[0] += 37936619;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5013053;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 41089229;
        result[1] += 106311;
        result[2] += 202957;
        result[3] += 1531845;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19329;
      } else {
        result[0] += 26778466;
        result[1] += 0;
        result[2] += 262946;
        result[3] += 15887224;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21035;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42921871;
        result[1] += 0;
        result[2] += 26165;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1635;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10283724;
        result[4] += 32615538;
        result[5] += 50410;
        result[6] += 0;
      } else {
        result[0] += 24733576;
        result[1] += 25760;
        result[2] += 344550;
        result[3] += 16873315;
        result[4] += 914507;
        result[5] += 16100;
        result[6] += 41861;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 5953626;
        result[1] += 188009;
        result[2] += 208899;
        result[3] += 23793617;
        result[4] += 12805520;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 87296;
        result[1] += 261888;
        result[2] += 0;
        result[3] += 4801284;
        result[4] += 37799204;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 650752;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42298920;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40337;
        result[1] += 10084;
        result[2] += 100844;
        result[3] += 31876946;
        result[4] += 10901290;
        result[5] += 20168;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 607491;
        result[3] += 0;
        result[4] += 42342181;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42938863;
        result[1] += 0;
        result[2] += 8647;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2161;
      } else {
        result[0] += 29679508;
        result[1] += 142689;
        result[2] += 0;
        result[3] += 13127474;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42911858;
        result[1] += 0;
        result[2] += 37814;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29959194;
        result[1] += 72679;
        result[2] += 290717;
        result[3] += 12577353;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49727;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8740922;
        result[1] += 72765;
        result[2] += 36382;
        result[3] += 31916645;
        result[4] += 2155669;
        result[5] += 27286;
        result[6] += 0;
      } else {
        result[0] += 2765111;
        result[1] += 0;
        result[2] += 232579;
        result[3] += 0;
        result[4] += 39951982;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42580791;
        result[1] += 33318;
        result[2] += 188010;
        result[3] += 140412;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7139;
      } else {
        result[0] += 42634032;
        result[1] += 0;
        result[2] += 13527;
        result[3] += 297604;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4509;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 275106;
        result[3] += 34993584;
        result[4] += 7658973;
        result[5] += 22008;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42301375;
        result[1] += 0;
        result[2] += 303889;
        result[3] += 162074;
        result[4] += 0;
        result[5] += 0;
        result[6] += 182333;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 225605;
        result[1] += 70501;
        result[2] += 282007;
        result[3] += 29258230;
        result[4] += 13113327;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42123717;
        result[1] += 0;
        result[2] += 825955;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 411001;
        result[2] += 0;
        result[3] += 102750;
        result[4] += 42435920;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42888403;
        result[5] += 61269;
        result[6] += 0;
      } else {
        result[0] += 42248061;
        result[1] += 4091;
        result[2] += 55228;
        result[3] += 642291;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 18517712;
        result[1] += 58268;
        result[2] += 326303;
        result[3] += 23604548;
        result[4] += 343783;
        result[5] += 81575;
        result[6] += 17480;
      } else {
        result[0] += 42346919;
        result[1] += 0;
        result[2] += 126157;
        result[3] += 448560;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28035;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 856851;
        result[2] += 0;
        result[3] += 160659;
        result[4] += 41932161;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 60111;
        result[1] += 20037;
        result[2] += 140260;
        result[3] += 31698802;
        result[4] += 10960331;
        result[5] += 70130;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 24993095;
        result[1] += 0;
        result[2] += 384509;
        result[3] += 0;
        result[4] += 17572068;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12520921;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 30428751;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 17322737;
        result[1] += 714339;
        result[2] += 0;
        result[3] += 24912596;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42789956;
        result[1] += 15658;
        result[2] += 119004;
        result[3] += 15658;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9395;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17345820;
        result[1] += 0;
        result[2] += 379316;
        result[3] += 25161317;
        result[4] += 0;
        result[5] += 0;
        result[6] += 63219;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 298421;
        result[1] += 137732;
        result[2] += 413198;
        result[3] += 42100320;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42619653;
        result[1] += 0;
        result[2] += 330019;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 113323;
        result[1] += 339971;
        result[2] += 0;
        result[3] += 10123581;
        result[4] += 32372796;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42925204;
        result[1] += 0;
        result[2] += 21205;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3262;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41180000))) ) ) {
        result[0] += 23988659;
        result[1] += 34625;
        result[2] += 297780;
        result[3] += 15785839;
        result[4] += 2797753;
        result[5] += 13850;
        result[6] += 31163;
      } else {
        result[0] += 40346662;
        result[1] += 0;
        result[2] += 650752;
        result[3] += 0;
        result[4] += 650752;
        result[5] += 0;
        result[6] += 1301505;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43260000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42810933;
        result[1] += 0;
        result[2] += 138739;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42938995;
        result[1] += 0;
        result[2] += 10677;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 7809952;
        result[1] += 111426;
        result[2] += 192463;
        result[3] += 18912037;
        result[4] += 15923793;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33655418;
        result[1] += 64447;
        result[2] += 354461;
        result[3] += 7683065;
        result[4] += 1109418;
        result[5] += 23016;
        result[6] += 59844;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 43900;
        result[2] += 0;
        result[3] += 42832603;
        result[4] += 58534;
        result[5] += 14633;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1551650;
        result[3] += 0;
        result[4] += 41398022;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42849557;
        result[5] += 100115;
        result[6] += 0;
      } else {
        result[0] += 8362925;
        result[1] += 117787;
        result[2] += 96371;
        result[3] += 34297632;
        result[4] += 0;
        result[5] += 74955;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 42767119;
        result[1] += 23206;
        result[2] += 117577;
        result[3] += 35582;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6188;
      } else {
        result[0] += 13215283;
        result[1] += 722710;
        result[2] += 0;
        result[3] += 29011678;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 6904059;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36045613;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2320145;
        result[1] += 0;
        result[2] += 1402878;
        result[3] += 0;
        result[4] += 39064777;
        result[5] += 161870;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42771105;
        result[1] += 0;
        result[2] += 119044;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 59522;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 52155;
        result[1] += 26077;
        result[2] += 0;
        result[3] += 39846448;
        result[4] += 2972837;
        result[5] += 52155;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 248264;
        result[2] += 331018;
        result[3] += 0;
        result[4] += 42177296;
        result[5] += 193094;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 42112214;
        result[1] += 0;
        result[2] += 658003;
        result[3] += 0;
        result[4] += 179455;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 64295;
        result[3] += 0;
        result[4] += 42885377;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42806265;
        result[1] += 21588;
        result[2] += 107940;
        result[3] += 1542;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12336;
      } else {
        result[0] += 276203;
        result[1] += 966712;
        result[2] += 0;
        result[3] += 41706756;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17748192;
        result[1] += 0;
        result[2] += 253999;
        result[3] += 24891919;
        result[4] += 0;
        result[5] += 0;
        result[6] += 55562;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5871518;
        result[1] += 16219;
        result[2] += 373052;
        result[3] += 36591564;
        result[4] += 0;
        result[5] += 97317;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 40210112;
        result[1] += 30524;
        result[2] += 179330;
        result[3] += 2506812;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22893;
      } else {
        result[0] += 37492013;
        result[1] += 0;
        result[2] += 33168;
        result[3] += 5424491;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 351087;
        result[2] += 39009;
        result[3] += 42559576;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41796661;
        result[1] += 0;
        result[2] += 1153011;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 499414;
        result[1] += 2497074;
        result[2] += 0;
        result[3] += 39953184;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12485;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40103008;
        result[4] += 2821693;
        result[5] += 12485;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 16519104;
        result[1] += 2202547;
        result[2] += 0;
        result[3] += 0;
        result[4] += 23677383;
        result[5] += 550636;
        result[6] += 0;
      } else {
        result[0] += 1108855;
        result[1] += 0;
        result[2] += 406580;
        result[3] += 0;
        result[4] += 41267908;
        result[5] += 166328;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42916345;
        result[1] += 2221;
        result[2] += 28883;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2221;
      } else {
        result[0] += 37728583;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5221089;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 34829651;
        result[1] += 31432;
        result[2] += 267174;
        result[3] += 7787362;
        result[4] += 0;
        result[5] += 0;
        result[6] += 34051;
      } else {
        result[0] += 10509707;
        result[1] += 630582;
        result[2] += 0;
        result[3] += 31809382;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 41913175;
        result[1] += 25993;
        result[2] += 34116;
        result[3] += 948769;
        result[4] += 14621;
        result[5] += 6498;
        result[6] += 6498;
      } else {
        result[0] += 24519301;
        result[1] += 0;
        result[2] += 445309;
        result[3] += 15858480;
        result[4] += 2126581;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 27715645;
        result[1] += 0;
        result[2] += 201641;
        result[3] += 14946687;
        result[4] += 55451;
        result[5] += 15123;
        result[6] += 15123;
      } else {
        result[0] += 123241;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42826431;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
        result[0] += 7283066;
        result[1] += 238231;
        result[2] += 0;
        result[3] += 35428375;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 319328;
        result[1] += 1277313;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41353030;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 706298;
        result[1] += 0;
        result[2] += 0;
        result[3] += 874464;
        result[4] += 41368909;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12389328;
        result[1] += 0;
        result[2] += 825955;
        result[3] += 29734388;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42636932;
        result[1] += 0;
        result[2] += 312740;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42928228;
        result[1] += 0;
        result[2] += 18145;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3299;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 729046;
        result[1] += 168241;
        result[2] += 248356;
        result[3] += 28216517;
        result[4] += 13523418;
        result[5] += 64092;
        result[6] += 0;
      } else {
        result[0] += 42056225;
        result[1] += 0;
        result[2] += 246099;
        result[3] += 561748;
        result[4] += 0;
        result[5] += 0;
        result[6] += 85599;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42748973;
        result[5] += 200699;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 14235;
        result[2] += 313189;
        result[3] += 42622247;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 406312;
        result[1] += 71702;
        result[2] += 406312;
        result[3] += 42065344;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42583364;
        result[1] += 0;
        result[2] += 366308;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 251167;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31898295;
        result[4] += 10800210;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 51746;
        result[1] += 310479;
        result[2] += 0;
        result[3] += 3078922;
        result[4] += 39508524;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x419c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 557787;
        result[3] += 0;
        result[4] += 42205955;
        result[5] += 185929;
        result[6] += 0;
      } else {
        result[0] += 42311502;
        result[1] += 6136;
        result[2] += 22499;
        result[3] += 605443;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4090;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 34542799;
        result[1] += 49744;
        result[2] += 225509;
        result[3] += 7508150;
        result[4] += 577039;
        result[5] += 6632;
        result[6] += 39795;
      } else {
        result[0] += 22005202;
        result[1] += 0;
        result[2] += 160110;
        result[3] += 20784359;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 20753128;
        result[1] += 0;
        result[2] += 352835;
        result[3] += 21298418;
        result[4] += 545290;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5983756;
        result[1] += 126163;
        result[2] += 252327;
        result[3] += 23196067;
        result[4] += 13391358;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 4772185;
        result[2] += 0;
        result[3] += 38177487;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41180000))) ) ) {
        result[0] += 41468649;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1481023;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42923303;
        result[1] += 0;
        result[2] += 24721;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1648;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 15809786;
        result[1] += 64207;
        result[2] += 266706;
        result[3] += 22783675;
        result[4] += 3961089;
        result[5] += 34573;
        result[6] += 29634;
      } else {
        result[0] += 41738026;
        result[1] += 0;
        result[2] += 286968;
        result[3] += 860906;
        result[4] += 0;
        result[5] += 0;
        result[6] += 63770;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41f40000))) ) ) {
        result[0] += 23820827;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 19128845;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1006632;
        result[3] += 41943039;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 41608260;
        result[1] += 58747;
        result[2] += 93017;
        result[3] += 1187198;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2447;
      } else {
        result[0] += 37291404;
        result[1] += 0;
        result[2] += 68829;
        result[3] += 5565704;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23734;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42766518;
        result[5] += 183154;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 79906;
        result[3] += 42829813;
        result[4] += 0;
        result[5] += 39953;
        result[6] += 0;
      } else {
        result[0] += 16304766;
        result[1] += 206802;
        result[2] += 500680;
        result[3] += 25926538;
        result[4] += 0;
        result[5] += 10884;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 25753347;
        result[1] += 90506;
        result[2] += 230381;
        result[3] += 12753255;
        result[4] += 4039902;
        result[5] += 24683;
        result[6] += 57595;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 591502;
        result[3] += 37034645;
        result[4] += 5323524;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428c0000))) ) ) {
        result[0] += 39521538;
        result[1] += 28508;
        result[2] += 64143;
        result[3] += 3324791;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10690;
      } else {
        result[0] += 3995318;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38954354;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12775695;
        result[1] += 74799;
        result[2] += 852710;
        result[3] += 29186629;
        result[4] += 0;
        result[5] += 59839;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 145368;
        result[2] += 356812;
        result[3] += 42381415;
        result[4] += 0;
        result[5] += 66076;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 42798906;
        result[1] += 27977;
        result[2] += 108800;
        result[3] += 9325;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4662;
      } else {
        result[0] += 16987557;
        result[1] += 961559;
        result[2] += 0;
        result[3] += 25000555;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17478608;
        result[1] += 0;
        result[2] += 391020;
        result[3] += 25025301;
        result[4] += 0;
        result[5] += 0;
        result[6] += 54742;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 5932423;
        result[1] += 0;
        result[2] += 0;
        result[3] += 34923452;
        result[4] += 2093796;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2081567;
        result[1] += 555084;
        result[2] += 1040783;
        result[3] += 0;
        result[4] += 39133466;
        result[5] += 138771;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0;
        result[1] += 54366;
        result[2] += 203875;
        result[3] += 24600920;
        result[4] += 18049735;
        result[5] += 40775;
        result[6] += 0;
      } else {
        result[0] += 21713687;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21235985;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42180000))) ) ) {
        result[0] += 0;
        result[1] += 362954;
        result[2] += 0;
        result[3] += 42586717;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42775642;
        result[1] += 23307;
        result[2] += 111876;
        result[3] += 27969;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10876;
      } else {
        result[0] += 28006398;
        result[1] += 0;
        result[2] += 288877;
        result[3] += 14615227;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39169;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 42949672;
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
        result[3] += 39886554;
        result[4] += 3010306;
        result[5] += 52812;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 2670767;
        result[1] += 155277;
        result[2] += 683219;
        result[3] += 0;
        result[4] += 39347241;
        result[5] += 93166;
        result[6] += 0;
      } else {
        result[0] += 964645;
        result[1] += 91870;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41893156;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42927886;
        result[1] += 0;
        result[2] += 21786;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 22385890;
        result[1] += 147898;
        result[2] += 283964;
        result[3] += 20078676;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53243;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 40443909;
        result[1] += 0;
        result[2] += 373666;
        result[3] += 2132097;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42723811;
        result[1] += 0;
        result[2] += 128330;
        result[3] += 56465;
        result[4] += 0;
        result[5] += 0;
        result[6] += 41065;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5937209;
        result[1] += 33076;
        result[2] += 0;
        result[3] += 36863619;
        result[4] += 66152;
        result[5] += 49614;
        result[6] += 0;
      } else {
        result[0] += 84050;
        result[1] += 0;
        result[2] += 1302778;
        result[3] += 0;
        result[4] += 41310693;
        result[5] += 252150;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42550261;
        result[1] += 30373;
        result[2] += 86564;
        result[3] += 274880;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7593;
      } else {
        result[0] += 27987800;
        result[1] += 0;
        result[2] += 161749;
        result[3] += 14784958;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15164;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 6923030;
        result[1] += 302462;
        result[2] += 268855;
        result[3] += 35455324;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 0;
        result[1] += 775420;
        result[2] += 0;
        result[3] += 7194177;
        result[4] += 34980074;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42861841;
        result[5] += 87831;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3962937;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38915331;
        result[4] += 0;
        result[5] += 71404;
        result[6] += 0;
      } else {
        result[0] += 14575680;
        result[1] += 444211;
        result[2] += 694080;
        result[3] += 27041358;
        result[4] += 0;
        result[5] += 194342;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42923273;
        result[1] += 0;
        result[2] += 19799;
        result[3] += 4399;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2199;
      } else {
        result[0] += 38256496;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4693176;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23560257;
        result[1] += 88240;
        result[2] += 329431;
        result[3] += 18954094;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17648;
      } else {
        result[0] += 42299122;
        result[1] += 0;
        result[2] += 169321;
        result[3] += 463405;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17823;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42912849;
        result[1] += 0;
        result[2] += 34657;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2166;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26078153;
        result[1] += 43857;
        result[2] += 307000;
        result[3] += 14034297;
        result[4] += 2435760;
        result[5] += 10120;
        result[6] += 40483;
      } else {
        result[0] += 3025385;
        result[1] += 90041;
        result[2] += 702321;
        result[3] += 38051429;
        result[4] += 1080494;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16541929;
        result[4] += 26407743;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 117029;
        result[1] += 380344;
        result[2] += 0;
        result[3] += 2516125;
        result[4] += 39936174;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42921526;
        result[1] += 0;
        result[2] += 28146;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42932312;
        result[5] += 17360;
        result[6] += 0;
      } else {
        result[0] += 843745;
        result[1] += 345630;
        result[2] += 630267;
        result[3] += 41048705;
        result[4] += 0;
        result[5] += 81324;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 26439222;
        result[1] += 0;
        result[2] += 203919;
        result[3] += 16264340;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42190;
      } else {
        result[0] += 39295200;
        result[1] += 0;
        result[2] += 163489;
        result[3] += 3442898;
        result[4] += 0;
        result[5] += 0;
        result[6] += 48085;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 42280809;
        result[1] += 0;
        result[2] += 6193;
        result[3] += 662669;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6819023;
        result[1] += 0;
        result[2] += 2747964;
        result[3] += 17302000;
        result[4] += 16080683;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 9938543;
        result[1] += 216643;
        result[2] += 0;
        result[3] += 20093730;
        result[4] += 12700754;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29965948;
        result[1] += 0;
        result[2] += 144432;
        result[3] += 12542824;
        result[4] += 258458;
        result[5] += 0;
        result[6] += 38008;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 41951366;
        result[1] += 40471;
        result[2] += 69701;
        result[3] += 872394;
        result[4] += 0;
        result[5] += 6745;
        result[6] += 8993;
      } else {
        result[0] += 4380762;
        result[1] += 90995;
        result[2] += 467974;
        result[3] += 21266847;
        result[4] += 16743092;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16093286;
        result[1] += 0;
        result[2] += 79895;
        result[3] += 21160960;
        result[4] += 5592702;
        result[5] += 0;
        result[6] += 22827;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 8954652;
        result[1] += 136088;
        result[2] += 0;
        result[3] += 33858931;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21945363;
        result[1] += 0;
        result[2] += 1279832;
        result[3] += 19724477;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 18970327;
        result[4] += 23979345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 330844;
        result[2] += 0;
        result[3] += 2195606;
        result[4] += 40423221;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        result[0] += 42920170;
        result[1] += 0;
        result[2] += 26224;
        result[3] += 0;
        result[4] += 1639;
        result[5] += 0;
        result[6] += 1639;
      } else {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 153757;
        result[2] += 0;
        result[3] += 9327971;
        result[4] += 33416690;
        result[5] += 51252;
        result[6] += 0;
      } else {
        result[0] += 25898248;
        result[1] += 21648;
        result[2] += 274208;
        result[3] += 16023143;
        result[4] += 631400;
        result[5] += 36080;
        result[6] += 64944;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 42176799;
        result[1] += 0;
        result[2] += 772873;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2213900;
        result[1] += 383742;
        result[2] += 59037;
        result[3] += 25858359;
        result[4] += 14434632;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15835611;
        result[1] += 208089;
        result[2] += 478605;
        result[3] += 26427366;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5148706;
        result[1] += 0;
        result[2] += 183882;
        result[3] += 36172293;
        result[4] += 1365983;
        result[5] += 78806;
        result[6] += 0;
      } else {
        result[0] += 42671645;
        result[1] += 10995;
        result[2] += 54977;
        result[3] += 204200;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7853;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6540249;
        result[1] += 0;
        result[2] += 295431;
        result[3] += 29227374;
        result[4] += 6866242;
        result[5] += 20374;
        result[6] += 0;
      } else {
        result[0] += 42753827;
        result[1] += 0;
        result[2] += 153270;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42575;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
