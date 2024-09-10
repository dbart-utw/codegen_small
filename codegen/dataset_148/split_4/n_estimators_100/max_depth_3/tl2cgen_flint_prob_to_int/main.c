
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42531525;
        result[1] += 0;
        result[2] += 328544;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 89602;
      } else {
        result[0] += 42934097;
        result[1] += 0;
        result[2] += 15575;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 637340;
        result[1] += 233691;
        result[2] += 403649;
        result[3] += 28397063;
        result[4] += 13263765;
        result[5] += 14163;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 26930568;
        result[1] += 0;
        result[2] += 151643;
        result[3] += 15777852;
        result[4] += 0;
        result[5] += 0;
        result[6] += 89607;
      } else {
        result[0] += 39461276;
        result[1] += 0;
        result[2] += 240911;
        result[3] += 3208938;
        result[4] += 0;
        result[5] += 19272;
        result[6] += 19272;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f800000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 12366;
        result[2] += 0;
        result[3] += 40216624;
        result[4] += 2695948;
        result[5] += 24733;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 228861;
        result[2] += 438651;
        result[3] += 0;
        result[4] += 42244016;
        result[5] += 38143;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42823752;
        result[1] += 21763;
        result[2] += 85501;
        result[3] += 4663;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13991;
      } else {
        result[0] += 0;
        result[1] += 1160801;
        result[2] += 0;
        result[3] += 41788870;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7965659;
        result[1] += 0;
        result[2] += 190191;
        result[3] += 34771446;
        result[4] += 0;
        result[5] += 22375;
        result[6] += 0;
      } else {
        result[0] += 42672157;
        result[1] += 0;
        result[2] += 138757;
        result[3] += 48973;
        result[4] += 0;
        result[5] += 0;
        result[6] += 89784;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
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
        result[1] += 150078;
        result[2] += 286513;
        result[3] += 42444864;
        result[4] += 0;
        result[5] += 68217;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 42827931;
        result[1] += 26533;
        result[2] += 82721;
        result[3] += 1560;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10925;
      } else {
        result[0] += 14858851;
        result[1] += 867670;
        result[2] += 0;
        result[3] += 27223151;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8369679;
        result[1] += 0;
        result[2] += 242280;
        result[3] += 34326700;
        result[4] += 0;
        result[5] += 11012;
        result[6] += 0;
      } else {
        result[0] += 42609894;
        result[1] += 0;
        result[2] += 194159;
        result[3] += 80899;
        result[4] += 0;
        result[5] += 0;
        result[6] += 64719;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 13935;
        result[1] += 0;
        result[2] += 153292;
        result[3] += 41876627;
        result[4] += 822203;
        result[5] += 83613;
        result[6] += 0;
      } else {
        result[0] += 22501638;
        result[1] += 0;
        result[2] += 322709;
        result[3] += 0;
        result[4] += 20125324;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 451238;
        result[2] += 0;
        result[3] += 6727551;
        result[4] += 35770883;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42645353;
        result[1] += 0;
        result[2] += 223167;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 81151;
      } else {
        result[0] += 42936799;
        result[1] += 0;
        result[2] += 12873;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 22775702;
        result[1] += 56253;
        result[2] += 168760;
        result[3] += 19920828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28126;
      } else {
        result[0] += 37173816;
        result[1] += 108831;
        result[2] += 443100;
        result[3] += 5177281;
        result[4] += 0;
        result[5] += 7773;
        result[6] += 38868;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 21369788;
        result[1] += 0;
        result[2] += 360164;
        result[3] += 21159692;
        result[4] += 60027;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7302778;
        result[1] += 466844;
        result[2] += 333460;
        result[3] += 34846590;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 93981;
        result[1] += 1127781;
        result[2] += 0;
        result[3] += 20675991;
        result[4] += 21051918;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 731058;
        result[4] += 42218614;
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
        result[0] += 42926599;
        result[1] += 0;
        result[2] += 21425;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1648;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 95976;
        result[1] += 191953;
        result[2] += 0;
        result[3] += 9693669;
        result[4] += 32872096;
        result[5] += 95976;
        result[6] += 0;
      } else {
        result[0] += 25901989;
        result[1] += 43104;
        result[2] += 305320;
        result[3] += 16149680;
        result[4] += 495697;
        result[5] += 10776;
        result[6] += 43104;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 25301;
        result[1] += 12650;
        result[2] += 0;
        result[3] += 40229737;
        result[4] += 2644029;
        result[5] += 37952;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 42444382;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 505290;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 112827;
        result[2] += 601746;
        result[3] += 0;
        result[4] += 42159880;
        result[5] += 75218;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42332579;
        result[1] += 0;
        result[2] += 617093;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42929026;
        result[1] += 0;
        result[2] += 18925;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1720;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 38971076;
        result[1] += 91076;
        result[2] += 402653;
        result[3] += 3436932;
        result[4] += 0;
        result[5] += 4793;
        result[6] += 43141;
      } else {
        result[0] += 0;
        result[1] += 92199;
        result[2] += 199765;
        result[3] += 42657707;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42778302;
        result[1] += 0;
        result[2] += 149948;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21421;
      } else {
        result[0] += 42937280;
        result[1] += 0;
        result[2] += 12392;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 25715037;
        result[1] += 58084;
        result[2] += 165957;
        result[3] += 12845072;
        result[4] += 4065946;
        result[5] += 24893;
        result[6] += 74680;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1021873;
        result[3] += 36756497;
        result[4] += 5171301;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 23131047;
        result[1] += 149082;
        result[2] += 228282;
        result[3] += 17009356;
        result[4] += 2394634;
        result[5] += 13976;
        result[6] += 23294;
      } else {
        result[0] += 0;
        result[1] += 59281;
        result[2] += 0;
        result[3] += 4683263;
        result[4] += 38207127;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 14840073;
        result[1] += 176285;
        result[2] += 272441;
        result[3] += 27628819;
        result[4] += 32051;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 125829;
        result[1] += 0;
        result[2] += 377487;
        result[3] += 9353297;
        result[4] += 33093058;
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
        result[0] += 687194;
        result[1] += 4810363;
        result[2] += 0;
        result[3] += 37452114;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 42223314;
        result[1] += 33254;
        result[2] += 22753;
        result[3] += 649347;
        result[4] += 14002;
        result[5] += 3500;
        result[6] += 3500;
      } else {
        result[0] += 30457484;
        result[1] += 0;
        result[2] += 293202;
        result[3] += 10848479;
        result[4] += 1306082;
        result[5] += 17769;
        result[6] += 26654;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 16228700;
        result[1] += 0;
        result[2] += 294175;
        result[3] += 21286890;
        result[4] += 5139905;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38671161;
        result[1] += 0;
        result[2] += 277691;
        result[3] += 3753982;
        result[4] += 143988;
        result[5] += 51424;
        result[6] += 51424;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
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
        result[3] += 41703365;
        result[4] += 1230329;
        result[5] += 15978;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42931821;
        result[5] += 17851;
        result[6] += 0;
      } else {
        result[0] += 21777298;
        result[1] += 5444324;
        result[2] += 13308349;
        result[3] += 1209849;
        result[4] += 0;
        result[5] += 1209849;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42845096;
        result[1] += 0;
        result[2] += 31373;
        result[3] += 73203;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5726623;
        result[1] += 5726623;
        result[2] += 0;
        result[3] += 31496426;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 36537014;
        result[1] += 77299;
        result[2] += 267328;
        result[3] += 6026159;
        result[4] += 0;
        result[5] += 6441;
        result[6] += 35429;
      } else {
        result[0] += 21022840;
        result[1] += 0;
        result[2] += 150665;
        result[3] += 21776167;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[1] += 36835;
        result[2] += 0;
        result[3] += 40285270;
        result[4] += 2603010;
        result[5] += 24556;
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
        result[0] += 29706857;
        result[1] += 3221225;
        result[2] += 8947848;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1073741;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 42816176;
        result[1] += 18846;
        result[2] += 81668;
        result[3] += 12564;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20417;
      } else {
        result[0] += 16048149;
        result[1] += 1576985;
        result[2] += 0;
        result[3] += 25324537;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 8061785;
        result[1] += 0;
        result[2] += 225429;
        result[3] += 34640988;
        result[4] += 0;
        result[5] += 21469;
        result[6] += 0;
      } else {
        result[0] += 42742226;
        result[1] += 0;
        result[2] += 182552;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24893;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
        result[0] += 12636210;
        result[1] += 0;
        result[2] += 0;
        result[3] += 22146975;
        result[4] += 8166487;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 463485;
        result[1] += 1544952;
        result[2] += 0;
        result[3] += 8806227;
        result[4] += 32135007;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 14685706;
        result[1] += 192599;
        result[2] += 505573;
        result[3] += 27565793;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 33606;
        result[2] += 0;
        result[3] += 3427908;
        result[4] += 39488157;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42898588;
        result[1] += 0;
        result[2] += 51084;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42939817;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9855;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 34161643;
        result[1] += 53407;
        result[2] += 364144;
        result[3] += 7637331;
        result[4] += 631184;
        result[5] += 19421;
        result[6] += 82539;
      } else {
        result[0] += 0;
        result[1] += 46888;
        result[2] += 234441;
        result[3] += 34322227;
        result[4] += 8310949;
        result[5] += 35166;
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
        result[4] += 42872564;
        result[5] += 77108;
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
        result[0] += 13297;
        result[1] += 79782;
        result[2] += 252645;
        result[3] += 42550759;
        result[4] += 0;
        result[5] += 53188;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 27029841;
        result[1] += 67743;
        result[2] += 135487;
        result[3] += 15716599;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42796343;
        result[1] += 31614;
        result[2] += 66390;
        result[3] += 36356;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18968;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 9224235;
        result[1] += 0;
        result[2] += 161262;
        result[3] += 33553424;
        result[4] += 0;
        result[5] += 10750;
        result[6] += 0;
      } else {
        result[0] += 42680983;
        result[1] += 0;
        result[2] += 179126;
        result[3] += 56994;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32568;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
        result[0] += 42931595;
        result[1] += 0;
        result[2] += 16434;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1643;
      } else {
        result[0] += 32212254;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10737418;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 30084017;
        result[1] += 92532;
        result[2] += 284998;
        result[3] += 12188320;
        result[4] += 240583;
        result[5] += 33311;
        result[6] += 25908;
      } else {
        result[0] += 0;
        result[1] += 92315;
        result[2] += 265406;
        result[3] += 34745154;
        result[4] += 7800639;
        result[5] += 46157;
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
        result[0] += 668998;
        result[1] += 1739394;
        result[2] += 0;
        result[3] += 40541280;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 130249;
        result[1] += 97686;
        result[2] += 309341;
        result[3] += 29631692;
        result[4] += 12780702;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42767875;
        result[1] += 0;
        result[2] += 181797;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 132152;
        result[1] += 1057222;
        result[2] += 0;
        result[3] += 10572227;
        result[4] += 31188070;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1463361;
        result[4] += 41486311;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
        result[0] += 42329762;
        result[1] += 34826;
        result[2] += 27861;
        result[3] += 545033;
        result[4] += 8706;
        result[5] += 1741;
        result[6] += 1741;
      } else {
        result[0] += 30430829;
        result[1] += 0;
        result[2] += 417590;
        result[3] += 10999523;
        result[4] += 1057304;
        result[5] += 26654;
        result[6] += 17769;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19370407;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23579265;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35439403;
        result[1] += 0;
        result[2] += 525409;
        result[3] += 0;
        result[4] += 6830326;
        result[5] += 30906;
        result[6] += 123625;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
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
        result[3] += 25309628;
        result[4] += 17640044;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 41696955;
        result[1] += 23918;
        result[2] += 47836;
        result[3] += 1171993;
        result[4] += 0;
        result[5] += 4484;
        result[6] += 4484;
      } else {
        result[0] += 4725880;
        result[1] += 183367;
        result[2] += 500093;
        result[3] += 22704232;
        result[4] += 14827764;
        result[5] += 8334;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 11436012;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31513660;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26241562;
        result[1] += 0;
        result[2] += 761693;
        result[3] += 0;
        result[4] += 15946417;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 39899483;
        result[1] += 0;
        result[2] += 236282;
        result[3] += 2727986;
        result[4] += 0;
        result[5] += 0;
        result[6] += 85920;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40933984;
        result[4] += 1550529;
        result[5] += 465158;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42928277;
        result[1] += 0;
        result[2] += 21395;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26289239;
        result[1] += 47282;
        result[2] += 212772;
        result[3] += 14022728;
        result[4] += 2337121;
        result[5] += 6754;
        result[6] += 33773;
      } else {
        result[0] += 301113;
        result[1] += 0;
        result[2] += 739095;
        result[3] += 33861533;
        result[4] += 7911061;
        result[5] += 136869;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 8737085;
        result[1] += 337220;
        result[2] += 122625;
        result[3] += 33752740;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 75130;
        result[1] += 250435;
        result[2] += 0;
        result[3] += 3906792;
        result[4] += 38717314;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 35244935;
        result[1] += 0;
        result[2] += 120590;
        result[3] += 7245190;
        result[4] += 312882;
        result[5] += 9777;
        result[6] += 16295;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 2881019;
        result[1] += 0;
        result[2] += 224760;
        result[3] += 25581822;
        result[4] += 14200771;
        result[5] += 61298;
        result[6] += 0;
      } else {
        result[0] += 39346419;
        result[1] += 15501;
        result[2] += 86119;
        result[3] += 3491297;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10334;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 527452;
        result[2] += 37675;
        result[3] += 42384545;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41665463;
        result[1] += 0;
        result[2] += 1284209;
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
        result[3] += 15362767;
        result[4] += 27586905;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 91188;
        result[1] += 334356;
        result[2] += 0;
        result[3] += 2370894;
        result[4] += 40153232;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 14994079;
        result[1] += 234526;
        result[2] += 484688;
        result[3] += 27205107;
        result[4] += 31270;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3805667;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39144005;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 15990809;
        result[4] += 26958863;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30590;
        result[1] += 275318;
        result[2] += 0;
        result[3] += 2171956;
        result[4] += 40471807;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 42796421;
        result[1] += 2070;
        result[2] += 22780;
        result[3] += 126328;
        result[4] += 2070;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 183741;
        result[1] += 137806;
        result[2] += 872774;
        result[3] += 10197676;
        result[4] += 31465803;
        result[5] += 91870;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 34406926;
        result[1] += 46103;
        result[2] += 168142;
        result[3] += 8276971;
        result[4] += 0;
        result[5] += 13559;
        result[6] += 37967;
      } else {
        result[0] += 1089767;
        result[1] += 0;
        result[2] += 737195;
        result[3] += 36314910;
        result[4] += 4679591;
        result[5] += 128207;
        result[6] += 0;
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
        result[1] += 12363;
        result[2] += 0;
        result[3] += 39883605;
        result[4] += 3004251;
        result[5] += 49452;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 17412029;
        result[1] += 4643207;
        result[2] += 0;
        result[3] += 0;
        result[4] += 20314034;
        result[5] += 580400;
        result[6] += 0;
      } else {
        result[0] += 1079524;
        result[1] += 0;
        result[2] += 346990;
        result[3] += 0;
        result[4] += 41446048;
        result[5] += 77108;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 35859702;
        result[1] += 0;
        result[2] += 75375;
        result[3] += 7000462;
        result[4] += 0;
        result[5] += 14132;
        result[6] += 0;
      } else {
        result[0] += 38003387;
        result[1] += 63854;
        result[2] += 120341;
        result[3] += 4744897;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17191;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 42638337;
        result[1] += 0;
        result[2] += 141073;
        result[3] += 131344;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38916;
      } else {
        result[0] += 40758632;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2191040;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 36537226;
        result[1] += 0;
        result[2] += 291474;
        result[3] += 6120971;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1786186;
        result[1] += 172529;
        result[2] += 274017;
        result[3] += 22865220;
        result[4] += 17851718;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 33860523;
        result[1] += 0;
        result[2] += 241000;
        result[3] += 8796506;
        result[4] += 0;
        result[5] += 17214;
        result[6] += 34428;
      } else {
        result[0] += 42284715;
        result[1] += 19098;
        result[2] += 26042;
        result[3] += 604191;
        result[4] += 8680;
        result[5] += 1736;
        result[6] += 5208;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 19998107;
        result[1] += 0;
        result[2] += 498173;
        result[3] += 1174266;
        result[4] += 21279125;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 754706;
        result[1] += 0;
        result[2] += 150941;
        result[3] += 41810751;
        result[4] += 219551;
        result[5] += 13721;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 42911831;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37841;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42036872;
        result[1] += 0;
        result[2] += 744653;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 168147;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42725392;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 224280;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40303;
        result[1] += 13434;
        result[2] += 376162;
        result[3] += 29837730;
        result[4] += 12601436;
        result[5] += 80606;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42917842;
        result[1] += 0;
        result[2] += 26804;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5025;
      } else {
        result[0] += 30158123;
        result[1] += 69435;
        result[2] += 262311;
        result[3] += 12417369;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42432;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 493674;
        result[1] += 2468372;
        result[2] += 0;
        result[3] += 39987626;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8694154;
        result[1] += 274263;
        result[2] += 356542;
        result[3] += 33624712;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42628403;
        result[1] += 0;
        result[2] += 281110;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40158;
      } else {
        result[0] += 42942557;
        result[1] += 0;
        result[2] += 7115;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 31889387;
        result[1] += 37253;
        result[2] += 327006;
        result[3] += 9549430;
        result[4] += 1080364;
        result[5] += 16557;
        result[6] += 49671;
      } else {
        result[0] += 3898049;
        result[1] += 298755;
        result[2] += 85358;
        result[3] += 18195638;
        result[4] += 20471871;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b00000))) ) ) {
        result[0] += 0;
        result[1] += 69340;
        result[2] += 277363;
        result[3] += 42602969;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 654357;
        result[3] += 0;
        result[4] += 42235827;
        result[5] += 59487;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
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
        result[4] += 42915022;
        result[5] += 34650;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 5360007;
        result[1] += 139220;
        result[2] += 243636;
        result[3] += 37102391;
        result[4] += 0;
        result[5] += 104415;
        result[6] += 0;
      } else {
        result[0] += 9231886;
        result[1] += 106992;
        result[2] += 198699;
        result[3] += 33320386;
        result[4] += 0;
        result[5] += 91707;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42754910;
        result[1] += 23185;
        result[2] += 89652;
        result[3] += 75740;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6182;
      } else {
        result[0] += 0;
        result[1] += 2008437;
        result[2] += 0;
        result[3] += 40941235;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19085312;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23864360;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42411038;
        result[1] += 0;
        result[2] += 436037;
        result[3] += 12824;
        result[4] += 0;
        result[5] += 25649;
        result[6] += 64123;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 9515144;
        result[1] += 126989;
        result[2] += 0;
        result[3] += 31076151;
        result[4] += 2186034;
        result[5] += 45353;
        result[6] += 0;
      } else {
        result[0] += 42761675;
        result[1] += 67888;
        result[2] += 109665;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10444;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 42933924;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 11811;
        result[5] += 3937;
        result[6] += 0;
      } else {
        result[0] += 4525929;
        result[1] += 0;
        result[2] += 793204;
        result[3] += 1819703;
        result[4] += 35810835;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 13791559;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29158113;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 31963249;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10986423;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 42049799;
        result[1] += 0;
        result[2] += 604200;
        result[3] += 25710;
        result[4] += 128553;
        result[5] += 77132;
        result[6] += 64276;
      } else {
        result[0] += 65372;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42884300;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 42926694;
        result[1] += 0;
        result[2] += 18054;
        result[3] += 0;
        result[4] += 1641;
        result[5] += 0;
        result[6] += 3282;
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
        result[0] += 26192204;
        result[1] += 84480;
        result[2] += 158822;
        result[3] += 14375130;
        result[4] += 2105243;
        result[5] += 13516;
        result[6] += 20275;
      } else {
        result[0] += 315384;
        result[1] += 0;
        result[2] += 745454;
        result[3] += 32914702;
        result[4] += 8802102;
        result[5] += 172028;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 460409;
        result[2] += 0;
        result[3] += 42489262;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41523300;
        result[1] += 0;
        result[2] += 1426372;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 34071675;
        result[1] += 0;
        result[2] += 94446;
        result[3] += 8523821;
        result[4] += 118058;
        result[5] += 118058;
        result[6] += 23611;
      } else {
        result[0] += 42280214;
        result[1] += 24343;
        result[2] += 19127;
        result[3] += 605120;
        result[4] += 12171;
        result[5] += 5216;
        result[6] += 3477;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 24226126;
        result[1] += 0;
        result[2] += 424695;
        result[3] += 16027650;
        result[4] += 2271199;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3404639;
        result[1] += 271165;
        result[2] += 75323;
        result[3] += 16752029;
        result[4] += 22446514;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 88347;
        result[1] += 0;
        result[2] += 302906;
        result[3] += 34253720;
        result[4] += 8304697;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 36399466;
        result[1] += 0;
        result[2] += 305450;
        result[3] += 5888398;
        result[4] += 152725;
        result[5] += 84847;
        result[6] += 118786;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
        result[0] += 42912769;
        result[1] += 0;
        result[2] += 36903;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42942957;
        result[1] += 0;
        result[2] += 6715;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26129688;
        result[1] += 0;
        result[2] += 473088;
        result[3] += 14648845;
        result[4] += 1613569;
        result[5] += 0;
        result[6] += 84480;
      } else {
        result[0] += 2488672;
        result[1] += 267599;
        result[2] += 53519;
        result[3] += 27161319;
        result[4] += 12898281;
        result[5] += 80279;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 25188456;
        result[1] += 243037;
        result[2] += 213873;
        result[3] += 16691848;
        result[4] += 573569;
        result[5] += 9721;
        result[6] += 29164;
      } else {
        result[0] += 15414643;
        result[1] += 6906;
        result[2] += 276248;
        result[3] += 15359394;
        result[4] += 11857949;
        result[5] += 34531;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        result[0] += 42915131;
        result[1] += 0;
        result[2] += 29606;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4934;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 22888789;
        result[1] += 72421;
        result[2] += 206919;
        result[3] += 18884889;
        result[4] += 865614;
        result[5] += 10345;
        result[6] += 20691;
      } else {
        result[0] += 25508783;
        result[1] += 0;
        result[2] += 1020351;
        result[3] += 94916;
        result[4] += 16112059;
        result[5] += 71187;
        result[6] += 142374;
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
        result[0] += 6139766;
        result[1] += 659881;
        result[2] += 200833;
        result[3] += 35949191;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 13850103;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6422716;
        result[4] += 22676853;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 18393;
        result[2] += 533422;
        result[3] += 37449907;
        result[4] += 4911161;
        result[5] += 36787;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 37914705;
        result[1] += 14519;
        result[2] += 114541;
        result[3] += 4901066;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4839;
      } else {
        result[0] += 42315589;
        result[1] += 0;
        result[2] += 121777;
        result[3] += 478711;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33593;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 913822;
        result[2] += 101535;
        result[3] += 41934314;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42121061;
        result[1] += 0;
        result[2] += 828611;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42288184;
        result[1] += 8191;
        result[2] += 53246;
        result[3] += 581618;
        result[4] += 8191;
        result[5] += 4095;
        result[6] += 6143;
      } else {
        result[0] += 30559243;
        result[1] += 16031;
        result[2] += 235899;
        result[3] += 11526993;
        result[4] += 567990;
        result[5] += 20612;
        result[6] += 22902;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 8102773;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24706004;
        result[4] += 10140895;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4304901;
        result[1] += 298031;
        result[2] += 165573;
        result[3] += 22120571;
        result[4] += 16060594;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 385775;
        result[1] += 1671693;
        result[2] += 0;
        result[3] += 8615652;
        result[4] += 32276550;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1464193;
        result[4] += 41485479;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        result[0] += 40352656;
        result[1] += 0;
        result[2] += 127617;
        result[3] += 1607980;
        result[4] += 842275;
        result[5] += 19142;
        result[6] += 0;
      } else {
        result[0] += 24935765;
        result[1] += 52537;
        result[2] += 105075;
        result[3] += 15058654;
        result[4] += 2784504;
        result[5] += 6567;
        result[6] += 6567;
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
        result[0] += 15454155;
        result[1] += 0;
        result[2] += 321961;
        result[3] += 17128355;
        result[4] += 9852023;
        result[5] += 0;
        result[6] += 193176;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42248561;
        result[1] += 8800;
        result[2] += 17601;
        result[3] += 574970;
        result[4] += 99739;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35088066;
        result[1] += 40663;
        result[2] += 103917;
        result[3] += 7689916;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27108;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 10725081;
        result[1] += 263192;
        result[2] += 345439;
        result[3] += 28326057;
        result[4] += 3257003;
        result[5] += 32899;
        result[6] += 0;
      } else {
        result[0] += 4508408;
        result[1] += 0;
        result[2] += 566273;
        result[3] += 4944003;
        result[4] += 32865647;
        result[5] += 65339;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 42111630;
        result[1] += 0;
        result[2] += 838042;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2750779;
        result[1] += 281329;
        result[2] += 31258;
        result[3] += 25538488;
        result[4] += 14347816;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 41025769;
        result[1] += 0;
        result[2] += 85360;
        result[3] += 728850;
        result[4] += 1076860;
        result[5] += 32831;
        result[6] += 0;
      } else {
        result[0] += 30528256;
        result[1] += 0;
        result[2] += 233459;
        result[3] += 12043761;
        result[4] += 68664;
        result[5] += 27465;
        result[6] += 48065;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
        result[0] += 41565908;
        result[1] += 37518;
        result[2] += 59587;
        result[3] += 1262381;
        result[4] += 6620;
        result[5] += 2206;
        result[6] += 15448;
      } else {
        result[0] += 2444521;
        result[1] += 227397;
        result[2] += 710616;
        result[3] += 21020041;
        result[4] += 18504458;
        result[5] += 42637;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7716798;
        result[1] += 0;
        result[2] += 0;
        result[3] += 28038727;
        result[4] += 7194147;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42678511;
        result[1] += 0;
        result[2] += 129686;
        result[3] += 129686;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11789;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 40271345;
        result[1] += 21775;
        result[2] += 9332;
        result[3] += 615922;
        result[4] += 2031298;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42212953;
        result[1] += 0;
        result[2] += 120954;
        result[3] += 571782;
        result[4] += 43983;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 34175092;
        result[1] += 39009;
        result[2] += 140434;
        result[3] += 8558726;
        result[4] += 0;
        result[5] += 2600;
        result[6] += 33808;
      } else {
        result[0] += 6473363;
        result[1] += 0;
        result[2] += 600058;
        result[3] += 31384900;
        result[4] += 4364064;
        result[5] += 127285;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 6409299;
        result[1] += 405185;
        result[2] += 0;
        result[3] += 36135187;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 133799;
        result[1] += 1471795;
        result[2] += 0;
        result[3] += 8027976;
        result[4] += 33316101;
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
        result[0] += 11532782;
        result[1] += 0;
        result[2] += 1060485;
        result[3] += 30356404;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3450572;
        result[1] += 16589;
        result[2] += 0;
        result[3] += 39382975;
        result[4] += 66357;
        result[5] += 33178;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1399924;
        result[3] += 0;
        result[4] += 41381757;
        result[5] += 167990;
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
        result[1] += 4245025;
        result[2] += 0;
        result[3] += 38704647;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 15789730;
        result[1] += 200887;
        result[2] += 0;
        result[3] += 26959055;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42519853;
        result[1] += 36841;
        result[2] += 90569;
        result[3] += 300873;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1535;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        result[0] += 34291564;
        result[1] += 0;
        result[2] += 431769;
        result[3] += 8135440;
        result[4] += 0;
        result[5] += 0;
        result[6] += 90898;
      } else {
        result[0] += 22411618;
        result[1] += 0;
        result[2] += 110674;
        result[3] += 20427379;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 42904329;
        result[1] += 0;
        result[2] += 36275;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9068;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 530242;
        result[1] += 73136;
        result[2] += 438821;
        result[3] += 29858159;
        result[4] += 11994459;
        result[5] += 54852;
        result[6] += 0;
      } else {
        result[0] += 31529824;
        result[1] += 0;
        result[2] += 265815;
        result[3] += 11000677;
        result[4] += 0;
        result[5] += 20447;
        result[6] += 132907;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 25866408;
        result[1] += 315444;
        result[2] += 167579;
        result[3] += 15969352;
        result[4] += 591457;
        result[5] += 29572;
        result[6] += 9857;
      } else {
        result[0] += 15717461;
        result[1] += 20501;
        result[2] += 307515;
        result[3] += 15136599;
        result[4] += 11753927;
        result[5] += 6833;
        result[6] += 6833;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x457e0000))) ) ) {
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
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39982467;
        result[4] += 2929803;
        result[5] += 37401;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 158412;
        result[2] += 376230;
        result[3] += 0;
        result[4] += 42355624;
        result[5] += 59404;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42903193;
        result[1] += 11066;
        result[2] += 28773;
        result[3] += 4426;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2213;
      } else {
        result[0] += 38336790;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4612882;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23081151;
        result[1] += 160038;
        result[2] += 391205;
        result[3] += 19305421;
        result[4] += 0;
        result[5] += 5927;
        result[6] += 5927;
      } else {
        result[0] += 42283038;
        result[1] += 0;
        result[2] += 131572;
        result[3] += 513133;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21928;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
        result[0] += 3067833;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39881839;
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 66000;
        result[1] += 181500;
        result[2] += 198000;
        result[3] += 42454670;
        result[4] += 0;
        result[5] += 49500;
        result[6] += 0;
      } else {
        result[0] += 41276309;
        result[1] += 0;
        result[2] += 1673363;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42908678;
        result[1] += 0;
        result[2] += 34845;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6149;
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
        result[0] += 36610756;
        result[1] += 95151;
        result[2] += 303579;
        result[3] += 5890344;
        result[4] += 0;
        result[5] += 9062;
        result[6] += 40779;
      } else {
        result[0] += 0;
        result[1] += 93572;
        result[2] += 249526;
        result[3] += 42606574;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42783764;
        result[1] += 0;
        result[2] += 145170;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20738;
      } else {
        result[0] += 42933646;
        result[1] += 0;
        result[2] += 16025;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 29228412;
        result[1] += 83064;
        result[2] += 202470;
        result[3] += 12023624;
        result[4] += 1365377;
        result[5] += 15574;
        result[6] += 31149;
      } else {
        result[0] += 15550743;
        result[1] += 0;
        result[2] += 249281;
        result[3] += 22046716;
        result[4] += 5014949;
        result[5] += 14663;
        result[6] += 73317;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 4382619;
        result[1] += 244611;
        result[2] += 224227;
        result[3] += 23931141;
        result[4] += 14167072;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 734182;
        result[1] += 3670912;
        result[2] += 0;
        result[3] += 38544578;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 40247417;
        result[1] += 9339;
        result[2] += 12452;
        result[3] += 622639;
        result[4] += 2054710;
        result[5] += 3113;
        result[6] += 0;
      } else {
        result[0] += 42263838;
        result[1] += 0;
        result[2] += 98760;
        result[3] += 548667;
        result[4] += 27433;
        result[5] += 0;
        result[6] += 10973;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 14862519;
        result[1] += 63663;
        result[2] += 376193;
        result[3] += 26073073;
        result[4] += 1527922;
        result[5] += 28937;
        result[6] += 17362;
      } else {
        result[0] += 40393009;
        result[1] += 0;
        result[2] += 135952;
        result[3] += 2386722;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33988;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 6505564;
        result[1] += 388391;
        result[2] += 356025;
        result[3] += 35699690;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 80960;
        result[1] += 364323;
        result[2] += 0;
        result[3] += 6314937;
        result[4] += 36189451;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 40023780;
        result[1] += 41636;
        result[2] += 68132;
        result[3] += 2785842;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30280;
      } else {
        result[0] += 42809682;
        result[1] += 7499;
        result[2] += 9999;
        result[3] += 102493;
        result[4] += 7499;
        result[5] += 12499;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 8243280;
        result[1] += 191069;
        result[2] += 696038;
        result[3] += 32973120;
        result[4] += 805221;
        result[5] += 40943;
        result[6] += 0;
      } else {
        result[0] += 62457;
        result[1] += 229009;
        result[2] += 0;
        result[3] += 5891787;
        result[4] += 36766419;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 6358313;
        result[1] += 0;
        result[2] += 440451;
        result[3] += 35970209;
        result[4] += 135523;
        result[5] += 45174;
        result[6] += 0;
      } else {
        result[0] += 42647440;
        result[1] += 0;
        result[2] += 196042;
        result[3] += 49010;
        result[4] += 0;
        result[5] += 0;
        result[6] += 57179;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x445c0000))) ) ) {
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
        result[0] += 313959;
        result[1] += 502335;
        result[2] += 334890;
        result[3] += 41798487;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42458053;
        result[1] += 0;
        result[2] += 491619;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 35894606;
        result[1] += 0;
        result[2] += 166471;
        result[3] += 6778723;
        result[4] += 86565;
        result[5] += 9988;
        result[6] += 13317;
      } else {
        result[0] += 38090744;
        result[1] += 30548;
        result[2] += 91645;
        result[3] += 4565322;
        result[4] += 157834;
        result[5] += 8485;
        result[6] += 5091;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 3171722;
        result[1] += 0;
        result[2] += 665886;
        result[3] += 30034981;
        result[4] += 9006989;
        result[5] += 70093;
        result[6] += 0;
      } else {
        result[0] += 1265707;
        result[1] += 0;
        result[2] += 84380;
        result[3] += 21938929;
        result[4] += 19660655;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16967772;
        result[4] += 25981900;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 368440;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42581232;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42924189;
        result[1] += 0;
        result[2] += 23359;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2123;
      } else {
        result[0] += 30402577;
        result[1] += 804300;
        result[2] += 0;
        result[3] += 11742794;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 34920916;
        result[1] += 39151;
        result[2] += 161827;
        result[3] += 7786014;
        result[4] += 0;
        result[5] += 13050;
        result[6] += 28711;
      } else {
        result[0] += 6140623;
        result[1] += 416313;
        result[2] += 624470;
        result[3] += 35698880;
        result[4] += 0;
        result[5] += 69385;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3793226;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38190897;
        result[4] += 913822;
        result[5] += 51725;
        result[6] += 0;
      } else {
        result[0] += 12237205;
        result[1] += 26544;
        result[2] += 0;
        result[3] += 25854747;
        result[4] += 4831174;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42910874;
        result[5] += 38798;
        result[6] += 0;
      } else {
        result[0] += 30870077;
        result[1] += 3355443;
        result[2] += 8388607;
        result[3] += 0;
        result[4] += 0;
        result[5] += 335544;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42713685;
        result[1] += 0;
        result[2] += 235987;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42934292;
        result[1] += 0;
        result[2] += 15380;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 40534237;
        result[1] += 197178;
        result[2] += 246472;
        result[3] += 1957699;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14084;
      } else {
        result[0] += 17808400;
        result[1] += 0;
        result[2] += 330806;
        result[3] += 24715949;
        result[4] += 0;
        result[5] += 0;
        result[6] += 94516;
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
        result[0] += 280153;
        result[1] += 258603;
        result[2] += 495656;
        result[3] += 41915260;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42634197;
        result[1] += 0;
        result[2] += 315475;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 42108912;
        result[1] += 45583;
        result[2] += 23635;
        result[3] += 747905;
        result[4] += 13506;
        result[5] += 3376;
        result[6] += 6753;
      } else {
        result[0] += 28985386;
        result[1] += 0;
        result[2] += 328330;
        result[3] += 12384198;
        result[4] += 1190196;
        result[5] += 41041;
        result[6] += 20520;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 28430219;
        result[1] += 0;
        result[2] += 237537;
        result[3] += 14168096;
        result[4] += 44538;
        result[5] += 44538;
        result[6] += 24743;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
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
        result[3] += 41507680;
        result[4] += 1410982;
        result[5] += 31010;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 19461570;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3355443;
        result[4] += 20132659;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 249086;
        result[1] += 124543;
        result[2] += 320254;
        result[3] += 0;
        result[4] += 42202412;
        result[5] += 53375;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 20848249;
        result[1] += 0;
        result[2] += 113924;
        result[3] += 21835598;
        result[4] += 0;
        result[5] += 151899;
        result[6] += 0;
      } else {
        result[0] += 27579723;
        result[1] += 143644;
        result[2] += 71822;
        result[3] += 15154483;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42922071;
        result[1] += 0;
        result[2] += 24151;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3450;
      } else {
        result[0] += 30229255;
        result[1] += 116151;
        result[2] += 340959;
        result[3] += 12188370;
        result[4] += 0;
        result[5] += 3746;
        result[6] += 71189;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42819192;
        result[1] += 0;
        result[2] += 65240;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 65240;
      } else {
        result[0] += 42944352;
        result[1] += 0;
        result[2] += 5320;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 31733125;
        result[1] += 28665;
        result[2] += 389036;
        result[3] += 9742302;
        result[4] += 999210;
        result[5] += 36856;
        result[6] += 20475;
      } else {
        result[0] += 0;
        result[1] += 68664;
        result[2] += 286102;
        result[3] += 34240719;
        result[4] += 8331298;
        result[5] += 22888;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 6307054;
        result[1] += 685549;
        result[2] += 0;
        result[3] += 35957068;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 385198;
        result[1] += 577798;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41986675;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 499027;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1031324;
        result[4] += 41419320;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9132156;
        result[1] += 0;
        result[2] += 1141519;
        result[3] += 32675997;
        result[4] += 0;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42904154;
        result[1] += 0;
        result[2] += 39015;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6502;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 8555974;
        result[1] += 150932;
        result[2] += 273564;
        result[3] += 18630705;
        result[4] += 15338495;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34405638;
        result[1] += 52593;
        result[2] += 305997;
        result[3] += 7516073;
        result[4] += 568964;
        result[5] += 43030;
        result[6] += 57374;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 71108;
        result[2] += 0;
        result[3] += 42594129;
        result[4] += 227547;
        result[5] += 56886;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1576713;
        result[3] += 0;
        result[4] += 41372959;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 42887464;
        result[1] += 0;
        result[2] += 62208;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42935226;
        result[1] += 0;
        result[2] += 9631;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4815;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26084061;
        result[1] += 43185;
        result[2] += 285688;
        result[3] += 14214684;
        result[4] += 2272223;
        result[5] += 0;
        result[6] += 49829;
      } else {
        result[0] += 3522188;
        result[1] += 175233;
        result[2] += 630839;
        result[3] += 37640105;
        result[4] += 963782;
        result[5] += 17523;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 14749620;
        result[4] += 28200052;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 59985;
        result[1] += 419899;
        result[2] += 0;
        result[3] += 2159480;
        result[4] += 40310307;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15943737;
        result[1] += 433039;
        result[2] += 0;
        result[3] += 26572895;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 11887647;
        result[1] += 233549;
        result[2] += 326968;
        result[3] += 25690397;
        result[4] += 4811110;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2020728;
        result[1] += 0;
        result[2] += 220443;
        result[3] += 4886489;
        result[4] += 35822011;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        result[0] += 32212254;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10737418;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42925075;
        result[1] += 0;
        result[2] += 24597;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 215827;
        result[1] += 215827;
        result[2] += 0;
        result[3] += 10197849;
        result[4] += 32320168;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 25644812;
        result[1] += 50283;
        result[2] += 276561;
        result[3] += 16450033;
        result[4] += 445372;
        result[5] += 21550;
        result[6] += 61059;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4772185;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38177487;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42915428;
        result[1] += 0;
        result[2] += 34244;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42944758;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4914;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 852860;
        result[1] += 306646;
        result[2] += 555796;
        result[3] += 33798191;
        result[4] += 7359515;
        result[5] += 76661;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 234814;
        result[2] += 0;
        result[3] += 6553454;
        result[4] += 36161404;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42167039;
        result[1] += 0;
        result[2] += 253827;
        result[3] += 481214;
        result[4] += 0;
        result[5] += 5288;
        result[6] += 42304;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 66717;
        result[3] += 42882955;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
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
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 255779;
        result[2] += 383669;
        result[3] += 27794726;
        result[4] += 14451552;
        result[5] += 63944;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 11741;
        result[2] += 164378;
        result[3] += 21697921;
        result[4] += 21016925;
        result[5] += 58706;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 42805489;
        result[1] += 24805;
        result[2] += 82169;
        result[3] += 24805;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12402;
      } else {
        result[0] += 13086228;
        result[1] += 922746;
        result[2] += 0;
        result[3] += 28940697;
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
        result[0] += 17935204;
        result[1] += 0;
        result[2] += 289277;
        result[3] += 24685013;
        result[4] += 0;
        result[5] += 16070;
        result[6] += 24106;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 35419431;
        result[1] += 0;
        result[2] += 115602;
        result[3] += 7164166;
        result[4] += 221572;
        result[5] += 9633;
        result[6] += 19267;
      } else {
        result[0] += 37323822;
        result[1] += 25977;
        result[2] += 107159;
        result[3] += 5135516;
        result[4] += 340960;
        result[5] += 4870;
        result[6] += 11365;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x458d2000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 25769803;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 17179869;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 16418070;
        result[1] += 0;
        result[2] += 1444790;
        result[3] += 25086812;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5797147;
        result[1] += 338519;
        result[2] += 0;
        result[3] += 36814005;
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
        result[0] += 433835;
        result[1] += 1301505;
        result[2] += 0;
        result[3] += 41214332;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 22875;
        result[2] += 251635;
        result[3] += 33799276;
        result[4] += 8807256;
        result[5] += 68627;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 228091;
        result[2] += 0;
        result[3] += 3968796;
        result[4] += 38752785;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 35011107;
        result[1] += 0;
        result[2] += 0;
        result[3] += 7938565;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 137659;
        result[1] += 825955;
        result[2] += 0;
        result[3] += 41986058;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42767458;
        result[1] += 29590;
        result[2] += 99672;
        result[3] += 49836;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3114;
      } else {
        result[0] += 27655399;
        result[1] += 0;
        result[2] += 165659;
        result[3] += 15070146;
        result[4] += 0;
        result[5] += 9744;
        result[6] += 48723;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 21735;
        result[1] += 195620;
        result[2] += 0;
        result[3] += 31647127;
        result[4] += 11063453;
        result[5] += 21735;
        result[6] += 0;
      } else {
        result[0] += 27331610;
        result[1] += 0;
        result[2] += 884041;
        result[3] += 0;
        result[4] += 14734021;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42854845;
        result[1] += 0;
        result[2] += 0;
        result[3] += 94827;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34018791;
        result[1] += 0;
        result[2] += 262267;
        result[3] += 8592695;
        result[4] += 0;
        result[5] += 13803;
        result[6] += 62115;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 11696932;
        result[1] += 182764;
        result[2] += 0;
        result[3] += 23485246;
        result[4] += 7584729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39903786;
        result[1] += 28583;
        result[2] += 53593;
        result[3] += 2960136;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3572;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 10168109;
        result[1] += 335406;
        result[2] += 282447;
        result[3] += 28686074;
        result[4] += 3459981;
        result[5] += 17652;
        result[6] += 0;
      } else {
        result[0] += 3736735;
        result[1] += 0;
        result[2] += 546839;
        result[3] += 4351929;
        result[4] += 34268598;
        result[5] += 45569;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 5424254;
        result[1] += 45968;
        result[2] += 183873;
        result[3] += 33449566;
        result[4] += 3800042;
        result[5] += 45968;
        result[6] += 0;
      } else {
        result[0] += 42544214;
        result[1] += 22864;
        result[2] += 79262;
        result[3] += 294186;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9145;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 17665142;
        result[1] += 0;
        result[2] += 184936;
        result[3] += 20453986;
        result[4] += 4645607;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39743421;
        result[1] += 0;
        result[2] += 293612;
        result[3] += 2548558;
        result[4] += 281868;
        result[5] += 35233;
        result[6] += 46978;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6416155;
        result[1] += 1051828;
        result[2] += 0;
        result[3] += 35481689;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 305088;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1288151;
        result[4] += 41356433;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8817482;
        result[1] += 0;
        result[2] += 1422174;
        result[3] += 32710015;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42733519;
        result[1] += 0;
        result[2] += 86461;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 129692;
      } else {
        result[0] += 42940810;
        result[1] += 0;
        result[2] += 8862;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 32031310;
        result[1] += 32899;
        result[2] += 304315;
        result[3] += 9462581;
        result[4] += 1044543;
        result[5] += 24674;
        result[6] += 49348;
      } else {
        result[0] += 0;
        result[1] += 92638;
        result[2] += 370555;
        result[3] += 34704817;
        result[4] += 7758501;
        result[5] += 23159;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 6633885;
        result[1] += 265355;
        result[2] += 0;
        result[3] += 19598394;
        result[4] += 16452037;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2155026;
        result[1] += 452555;
        result[2] += 107751;
        result[3] += 15753241;
        result[4] += 24481098;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42724591;
        result[1] += 0;
        result[2] += 225081;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42942590;
        result[1] += 0;
        result[2] += 5312;
        result[3] += 0;
        result[4] += 1770;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 23043272;
        result[1] += 45360;
        result[2] += 198889;
        result[3] += 18650256;
        result[4] += 963044;
        result[5] += 20935;
        result[6] += 27914;
      } else {
        result[0] += 25474584;
        result[1] += 0;
        result[2] += 928512;
        result[3] += 95232;
        result[4] += 16213263;
        result[5] += 119040;
        result[6] += 119040;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 5183581;
        result[1] += 123418;
        result[2] += 41139;
        result[3] += 23819789;
        result[4] += 13781743;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 638317;
        result[2] += 0;
        result[3] += 4422630;
        result[4] += 37888724;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 10737418;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32212254;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 379271;
        result[3] += 33996556;
        result[4] += 8516378;
        result[5] += 57465;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 250501;
        result[2] += 0;
        result[3] += 4053574;
        result[4] += 38645596;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 42828210;
        result[1] += 9166;
        result[2] += 32084;
        result[3] += 73335;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6875;
      } else {
        result[0] += 41587392;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1362280;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23199135;
        result[1] += 86071;
        result[2] += 384452;
        result[3] += 19268537;
        result[4] += 0;
        result[5] += 5738;
        result[6] += 5738;
      } else {
        result[0] += 42345617;
        result[1] += 0;
        result[2] += 145502;
        result[3] += 432098;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26454;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42717169;
        result[1] += 0;
        result[2] += 147956;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 84546;
      } else {
        result[0] += 42946118;
        result[1] += 0;
        result[2] += 3554;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4635bc00))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 8554978;
        result[1] += 101187;
        result[2] += 229972;
        result[3] += 18397803;
        result[4] += 15665729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33970463;
        result[1] += 81498;
        result[2] += 345169;
        result[3] += 7876583;
        result[4] += 608841;
        result[5] += 19176;
        result[6] += 47940;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 71966;
        result[2] += 0;
        result[3] += 42647413;
        result[4] += 187113;
        result[5] += 43179;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1625460;
        result[3] += 0;
        result[4] += 41324212;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 1887897;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41061775;
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
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 3081590;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39771782;
        result[4] += 80249;
        result[5] += 16049;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 561274;
        result[3] += 0;
        result[4] += 42363995;
        result[5] += 24403;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 101296;
        result[2] += 0;
        result[3] += 42696431;
        result[4] += 0;
        result[5] += 151944;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42912136;
        result[1] += 0;
        result[2] += 29005;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8530;
      } else {
        result[0] += 30363132;
        result[1] += 121316;
        result[2] += 367739;
        result[3] += 12055782;
        result[4] += 0;
        result[5] += 7582;
        result[6] += 34120;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
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
        result[0] += 42923285;
        result[1] += 0;
        result[2] += 21440;
        result[3] += 0;
        result[4] += 3298;
        result[5] += 0;
        result[6] += 1649;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 38827491;
        result[1] += 90506;
        result[2] += 82279;
        result[3] += 3891799;
        result[4] += 0;
        result[5] += 0;
        result[6] += 57595;
      } else {
        result[0] += 18476806;
        result[1] += 0;
        result[2] += 438938;
        result[3] += 23122924;
        result[4] += 869594;
        result[5] += 0;
        result[6] += 41409;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 102153;
        result[1] += 136204;
        result[2] += 442663;
        result[3] += 35163342;
        result[4] += 6946405;
        result[5] += 158904;
        result[6] += 0;
      } else {
        result[0] += 42482046;
        result[1] += 0;
        result[2] += 359712;
        result[3] += 107913;
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
        result[0] += 445844;
        result[1] += 1486147;
        result[2] += 0;
        result[3] += 41017680;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42687292;
        result[1] += 0;
        result[2] += 141281;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 121098;
      } else {
        result[0] += 42942581;
        result[1] += 0;
        result[2] += 5318;
        result[3] += 0;
        result[4] += 1772;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 18068;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42913535;
        result[5] += 18068;
        result[6] += 0;
      } else {
        result[0] += 918263;
        result[1] += 406957;
        result[2] += 740871;
        result[3] += 40831406;
        result[4] += 0;
        result[5] += 52174;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42189266;
        result[1] += 0;
        result[2] += 260558;
        result[3] += 457307;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42540;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 83462;
        result[3] += 42866210;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 16929962;
        result[1] += 196005;
        result[2] += 245006;
        result[3] += 25578698;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8124646;
        result[1] += 393705;
        result[2] += 286331;
        result[3] += 34144989;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 4168111;
        result[1] += 40271;
        result[2] += 463123;
        result[3] += 26518855;
        result[4] += 11638495;
        result[5] += 120814;
        result[6] += 0;
      } else {
        result[0] += 1143938;
        result[1] += 0;
        result[2] += 103994;
        result[3] += 16847087;
        result[4] += 24854653;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 40274633;
        result[1] += 21572;
        result[2] += 135320;
        result[3] += 2482844;
        result[4] += 0;
        result[5] += 9805;
        result[6] += 25495;
      } else {
        result[0] += 37404422;
        result[1] += 0;
        result[2] += 56493;
        result[3] += 5488757;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 23860;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42878090;
        result[5] += 47721;
        result[6] += 0;
      } else {
        result[0] += 10530795;
        result[1] += 157869;
        result[2] += 83577;
        result[3] += 32158857;
        result[4] += 0;
        result[5] += 18572;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 4090445;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38859227;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42689618;
        result[1] += 25065;
        result[2] += 120627;
        result[3] += 106528;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7832;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 36308826;
        result[1] += 0;
        result[2] += 348644;
        result[3] += 6026567;
        result[4] += 83010;
        result[5] += 66408;
        result[6] += 116214;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 334769;
        result[3] += 33799309;
        result[4] += 8803195;
        result[5] += 12398;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42300232;
        result[1] += 0;
        result[2] += 12370;
        result[3] += 630885;
        result[4] += 0;
        result[5] += 6185;
        result[6] += 0;
      } else {
        result[0] += 11171880;
        result[1] += 0;
        result[2] += 1820602;
        result[3] += 15806141;
        result[4] += 14151048;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 230686;
        result[1] += 167772;
        result[2] += 62914;
        result[3] += 32736542;
        result[4] += 9709813;
        result[5] += 41943;
        result[6] += 0;
      } else {
        result[0] += 35137619;
        result[1] += 0;
        result[2] += 216078;
        result[3] += 7529489;
        result[4] += 0;
        result[5] += 8310;
        result[6] += 58174;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42882395;
        result[1] += 0;
        result[2] += 67277;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16895643;
        result[1] += 365151;
        result[2] += 532923;
        result[3] += 15918617;
        result[4] += 9158386;
        result[5] += 59213;
        result[6] += 19737;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 9467640;
        result[1] += 66830;
        result[2] += 0;
        result[3] += 18133316;
        result[4] += 15281885;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37026493;
        result[1] += 0;
        result[2] += 23189;
        result[3] += 5051928;
        result[4] += 838123;
        result[5] += 0;
        result[6] += 9938;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 5536132;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35687219;
        result[4] += 1726320;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1210853;
        result[1] += 284906;
        result[2] += 925946;
        result[3] += 0;
        result[4] += 40314286;
        result[5] += 213679;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 42708833;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 240839;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 57404;
        result[2] += 91846;
        result[3] += 21446134;
        result[4] += 21296884;
        result[5] += 57404;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 42906313;
        result[1] += 4817;
        result[2] += 24088;
        result[3] += 14453;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42680312;
        result[1] += 0;
        result[2] += 7587;
        result[3] += 250391;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11381;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23507831;
        result[1] += 114790;
        result[2] += 314162;
        result[3] += 18976638;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36249;
      } else {
        result[0] += 42333797;
        result[1] += 0;
        result[2] += 109197;
        result[3] += 489206;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17471;
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
        result[3] += 40180729;
        result[4] += 2756527;
        result[5] += 12416;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 40928511;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2021161;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 157685;
        result[2] += 453346;
        result[3] += 0;
        result[4] += 42220376;
        result[5] += 118264;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
        result[0] += 42919346;
        result[1] += 0;
        result[2] += 25661;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4665;
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
        result[0] += 22644911;
        result[1] += 146625;
        result[2] += 310847;
        result[3] += 19823828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23460;
      } else {
        result[0] += 41478457;
        result[1] += 0;
        result[2] += 274626;
        result[3] += 1157355;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39232;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
        result[0] += 42891444;
        result[1] += 0;
        result[2] += 58228;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 705444;
        result[1] += 311495;
        result[2] += 522212;
        result[3] += 34493498;
        result[4] += 6880376;
        result[5] += 36646;
        result[6] += 0;
      } else {
        result[0] += 32026848;
        result[1] += 0;
        result[2] += 149130;
        result[3] += 10709204;
        result[4] += 0;
        result[5] += 12091;
        result[6] += 52397;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 160860;
        result[1] += 643440;
        result[2] += 0;
        result[3] += 21233546;
        result[4] += 20911825;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 890595;
        result[4] += 42059077;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42707247;
        result[1] += 0;
        result[2] += 222223;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20202;
      } else {
        result[0] += 42944350;
        result[1] += 0;
        result[2] += 5322;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 25809230;
        result[1] += 222406;
        result[2] += 161749;
        result[3] += 15578544;
        result[4] += 1152468;
        result[5] += 5054;
        result[6] += 20218;
      } else {
        result[0] += 24960955;
        result[1] += 0;
        result[2] += 352046;
        result[3] += 3451772;
        result[4] += 14124792;
        result[5] += 8586;
        result[6] += 51518;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 101024;
        result[2] += 274208;
        result[3] += 42574440;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 811549;
        result[3] += 0;
        result[4] += 41888416;
        result[5] += 249707;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 25168;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40080488;
        result[4] += 2806263;
        result[5] += 37752;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42930464;
        result[5] += 19208;
        result[6] += 0;
      } else {
        result[0] += 28402203;
        result[1] += 4156419;
        result[2] += 7620103;
        result[3] += 0;
        result[4] += 0;
        result[5] += 2770946;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 29408709;
        result[1] += 0;
        result[2] += 437982;
        result[3] += 13057357;
        result[4] += 0;
        result[5] += 9124;
        result[6] += 36498;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 21767409;
        result[1] += 936232;
        result[2] += 0;
        result[3] += 20246031;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39563201;
        result[1] += 44325;
        result[2] += 83332;
        result[3] += 3249948;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8865;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 393357;
        result[1] += 295017;
        result[2] += 491696;
        result[3] += 41695847;
        result[4] += 73754;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42506892;
        result[1] += 0;
        result[2] += 442780;
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
        result[0] += 336860;
        result[1] += 842150;
        result[2] += 0;
        result[3] += 41770662;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5412155;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37487864;
        result[4] += 0;
        result[5] += 49652;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 802297;
        result[3] += 0;
        result[4] += 42093888;
        result[5] += 53486;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42775232;
        result[1] += 2076;
        result[2] += 18690;
        result[3] += 153673;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34657852;
        result[1] += 29865;
        result[2] += 179194;
        result[3] += 8039318;
        result[4] += 0;
        result[5] += 13575;
        result[6] += 29865;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 16498128;
        result[1] += 159072;
        result[2] += 499943;
        result[3] += 24292698;
        result[4] += 1499829;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5937742;
        result[1] += 435434;
        result[2] += 0;
        result[3] += 28976184;
        result[4] += 7600310;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1053979;
        result[1] += 0;
        result[2] += 184446;
        result[3] += 5269898;
        result[4] += 36441348;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 41776184;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1173488;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53442;
        result[1] += 0;
        result[2] += 498793;
        result[3] += 28377780;
        result[4] += 14001842;
        result[5] += 17814;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 41299830;
        result[1] += 31774;
        result[2] += 73326;
        result[3] += 1525187;
        result[4] += 0;
        result[5] += 7332;
        result[6] += 12221;
      } else {
        result[0] += 37172412;
        result[1] += 0;
        result[2] += 98972;
        result[3] += 5662175;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16111;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 42107522;
        result[1] += 0;
        result[2] += 842150;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3192855;
        result[1] += 442383;
        result[2] += 38468;
        result[3] += 34140469;
        result[4] += 5135496;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 15710204;
        result[1] += 0;
        result[2] += 1266952;
        result[3] += 25972516;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 980857;
        result[4] += 41968815;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 27821827;
        result[1] += 0;
        result[2] += 437220;
        result[3] += 13014610;
        result[4] += 1676013;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38249897;
        result[1] += 19526;
        result[2] += 85428;
        result[3] += 4555767;
        result[4] += 18306;
        result[5] += 8542;
        result[6] += 12204;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10737418;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32212254;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7533418;
        result[1] += 160774;
        result[2] += 0;
        result[3] += 33601802;
        result[4] += 1653677;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1443109;
        result[1] += 0;
        result[2] += 618475;
        result[3] += 0;
        result[4] += 40750649;
        result[5] += 137438;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 36534257;
        result[1] += 0;
        result[2] += 107167;
        result[3] += 6298505;
        result[4] += 0;
        result[5] += 4871;
        result[6] += 4871;
      } else {
        result[0] += 42454049;
        result[1] += 0;
        result[2] += 273897;
        result[3] += 156512;
        result[4] += 0;
        result[5] += 0;
        result[6] += 65213;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 7413847;
        result[1] += 14068;
        result[2] += 112544;
        result[3] += 26447882;
        result[4] += 8905058;
        result[5] += 56272;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 71463;
        result[2] += 0;
        result[3] += 2644156;
        result[4] += 40234053;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 20638154;
        result[1] += 1896479;
        result[2] += 0;
        result[3] += 20415039;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39496699;
        result[1] += 24790;
        result[2] += 108016;
        result[3] += 3307771;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12395;
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
        result[0] += 38109;
        result[1] += 12703;
        result[2] += 0;
        result[3] += 39735751;
        result[4] += 3137701;
        result[5] += 25406;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42911204;
        result[5] += 38468;
        result[6] += 0;
      } else {
        result[0] += 29487835;
        result[1] += 4166759;
        result[2] += 8012998;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1282079;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42737366;
        result[1] += 0;
        result[2] += 191076;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21230;
      } else {
        result[0] += 42934982;
        result[1] += 0;
        result[2] += 14690;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 22831698;
        result[1] += 176215;
        result[2] += 270197;
        result[3] += 19648065;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23495;
      } else {
        result[0] += 41465939;
        result[1] += 0;
        result[2] += 334085;
        result[3] += 1071039;
        result[4] += 0;
        result[5] += 0;
        result[6] += 78608;
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
        result[0] += 42868358;
        result[1] += 0;
        result[2] += 69698;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11616;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 21901404;
        result[1] += 73216;
        result[2] += 197367;
        result[3] += 20567583;
        result[4] += 187817;
        result[5] += 9550;
        result[6] += 12733;
      } else {
        result[0] += 26790167;
        result[1] += 0;
        result[2] += 1168698;
        result[3] += 67424;
        result[4] += 14878431;
        result[5] += 22474;
        result[6] += 22474;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 1081466;
        result[2] += 0;
        result[3] += 21783826;
        result[4] += 20084379;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 809240;
        result[4] += 42140432;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42310223;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 639449;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52139;
        result[1] += 13034;
        result[2] += 299800;
        result[3] += 30123427;
        result[4] += 12370027;
        result[5] += 91243;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 37874388;
        result[1] += 22571;
        result[2] += 117692;
        result[3] += 4926959;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8061;
      } else {
        result[0] += 42440321;
        result[1] += 0;
        result[2] += 96818;
        result[3] += 404113;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8419;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 445963;
        result[2] += 0;
        result[3] += 42503709;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41376424;
        result[1] += 0;
        result[2] += 1573248;
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
        result[0] += 41506919;
        result[1] += 0;
        result[2] += 1442753;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3323486;
        result[1] += 255652;
        result[2] += 78662;
        result[3] += 39291871;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 35948378;
        result[1] += 0;
        result[2] += 145929;
        result[3] += 6682902;
        result[4] += 126029;
        result[5] += 19899;
        result[6] += 26532;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 38065900;
        result[1] += 30587;
        result[2] += 81566;
        result[3] += 4571102;
        result[4] += 183523;
        result[5] += 3398;
        result[6] += 13594;
      } else {
        result[0] += 260301;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42689371;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 13938508;
        result[1] += 279427;
        result[2] += 279427;
        result[3] += 28452309;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 135916;
        result[1] += 1631000;
        result[2] += 0;
        result[3] += 8698667;
        result[4] += 32484088;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1194373;
        result[4] += 41755299;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5024900;
        result[1] += 0;
        result[2] += 317362;
        result[3] += 12006866;
        result[4] += 25600543;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 39413906;
        result[1] += 0;
        result[2] += 43014;
        result[3] += 3385217;
        result[4] += 94631;
        result[5] += 8602;
        result[6] += 4301;
      } else {
        result[0] += 40684287;
        result[1] += 37499;
        result[2] += 86027;
        result[3] += 1883776;
        result[4] += 242641;
        result[5] += 6617;
        result[6] += 8823;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19196307;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23753365;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35212855;
        result[1] += 0;
        result[2] += 457027;
        result[3] += 21763;
        result[4] += 7192737;
        result[5] += 43526;
        result[6] += 21763;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 308478;
        result[1] += 284749;
        result[2] += 403394;
        result[3] += 41881863;
        result[4] += 71187;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42634197;
        result[1] += 0;
        result[2] += 315475;
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
        result[3] += 14639730;
        result[4] += 28309942;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30288;
        result[1] += 242311;
        result[2] += 0;
        result[3] += 2332245;
        result[4] += 40344826;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 106442;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42843230;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4876706;
        result[1] += 24754;
        result[2] += 693135;
        result[3] += 37181791;
        result[4] += 0;
        result[5] += 173283;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42629094;
        result[1] += 26584;
        result[2] += 75062;
        result[3] += 195474;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23456;
      } else {
        result[0] += 28368382;
        result[1] += 0;
        result[2] += 184021;
        result[3] += 14334314;
        result[4] += 0;
        result[5] += 24213;
        result[6] += 38741;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 24514;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42925158;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10847227;
        result[1] += 76388;
        result[2] += 105034;
        result[3] += 31911473;
        result[4] += 0;
        result[5] += 9548;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 42703529;
        result[1] += 43345;
        result[2] += 109913;
        result[3] += 82047;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10836;
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
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 14502197;
        result[1] += 0;
        result[2] += 0;
        result[3] += 28447475;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34659823;
        result[1] += 0;
        result[2] += 1612957;
        result[3] += 0;
        result[4] += 6451828;
        result[5] += 187553;
        result[6] += 37510;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7020324;
        result[1] += 0;
        result[2] += 30656;
        result[3] += 28541145;
        result[4] += 7342217;
        result[5] += 15328;
        result[6] += 0;
      } else {
        result[0] += 42782924;
        result[1] += 0;
        result[2] += 71463;
        result[3] += 83374;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11910;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 67298;
        result[1] += 26919;
        result[2] += 107677;
        result[3] += 40863430;
        result[4] += 1776670;
        result[5] += 107677;
        result[6] += 0;
      } else {
        result[0] += 21914335;
        result[1] += 0;
        result[2] += 333413;
        result[3] += 0;
        result[4] += 20701924;
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
        result[1] += 3747286;
        result[2] += 0;
        result[3] += 39202386;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 42838156;
        result[1] += 6827;
        result[2] += 18206;
        result[3] += 86481;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41559072;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1390599;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 41104237;
        result[1] += 84108;
        result[2] += 212744;
        result[3] += 1538687;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9895;
      } else {
        result[0] += 26930909;
        result[1] += 0;
        result[2] += 280583;
        result[3] += 15707571;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30609;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2156321;
        result[1] += 353495;
        result[2] += 282796;
        result[3] += 40157060;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 2798876;
        result[1] += 0;
        result[2] += 161086;
        result[3] += 28371349;
        result[4] += 11537816;
        result[5] += 80543;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 66076;
        result[2] += 0;
        result[3] += 3369897;
        result[4] += 39513699;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12375329;
        result[1] += 385390;
        result[2] += 0;
        result[3] += 30188952;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42923217;
        result[1] += 0;
        result[2] += 21494;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4960;
      } else {
        result[0] += 30010423;
        result[1] += 50107;
        result[2] += 362314;
        result[3] += 12457447;
        result[4] += 0;
        result[5] += 19272;
        result[6] += 50107;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 2294473;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39543814;
        result[4] += 1111385;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 698368;
        result[2] += 1187226;
        result[3] += 0;
        result[4] += 41064077;
        result[5] += 0;
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
        result[0] += 3480361;
        result[1] += 126100;
        result[2] += 428740;
        result[3] += 38838811;
        result[4] += 0;
        result[5] += 75660;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 41156847;
        result[1] += 0;
        result[2] += 39068;
        result[3] += 1749415;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4340;
      } else {
        result[0] += 23528207;
        result[1] += 0;
        result[2] += 413526;
        result[3] += 18779787;
        result[4] += 0;
        result[5] += 57038;
        result[6] += 171114;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42913793;
        result[1] += 0;
        result[2] += 33487;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2391;
      } else {
        result[0] += 28443995;
        result[1] += 175471;
        result[2] += 356792;
        result[3] += 13961714;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11698;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 356922;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42592750;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 8770;
        result[2] += 245577;
        result[3] += 26934540;
        result[4] += 15716931;
        result[5] += 43853;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42786466;
        result[1] += 35749;
        result[2] += 99478;
        result[3] += 15543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12434;
      } else {
        result[0] += 1093264;
        result[1] += 1249445;
        result[2] += 0;
        result[3] += 40606963;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19633083;
        result[1] += 0;
        result[2] += 36835;
        result[3] += 23279754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42276002;
        result[1] += 0;
        result[2] += 559273;
        result[3] += 38132;
        result[4] += 0;
        result[5] += 25421;
        result[6] += 50843;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
        result[0] += 2526451;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40423221;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42931427;
        result[5] += 18245;
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
        result[0] += 0;
        result[1] += 108458;
        result[2] += 338933;
        result[3] += 42434493;
        result[4] += 0;
        result[5] += 67786;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42839714;
        result[1] += 0;
        result[2] += 65974;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 43983;
      } else {
        result[0] += 42938817;
        result[1] += 0;
        result[2] += 10855;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 40514932;
        result[1] += 135263;
        result[2] += 320360;
        result[3] += 1929282;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49833;
      } else {
        result[0] += 18300967;
        result[1] += 0;
        result[2] += 317000;
        result[3] += 24269851;
        result[4] += 0;
        result[5] += 15463;
        result[6] += 46390;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 818089;
        result[1] += 1363481;
        result[2] += 0;
        result[3] += 3272356;
        result[4] += 37495746;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13381895;
        result[1] += 167903;
        result[2] += 319016;
        result[3] += 29030486;
        result[4] += 50371;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1143245;
        result[1] += 0;
        result[2] += 155897;
        result[3] += 6157938;
        result[4] += 35492591;
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
        result[0] += 42910425;
        result[1] += 0;
        result[2] += 31070;
        result[3] += 0;
        result[4] += 1635;
        result[5] += 0;
        result[6] += 6541;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 97946;
        result[1] += 195893;
        result[2] += 0;
        result[3] += 10480307;
        result[4] += 32077577;
        result[5] += 97946;
        result[6] += 0;
      } else {
        result[0] += 26072153;
        result[1] += 51121;
        result[2] += 354201;
        result[3] += 15909855;
        result[4] += 511218;
        result[5] += 18257;
        result[6] += 32864;
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
        result[0] += 8585293;
        result[1] += 162424;
        result[2] += 348052;
        result[3] += 33830698;
        result[4] += 0;
        result[5] += 23203;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 42813115;
        result[1] += 0;
        result[2] += 56506;
        result[3] += 75342;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4708;
      } else {
        result[0] += 24459426;
        result[1] += 0;
        result[2] += 369520;
        result[3] += 18078088;
        result[4] += 0;
        result[5] += 14212;
        result[6] += 28424;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42921487;
        result[1] += 0;
        result[2] += 18790;
        result[3] += 0;
        result[4] += 4697;
        result[5] += 0;
        result[6] += 4697;
      } else {
        result[0] += 23547561;
        result[1] += 50005;
        result[2] += 355038;
        result[3] += 15786717;
        result[4] += 3175345;
        result[5] += 5000;
        result[6] += 30003;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5486091;
        result[1] += 593090;
        result[2] += 444818;
        result[3] += 36425671;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 70524;
        result[1] += 14104;
        result[2] += 155154;
        result[3] += 41722539;
        result[4] += 888613;
        result[5] += 98734;
        result[6] += 0;
      } else {
        result[0] += 22100317;
        result[1] += 0;
        result[2] += 565911;
        result[3] += 0;
        result[4] += 20283444;
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
        result[1] += 2938661;
        result[2] += 0;
        result[3] += 40011011;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 42894446;
        result[1] += 16242;
        result[2] += 29237;
        result[3] += 3248;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6497;
      } else {
        result[0] += 42527720;
        result[1] += 0;
        result[2] += 0;
        result[3] += 421952;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42904438;
        result[1] += 0;
        result[2] += 45233;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30016816;
        result[1] += 48704;
        result[2] += 367155;
        result[3] += 12457053;
        result[4] += 0;
        result[5] += 11239;
        result[6] += 48704;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 4990479;
        result[1] += 14340;
        result[2] += 0;
        result[3] += 37858810;
        result[4] += 43021;
        result[5] += 43021;
        result[6] += 0;
      } else {
        result[0] += 111993;
        result[1] += 0;
        result[2] += 895951;
        result[3] += 0;
        result[4] += 41549748;
        result[5] += 391978;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 33358969;
        result[4] += 9590703;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 331165;
        result[2] += 0;
        result[3] += 356640;
        result[4] += 42261866;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 42821699;
        result[1] += 2245;
        result[2] += 33677;
        result[3] += 85315;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6735;
      } else {
        result[0] += 41565475;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1384197;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 35116313;
        result[1] += 20785;
        result[2] += 181869;
        result[3] += 7589135;
        result[4] += 0;
        result[5] += 5196;
        result[6] += 36373;
      } else {
        result[0] += 6878200;
        result[1] += 547129;
        result[2] += 703452;
        result[3] += 34820890;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42923622;
        result[1] += 0;
        result[2] += 21313;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4736;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26386983;
        result[1] += 40470;
        result[2] += 296786;
        result[3] += 13975928;
        result[4] += 2195542;
        result[5] += 30353;
        result[6] += 23607;
      } else {
        result[0] += 3012810;
        result[1] += 136945;
        result[2] += 564902;
        result[3] += 38379101;
        result[4] += 838793;
        result[5] += 17118;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33089;
        result[1] += 363980;
        result[2] += 0;
        result[3] += 9430398;
        result[4] += 33122205;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 27071;
        result[1] += 13535;
        result[2] += 148895;
        result[3] += 40865131;
        result[4] += 1800285;
        result[5] += 94751;
        result[6] += 0;
      } else {
        result[0] += 22182136;
        result[1] += 0;
        result[2] += 391272;
        result[3] += 0;
        result[4] += 20376263;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 430789;
        result[2] += 0;
        result[3] += 5987968;
        result[4] += 36530915;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 42859435;
        result[1] += 12891;
        result[2] += 51564;
        result[3] += 16113;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9668;
      } else {
        result[0] += 42521454;
        result[1] += 0;
        result[2] += 0;
        result[3] += 428218;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23124057;
        result[1] += 139863;
        result[2] += 332175;
        result[3] += 19318611;
        result[4] += 0;
        result[5] += 5827;
        result[6] += 29138;
      } else {
        result[0] += 42345748;
        result[1] += 0;
        result[2] += 119896;
        result[3] += 452943;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31084;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44aee000))) ) ) {
        result[0] += 42925016;
        result[1] += 0;
        result[2] += 21368;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3287;
      } else {
        result[0] += 32212254;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10737418;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 7653995;
        result[1] += 131965;
        result[2] += 162418;
        result[3] += 19794814;
        result[4] += 15206478;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33738032;
        result[1] += 59253;
        result[2] += 309941;
        result[3] += 7698397;
        result[4] += 1116700;
        result[5] += 13673;
        result[6] += 13673;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 56868;
        result[2] += 127953;
        result[3] += 42764851;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 751306;
        result[3] += 0;
        result[4] += 42073149;
        result[5] += 125217;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42232312;
        result[1] += 0;
        result[2] += 12262;
        result[3] += 705098;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 11682311;
        result[1] += 0;
        result[2] += 1288490;
        result[3] += 15375982;
        result[4] += 14602888;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 5865543;
        result[1] += 347301;
        result[2] += 0;
        result[3] += 24156779;
        result[4] += 12580047;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28628416;
        result[1] += 0;
        result[2] += 183244;
        result[3] += 13186550;
        result[4] += 909174;
        result[5] += 7047;
        result[6] += 35239;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 14356040;
        result[1] += 331657;
        result[2] += 592245;
        result[3] += 27598659;
        result[4] += 71069;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 34442;
        result[2] += 0;
        result[3] += 3926433;
        result[4] += 38988796;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 38201134;
        result[1] += 37457;
        result[2] += 95345;
        result[3] += 4397804;
        result[4] += 206014;
        result[5] += 6810;
        result[6] += 5107;
      } else {
        result[0] += 342228;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42607444;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
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
        result[0] += 42928389;
        result[1] += 0;
        result[2] += 19646;
        result[3] += 0;
        result[4] += 1637;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 47301;
        result[1] += 47301;
        result[2] += 0;
        result[3] += 9933294;
        result[4] += 32827172;
        result[5] += 94602;
        result[6] += 0;
      } else {
        result[0] += 25072587;
        result[1] += 22657;
        result[2] += 417552;
        result[3] += 16504663;
        result[4] += 883658;
        result[5] += 22657;
        result[6] += 25894;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 641543;
        result[2] += 135061;
        result[3] += 42173067;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41292450;
        result[1] += 0;
        result[2] += 1657222;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 131545;
        result[2] += 175394;
        result[3] += 27756143;
        result[4] += 14842740;
        result[5] += 43848;
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
        result[0] += 9000482;
        result[1] += 0;
        result[2] += 192992;
        result[3] += 33668473;
        result[4] += 0;
        result[5] += 87724;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42831081;
        result[1] += 0;
        result[2] += 28030;
        result[3] += 84092;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6468;
      } else {
        result[0] += 7990636;
        result[1] += 1997659;
        result[2] += 0;
        result[3] += 32961376;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 38121308;
        result[1] += 93754;
        result[2] += 298005;
        result[3] += 4396423;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40180;
      } else {
        result[0] += 21519114;
        result[1] += 0;
        result[2] += 157432;
        result[3] += 21273125;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 38008;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40187717;
        result[4] += 2711277;
        result[5] += 12669;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 36936718;
        result[1] += 0;
        result[2] += 3006477;
        result[3] += 0;
        result[4] += 3006477;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 318979;
        result[2] += 131344;
        result[3] += 0;
        result[4] += 42461821;
        result[5] += 37527;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 41728355;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1221317;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12045846;
        result[1] += 996897;
        result[2] += 0;
        result[3] += 29906928;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42768021;
        result[1] += 29753;
        result[2] += 87693;
        result[3] += 51676;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12527;
      } else {
        result[0] += 28172122;
        result[1] += 0;
        result[2] += 135396;
        result[3] += 14622811;
        result[4] += 0;
        result[5] += 4835;
        result[6] += 14506;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 8710229;
        result[1] += 22276;
        result[2] += 0;
        result[3] += 34128059;
        result[4] += 44553;
        result[5] += 44553;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1435199;
        result[3] += 0;
        result[4] += 41355006;
        result[5] += 159466;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 267599;
        result[2] += 0;
        result[3] += 4638386;
        result[4] += 38043687;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
        result[0] += 42876429;
        result[1] += 4882;
        result[2] += 17090;
        result[3] += 48828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2441;
      } else {
        result[0] += 42307157;
        result[1] += 0;
        result[2] += 0;
        result[3] += 642515;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 41217467;
        result[1] += 80101;
        result[2] += 240305;
        result[3] += 1386765;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25031;
      } else {
        result[0] += 26770572;
        result[1] += 0;
        result[2] += 218918;
        result[3] += 15908058;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52123;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 904203;
        result[1] += 5425221;
        result[2] += 0;
        result[3] += 36620247;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13610709;
        result[1] += 233660;
        result[2] += 321282;
        result[3] += 28784020;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 150788;
        result[1] += 50262;
        result[2] += 201051;
        result[3] += 38978901;
        result[4] += 3417879;
        result[5] += 150788;
        result[6] += 0;
      } else {
        result[0] += 10042715;
        result[1] += 0;
        result[2] += 731265;
        result[3] += 0;
        result[4] += 32175691;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 38323232;
        result[1] += 0;
        result[2] += 131171;
        result[3] += 4470452;
        result[4] += 0;
        result[5] += 3545;
        result[6] += 21270;
      } else {
        result[0] += 39588844;
        result[1] += 26786;
        result[2] += 73216;
        result[3] += 3248324;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12500;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 42021916;
        result[1] += 0;
        result[2] += 927756;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3394798;
        result[1] += 109509;
        result[2] += 131411;
        result[3] += 39270149;
        result[4] += 43803;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 41139;
        result[1] += 575953;
        result[2] += 0;
        result[3] += 9996906;
        result[4] += 32335673;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4181532;
        result[1] += 0;
        result[2] += 556054;
        result[3] += 34875757;
        result[4] += 3269602;
        result[5] += 66726;
        result[6] += 0;
      } else {
        result[0] += 39203442;
        result[1] += 20121;
        result[2] += 104160;
        result[3] += 3611295;
        result[4] += 0;
        result[5] += 1183;
        result[6] += 9469;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44d9c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14316557;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
