
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 286331153;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286055790;
        result[1] += 0;
        result[2] += 260064;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15297;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 210540816;
        result[1] += 326799;
        result[2] += 1770165;
        result[3] += 66068040;
        result[4] += 7325763;
        result[5] += 108933;
        result[6] += 190633;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1485201;
        result[3] += 233098416;
        result[4] += 51356693;
        result[5] += 390842;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 35181313;
        result[1] += 5287365;
        result[2] += 0;
        result[3] += 194615705;
        result[4] += 51246768;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14463018;
        result[1] += 0;
        result[2] += 2563066;
        result[3] += 46684427;
        result[4] += 222620640;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 282285;
        result[1] += 94095;
        result[2] += 2164185;
        result[3] += 282849637;
        result[4] += 376380;
        result[5] += 564570;
        result[6] += 0;
      } else {
        result[0] += 149139105;
        result[1] += 0;
        result[2] += 2190293;
        result[3] += 0;
        result[4] += 135001753;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 21474836;
        result[2] += 0;
        result[3] += 264856316;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 285562255;
        result[1] += 166248;
        result[2] += 488353;
        result[3] += 31171;
        result[4] += 0;
        result[5] += 0;
        result[6] += 83124;
      } else {
        result[0] += 97233287;
        result[1] += 5368709;
        result[2] += 0;
        result[3] += 183729156;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 156821990;
        result[1] += 0;
        result[2] += 1814136;
        result[3] += 127090314;
        result[4] += 0;
        result[5] += 100785;
        result[6] += 503926;
      } else {
        result[0] += 201098560;
        result[1] += 0;
        result[2] += 885896;
        result[3] += 84300069;
        result[4] += 0;
        result[5] += 0;
        result[6] += 46626;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 286331153;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 282503196;
        result[1] += 0;
        result[2] += 3827956;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286253772;
        result[1] += 0;
        result[2] += 77380;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5558369;
        result[1] += 3530315;
        result[2] += 676017;
        result[3] += 258163738;
        result[4] += 18177371;
        result[5] += 225339;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4235056;
        result[3] += 53299738;
        result[4] += 228796357;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 280245023;
        result[1] += 106153;
        result[2] += 1875377;
        result[3] += 3750754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 353844;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 337389;
        result[3] += 285993763;
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
      result[4] += 286331153;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45aed800))) ) ) {
        result[0] += 286123650;
        result[1] += 0;
        result[2] += 196581;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10921;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 210136054;
        result[1] += 436023;
        result[2] += 1635087;
        result[3] += 65866793;
        result[4] += 7793919;
        result[5] += 81754;
        result[6] += 381520;
      } else {
        result[0] += 22966732;
        result[1] += 1882519;
        result[2] += 1317763;
        result[3] += 119163458;
        result[4] += 141000679;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 93940;
        result[2] += 1878813;
        result[3] += 284358398;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8842579;
        result[3] += 0;
        result[4] += 275383197;
        result[5] += 2105376;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42640000))) ) ) {
        result[0] += 95443717;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 190887435;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1588277;
        result[2] += 1852990;
        result[3] += 282713409;
        result[4] += 0;
        result[5] += 176475;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 285531345;
        result[1] += 0;
        result[2] += 799807;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286269792;
        result[1] += 0;
        result[2] += 61360;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 270632760;
        result[1] += 1739043;
        result[2] += 1833045;
        result[3] += 11938298;
        result[4] += 0;
        result[5] += 0;
        result[6] += 188004;
      } else {
        result[0] += 118952022;
        result[1] += 0;
        result[2] += 2037386;
        result[3] += 164976059;
        result[4] += 0;
        result[5] += 0;
        result[6] += 365684;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 286331153;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 285757238;
        result[1] += 0;
        result[2] += 521740;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52174;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 5097127;
        result[1] += 1401710;
        result[2] += 3313133;
        result[3] += 230199033;
        result[4] += 46001578;
        result[5] += 318570;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1540921;
        result[2] += 0;
        result[3] += 38943278;
        result[4] += 245846953;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 166699334;
        result[1] += 45127;
        result[2] += 767159;
        result[3] += 118593895;
        result[4] += 0;
        result[5] += 0;
        result[6] += 225635;
      } else {
        result[0] += 277515066;
        result[1] += 0;
        result[2] += 1469347;
        result[3] += 6963430;
        result[4] += 0;
        result[5] += 0;
        result[6] += 383308;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 284172877;
        result[1] += 0;
        result[2] += 2158275;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286187112;
        result[1] += 0;
        result[2] += 144040;
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
      result[4] += 286331153;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 1692264;
        result[2] += 338452;
        result[3] += 67352127;
        result[4] += 216609855;
        result[5] += 338452;
        result[6] += 0;
      } else {
        result[0] += 161202496;
        result[1] += 356774;
        result[2] += 2299211;
        result[3] += 121105035;
        result[4] += 1209068;
        result[5] += 79283;
        result[6] += 79283;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 105870342;
        result[4] += 180460810;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 2088483;
        result[2] += 0;
        result[3] += 13575145;
        result[4] += 270667523;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 235507160;
        result[1] += 0;
        result[2] += 892394;
        result[3] += 47828096;
        result[4] += 1891026;
        result[5] += 42494;
        result[6] += 169979;
      } else {
        result[0] += 249024411;
        result[1] += 109115;
        result[2] += 621960;
        result[3] += 34338788;
        result[4] += 2138672;
        result[5] += 43646;
        result[6] += 54557;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 190887435;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 95443717;
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
      result[4] += 286331153;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 4708656;
        result[2] += 0;
        result[3] += 281622496;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 279248756;
        result[1] += 0;
        result[2] += 7082396;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
        result[0] += 214748364;
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
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286105517;
        result[1] += 0;
        result[2] += 197430;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28204;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 58801280;
        result[1] += 1585795;
        result[2] += 1902954;
        result[3] += 124516626;
        result[4] += 99524496;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 229447547;
        result[1] += 573937;
        result[2] += 1945011;
        result[3] += 50251436;
        result[4] += 3921907;
        result[5] += 31885;
        result[6] += 159427;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 284717;
        result[2] += 854153;
        result[3] += 285192281;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4996382;
        result[3] += 0;
        result[4] += 280566096;
        result[5] += 768674;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 71424068;
        result[1] += 317440;
        result[2] += 0;
        result[3] += 213319883;
        result[4] += 634880;
        result[5] += 634880;
        result[6] += 0;
      } else {
        result[0] += 285100106;
        result[1] += 102587;
        result[2] += 287244;
        result[3] += 810438;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30776;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 45340583;
        result[1] += 1816926;
        result[2] += 1569164;
        result[3] += 215801356;
        result[4] += 21472771;
        result[5] += 330350;
        result[6] += 0;
      } else {
        result[0] += 7920873;
        result[1] += 0;
        result[2] += 5729993;
        result[3] += 16178805;
        result[4] += 256501480;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 286331153;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1589887;
        result[3] += 235000502;
        result[4] += 49513636;
        result[5] += 227126;
        result[6] += 0;
      } else {
        result[0] += 282820280;
        result[1] += 0;
        result[2] += 2730678;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 780193;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41840000))) ) ) {
        result[0] += 95443717;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 190887435;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286096935;
        result[5] += 234217;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1514979;
        result[2] += 2423967;
        result[3] += 281988211;
        result[4] += 0;
        result[5] += 403994;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 284017201;
        result[1] += 152233;
        result[2] += 578487;
        result[3] += 1522336;
        result[4] += 0;
        result[5] += 0;
        result[6] += 60893;
      } else {
        result[0] += 78409484;
        result[1] += 6241551;
        result[2] += 0;
        result[3] += 201680117;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 55190931;
        result[1] += 0;
        result[2] += 1203072;
        result[3] += 229861957;
        result[4] += 0;
        result[5] += 75192;
        result[6] += 0;
      } else {
        result[0] += 283959178;
        result[1] += 0;
        result[2] += 1694267;
        result[3] += 338853;
        result[4] += 0;
        result[5] += 0;
        result[6] += 338853;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x432e8000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286123421;
        result[1] += 0;
        result[2] += 185865;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21866;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 263498463;
        result[1] += 576583;
        result[2] += 691899;
        result[3] += 21275915;
        result[4] += 0;
        result[5] += 0;
        result[6] += 288291;
      } else {
        result[0] += 119609625;
        result[1] += 0;
        result[2] += 2439827;
        result[3] += 161435235;
        result[4] += 2439827;
        result[5] += 0;
        result[6] += 406637;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 1182575;
        result[1] += 665198;
        result[2] += 3030350;
        result[3] += 230158804;
        result[4] += 51072490;
        result[5] += 221732;
        result[6] += 0;
      } else {
        result[0] += 280016475;
        result[1] += 0;
        result[2] += 4341340;
        result[3] += 1578669;
        result[4] += 0;
        result[5] += 394667;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 960842;
        result[1] += 12490956;
        result[2] += 0;
        result[3] += 272879353;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 319209;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 285852338;
        result[5] += 159604;
        result[6] += 0;
      } else {
        result[0] += 175286;
        result[1] += 1577582;
        result[2] += 1314651;
        result[3] += 282913058;
        result[4] += 0;
        result[5] += 350573;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 164558133;
        result[1] += 0;
        result[2] += 4303828;
        result[3] += 0;
        result[4] += 117469190;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 69470509;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 216860643;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 285549136;
        result[1] += 185214;
        result[2] += 535063;
        result[3] += 41158;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20579;
      } else {
        result[0] += 1072401;
        result[1] += 12868815;
        result[2] += 0;
        result[3] += 272389935;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 158668208;
        result[1] += 0;
        result[2] += 1574870;
        result[3] += 125399068;
        result[4] += 0;
        result[5] += 0;
        result[6] += 689005;
      } else {
        result[0] += 197091276;
        result[1] += 0;
        result[2] += 524940;
        result[3] += 88714935;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        result[0] += 95443717;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 190887435;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 27225310;
        result[1] += 0;
        result[2] += 0;
        result[3] += 259105842;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 99328402;
        result[1] += 3227276;
        result[2] += 4482328;
        result[3] += 178934558;
        result[4] += 0;
        result[5] += 358586;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 286036103;
        result[1] += 29504;
        result[2] += 206534;
        result[3] += 29504;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29504;
      } else {
        result[0] += 251048641;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35282511;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 286180558;
        result[1] += 0;
        result[2] += 150594;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 199395657;
        result[1] += 682342;
        result[2] += 2122843;
        result[3] += 83902862;
        result[4] += 0;
        result[5] += 50543;
        result[6] += 176903;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 282228987;
        result[1] += 0;
        result[2] += 4102165;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286176050;
        result[1] += 0;
        result[2] += 155102;
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
      result[4] += 286331153;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 210098554;
        result[1] += 404918;
        result[2] += 2321530;
        result[3] += 66271611;
        result[4] += 6775631;
        result[5] += 215956;
        result[6] += 242950;
      } else {
        result[0] += 0;
        result[1] += 158544;
        result[2] += 3091615;
        result[3] += 231236980;
        result[4] += 51764740;
        result[5] += 79272;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 55658323;
        result[1] += 3092129;
        result[2] += 1442993;
        result[3] += 226137706;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 2027123;
        result[2] += 0;
        result[3] += 26690455;
        result[4] += 257613574;
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
