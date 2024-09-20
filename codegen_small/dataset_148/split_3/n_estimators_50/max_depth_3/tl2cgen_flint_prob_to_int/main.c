
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
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 84662112;
        result[1] += 0;
        result[2] += 1237233;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85831929;
        result[1] += 0;
        result[2] += 67416;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 85662273;
        result[1] += 0;
        result[2] += 237072;
        result[3] += 0;
        result[4] += 0;
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85864931;
        result[5] += 34414;
        result[6] += 0;
      } else {
        result[0] += 1394273;
        result[1] += 788067;
        result[2] += 1333652;
        result[3] += 82282318;
        result[4] += 0;
        result[5] += 101034;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84473323;
        result[1] += 0;
        result[2] += 401398;
        result[3] += 887302;
        result[4] += 0;
        result[5] += 31689;
        result[6] += 105631;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 64368;
        result[3] += 85834977;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 105917;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85793428;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16634968;
        result[1] += 22150;
        result[2] += 664512;
        result[3] += 68466961;
        result[4] += 0;
        result[5] += 110752;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 8180890;
        result[2] += 0;
        result[3] += 77718455;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 31534750;
        result[1] += 2299408;
        result[2] += 0;
        result[3] += 52065186;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 75370635;
        result[1] += 22916;
        result[2] += 180061;
        result[3] += 10306088;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19643;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 81207191;
        result[1] += 0;
        result[2] += 123477;
        result[3] += 4568676;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85511278;
        result[1] += 0;
        result[2] += 251719;
        result[3] += 104883;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31464;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        result[0] += 85846894;
        result[1] += 0;
        result[2] += 42616;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9834;
      } else {
        result[0] += 57266230;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 63294685;
        result[1] += 114619;
        result[2] += 622221;
        result[3] += 19485364;
        result[4] += 2226898;
        result[5] += 65497;
        result[6] += 90058;
      } else {
        result[0] += 0;
        result[1] += 67886;
        result[2] += 497836;
        result[3] += 70760604;
        result[4] += 14527760;
        result[5] += 45257;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 20979263;
        result[1] += 0;
        result[2] += 1321528;
        result[3] += 34690120;
        result[4] += 28908433;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7881194;
        result[1] += 623691;
        result[2] += 0;
        result[3] += 50859216;
        result[4] += 26535243;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 430213;
        result[1] += 1720855;
        result[2] += 0;
        result[3] += 16778336;
        result[4] += 66969940;
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
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 17906987;
        result[1] += 22581;
        result[2] += 203231;
        result[3] += 66456828;
        result[4] += 1241972;
        result[5] += 67743;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 361871;
        result[2] += 0;
        result[3] += 8503990;
        result[4] += 77033483;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 52583825;
        result[1] += 372934;
        result[2] += 248623;
        result[3] += 32693962;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85342083;
        result[1] += 62263;
        result[2] += 199244;
        result[3] += 273961;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21792;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85619816;
        result[4] += 251576;
        result[5] += 27952;
        result[6] += 0;
      } else {
        result[0] += 39683078;
        result[1] += 0;
        result[2] += 1875267;
        result[3] += 0;
        result[4] += 44341000;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 85822581;
        result[1] += 0;
        result[2] += 0;
        result[3] += 76764;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84815279;
        result[1] += 0;
        result[2] += 722710;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 361355;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85843804;
        result[1] += 0;
        result[2] += 52274;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3267;
      } else {
        result[0] += 48842612;
        result[1] += 69738;
        result[2] += 684709;
        result[3] += 34343254;
        result[4] += 1832231;
        result[5] += 82418;
        result[6] += 44379;
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
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 14995987;
        result[1] += 1019144;
        result[2] += 0;
        result[3] += 69884213;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 296204;
        result[1] += 1481023;
        result[2] += 0;
        result[3] += 17476073;
        result[4] += 66646044;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 1022611;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2931485;
        result[4] += 81945249;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 27212388;
        result[1] += 0;
        result[2] += 2622880;
        result[3] += 56064076;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x41c80000))) ) ) {
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
        result[4] += 85864299;
        result[5] += 35046;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 25912;
        result[1] += 259123;
        result[2] += 259123;
        result[3] += 85251537;
        result[4] += 0;
        result[5] += 103649;
        result[6] += 0;
      } else {
        result[0] += 83531193;
        result[1] += 0;
        result[2] += 2368152;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
        result[0] += 85619229;
        result[1] += 49798;
        result[2] += 211643;
        result[3] += 12449;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6224;
      } else {
        result[0] += 867670;
        result[1] += 3181457;
        result[2] += 0;
        result[3] += 81850218;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 39522509;
        result[1] += 0;
        result[2] += 264305;
        result[3] += 46112530;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 73972893;
        result[1] += 0;
        result[2] += 330144;
        result[3] += 11472504;
        result[4] += 0;
        result[5] += 41268;
        result[6] += 82536;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85799171;
        result[5] += 100174;
        result[6] += 0;
      } else {
        result[0] += 14979663;
        result[1] += 152188;
        result[2] += 347858;
        result[3] += 70332671;
        result[4] += 0;
        result[5] += 86964;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 85529090;
        result[1] += 49367;
        result[2] += 225238;
        result[3] += 77136;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18512;
      } else {
        result[0] += 24542670;
        result[1] += 1244918;
        result[2] += 0;
        result[3] += 60111757;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 13632608;
        result[1] += 0;
        result[2] += 0;
        result[3] += 72266737;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7101914;
        result[1] += 0;
        result[2] += 2592762;
        result[3] += 0;
        result[4] += 75415567;
        result[5] += 789101;
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
        result[0] += 85592562;
        result[1] += 0;
        result[2] += 238609;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 68174;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 105501;
        result[1] += 42200;
        result[2] += 211003;
        result[3] += 66339362;
        result[4] += 19032476;
        result[5] += 168802;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1198595;
        result[2] += 0;
        result[3] += 1498244;
        result[4] += 83202505;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
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
        result[2] += 2068397;
        result[3] += 0;
        result[4] += 83830948;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1359166;
        result[1] += 2718333;
        result[2] += 0;
        result[3] += 81821845;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85831881;
        result[1] += 0;
        result[2] += 64091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3373;
      } else {
        result[0] += 59699814;
        result[1] += 161725;
        result[2] += 754719;
        result[3] += 25252282;
        result[4] += 0;
        result[5] += 7701;
        result[6] += 23103;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 38754;
        result[1] += 387544;
        result[2] += 775089;
        result[3] += 50923411;
        result[4] += 33774545;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85300375;
        result[1] += 0;
        result[2] += 528502;
        result[3] += 70467;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 17588913;
        result[1] += 0;
        result[2] += 0;
        result[3] += 67574152;
        result[4] += 409044;
        result[5] += 327235;
        result[6] += 0;
      } else {
        result[0] += 85421706;
        result[1] += 62587;
        result[2] += 79057;
        result[3] += 319524;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16470;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 13814357;
        result[1] += 0;
        result[2] += 0;
        result[3] += 72084988;
        result[4] += 0;
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
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 73238563;
        result[1] += 0;
        result[2] += 1074724;
        result[3] += 0;
        result[4] += 11402568;
        result[5] += 78638;
        result[6] += 104851;
      } else {
        result[0] += 59007183;
        result[1] += 0;
        result[2] += 111124;
        result[3] += 555623;
        result[4] += 26003165;
        result[5] += 0;
        result[6] += 222249;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 10922091;
        result[1] += 0;
        result[2] += 844219;
        result[3] += 65110437;
        result[4] += 8811542;
        result[5] += 211054;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1544952;
        result[2] += 0;
        result[3] += 13904570;
        result[4] += 70449823;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 15744730;
        result[1] += 34833;
        result[2] += 0;
        result[3] += 64894761;
        result[4] += 5085687;
        result[5] += 139333;
        result[6] += 0;
      } else {
        result[0] += 3587681;
        result[1] += 153757;
        result[2] += 256262;
        result[3] += 0;
        result[4] += 81901643;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
        result[0] += 85815831;
        result[1] += 0;
        result[2] += 74235;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9279;
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
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 60936431;
        result[1] += 143682;
        result[2] += 673038;
        result[3] += 24108382;
        result[4] += 0;
        result[5] += 7562;
        result[6] += 30248;
      } else {
        result[0] += 776198;
        result[1] += 2069863;
        result[2] += 0;
        result[3] += 83053283;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 49912;
        result[1] += 0;
        result[2] += 0;
        result[3] += 80009675;
        result[4] += 5789845;
        result[5] += 49912;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 29964888;
        result[1] += 12984784;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2631084;
        result[1] += 0;
        result[2] += 1037610;
        result[3] += 0;
        result[4] += 82193593;
        result[5] += 37057;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 85545304;
        result[1] += 0;
        result[2] += 221276;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 132765;
      } else {
        result[0] += 85851780;
        result[1] += 0;
        result[2] += 47565;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 45021652;
        result[1] += 222415;
        result[2] += 737484;
        result[3] += 39894381;
        result[4] += 0;
        result[5] += 11706;
        result[6] += 11706;
      } else {
        result[0] += 83355218;
        result[1] += 0;
        result[2] += 360584;
        result[3] += 2083379;
        result[4] += 0;
        result[5] += 0;
        result[6] += 100162;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 12058824;
        result[1] += 0;
        result[2] += 0;
        result[3] += 73555666;
        result[4] += 221553;
        result[5] += 63300;
        result[6] += 0;
      } else {
        result[0] += 169093;
        result[1] += 0;
        result[2] += 2959131;
        result[3] += 0;
        result[4] += 82517481;
        result[5] += 253639;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 76742384;
        result[1] += 0;
        result[2] += 260621;
        result[3] += 8861121;
        result[4] += 0;
        result[5] += 0;
        result[6] += 35219;
      } else {
        result[0] += 78898430;
        result[1] += 62945;
        result[2] += 269265;
        result[3] += 6651219;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17484;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 12980934;
        result[1] += 860980;
        result[2] += 198687;
        result[3] += 71858743;
        result[4] += 0;
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
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31684184;
        result[4] += 54215160;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 185260;
        result[1] += 308768;
        result[2] += 0;
        result[3] += 3952234;
        result[4] += 81453082;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 15990919;
        result[1] += 0;
        result[2] += 0;
        result[3] += 69678010;
        result[4] += 92166;
        result[5] += 138250;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2411209;
        result[3] += 0;
        result[4] += 83287202;
        result[5] += 200934;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24076301;
        result[4] += 61823044;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 748034;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85151310;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85499241;
        result[1] += 33854;
        result[2] += 209285;
        result[3] += 144653;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12310;
      } else {
        result[0] += 321720;
        result[1] += 3217203;
        result[2] += 0;
        result[3] += 82360421;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 15048862;
        result[1] += 0;
        result[2] += 417413;
        result[3] += 70367162;
        result[4] += 0;
        result[5] += 65907;
        result[6] += 0;
      } else {
        result[0] += 85438347;
        result[1] += 0;
        result[2] += 239036;
        result[3] += 119518;
        result[4] += 0;
        result[5] += 0;
        result[6] += 102444;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85783951;
        result[1] += 0;
        result[2] += 115394;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 52723050;
        result[1] += 132971;
        result[2] += 299185;
        result[3] += 25330999;
        result[4] += 7296790;
        result[5] += 33242;
        result[6] += 83106;
      } else {
        result[0] += 50095851;
        result[1] += 248923;
        result[2] += 591193;
        result[3] += 21386676;
        result[4] += 13524842;
        result[5] += 31115;
        result[6] += 20743;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1404348;
        result[3] += 0;
        result[4] += 84377967;
        result[5] += 117029;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 82436;
        result[2] += 439663;
        result[3] += 85377244;
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
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 85763943;
        result[1] += 0;
        result[2] += 124570;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10832;
      } else {
        result[0] += 85890884;
        result[1] += 0;
        result[2] += 8461;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 1327200;
        result[1] += 553000;
        result[2] += 1216600;
        result[3] += 69346210;
        result[4] += 13253568;
        result[5] += 202766;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 375470;
        result[2] += 0;
        result[3] += 13266630;
        result[4] += 72257244;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84298605;
        result[1] += 21201;
        result[2] += 466440;
        result[3] += 1049492;
        result[4] += 0;
        result[5] += 0;
        result[6] += 63605;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 64464;
        result[3] += 85834881;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
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
        result[1] += 232021;
        result[2] += 618722;
        result[3] += 84919701;
        result[4] += 0;
        result[5] += 128900;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85793558;
        result[1] += 0;
        result[2] += 92563;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13223;
      } else {
        result[0] += 56069347;
        result[1] += 2209629;
        result[2] += 0;
        result[3] += 27620368;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85869431;
        result[1] += 0;
        result[2] += 29914;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 58907779;
        result[1] += 187963;
        result[2] += 503742;
        result[3] += 26217157;
        result[4] += 0;
        result[5] += 7518;
        result[6] += 75185;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
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
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 85814601;
        result[1] += 0;
        result[2] += 63558;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21186;
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
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 114532;
        result[1] += 429496;
        result[2] += 658561;
        result[3] += 81375313;
        result[4] += 3292808;
        result[5] += 28633;
        result[6] += 0;
      } else {
        result[0] += 85525626;
        result[1] += 0;
        result[2] += 224231;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 149487;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 46927524;
        result[1] += 41725;
        result[2] += 611977;
        result[3] += 14075475;
        result[4] += 24145282;
        result[5] += 69542;
        result[6] += 27817;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 807830;
        result[3] += 69155215;
        result[4] += 15887339;
        result[5] += 48959;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 16899737;
        result[1] += 0;
        result[2] += 321462;
        result[3] += 67139718;
        result[4] += 1423619;
        result[5] += 114808;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 320862;
        result[2] += 0;
        result[3] += 8984136;
        result[4] += 76594347;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 84650267;
        result[1] += 64133;
        result[2] += 235156;
        result[3] += 934518;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15269;
      } else {
        result[0] += 71249845;
        result[1] += 0;
        result[2] += 2330602;
        result[3] += 12318898;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 125989;
        result[1] += 0;
        result[2] += 554351;
        result[3] += 68613645;
        result[4] += 16605359;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 81226065;
        result[4] += 2670445;
        result[5] += 2002834;
        result[6] += 0;
      } else {
        result[0] += 85397010;
        result[1] += 0;
        result[2] += 452101;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50233;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 9084701;
        result[1] += 0;
        result[2] += 0;
        result[3] += 74885892;
        result[4] += 1844893;
        result[5] += 83858;
        result[6] += 0;
      } else {
        result[0] += 24530199;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45481259;
        result[4] += 15625998;
        result[5] += 261888;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 74291326;
        result[1] += 0;
        result[2] += 9286415;
        result[3] += 0;
        result[4] += 2321603;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 535675;
        result[2] += 612200;
        result[3] += 0;
        result[4] += 84636682;
        result[5] += 114787;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 80370780;
        result[1] += 118047;
        result[2] += 270525;
        result[3] += 5120317;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19674;
      } else {
        result[0] += 63782881;
        result[1] += 0;
        result[2] += 120449;
        result[3] += 21977483;
        result[4] += 0;
        result[5] += 9265;
        result[6] += 9265;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 85787010;
        result[1] += 0;
        result[2] += 112335;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 82359401;
        result[1] += 0;
        result[2] += 420832;
        result[3] += 2945827;
        result[4] += 0;
        result[5] += 0;
        result[6] += 173283;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43080000))) ) ) {
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 85796147;
        result[1] += 0;
        result[2] += 92335;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10863;
      } else {
        result[0] += 85890988;
        result[1] += 0;
        result[2] += 8357;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1197259;
        result[1] += 670465;
        result[2] += 558720;
        result[3] += 55568783;
        result[4] += 27872190;
        result[5] += 31926;
        result[6] += 0;
      } else {
        result[0] += 84336776;
        result[1] += 0;
        result[2] += 471916;
        result[3] += 954320;
        result[4] += 0;
        result[5] += 20974;
        result[6] += 115357;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 561433;
        result[2] += 93572;
        result[3] += 18901598;
        result[4] += 66342741;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 944273;
        result[3] += 84571461;
        result[4] += 324593;
        result[5] += 59017;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
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
        result[4] += 85798168;
        result[5] += 101177;
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
        result[1] += 316290;
        result[2] += 843442;
        result[3] += 84607824;
        result[4] += 0;
        result[5] += 131787;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85606247;
        result[1] += 0;
        result[2] += 86205;
        result[3] += 202582;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4310;
      } else {
        result[0] += 15618062;
        result[1] += 0;
        result[2] += 0;
        result[3] += 70281283;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 76406662;
        result[1] += 155065;
        result[2] += 397775;
        result[3] += 8885906;
        result[4] += 0;
        result[5] += 6741;
        result[6] += 47193;
      } else {
        result[0] += 43516501;
        result[1] += 0;
        result[2] += 318219;
        result[3] += 42064625;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
        result[0] += 84707635;
        result[1] += 25906;
        result[2] += 59215;
        result[3] += 1084382;
        result[4] += 3700;
        result[5] += 11102;
        result[6] += 7401;
      } else {
        result[0] += 77586505;
        result[1] += 92364;
        result[2] += 200123;
        result[3] += 7897197;
        result[4] += 0;
        result[5] += 46182;
        result[6] += 76970;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 16317601;
        result[1] += 136434;
        result[2] += 1609930;
        result[3] += 65843431;
        result[4] += 1991947;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84256;
        result[1] += 379153;
        result[2] += 0;
        result[3] += 13143990;
        result[4] += 72291945;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14885578;
        result[1] += 0;
        result[2] += 637303;
        result[3] += 70262660;
        result[4] += 0;
        result[5] += 113804;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40600000))) ) ) {
        result[0] += 85623733;
        result[1] += 0;
        result[2] += 202116;
        result[3] += 18374;
        result[4] += 0;
        result[5] += 0;
        result[6] += 55122;
      } else {
        result[0] += 84617266;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1282079;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 138057;
        result[1] += 55222;
        result[2] += 276114;
        result[3] += 83773261;
        result[4] += 1463408;
        result[5] += 193280;
        result[6] += 0;
      } else {
        result[0] += 43221697;
        result[1] += 0;
        result[2] += 1148548;
        result[3] += 0;
        result[4] += 41529099;
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
        result[1] += 4360372;
        result[2] += 0;
        result[3] += 81538973;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 36389132;
        result[1] += 2799164;
        result[2] += 0;
        result[3] += 46711049;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85639111;
        result[1] += 50165;
        result[2] += 184985;
        result[3] += 21947;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3135;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 39534741;
        result[1] += 0;
        result[2] += 285320;
        result[3] += 46079283;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 74336732;
        result[1] += 0;
        result[2] += 375537;
        result[3] += 11147545;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39530;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 80451500;
        result[1] += 123371;
        result[2] += 188304;
        result[3] += 5097209;
        result[4] += 0;
        result[5] += 12986;
        result[6] += 25973;
      } else {
        result[0] += 85882748;
        result[1] += 0;
        result[2] += 16597;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 12535993;
        result[1] += 205845;
        result[2] += 1070396;
        result[3] += 54137378;
        result[4] += 17949731;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 356428;
        result[1] += 980179;
        result[2] += 0;
        result[3] += 9534470;
        result[4] += 75028266;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 14206166;
        result[1] += 0;
        result[2] += 0;
        result[3] += 71693179;
        result[4] += 0;
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3667878;
        result[3] += 0;
        result[4] += 81994830;
        result[5] += 236637;
        result[6] += 0;
      } else {
        result[0] += 85386819;
        result[1] += 0;
        result[2] += 384394;
        result[3] += 76878;
        result[4] += 0;
        result[5] += 25626;
        result[6] += 25626;
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
        result[0] += 81976542;
        result[1] += 0;
        result[2] += 3621049;
        result[3] += 301754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6336836;
        result[1] += 667035;
        result[2] += 111172;
        result[3] += 78784300;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 10824310;
        result[1] += 99305;
        result[2] += 0;
        result[3] += 74727465;
        result[4] += 148958;
        result[5] += 99305;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3303820;
        result[3] += 0;
        result[4] += 82389036;
        result[5] += 206488;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 82427028;
        result[1] += 83492;
        result[2] += 211187;
        result[3] += 3143257;
        result[4] += 0;
        result[5] += 9822;
        result[6] += 24556;
      } else {
        result[0] += 74413876;
        result[1] += 0;
        result[2] += 147308;
        result[3] += 11315144;
        result[4] += 0;
        result[5] += 9206;
        result[6] += 13810;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
        result[0] += 0;
        result[1] += 2139841;
        result[2] += 0;
        result[3] += 0;
        result[4] += 83759504;
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
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 6036312;
        result[1] += 26244;
        result[2] += 656120;
        result[3] += 61229200;
        result[4] += 17715263;
        result[5] += 236203;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12399383;
        result[4] += 73499962;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 298607;
        result[2] += 497678;
        result[3] += 84505845;
        result[4] += 0;
        result[5] += 597214;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 85483398;
        result[1] += 85080;
        result[2] += 201671;
        result[3] += 113440;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15755;
      } else {
        result[0] += 54044733;
        result[1] += 0;
        result[2] += 354147;
        result[3] += 31435227;
        result[4] += 0;
        result[5] += 18639;
        result[6] += 46598;
      }
    }
  }
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
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 85329397;
        result[1] += 0;
        result[2] += 529237;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40710;
      } else {
        result[0] += 85877828;
        result[1] += 0;
        result[2] += 21517;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 71404;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85756537;
        result[5] += 71404;
        result[6] += 0;
      } else {
        result[0] += 1576698;
        result[1] += 634774;
        result[2] += 1535745;
        result[3] += 82070221;
        result[4] += 0;
        result[5] += 81906;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84443069;
        result[1] += 20953;
        result[2] += 408595;
        result[3] += 932435;
        result[4] += 0;
        result[5] += 10476;
        result[6] += 83814;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32574;
        result[3] += 85866771;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 6683244;
        result[1] += 0;
        result[2] += 1375962;
        result[3] += 60149198;
        result[4] += 17494374;
        result[5] += 196566;
        result[6] += 0;
      } else {
        result[0] += 77058523;
        result[1] += 0;
        result[2] += 238941;
        result[3] += 8566743;
        result[4] += 0;
        result[5] += 0;
        result[6] += 35138;
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
        result[0] += 19139988;
        result[1] += 1383613;
        result[2] += 0;
        result[3] += 65375743;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5611926;
        result[1] += 0;
        result[2] += 409629;
        result[3] += 51531414;
        result[4] += 28018670;
        result[5] += 327703;
        result[6] += 0;
      } else {
        result[0] += 78642056;
        result[1] += 59058;
        result[2] += 191072;
        result[3] += 6986313;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20844;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 11892348;
        result[1] += 731836;
        result[2] += 1006275;
        result[3] += 72268885;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
        result[1] += 462729;
        result[2] += 1177855;
        result[3] += 58135600;
        result[4] += 25996961;
        result[5] += 126198;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 15478283;
        result[1] += 34168;
        result[2] += 0;
        result[3] += 64236583;
        result[4] += 6116142;
        result[5] += 34168;
        result[6] += 0;
      } else {
        result[0] += 3646902;
        result[1] += 49282;
        result[2] += 591389;
        result[3] += 0;
        result[4] += 81562488;
        result[5] += 49282;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85800873;
        result[1] += 26856;
        result[2] += 53712;
        result[3] += 4476;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13428;
      } else {
        result[0] += 76056712;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9842633;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 46260655;
        result[1] += 290947;
        result[2] += 674998;
        result[3] += 38591279;
        result[4] += 0;
        result[5] += 23275;
        result[6] += 58189;
      } else {
        result[0] += 84591682;
        result[1] += 0;
        result[2] += 273902;
        result[3] += 980747;
        result[4] += 0;
        result[5] += 0;
        result[6] += 53013;
      }
    }
  }
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
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85761379;
        result[1] += 0;
        result[2] += 114971;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22994;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 35349;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85793297;
        result[5] += 70699;
        result[6] += 0;
      } else {
        result[0] += 1449691;
        result[1] += 592127;
        result[2] += 1490528;
        result[3] += 82203652;
        result[4] += 0;
        result[5] += 163345;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 53533699;
        result[1] += 0;
        result[2] += 167336;
        result[3] += 32170420;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27889;
      } else {
        result[0] += 78733061;
        result[1] += 19212;
        result[2] += 403463;
        result[3] += 6628332;
        result[4] += 0;
        result[5] += 0;
        result[6] += 115275;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 48640;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85850705;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15920723;
        result[1] += 256097;
        result[2] += 213414;
        result[3] += 69466427;
        result[4] += 0;
        result[5] += 42682;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85465572;
        result[1] += 39993;
        result[2] += 215348;
        result[3] += 150743;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27687;
      } else {
        result[0] += 600694;
        result[1] += 2703126;
        result[2] += 0;
        result[3] += 82595524;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 24658501;
        result[1] += 0;
        result[2] += 1144688;
        result[3] += 52226420;
        result[4] += 7869734;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 72283598;
        result[1] += 0;
        result[2] += 333719;
        result[3] += 11947150;
        result[4] += 467207;
        result[5] += 333719;
        result[6] += 533950;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 59334929;
        result[1] += 0;
        result[2] += 14500;
        result[3] += 26520915;
        result[4] += 29000;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 175663;
        result[1] += 0;
        result[2] += 175663;
        result[3] += 0;
        result[4] += 85548019;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85584696;
        result[5] += 314649;
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
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 17276566;
        result[1] += 354556;
        result[2] += 966971;
        result[3] += 67107856;
        result[4] += 0;
        result[5] += 193394;
        result[6] += 0;
      } else {
        result[0] += 11699980;
        result[1] += 59693;
        result[2] += 0;
        result[3] += 74079977;
        result[4] += 0;
        result[5] += 59693;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 85519968;
        result[1] += 50278;
        result[2] += 100557;
        result[3] += 223969;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4570;
      } else {
        result[0] += 82505791;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3393554;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 76659956;
        result[1] += 53952;
        result[2] += 350692;
        result[3] += 8780792;
        result[4] += 0;
        result[5] += 6744;
        result[6] += 47208;
      } else {
        result[0] += 43922311;
        result[1] += 0;
        result[2] += 307149;
        result[3] += 41669885;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 85661608;
        result[1] += 0;
        result[2] += 199699;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38038;
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
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 63696796;
        result[1] += 100086;
        result[2] += 675584;
        result[3] += 18949734;
        result[4] += 2393738;
        result[5] += 25021;
        result[6] += 58383;
      } else {
        result[0] += 0;
        result[1] += 179096;
        result[2] += 850710;
        result[3] += 69601528;
        result[4] += 15268009;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 15887887;
        result[1] += 814763;
        result[2] += 290986;
        result[3] += 64540904;
        result[4] += 4364804;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 111775;
        result[1] += 279438;
        result[2] += 0;
        result[3] += 6091755;
        result[4] += 79416376;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 57266230;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85862652;
        result[5] += 36693;
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
        result[1] += 107340;
        result[2] += 536703;
        result[3] += 85094291;
        result[4] += 0;
        result[5] += 161010;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 1431655;
        result[1] += 0;
        result[2] += 0;
        result[3] += 84467690;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44764447;
        result[1] += 1935759;
        result[2] += 0;
        result[3] += 39199138;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 80341130;
        result[1] += 59967;
        result[2] += 329819;
        result[3] += 5115956;
        result[4] += 0;
        result[5] += 3747;
        result[6] += 48723;
      } else {
        result[0] += 74566438;
        result[1] += 0;
        result[2] += 117857;
        result[3] += 11215050;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
        result[0] += 7158278;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 78741067;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85863673;
        result[5] += 35672;
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
        result[1] += 484394;
        result[2] += 618948;
        result[3] += 84661448;
        result[4] += 0;
        result[5] += 134554;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85770401;
        result[1] += 17785;
        result[2] += 84480;
        result[3] += 13339;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13339;
      } else {
        result[0] += 76263577;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9635767;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 82044701;
        result[1] += 271864;
        result[2] += 592275;
        result[3] += 2961376;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29128;
      } else {
        result[0] += 52719744;
        result[1] += 0;
        result[2] += 417747;
        result[3] += 32730522;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31331;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += 52899143;
        result[1] += 0;
        result[2] += 838480;
        result[3] += 28313694;
        result[4] += 3743217;
        result[5] += 29945;
        result[6] += 74864;
      } else {
        result[0] += 84017123;
        result[1] += 74745;
        result[2] += 64552;
        result[3] += 1674974;
        result[4] += 27180;
        result[5] += 20385;
        result[6] += 20385;
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
        result[0] += 29431766;
        result[1] += 0;
        result[2] += 635962;
        result[3] += 45937219;
        result[4] += 9805658;
        result[5] += 59159;
        result[6] += 29579;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 47943820;
        result[1] += 0;
        result[2] += 1271237;
        result[3] += 36684287;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1140256;
        result[2] += 0;
        result[3] += 84759089;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 827945;
        result[1] += 2897809;
        result[2] += 0;
        result[3] += 31461929;
        result[4] += 50711662;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1593187;
        result[4] += 84306158;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 85823299;
        result[1] += 0;
        result[2] += 65182;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10863;
      } else {
        result[0] += 85890969;
        result[1] += 0;
        result[2] += 8376;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x430d0000))) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1620329;
        result[1] += 919646;
        result[2] += 328445;
        result[3] += 77600632;
        result[4] += 5298914;
        result[5] += 131378;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1536717;
        result[3] += 15868955;
        result[4] += 68368227;
        result[5] += 125446;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84372339;
        result[1] += 31376;
        result[2] += 334686;
        result[3] += 1056353;
        result[4] += 0;
        result[5] += 31376;
        result[6] += 73212;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 83873852;
        result[1] += 0;
        result[2] += 1196882;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 828611;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85807286;
        result[1] += 0;
        result[2] += 92058;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 51336101;
        result[1] += 131294;
        result[2] += 279000;
        result[3] += 26800464;
        result[4] += 7139131;
        result[5] += 114882;
        result[6] += 98470;
      } else {
        result[0] += 50346245;
        result[1] += 237433;
        result[2] += 619391;
        result[3] += 21276114;
        result[4] += 13358220;
        result[5] += 20646;
        result[6] += 41292;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 136651;
        result[2] += 409955;
        result[3] += 85352738;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1875531;
        result[3] += 0;
        result[4] += 83523672;
        result[5] += 500141;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41200000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x445ae000))) ) ) {
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
        result[0] += 84712890;
        result[1] += 0;
        result[2] += 1186455;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85849186;
        result[1] += 0;
        result[2] += 40127;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10031;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1577969;
        result[1] += 888997;
        result[2] += 311148;
        result[3] += 77298298;
        result[4] += 5711806;
        result[5] += 111124;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1840912;
        result[3] += 17607435;
        result[4] += 66332229;
        result[5] += 118768;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 51333079;
        result[1] += 27174;
        result[2] += 217397;
        result[3] += 34240169;
        result[4] += 0;
        result[5] += 27174;
        result[6] += 54349;
      } else {
        result[0] += 83342817;
        result[1] += 0;
        result[2] += 629299;
        result[3] += 1848566;
        result[4] += 0;
        result[5] += 0;
        result[6] += 78662;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 85985;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85727375;
        result[5] += 85985;
        result[6] += 0;
      } else {
        result[0] += 12031941;
        result[1] += 33515;
        result[2] += 804363;
        result[3] += 72828434;
        result[4] += 0;
        result[5] += 201090;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 75725690;
        result[1] += 42120;
        result[2] += 249481;
        result[3] += 9862613;
        result[4] += 0;
        result[5] += 9720;
        result[6] += 9720;
      } else {
        result[0] += 84760608;
        result[1] += 0;
        result[2] += 167461;
        result[3] += 954530;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16746;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 844698;
        result[2] += 0;
        result[3] += 85054647;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84268345;
        result[1] += 0;
        result[2] += 1631000;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 1363481;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 84535864;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15268525;
        result[1] += 0;
        result[2] += 0;
        result[3] += 70586370;
        result[4] += 0;
        result[5] += 44449;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 73389732;
        result[1] += 0;
        result[2] += 10007690;
        result[3] += 0;
        result[4] += 2501922;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 226547;
        result[2] += 830674;
        result[3] += 0;
        result[4] += 84766607;
        result[5] += 75515;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85773821;
        result[1] += 26898;
        result[2] += 67245;
        result[3] += 22415;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8966;
      } else {
        result[0] += 75455299;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10444046;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 82235438;
        result[1] += 202479;
        result[2] += 462809;
        result[3] += 2921484;
        result[4] += 0;
        result[5] += 0;
        result[6] += 77134;
      } else {
        result[0] += 53625569;
        result[1] += 0;
        result[2] += 439811;
        result[3] += 31781606;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52358;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
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
        result[1] += 75306;
        result[2] += 0;
        result[3] += 79799538;
        result[4] += 5999399;
        result[5] += 25102;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 34616154;
        result[1] += 11538718;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38462393;
        result[5] += 1282079;
        result[6] += 0;
      } else {
        result[0] += 2398990;
        result[1] += 0;
        result[2] += 1276882;
        result[3] += 0;
        result[4] += 82223472;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 34667131;
        result[1] += 2049288;
        result[2] += 0;
        result[3] += 49182925;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85602408;
        result[1] += 46884;
        result[2] += 203167;
        result[3] += 25005;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21879;
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
        result[0] += 34309742;
        result[1] += 0;
        result[2] += 671821;
        result[3] += 50699050;
        result[4] += 0;
        result[5] += 31247;
        result[6] += 187484;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 84708843;
        result[1] += 0;
        result[2] += 1098925;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 91577;
      } else {
        result[0] += 85831748;
        result[1] += 0;
        result[2] += 67597;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
        result[0] += 4521018;
        result[1] += 0;
        result[2] += 0;
        result[3] += 55759224;
        result[4] += 25619103;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52338457;
        result[1] += 241032;
        result[2] += 378765;
        result[3] += 32022872;
        result[4] += 826396;
        result[5] += 34433;
        result[6] += 57388;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 10723959;
        result[1] += 0;
        result[2] += 581419;
        result[3] += 59692400;
        result[4] += 14901566;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44396733;
        result[1] += 151524;
        result[2] += 712166;
        result[3] += 15470670;
        result[4] += 24971268;
        result[5] += 90914;
        result[6] += 106067;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 64424509;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85853174;
        result[1] += 0;
        result[2] += 39575;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6595;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 57431059;
        result[1] += 201831;
        result[2] += 625676;
        result[3] += 24865600;
        result[4] += 2714629;
        result[5] += 30274;
        result[6] += 30274;
      } else {
        result[0] += 29893205;
        result[1] += 0;
        result[2] += 741514;
        result[3] += 45261452;
        result[4] += 9814160;
        result[5] += 87236;
        result[6] += 101776;
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
        result[0] += 15207061;
        result[1] += 1027504;
        result[2] += 0;
        result[3] += 69664780;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 26770001;
        result[1] += 0;
        result[2] += 2647582;
        result[3] += 56481761;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1476175;
        result[4] += 84423170;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 84987463;
        result[1] += 0;
        result[2] += 790298;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 121584;
      } else {
        result[0] += 85870452;
        result[1] += 0;
        result[2] += 28893;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
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
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 62983481;
        result[1] += 99238;
        result[2] += 413494;
        result[3] += 20029673;
        result[4] += 2241140;
        result[5] += 82698;
        result[6] += 49619;
      } else {
        result[0] += 0;
        result[1] += 208887;
        result[2] += 812341;
        result[3] += 69582880;
        result[4] += 15248816;
        result[5] += 46419;
        result[6] += 0;
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
        result[0] += 16547941;
        result[1] += 1017510;
        result[2] += 803298;
        result[3] += 67530595;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 10068787;
        result[1] += 0;
        result[2] += 0;
        result[3] += 72893828;
        result[4] += 2936729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16165559;
        result[1] += 0;
        result[2] += 0;
        result[3] += 63640884;
        result[4] += 5987244;
        result[5] += 105657;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 31456098;
        result[1] += 7259099;
        result[2] += 0;
        result[3] += 0;
        result[4] += 44764447;
        result[5] += 2419699;
        result[6] += 0;
      } else {
        result[0] += 1955676;
        result[1] += 0;
        result[2] += 977838;
        result[3] += 0;
        result[4] += 82928221;
        result[5] += 37609;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 82775733;
        result[1] += 3123612;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12638064;
        result[1] += 0;
        result[2] += 0;
        result[3] += 73261281;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85818334;
        result[1] += 0;
        result[2] += 81011;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 60568732;
        result[1] += 142440;
        result[2] += 546020;
        result[3] += 24602585;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39566;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 84812736;
        result[1] += 0;
        result[2] += 800659;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 285949;
      } else {
        result[0] += 85856124;
        result[1] += 0;
        result[2] += 43221;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1906111;
        result[1] += 828744;
        result[2] += 1823237;
        result[3] += 81279096;
        result[4] += 0;
        result[5] += 62155;
        result[6] += 0;
      } else {
        result[0] += 63652321;
        result[1] += 16045;
        result[2] += 401136;
        result[3] += 21781705;
        result[4] += 0;
        result[5] += 0;
        result[6] += 48136;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 85697822;
        result[1] += 0;
        result[2] += 201523;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84191120;
        result[1] += 0;
        result[2] += 976128;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 732096;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 85813541;
        result[1] += 0;
        result[2] += 85804;
        result[3] += 0;
        result[4] += 0;
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 71702;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85827643;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1393524;
        result[1] += 852753;
        result[2] += 1580714;
        result[3] += 81926761;
        result[4] += 0;
        result[5] += 145592;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84211250;
        result[1] += 21504;
        result[2] += 569866;
        result[3] += 989202;
        result[4] += 0;
        result[5] += 10752;
        result[6] += 96769;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 46527027;
        result[1] += 0;
        result[2] += 1499489;
        result[3] += 36373338;
        result[4] += 1499489;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14701411;
        result[1] += 307882;
        result[2] += 692736;
        result[3] += 70197314;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 393732;
        result[2] += 0;
        result[3] += 21327186;
        result[4] += 64178426;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 7968717;
        result[1] += 85685;
        result[2] += 1028221;
        result[3] += 54709957;
        result[4] += 21849708;
        result[5] += 257055;
        result[6] += 0;
      } else {
        result[0] += 2805757;
        result[1] += 0;
        result[2] += 647482;
        result[3] += 31294987;
        result[4] += 51151118;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 82448905;
        result[1] += 92858;
        result[2] += 200379;
        result[3] += 3132765;
        result[4] += 0;
        result[5] += 9774;
        result[6] += 14661;
      } else {
        result[0] += 74341809;
        result[1] += 0;
        result[2] += 158770;
        result[3] += 11375417;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23348;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 83727343;
        result[1] += 87290;
        result[2] += 133503;
        result[3] += 1899860;
        result[4] += 0;
        result[5] += 0;
        result[6] += 51347;
      } else {
        result[0] += 21772323;
        result[1] += 409044;
        result[2] += 483416;
        result[3] += 58326027;
        result[4] += 4871348;
        result[5] += 37185;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 74891450;
        result[1] += 0;
        result[2] += 210573;
        result[3] += 196050;
        result[4] += 10601271;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 80212629;
        result[1] += 0;
        result[2] += 598601;
        result[3] += 5088114;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
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
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 72993458;
        result[1] += 0;
        result[2] += 664530;
        result[3] += 11891603;
        result[4] += 34975;
        result[5] += 139901;
        result[6] += 174876;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 663790;
        result[3] += 68689974;
        result[4] += 16545580;
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_3/test_data.csv", "r");
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
