
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
        result[0] += 812927;
        result[1] += 1083903;
        result[2] += 0;
        result[3] += 3387198;
        result[4] += 37665643;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13584822;
        result[1] += 127258;
        result[2] += 349960;
        result[3] += 28887631;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 16034544;
        result[1] += 0;
        result[2] += 1002159;
        result[3] += 25912969;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 956429;
        result[4] += 41993243;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 36814005;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6135667;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42920248;
        result[1] += 0;
        result[2] += 27789;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1634;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 246271;
        result[1] += 246271;
        result[2] += 98508;
        result[3] += 9555317;
        result[4] += 32803305;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 25952079;
        result[1] += 22228;
        result[2] += 274154;
        result[3] += 16130671;
        result[4] += 500147;
        result[5] += 37047;
        result[6] += 33343;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        result[0] += 42796593;
        result[1] += 0;
        result[2] += 153079;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41866908;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1082764;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        result[0] += 42941074;
        result[1] += 0;
        result[2] += 8598;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 782723;
        result[1] += 172927;
        result[2] += 655303;
        result[3] += 34458033;
        result[4] += 6771467;
        result[5] += 109217;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 142217;
        result[2] += 0;
        result[3] += 6846754;
        result[4] += 35960700;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 42721179;
        result[1] += 0;
        result[2] += 199931;
        result[3] += 14280;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14280;
      } else {
        result[0] += 18148386;
        result[1] += 0;
        result[2] += 90515;
        result[3] += 24701719;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9051;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 41413828;
        result[1] += 0;
        result[2] += 24534;
        result[3] += 1506403;
        result[4] += 4906;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18682348;
        result[1] += 121412;
        result[2] += 136589;
        result[3] += 17695872;
        result[4] += 6313450;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 2988029;
        result[1] += 0;
        result[2] += 545640;
        result[3] += 34946951;
        result[4] += 4417086;
        result[5] += 51965;
        result[6] += 0;
      } else {
        result[0] += 42453650;
        result[1] += 0;
        result[2] += 175066;
        result[3] += 175066;
        result[4] += 0;
        result[5] += 0;
        result[6] += 145888;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 40878109;
        result[1] += 5644;
        result[2] += 73379;
        result[3] += 603970;
        result[4] += 1382924;
        result[5] += 0;
        result[6] += 5644;
      } else {
        result[0] += 30936787;
        result[1] += 48095;
        result[2] += 203482;
        result[3] += 11025068;
        result[4] += 699240;
        result[5] += 22198;
        result[6] += 14798;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 4032605;
        result[1] += 631612;
        result[2] += 0;
        result[3] += 28665505;
        result[4] += 9619949;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 556239;
        result[1] += 0;
        result[2] += 158925;
        result[3] += 5443205;
        result[4] += 36791301;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 42911848;
        result[1] += 0;
        result[2] += 37824;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42944288;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5384;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 29963864;
        result[1] += 113749;
        result[2] += 282539;
        result[3] += 12354681;
        result[4] += 179797;
        result[5] += 29354;
        result[6] += 25685;
      } else {
        result[0] += 0;
        result[1] += 58819;
        result[2] += 341150;
        result[3] += 34785588;
        result[4] += 7764115;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 15846206;
        result[4] += 27103466;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30678;
        result[1] += 245426;
        result[2] += 0;
        result[3] += 2761050;
        result[4] += 39912517;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 40243875;
        result[1] += 67968;
        result[2] += 77678;
        result[3] += 2518074;
        result[4] += 0;
        result[5] += 3236;
        result[6] += 38839;
      } else {
        result[0] += 42944169;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 5503;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 8473442;
        result[1] += 138681;
        result[2] += 721144;
        result[3] += 32812052;
        result[4] += 776616;
        result[5] += 27736;
        result[6] += 0;
      } else {
        result[0] += 20839;
        result[1] += 208392;
        result[2] += 0;
        result[3] += 6355968;
        result[4] += 36364473;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 13951028;
        result[1] += 0;
        result[2] += 0;
        result[3] += 28998644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33601418;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9348254;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 42112396;
        result[1] += 0;
        result[2] += 536380;
        result[3] += 13082;
        result[4] += 117742;
        result[5] += 104659;
        result[6] += 65412;
      } else {
        result[0] += 202274;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42747398;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 24350168;
        result[1] += 0;
        result[2] += 512435;
        result[3] += 15382549;
        result[4] += 2704519;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38028534;
        result[1] += 20774;
        result[2] += 89208;
        result[3] += 4768383;
        result[4] += 14664;
        result[5] += 9776;
        result[6] += 18330;
      }
    } else {
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
        result[0] += 24983796;
        result[1] += 0;
        result[2] += 655005;
        result[3] += 17310870;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 158925;
        result[1] += 715165;
        result[2] += 0;
        result[3] += 42075581;
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
        result[0] += 41264306;
        result[1] += 0;
        result[2] += 1685366;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2883195;
        result[1] += 357913;
        result[2] += 39768;
        result[3] += 39668795;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 40237719;
        result[1] += 18883;
        result[2] += 81344;
        result[3] += 2393839;
        result[4] += 196097;
        result[5] += 11620;
        result[6] += 10168;
      } else {
        result[0] += 27471956;
        result[1] += 0;
        result[2] += 217717;
        result[3] += 15151140;
        result[4] += 74221;
        result[5] += 29688;
        result[6] += 4948;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 62700;
        result[3] += 0;
        result[4] += 42886972;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 19460;
        result[1] += 175145;
        result[2] += 408673;
        result[3] += 37675834;
        result[4] += 4670558;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 3732500;
        result[1] += 0;
        result[2] += 285121;
        result[3] += 855364;
        result[4] += 38076686;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14416673;
        result[1] += 0;
        result[2] += 1201389;
        result[3] += 27331610;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5171692;
        result[1] += 49254;
        result[2] += 172389;
        result[3] += 36349608;
        result[4] += 1157473;
        result[5] += 49254;
        result[6] += 0;
      } else {
        result[0] += 42667379;
        result[1] += 31541;
        result[2] += 55197;
        result[3] += 184516;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11039;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 17141081;
        result[1] += 0;
        result[2] += 201396;
        result[3] += 20684168;
        result[4] += 4923026;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39697546;
        result[1] += 0;
        result[2] += 192007;
        result[3] += 2868111;
        result[4] += 108004;
        result[5] += 36001;
        result[6] += 48001;
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
        result[4] += 42872702;
        result[5] += 76970;
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
        result[0] += 3141741;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39770306;
        result[4] += 0;
        result[5] += 37625;
        result[6] += 0;
      } else {
        result[0] += 15263976;
        result[1] += 342123;
        result[2] += 1026370;
        result[3] += 26211932;
        result[4] += 0;
        result[5] += 105268;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42742386;
        result[1] += 0;
        result[2] += 145100;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 62185;
      } else {
        result[0] += 42940519;
        result[1] += 0;
        result[2] += 9153;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39240027;
        result[1] += 88091;
        result[2] += 332791;
        result[3] += 3244716;
        result[4] += 0;
        result[5] += 4893;
        result[6] += 39151;
      } else {
        result[0] += 0;
        result[1] += 76124;
        result[2] += 258824;
        result[3] += 42614723;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3216806;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38796103;
        result[4] += 936762;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12443853;
        result[1] += 52505;
        result[2] += 0;
        result[3] += 25412764;
        result[4] += 5014295;
        result[5] += 26252;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 18407002;
        result[1] += 3579139;
        result[2] += 0;
        result[3] += 0;
        result[4] += 19940919;
        result[5] += 1022611;
        result[6] += 0;
      } else {
        result[0] += 1255082;
        result[1] += 0;
        result[2] += 461427;
        result[3] += 0;
        result[4] += 41177791;
        result[5] += 55371;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42677811;
        result[1] += 13370;
        result[2] += 31197;
        result[3] += 220608;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6685;
      } else {
        result[0] += 23458409;
        result[1] += 97599;
        result[2] += 401881;
        result[3] += 18980299;
        result[4] += 0;
        result[5] += 5741;
        result[6] += 5741;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43438000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42439164;
        result[1] += 0;
        result[2] += 79505;
        result[3] += 410080;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20922;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 41313494;
        result[1] += 0;
        result[2] += 1585047;
        result[3] += 51130;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2269151;
        result[1] += 134357;
        result[2] += 44785;
        result[3] += 28871973;
        result[4] += 11629403;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 367091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42582581;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 533235;
        result[2] += 0;
        result[3] += 96951;
        result[4] += 42319485;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42913385;
        result[1] += 0;
        result[2] += 31339;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4948;
      } else {
        result[0] += 25476502;
        result[1] += 39249;
        result[2] += 271178;
        result[3] += 16552590;
        result[4] += 553061;
        result[5] += 28545;
        result[6] += 28545;
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
        result[0] += 32212254;
        result[1] += 0;
        result[2] += 10737418;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42905448;
        result[1] += 0;
        result[2] += 44224;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 28880300;
        result[1] += 116025;
        result[2] += 307720;
        result[3] += 12268452;
        result[4] += 1351951;
        result[5] += 5044;
        result[6] += 20178;
      } else {
        result[0] += 15033513;
        result[1] += 0;
        result[2] += 368505;
        result[3] += 22471304;
        result[4] += 5008664;
        result[5] += 30082;
        result[6] += 37602;
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
        result[0] += 4997376;
        result[1] += 388684;
        result[2] += 249868;
        result[3] += 37313743;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 21571632;
        result[1] += 0;
        result[2] += 691398;
        result[3] += 20686642;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5748020;
        result[1] += 525199;
        result[2] += 262599;
        result[3] += 36413853;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4985426;
        result[1] += 44118;
        result[2] += 308831;
        result[3] += 34633275;
        result[4] += 2867723;
        result[5] += 110297;
        result[6] += 0;
      } else {
        result[0] += 42681932;
        result[1] += 17223;
        result[2] += 57932;
        result[3] += 189453;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3131;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 18844306;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24105366;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34674965;
        result[1] += 0;
        result[2] += 383384;
        result[3] += 21299;
        result[4] += 7710280;
        result[5] += 63897;
        result[6] += 95846;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 445844;
        result[1] += 891688;
        result[2] += 0;
        result[3] += 3269525;
        result[4] += 38342614;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14183173;
        result[1] += 118563;
        result[2] += 355690;
        result[3] += 28292244;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 22344819;
        result[1] += 0;
        result[2] += 2106273;
        result[3] += 18498579;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 977435;
        result[4] += 41972237;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5544321;
        result[1] += 50174;
        result[2] += 200699;
        result[3] += 36075718;
        result[4] += 978409;
        result[5] += 100349;
        result[6] += 0;
      } else {
        result[0] += 42702047;
        result[1] += 22081;
        result[2] += 55203;
        result[3] += 160877;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9463;
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
        result[0] += 15809337;
        result[1] += 0;
        result[2] += 365280;
        result[3] += 21770713;
        result[4] += 4945897;
        result[5] += 43833;
        result[6] += 14611;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41700000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42683180;
        result[1] += 0;
        result[2] += 199869;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 66623;
      } else {
        result[0] += 42931998;
        result[1] += 0;
        result[2] += 17674;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 31772468;
        result[1] += 53936;
        result[2] += 265531;
        result[3] += 9637953;
        result[4] += 1153401;
        result[5] += 12446;
        result[6] += 53936;
      } else {
        result[0] += 3980701;
        result[1] += 195543;
        result[2] += 55869;
        result[3] += 17179869;
        result[4] += 21537689;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 83316;
        result[2] += 0;
        result[3] += 42685837;
        result[4] += 111088;
        result[5] += 69430;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2081007;
        result[3] += 0;
        result[4] += 40868665;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 42185619;
        result[1] += 12356;
        result[2] += 59723;
        result[3] += 685794;
        result[4] += 0;
        result[5] += 2059;
        result[6] += 4118;
      } else {
        result[0] += 300768;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42648904;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 28039396;
        result[1] += 44252;
        result[2] += 165946;
        result[3] += 13978211;
        result[4] += 699740;
        result[5] += 13828;
        result[6] += 8297;
      } else {
        result[0] += 42278374;
        result[1] += 0;
        result[2] += 349075;
        result[3] += 40277;
        result[4] += 187963;
        result[5] += 67129;
        result[6] += 26851;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42080000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ed0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 19253301;
        result[4] += 23696371;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 116237;
        result[1] += 464949;
        result[2] += 0;
        result[3] += 2789694;
        result[4] += 39578791;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 5779102;
        result[1] += 211196;
        result[2] += 230396;
        result[3] += 23807596;
        result[4] += 12921381;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11713547;
        result[4] += 31236125;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 38780977;
        result[1] += 60541;
        result[2] += 69189;
        result[3] += 4013018;
        result[4] += 0;
        result[5] += 8648;
        result[6] += 17297;
      } else {
        result[0] += 42393222;
        result[1] += 16259;
        result[2] += 41553;
        result[3] += 487797;
        result[4] += 3613;
        result[5] += 1806;
        result[6] += 5419;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 6153131;
        result[1] += 81498;
        result[2] += 560301;
        result[3] += 26812983;
        result[4] += 9331570;
        result[5] += 10187;
        result[6] += 0;
      } else {
        result[0] += 301855;
        result[1] += 733076;
        result[2] += 0;
        result[3] += 4829682;
        result[4] += 37085058;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 13689952;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29259720;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 32243287;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10706385;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2232857;
        result[3] += 0;
        result[4] += 40454126;
        result[5] += 262689;
        result[6] += 0;
      } else {
        result[0] += 42650960;
        result[1] += 0;
        result[2] += 220787;
        result[3] += 25975;
        result[4] += 0;
        result[5] += 12987;
        result[6] += 38962;
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
        result[0] += 284300;
        result[1] += 385836;
        result[2] += 568600;
        result[3] += 41710935;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42505059;
        result[1] += 0;
        result[2] += 444613;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 42911859;
        result[1] += 0;
        result[2] += 32881;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4932;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 100467;
        result[1] += 251167;
        result[2] += 0;
        result[3] += 9494138;
        result[4] += 33103899;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 25940696;
        result[1] += 47470;
        result[2] += 288473;
        result[3] += 16132601;
        result[4] += 496612;
        result[5] += 18257;
        result[6] += 25560;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 8544485;
        result[1] += 318145;
        result[2] += 0;
        result[3] += 34087042;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 22572090;
        result[1] += 0;
        result[2] += 1332380;
        result[3] += 19045201;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 42193059;
        result[1] += 14431;
        result[2] += 37109;
        result[3] += 690641;
        result[4] += 10308;
        result[5] += 4123;
        result[6] += 0;
      } else {
        result[0] += 1450248;
        result[1] += 0;
        result[2] += 1004018;
        result[3] += 0;
        result[4] += 40495405;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 34487800;
        result[1] += 36764;
        result[2] += 153183;
        result[3] += 7839946;
        result[4] += 379895;
        result[5] += 33700;
        result[6] += 18382;
      } else {
        result[0] += 20018580;
        result[1] += 0;
        result[2] += 237218;
        result[3] += 22693874;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 9059329;
        result[1] += 0;
        result[2] += 0;
        result[3] += 33749524;
        result[4] += 0;
        result[5] += 140818;
        result[6] += 0;
      } else {
        result[0] += 42728362;
        result[1] += 29404;
        result[2] += 38690;
        result[3] += 143929;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9285;
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
        result[0] += 7396470;
        result[1] += 188045;
        result[2] += 777256;
        result[3] += 34575364;
        result[4] += 0;
        result[5] += 12536;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7549747;
        result[1] += 0;
        result[2] += 402653;
        result[3] += 34952533;
        result[4] += 0;
        result[5] += 44739;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 42834423;
        result[1] += 0;
        result[2] += 0;
        result[3] += 115249;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42482026;
        result[1] += 0;
        result[2] += 369194;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 98451;
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
        result[0] += 37175;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39826961;
        result[4] += 3073144;
        result[5] += 12391;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42874684;
        result[5] += 74988;
        result[6] += 0;
      } else {
        result[0] += 29063688;
        result[1] += 3552228;
        result[2] += 9687896;
        result[3] += 0;
        result[4] += 0;
        result[5] += 645859;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42900035;
        result[1] += 9024;
        result[2] += 33843;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6768;
      } else {
        result[0] += 37285979;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5663693;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42942228;
        result[1] += 0;
        result[2] += 7444;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29927657;
        result[1] += 75337;
        result[2] += 293814;
        result[3] += 12626495;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26367;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 41374501;
        result[1] += 0;
        result[2] += 1575171;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3376339;
        result[1] += 241167;
        result[2] += 43848;
        result[3] += 39244468;
        result[4] += 43848;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35821;
        result[1] += 501497;
        result[2] += 0;
        result[3] += 8847847;
        result[4] += 33564506;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 35993624;
        result[1] += 0;
        result[2] += 127020;
        result[3] += 6688636;
        result[4] += 113650;
        result[5] += 10027;
        result[6] += 16713;
      } else {
        result[0] += 38283401;
        result[1] += 22010;
        result[2] += 62645;
        result[3] += 4410608;
        result[4] += 160847;
        result[5] += 6772;
        result[6] += 3386;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43080000))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 276500;
        result[1] += 230416;
        result[2] += 553000;
        result[3] += 41889756;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42501814;
        result[1] += 0;
        result[2] += 447858;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35791;
        result[1] += 286331;
        result[2] += 0;
        result[3] += 9198388;
        result[4] += 33429162;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        result[0] += 35791394;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7158278;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42906785;
        result[1] += 0;
        result[2] += 37938;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4948;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 27389154;
        result[1] += 50483;
        result[2] += 244650;
        result[3] += 14022718;
        result[4] += 1211600;
        result[5] += 11650;
        result[6] += 19416;
      } else {
        result[0] += 684962;
        result[1] += 0;
        result[2] += 761069;
        result[3] += 29174320;
        result[4] += 12177107;
        result[5] += 152213;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 26510694;
        result[1] += 0;
        result[2] += 315428;
        result[3] += 14208969;
        result[4] += 1870566;
        result[5] += 29342;
        result[6] += 14671;
      } else {
        result[0] += 42057132;
        result[1] += 29067;
        result[2] += 35906;
        result[3] += 808758;
        result[4] += 8549;
        result[5] += 3419;
        result[6] += 6839;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 18692033;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24257639;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34704589;
        result[1] += 0;
        result[2] += 595652;
        result[3] += 20900;
        result[4] += 7524030;
        result[5] += 52250;
        result[6] += 52250;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40d00000))) ) ) {
        result[0] += 12581217;
        result[1] += 0;
        result[2] += 0;
        result[3] += 30368455;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6517654;
        result[1] += 417798;
        result[2] += 417798;
        result[3] += 35596421;
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
        result[0] += 232160;
        result[1] += 2321603;
        result[2] += 0;
        result[3] += 40395908;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 56364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42836944;
        result[5] += 56364;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3185222;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39713622;
        result[4] += 0;
        result[5] += 50828;
        result[6] += 0;
      } else {
        result[0] += 14711433;
        result[1] += 303044;
        result[2] += 991782;
        result[3] += 26860764;
        result[4] += 0;
        result[5] += 82648;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42933015;
        result[1] += 0;
        result[2] += 16657;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29029442;
        result[1] += 0;
        result[2] += 210358;
        result[3] += 13654996;
        result[4] += 0;
        result[5] += 9146;
        result[6] += 45730;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 17370756;
        result[1] += 2672424;
        result[2] += 0;
        result[3] += 22906492;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39370680;
        result[1] += 30001;
        result[2] += 135888;
        result[3] += 3400748;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12353;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 66717;
        result[1] += 16679;
        result[2] += 200153;
        result[3] += 37562199;
        result[4] += 5053883;
        result[5] += 50038;
        result[6] += 0;
      } else {
        result[0] += 15068646;
        result[1] += 0;
        result[2] += 604357;
        result[3] += 0;
        result[4] += 27276668;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42551173;
        result[1] += 25856;
        result[2] += 97343;
        result[3] += 261610;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13688;
      } else {
        result[0] += 27614421;
        result[1] += 0;
        result[2] += 129621;
        result[3] += 15195659;
        result[4] += 0;
        result[5] += 4985;
        result[6] += 4985;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 681740;
        result[1] += 681740;
        result[2] += 0;
        result[3] += 41586191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 174120;
        result[1] += 406280;
        result[2] += 0;
        result[3] += 116080;
        result[4] += 42253191;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 7643585;
        result[1] += 419977;
        result[2] += 195989;
        result[3] += 32870219;
        result[4] += 1819901;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2182793;
        result[4] += 40766879;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x457e0800))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 8938;
        result[2] += 259217;
        result[3] += 28656951;
        result[4] += 13997749;
        result[5] += 26815;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 795364;
        result[2] += 0;
        result[3] += 596523;
        result[4] += 41557785;
        result[5] += 0;
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
        result[0] += 42846808;
        result[1] += 0;
        result[2] += 94951;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7912;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39083133;
        result[1] += 87434;
        result[2] += 374024;
        result[3] += 3375935;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29144;
      } else {
        result[0] += 0;
        result[1] += 123863;
        result[2] += 232244;
        result[3] += 42593565;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 215482;
        result[2] += 421171;
        result[3] += 26063644;
        result[4] += 16249374;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42558088;
        result[1] += 17799;
        result[2] += 373784;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 39522534;
        result[1] += 64125;
        result[2] += 92625;
        result[3] += 3245450;
        result[4] += 3562;
        result[5] += 7125;
        result[6] += 14250;
      } else {
        result[0] += 42923968;
        result[1] += 0;
        result[2] += 11424;
        result[3] += 0;
        result[4] += 2856;
        result[5] += 11424;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 6571597;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36378075;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3210624;
        result[1] += 0;
        result[2] += 2907735;
        result[3] += 0;
        result[4] += 36528424;
        result[5] += 302889;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 34996029;
        result[1] += 0;
        result[2] += 0;
        result[3] += 7953643;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42823696;
        result[1] += 0;
        result[2] += 100781;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25195;
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
        result[0] += 38121;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40116011;
        result[4] += 2732005;
        result[5] += 63535;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 173650;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42776021;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4613113;
        result[1] += 0;
        result[2] += 1484680;
        result[3] += 0;
        result[4] += 36639782;
        result[5] += 212097;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42802622;
        result[1] += 30958;
        result[2] += 89778;
        result[3] += 10835;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15479;
      } else {
        result[0] += 435300;
        result[1] += 1741202;
        result[2] += 0;
        result[3] += 40773169;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8287412;
        result[1] += 0;
        result[2] += 213044;
        result[3] += 34449216;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42681603;
        result[1] += 0;
        result[2] += 167543;
        result[3] += 50262;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50262;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 41805438;
        result[1] += 0;
        result[2] += 1144234;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2885875;
        result[1] += 249396;
        result[2] += 213768;
        result[3] += 39600631;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 7962579;
        result[1] += 0;
        result[2] += 0;
        result[3] += 7198493;
        result[4] += 27748384;
        result[5] += 40215;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 995841;
        result[3] += 39962148;
        result[4] += 1863187;
        result[5] += 128495;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42926465;
        result[1] += 0;
        result[2] += 23207;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29181323;
        result[1] += 77495;
        result[2] += 206654;
        result[3] += 13441146;
        result[4] += 0;
        result[5] += 8610;
        result[6] += 34442;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x457e0800))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 403641;
        result[3] += 33796821;
        result[4] += 8672844;
        result[5] += 76364;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 222793;
        result[2] += 0;
        result[3] += 2846808;
        result[4] += 39880070;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 36171100;
        result[1] += 0;
        result[2] += 116952;
        result[3] += 6656942;
        result[4] += 0;
        result[5] += 4678;
        result[6] += 0;
      } else {
        result[0] += 38043993;
        result[1] += 58487;
        result[2] += 112101;
        result[3] += 4725341;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9747;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 42873521;
        result[1] += 0;
        result[2] += 76151;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41243957;
        result[1] += 0;
        result[2] += 208612;
        result[3] += 1472560;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24542;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 121843;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42766908;
        result[5] += 60921;
        result[6] += 0;
      } else {
        result[0] += 42200147;
        result[1] += 12253;
        result[2] += 55142;
        result[3] += 680087;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2042;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 15182400;
        result[1] += 110905;
        result[2] += 455296;
        result[3] += 25449928;
        result[4] += 1686933;
        result[5] += 11674;
        result[6] += 52534;
      } else {
        result[0] += 40422777;
        result[1] += 0;
        result[2] += 86744;
        result[3] += 2436379;
        result[4] += 0;
        result[5] += 3771;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 23971910;
        result[1] += 0;
        result[2] += 898946;
        result[3] += 18078815;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 606238;
        result[2] += 0;
        result[3] += 42343434;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 538216;
        result[1] += 1614649;
        result[2] += 0;
        result[3] += 14854774;
        result[4] += 25942033;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1049203;
        result[4] += 41900468;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 103868;
        result[1] += 415474;
        result[2] += 0;
        result[3] += 4050876;
        result[4] += 38379453;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12441492;
        result[1] += 120110;
        result[2] += 410379;
        result[3] += 19958435;
        result[4] += 10019254;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5508367;
        result[1] += 0;
        result[2] += 259828;
        result[3] += 36194128;
        result[4] += 857434;
        result[5] += 129914;
        result[6] += 0;
      } else {
        result[0] += 42663519;
        result[1] += 29873;
        result[2] += 59746;
        result[3] += 182383;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14150;
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
        result[0] += 17058884;
        result[1] += 0;
        result[2] += 338757;
        result[3] += 25431045;
        result[4] += 64525;
        result[5] += 32262;
        result[6] += 24196;
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42470934;
        result[1] += 0;
        result[2] += 410347;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 68391;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
        result[0] += 42913973;
        result[1] += 0;
        result[2] += 35699;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 31557621;
        result[1] += 65565;
        result[2] += 262263;
        result[3] += 9851255;
        result[4] += 1143303;
        result[5] += 20489;
        result[6] += 49174;
      } else {
        result[0] += 3889679;
        result[1] += 204004;
        result[2] += 176803;
        result[3] += 17544356;
        result[4] += 21134829;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 41244;
        result[2] += 123734;
        result[3] += 42784693;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1034198;
        result[3] += 0;
        result[4] += 41915474;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42685502;
        result[1] += 0;
        result[2] += 220141;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 44028;
      } else {
        result[0] += 42926830;
        result[1] += 0;
        result[2] += 22842;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 808415;
        result[1] += 300564;
        result[2] += 590765;
        result[3] += 41198105;
        result[4] += 0;
        result[5] += 51821;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 25528620;
        result[1] += 0;
        result[2] += 115822;
        result[3] += 17264351;
        result[4] += 0;
        result[5] += 6813;
        result[6] += 34065;
      } else {
        result[0] += 41629539;
        result[1] += 0;
        result[2] += 211624;
        result[3] += 1078276;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30232;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42884200;
        result[1] += 0;
        result[2] += 58924;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6547;
      }
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 17235;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42915202;
        result[5] += 17235;
        result[6] += 0;
      } else {
        result[0] += 961559;
        result[1] += 248144;
        result[2] += 723754;
        result[3] += 40964517;
        result[4] += 0;
        result[5] += 51696;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 41952555;
        result[1] += 0;
        result[2] += 194069;
        result[3] += 789663;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13384;
      } else {
        result[0] += 16770533;
        result[1] += 0;
        result[2] += 173102;
        result[3] += 25934759;
        result[4] += 0;
        result[5] += 10182;
        result[6] += 61094;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
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
        result[4] += 42931910;
        result[5] += 17762;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 15901;
        result[1] += 159013;
        result[2] += 143112;
        result[3] += 42488532;
        result[4] += 0;
        result[5] += 143112;
        result[6] += 0;
      } else {
        result[0] += 39154120;
        result[1] += 0;
        result[2] += 3795552;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42020000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 49029;
        result[2] += 98058;
        result[3] += 42704526;
        result[4] += 0;
        result[5] += 98058;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 42694293;
        result[1] += 42827;
        result[2] += 123723;
        result[3] += 82482;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6344;
      } else {
        result[0] += 27711875;
        result[1] += 0;
        result[2] += 200743;
        result[3] += 14999706;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37347;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42481131;
        result[5] += 468541;
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
        result[0] += 13154;
        result[1] += 157854;
        result[2] += 315709;
        result[3] += 42278789;
        result[4] += 0;
        result[5] += 184163;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 42755421;
        result[1] += 33916;
        result[2] += 129501;
        result[3] += 21583;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9250;
      } else {
        result[0] += 13481185;
        result[1] += 950596;
        result[2] += 0;
        result[3] += 28517891;
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
        result[0] += 17499502;
        result[1] += 0;
        result[2] += 297146;
        result[3] += 25128931;
        result[4] += 0;
        result[5] += 8030;
        result[6] += 16061;
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
        result[0] += 141614;
        result[1] += 222537;
        result[2] += 505766;
        result[3] += 42079754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42727596;
        result[1] += 0;
        result[2] += 222076;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 5081441;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37663952;
        result[4] += 76604;
        result[5] += 127674;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1342177;
        result[3] += 0;
        result[4] += 41607495;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42913357;
        result[1] += 0;
        result[2] += 29712;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6602;
      } else {
        result[0] += 29580707;
        result[1] += 37459;
        result[2] += 233082;
        result[3] += 13073449;
        result[4] += 0;
        result[5] += 4162;
        result[6] += 20810;
      }
    }
  }
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42598411;
        result[1] += 0;
        result[2] += 319328;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31932;
      } else {
        result[0] += 42919230;
        result[1] += 0;
        result[2] += 30442;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 31713561;
        result[1] += 20692;
        result[2] += 277281;
        result[3] += 9675885;
        result[4] += 1196035;
        result[5] += 24831;
        result[6] += 41385;
      } else {
        result[0] += 0;
        result[1] += 34423;
        result[2] += 424562;
        result[3] += 35055103;
        result[4] += 7389684;
        result[5] += 45898;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5184522;
        result[1] += 491165;
        result[2] += 0;
        result[3] += 29933793;
        result[4] += 7340191;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2476278;
        result[1] += 0;
        result[2] += 82542;
        result[3] += 6603409;
        result[4] += 33787442;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 53353;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42842965;
        result[5] += 53353;
        result[6] += 0;
      } else {
        result[0] += 8236008;
        result[1] += 22259;
        result[2] += 411800;
        result[3] += 34212825;
        result[4] += 0;
        result[5] += 66778;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 13840559;
        result[4] += 29109113;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 418236;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42531436;
        result[5] += 0;
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
        result[0] += 42865316;
        result[1] += 0;
        result[2] += 80339;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4016;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 40331210;
        result[1] += 199830;
        result[2] += 289408;
        result[3] += 2108551;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20672;
      } else {
        result[0] += 17376886;
        result[1] += 0;
        result[2] += 315226;
        result[3] += 25241798;
        result[4] += 0;
        result[5] += 7880;
        result[6] += 7880;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42734601;
        result[1] += 0;
        result[2] += 129042;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 86028;
      } else {
        result[0] += 42917736;
        result[1] += 0;
        result[2] += 31936;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 35972289;
        result[1] += 137824;
        result[2] += 77526;
        result[3] += 6658663;
        result[4] += 0;
        result[5] += 17228;
        result[6] += 86140;
      } else {
        result[0] += 7587015;
        result[1] += 244217;
        result[2] += 358185;
        result[3] += 33376356;
        result[4] += 1367616;
        result[5] += 16281;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 129922;
        result[1] += 34190;
        result[2] += 410281;
        result[3] += 26011870;
        result[4] += 16315542;
        result[5] += 47866;
        result[6] += 0;
      } else {
        result[0] += 42582256;
        result[1] += 0;
        result[2] += 228051;
        result[3] += 88686;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50678;
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
        result[0] += 42604124;
        result[1] += 0;
        result[2] += 304895;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40652;
      } else {
        result[0] += 42938999;
        result[1] += 0;
        result[2] += 10673;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 261357;
        result[2] += 43559;
        result[3] += 10105805;
        result[4] += 32451831;
        result[5] += 87119;
        result[6] += 0;
      } else {
        result[0] += 24914726;
        result[1] += 39163;
        result[2] += 303519;
        result[3] += 16680530;
        result[4] += 956250;
        result[5] += 19581;
        result[6] += 35900;
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
        result[0] += 7121475;
        result[1] += 634860;
        result[2] += 220820;
        result[3] += 34972516;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42622125;
        result[1] += 0;
        result[2] += 286604;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40943;
      } else {
        result[0] += 42937108;
        result[1] += 0;
        result[2] += 12564;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 289613;
        result[2] += 275132;
        result[3] += 40821014;
        result[4] += 1534951;
        result[5] += 28961;
        result[6] += 0;
      } else {
        result[0] += 42793892;
        result[1] += 27490;
        result[2] += 119126;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9163;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 114227;
        result[1] += 127666;
        result[2] += 349402;
        result[3] += 26709159;
        result[4] += 15595461;
        result[5] += 53754;
        result[6] += 0;
      } else {
        result[0] += 42486097;
        result[1] += 0;
        result[2] += 300697;
        result[3] += 112761;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50116;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x45012800))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13007;
        result[1] += 182100;
        result[2] += 481265;
        result[3] += 42221271;
        result[4] += 0;
        result[5] += 52028;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 42348774;
        result[1] += 29199;
        result[2] += 98356;
        result[3] += 457974;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15368;
      } else {
        result[0] += 34915921;
        result[1] += 0;
        result[2] += 1390457;
        result[3] += 6643294;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 17922637;
        result[1] += 0;
        result[2] += 0;
        result[3] += 25027035;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42435920;
        result[1] += 0;
        result[2] += 449533;
        result[3] += 38531;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25687;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 15591028;
        result[1] += 0;
        result[2] += 0;
        result[3] += 27358644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 268435;
        result[1] += 939524;
        result[2] += 0;
        result[3] += 9865003;
        result[4] += 31876710;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 14760864;
        result[1] += 320888;
        result[2] += 592409;
        result[3] += 27250826;
        result[4] += 24683;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 69050;
        result[2] += 0;
        result[3] += 3245393;
        result[4] += 39635228;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4742359;
        result[1] += 44739;
        result[2] += 89478;
        result[3] += 35097935;
        result[4] += 2818572;
        result[5] += 156587;
        result[6] += 0;
      } else {
        result[0] += 42626496;
        result[1] += 20296;
        result[2] += 78061;
        result[3] += 213889;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10928;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6822330;
        result[1] += 0;
        result[2] += 329487;
        result[3] += 28956142;
        result[4] += 6793258;
        result[5] += 48454;
        result[6] += 0;
      } else {
        result[0] += 42829485;
        result[1] += 0;
        result[2] += 77263;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42923;
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
        result[0] += 12278;
        result[1] += 12278;
        result[2] += 0;
        result[3] += 40076538;
        result[4] += 2811742;
        result[5] += 36835;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 36996252;
        result[1] += 0;
        result[2] += 5528175;
        result[3] += 0;
        result[4] += 425244;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 176747;
        result[2] += 432049;
        result[3] += 0;
        result[4] += 42242682;
        result[5] += 98193;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 26151871;
        result[1] += 329368;
        result[2] += 0;
        result[3] += 16468432;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42749216;
        result[1] += 36303;
        result[2] += 96282;
        result[3] += 50508;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17362;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8953222;
        result[1] += 0;
        result[2] += 257955;
        result[3] += 33706249;
        result[4] += 0;
        result[5] += 32244;
        result[6] += 0;
      } else {
        result[0] += 42627426;
        result[1] += 0;
        result[2] += 156991;
        result[3] += 115678;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49576;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 42389238;
        result[1] += 0;
        result[2] += 560434;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2862148;
        result[1] += 401398;
        result[2] += 331590;
        result[3] += 34939148;
        result[4] += 4415386;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 22507803;
        result[1] += 0;
        result[2] += 1739733;
        result[3] += 18702136;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1199392;
        result[4] += 41750280;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5402629;
        result[1] += 0;
        result[2] += 296034;
        result[3] += 36165548;
        result[4] += 937442;
        result[5] += 148017;
        result[6] += 0;
      } else {
        result[0] += 42683544;
        result[1] += 23761;
        result[2] += 57027;
        result[3] += 175834;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9504;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 6517311;
        result[1] += 0;
        result[2] += 322929;
        result[3] += 29141974;
        result[4] += 6918527;
        result[5] += 48928;
        result[6] += 0;
      } else {
        result[0] += 42728720;
        result[1] += 0;
        result[2] += 118974;
        result[3] += 76483;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25494;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 22410439;
        result[1] += 0;
        result[2] += 528340;
        result[3] += 20010893;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6044149;
        result[1] += 640624;
        result[2] += 389945;
        result[3] += 35874953;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 28633115;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14316557;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42910295;
        result[1] += 0;
        result[2] += 32814;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6562;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 32085690;
        result[1] += 129984;
        result[2] += 177873;
        result[3] += 10289313;
        result[4] += 225762;
        result[5] += 27365;
        result[6] += 13682;
      } else {
        result[0] += 15645687;
        result[1] += 0;
        result[2] += 251991;
        result[3] += 22019582;
        result[4] += 4950885;
        result[5] += 14823;
        result[6] += 66703;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 42906723;
        result[1] += 0;
        result[2] += 42949;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 401888;
        result[1] += 244627;
        result[2] += 576622;
        result[3] += 30176600;
        result[4] += 11497512;
        result[5] += 52420;
        result[6] += 0;
      } else {
        result[0] += 31755396;
        result[1] += 0;
        result[2] += 259635;
        result[3] += 10904683;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29957;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 37255532;
        result[1] += 29234;
        result[2] += 118560;
        result[3] += 5247509;
        result[4] += 285843;
        result[5] += 6496;
        result[6] += 6496;
      } else {
        result[0] += 252150;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42697522;
        result[5] += 0;
        result[6] += 0;
      }
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
        result[0] += 5445041;
        result[1] += 457994;
        result[2] += 508882;
        result[3] += 36537754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42788152;
        result[1] += 0;
        result[2] += 146836;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14683;
      }
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 8389398;
        result[1] += 202375;
        result[2] += 312762;
        result[3] += 18728964;
        result[4] += 15316171;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34375345;
        result[1] += 53650;
        result[2] += 229234;
        result[3] += 7418402;
        result[4] += 814512;
        result[5] += 14631;
        result[6] += 43895;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 353287;
        result[2] += 0;
        result[3] += 10295808;
        result[4] += 32250106;
        result[5] += 50469;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 442937;
        result[3] += 42384545;
        result[4] += 122189;
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
        result[0] += 25212;
        result[1] += 12606;
        result[2] += 0;
        result[3] += 40251924;
        result[4] += 2596898;
        result[5] += 63031;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 42064112;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 885560;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 242442;
        result[2] += 615431;
        result[3] += 0;
        result[4] += 42035850;
        result[5] += 55948;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 27169644;
        result[1] += 127258;
        result[2] += 127258;
        result[3] += 15525511;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42755079;
        result[1] += 33223;
        result[2] += 101251;
        result[3] += 52207;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7910;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19257648;
        result[1] += 0;
        result[2] += 59322;
        result[3] += 23632701;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42583982;
        result[1] += 0;
        result[2] += 302640;
        result[3] += 50440;
        result[4] += 0;
        result[5] += 12610;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 366048;
        result[1] += 174308;
        result[2] += 331186;
        result[3] += 30992093;
        result[4] += 11033743;
        result[5] += 52292;
        result[6] += 0;
      } else {
        result[0] += 32345936;
        result[1] += 0;
        result[2] += 191694;
        result[3] += 10371685;
        result[4] += 0;
        result[5] += 10089;
        result[6] += 30267;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 2776015;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38995160;
        result[4] += 1152308;
        result[5] += 26188;
        result[6] += 0;
      } else {
        result[0] += 646039;
        result[1] += 0;
        result[2] += 430693;
        result[3] += 23927;
        result[4] += 41825085;
        result[5] += 23927;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 41567943;
        result[1] += 58037;
        result[2] += 122770;
        result[3] += 1187527;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13393;
      } else {
        result[0] += 29842069;
        result[1] += 0;
        result[2] += 98978;
        result[3] += 13008625;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 42899712;
        result[1] += 0;
        result[2] += 49960;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 831573;
        result[1] += 78662;
        result[2] += 764149;
        result[3] += 30093988;
        result[4] += 11113874;
        result[5] += 67424;
        result[6] += 0;
      } else {
        result[0] += 31577959;
        result[1] += 0;
        result[2] += 145100;
        result[3] += 11172718;
        result[4] += 0;
        result[5] += 4145;
        result[6] += 49748;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 6678691;
        result[1] += 390774;
        result[2] += 0;
        result[3] += 35880206;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4865758;
        result[1] += 0;
        result[2] += 233930;
        result[3] += 9076510;
        result[4] += 28773473;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 961559;
        result[1] += 0;
        result[2] += 0;
        result[3] += 41988113;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 98962;
        result[1] += 544293;
        result[2] += 0;
        result[3] += 247405;
        result[4] += 42059011;
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
        result[0] += 41434951;
        result[1] += 0;
        result[2] += 1465859;
        result[3] += 48861;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2675809;
        result[1] += 351566;
        result[2] += 97657;
        result[3] += 39824639;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 42078749;
        result[1] += 34087;
        result[2] += 30678;
        result[3] += 795932;
        result[4] += 5113;
        result[5] += 0;
        result[6] += 5113;
      } else {
        result[0] += 29168757;
        result[1] += 0;
        result[2] += 335623;
        result[3] += 11980751;
        result[4] += 1403517;
        result[5] += 30511;
        result[6] += 30511;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 16605746;
        result[1] += 0;
        result[2] += 242476;
        result[3] += 21017259;
        result[4] += 5084190;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38583397;
        result[1] += 0;
        result[2] += 164558;
        result[3] += 4004247;
        result[4] += 98734;
        result[5] += 21941;
        result[6] += 76793;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 42891471;
        result[1] += 0;
        result[2] += 58201;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
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
        result[0] += 8480567;
        result[1] += 166830;
        result[2] += 268783;
        result[3] += 19139204;
        result[4] += 14894286;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34015232;
        result[1] += 94644;
        result[2] += 274469;
        result[3] += 7883886;
        result[4] += 615189;
        result[5] += 23661;
        result[6] += 42590;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 56981;
        result[2] += 0;
        result[3] += 42807219;
        result[4] += 71226;
        result[5] += 14245;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1242345;
        result[3] += 0;
        result[4] += 41648167;
        result[5] += 59159;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 21069122;
        result[1] += 0;
        result[2] += 839407;
        result[3] += 21041142;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5644486;
        result[1] += 802262;
        result[2] += 315174;
        result[3] += 36187749;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5015664;
        result[1] += 48695;
        result[2] += 0;
        result[3] += 37568789;
        result[4] += 97391;
        result[5] += 219130;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1185885;
        result[3] += 0;
        result[4] += 41763787;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42694952;
        result[1] += 10439;
        result[2] += 27142;
        result[3] += 212963;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4175;
      } else {
        result[0] += 34260052;
        result[1] += 32863;
        result[2] += 191702;
        result[3] += 8413020;
        result[4] += 0;
        result[5] += 13693;
        result[6] += 38340;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42617373;
        result[1] += 0;
        result[2] += 290761;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 41537;
      } else {
        result[0] += 42939021;
        result[1] += 0;
        result[2] += 10651;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 25546679;
        result[1] += 44351;
        result[2] += 235406;
        result[3] += 14810114;
        result[4] += 2251710;
        result[5] += 17058;
        result[6] += 44351;
      } else {
        result[0] += 109705;
        result[1] += 0;
        result[2] += 1014775;
        result[3] += 34228091;
        result[4] += 7514821;
        result[5] += 82279;
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
        result[0] += 27172242;
        result[1] += 0;
        result[2] += 779132;
        result[3] += 14998298;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 152303;
        result[1] += 609215;
        result[2] += 0;
        result[3] += 42188153;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 42786676;
        result[1] += 0;
        result[2] += 162996;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 22969478;
        result[1] += 0;
        result[2] += 379468;
        result[3] += 17223237;
        result[4] += 2300045;
        result[5] += 38721;
        result[6] += 38721;
      } else {
        result[0] += 3966553;
        result[1] += 383860;
        result[2] += 0;
        result[3] += 21922673;
        result[4] += 16676586;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3716021;
        result[1] += 26927;
        result[2] += 350060;
        result[3] += 38775880;
        result[4] += 0;
        result[5] += 80783;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 41630475;
        result[1] += 64622;
        result[2] += 133702;
        result[3] += 1109730;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11141;
      } else {
        result[0] += 29481400;
        result[1] += 0;
        result[2] += 97344;
        result[3] += 13370927;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 17841037;
        result[1] += 131184;
        result[2] += 209894;
        result[3] += 22467462;
        result[4] += 2300094;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40555442;
        result[1] += 31958;
        result[2] += 69243;
        result[3] += 2274385;
        result[4] += 2663;
        result[5] += 7989;
        result[6] += 7989;
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
        result[0] += 42524090;
        result[1] += 0;
        result[2] += 129194;
        result[3] += 296388;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 5140694;
        result[1] += 0;
        result[2] += 55276;
        result[3] += 0;
        result[4] += 37753702;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18297552;
        result[1] += 0;
        result[2] += 315475;
        result[3] += 24327632;
        result[4] += 9013;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 40005317;
        result[1] += 0;
        result[2] += 245362;
        result[3] += 2620922;
        result[4] += 0;
        result[5] += 33458;
        result[6] += 44611;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 41541486;
        result[4] += 1056139;
        result[5] += 352046;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 6371563;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36427994;
        result[4] += 83397;
        result[5] += 66717;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 967750;
        result[3] += 0;
        result[4] += 41797589;
        result[5] += 184333;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42923067;
        result[1] += 0;
        result[2] += 19954;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6651;
      } else {
        result[0] += 30244116;
        result[1] += 73756;
        result[2] += 306672;
        result[3] += 12301836;
        result[4] += 0;
        result[5] += 3881;
        result[6] += 19409;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 351406;
        result[2] += 0;
        result[3] += 42598266;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42382680;
        result[1] += 0;
        result[2] += 566992;
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
        result[3] += 19293798;
        result[4] += 23655874;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 59610;
        result[1] += 387471;
        result[2] += 0;
        result[3] += 2742102;
        result[4] += 39760488;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 12721466;
        result[1] += 426993;
        result[2] += 235582;
        result[3] += 25943546;
        result[4] += 3622084;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3401954;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36571008;
        result[4] += 2976710;
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
        result[0] += 13866608;
        result[1] += 0;
        result[2] += 1104420;
        result[3] += 27978644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 42893768;
        result[1] += 0;
        result[2] += 47683;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8221;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 15731769;
        result[1] += 49831;
        result[2] += 274072;
        result[3] += 22757994;
        result[4] += 4066241;
        result[5] += 34881;
        result[6] += 34881;
      } else {
        result[0] += 41520881;
        result[1] += 0;
        result[2] += 204113;
        result[3] += 1170964;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53713;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 1193046;
        result[1] += 0;
        result[2] += 0;
        result[3] += 41756626;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16770996;
        result[1] += 144733;
        result[2] += 416108;
        result[3] += 25617833;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 68829;
        result[1] += 275318;
        result[2] += 0;
        result[3] += 10599759;
        result[4] += 32005765;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 32786;
        result[2] += 0;
        result[3] += 2786810;
        result[4] += 40130076;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 42252232;
        result[1] += 4078;
        result[2] += 67296;
        result[3] += 617907;
        result[4] += 2039;
        result[5] += 6117;
        result[6] += 0;
      } else {
        result[0] += 250801;
        result[1] += 0;
        result[2] += 125400;
        result[3] += 0;
        result[4] += 42573471;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 34228154;
        result[1] += 24468;
        result[2] += 108747;
        result[3] += 8550241;
        result[4] += 0;
        result[5] += 5437;
        result[6] += 32624;
      } else {
        result[0] += 810983;
        result[1] += 0;
        result[2] += 746104;
        result[3] += 37434986;
        result[4] += 3827840;
        result[5] += 129757;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 42715357;
        result[1] += 0;
        result[2] += 32886;
        result[3] += 191152;
        result[4] += 4110;
        result[5] += 0;
        result[6] += 6166;
      } else {
        result[0] += 226527;
        result[1] += 271833;
        result[2] += 543666;
        result[3] += 11462307;
        result[4] += 30354726;
        result[5] += 90611;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 14552359;
        result[1] += 95113;
        result[2] += 374509;
        result[3] += 26286983;
        result[4] += 1622873;
        result[5] += 11889;
        result[6] += 5944;
      } else {
        result[0] += 40373370;
        result[1] += 0;
        result[2] += 97929;
        result[3] += 2470839;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7533;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 6681798;
        result[1] += 232699;
        result[2] += 265942;
        result[3] += 35769232;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 18362541;
        result[4] += 24587131;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 62066;
        result[1] += 279297;
        result[2] += 0;
        result[3] += 2544706;
        result[4] += 40063603;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 224440;
        result[1] += 428476;
        result[2] += 244843;
        result[3] += 42051912;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42630174;
        result[1] += 0;
        result[2] += 319498;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42145440;
        result[1] += 6139;
        result[2] += 57298;
        result[3] += 736701;
        result[4] += 0;
        result[5] += 4092;
        result[6] += 0;
      } else {
        result[0] += 31523339;
        result[1] += 37611;
        result[2] += 220653;
        result[3] += 10824551;
        result[4] += 313428;
        result[5] += 12537;
        result[6] += 17551;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 65174;
        result[3] += 0;
        result[4] += 42884498;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
        result[0] += 0;
        result[1] += 525914;
        result[2] += 0;
        result[3] += 701219;
        result[4] += 41722539;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41041;
        result[1] += 0;
        result[2] += 102603;
        result[3] += 32381549;
        result[4] += 10393697;
        result[5] += 30780;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
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
        result[2] += 591955;
        result[3] += 0;
        result[4] += 42357717;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 18465298;
        result[1] += 714127;
        result[2] += 0;
        result[3] += 23770246;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7809031;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35140641;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 38245138;
        result[1] += 0;
        result[2] += 159295;
        result[3] += 4509839;
        result[4] += 0;
        result[5] += 3539;
        result[6] += 31859;
      } else {
        result[0] += 39546212;
        result[1] += 31464;
        result[2] += 136348;
        result[3] += 3226906;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8740;
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
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7383520;
        result[1] += 43949;
        result[2] += 0;
        result[3] += 35489241;
        result[4] += 0;
        result[5] += 32962;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 37896770;
        result[1] += 0;
        result[2] += 5052902;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 148872;
        result[2] += 372180;
        result[3] += 0;
        result[4] += 42391401;
        result[5] += 37218;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42147433;
        result[1] += 50373;
        result[2] += 98880;
        result[3] += 647388;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5597;
      } else {
        result[0] += 6972047;
        result[1] += 0;
        result[2] += 128034;
        result[3] += 35849591;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 40861393;
        result[1] += 0;
        result[2] += 43057;
        result[3] += 2045222;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42782817;
        result[1] += 0;
        result[2] += 99070;
        result[3] += 31285;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36499;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42906013;
        result[1] += 0;
        result[2] += 39063;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4595;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 26369023;
        result[1] += 33475;
        result[2] += 174075;
        result[3] += 14026432;
        result[4] += 2303146;
        result[5] += 16737;
        result[6] += 26780;
      } else {
        result[0] += 3446688;
        result[1] += 160726;
        result[2] += 500037;
        result[3] += 37717134;
        result[4] += 1089368;
        result[5] += 35716;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 109194;
        result[1] += 363980;
        result[2] += 0;
        result[3] += 10118651;
        result[4] += 32357846;
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
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 89014;
        result[1] += 200283;
        result[2] += 0;
        result[3] += 31578023;
        result[4] += 11015589;
        result[5] += 66761;
        result[6] += 0;
      } else {
        result[0] += 28183085;
        result[1] += 0;
        result[2] += 928185;
        result[3] += 0;
        result[4] += 13838401;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 36518293;
        result[1] += 0;
        result[2] += 120347;
        result[3] += 6301403;
        result[4] += 0;
        result[5] += 4813;
        result[6] += 4813;
      } else {
        result[0] += 42626256;
        result[1] += 0;
        result[2] += 168176;
        result[3] += 129366;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25873;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 42894966;
        result[1] += 0;
        result[2] += 52328;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2378;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 22264420;
        result[1] += 165261;
        result[2] += 293798;
        result[3] += 17705952;
        result[4] += 2460562;
        result[5] += 36724;
        result[6] += 22953;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5322822;
        result[4] += 37626850;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        result[0] += 200699;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42748973;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7163928;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35740546;
        result[4] += 0;
        result[5] += 45198;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 222970;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42726702;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4668442;
        result[1] += 0;
        result[2] += 1296789;
        result[3] += 0;
        result[4] += 36725082;
        result[5] += 259357;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 42781858;
        result[1] += 20014;
        result[2] += 109310;
        result[3] += 26172;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12316;
      } else {
        result[0] += 14826724;
        result[1] += 573937;
        result[2] += 0;
        result[3] += 27549010;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 19402475;
        result[1] += 0;
        result[2] += 103618;
        result[3] += 23443579;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38491777;
        result[1] += 0;
        result[2] += 169716;
        result[3] += 4186348;
        result[4] += 0;
        result[5] += 0;
        result[6] += 101830;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 8437589;
        result[1] += 0;
        result[2] += 152345;
        result[3] += 34230830;
        result[4] += 105469;
        result[5] += 23437;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 199251;
        result[2] += 0;
        result[3] += 5645446;
        result[4] += 37104975;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 26564248;
        result[1] += 124132;
        result[2] += 0;
        result[3] += 16261292;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42670032;
        result[1] += 20196;
        result[2] += 97874;
        result[3] += 155355;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6214;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7080738;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35868934;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 42105331;
        result[1] += 0;
        result[2] += 546338;
        result[3] += 49667;
        result[4] += 186251;
        result[5] += 24833;
        result[6] += 37250;
      } else {
        result[0] += 197016;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42752656;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42798821;
        result[1] += 0;
        result[2] += 129301;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21550;
      } else {
        result[0] += 42933641;
        result[1] += 0;
        result[2] += 16031;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428e0000))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 25982849;
        result[1] += 56767;
        result[2] += 263802;
        result[3] += 14245319;
        result[4] += 2367541;
        result[5] += 13357;
        result[6] += 20035;
      } else {
        result[0] += 3029501;
        result[1] += 138491;
        result[2] += 657834;
        result[3] += 38102470;
        result[4] += 986751;
        result[5] += 34622;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 17194020;
        result[4] += 25755652;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 59528;
        result[1] += 386933;
        result[2] += 0;
        result[3] += 2291839;
        result[4] += 40211370;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 22619873;
        result[1] += 0;
        result[2] += 648133;
        result[3] += 19184763;
        result[4] += 496902;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7478624;
        result[1] += 454308;
        result[2] += 314521;
        result[3] += 34702217;
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
        result[0] += 495097;
        result[1] += 1237742;
        result[2] += 0;
        result[3] += 41216833;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 84325;
        result[1] += 0;
        result[2] += 337301;
        result[3] += 40897757;
        result[4] += 1461638;
        result[5] += 168650;
        result[6] += 0;
      } else {
        result[0] += 9919209;
        result[1] += 0;
        result[2] += 755269;
        result[3] += 0;
        result[4] += 32275193;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 37826444;
        result[1] += 29805;
        result[2] += 99351;
        result[3] += 4977512;
        result[4] += 0;
        result[5] += 3311;
        result[6] += 13246;
      } else {
        result[0] += 42440285;
        result[1] += 0;
        result[2] += 82721;
        result[3] += 426666;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42550450;
        result[1] += 0;
        result[2] += 299416;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 99805;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 42930157;
        result[1] += 0;
        result[2] += 19515;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 25749109;
        result[1] += 182303;
        result[2] += 187230;
        result[3] += 15618958;
        result[4] += 1182507;
        result[5] += 4927;
        result[6] += 24635;
      } else {
        result[0] += 25368625;
        result[1] += 0;
        result[2] += 462897;
        result[3] += 3748566;
        result[4] += 13315124;
        result[5] += 9076;
        result[6] += 45382;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 139749;
        result[2] += 93166;
        result[3] += 9968796;
        result[4] += 32608211;
        result[5] += 139749;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 361407;
        result[3] += 42443702;
        result[4] += 144563;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 41754879;
        result[1] += 0;
        result[2] += 1194793;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2842684;
        result[1] += 444773;
        result[2] += 116027;
        result[3] += 34208902;
        result[4] += 5337284;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 17099086;
        result[1] += 0;
        result[2] += 538553;
        result[3] += 25312032;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1078234;
        result[4] += 41871438;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 41014809;
        result[1] += 4783;
        result[2] += 98058;
        result[3] += 736635;
        result[4] += 1095386;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39870309;
        result[1] += 0;
        result[2] += 24833;
        result[3] += 310419;
        result[4] += 2744110;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 18448145;
        result[1] += 76074;
        result[2] += 239092;
        result[3] += 23393008;
        result[4] += 760748;
        result[5] += 10867;
        result[6] += 21735;
      } else {
        result[0] += 42309171;
        result[1] += 0;
        result[2] += 67658;
        result[3] += 559311;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13531;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 802797;
        result[1] += 1873194;
        result[2] += 0;
        result[3] += 4682986;
        result[4] += 35590694;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13829765;
        result[1] += 175245;
        result[2] += 277471;
        result[3] += 28637983;
        result[4] += 29207;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 3596513;
        result[1] += 0;
        result[2] += 156370;
        result[3] += 755789;
        result[4] += 38440999;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13710857;
        result[1] += 0;
        result[2] += 825955;
        result[3] += 28412860;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 32443562;
        result[1] += 0;
        result[2] += 224822;
        result[3] += 9952702;
        result[4] += 302645;
        result[5] += 8647;
        result[6] += 17294;
      } else {
        result[0] += 38295773;
        result[1] += 18400;
        result[2] += 103828;
        result[3] += 4493556;
        result[4] += 19714;
        result[5] += 6571;
        result[6] += 11828;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 21829;
        result[2] += 240125;
        result[3] += 34152357;
        result[4] += 8448042;
        result[5] += 87318;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 141514;
        result[2] += 0;
        result[3] += 2877462;
        result[4] += 39930695;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42910245;
        result[1] += 0;
        result[2] += 32856;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6571;
      } else {
        result[0] += 27984630;
        result[1] += 1197203;
        result[2] += 0;
        result[3] += 13767839;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23294543;
        result[1] += 80365;
        result[2] += 223875;
        result[3] += 19310705;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40182;
      } else {
        result[0] += 42353709;
        result[1] += 0;
        result[2] += 112023;
        result[3] += 474978;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8961;
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
        result[1] += 25190;
        result[2] += 0;
        result[3] += 40103155;
        result[4] += 2770946;
        result[5] += 50380;
        result[6] += 0;
      }
    } else {
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
        result[1] += 245642;
        result[2] += 642450;
        result[3] += 0;
        result[4] += 42023789;
        result[5] += 37791;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 42756421;
        result[1] += 26282;
        result[2] += 132956;
        result[3] += 23190;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10822;
      } else {
        result[0] += 15373484;
        result[1] += 1153011;
        result[2] += 0;
        result[3] += 26423176;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 19175004;
        result[1] += 0;
        result[2] += 100174;
        result[3] += 23674494;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38380311;
        result[1] += 0;
        result[2] += 186029;
        result[3] += 4313570;
        result[4] += 0;
        result[5] += 23253;
        result[6] += 46507;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 318989;
        result[1] += 364559;
        result[2] += 524054;
        result[3] += 41172445;
        result[4] += 569624;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42526870;
        result[1] += 0;
        result[2] += 422802;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 210537;
        result[1] += 0;
        result[2] += 0;
        result[3] += 34738706;
        result[4] += 8000429;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 241019;
        result[2] += 0;
        result[3] += 3350170;
        result[4] += 39358482;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 30880019;
        result[1] += 0;
        result[2] += 298261;
        result[3] += 11393593;
        result[4] += 318145;
        result[5] += 29826;
        result[6] += 29826;
      } else {
        result[0] += 42272051;
        result[1] += 10451;
        result[2] += 31355;
        result[3] += 613168;
        result[4] += 5225;
        result[5] += 5225;
        result[6] += 12193;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6472263;
        result[1] += 0;
        result[2] += 336596;
        result[3] += 29178080;
        result[4] += 6924264;
        result[5] += 38468;
        result[6] += 0;
      } else {
        result[0] += 42828639;
        result[1] += 0;
        result[2] += 103743;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17290;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 74264;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42850653;
        result[5] += 24754;
        result[6] += 0;
      } else {
        result[0] += 3087783;
        result[1] += 108615;
        result[2] += 279297;
        result[3] += 39303295;
        result[4] += 0;
        result[5] += 170681;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42730988;
        result[1] += 0;
        result[2] += 174947;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 43736;
      } else {
        result[0] += 42924648;
        result[1] += 0;
        result[2] += 25024;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 21700599;
        result[1] += 95778;
        result[2] += 225762;
        result[3] += 20893326;
        result[4] += 0;
        result[5] += 0;
        result[6] += 34206;
      } else {
        result[0] += 33949268;
        result[1] += 71262;
        result[2] += 391941;
        result[3] += 8473064;
        result[4] += 0;
        result[5] += 35631;
        result[6] += 28504;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42621357;
        result[1] += 0;
        result[2] += 328315;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42920493;
        result[1] += 0;
        result[2] += 29179;
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
        result[0] += 42881390;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 68282;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 719011;
        result[1] += 190987;
        result[2] += 752714;
        result[3] += 30131054;
        result[4] += 11088497;
        result[5] += 67407;
        result[6] += 0;
      } else {
        result[0] += 32015832;
        result[1] += 0;
        result[2] += 152201;
        result[3] += 10773411;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8227;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 4787471;
        result[1] += 550284;
        result[2] += 0;
        result[3] += 29522741;
        result[4] += 8089176;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2836569;
        result[1] += 0;
        result[2] += 286522;
        result[3] += 6360792;
        result[4] += 33465789;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 8077690;
        result[1] += 612941;
        result[2] += 0;
        result[3] += 34259040;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 907943;
        result[3] += 20566893;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 42916833;
        result[1] += 0;
        result[2] += 31197;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1641;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 34227943;
        result[1] += 58144;
        result[2] += 198661;
        result[3] += 7830175;
        result[4] += 571757;
        result[5] += 43608;
        result[6] += 19381;
      } else {
        result[0] += 0;
        result[1] += 90230;
        result[2] += 360921;
        result[3] += 34953003;
        result[4] += 7534238;
        result[5] += 11278;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 8167137;
        result[1] += 0;
        result[2] += 0;
        result[3] += 34667016;
        result[4] += 69310;
        result[5] += 46207;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2203996;
        result[3] += 0;
        result[4] += 40350087;
        result[5] += 395589;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 7536452;
        result[4] += 35413220;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 876523;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42073149;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 42868219;
        result[1] += 23956;
        result[2] += 52704;
        result[3] += 4791;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42566229;
        result[1] += 0;
        result[2] += 35577;
        result[3] += 347866;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 38121816;
        result[1] += 69680;
        result[2] += 228949;
        result[3] += 4489408;
        result[4] += 0;
        result[5] += 13272;
        result[6] += 26544;
      } else {
        result[0] += 21948509;
        result[1] += 0;
        result[2] += 119664;
        result[3] += 20881498;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42179658;
        result[1] += 0;
        result[2] += 598899;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 171114;
      } else {
        result[0] += 42780579;
        result[1] += 0;
        result[2] += 169093;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42632701;
        result[1] += 0;
        result[2] += 316971;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42944308;
        result[1] += 0;
        result[2] += 5364;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 17703;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42914265;
        result[5] += 17703;
        result[6] += 0;
      } else {
        result[0] += 755136;
        result[1] += 413773;
        result[2] += 641348;
        result[3] += 41077348;
        result[4] += 0;
        result[5] += 62066;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 26546153;
        result[1] += 0;
        result[2] += 76521;
        result[3] += 16271345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 55652;
      } else {
        result[0] += 39567580;
        result[1] += 0;
        result[2] += 251961;
        result[3] += 3101059;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29072;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 155333;
        result[1] += 217466;
        result[2] += 248533;
        result[3] += 30196804;
        result[4] += 12131535;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42315395;
        result[1] += 0;
        result[2] += 634277;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 155052;
        result[1] += 2015688;
        result[2] += 0;
        result[3] += 10543602;
        result[4] += 30235329;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 65372;
        result[2] += 0;
        result[3] += 1699682;
        result[4] += 41184617;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 29986451;
        result[1] += 0;
        result[2] += 387096;
        result[3] += 11351820;
        result[4] += 1152286;
        result[5] += 27006;
        result[6] += 45011;
      } else {
        result[0] += 42199711;
        result[1] += 22620;
        result[2] += 33060;
        result[3] += 675139;
        result[4] += 6960;
        result[5] += 10440;
        result[6] += 1740;
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
        result[0] += 15139070;
        result[1] += 0;
        result[2] += 333843;
        result[3] += 22273157;
        result[4] += 5123769;
        result[5] += 50802;
        result[6] += 29029;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 40729875;
        result[1] += 57197;
        result[2] += 70815;
        result[3] += 2037310;
        result[4] += 16342;
        result[5] += 19065;
        result[6] += 19065;
      } else {
        result[0] += 18799439;
        result[1] += 127399;
        result[2] += 151287;
        result[3] += 21849073;
        result[4] += 2022472;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 37184616;
        result[1] += 0;
        result[2] += 118904;
        result[3] += 111697;
        result[4] += 5534454;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40582756;
        result[1] += 0;
        result[2] += 295864;
        result[3] += 2071051;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42775841;
        result[4] += 133716;
        result[5] += 40114;
        result[6] += 0;
      } else {
        result[0] += 20423620;
        result[1] += 0;
        result[2] += 810937;
        result[3] += 0;
        result[4] += 21715114;
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
        result[0] += 42460217;
        result[1] += 0;
        result[2] += 285515;
        result[3] += 142757;
        result[4] += 0;
        result[5] += 0;
        result[6] += 61181;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 42786161;
        result[1] += 0;
        result[2] += 28976;
        result[3] += 126255;
        result[4] += 4139;
        result[5] += 0;
        result[6] += 4139;
      } else {
        result[0] += 693435;
        result[1] += 303378;
        result[2] += 736775;
        result[3] += 11355009;
        result[4] += 29817734;
        result[5] += 43339;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 15441332;
        result[1] += 87568;
        result[2] += 315248;
        result[3] += 25400846;
        result[4] += 1628783;
        result[5] += 46703;
        result[6] += 29189;
      } else {
        result[0] += 40453698;
        result[1] += 0;
        result[2] += 68072;
        result[3] += 2416557;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11345;
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
        result[1] += 605398;
        result[2] += 0;
        result[3] += 42344274;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42386398;
        result[1] += 0;
        result[2] += 563274;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42921760;
        result[1] += 0;
        result[2] += 26270;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1641;
      } else {
        result[0] += 24578282;
        result[1] += 53643;
        result[2] += 287151;
        result[3] += 17052386;
        result[4] += 921409;
        result[5] += 31555;
        result[6] += 25244;
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
        result[0] += 35791394;
        result[1] += 0;
        result[2] += 7158278;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 391162;
        result[2] += 0;
        result[3] += 42558510;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41823651;
        result[1] += 0;
        result[2] += 1126021;
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
        result[0] += 38903;
        result[1] += 466844;
        result[2] += 0;
        result[3] += 6924856;
        result[4] += 35519068;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
        result[0] += 265121;
        result[1] += 2916335;
        result[2] += 0;
        result[3] += 1325607;
        result[4] += 38442608;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10792002;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23704975;
        result[4] += 8452695;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 12017926;
        result[1] += 376946;
        result[2] += 487812;
        result[3] += 25787542;
        result[4] += 4279445;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2112876;
        result[1] += 0;
        result[2] += 364288;
        result[3] += 4662899;
        result[4] += 35809608;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 4891152;
        result[1] += 24334;
        result[2] += 0;
        result[3] += 37815179;
        result[4] += 97336;
        result[5] += 121670;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 822003;
        result[3] += 0;
        result[4] += 42024919;
        result[5] += 102750;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42633866;
        result[1] += 26446;
        result[2] += 77784;
        result[3] += 200684;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10889;
      } else {
        result[0] += 27696471;
        result[1] += 0;
        result[2] += 154173;
        result[3] += 15064214;
        result[4] += 0;
        result[5] += 24866;
        result[6] += 9946;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4584119;
        result[1] += 23508;
        result[2] += 0;
        result[3] += 38083453;
        result[4] += 141049;
        result[5] += 117541;
        result[6] += 0;
      } else {
        result[0] += 42646926;
        result[1] += 29498;
        result[2] += 57444;
        result[3] += 209593;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6210;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 11403430;
        result[1] += 422349;
        result[2] += 308639;
        result[3] += 26608004;
        result[4] += 4207248;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5634997;
        result[1] += 0;
        result[2] += 801727;
        result[3] += 2176116;
        result[4] += 34336831;
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
        result[0] += 17451046;
        result[1] += 0;
        result[2] += 311056;
        result[3] += 25036030;
        result[4] += 55830;
        result[5] += 55830;
        result[6] += 39878;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 795364;
        result[3] += 0;
        result[4] += 42154308;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 42914884;
        result[1] += 0;
        result[2] += 34788;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42357535;
        result[1] += 0;
        result[2] += 434233;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 157903;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42933137;
        result[1] += 0;
        result[2] += 16535;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 16982;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42932690;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 905167;
        result[1] += 325453;
        result[2] += 783122;
        result[3] += 40854566;
        result[4] += 0;
        result[5] += 81363;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42237712;
        result[1] += 0;
        result[2] += 216225;
        result[3] += 469366;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26368;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16449;
        result[3] += 42933223;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41804348;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1145324;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40172016;
        result[4] += 2765420;
        result[5] += 12236;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 133740;
        result[2] += 611383;
        result[3] += 0;
        result[4] += 42109020;
        result[5] += 95528;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 42892676;
        result[1] += 0;
        result[2] += 51296;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5699;
      } else {
        result[0] += 42941239;
        result[1] += 0;
        result[2] += 8433;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 40229186;
        result[1] += 163229;
        result[2] += 360464;
        result[3] += 2135581;
        result[4] += 0;
        result[5] += 0;
        result[6] += 61210;
      } else {
        result[0] += 17212955;
        result[1] += 0;
        result[2] += 220577;
        result[3] += 25468872;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47266;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42864708;
        result[1] += 0;
        result[2] += 84964;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42939000;
        result[1] += 0;
        result[2] += 10672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8589934;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34359738;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 625177;
        result[1] += 257885;
        result[2] += 273515;
        result[3] += 27773496;
        result[4] += 13949266;
        result[5] += 70332;
        result[6] += 0;
      } else {
        result[0] += 42154308;
        result[1] += 5338;
        result[2] += 282914;
        result[3] += 491097;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16014;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 42287;
        result[2] += 0;
        result[3] += 42836907;
        result[4] += 42287;
        result[5] += 28191;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1690014;
        result[3] += 0;
        result[4] += 41201382;
        result[5] += 58276;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 42901812;
        result[1] += 0;
        result[2] += 45201;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2658;
      } else {
        result[0] += 42945415;
        result[1] += 0;
        result[2] += 4257;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 17437;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42914797;
        result[5] += 17437;
        result[6] += 0;
      } else {
        result[0] += 745087;
        result[1] += 428680;
        result[2] += 704260;
        result[3] += 41030818;
        result[4] += 0;
        result[5] += 40826;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 25733388;
        result[1] += 6743;
        result[2] += 114640;
        result[3] += 17074669;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20230;
      } else {
        result[0] += 41614819;
        result[1] += 0;
        result[2] += 224173;
        result[3] += 1080110;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30569;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 8047551;
        result[1] += 330721;
        result[2] += 0;
        result[3] += 34571399;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23007434;
        result[1] += 0;
        result[2] += 886321;
        result[3] += 19055916;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 4185256;
        result[1] += 0;
        result[2] += 731404;
        result[3] += 29581231;
        result[4] += 8329879;
        result[5] += 121900;
        result[6] += 0;
      } else {
        result[0] += 38353197;
        result[1] += 0;
        result[2] += 108067;
        result[3] += 4473999;
        result[4] += 0;
        result[5] += 3602;
        result[6] += 10806;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 3786425;
        result[1] += 27638;
        result[2] += 386933;
        result[3] += 22856743;
        result[4] += 15809017;
        result[5] += 82914;
        result[6] += 0;
      } else {
        result[0] += 39546474;
        result[1] += 24776;
        result[2] += 83177;
        result[3] += 3282856;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12388;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42213392;
        result[1] += 0;
        result[2] += 654471;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 81808;
      } else {
        result[0] += 42921379;
        result[1] += 0;
        result[2] += 28293;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 42930245;
        result[1] += 0;
        result[2] += 19427;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 605367;
        result[1] += 298752;
        result[2] += 290891;
        result[3] += 27705408;
        result[4] += 14009942;
        result[5] += 39309;
        result[6] += 0;
      } else {
        result[0] += 42190488;
        result[1] += 5308;
        result[2] += 201741;
        result[3] += 509662;
        result[4] += 0;
        result[5] += 10617;
        result[6] += 31853;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 70803;
        result[2] += 0;
        result[3] += 42779743;
        result[4] += 84964;
        result[5] += 14160;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2260509;
        result[3] += 0;
        result[4] += 40689163;
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 41874897;
        result[1] += 0;
        result[2] += 1074775;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3318758;
        result[1] += 458977;
        result[2] += 300100;
        result[3] += 38871837;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 37414772;
        result[1] += 75870;
        result[2] += 83095;
        result[3] += 5310903;
        result[4] += 14451;
        result[5] += 18064;
        result[6] += 32515;
      } else {
        result[0] += 42635376;
        result[1] += 5069;
        result[2] += 55762;
        result[3] += 149544;
        result[4] += 93782;
        result[5] += 10138;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 6429118;
        result[1] += 0;
        result[2] += 345651;
        result[3] += 29518641;
        result[4] += 6616758;
        result[5] += 39503;
        result[6] += 0;
      } else {
        result[0] += 42707019;
        result[1] += 0;
        result[2] += 167347;
        result[3] += 41836;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33469;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42863255;
        result[5] += 86417;
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
        result[1] += 163358;
        result[2] += 353943;
        result[3] += 42350691;
        result[4] += 0;
        result[5] += 81679;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 26426060;
        result[1] += 175783;
        result[2] += 58594;
        result[3] += 16289234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42702773;
        result[1] += 38820;
        result[2] += 88511;
        result[3] += 113356;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6211;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 18450048;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24499624;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42374155;
        result[1] += 0;
        result[2] += 414908;
        result[3] += 80304;
        result[4] += 0;
        result[5] += 13384;
        result[6] += 66920;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 47301;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42902371;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8116292;
        result[1] += 45984;
        result[2] += 333388;
        result[3] += 34385029;
        result[4] += 0;
        result[5] += 68976;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3798270;
        result[4] += 39151402;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 586343;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42363329;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42694929;
        result[1] += 17721;
        result[2] += 37657;
        result[3] += 199364;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23402687;
        result[1] += 171364;
        result[2] += 399850;
        result[3] += 18970057;
        result[4] += 0;
        result[5] += 5712;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 42599439;
        result[1] += 0;
        result[2] += 105991;
        result[3] += 216591;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27650;
      } else {
        result[0] += 40365915;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2583757;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
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
        result[1] += 297847;
        result[2] += 476556;
        result[3] += 29030245;
        result[4] += 13125165;
        result[5] += 19856;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
        result[0] += 38716549;
        result[1] += 0;
        result[2] += 127953;
        result[3] += 4083844;
        result[4] += 0;
        result[5] += 21325;
        result[6] += 0;
      } else {
        result[0] += 37927930;
        result[1] += 0;
        result[2] += 116538;
        result[3] += 4873421;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31783;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42476398;
        result[1] += 0;
        result[2] += 354955;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 118318;
      } else {
        result[0] += 42934245;
        result[1] += 0;
        result[2] += 15427;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 24808735;
        result[1] += 133767;
        result[2] += 344708;
        result[3] += 10896910;
        result[4] += 6744971;
        result[5] += 10289;
        result[6] += 10289;
      } else {
        result[0] += 0;
        result[1] += 74115;
        result[2] += 55586;
        result[3] += 34037337;
        result[4] += 8764104;
        result[5] += 18528;
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
