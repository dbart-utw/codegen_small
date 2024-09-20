
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
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        result[0] += 71582788;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71582788;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143107778;
        result[5] += 57797;
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
        result[1] += 665473;
        result[2] += 1153487;
        result[3] += 141257885;
        result[4] += 0;
        result[5] += 88729;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 87194543;
        result[1] += 693855;
        result[2] += 925141;
        result[3] += 54352036;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142214104;
        result[1] += 87907;
        result[2] += 341289;
        result[3] += 517104;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5171;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 61931930;
        result[1] += 0;
        result[2] += 0;
        result[3] += 81233646;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141257267;
        result[1] += 0;
        result[2] += 1781088;
        result[3] += 0;
        result[4] += 0;
        result[5] += 42406;
        result[6] += 84813;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        result[0] += 708740;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142456836;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 24291769;
        result[1] += 0;
        result[2] += 0;
        result[3] += 118797776;
        result[4] += 0;
        result[5] += 76030;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 51633486;
        result[1] += 23469766;
        result[2] += 0;
        result[3] += 0;
        result[4] += 61021393;
        result[5] += 7040929;
        result[6] += 0;
      } else {
        result[0] += 3976821;
        result[1] += 0;
        result[2] += 1830600;
        result[3] += 0;
        result[4] += 137231906;
        result[5] += 126248;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 5113056;
        result[1] += 0;
        result[2] += 0;
        result[3] += 138052520;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 72789239;
        result[1] += 4423655;
        result[2] += 0;
        result[3] += 65952681;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 142469413;
        result[1] += 7176;
        result[2] += 64592;
        result[3] += 617216;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7176;
      } else {
        result[0] += 115434962;
        result[1] += 76627;
        result[2] += 638561;
        result[3] += 26947311;
        result[4] += 0;
        result[5] += 0;
        result[6] += 68113;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
        result[0] += 2290649;
        result[1] += 11453246;
        result[2] += 0;
        result[3] += 6871947;
        result[4] += 122549733;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40405303;
        result[1] += 0;
        result[2] += 447952;
        result[3] += 73912140;
        result[4] += 28400180;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
        result[0] += 0;
        result[1] += 477218;
        result[2] += 0;
        result[3] += 5249404;
        result[4] += 137438953;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37636581;
        result[1] += 575803;
        result[2] += 1622717;
        result[3] += 66740808;
        result[4] += 36589666;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143078891;
        result[1] += 0;
        result[2] += 86684;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84920608;
        result[1] += 163963;
        result[2] += 794593;
        result[3] += 56340466;
        result[4] += 794593;
        result[5] += 37837;
        result[6] += 113513;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
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
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 53699684;
        result[1] += 755624;
        result[2] += 755624;
        result[3] += 87803518;
        result[4] += 151124;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10565287;
        result[1] += 0;
        result[2] += 2492932;
        result[3] += 24573195;
        result[4] += 105534160;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 5883516;
        result[2] += 0;
        result[3] += 38242859;
        result[4] += 99039200;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 665886;
        result[2] += 0;
        result[3] += 7990636;
        result[4] += 134509053;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 120943230;
        result[1] += 0;
        result[2] += 473535;
        result[3] += 21478218;
        result[4] += 180394;
        result[5] += 33823;
        result[6] += 56373;
      } else {
        result[0] += 128273298;
        result[1] += 125528;
        result[2] += 256763;
        result[3] += 14287457;
        result[4] += 182587;
        result[5] += 22823;
        result[6] += 17117;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
        result[2] += 197469;
        result[3] += 0;
        result[4] += 142968106;
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
        result[0] += 29465845;
        result[1] += 1761545;
        result[2] += 0;
        result[3] += 111938185;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 70313589;
        result[1] += 0;
        result[2] += 3172995;
        result[3] += 69678990;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 140525516;
        result[1] += 50662;
        result[2] += 95695;
        result[3] += 2448670;
        result[4] += 28145;
        result[5] += 0;
        result[6] += 16887;
      } else {
        result[0] += 97870446;
        result[1] += 0;
        result[2] += 892853;
        result[3] += 39628945;
        result[4] += 4635968;
        result[5] += 0;
        result[6] += 137362;
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
        result[0] += 52103126;
        result[1] += 0;
        result[2] += 1192632;
        result[3] += 73595355;
        result[4] += 16025997;
        result[5] += 99386;
        result[6] += 149079;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 128675871;
        result[1] += 303767;
        result[2] += 243013;
        result[3] += 13760663;
        result[4] += 0;
        result[5] += 0;
        result[6] += 182260;
      } else {
        result[0] += 141246418;
        result[1] += 17936;
        result[2] += 95658;
        result[3] += 1727839;
        result[4] += 35872;
        result[5] += 35872;
        result[6] += 5978;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 22104045;
        result[1] += 694581;
        result[2] += 694581;
        result[3] += 107741902;
        result[4] += 11930464;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2822260;
        result[1] += 0;
        result[2] += 3249875;
        result[3] += 7526027;
        result[4] += 129567412;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 62929923;
        result[1] += 0;
        result[2] += 1236123;
        result[3] += 3708370;
        result[4] += 75291158;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1617690;
        result[1] += 0;
        result[2] += 763909;
        result[3] += 140065003;
        result[4] += 494294;
        result[5] += 224679;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 142917097;
        result[1] += 0;
        result[2] += 0;
        result[3] += 248479;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141115668;
        result[1] += 0;
        result[2] += 1639926;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 409981;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 172627;
        result[1] += 115084;
        result[2] += 402797;
        result[3] += 127571576;
        result[4] += 14730863;
        result[5] += 172627;
        result[6] += 0;
      } else {
        result[0] += 53894377;
        result[1] += 0;
        result[2] += 1658288;
        result[3] += 0;
        result[4] += 87612910;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 128328564;
        result[1] += 0;
        result[2] += 312968;
        result[3] += 14431312;
        result[4] += 0;
        result[5] += 34774;
        result[6] += 57957;
      } else {
        result[0] += 131818430;
        result[1] += 40629;
        result[2] += 232166;
        result[3] += 11062741;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11608;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 15459868;
        result[1] += 719063;
        result[2] += 719063;
        result[3] += 79384629;
        result[4] += 46882951;
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
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 30870077;
        result[4] += 112295499;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 3491843;
        result[2] += 0;
        result[3] += 4738930;
        result[4] += 134934802;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 71582788;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71582788;
        result[5] += 0;
        result[6] += 0;
      }
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
        result[0] += 142994765;
        result[1] += 0;
        result[2] += 157671;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13139;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 130554041;
        result[1] += 211366;
        result[2] += 405119;
        result[3] += 11906979;
        result[4] += 0;
        result[5] += 0;
        result[6] += 88069;
      } else {
        result[0] += 15566646;
        result[1] += 555007;
        result[2] += 1268589;
        result[3] += 78229667;
        result[4] += 47545665;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 94064;
        result[2] += 0;
        result[3] += 142554159;
        result[4] += 423288;
        result[5] += 94064;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7965288;
        result[3] += 0;
        result[4] += 135200288;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 97951658;
        result[1] += 0;
        result[2] += 390387;
        result[3] += 44575102;
        result[4] += 141958;
        result[5] += 0;
        result[6] += 106469;
      } else {
        result[0] += 140235254;
        result[1] += 100852;
        result[2] += 112058;
        result[3] += 2650176;
        result[4] += 16808;
        result[5] += 22411;
        result[6] += 28014;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 38503270;
        result[1] += 1181411;
        result[2] += 1020309;
        result[3] += 90002065;
        result[4] += 12458519;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20485106;
        result[1] += 0;
        result[2] += 2455143;
        result[3] += 6598199;
        result[4] += 113627126;
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
        result[3] += 142158043;
        result[4] += 863599;
        result[5] += 143933;
        result[6] += 0;
      } else {
        result[0] += 67102351;
        result[1] += 0;
        result[2] += 3646866;
        result[3] += 0;
        result[4] += 72416357;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x439bc000))) ) ) {
        result[0] += 142424376;
        result[1] += 0;
        result[2] += 370599;
        result[3] += 256569;
        result[4] += 0;
        result[5] += 0;
        result[6] += 114030;
      } else {
        result[0] += 71582788;
        result[1] += 0;
        result[2] += 71582788;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 142811556;
        result[1] += 0;
        result[2] += 212411;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 141607;
      } else {
        result[0] += 143159671;
        result[1] += 0;
        result[2] += 5905;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 105801237;
        result[1] += 234561;
        result[2] += 827865;
        result[3] += 31872829;
        result[4] += 4249710;
        result[5] += 27595;
        result[6] += 151775;
      } else {
        result[0] += 0;
        result[1] += 115363;
        result[2] += 1115176;
        result[3] += 115016986;
        result[4] += 26841142;
        result[5] += 76908;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 17496536;
        result[1] += 266107;
        result[2] += 532214;
        result[3] += 78967258;
        result[4] += 45903460;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 438709;
        result[1] += 1754838;
        result[2] += 0;
        result[3] += 14184944;
        result[4] += 126787083;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 47721858;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 95443717;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143084290;
        result[1] += 0;
        result[2] += 70447;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10838;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 105240648;
        result[1] += 191470;
        result[2] += 724854;
        result[3] += 33042418;
        result[4] += 3829419;
        result[5] += 13676;
        result[6] += 123088;
      } else {
        result[0] += 0;
        result[1] += 39636;
        result[2] += 1228718;
        result[3] += 115063584;
        result[4] += 26754364;
        result[5] += 79272;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 21356190;
        result[1] += 677974;
        result[2] += 1016961;
        result[3] += 120114449;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 889227;
        result[1] += 16006089;
        result[2] += 0;
        result[3] += 126270260;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 23415741;
        result[1] += 34689;
        result[2] += 0;
        result[3] += 112222108;
        result[4] += 7458347;
        result[5] += 34689;
        result[6] += 0;
      } else {
        result[0] += 6956455;
        result[1] += 1202350;
        result[2] += 601175;
        result[3] += 0;
        result[4] += 134233830;
        result[5] += 171764;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x460c7800))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 143165576;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 140889341;
        result[1] += 131224;
        result[2] += 429002;
        result[3] += 1700867;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15141;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 142556958;
        result[4] += 468167;
        result[5] += 140450;
        result[6] += 0;
      } else {
        result[0] += 69430337;
        result[1] += 0;
        result[2] += 3532227;
        result[3] += 0;
        result[4] += 70203012;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 142907310;
        result[1] += 0;
        result[2] += 0;
        result[3] += 258266;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 140057035;
        result[1] += 0;
        result[2] += 1986012;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1122528;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 52848;
        result[1] += 0;
        result[2] += 634177;
        result[3] += 135344053;
        result[4] += 6870256;
        result[5] += 264240;
        result[6] += 0;
      } else {
        result[0] += 53775771;
        result[1] += 0;
        result[2] += 1986440;
        result[3] += 0;
        result[4] += 87403364;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 2282129;
        result[2] += 0;
        result[3] += 19169885;
        result[4] += 121713561;
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
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143100928;
        result[1] += 0;
        result[2] += 50281;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14366;
      } else {
        result[0] += 100458557;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42707019;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 74550899;
        result[1] += 567971;
        result[2] += 1117622;
        result[3] += 66874117;
        result[4] += 0;
        result[5] += 0;
        result[6] += 54965;
      } else {
        result[0] += 141283142;
        result[1] += 0;
        result[2] += 287394;
        result[3] += 1508821;
        result[4] += 0;
        result[5] += 0;
        result[6] += 86218;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42860000))) ) ) {
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
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142943735;
        result[1] += 0;
        result[2] += 195741;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26098;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1752837;
        result[1] += 953749;
        result[2] += 979526;
        result[3] += 92410621;
        result[4] += 47043063;
        result[5] += 25777;
        result[6] += 0;
      } else {
        result[0] += 140826732;
        result[1] += 17718;
        result[2] += 691021;
        result[3] += 1488355;
        result[4] += 0;
        result[5] += 35437;
        result[6] += 106311;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 94436;
        result[2] += 0;
        result[3] += 142410085;
        result[4] += 566618;
        result[5] += 94436;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5426100;
        result[3] += 0;
        result[4] += 137739475;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42860000))) ) ) {
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
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 142687675;
        result[1] += 0;
        result[2] += 477901;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143129977;
        result[1] += 0;
        result[2] += 35598;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 2493902;
        result[1] += 779344;
        result[2] += 831300;
        result[3] += 93651225;
        result[4] += 45305891;
        result[5] += 103912;
        result[6] += 0;
      } else {
        result[0] += 140369234;
        result[1] += 0;
        result[2] += 819310;
        result[3] += 1781109;
        result[4] += 0;
        result[5] += 17811;
        result[6] += 178110;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 141794;
        result[2] += 519914;
        result[3] += 142503867;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2900605;
        result[3] += 0;
        result[4] += 140264971;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 77765;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142932281;
        result[5] += 155530;
        result[6] += 0;
      } else {
        result[0] += 27865431;
        result[1] += 442894;
        result[2] += 369078;
        result[3] += 114451263;
        result[4] += 0;
        result[5] += 36907;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 141294937;
        result[1] += 128477;
        result[2] += 308347;
        result[3] += 1423535;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10278;
      } else {
        result[0] += 109698298;
        result[1] += 0;
        result[2] += 5113056;
        result[3] += 28354221;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 55960657;
        result[1] += 0;
        result[2] += 1210813;
        result[3] += 85257088;
        result[4] += 447474;
        result[5] += 105288;
        result[6] += 184254;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4338350;
        result[3] += 0;
        result[4] += 138827225;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 140521357;
        result[1] += 0;
        result[2] += 2644219;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143110400;
        result[1] += 0;
        result[2] += 55176;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
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
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 101446046;
        result[1] += 413809;
        result[2] += 990635;
        result[3] += 40164609;
        result[4] += 25079;
        result[5] += 25079;
        result[6] += 100317;
      } else {
        result[0] += 0;
        result[1] += 39191;
        result[2] += 979780;
        result[3] += 116319581;
        result[4] += 25787831;
        result[5] += 39191;
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
        result[0] += 354370;
        result[1] += 6024294;
        result[2] += 0;
        result[3] += 136786912;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 22030870;
        result[1] += 140324;
        result[2] += 0;
        result[3] += 113767695;
        result[4] += 7156524;
        result[5] += 70162;
        result[6] += 0;
      } else {
        result[0] += 8588266;
        result[1] += 1000574;
        result[2] += 583668;
        result[3] += 0;
        result[4] += 132993066;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 142457166;
        result[1] += 77001;
        result[2] += 292604;
        result[3] += 313137;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25667;
      } else {
        result[0] += 1590728;
        result[1] += 4772185;
        result[2] += 0;
        result[3] += 136802661;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 46551228;
        result[1] += 0;
        result[2] += 0;
        result[3] += 96614347;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 114850859;
        result[1] += 0;
        result[2] += 5344544;
        result[3] += 0;
        result[4] += 22174175;
        result[5] += 341141;
        result[6] += 454854;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 16240423;
        result[1] += 0;
        result[2] += 249852;
        result[3] += 0;
        result[4] += 126675300;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 96794258;
        result[1] += 0;
        result[2] += 123525;
        result[3] += 46074857;
        result[4] += 24705;
        result[5] += 98820;
        result[6] += 49410;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41700000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
        result[0] += 71582788;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71582788;
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
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 142017189;
        result[1] += 0;
        result[2] += 1148386;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143105134;
        result[1] += 0;
        result[2] += 54947;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5494;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 106801712;
        result[1] += 233101;
        result[2] += 973542;
        result[3] += 31866372;
        result[4] += 3167440;
        result[5] += 27423;
        result[6] += 95983;
      } else {
        result[0] += 0;
        result[1] += 115798;
        result[2] += 1235184;
        result[3] += 116107321;
        result[4] += 25707272;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 28566937;
        result[1] += 1102970;
        result[2] += 1433861;
        result[3] += 112061807;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 88428;
        result[1] += 972712;
        result[2] += 0;
        result[3] += 12556832;
        result[4] += 129547603;
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
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 4618244;
        result[1] += 0;
        result[2] += 0;
        result[3] += 138547332;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 50211234;
        result[1] += 953377;
        result[2] += 1588963;
        result[3] += 90412001;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143050877;
        result[1] += 0;
        result[2] += 109236;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5461;
      } else {
        result[0] += 85115435;
        result[1] += 203768;
        result[2] += 898980;
        result[3] += 54909704;
        result[4] += 1809946;
        result[5] += 47945;
        result[6] += 179796;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 415574;
        result[3] += 0;
        result[4] += 142750001;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 95443717;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47721858;
        result[5] += 0;
        result[6] += 0;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143099621;
        result[1] += 0;
        result[2] += 60458;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5496;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 148975;
        result[2] += 297951;
        result[3] += 34562345;
        result[4] += 108156304;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 83572076;
        result[1] += 149732;
        result[2] += 898394;
        result[3] += 55315431;
        result[4] += 3101599;
        result[5] += 64171;
        result[6] += 64171;
      }
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 19595288;
        result[1] += 2199471;
        result[2] += 999759;
        result[3] += 120371057;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 1066906;
        result[1] += 1733723;
        result[2] += 866861;
        result[3] += 139498083;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141523769;
        result[1] += 0;
        result[2] += 1641807;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 172074;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142821428;
        result[5] += 172074;
        result[6] += 0;
      } else {
        result[0] += 14569202;
        result[1] += 0;
        result[2] += 1347440;
        result[3] += 126827857;
        result[4] += 0;
        result[5] += 421075;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 142365074;
        result[1] += 6900;
        result[2] += 103513;
        result[3] += 683186;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6900;
      } else {
        result[0] += 115434479;
        result[1] += 128597;
        result[2] += 450090;
        result[3] += 27069739;
        result[4] += 0;
        result[5] += 18371;
        result[6] += 64298;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 138933020;
        result[1] += 85152;
        result[2] += 100178;
        result[3] += 4037207;
        result[4] += 5008;
        result[5] += 0;
        result[6] += 5008;
      } else {
        result[0] += 927925;
        result[1] += 0;
        result[2] += 927925;
        result[3] += 140779483;
        result[4] += 530242;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 33104180;
        result[1] += 1658067;
        result[2] += 628922;
        result[3] += 92851795;
        result[4] += 14922610;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16163855;
        result[1] += 0;
        result[2] += 2078209;
        result[3] += 6850395;
        result[4] += 118073115;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 43185873;
        result[1] += 0;
        result[2] += 0;
        result[3] += 99979703;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 83806234;
        result[1] += 0;
        result[2] += 2534627;
        result[3] += 490573;
        result[4] += 56334141;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 118474220;
        result[1] += 0;
        result[2] += 885788;
        result[3] += 22255437;
        result[4] += 885788;
        result[5] += 332170;
        result[6] += 332170;
      } else {
        result[0] += 131864621;
        result[1] += 0;
        result[2] += 543896;
        result[3] += 10394461;
        result[4] += 241731;
        result[5] += 60432;
        result[6] += 60432;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142943998;
        result[1] += 0;
        result[2] += 221578;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 128687755;
        result[1] += 501706;
        result[2] += 322525;
        result[3] += 13402734;
        result[4] += 0;
        result[5] += 143344;
        result[6] += 107508;
      } else {
        result[0] += 39332091;
        result[1] += 485581;
        result[2] += 647441;
        result[3] += 98492089;
        result[4] += 4208371;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 18426201;
        result[1] += 0;
        result[2] += 1096376;
        result[3] += 100194683;
        result[4] += 23412947;
        result[5] += 35366;
        result[6] += 0;
      } else {
        result[0] += 72790989;
        result[1] += 473315;
        result[2] += 1519592;
        result[3] += 25085737;
        result[4] += 43071738;
        result[5] += 74734;
        result[6] += 149468;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 19888770;
        result[1] += 0;
        result[2] += 839188;
        result[3] += 107416141;
        result[4] += 14937557;
        result[5] += 83918;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 3637600;
        result[2] += 0;
        result[3] += 15589717;
        result[4] += 123938257;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 142116744;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1048832;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 239607;
        result[2] += 678888;
        result[3] += 73879028;
        result[4] += 68248248;
        result[5] += 119803;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143111168;
        result[1] += 0;
        result[2] += 54407;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 98408899;
        result[1] += 0;
        result[2] += 867858;
        result[3] += 43640859;
        result[4] += 0;
        result[5] += 0;
        result[6] += 247959;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143092669;
        result[1] += 0;
        result[2] += 64806;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8100;
      } else {
        result[0] += 99963720;
        result[1] += 413414;
        result[2] += 1095549;
        result[3] += 41548196;
        result[4] += 0;
        result[5] += 0;
        result[6] += 144695;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 521143;
        result[1] += 670041;
        result[2] += 2159023;
        result[3] += 137879691;
        result[4] += 1935676;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141288405;
        result[1] += 0;
        result[2] += 1877171;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 51386642;
        result[4] += 91778933;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 203071;
        result[1] += 1116894;
        result[2] += 0;
        result[3] += 7919797;
        result[4] += 133925812;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143147890;
        result[1] += 0;
        result[2] += 17685;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 78693265;
        result[1] += 0;
        result[2] += 1314542;
        result[3] += 56913694;
        result[4] += 6005066;
        result[5] += 0;
        result[6] += 239007;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 136545970;
        result[1] += 37934;
        result[2] += 104320;
        result[3] += 1925186;
        result[4] += 4523713;
        result[5] += 0;
        result[6] += 28451;
      } else {
        result[0] += 108200322;
        result[1] += 233101;
        result[2] += 507338;
        result[3] += 33511796;
        result[4] += 644457;
        result[5] += 27423;
        result[6] += 41135;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1321528;
        result[1] += 6167132;
        result[2] += 0;
        result[3] += 27752096;
        result[4] += 107924819;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 325376;
        result[4] += 142840200;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 51047607;
        result[1] += 633476;
        result[2] += 1372531;
        result[3] += 90111961;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 18713599;
        result[4] += 124451977;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 335282;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142662652;
        result[5] += 167641;
        result[6] += 0;
      } else {
        result[0] += 18043432;
        result[1] += 157584;
        result[2] += 1812222;
        result[3] += 123073544;
        result[4] += 0;
        result[5] += 78792;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 134231950;
        result[1] += 65019;
        result[2] += 409620;
        result[3] += 8413472;
        result[4] += 0;
        result[5] += 0;
        result[6] += 45513;
      } else {
        result[0] += 125298786;
        result[1] += 0;
        result[2] += 160871;
        result[3] += 17705918;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143056572;
        result[1] += 0;
        result[2] += 109003;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 106682910;
        result[1] += 192593;
        result[2] += 1059262;
        result[3] += 31420214;
        result[4] += 3604245;
        result[5] += 55026;
        result[6] += 151323;
      } else {
        result[0] += 0;
        result[1] += 76970;
        result[2] += 962134;
        result[3] += 115032771;
        result[4] += 27016729;
        result[5] += 76970;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 19717414;
        result[1] += 3048102;
        result[2] += 952532;
        result[3] += 119447526;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 839680;
        result[1] += 1609388;
        result[2] += 1469441;
        result[3] += 139247066;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 141986045;
        result[1] += 0;
        result[2] += 1179531;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 143094300;
        result[1] += 0;
        result[2] += 65793;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5482;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 51445157;
        result[1] += 167464;
        result[2] += 1021534;
        result[3] += 76715581;
        result[4] += 13631627;
        result[5] += 117225;
        result[6] += 66985;
      } else {
        result[0] += 138987592;
        result[1] += 0;
        result[2] += 487431;
        result[3] += 3481653;
        result[4] += 0;
        result[5] += 0;
        result[6] += 208899;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143016175;
        result[1] += 0;
        result[2] += 141537;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7863;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 2610468;
        result[1] += 1379819;
        result[2] += 671263;
        result[3] += 128285903;
        result[4] += 10106244;
        result[5] += 111877;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2773929;
        result[3] += 28869412;
        result[4] += 111522234;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 79145044;
        result[1] += 0;
        result[2] += 270960;
        result[3] += 63700306;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49265;
      } else {
        result[0] += 138942832;
        result[1] += 87367;
        result[2] += 1077527;
        result[3] += 3057848;
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
