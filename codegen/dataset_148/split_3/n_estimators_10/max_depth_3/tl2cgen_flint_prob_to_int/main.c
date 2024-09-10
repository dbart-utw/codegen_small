
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 124347;
        result[2] += 0;
        result[3] += 396420258;
        result[4] += 32703427;
        result[5] += 248695;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 22311518;
        result[1] += 3816443;
        result[2] += 8807178;
        result[3] += 0;
        result[4] += 393974443;
        result[5] += 587145;
        result[6] += 0;
      } else {
        result[0] += 6162756;
        result[1] += 474058;
        result[2] += 0;
        result[3] += 0;
        result[4] += 421911798;
        result[5] += 948116;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6567228;
        result[1] += 15761347;
        result[2] += 0;
        result[3] += 407168153;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 426980273;
        result[1] += 129049;
        result[2] += 494688;
        result[3] += 1763670;
        result[4] += 0;
        result[5] += 0;
        result[6] += 129049;
      } else {
        result[0] += 346244432;
        result[1] += 129757;
        result[2] += 2128020;
        result[3] += 80709053;
        result[4] += 0;
        result[5] += 103805;
        result[6] += 181660;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 429496729;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 428768860;
        result[1] += 0;
        result[2] += 620036;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 107832;
      } else {
        result[0] += 429413064;
        result[1] += 0;
        result[2] += 83665;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 6245160;
        result[1] += 2767741;
        result[2] += 5677418;
        result[3] += 288341905;
        result[4] += 125967728;
        result[5] += 496774;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1317474;
        result[3] += 0;
        result[4] += 428179254;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 422060023;
        result[1] += 53889;
        result[2] += 2425012;
        result[3] += 4634469;
        result[4] += 0;
        result[5] += 53889;
        result[6] += 269445;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 429496729;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 429022219;
        result[1] += 0;
        result[2] += 441784;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32724;
      } else {
        result[0] += 243657103;
        result[1] += 570254;
        result[2] += 3073038;
        result[3] += 172090155;
        result[4] += 9662646;
        result[5] += 285127;
        result[6] += 158404;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1319498;
        result[3] += 0;
        result[4] += 428177231;
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
      result[4] += 429496729;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 58875494;
        result[1] += 6476304;
        result[2] += 2060642;
        result[3] += 362084288;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 411046642;
        result[1] += 0;
        result[2] += 1360102;
        result[3] += 17089984;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 311349154;
        result[1] += 0;
        result[2] += 1590448;
        result[3] += 116254184;
        result[4] += 0;
        result[5] += 75735;
        result[6] += 227206;
      } else {
        result[0] += 26694873;
        result[1] += 1321528;
        result[2] += 0;
        result[3] += 262455539;
        result[4] += 138231870;
        result[5] += 792917;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 88855465;
        result[1] += 859337;
        result[2] += 2921746;
        result[3] += 336000842;
        result[4] += 0;
        result[5] += 859337;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 216583820;
        result[1] += 15907286;
        result[2] += 0;
        result[3] += 197005622;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 395783851;
        result[1] += 320227;
        result[2] += 1387654;
        result[3] += 31951624;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53371;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 429496729;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 78507686;
        result[1] += 4131983;
        result[2] += 0;
        result[3] += 346857059;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 216606049;
        result[1] += 0;
        result[2] += 12632256;
        result[3] += 200258423;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 50351316;
        result[1] += 503513;
        result[2] += 0;
        result[3] += 376124334;
        result[4] += 1258782;
        result[5] += 1258782;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16133944;
        result[3] += 0;
        result[4] += 412806442;
        result[5] += 556342;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 426777805;
        result[1] += 139830;
        result[2] += 621468;
        result[3] += 1817794;
        result[4] += 0;
        result[5] += 0;
        result[6] += 139830;
      } else {
        result[0] += 280576988;
        result[1] += 0;
        result[2] += 1721331;
        result[3] += 146952505;
        result[4] += 0;
        result[5] += 147542;
        result[6] += 98361;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 429496729;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 401639489;
        result[4] += 27733429;
        result[5] += 123809;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1104104;
        result[2] += 6808645;
        result[3] += 0;
        result[4] += 420479874;
        result[5] += 1104104;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 14708792;
        result[2] += 0;
        result[3] += 414787937;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 427990163;
        result[1] += 266787;
        result[2] += 1020070;
        result[3] += 109853;
        result[4] += 0;
        result[5] += 0;
        result[6] += 109853;
      } else {
        result[0] += 273483161;
        result[1] += 0;
        result[2] += 1790551;
        result[3] += 154081657;
        result[4] += 0;
        result[5] += 47119;
        result[6] += 94239;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 423999757;
        result[1] += 0;
        result[2] += 4397577;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1099394;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 429235345;
        result[1] += 0;
        result[2] += 261383;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 176457;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429143815;
        result[5] += 176457;
        result[6] += 0;
      } else {
        result[0] += 8063270;
        result[1] += 3164068;
        result[2] += 7450870;
        result[3] += 410512320;
        result[4] += 0;
        result[5] += 306200;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 422026293;
        result[1] += 160080;
        result[2] += 2081050;
        result[3] += 4855783;
        result[4] += 0;
        result[5] += 106720;
        result[6] += 266801;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 165573;
        result[3] += 429331156;
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
      result[4] += 429496729;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 85541990;
        result[1] += 4913639;
        result[2] += 0;
        result[3] += 339041100;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 220370049;
        result[1] += 0;
        result[2] += 12367706;
        result[3] += 196758972;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 301183106;
        result[1] += 0;
        result[2] += 3085334;
        result[3] += 113431420;
        result[4] += 11524632;
        result[5] += 272235;
        result[6] += 0;
      } else {
        result[0] += 422534659;
        result[1] += 227404;
        result[2] += 314867;
        result[3] += 6279856;
        result[4] += 52477;
        result[5] += 34985;
        result[6] += 52477;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 60611680;
        result[1] += 0;
        result[2] += 4231010;
        result[3] += 300598512;
        result[4] += 63465152;
        result[5] += 590373;
        result[6] += 0;
      } else {
        result[0] += 427316543;
        result[1] += 0;
        result[2] += 1173946;
        result[3] += 670826;
        result[4] += 0;
        result[5] += 0;
        result[6] += 335413;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 429496729;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 429437365;
        result[1] += 0;
        result[2] += 59363;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 427937353;
        result[1] += 0;
        result[2] += 1559376;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 391110360;
        result[1] += 577633;
        result[2] += 1575363;
        result[3] += 35655737;
        result[4] += 0;
        result[5] += 52512;
        result[6] += 525121;
      } else {
        result[0] += 49538905;
        result[1] += 1595455;
        result[2] += 3749321;
        result[3] += 235808382;
        result[4] += 138565345;
        result[5] += 239318;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 1141140;
        result[2] += 0;
        result[3] += 427785018;
        result[4] += 427927;
        result[5] += 142642;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18590156;
        result[3] += 0;
        result[4] += 410265532;
        result[5] += 641039;
        result[6] += 0;
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
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 71582788;
        result[1] += 0;
        result[2] += 0;
        result[3] += 357352066;
        result[4] += 0;
        result[5] += 561874;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 420906794;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8589934;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 963429;
        result[2] += 5202517;
        result[3] += 0;
        result[4] += 421981981;
        result[5] += 1348800;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41300000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 415259268;
        result[1] += 14237460;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 429496729;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 427830142;
        result[1] += 186907;
        result[2] += 1059139;
        result[3] += 311511;
        result[4] += 0;
        result[5] += 0;
        result[6] += 109029;
      } else {
        result[0] += 276013906;
        result[1] += 0;
        result[2] += 1842927;
        result[3] += 151403622;
        result[4] += 0;
        result[5] += 0;
        result[6] += 236272;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
