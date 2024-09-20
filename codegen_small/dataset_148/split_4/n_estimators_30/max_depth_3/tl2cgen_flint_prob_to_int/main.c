
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
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143056502;
        result[1] += 0;
        result[2] += 87259;
        result[3] += 0;
        result[4] += 5453;
        result[5] += 0;
        result[6] += 16361;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 97733667;
        result[1] += 227246;
        result[2] += 734182;
        result[3] += 40292631;
        result[4] += 4020522;
        result[5] += 52441;
        result[6] += 104883;
      } else {
        result[0] += 51971391;
        result[1] += 0;
        result[2] += 1525066;
        result[3] += 72702758;
        result[4] += 16751897;
        result[5] += 71487;
        result[6] += 142974;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 442552;
        result[1] += 1770208;
        result[2] += 0;
        result[3] += 6859556;
        result[4] += 134093260;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40904450;
        result[4] += 102261126;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 29813222;
        result[1] += 1035181;
        result[2] += 1035181;
        result[3] += 111281991;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 13447396;
        result[4] += 129718179;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 139848999;
        result[1] += 0;
        result[2] += 3132322;
        result[3] += 184254;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12258598;
        result[1] += 1188712;
        result[2] += 222883;
        result[3] += 129346792;
        result[4] += 148589;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 46266924;
        result[4] += 96898652;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 285569;
        result[1] += 1142278;
        result[2] += 0;
        result[3] += 7900759;
        result[4] += 133836968;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 140650902;
        result[1] += 75166;
        result[2] += 150333;
        result[3] += 2255006;
        result[4] += 20500;
        result[5] += 0;
        result[6] += 13666;
      } else {
        result[0] += 105041999;
        result[1] += 108376;
        result[2] += 625249;
        result[3] += 36122776;
        result[4] += 1075429;
        result[5] += 100039;
        result[6] += 91703;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
        result[0] += 143165576;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 76991;
        result[2] += 1154871;
        result[3] += 112292010;
        result[4] += 29487720;
        result[5] += 153982;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 225103;
        result[2] += 0;
        result[3] += 13806323;
        result[4] += 129134149;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 83682880;
        result[1] += 0;
        result[2] += 226169;
        result[3] += 59256526;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142231041;
        result[1] += 103837;
        result[2] += 373814;
        result[3] += 451691;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5191;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 63974707;
        result[1] += 0;
        result[2] += 0;
        result[3] += 79190869;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142177338;
        result[1] += 0;
        result[2] += 730436;
        result[3] += 85933;
        result[4] += 0;
        result[5] += 42966;
        result[6] += 128900;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143067068;
        result[1] += 0;
        result[2] += 93035;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5472;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 2491502;
        result[1] += 894385;
        result[2] += 1852655;
        result[3] += 114992430;
        result[4] += 22583235;
        result[5] += 351365;
        result[6] += 0;
      } else {
        result[0] += 106271103;
        result[1] += 0;
        result[2] += 496217;
        result[3] += 36156851;
        result[4] += 0;
        result[5] += 26822;
        result[6] += 214580;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 991909;
        result[1] += 3306364;
        result[2] += 0;
        result[3] += 138867302;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 135359;
        result[1] += 0;
        result[2] += 676799;
        result[3] += 138879181;
        result[4] += 3113276;
        result[5] += 360959;
        result[6] += 0;
      } else {
        result[0] += 72590996;
        result[1] += 0;
        result[2] += 1109029;
        result[3] += 0;
        result[4] += 69465550;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 44507433;
        result[4] += 98658143;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1651513;
        result[2] += 0;
        result[3] += 0;
        result[4] += 141514063;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 143155455;
        result[1] += 0;
        result[2] += 10121;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143063333;
        result[1] += 0;
        result[2] += 89462;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12780;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 135596117;
        result[1] += 584063;
        result[2] += 770963;
        result[3] += 6144345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 70087;
      } else {
        result[0] += 58434394;
        result[1] += 0;
        result[2] += 1178640;
        result[3] += 83369196;
        result[4] += 0;
        result[5] += 26192;
        result[6] += 157152;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142802212;
        result[5] += 363364;
        result[6] += 0;
      } else {
        result[0] += 26634592;
        result[1] += 0;
        result[2] += 668650;
        result[3] += 115639449;
        result[4] += 0;
        result[5] += 222883;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 811903;
        result[2] += 0;
        result[3] += 15696792;
        result[4] += 126656880;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 338987;
        result[2] += 0;
        result[3] += 7457717;
        result[4] += 135368871;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 142932976;
        result[1] += 0;
        result[2] += 232600;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143093858;
        result[1] += 0;
        result[2] += 71718;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 74511353;
        result[1] += 432405;
        result[2] += 963085;
        result[3] += 67199767;
        result[4] += 0;
        result[5] += 0;
        result[6] += 58964;
      } else {
        result[0] += 139445729;
        result[1] += 0;
        result[2] += 679276;
        result[3] += 2749451;
        result[4] += 0;
        result[5] += 0;
        result[6] += 291118;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1309441;
        result[1] += 5237764;
        result[2] += 0;
        result[3] += 29680668;
        result[4] += 106937701;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 318145;
        result[4] += 142847430;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 47322294;
        result[1] += 781755;
        result[2] += 1250809;
        result[3] += 92090853;
        result[4] += 1719863;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 255197;
        result[1] += 0;
        result[2] += 1403584;
        result[3] += 25264513;
        result[4] += 116242281;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143094599;
        result[1] += 0;
        result[2] += 70976;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 331401;
        result[1] += 497102;
        result[2] += 0;
        result[3] += 33968684;
        result[4] += 108368387;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 86327759;
        result[1] += 97366;
        result[2] += 1156229;
        result[3] += 53758594;
        result[4] += 1557867;
        result[5] += 121708;
        result[6] += 146050;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 341990;
        result[1] += 0;
        result[2] += 0;
        result[3] += 133418860;
        result[4] += 9319228;
        result[5] += 85497;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143100648;
        result[5] += 64927;
        result[6] += 0;
      } else {
        result[0] += 101263456;
        result[1] += 9311582;
        result[2] += 27934746;
        result[3] += 0;
        result[4] += 0;
        result[5] += 4655791;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 142740121;
        result[1] += 22792;
        result[2] += 91168;
        result[3] += 311493;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 137594427;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5571149;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 137105395;
        result[1] += 445844;
        result[2] += 776099;
        result[3] += 4788698;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49538;
      } else {
        result[0] += 90079068;
        result[1] += 0;
        result[2] += 655181;
        result[3] += 52364128;
        result[4] += 0;
        result[5] += 33599;
        result[6] += 33599;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 43119243;
        result[1] += 0;
        result[2] += 0;
        result[3] += 20590649;
        result[4] += 79455683;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1108174;
        result[3] += 130447956;
        result[4] += 11451135;
        result[5] += 158310;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 21746669;
        result[2] += 0;
        result[3] += 121418906;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142840879;
        result[1] += 0;
        result[2] += 285733;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38963;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 71341518;
        result[1] += 445420;
        result[2] += 965077;
        result[3] += 70376441;
        result[4] += 0;
        result[5] += 18559;
        result[6] += 18559;
      } else {
        result[0] += 138212998;
        result[1] += 0;
        result[2] += 885560;
        result[3] += 3870226;
        result[4] += 0;
        result[5] += 0;
        result[6] += 196791;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 142349042;
        result[1] += 0;
        result[2] += 544355;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 272177;
      } else {
        result[0] += 143129872;
        result[1] += 0;
        result[2] += 35703;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 87120663;
        result[1] += 271403;
        result[2] += 569948;
        result[3] += 41660504;
        result[4] += 13325933;
        result[5] += 27140;
        result[6] += 189982;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3430323;
        result[3] += 119758660;
        result[4] += 19875700;
        result[5] += 100891;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 82043;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143083533;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 79420202;
        result[1] += 450611;
        result[2] += 997781;
        result[3] += 62168235;
        result[4] += 0;
        result[5] += 48279;
        result[6] += 80466;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10437921;
        result[1] += 1067514;
        result[2] += 0;
        result[3] += 82435853;
        result[4] += 49224286;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 250727;
        result[2] += 0;
        result[3] += 5014556;
        result[4] += 137900292;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34473136;
        result[1] += 396894;
        result[2] += 1020586;
        result[3] += 70533852;
        result[4] += 36741106;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 95948104;
        result[1] += 0;
        result[2] += 1203650;
        result[3] += 41543121;
        result[4] += 4367530;
        result[5] += 34390;
        result[6] += 68780;
      } else {
        result[0] += 140143894;
        result[1] += 73424;
        result[2] += 56480;
        result[3] += 2824001;
        result[4] += 50832;
        result[5] += 0;
        result[6] += 16944;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 19315197;
        result[1] += 0;
        result[2] += 1032364;
        result[3] += 100139308;
        result[4] += 22545497;
        result[5] += 133208;
        result[6] += 0;
      } else {
        result[0] += 142152214;
        result[1] += 0;
        result[2] += 562979;
        result[3] += 197042;
        result[4] += 0;
        result[5] += 0;
        result[6] += 253340;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 31897613;
        result[1] += 269052;
        result[2] += 29894;
        result[3] += 103136612;
        result[4] += 7712824;
        result[5] += 119578;
        result[6] += 0;
      } else {
        result[0] += 142463526;
        result[1] += 245717;
        result[2] += 430005;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26326;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 142985704;
        result[1] += 0;
        result[2] += 128480;
        result[3] += 0;
        result[4] += 25696;
        result[5] += 25696;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1780666;
        result[3] += 8547198;
        result[4] += 132837711;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 22336551;
        result[1] += 0;
        result[2] += 0;
        result[3] += 120829025;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 140350168;
        result[1] += 0;
        result[2] += 1722861;
        result[3] += 168084;
        result[4] += 462231;
        result[5] += 84042;
        result[6] += 378189;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142705237;
        result[5] += 460339;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 716654;
        result[2] += 1212800;
        result[3] += 141236121;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 142779765;
        result[1] += 59355;
        result[2] += 148388;
        result[3] += 178066;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142062180;
        result[1] += 0;
        result[2] += 78813;
        result[3] += 1011445;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13135;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 114183782;
        result[1] += 77676;
        result[2] += 733607;
        result[3] += 28084204;
        result[4] += 0;
        result[5] += 25892;
        result[6] += 60414;
      } else {
        result[0] += 34186839;
        result[1] += 1309840;
        result[2] += 916888;
        result[3] += 106752008;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 26323993;
        result[1] += 2309122;
        result[2] += 0;
        result[3] += 114532461;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 75152192;
        result[1] += 0;
        result[2] += 2595930;
        result[3] += 65417452;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 142735316;
        result[1] += 0;
        result[2] += 104095;
        result[3] += 277587;
        result[4] += 34698;
        result[5] += 0;
        result[6] += 13879;
      } else {
        result[0] += 2654105;
        result[1] += 1092866;
        result[2] += 936743;
        result[3] += 35440115;
        result[4] += 102729497;
        result[5] += 312247;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 99836176;
        result[1] += 71422;
        result[2] += 440436;
        result[3] += 42662794;
        result[4] += 0;
        result[5] += 95229;
        result[6] += 59518;
      } else {
        result[0] += 119259677;
        result[1] += 0;
        result[2] += 809454;
        result[3] += 19184079;
        result[4] += 3588583;
        result[5] += 215854;
        result[6] += 107927;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 142482208;
        result[1] += 0;
        result[2] += 478357;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 205010;
      } else {
        result[0] += 143153760;
        result[1] += 0;
        result[2] += 11816;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 130036469;
        result[1] += 194374;
        result[2] += 600793;
        result[3] += 12121894;
        result[4] += 0;
        result[5] += 17670;
        result[6] += 194374;
      } else {
        result[0] += 16678963;
        result[1] += 375410;
        result[2] += 1233492;
        result[3] += 77683213;
        result[4] += 47060420;
        result[5] += 134075;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 284246;
        result[2] += 426370;
        result[3] += 142454959;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2030717;
        result[3] += 0;
        result[4] += 140931787;
        result[5] += 203071;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 25281222;
        result[1] += 0;
        result[2] += 0;
        result[3] += 27695721;
        result[4] += 90188632;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1180106;
        result[3] += 138072484;
        result[4] += 3788763;
        result[5] += 124221;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 7040929;
        result[2] += 0;
        result[3] += 136124646;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 136496372;
        result[1] += 4446135;
        result[2] += 0;
        result[3] += 2223067;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12301898;
        result[1] += 0;
        result[2] += 0;
        result[3] += 130863677;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 142537717;
        result[1] += 20698;
        result[2] += 75895;
        result[3] += 531265;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 114445509;
        result[1] += 78256;
        result[2] += 782563;
        result[3] += 27746210;
        result[4] += 0;
        result[5] += 8695;
        result[6] += 104341;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 687533;
        result[1] += 264435;
        result[2] += 1004856;
        result[3] += 97153736;
        result[4] += 44055014;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141973771;
        result[1] += 0;
        result[2] += 1191805;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 1127288;
        result[1] += 3381864;
        result[2] += 0;
        result[3] += 41146012;
        result[4] += 97510412;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 208392;
        result[2] += 0;
        result[3] += 6876949;
        result[4] += 136080235;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 175233;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142815109;
        result[5] += 175233;
        result[6] += 0;
      } else {
        result[0] += 16796838;
        result[1] += 313959;
        result[2] += 1962247;
        result[3] += 123621591;
        result[4] += 0;
        result[5] += 470939;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143066255;
        result[1] += 0;
        result[2] += 88285;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11035;
      } else {
        result[0] += 99037677;
        result[1] += 263989;
        result[2] += 1055957;
        result[3] += 42682904;
        result[4] += 0;
        result[5] += 13894;
        result[6] += 111153;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 77211113;
        result[1] += 0;
        result[2] += 1109810;
        result[3] += 57868699;
        result[4] += 6764560;
        result[5] += 132120;
        result[6] += 79272;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 10266019;
        result[1] += 69836;
        result[2] += 628531;
        result[3] += 84153424;
        result[4] += 47977927;
        result[5] += 69836;
        result[6] += 0;
      } else {
        result[0] += 131175832;
        result[1] += 68840;
        result[2] += 315519;
        result[3] += 11565226;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40157;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 1033686;
        result[2] += 258421;
        result[3] += 141873468;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 140086746;
        result[1] += 0;
        result[2] += 3078829;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 708740;
        result[1] += 9213626;
        result[2] += 0;
        result[3] += 133243209;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 71489338;
        result[1] += 0;
        result[2] += 1588651;
        result[3] += 70087586;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 19764632;
        result[1] += 2150555;
        result[2] += 921666;
        result[3] += 120328721;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        result[0] += 35791394;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 107374182;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143056771;
        result[1] += 0;
        result[2] += 97924;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10880;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 76031041;
        result[1] += 349568;
        result[2] += 1310880;
        result[3] += 56455232;
        result[4] += 8721721;
        result[5] += 87392;
        result[6] += 209740;
      } else {
        result[0] += 86953526;
        result[1] += 0;
        result[2] += 163692;
        result[3] += 46783354;
        result[4] += 9199525;
        result[5] += 0;
        result[6] += 65477;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 95443717;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47721858;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 30159;
        result[2] += 844456;
        result[3] += 94277563;
        result[4] += 47802283;
        result[5] += 211114;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1289779;
        result[2] += 0;
        result[3] += 1934669;
        result[4] += 139941126;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 142251510;
        result[1] += 342774;
        result[2] += 434181;
        result[3] += 34277;
        result[4] += 0;
        result[5] += 0;
        result[6] += 102832;
      } else {
        result[0] += 140725201;
        result[1] += 0;
        result[2] += 157742;
        result[3] += 2282632;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 60614038;
        result[1] += 0;
        result[2] += 1221637;
        result[3] += 81199938;
        result[4] += 0;
        result[5] += 25992;
        result[6] += 103969;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 42033;
        result[2] += 0;
        result[3] += 134086373;
        result[4] += 8995136;
        result[5] += 42033;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 871190;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142294386;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15181754;
        result[1] += 0;
        result[2] += 2448670;
        result[3] += 0;
        result[4] += 125208662;
        result[5] += 326489;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 143089282;
        result[1] += 0;
        result[2] += 0;
        result[3] += 76293;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142362811;
        result[1] += 17643;
        result[2] += 70572;
        result[3] += 688083;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26464;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 116952895;
        result[1] += 60858;
        result[2] += 765079;
        result[3] += 25334577;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52164;
      } else {
        result[0] += 33163967;
        result[1] += 2335490;
        result[2] += 0;
        result[3] += 107666118;
        result[4] += 0;
        result[5] += 0;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142959934;
        result[1] += 0;
        result[2] += 179936;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25705;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3444475;
        result[1] += 1062657;
        result[2] += 622936;
        result[3] += 128911312;
        result[4] += 9087551;
        result[5] += 36643;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1969924;
        result[3] += 27312733;
        result[4] += 113776436;
        result[5] += 106482;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 140295848;
        result[1] += 0;
        result[2] += 837746;
        result[3] += 1889386;
        result[4] += 0;
        result[5] += 17824;
        result[6] += 124770;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 221876;
        result[3] += 142943700;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142950935;
        result[5] += 214641;
        result[6] += 0;
      } else {
        result[0] += 28922338;
        result[1] += 562378;
        result[2] += 883738;
        result[3] += 112716781;
        result[4] += 0;
        result[5] += 80339;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 142679197;
        result[1] += 0;
        result[2] += 0;
        result[3] += 486378;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 112670616;
        result[1] += 0;
        result[2] += 982268;
        result[3] += 29356421;
        result[4] += 0;
        result[5] += 22324;
        result[6] += 133945;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 90898;
        result[1] += 0;
        result[2] += 409044;
        result[3] += 85853896;
        result[4] += 56584489;
        result[5] += 227246;
        result[6] += 0;
      } else {
        result[0] += 71508762;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71656813;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 69178198;
        result[1] += 3329432;
        result[2] += 0;
        result[3] += 70657946;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 132029754;
        result[1] += 94471;
        result[2] += 395599;
        result[3] += 10598515;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47235;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x450d7000))) ) ) {
        result[0] += 143165576;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41cc0000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9789961;
        result[1] += 706492;
        result[2] += 1059738;
        result[3] += 131357065;
        result[4] += 0;
        result[5] += 252318;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142996687;
        result[1] += 0;
        result[2] += 142905;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25982;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 121946284;
        result[1] += 273797;
        result[2] += 1292931;
        result[3] += 19393976;
        result[4] += 0;
        result[5] += 60843;
        result[6] += 197742;
      } else {
        result[0] += 0;
        result[1] += 356006;
        result[2] += 559439;
        result[3] += 142250130;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 12477462;
        result[1] += 0;
        result[2] += 0;
        result[3] += 127967908;
        result[4] += 2661070;
        result[5] += 59134;
        result[6] += 0;
      } else {
        result[0] += 39468748;
        result[1] += 91362;
        result[2] += 0;
        result[3] += 87068790;
        result[4] += 16536674;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 789516;
        result[2] += 1447446;
        result[3] += 0;
        result[4] += 140665442;
        result[5] += 263172;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143022319;
        result[1] += 0;
        result[2] += 104186;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39070;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 130919037;
        result[1] += 321431;
        result[2] += 1221439;
        result[3] += 10462594;
        result[4] += 0;
        result[5] += 16071;
        result[6] += 225002;
      } else {
        result[0] += 0;
        result[1] += 467013;
        result[2] += 934026;
        result[3] += 141764536;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 143066602;
        result[1] += 0;
        result[2] += 76979;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21994;
      } else {
        result[0] += 102261126;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40904450;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 120791385;
        result[1] += 497204;
        result[2] += 555698;
        result[3] += 21175051;
        result[4] += 0;
        result[5] += 116989;
        result[6] += 29247;
      } else {
        result[0] += 23691576;
        result[1] += 641758;
        result[2] += 855677;
        result[3] += 112307699;
        result[4] += 5668864;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 362100;
        result[1] += 248944;
        result[2] += 1222089;
        result[3] += 86451549;
        result[4] += 54699841;
        result[5] += 181050;
        result[6] += 0;
      } else {
        result[0] += 141917156;
        result[1] += 0;
        result[2] += 845703;
        result[3] += 241629;
        result[4] += 0;
        result[5] += 0;
        result[6] += 161086;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 290593;
        result[1] += 48432;
        result[2] += 532754;
        result[3] += 141761042;
        result[4] += 435889;
        result[5] += 96864;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 345977;
        result[2] += 0;
        result[3] += 17229689;
        result[4] += 125589908;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 142969190;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 196386;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3491843;
        result[3] += 0;
        result[4] += 139673733;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143042226;
        result[1] += 0;
        result[2] += 101582;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21767;
      } else {
        result[0] += 96283891;
        result[1] += 1008208;
        result[2] += 0;
        result[3] += 45873476;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 109847776;
        result[1] += 0;
        result[2] += 830140;
        result[3] += 32308169;
        result[4] += 0;
        result[5] += 44872;
        result[6] += 134617;
      } else {
        result[0] += 116266184;
        result[1] += 306735;
        result[2] += 760171;
        result[3] += 25805811;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26672;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41151;
        result[1] += 82302;
        result[2] += 0;
        result[3] += 133577309;
        result[4] += 9341358;
        result[5] += 123454;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 135630546;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7535030;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 373637;
        result[2] += 1307732;
        result[3] += 0;
        result[4] += 140986022;
        result[5] += 498183;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 118917114;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24248461;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 451626;
        result[1] += 7226022;
        result[2] += 0;
        result[3] += 135487927;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 142526935;
        result[1] += 78521;
        result[2] += 371668;
        result[3] += 167512;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20939;
      } else {
        result[0] += 93616276;
        result[1] += 0;
        result[2] += 577086;
        result[3] += 48876032;
        result[4] += 0;
        result[5] += 0;
        result[6] += 96181;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 1535287;
        result[2] += 0;
        result[3] += 0;
        result[4] += 141630288;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 195938;
        result[1] += 32656;
        result[2] += 293907;
        result[3] += 106035270;
        result[4] += 36411865;
        result[5] += 195938;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
        result[0] += 142972890;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 192685;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2130440;
        result[3] += 0;
        result[4] += 141035136;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 142010467;
        result[1] += 0;
        result[2] += 1087161;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 67947;
      } else {
        result[0] += 143134539;
        result[1] += 0;
        result[2] += 31036;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 129508019;
        result[1] += 270604;
        result[2] += 1321185;
        result[3] += 11747408;
        result[4] += 0;
        result[5] += 0;
        result[6] += 318357;
      } else {
        result[0] += 0;
        result[1] += 307882;
        result[2] += 718393;
        result[3] += 142139299;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 140327101;
        result[1] += 0;
        result[2] += 2661070;
        result[3] += 177404;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 11221289;
        result[1] += 677795;
        result[2] += 376553;
        result[3] += 130814627;
        result[4] += 75310;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 114699906;
        result[4] += 28465670;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 658611;
        result[2] += 0;
        result[3] += 9220554;
        result[4] += 133286410;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 495668;
        result[1] += 82611;
        result[2] += 660891;
        result[3] += 130608641;
        result[4] += 10739483;
        result[5] += 578279;
        result[6] += 0;
      } else {
        result[0] += 30272160;
        result[1] += 0;
        result[2] += 1505245;
        result[3] += 0;
        result[4] += 111388170;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 142505410;
        result[1] += 34745;
        result[2] += 90338;
        result[3] += 521183;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13898;
      } else {
        result[0] += 114552534;
        result[1] += 82116;
        result[2] += 693428;
        result[3] += 27709760;
        result[4] += 0;
        result[5] += 45620;
        result[6] += 82116;
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_4/test_data.csv", "r");
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
