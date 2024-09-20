
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
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41180000))) ) ) {
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
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84760097;
        result[1] += 0;
        result[2] += 1139248;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85879417;
        result[1] += 0;
        result[2] += 16606;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3321;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85793297;
        result[5] += 106048;
        result[6] += 0;
      } else {
        result[0] += 1543601;
        result[1] += 938676;
        result[2] += 1355866;
        result[3] += 81998622;
        result[4] += 0;
        result[5] += 62578;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 46839025;
        result[1] += 0;
        result[2] += 166794;
        result[3] += 38848036;
        result[4] += 0;
        result[5] += 0;
        result[6] += 45489;
      } else {
        result[0] += 83323395;
        result[1] += 0;
        result[2] += 772784;
        result[3] += 1648607;
        result[4] += 0;
        result[5] += 0;
        result[6] += 154556;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85292283;
        result[5] += 607062;
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
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 295926;
        result[2] += 618755;
        result[3] += 84769445;
        result[4] += 0;
        result[5] += 215219;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85843038;
        result[1] += 0;
        result[2] += 25988;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30319;
      } else {
        result[0] += 61308552;
        result[1] += 1347440;
        result[2] += 0;
        result[3] += 23243352;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 46085495;
        result[1] += 338692;
        result[2] += 654026;
        result[3] += 38762736;
        result[4] += 0;
        result[5] += 23358;
        result[6] += 35037;
      } else {
        result[0] += 84933188;
        result[1] += 0;
        result[2] += 212731;
        result[3] += 700242;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53182;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 175663;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85372356;
        result[5] += 351326;
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
        result[0] += 26244;
        result[1] += 314938;
        result[2] += 734855;
        result[3] += 84665838;
        result[4] += 0;
        result[5] += 157469;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 85644861;
        result[1] += 53410;
        result[2] += 172797;
        result[3] += 12567;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15708;
      } else {
        result[0] += 31152337;
        result[1] += 2949333;
        result[2] += 0;
        result[3] += 51797674;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 35717597;
        result[1] += 0;
        result[2] += 745734;
        result[3] += 49265115;
        result[4] += 0;
        result[5] += 31072;
        result[6] += 139825;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 85803630;
        result[1] += 0;
        result[2] += 90397;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5317;
      } else {
        result[0] += 85874153;
        result[1] += 0;
        result[2] += 25192;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x42cd0000))) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 34720;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85864625;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2009465;
        result[1] += 528806;
        result[2] += 1459506;
        result[3] += 81795806;
        result[4] += 0;
        result[5] += 105761;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 48184494;
        result[1] += 0;
        result[2] += 196117;
        result[3] += 37473476;
        result[4] += 0;
        result[5] += 0;
        result[6] += 45257;
      } else {
        result[0] += 83419958;
        result[1] += 0;
        result[2] += 756125;
        result[3] += 1565003;
        result[4] += 0;
        result[5] += 0;
        result[6] += 158258;
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
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 16718372;
        result[1] += 957823;
        result[2] += 0;
        result[3] += 68223150;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 45119604;
        result[1] += 0;
        result[2] += 2244756;
        result[3] += 38534985;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 7151582;
        result[1] += 80354;
        result[2] += 763371;
        result[3] += 54761837;
        result[4] += 22780602;
        result[5] += 361596;
        result[6] += 0;
      } else {
        result[0] += 3817748;
        result[1] += 0;
        result[2] += 0;
        result[3] += 34996029;
        result[4] += 47085567;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 80453839;
        result[1] += 81916;
        result[2] += 253551;
        result[3] += 5067129;
        result[4] += 0;
        result[5] += 7801;
        result[6] += 35107;
      } else {
        result[0] += 75373651;
        result[1] += 0;
        result[2] += 108886;
        result[3] += 10416808;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 387321;
        result[2] += 344285;
        result[3] += 56807182;
        result[4] += 28274484;
        result[5] += 86071;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 16421422;
        result[1] += 34791;
        result[2] += 0;
        result[3] += 63493846;
        result[4] += 5844912;
        result[5] += 104373;
        result[6] += 0;
      } else {
        result[0] += 3333407;
        result[1] += 153849;
        result[2] += 1025663;
        result[3] += 0;
        result[4] += 81335141;
        result[5] += 51283;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 52752000;
        result[1] += 386933;
        result[2] += 128977;
        result[3] += 32631433;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85350866;
        result[1] += 87258;
        result[2] += 215028;
        result[3] += 236843;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9349;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 37202450;
        result[1] += 0;
        result[2] += 0;
        result[3] += 48696895;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84852415;
        result[1] += 0;
        result[2] += 740511;
        result[3] += 76604;
        result[4] += 0;
        result[5] += 0;
        result[6] += 229813;
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
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 27282219;
        result[1] += 411142;
        result[2] += 851651;
        result[3] += 57354332;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8288533;
        result[1] += 753503;
        result[2] += 0;
        result[3] += 76857309;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 85827186;
        result[1] += 0;
        result[2] += 52479;
        result[3] += 0;
        result[4] += 3279;
        result[5] += 0;
        result[6] += 16399;
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
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 45976111;
        result[1] += 150248;
        result[2] += 815635;
        result[3] += 33720108;
        result[4] += 5086992;
        result[5] += 75124;
        result[6] += 75124;
      } else {
        result[0] += 51356125;
        result[1] += 0;
        result[2] += 131058;
        result[3] += 28982604;
        result[4] += 5429557;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84803690;
        result[1] += 0;
        result[2] += 1095654;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85839462;
        result[1] += 0;
        result[2] += 56556;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3326;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4635bc00))) ) ) {
        result[0] += 9544371;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 76354974;
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
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 51736959;
        result[1] += 0;
        result[2] += 850657;
        result[3] += 30028192;
        result[4] += 3181457;
        result[5] += 51039;
        result[6] += 51039;
      } else {
        result[0] += 5103463;
        result[1] += 590927;
        result[2] += 107441;
        result[3] += 52431370;
        result[4] += 27451260;
        result[5] += 214882;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 96516;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85802829;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47793037;
        result[1] += 320302;
        result[2] += 611486;
        result[3] += 37087163;
        result[4] += 0;
        result[5] += 67942;
        result[6] += 19412;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 101028;
        result[1] += 25257;
        result[2] += 0;
        result[3] += 79610331;
        result[4] += 6112214;
        result[5] += 50514;
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
        result[1] += 376256;
        result[2] += 790138;
        result[3] += 0;
        result[4] += 84394320;
        result[5] += 338630;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85591696;
        result[1] += 46613;
        result[2] += 223744;
        result[3] += 21752;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15537;
      } else {
        result[0] += 286331;
        result[1] += 1717986;
        result[2] += 0;
        result[3] += 83895027;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 39413691;
        result[1] += 0;
        result[2] += 250018;
        result[3] += 46235635;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 75228619;
        result[1] += 0;
        result[2] += 632339;
        result[3] += 9919823;
        result[4] += 0;
        result[5] += 19760;
        result[6] += 98803;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45471000))) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 25626;
        result[2] += 0;
        result[3] += 80235934;
        result[4] += 5586532;
        result[5] += 51252;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 640196;
        result[2] += 1242734;
        result[3] += 0;
        result[4] += 83715145;
        result[5] += 301269;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 84349220;
        result[1] += 89645;
        result[2] += 212908;
        result[3] += 1217688;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29881;
      } else {
        result[0] += 14124940;
        result[1] += 0;
        result[2] += 351950;
        result[3] += 71398991;
        result[4] += 0;
        result[5] += 23463;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 81563185;
        result[1] += 0;
        result[2] += 260169;
        result[3] += 4075991;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85574162;
        result[1] += 0;
        result[2] += 233725;
        result[3] += 60971;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30485;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85837225;
        result[1] += 0;
        result[2] += 55581;
        result[3] += 0;
        result[4] += 3269;
        result[5] += 0;
        result[6] += 3269;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 63648460;
        result[1] += 66222;
        result[2] += 720173;
        result[3] += 19163244;
        result[4] += 2218466;
        result[5] += 33111;
        result[6] += 49667;
      } else {
        result[0] += 0;
        result[1] += 91944;
        result[2] += 643612;
        result[3] += 69372284;
        result[4] += 15722545;
        result[5] += 68958;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 341774;
        result[1] += 797474;
        result[2] += 0;
        result[3] += 0;
        result[4] += 84760097;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 16728756;
        result[1] += 0;
        result[2] += 0;
        result[3] += 47460798;
        result[4] += 21709790;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6563947;
        result[1] += 883608;
        result[2] += 189344;
        result[3] += 44559102;
        result[4] += 33703343;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 81395698;
        result[1] += 180997;
        result[2] += 234232;
        result[3] += 4045829;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42587;
      } else {
        result[0] += 85647288;
        result[1] += 17383;
        result[2] += 26074;
        result[3] += 199907;
        result[4] += 8691;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 15210577;
        result[1] += 0;
        result[2] += 979747;
        result[3] += 67651552;
        result[4] += 2057469;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85333780;
        result[1] += 0;
        result[2] += 382588;
        result[3] += 83171;
        result[4] += 0;
        result[5] += 0;
        result[6] += 99805;
      }
    }
  } else {
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
        result[0] += 3221225;
        result[1] += 10737418;
        result[2] += 0;
        result[3] += 71940702;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 51405;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85745128;
        result[5] += 102811;
        result[6] += 0;
      } else {
        result[0] += 22887339;
        result[1] += 172373;
        result[2] += 842713;
        result[3] += 61824545;
        result[4] += 0;
        result[5] += 172373;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 119304;
        result[1] += 39768;
        result[2] += 159072;
        result[3] += 83234875;
        result[4] += 2107715;
        result[5] += 238609;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 344348;
        result[2] += 0;
        result[3] += 33026169;
        result[4] += 52528827;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 85671797;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 227547;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 908301;
        result[3] += 0;
        result[4] += 84991044;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 85646538;
        result[1] += 32175;
        result[2] += 59754;
        result[3] += 156280;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4596;
      } else {
        result[0] += 83828558;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2070787;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 76256375;
        result[1] += 151184;
        result[2] += 545580;
        result[3] += 8873899;
        result[4] += 0;
        result[5] += 6573;
        result[6] += 65732;
      } else {
        result[0] += 43917862;
        result[1] += 0;
        result[2] += 419215;
        result[3] += 41562267;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 855733;
        result[2] += 774235;
        result[3] += 73185590;
        result[4] += 11083786;
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
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 26085997;
        result[1] += 0;
        result[2] += 2898444;
        result[3] += 56914904;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1690014;
        result[4] += 84209331;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 85853518;
        result[1] += 0;
        result[2] += 45826;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 31254599;
        result[1] += 142251;
        result[2] += 629969;
        result[3] += 45449228;
        result[4] += 8260724;
        result[5] += 111768;
        result[6] += 50803;
      } else {
        result[0] += 83076758;
        result[1] += 0;
        result[2] += 568730;
        result[3] += 2148536;
        result[4] += 0;
        result[5] += 0;
        result[6] += 105320;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x45102800))) ) ) {
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
        result[4] += 85791296;
        result[5] += 108049;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 101977;
        result[1] += 407911;
        result[2] += 373918;
        result[3] += 84981545;
        result[4] += 0;
        result[5] += 33992;
        result[6] += 0;
      } else {
        result[0] += 80145322;
        result[1] += 0;
        result[2] += 5754023;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 85792765;
        result[1] += 0;
        result[2] += 93257;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13322;
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
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 44753445;
        result[1] += 312464;
        result[2] += 298261;
        result[3] += 40492565;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42608;
      } else {
        result[0] += 68071179;
        result[1] += 149816;
        result[2] += 694603;
        result[3] += 16793070;
        result[4] += 0;
        result[5] += 54478;
        result[6] += 136196;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 25741;
        result[2] += 0;
        result[3] += 80339184;
        result[4] += 5508678;
        result[5] += 25741;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 753503;
        result[2] += 1017229;
        result[3] += 0;
        result[4] += 83977913;
        result[5] += 150700;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 85422127;
        result[1] += 193653;
        result[2] += 214402;
        result[3] += 41497;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27664;
      } else {
        result[0] += 84228152;
        result[1] += 0;
        result[2] += 89130;
        result[3] += 1582063;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 40090232;
        result[1] += 0;
        result[2] += 87089;
        result[3] += 45722024;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84783769;
        result[1] += 0;
        result[2] += 862035;
        result[3] += 50707;
        result[4] += 0;
        result[5] += 0;
        result[6] += 202831;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 64424509;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85864611;
        result[5] += 34734;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 10222732;
        result[1] += 0;
        result[2] += 0;
        result[3] += 75619820;
        result[4] += 0;
        result[5] += 56792;
        result[6] += 0;
      } else {
        result[0] += 34398388;
        result[1] += 869622;
        result[2] += 2608866;
        result[3] += 47829219;
        result[4] += 0;
        result[5] += 193249;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 85724687;
        result[1] += 38812;
        result[2] += 90563;
        result[3] += 25875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19406;
      } else {
        result[0] += 84985112;
        result[1] += 0;
        result[2] += 0;
        result[3] += 914233;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85853992;
        result[1] += 0;
        result[2] += 45353;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 58910320;
        result[1] += 202080;
        result[2] += 696056;
        result[3] += 25971136;
        result[4] += 0;
        result[5] += 14968;
        result[6] += 104782;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 27950325;
        result[1] += 363420;
        result[2] += 297343;
        result[3] += 57189141;
        result[4] += 99114;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 965161;
        result[1] += 2895483;
        result[2] += 0;
        result[3] += 15683869;
        result[4] += 66354831;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23520058;
        result[1] += 0;
        result[2] += 2045222;
        result[3] += 60334064;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 81555376;
        result[1] += 0;
        result[2] += 185413;
        result[3] += 1787914;
        result[4] += 2370641;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 60279556;
        result[1] += 0;
        result[2] += 495698;
        result[3] += 24510990;
        result[4] += 495698;
        result[5] += 52178;
        result[6] += 65223;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 76214415;
        result[1] += 44207;
        result[2] += 146226;
        result[3] += 9062619;
        result[4] += 404672;
        result[5] += 10201;
        result[6] += 17003;
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
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 18925125;
        result[1] += 545392;
        result[2] += 0;
        result[3] += 66374288;
        result[4] += 54539;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44914187;
        result[1] += 0;
        result[2] += 1771914;
        result[3] += 39213244;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 80960;
        result[1] += 728646;
        result[2] += 0;
        result[3] += 17406559;
        result[4] += 67683179;
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 17482598;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16423046;
        result[4] += 51842336;
        result[5] += 151364;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 171684;
        result[2] += 1259017;
        result[3] += 74968782;
        result[4] += 9270948;
        result[5] += 228912;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 85528641;
        result[1] += 12495;
        result[2] += 33321;
        result[3] += 316556;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8330;
      } else {
        result[0] += 69254015;
        result[1] += 60368;
        result[2] += 334772;
        result[3] += 16162380;
        result[4] += 0;
        result[5] += 27440;
        result[6] += 60368;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85043206;
        result[5] += 856139;
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 5658802;
        result[1] += 0;
        result[2] += 0;
        result[3] += 80240543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47721858;
        result[1] += 10498808;
        result[2] += 22906492;
        result[3] += 0;
        result[4] += 0;
        result[5] += 4772185;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 85443536;
        result[1] += 0;
        result[2] += 290060;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 165748;
      } else {
        result[0] += 85881441;
        result[1] += 0;
        result[2] += 17903;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 80134289;
        result[1] += 576505;
        result[2] += 559035;
        result[3] += 4612045;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17469;
      } else {
        result[0] += 40696575;
        result[1] += 0;
        result[2] += 516334;
        result[3] += 44592556;
        result[4] += 0;
        result[5] += 82144;
        result[6] += 11734;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 5052902;
        result[1] += 0;
        result[2] += 821096;
        result[3] += 61582251;
        result[4] += 18253611;
        result[5] += 189483;
        result[6] += 0;
      } else {
        result[0] += 76398698;
        result[1] += 0;
        result[2] += 309192;
        result[3] += 9142265;
        result[4] += 0;
        result[5] += 7027;
        result[6] += 42162;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 78641734;
        result[1] += 84538;
        result[2] += 283203;
        result[3] += 6019125;
        result[4] += 832702;
        result[5] += 12680;
        result[6] += 25361;
      } else {
        result[0] += 55538483;
        result[1] += 0;
        result[2] += 92322;
        result[3] += 23634519;
        result[4] += 6620830;
        result[5] += 13188;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 13168531;
        result[1] += 1148025;
        result[2] += 0;
        result[3] += 71582788;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 334238;
        result[1] += 2339670;
        result[2] += 0;
        result[3] += 0;
        result[4] += 83225436;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 1569249;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1910390;
        result[4] += 82419705;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21108371;
        result[1] += 0;
        result[2] += 2638546;
        result[3] += 62152427;
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
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 85569914;
        result[1] += 0;
        result[2] += 329431;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85888761;
        result[1] += 0;
        result[2] += 10584;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 64292356;
        result[1] += 74335;
        result[2] += 718581;
        result[3] += 18377504;
        result[4] += 2312674;
        result[5] += 49557;
        result[6] += 74335;
      } else {
        result[0] += 0;
        result[1] += 165509;
        result[2] += 638393;
        result[3] += 69206547;
        result[4] += 15841607;
        result[5] += 47288;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 19398581;
        result[1] += 666826;
        result[2] += 424343;
        result[3] += 65409593;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53254;
        result[1] += 585798;
        result[2] += 0;
        result[3] += 8680467;
        result[4] += 76579826;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 13870206;
        result[1] += 279802;
        result[2] += 0;
        result[3] += 52123195;
        result[4] += 19626141;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35011107;
        result[1] += 0;
        result[2] += 1570265;
        result[3] += 30300310;
        result[4] += 19017661;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 306783;
        result[1] += 1738439;
        result[2] += 0;
        result[3] += 0;
        result[4] += 83854123;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8822619;
        result[1] += 242379;
        result[2] += 0;
        result[3] += 76543491;
        result[4] += 145427;
        result[5] += 145427;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2821511;
        result[3] += 0;
        result[4] += 82764333;
        result[5] += 313501;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85327787;
        result[1] += 59342;
        result[2] += 137423;
        result[3] += 349806;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24986;
      } else {
        result[0] += 55879764;
        result[1] += 0;
        result[2] += 349855;
        result[3] += 29582261;
        result[4] += 0;
        result[5] += 19436;
        result[6] += 68027;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 43066225;
        result[1] += 0;
        result[2] += 524487;
        result[3] += 42250356;
        result[4] += 58276;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14224489;
        result[1] += 1035763;
        result[2] += 552407;
        result[3] += 70086684;
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
        result[0] += 636291;
        result[1] += 2227020;
        result[2] += 0;
        result[3] += 83036034;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 16182750;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16427943;
        result[4] += 53206921;
        result[5] += 81731;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 170660;
        result[2] += 1251513;
        result[3] += 76399219;
        result[4] += 7736629;
        result[5] += 341321;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 75940952;
        result[1] += 49201;
        result[2] += 170565;
        result[3] += 9709105;
        result[4] += 0;
        result[5] += 3280;
        result[6] += 26240;
      } else {
        result[0] += 84688780;
        result[1] += 0;
        result[2] += 270895;
        result[3] += 863480;
        result[4] += 0;
        result[5] += 0;
        result[6] += 76189;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85768601;
        result[5] += 130744;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5517310;
        result[1] += 243859;
        result[2] += 883989;
        result[3] += 79132257;
        result[4] += 0;
        result[5] += 121929;
        result[6] += 0;
      } else {
        result[0] += 40023945;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45797380;
        result[4] += 0;
        result[5] += 78019;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 34764764;
        result[1] += 2025131;
        result[2] += 0;
        result[3] += 49109449;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85590523;
        result[1] += 49910;
        result[2] += 218359;
        result[3] += 21835;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18716;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 16667685;
        result[1] += 0;
        result[2] += 390648;
        result[3] += 68819309;
        result[4] += 0;
        result[5] += 21702;
        result[6] += 0;
      } else {
        result[0] += 85111278;
        result[1] += 0;
        result[2] += 536556;
        result[3] += 67069;
        result[4] += 0;
        result[5] += 0;
        result[6] += 184441;
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
        result[0] += 85834110;
        result[1] += 0;
        result[2] += 58712;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6523;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53540304;
        result[1] += 117429;
        result[2] += 366965;
        result[3] += 26935287;
        result[4] += 4858626;
        result[5] += 36696;
        result[6] += 44035;
      } else {
        result[0] += 11995743;
        result[1] += 0;
        result[2] += 1613462;
        result[3] += 61942933;
        result[4] += 10066603;
        result[5] += 280602;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 23283589;
        result[1] += 0;
        result[2] += 0;
        result[3] += 58800930;
        result[4] += 3814825;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 400463;
        result[1] += 1001157;
        result[2] += 0;
        result[3] += 12814820;
        result[4] += 71682904;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
        result[0] += 0;
        result[1] += 302462;
        result[2] += 0;
        result[3] += 4234474;
        result[4] += 81362408;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7079269;
        result[1] += 568869;
        result[2] += 442454;
        result[3] += 43234107;
        result[4] += 34574644;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 18923945;
        result[1] += 125087;
        result[2] += 17869;
        result[3] += 62168467;
        result[4] += 4628236;
        result[5] += 35739;
        result[6] += 0;
      } else {
        result[0] += 5180901;
        result[1] += 0;
        result[2] += 310854;
        result[3] += 0;
        result[4] += 80355781;
        result[5] += 51809;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 3303820;
        result[1] += 0;
        result[2] += 0;
        result[3] += 82595524;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85455421;
        result[1] += 46893;
        result[2] += 200078;
        result[3] += 178194;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18757;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 38223818;
        result[1] += 0;
        result[2] += 972969;
        result[3] += 1806944;
        result[4] += 44895612;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1688573;
        result[1] += 0;
        result[2] += 517465;
        result[3] += 83121370;
        result[4] += 462995;
        result[5] += 108940;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43438000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 85899345;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85448211;
        result[1] += 0;
        result[2] += 250630;
        result[3] += 100252;
        result[4] += 0;
        result[5] += 0;
        result[6] += 100252;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 716225;
        result[1] += 477483;
        result[2] += 859470;
        result[3] += 83846165;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85355105;
        result[1] += 0;
        result[2] += 544240;
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
        result[0] += 773867;
        result[1] += 1934669;
        result[2] += 0;
        result[3] += 83190807;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 83833342;
        result[1] += 27465;
        result[2] += 100706;
        result[3] += 1910366;
        result[4] += 9155;
        result[5] += 0;
        result[6] += 18310;
      } else {
        result[0] += 1338874;
        result[1] += 0;
        result[2] += 1479808;
        result[3] += 73356209;
        result[4] += 9231184;
        result[5] += 493269;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 37948793;
        result[1] += 0;
        result[2] += 0;
        result[3] += 47950552;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 71021286;
        result[1] += 0;
        result[2] += 1067202;
        result[3] += 104627;
        result[4] += 13455122;
        result[5] += 83702;
        result[6] += 167404;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
        result[0] += 29610354;
        result[1] += 1392566;
        result[2] += 0;
        result[3] += 54896424;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
        result[0] += 72684061;
        result[1] += 0;
        result[2] += 311229;
        result[3] += 11754899;
        result[4] += 1089303;
        result[5] += 23940;
        result[6] += 35911;
      } else {
        result[0] += 68734035;
        result[1] += 0;
        result[2] += 407657;
        result[3] += 15112461;
        result[4] += 1586954;
        result[5] += 43677;
        result[6] += 14559;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 24265096;
        result[1] += 632609;
        result[2] += 768168;
        result[3] += 51151004;
        result[4] += 9082466;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3576159;
        result[1] += 0;
        result[2] += 357615;
        result[3] += 10656954;
        result[4] += 71308616;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85813168;
        result[1] += 0;
        result[2] += 81389;
        result[3] += 0;
        result[4] += 4787;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47782344;
        result[1] += 166643;
        result[2] += 411054;
        result[3] += 30495823;
        result[4] += 6943493;
        result[5] += 44438;
        result[6] += 55547;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
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
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 16327604;
        result[1] += 1166257;
        result[2] += 0;
        result[3] += 68405484;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47459388;
        result[1] += 0;
        result[2] += 1664299;
        result[3] += 36775657;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 28633115;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 57266230;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85843402;
        result[1] += 0;
        result[2] += 52652;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3290;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 62924821;
        result[1] += 193063;
        result[2] += 510238;
        result[3] += 21664452;
        result[4] += 482658;
        result[5] += 96531;
        result[6] += 27580;
      } else {
        result[0] += 31293048;
        result[1] += 0;
        result[2] += 713522;
        result[3] += 43801531;
        result[4] += 9945626;
        result[5] += 58246;
        result[6] += 87370;
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
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 83054272;
        result[1] += 0;
        result[2] += 2845073;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6217702;
        result[1] += 1069286;
        result[2] += 118809;
        result[3] += 78493547;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 84608730;
        result[1] += 43749;
        result[2] += 56249;
        result[3] += 1165616;
        result[4] += 9374;
        result[5] += 0;
        result[6] += 15624;
      } else {
        result[0] += 19949666;
        result[1] += 0;
        result[2] += 1380445;
        result[3] += 58735737;
        result[4] += 5610843;
        result[5] += 222652;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 13495061;
        result[1] += 0;
        result[2] += 377623;
        result[3] += 57696853;
        result[4] += 14190683;
        result[5] += 139124;
        result[6] += 0;
      } else {
        result[0] += 85251613;
        result[1] += 0;
        result[2] += 498256;
        result[3] += 83042;
        result[4] += 0;
        result[5] += 0;
        result[6] += 66434;
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
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 83908995;
        result[1] += 0;
        result[2] += 1990350;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5298100;
        result[1] += 818089;
        result[2] += 116869;
        result[3] += 79666286;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 105657;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85793688;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10441892;
        result[1] += 0;
        result[2] += 935830;
        result[3] += 74423114;
        result[4] += 0;
        result[5] += 98508;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 82313896;
        result[1] += 83041;
        result[2] += 258894;
        result[3] += 3214203;
        result[4] += 0;
        result[5] += 14654;
        result[6] += 14654;
      } else {
        result[0] += 74411579;
        result[1] += 0;
        result[2] += 183291;
        result[3] += 11267816;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36658;
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
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 83193854;
        result[1] += 0;
        result[2] += 2592762;
        result[3] += 112728;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6200135;
        result[1] += 627861;
        result[2] += 117724;
        result[3] += 78953624;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 7570266;
        result[1] += 0;
        result[2] += 1544952;
        result[3] += 59557909;
        result[4] += 17071722;
        result[5] += 154495;
        result[6] += 0;
      } else {
        result[0] += 76600963;
        result[1] += 0;
        result[2] += 349939;
        result[3] += 8869885;
        result[4] += 0;
        result[5] += 7141;
        result[6] += 71416;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85824139;
        result[1] += 0;
        result[2] += 47003;
        result[3] += 0;
        result[4] += 18801;
        result[5] += 0;
        result[6] += 9400;
      } else {
        result[0] += 49462041;
        result[1] += 102736;
        result[2] += 468023;
        result[3] += 29747999;
        result[4] += 5981562;
        result[5] += 79906;
        result[6] += 57075;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 3842143;
        result[1] += 0;
        result[2] += 0;
        result[3] += 81782763;
        result[4] += 274438;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 32877722;
        result[1] += 431655;
        result[2] += 863310;
        result[3] += 51726658;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 72123;
        result[1] += 504866;
        result[2] += 0;
        result[3] += 17021197;
        result[4] += 68301159;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 109565;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85680214;
        result[5] += 109565;
        result[6] += 0;
      } else {
        result[0] += 8969203;
        result[1] += 102505;
        result[2] += 768788;
        result[3] += 75956342;
        result[4] += 0;
        result[5] += 102505;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 75773199;
        result[1] += 39147;
        result[2] += 192475;
        result[3] += 9865163;
        result[4] += 0;
        result[5] += 9786;
        result[6] += 19573;
      } else {
        result[0] += 84837601;
        result[1] += 0;
        result[2] += 212348;
        result[3] += 832407;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16987;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
        result[0] += 8589934;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 77309411;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85864498;
        result[5] += 34847;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 18589433;
        result[1] += 226306;
        result[2] += 711247;
        result[3] += 66210711;
        result[4] += 0;
        result[5] += 161647;
        result[6] += 0;
      } else {
        result[0] += 11002837;
        result[1] += 64344;
        result[2] += 0;
        result[3] += 74767820;
        result[4] += 0;
        result[5] += 64344;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 80367667;
        result[1] += 123695;
        result[2] += 277078;
        result[3] += 5101216;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29687;
      } else {
        result[0] += 63952636;
        result[1] += 0;
        result[2] += 74019;
        result[3] += 21835680;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37009;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 85710473;
        result[1] += 0;
        result[2] += 176281;
        result[3] += 12591;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 83177353;
        result[1] += 0;
        result[2] += 457680;
        result[3] += 2095693;
        result[4] += 0;
        result[5] += 0;
        result[6] += 168619;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 798477;
        result[2] += 756452;
        result[3] += 73628010;
        result[4] += 10716405;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85694335;
        result[1] += 205010;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 29838720;
        result[1] += 0;
        result[2] += 3014012;
        result[3] += 53046613;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1954950;
        result[4] += 83944395;
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
        result[0] += 85860113;
        result[1] += 0;
        result[2] += 35963;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3269;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 295525;
        result[1] += 689558;
        result[2] += 0;
        result[3] += 21179311;
        result[4] += 63636442;
        result[5] += 98508;
        result[6] += 0;
      } else {
        result[0] += 51857265;
        result[1] += 43915;
        result[2] += 658737;
        result[3] += 32263489;
        result[4] += 958828;
        result[5] += 58554;
        result[6] += 58554;
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
        result[0] += 85833990;
        result[1] += 0;
        result[2] += 55551;
        result[3] += 0;
        result[4] += 3267;
        result[5] += 0;
        result[6] += 6535;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1987678;
        result[1] += 316221;
        result[2] += 1355235;
        result[3] += 61030773;
        result[4] += 21006150;
        result[5] += 203285;
        result[6] += 0;
      } else {
        result[0] += 63955590;
        result[1] += 0;
        result[2] += 340277;
        result[3] += 21545381;
        result[4] += 0;
        result[5] += 8299;
        result[6] += 49796;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 563274;
        result[1] += 3379646;
        result[2] += 0;
        result[3] += 9857301;
        result[4] += 72099123;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13868428;
        result[1] += 1132116;
        result[2] += 0;
        result[3] += 70898801;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21860611;
        result[1] += 0;
        result[2] += 2057469;
        result[3] += 61981264;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 8408935;
        result[1] += 0;
        result[2] += 0;
        result[3] += 77188744;
        result[4] += 263957;
        result[5] += 37708;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2271579;
        result[3] += 0;
        result[4] += 83122971;
        result[5] += 504795;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 84723342;
        result[1] += 39099;
        result[2] += 177453;
        result[3] += 941403;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18046;
      } else {
        result[0] += 56573032;
        result[1] += 0;
        result[2] += 353329;
        result[3] += 28861937;
        result[4] += 0;
        result[5] += 50475;
        result[6] += 60570;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 812927;
        result[1] += 4064637;
        result[2] += 0;
        result[3] += 7316348;
        result[4] += 73705432;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13447742;
        result[1] += 528843;
        result[2] += 0;
        result[3] += 71922759;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 1307163;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1182672;
        result[4] += 83409509;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21042457;
        result[1] += 0;
        result[2] += 2882528;
        result[3] += 61974360;
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85849940;
        result[1] += 0;
        result[2] += 46111;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3293;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 50471273;
        result[1] += 216329;
        result[2] += 499221;
        result[3] += 26259040;
        result[4] += 8320355;
        result[5] += 49922;
        result[6] += 83203;
      } else {
        result[0] += 49566597;
        result[1] += 231290;
        result[2] += 693872;
        result[3] += 21932389;
        result[4] += 13404803;
        result[5] += 20112;
        result[6] += 50280;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 301049;
        result[2] += 0;
        result[3] += 20471339;
        result[4] += 65026607;
        result[5] += 100349;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 812073;
        result[3] += 84876734;
        result[4] += 150384;
        result[5] += 60153;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
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
        result[0] += 52179697;
        result[1] += 123774;
        result[2] += 371322;
        result[3] += 25356044;
        result[4] += 7691687;
        result[5] += 123774;
        result[6] += 53046;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1677721;
        result[3] += 74423730;
        result[4] += 9797894;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8010554;
        result[1] += 251904;
        result[2] += 352665;
        result[3] += 76931554;
        result[4] += 0;
        result[5] += 352665;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 25420619;
        result[1] += 558694;
        result[2] += 0;
        result[3] += 59920031;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 78678117;
        result[1] += 39933;
        result[2] += 242926;
        result[3] += 6921730;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16638;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 84067113;
        result[1] += 0;
        result[2] += 1724453;
        result[3] += 107778;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4434461;
        result[1] += 352407;
        result[2] += 58734;
        result[3] += 56532048;
        result[4] += 24521693;
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
        result[1] += 3800856;
        result[2] += 0;
        result[3] += 82098489;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 17620378;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16603818;
        result[4] += 51675148;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1252018;
        result[3] += 76808603;
        result[4] += 7784287;
        result[5] += 54435;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 85396299;
        result[1] += 29344;
        result[2] += 58688;
        result[3] += 410821;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4192;
      } else {
        result[0] += 68621243;
        result[1] += 76403;
        result[2] += 409304;
        result[3] += 16677789;
        result[4] += 0;
        result[5] += 27286;
        result[6] += 87318;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 82595;
        result[1] += 27531;
        result[2] += 302850;
        result[3] += 83531607;
        result[4] += 1762037;
        result[5] += 192722;
        result[6] += 0;
      } else {
        result[0] += 44124766;
        result[1] += 0;
        result[2] += 763810;
        result[3] += 0;
        result[4] += 41010768;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 66810602;
        result[4] += 19088743;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 587680;
        result[2] += 0;
        result[3] += 881521;
        result[4] += 84430143;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85694906;
        result[1] += 0;
        result[2] += 43497;
        result[3] += 156591;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4349;
      } else {
        result[0] += 30923764;
        result[1] += 6871947;
        result[2] += 0;
        result[3] += 48103633;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 47172318;
        result[1] += 233295;
        result[2] += 664891;
        result[3] += 37770516;
        result[4] += 0;
        result[5] += 0;
        result[6] += 58323;
      } else {
        result[0] += 84592658;
        result[1] += 0;
        result[2] += 315709;
        result[3] += 964668;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26309;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 9508253;
        result[1] += 325068;
        result[2] += 0;
        result[3] += 55546076;
        result[4] += 20519947;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12370269;
        result[1] += 71642;
        result[2] += 358212;
        result[3] += 42842209;
        result[4] += 30089845;
        result[5] += 167165;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85351785;
        result[1] += 64599;
        result[2] += 236866;
        result[3] += 209180;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36914;
      } else {
        result[0] += 0;
        result[1] += 6396759;
        result[2] += 0;
        result[3] += 79502586;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29486174;
        result[1] += 0;
        result[2] += 1335222;
        result[3] += 46510267;
        result[4] += 8308054;
        result[5] += 74179;
        result[6] += 185447;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 14511690;
        result[1] += 0;
        result[2] += 0;
        result[3] += 56413810;
        result[4] += 14943035;
        result[5] += 30810;
        result[6] += 0;
      } else {
        result[0] += 85686489;
        result[1] += 0;
        result[2] += 47301;
        result[3] += 118253;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47301;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 51944639;
        result[1] += 0;
        result[2] += 827803;
        result[3] += 29239185;
        result[4] += 3843371;
        result[5] += 0;
        result[6] += 44346;
      } else {
        result[0] += 84201919;
        result[1] += 58060;
        result[2] += 51230;
        result[3] += 1550566;
        result[4] += 23907;
        result[5] += 6830;
        result[6] += 6830;
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
        result[0] += 31485717;
        result[1] += 0;
        result[2] += 905433;
        result[3] += 43665257;
        result[4] += 9755315;
        result[5] += 43811;
        result[6] += 43811;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13642434;
        result[1] += 1576763;
        result[2] += 0;
        result[3] += 70680148;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 21545710;
        result[1] += 0;
        result[2] += 2551465;
        result[3] += 61802169;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1637477;
        result[4] += 84261868;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 34359738;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51539607;
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
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40b00000))) ) ) {
        result[0] += 17249212;
        result[1] += 144465;
        result[2] += 635649;
        result[3] += 67725552;
        result[4] += 0;
        result[5] += 144465;
        result[6] += 0;
      } else {
        result[0] += 9338800;
        result[1] += 0;
        result[2] += 0;
        result[3] += 76560545;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 80535557;
        result[1] += 132864;
        result[2] += 295254;
        result[3] += 4930748;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4920;
      } else {
        result[0] += 64282044;
        result[1] += 0;
        result[2] += 102761;
        result[3] += 21495855;
        result[4] += 0;
        result[5] += 9341;
        result[6] += 9341;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 85361680;
        result[1] += 0;
        result[2] += 332374;
        result[3] += 185738;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19551;
      } else {
        result[0] += 81729474;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4169871;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85554368;
        result[5] += 344977;
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
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 103711;
        result[1] += 388919;
        result[2] += 337063;
        result[3] += 84991867;
        result[4] += 0;
        result[5] += 77783;
        result[6] += 0;
      } else {
        result[0] += 83528222;
        result[1] += 0;
        result[2] += 2371123;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 44416247;
        result[1] += 1257063;
        result[2] += 0;
        result[3] += 40226035;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26247022;
        result[1] += 0;
        result[2] += 0;
        result[3] += 59652323;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 80581402;
        result[1] += 53639;
        result[2] += 318003;
        result[3] += 4911818;
        result[4] += 0;
        result[5] += 3831;
        result[6] += 30650;
      } else {
        result[0] += 74734231;
        result[1] += 0;
        result[2] += 136614;
        result[3] += 11028499;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 26871077;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12334265;
        result[4] += 46473748;
        result[5] += 220254;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 36444;
        result[2] += 1020441;
        result[3] += 74091374;
        result[4] += 10459530;
        result[5] += 291554;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85098937;
        result[1] += 45650;
        result[2] += 197819;
        result[3] += 535634;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21303;
      } else {
        result[0] += 56477167;
        result[1] += 0;
        result[2] += 315625;
        result[3] += 29047373;
        result[4] += 0;
        result[5] += 0;
        result[6] += 59179;
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
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40d00000))) ) ) {
        result[0] += 18142534;
        result[1] += 185127;
        result[2] += 0;
        result[3] += 67571683;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9454584;
        result[1] += 2424252;
        result[2] += 484850;
        result[3] += 73535658;
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
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 594459;
        result[1] += 849227;
        result[2] += 679381;
        result[3] += 83776277;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85320899;
        result[1] += 0;
        result[2] += 578446;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 80363540;
        result[1] += 12581;
        result[2] += 31453;
        result[3] += 1176358;
        result[4] += 4315412;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84426152;
        result[1] += 0;
        result[2] += 143996;
        result[3] += 1240583;
        result[4] += 55383;
        result[5] += 0;
        result[6] += 33229;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 36685717;
        result[1] += 66519;
        result[2] += 665198;
        result[3] += 46841086;
        result[4] += 1485610;
        result[5] += 99779;
        result[6] += 55433;
      } else {
        result[0] += 84766201;
        result[1] += 0;
        result[2] += 254737;
        result[3] += 869622;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8784;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 152034;
        result[1] += 25339;
        result[2] += 0;
        result[3] += 79919332;
        result[4] += 5726623;
        result[5] += 76017;
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
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 497166;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85402179;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8920702;
        result[1] += 0;
        result[2] += 2606047;
        result[3] += 0;
        result[4] += 73470502;
        result[5] += 902093;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85813205;
        result[1] += 0;
        result[2] += 73219;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12921;
      } else {
        result[0] += 57385040;
        result[1] += 2495001;
        result[2] += 0;
        result[3] += 26019303;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 76271815;
        result[1] += 156489;
        result[2] += 517097;
        result[3] += 8879100;
        result[4] += 0;
        result[5] += 13607;
        result[6] += 61235;
      } else {
        result[0] += 43487940;
        result[1] += 0;
        result[2] += 243743;
        result[3] += 42167661;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 6602351;
        result[1] += 0;
        result[2] += 0;
        result[3] += 77371308;
        result[4] += 1891298;
        result[5] += 34387;
        result[6] += 0;
      } else {
        result[0] += 24199937;
        result[1] += 52155;
        result[2] += 0;
        result[3] += 52050726;
        result[4] += 9596526;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85744850;
        result[5] += 154495;
        result[6] += 0;
      } else {
        result[0] += 67001489;
        result[1] += 4008636;
        result[2] += 13171233;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1717986;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 40720451;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45178894;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 76791252;
        result[1] += 0;
        result[2] += 189313;
        result[3] += 8876709;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42069;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85825902;
        result[1] += 0;
        result[2] += 58754;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14688;
      } else {
        result[0] += 60404788;
        result[1] += 261546;
        result[2] += 460820;
        result[3] += 24734826;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37363;
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
        
    }
    

    return 0;
}
