
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 142999509;
        result[1] += 0;
        result[2] += 166067;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143147827;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17749;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 130881092;
        result[1] += 212411;
        result[2] += 495627;
        result[3] += 11434837;
        result[4] += 0;
        result[5] += 0;
        result[6] += 141607;
      } else {
        result[0] += 16381744;
        result[1] += 672867;
        result[2] += 1682169;
        result[3] += 77121008;
        result[4] += 47178388;
        result[5] += 129397;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 331401;
        result[2] += 662803;
        result[3] += 142171371;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3971015;
        result[3] += 0;
        result[4] += 138985559;
        result[5] += 209000;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142064302;
        result[5] += 1101273;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 684388;
        result[2] += 1283228;
        result[3] += 140941312;
        result[4] += 0;
        result[5] += 256645;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 140367164;
        result[1] += 0;
        result[2] += 208392;
        result[3] += 2590019;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 79553036;
        result[1] += 0;
        result[2] += 697396;
        result[3] += 62815515;
        result[4] += 0;
        result[5] += 0;
        result[6] += 99628;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 142196794;
        result[1] += 50988;
        result[2] += 142767;
        result[3] += 764827;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10197;
      } else {
        result[0] += 116441152;
        result[1] += 233101;
        result[2] += 603322;
        result[3] += 25888000;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 69090827;
        result[1] += 0;
        result[2] += 2149926;
        result[3] += 71924822;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 19706204;
        result[1] += 2069151;
        result[2] += 985310;
        result[3] += 120404910;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 15565000;
        result[1] += 81067;
        result[2] += 0;
        result[3] += 127033102;
        result[4] += 162135;
        result[5] += 324270;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5089601;
        result[3] += 0;
        result[4] += 138075974;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 142165831;
        result[1] += 72520;
        result[2] += 253821;
        result[3] += 621603;
        result[4] += 0;
        result[5] += 0;
        result[6] += 51800;
      } else {
        result[0] += 93121191;
        result[1] += 0;
        result[2] += 594390;
        result[3] += 49317907;
        result[4] += 0;
        result[5] += 82554;
        result[6] += 49532;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141189830;
        result[1] += 0;
        result[2] += 1823765;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 151980;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 143123887;
        result[1] += 0;
        result[2] += 41688;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47721858;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 95443717;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 87241346;
        result[1] += 281932;
        result[2] += 733025;
        result[3] += 47285802;
        result[4] += 7533249;
        result[5] += 56386;
        result[6] += 33831;
      } else {
        result[0] += 722602;
        result[1] += 0;
        result[2] += 3522686;
        result[3] += 113629208;
        result[4] += 24839453;
        result[5] += 451626;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 26928020;
        result[1] += 1143661;
        result[2] += 1143661;
        result[3] += 113950233;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 248551;
        result[1] += 497102;
        result[2] += 0;
        result[3] += 14581679;
        result[4] += 127838243;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 141834835;
        result[1] += 0;
        result[2] += 1108951;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 221790;
      } else {
        result[0] += 142976396;
        result[1] += 0;
        result[2] += 189179;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 314995;
        result[1] += 1102485;
        result[2] += 0;
        result[3] += 30239593;
        result[4] += 111193506;
        result[5] += 314995;
        result[6] += 0;
      } else {
        result[0] += 83454482;
        result[1] += 181655;
        result[2] += 1047188;
        result[3] += 55404800;
        result[4] += 2863738;
        result[5] += 64113;
        result[6] += 149598;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 24922088;
        result[1] += 1637217;
        result[2] += 1000521;
        result[3] += 115605748;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 57496;
        result[1] += 57496;
        result[2] += 344977;
        result[3] += 139370826;
        result[4] += 3047299;
        result[5] += 287481;
        result[6] += 0;
      } else {
        result[0] += 30967865;
        result[1] += 0;
        result[2] += 2918437;
        result[3] += 0;
        result[4] += 109279273;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45182530;
        result[4] += 97983045;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1078054;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142087522;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 143020212;
        result[1] += 0;
        result[2] += 127193;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18170;
      } else {
        result[0] += 143151768;
        result[1] += 0;
        result[2] += 13808;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 102360819;
        result[1] += 316009;
        result[2] += 895360;
        result[3] += 39448548;
        result[4] += 0;
        result[5] += 26334;
        result[6] += 118503;
      } else {
        result[0] += 20533708;
        result[1] += 912609;
        result[2] += 2737827;
        result[3] += 118639202;
        result[4] += 0;
        result[5] += 342228;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 142153294;
        result[1] += 0;
        result[2] += 795364;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 216917;
      } else {
        result[0] += 143105911;
        result[1] += 0;
        result[2] += 59664;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1975549;
        result[1] += 1049510;
        result[2] += 2500304;
        result[3] += 114087962;
        result[4] += 23305306;
        result[5] += 246943;
        result[6] += 0;
      } else {
        result[0] += 106999093;
        result[1] += 13161;
        result[2] += 342186;
        result[3] += 35705847;
        result[4] += 0;
        result[5] += 13161;
        result[6] += 92127;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 698368;
        result[1] += 0;
        result[2] += 0;
        result[3] += 114532461;
        result[4] += 27934746;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 79448;
        result[1] += 317792;
        result[2] += 0;
        result[3] += 10804949;
        result[4] += 131963386;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 1486147;
        result[1] += 3467678;
        result[2] += 0;
        result[3] += 13375330;
        result[4] += 124836419;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 43659271;
        result[1] += 487510;
        result[2] += 1354195;
        result[3] += 97664598;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 7953643;
        result[4] += 135211933;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 25565281;
        result[1] += 0;
        result[2] += 2130440;
        result[3] += 31104425;
        result[4] += 84365429;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 26786656;
        result[1] += 0;
        result[2] += 0;
        result[3] += 21975460;
        result[4] += 94143394;
        result[5] += 260064;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 202354;
        result[2] += 2529427;
        result[3] += 127887836;
        result[4] += 12444781;
        result[5] += 101177;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 142296051;
        result[1] += 41737;
        result[2] += 139124;
        result[3] += 667795;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20868;
      } else {
        result[0] += 114099093;
        result[1] += 54397;
        result[2] += 707169;
        result[3] += 28241452;
        result[4] += 0;
        result[5] += 9066;
        result[6] += 54397;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142933687;
        result[1] += 0;
        result[2] += 206123;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25765;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 115223;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143050352;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2532369;
        result[1] += 797869;
        result[2] += 2879268;
        result[3] += 136713238;
        result[4] += 0;
        result[5] += 242829;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 78915417;
        result[1] += 0;
        result[2] += 395689;
        result[3] += 63755546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 98922;
      } else {
        result[0] += 139347445;
        result[1] += 114831;
        result[2] += 947355;
        result[3] += 2526282;
        result[4] += 0;
        result[5] += 86123;
        result[6] += 143538;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 87296083;
        result[4] += 55869493;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 48469587;
        result[1] += 314465;
        result[2] += 1006289;
        result[3] += 56289291;
        result[4] += 37085943;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 137968724;
        result[1] += 63699;
        result[2] += 159249;
        result[3] += 4899585;
        result[4] += 15924;
        result[5] += 15924;
        result[6] += 42466;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 21760248;
        result[1] += 0;
        result[2] += 0;
        result[3] += 121405328;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9761289;
        result[1] += 0;
        result[2] += 7081719;
        result[3] += 0;
        result[4] += 125556976;
        result[5] += 765591;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 142890081;
        result[1] += 0;
        result[2] += 0;
        result[3] += 275495;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141992689;
        result[1] += 0;
        result[2] += 952971;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 219916;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143146578;
        result[1] += 0;
        result[2] += 18997;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 67966117;
        result[1] += 227463;
        result[2] += 955347;
        result[3] += 60914746;
        result[4] += 12942677;
        result[5] += 90985;
        result[6] += 68239;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 128606365;
        result[1] += 0;
        result[2] += 220594;
        result[3] += 14118022;
        result[4] += 0;
        result[5] += 0;
        result[6] += 220594;
      } else {
        result[0] += 11848185;
        result[1] += 0;
        result[2] += 5924092;
        result[3] += 47392742;
        result[4] += 78000555;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 140571819;
        result[1] += 68514;
        result[2] += 127240;
        result[3] += 1937976;
        result[4] += 460024;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 116371642;
        result[1] += 194701;
        result[2] += 374426;
        result[3] += 26209829;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14977;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 35904106;
        result[1] += 368877;
        result[2] += 1885375;
        result[3] += 78652946;
        result[4] += 26313283;
        result[5] += 40986;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 119603;
        result[2] += 0;
        result[3] += 7056615;
        result[4] += 135989357;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 91392;
        result[1] += 45696;
        result[2] += 456960;
        result[3] += 138824456;
        result[4] += 3427200;
        result[5] += 319872;
        result[6] += 0;
      } else {
        result[0] += 77980405;
        result[1] += 0;
        result[2] += 2317247;
        result[3] += 0;
        result[4] += 62867923;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24263079;
        result[4] += 118902496;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 839188;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142326387;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 64683242;
        result[1] += 2587329;
        result[2] += 0;
        result[3] += 75895004;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 125536470;
        result[1] += 65454;
        result[2] += 441818;
        result[3] += 17050923;
        result[4] += 0;
        result[5] += 5454;
        result[6] += 65454;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 142973407;
        result[1] += 0;
        result[2] += 192168;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 138335995;
        result[1] += 0;
        result[2] += 419963;
        result[3] += 4283628;
        result[4] += 0;
        result[5] += 0;
        result[6] += 125989;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 70986647;
        result[1] += 0;
        result[2] += 2201136;
        result[3] += 69977792;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17067424;
        result[1] += 1606345;
        result[2] += 301189;
        result[3] += 124190615;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142960468;
        result[5] += 205108;
        result[6] += 0;
      } else {
        result[0] += 140723695;
        result[1] += 27436;
        result[2] += 226354;
        result[3] += 2181230;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6859;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 114237443;
        result[1] += 71705;
        result[2] += 471208;
        result[3] += 26735987;
        result[4] += 1454601;
        result[5] += 81949;
        result[6] += 112680;
      } else {
        result[0] += 67914626;
        result[1] += 0;
        result[2] += 729342;
        result[3] += 74521608;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 1189082;
        result[1] += 1030538;
        result[2] += 1585443;
        result[3] += 139043422;
        result[4] += 317088;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142185948;
        result[1] += 0;
        result[2] += 979627;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 526344;
        result[1] += 3684408;
        result[2] += 0;
        result[3] += 138954824;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 103562665;
        result[1] += 0;
        result[2] += 895278;
        result[3] += 35284508;
        result[4] += 3212470;
        result[5] += 78995;
        result[6] += 131658;
      } else {
        result[0] += 128241623;
        result[1] += 43855;
        result[2] += 324529;
        result[3] += 14441545;
        result[4] += 39469;
        result[5] += 48240;
        result[6] += 26313;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141312616;
        result[1] += 0;
        result[2] += 1462863;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 390096;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 143069352;
        result[1] += 0;
        result[2] += 96224;
        result[3] += 0;
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
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 83829393;
        result[1] += 368318;
        result[2] += 36831;
        result[3] += 53921894;
        result[4] += 4935473;
        result[5] += 0;
        result[6] += 73663;
      } else {
        result[0] += 45256779;
        result[1] += 0;
        result[2] += 2708115;
        result[3] += 68484078;
        result[4] += 26404127;
        result[5] += 156237;
        result[6] += 156237;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 167445;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142998131;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 78090314;
        result[1] += 324160;
        result[2] += 1102146;
        result[3] += 63567914;
        result[4] += 0;
        result[5] += 32416;
        result[6] += 48624;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 18915659;
        result[1] += 0;
        result[2] += 0;
        result[3] += 117666526;
        result[4] += 6583391;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4666137;
        result[1] += 2120971;
        result[2] += 4454040;
        result[3] += 0;
        result[4] += 131924427;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 77976;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143087599;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28788082;
        result[1] += 59602;
        result[2] += 596026;
        result[3] += 113483454;
        result[4] += 0;
        result[5] += 238410;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 120496240;
        result[1] += 0;
        result[2] += 253642;
        result[3] += 22368135;
        result[4] += 0;
        result[5] += 31705;
        result[6] += 15852;
      } else {
        result[0] += 126740980;
        result[1] += 161659;
        result[2] += 476895;
        result[3] += 15729460;
        result[4] += 0;
        result[5] += 0;
        result[6] += 56580;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 142974802;
        result[1] += 0;
        result[2] += 190774;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 138320717;
        result[1] += 0;
        result[2] += 726728;
        result[3] += 3916260;
        result[4] += 0;
        result[5] += 0;
        result[6] += 201869;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
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
        result[4] += 143052446;
        result[5] += 113129;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 569682;
        result[2] += 482038;
        result[3] += 141850924;
        result[4] += 0;
        result[5] += 262930;
        result[6] += 0;
      } else {
        result[0] += 140902089;
        result[1] += 0;
        result[2] += 2263487;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 134001725;
        result[1] += 247448;
        result[2] += 527890;
        result[3] += 8322525;
        result[4] += 0;
        result[5] += 0;
        result[6] += 65986;
      } else {
        result[0] += 106885050;
        result[1] += 0;
        result[2] += 138651;
        result[3] += 36034034;
        result[4] += 0;
        result[5] += 15405;
        result[6] += 92434;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 142266420;
        result[1] += 0;
        result[2] += 432926;
        result[3] += 399624;
        result[4] += 0;
        result[5] += 0;
        result[6] += 66604;
      } else {
        result[0] += 135474863;
        result[1] += 0;
        result[2] += 0;
        result[3] += 7690712;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 1516584;
        result[2] += 0;
        result[3] += 91601703;
        result[4] += 50047288;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141788984;
        result[1] += 0;
        result[2] += 1376592;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 11374383;
        result[1] += 0;
        result[2] += 2123218;
        result[3] += 103431062;
        result[4] += 26085253;
        result[5] += 151658;
        result[6] += 0;
      } else {
        result[0] += 127299974;
        result[1] += 0;
        result[2] += 326751;
        result[3] += 15442035;
        result[4] += 0;
        result[5] += 36305;
        result[6] += 60509;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143001780;
        result[1] += 0;
        result[2] += 155996;
        result[3] += 0;
        result[4] += 7799;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 78373250;
        result[1] += 266292;
        result[2] += 1015240;
        result[3] += 52376432;
        result[4] += 11017857;
        result[5] += 83216;
        result[6] += 33286;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 17242569;
        result[1] += 1567506;
        result[2] += 0;
        result[3] += 92831207;
        result[4] += 31524293;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 991255;
        result[1] += 0;
        result[2] += 1274471;
        result[3] += 17842594;
        result[4] += 123057256;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143129161;
        result[1] += 0;
        result[2] += 36415;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 77721391;
        result[1] += 0;
        result[2] += 1618125;
        result[3] += 57225135;
        result[4] += 6446817;
        result[5] += 102738;
        result[6] += 51369;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 11587267;
        result[1] += 0;
        result[2] += 1186647;
        result[3] += 82786140;
        result[4] += 47256506;
        result[5] += 349014;
        result[6] += 0;
      } else {
        result[0] += 131717852;
        result[1] += 74784;
        result[2] += 299136;
        result[3] += 11027781;
        result[4] += 0;
        result[5] += 0;
        result[6] += 46020;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 2982616;
        result[2] += 0;
        result[3] += 140182960;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 140140951;
        result[1] += 0;
        result[2] += 3024624;
        result[3] += 0;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 27776026;
        result[1] += 872960;
        result[2] += 1587201;
        result[3] += 112770667;
        result[4] += 0;
        result[5] += 158720;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 142843744;
        result[1] += 0;
        result[2] += 49512;
        result[3] += 272319;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 112177837;
        result[1] += 0;
        result[2] += 755256;
        result[3] += 30010348;
        result[4] += 0;
        result[5] += 22213;
        result[6] += 199920;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 123665381;
        result[1] += 240743;
        result[2] += 722229;
        result[3] += 14575903;
        result[4] += 3884719;
        result[5] += 54714;
        result[6] += 21885;
      } else {
        result[0] += 120033159;
        result[1] += 0;
        result[2] += 20765;
        result[3] += 19405066;
        result[4] += 3675437;
        result[5] += 0;
        result[6] += 31147;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 20897408;
        result[1] += 1466484;
        result[2] += 1466484;
        result[3] += 119335198;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 121843;
        result[2] += 0;
        result[3] += 6335838;
        result[4] += 136707895;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 114532461;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143066171;
        result[1] += 0;
        result[2] += 82837;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16567;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41580000))) ) ) {
        result[0] += 76526142;
        result[1] += 174266;
        result[2] += 1347659;
        result[3] += 54498881;
        result[4] += 10490831;
        result[5] += 46471;
        result[6] += 81324;
      } else {
        result[0] += 88580245;
        result[1] += 0;
        result[2] += 345476;
        result[3] += 46362983;
        result[4] += 7738679;
        result[5] += 0;
        result[6] += 138190;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 22516651;
        result[1] += 2352485;
        result[2] += 0;
        result[3] += 118296438;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1076432;
        result[1] += 3229298;
        result[2] += 0;
        result[3] += 1076432;
        result[4] += 137783411;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 1776507;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5434021;
        result[4] += 135955047;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38250344;
        result[1] += 0;
        result[2] += 3825034;
        result[3] += 101090197;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 143165576;
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
        result[3] += 133466461;
        result[4] += 9408971;
        result[5] += 165796;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143035129;
        result[5] += 130446;
        result[6] += 0;
      } else {
        result[0] += 93322746;
        result[1] += 12725829;
        result[2] += 30754086;
        result[3] += 0;
        result[4] += 0;
        result[5] += 6362914;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143111044;
        result[1] += 0;
        result[2] += 54532;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 96421413;
        result[1] += 0;
        result[2] += 987987;
        result[3] += 45632676;
        result[4] += 0;
        result[5] += 30874;
        result[6] += 92623;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 141449111;
        result[1] += 217470;
        result[2] += 411640;
        result[3] += 1032985;
        result[4] += 0;
        result[5] += 0;
        result[6] += 54367;
      } else {
        result[0] += 99028676;
        result[1] += 0;
        result[2] += 349184;
        result[3] += 43787715;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 447858;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142568431;
        result[5] += 149286;
        result[6] += 0;
      } else {
        result[0] += 19226333;
        result[1] += 108623;
        result[2] += 1520726;
        result[3] += 121929711;
        result[4] += 0;
        result[5] += 380181;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 142379963;
        result[1] += 28310;
        result[2] += 155707;
        result[3] += 587440;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14155;
      } else {
        result[0] += 115681858;
        result[1] += 112178;
        result[2] += 767990;
        result[3] += 26534515;
        result[4] += 0;
        result[5] += 0;
        result[6] += 69032;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 1403584;
        result[1] += 5614336;
        result[2] += 0;
        result[3] += 12632256;
        result[4] += 123515399;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23646317;
        result[1] += 702365;
        result[2] += 0;
        result[3] += 118816893;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1908874;
        result[1] += 0;
        result[2] += 0;
        result[3] += 17782671;
        result[4] += 123474030;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 96528305;
        result[1] += 0;
        result[2] += 11930464;
        result[3] += 34706806;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 46596343;
        result[1] += 0;
        result[2] += 112551;
        result[3] += 22172656;
        result[4] += 74284025;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 60766;
        result[2] += 1579925;
        result[3] += 123294972;
        result[4] += 17743781;
        result[5] += 486130;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143048874;
        result[1] += 0;
        result[2] += 100030;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16671;
      } else {
        result[0] += 100285128;
        result[1] += 208981;
        result[2] += 966540;
        result[3] += 41574311;
        result[4] += 0;
        result[5] += 0;
        result[6] += 130613;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9544371;
        result[1] += 4772185;
        result[2] += 0;
        result[3] += 128849018;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 26303913;
        result[1] += 1305156;
        result[2] += 401586;
        result[3] += 115154920;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16567195;
        result[4] += 126598380;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 57358;
        result[1] += 114716;
        result[2] += 573580;
        result[3] += 125843459;
        result[4] += 15945524;
        result[5] += 630938;
        result[6] += 0;
      } else {
        result[0] += 50107951;
        result[1] += 0;
        result[2] += 2947526;
        result[3] += 0;
        result[4] += 90110098;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143014928;
        result[1] += 0;
        result[2] += 139488;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11159;
      } else {
        result[0] += 100677399;
        result[1] += 114420;
        result[2] += 889937;
        result[3] += 41356684;
        result[4] += 0;
        result[5] += 25426;
        result[6] += 101707;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85832289;
        result[1] += 0;
        result[2] += 3688106;
        result[3] += 53645180;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 153776;
        result[1] += 2460418;
        result[2] += 0;
        result[3] += 140551382;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 6817408;
        result[2] += 0;
        result[3] += 136348168;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 142967995;
        result[1] += 0;
        result[2] += 170638;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26942;
      } else {
        result[0] += 143151542;
        result[1] += 0;
        result[2] += 14034;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x445ae000))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 2292096;
        result[1] += 1085730;
        result[2] += 2322256;
        result[3] += 112734974;
        result[4] += 24489245;
        result[5] += 241273;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 740639;
        result[2] += 0;
        result[3] += 18812238;
        result[4] += 123612699;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 78083495;
        result[1] += 0;
        result[2] += 125013;
        result[3] += 64882059;
        result[4] += 0;
        result[5] += 0;
        result[6] += 75008;
      } else {
        result[0] += 138970989;
        result[1] += 86784;
        result[2] += 954630;
        result[3] += 3037459;
        result[4] += 0;
        result[5] += 0;
        result[6] += 115712;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 71069147;
        result[1] += 0;
        result[2] += 2054561;
        result[3] += 70041867;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20219502;
        result[1] += 1245751;
        result[2] += 95827;
        result[3] += 121604495;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 15266663;
        result[1] += 162411;
        result[2] += 1055673;
        result[3] += 117423382;
        result[4] += 9095033;
        result[5] += 162411;
        result[6] += 0;
      } else {
        result[0] += 142135161;
        result[1] += 93203;
        result[2] += 274432;
        result[3] += 636889;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25889;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 55946126;
        result[1] += 0;
        result[2] += 633260;
        result[3] += 69098458;
        result[4] += 17487731;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 133210354;
        result[1] += 0;
        result[2] += 513563;
        result[3] += 8770076;
        result[4] += 434553;
        result[5] += 197524;
        result[6] += 39504;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 1859293;
        result[1] += 3718586;
        result[2] += 0;
        result[3] += 137587696;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 197469;
        result[1] += 1579758;
        result[2] += 0;
        result[3] += 197469;
        result[4] += 141190878;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 137624836;
        result[1] += 0;
        result[2] += 5362006;
        result[3] += 178733;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7044805;
        result[1] += 283683;
        result[2] += 141841;
        result[3] += 91109665;
        result[4] += 44585580;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 141932016;
        result[1] += 0;
        result[2] += 1160998;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 72562;
      } else {
        result[0] += 143106738;
        result[1] += 0;
        result[2] += 58838;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 53935872;
        result[1] += 414636;
        result[2] += 796101;
        result[3] += 75098902;
        result[4] += 12654695;
        result[5] += 116098;
        result[6] += 149269;
      } else {
        result[0] += 137776841;
        result[1] += 0;
        result[2] += 873848;
        result[3] += 4478475;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36410;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 140444733;
        result[1] += 34181;
        result[2] += 109380;
        result[3] += 2495245;
        result[4] += 47854;
        result[5] += 13672;
        result[6] += 20508;
      } else {
        result[0] += 6092152;
        result[1] += 0;
        result[2] += 3452219;
        result[3] += 0;
        result[4] += 133621204;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 93241358;
        result[1] += 119129;
        result[2] += 577317;
        result[3] += 46909337;
        result[4] += 2199304;
        result[5] += 45818;
        result[6] += 73310;
      } else {
        result[0] += 140568265;
        result[1] += 0;
        result[2] += 1612124;
        result[3] += 89562;
        result[4] += 537374;
        result[5] += 223906;
        result[6] += 134343;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 18780649;
        result[1] += 2556528;
        result[2] += 983280;
        result[3] += 120845119;
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
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143051003;
        result[1] += 0;
        result[2] += 101842;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12730;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 29515771;
        result[1] += 625997;
        result[2] += 938995;
        result[3] += 61629431;
        result[4] += 50455380;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 113133670;
        result[1] += 161897;
        result[2] += 971382;
        result[3] += 26275894;
        result[4] += 2444645;
        result[5] += 48569;
        result[6] += 129517;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 371135;
        result[2] += 0;
        result[3] += 142516089;
        result[4] += 278351;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6270025;
        result[3] += 0;
        result[4] += 136686550;
        result[5] += 209000;
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
