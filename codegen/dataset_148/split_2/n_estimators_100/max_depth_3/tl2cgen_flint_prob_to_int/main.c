
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
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42805822;
        result[1] += 0;
        result[2] += 143850;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42940823;
        result[1] += 0;
        result[2] += 8849;
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
        result[1] += 101177;
        result[2] += 0;
        result[3] += 9510646;
        result[4] += 33287261;
        result[5] += 50588;
        result[6] += 0;
      } else {
        result[0] += 25203441;
        result[1] += 54643;
        result[2] += 295716;
        result[3] += 16473362;
        result[4] += 871079;
        result[5] += 22500;
        result[6] += 28928;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 162893;
        result[1] += 868767;
        result[2] += 0;
        result[3] += 3963749;
        result[4] += 37954262;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5541893;
        result[1] += 120475;
        result[2] += 220872;
        result[3] += 22749873;
        result[4] += 14316557;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 63478;
        result[1] += 25391;
        result[2] += 0;
        result[3] += 39978870;
        result[4] += 2856540;
        result[5] += 25391;
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
        result[0] += 39881839;
        result[1] += 0;
        result[2] += 2300875;
        result[3] += 0;
        result[4] += 766958;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 333373;
        result[2] += 314853;
        result[3] += 0;
        result[4] += 42227362;
        result[5] += 74083;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 40206473;
        result[1] += 61617;
        result[2] += 152810;
        result[3] += 2518912;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9858;
      } else {
        result[0] += 31732687;
        result[1] += 0;
        result[2] += 51091;
        result[3] += 11128735;
        result[4] += 0;
        result[5] += 9289;
        result[6] += 27868;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 42874912;
        result[1] += 0;
        result[2] += 74760;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41344546;
        result[1] += 0;
        result[2] += 137940;
        result[3] += 1341785;
        result[4] += 0;
        result[5] += 0;
        result[6] += 125400;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 27321;
        result[1] += 0;
        result[2] += 122947;
        result[3] += 41064477;
        result[4] += 1666622;
        result[5] += 68304;
        result[6] += 0;
      } else {
        result[0] += 21569024;
        result[1] += 0;
        result[2] += 439543;
        result[3] += 0;
        result[4] += 20941105;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12460124;
        result[4] += 30489548;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 443433;
        result[2] += 0;
        result[3] += 63347;
        result[4] += 42442892;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40200000))) ) ) {
        result[0] += 42795630;
        result[1] += 3143;
        result[2] += 25149;
        result[3] += 125749;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42618458;
        result[1] += 0;
        result[2] += 0;
        result[3] += 324454;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6759;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 38248397;
        result[1] += 66826;
        result[2] += 207163;
        result[3] += 4393871;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33413;
      } else {
        result[0] += 21559599;
        result[1] += 0;
        result[2] += 209413;
        result[3] += 21180660;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 27487;
        result[1] += 13743;
        result[2] += 137438;
        result[3] += 40901832;
        result[4] += 1786706;
        result[5] += 82463;
        result[6] += 0;
      } else {
        result[0] += 22511351;
        result[1] += 0;
        result[2] += 729940;
        result[3] += 0;
        result[4] += 19708381;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 527529;
        result[2] += 0;
        result[3] += 5670939;
        result[4] += 36751204;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 42557438;
        result[1] += 0;
        result[2] += 0;
        result[3] += 392234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12502182;
        result[1] += 595342;
        result[2] += 0;
        result[3] += 29852148;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42764525;
        result[1] += 23143;
        result[2] += 100288;
        result[3] += 52458;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9257;
      } else {
        result[0] += 27626924;
        result[1] += 0;
        result[2] += 144931;
        result[3] += 15152828;
        result[4] += 0;
        result[5] += 4997;
        result[6] += 19990;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 37109149;
        result[1] += 44689;
        result[2] += 34376;
        result[3] += 5740831;
        result[4] += 10312;
        result[5] += 6875;
        result[6] += 3437;
      } else {
        result[0] += 42779941;
        result[1] += 0;
        result[2] += 15199;
        result[3] += 146931;
        result[4] += 5066;
        result[5] += 2533;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 53687;
        result[1] += 858993;
        result[2] += 0;
        result[3] += 4241280;
        result[4] += 37795712;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10902179;
        result[1] += 122872;
        result[2] += 659045;
        result[3] += 19123495;
        result[4] += 12142079;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6481197;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36468475;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1941228;
        result[3] += 0;
        result[4] += 40826454;
        result[5] += 181990;
        result[6] += 0;
      } else {
        result[0] += 42545471;
        result[1] += 0;
        result[2] += 221658;
        result[3] += 65193;
        result[4] += 0;
        result[5] += 26077;
        result[6] += 91271;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x437c0000))) ) ) {
        result[0] += 42928445;
        result[1] += 0;
        result[2] += 19594;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1632;
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
        result[0] += 40769851;
        result[1] += 101804;
        result[2] += 191632;
        result[3] += 1826498;
        result[4] += 0;
        result[5] += 11977;
        result[6] += 47908;
      } else {
        result[0] += 0;
        result[1] += 14378;
        result[2] += 301956;
        result[3] += 41152314;
        result[4] += 1481023;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 11201886;
        result[1] += 227680;
        result[2] += 582862;
        result[3] += 30937243;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
        result[5] += 14316557;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42583208;
        result[5] += 366464;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 40196488;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2753184;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42915237;
        result[1] += 0;
        result[2] += 27876;
        result[3] += 0;
        result[4] += 4919;
        result[5] += 0;
        result[6] += 1639;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 742230;
        result[1] += 166171;
        result[2] += 564981;
        result[3] += 30841343;
        result[4] += 10601711;
        result[5] += 33234;
        result[6] += 0;
      } else {
        result[0] += 32199774;
        result[1] += 0;
        result[2] += 108164;
        result[3] += 10604292;
        result[4] += 0;
        result[5] += 8320;
        result[6] += 29121;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 24947363;
        result[1] += 0;
        result[2] += 1370734;
        result[3] += 16631575;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 161313;
        result[1] += 806566;
        result[2] += 0;
        result[3] += 41981792;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42843885;
        result[1] += 0;
        result[2] += 84629;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21157;
      } else {
        result[0] += 42942635;
        result[1] += 0;
        result[2] += 7037;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 39391938;
        result[1] += 54650;
        result[2] += 158485;
        result[3] += 3311808;
        result[4] += 0;
        result[5] += 5465;
        result[6] += 27325;
      } else {
        result[0] += 4557860;
        result[1] += 140002;
        result[2] += 388895;
        result[3] += 23458206;
        result[4] += 14396929;
        result[5] += 7777;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 14231;
        result[2] += 0;
        result[3] += 42665049;
        result[4] += 256161;
        result[5] += 14231;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1907412;
        result[3] += 0;
        result[4] += 41042260;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 42338835;
        result[1] += 15662;
        result[2] += 42288;
        result[3] += 543488;
        result[4] += 3132;
        result[5] += 1566;
        result[6] += 4698;
      } else {
        result[0] += 29505493;
        result[1] += 0;
        result[2] += 0;
        result[3] += 13408328;
        result[4] += 0;
        result[5] += 35851;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 7767494;
        result[1] += 147824;
        result[2] += 752559;
        result[3] += 33367971;
        result[4] += 900384;
        result[5] += 13438;
        result[6] += 0;
      } else {
        result[0] += 21002;
        result[1] += 336036;
        result[2] += 0;
        result[3] += 6363692;
        result[4] += 36228941;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 13188263;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29761409;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26159149;
        result[1] += 0;
        result[2] += 754356;
        result[3] += 24334;
        result[4] += 16011832;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 41223563;
        result[4] += 1624573;
        result[5] += 101535;
        result[6] += 0;
      } else {
        result[0] += 42572480;
        result[1] += 0;
        result[2] += 289181;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 88011;
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
        result[0] += 42701169;
        result[1] += 0;
        result[2] += 248503;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42937151;
        result[1] += 0;
        result[2] += 12521;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 796623;
        result[1] += 213728;
        result[2] += 476031;
        result[3] += 34876572;
        result[4] += 6528428;
        result[5] += 58289;
        result[6] += 0;
      } else {
        result[0] += 32055686;
        result[1] += 7978;
        result[2] += 163549;
        result[3] += 10666613;
        result[4] += 0;
        result[5] += 0;
        result[6] += 55846;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 128591;
        result[1] += 900142;
        result[2] += 0;
        result[3] += 11380377;
        result[4] += 30540560;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 82701;
        result[2] += 0;
        result[3] += 6009646;
        result[4] += 36857325;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 171176;
        result[1] += 46684;
        result[2] += 202299;
        result[3] += 30391562;
        result[4] += 12137951;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41954315;
        result[1] += 0;
        result[2] += 995357;
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
        result[0] += 1717986;
        result[1] += 3779571;
        result[2] += 0;
        result[3] += 37452114;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42928516;
        result[1] += 0;
        result[2] += 21156;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 25875388;
        result[1] += 47006;
        result[2] += 271192;
        result[3] += 16163077;
        result[4] += 520689;
        result[5] += 32543;
        result[6] += 39774;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43070000))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
        result[0] += 40802666;
        result[1] += 76338;
        result[2] += 76338;
        result[3] += 1946619;
        result[4] += 0;
        result[5] += 0;
        result[6] += 47711;
      } else {
        result[0] += 42480937;
        result[1] += 9154;
        result[2] += 27464;
        result[3] += 421129;
        result[4] += 5492;
        result[5] += 1830;
        result[6] += 3661;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 24969670;
        result[1] += 0;
        result[2] += 475174;
        result[3] += 17366873;
        result[4] += 15328;
        result[5] += 15328;
        result[6] += 107297;
      } else {
        result[0] += 29729191;
        result[1] += 0;
        result[2] += 82581;
        result[3] += 12439714;
        result[4] += 698185;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 452101;
        result[1] += 5425221;
        result[2] += 0;
        result[3] += 37072349;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 12274312;
        result[1] += 104196;
        result[2] += 135455;
        result[3] += 29893889;
        result[4] += 531400;
        result[5] += 10419;
        result[6] += 0;
      } else {
        result[0] += 2215408;
        result[1] += 0;
        result[2] += 647902;
        result[3] += 7168728;
        result[4] += 32896732;
        result[5] += 20900;
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
        result[1] += 25316;
        result[2] += 0;
        result[3] += 40050918;
        result[4] += 2873438;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 16421933;
        result[1] += 9474192;
        result[2] += 0;
        result[3] += 0;
        result[4] += 17053546;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 984572;
        result[1] += 0;
        result[2] += 668766;
        result[3] += 0;
        result[4] += 41296333;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42393330;
        result[1] += 0;
        result[2] += 556342;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42929096;
        result[1] += 0;
        result[2] += 20576;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 40683979;
        result[1] += 175907;
        result[2] += 225162;
        result[3] += 1850551;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14072;
      } else {
        result[0] += 17614585;
        result[1] += 0;
        result[2] += 327205;
        result[3] += 24968928;
        result[4] += 0;
        result[5] += 7790;
        result[6] += 31162;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 70064;
        result[1] += 0;
        result[2] += 210194;
        result[3] += 41870676;
        result[4] += 714660;
        result[5] += 84077;
        result[6] += 0;
      } else {
        result[0] += 22426629;
        result[1] += 0;
        result[2] += 446153;
        result[3] += 0;
        result[4] += 20076890;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29716530;
        result[4] += 13233142;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 229404;
        result[2] += 0;
        result[3] += 484298;
        result[4] += 42235969;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 42895265;
        result[1] += 0;
        result[2] += 51206;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3200;
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
        result[0] += 39237489;
        result[1] += 102844;
        result[2] += 303635;
        result[3] += 3256731;
        result[4] += 0;
        result[5] += 4897;
        result[6] += 44076;
      } else {
        result[0] += 0;
        result[1] += 31418;
        result[2] += 329898;
        result[3] += 42588355;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42912824;
        result[1] += 0;
        result[2] += 34680;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2167;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 39289722;
        result[1] += 78204;
        result[2] += 114699;
        result[3] += 3404483;
        result[4] += 0;
        result[5] += 20854;
        result[6] += 41708;
      } else {
        result[0] += 4821365;
        result[1] += 165981;
        result[2] += 292443;
        result[3] += 23608883;
        result[4] += 14060998;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 14519;
        result[2] += 0;
        result[3] += 42731875;
        result[4] += 159718;
        result[5] += 43559;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1270700;
        result[3] += 0;
        result[4] += 41678972;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 186969;
        result[2] += 307164;
        result[3] += 42442183;
        result[4] += 0;
        result[5] += 13354;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 42799036;
        result[1] += 0;
        result[2] += 31953;
        result[3] += 114118;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4564;
      } else {
        result[0] += 41555692;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1393980;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 32788182;
        result[1] += 0;
        result[2] += 211835;
        result[3] += 9876836;
        result[4] += 0;
        result[5] += 0;
        result[6] += 72818;
      } else {
        result[0] += 34741820;
        result[1] += 73320;
        result[2] += 158861;
        result[3] += 7971596;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4073;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42600488;
        result[1] += 0;
        result[2] += 349184;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42933058;
        result[1] += 0;
        result[2] += 14952;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1661;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 885794;
        result[1] += 386115;
        result[2] += 136276;
        result[3] += 38770540;
        result[4] += 2714164;
        result[5] += 56781;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 915445;
        result[3] += 8040667;
        result[4] += 33963045;
        result[5] += 30514;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 41935953;
        result[1] += 6669;
        result[2] += 193406;
        result[3] += 793635;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20007;
      } else {
        result[0] += 17443239;
        result[1] += 0;
        result[2] += 151944;
        result[3] += 25243062;
        result[4] += 0;
        result[5] += 10129;
        result[6] += 101296;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 21241609;
        result[1] += 80732;
        result[2] += 439543;
        result[3] += 20649571;
        result[4] += 538216;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21293;
        result[1] += 298113;
        result[2] += 0;
        result[3] += 5685454;
        result[4] += 36944810;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 42503019;
        result[1] += 17737;
        result[2] += 32249;
        result[3] += 385379;
        result[4] += 1612;
        result[5] += 0;
        result[6] += 9674;
      } else {
        result[0] += 0;
        result[1] += 133591;
        result[2] += 0;
        result[3] += 42214919;
        result[4] += 333978;
        result[5] += 267183;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        result[0] += 35527604;
        result[1] += 0;
        result[2] += 131894;
        result[3] += 7086336;
        result[4] += 119904;
        result[5] += 11990;
        result[6] += 71942;
      } else {
        result[0] += 21921883;
        result[1] += 0;
        result[2] += 173851;
        result[3] += 20853937;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 913822;
        result[3] += 0;
        result[4] += 42035850;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42865292;
        result[5] += 84380;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 3396722;
        result[1] += 211351;
        result[2] += 498186;
        result[3] += 38828315;
        result[4] += 0;
        result[5] += 15096;
        result[6] += 0;
      } else {
        result[0] += 19270465;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23608098;
        result[4] += 0;
        result[5] += 71108;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42912649;
        result[1] += 0;
        result[2] += 34845;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2177;
      } else {
        result[0] += 28321885;
        result[1] += 155614;
        result[2] += 0;
        result[3] += 14472172;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 38189821;
        result[1] += 84096;
        result[2] += 215286;
        result[3] += 4416738;
        result[4] += 0;
        result[5] += 10091;
        result[6] += 33638;
      } else {
        result[0] += 21278742;
        result[1] += 0;
        result[2] += 140785;
        result[3] += 21530145;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
        result[0] += 42866703;
        result[1] += 7061;
        result[2] += 30010;
        result[3] += 35305;
        result[4] += 3530;
        result[5] += 0;
        result[6] += 7061;
      } else {
        result[0] += 35851976;
        result[1] += 76525;
        result[2] += 76525;
        result[3] += 6915949;
        result[4] += 0;
        result[5] += 9565;
        result[6] += 19131;
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
        result[0] += 7804454;
        result[1] += 276932;
        result[2] += 591627;
        result[3] += 34264070;
        result[4] += 0;
        result[5] += 12587;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 3579139;
        result[1] += 0;
        result[2] += 700810;
        result[3] += 33914223;
        result[4] += 4705442;
        result[5] += 50057;
        result[6] += 0;
      } else {
        result[0] += 7512750;
        result[1] += 0;
        result[2] += 0;
        result[3] += 28260792;
        result[4] += 7176129;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 33746171;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9203501;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42769031;
        result[1] += 0;
        result[2] += 163437;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17203;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42730541;
        result[1] += 0;
        result[2] += 219130;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42937259;
        result[1] += 0;
        result[2] += 12413;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4625fc00))) ) ) {
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 34258906;
        result[1] += 0;
        result[2] += 120038;
        result[3] += 7658438;
        result[4] += 912290;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23505892;
        result[1] += 183639;
        result[2] += 161603;
        result[3] += 18452125;
        result[4] += 594992;
        result[5] += 36727;
        result[6] += 14691;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 23572084;
        result[1] += 147545;
        result[2] += 400479;
        result[3] += 7377254;
        result[4] += 11410153;
        result[5] += 7025;
        result[6] += 35129;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 343801;
        result[3] += 34201844;
        result[4] += 8391293;
        result[5] += 12733;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 539117;
        result[2] += 0;
        result[3] += 3174801;
        result[4] += 39235754;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16934565;
        result[1] += 43035;
        result[2] += 344285;
        result[3] += 18383435;
        result[4] += 7244350;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41980000))) ) ) {
        result[0] += 42535933;
        result[1] += 24242;
        result[2] += 42020;
        result[3] += 332930;
        result[4] += 4848;
        result[5] += 0;
        result[6] += 9697;
      } else {
        result[0] += 1164113;
        result[1] += 183807;
        result[2] += 0;
        result[3] += 41356675;
        result[4] += 0;
        result[5] += 245076;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 13977269;
        result[1] += 0;
        result[2] += 0;
        result[3] += 28972403;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 32779771;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10169901;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 67319;
        result[3] += 0;
        result[4] += 42882353;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42019032;
        result[1] += 0;
        result[2] += 548185;
        result[3] += 12748;
        result[4] += 191227;
        result[5] += 50993;
        result[6] += 127484;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 4609089;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36990148;
        result[4] += 1350434;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7750441;
        result[1] += 0;
        result[2] += 0;
        result[3] += 32571683;
        result[4] += 2594497;
        result[5] += 33050;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 41593367;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1356305;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 187881;
        result[2] += 582432;
        result[3] += 0;
        result[4] += 42160571;
        result[5] += 18788;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 42891845;
        result[1] += 12850;
        result[2] += 32126;
        result[3] += 9637;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3212;
      } else {
        result[0] += 42433052;
        result[1] += 0;
        result[2] += 0;
        result[3] += 516620;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 38255517;
        result[1] += 60483;
        result[2] += 221771;
        result[3] += 4364858;
        result[4] += 0;
        result[5] += 3360;
        result[6] += 43682;
      } else {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 133831;
        result[3] += 21341004;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 41173714;
        result[1] += 0;
        result[2] += 100974;
        result[3] += 1674983;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
        result[0] += 8468499;
        result[1] += 351522;
        result[2] += 0;
        result[3] += 20963530;
        result[4] += 13166119;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29005254;
        result[1] += 0;
        result[2] += 244891;
        result[3] += 12712757;
        result[4] += 900336;
        result[5] += 0;
        result[6] += 86432;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 10122941;
        result[1] += 236687;
        result[2] += 418754;
        result[3] += 21811660;
        result[4] += 10359628;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 117670;
        result[2] += 0;
        result[3] += 2529912;
        result[4] += 40302090;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 40616533;
        result[1] += 39807;
        result[2] += 108363;
        result[3] += 1901895;
        result[4] += 256534;
        result[5] += 2211;
        result[6] += 24326;
      } else {
        result[0] += 27594856;
        result[1] += 0;
        result[2] += 68456;
        result[3] += 11740307;
        result[4] += 3546052;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42898854;
        result[1] += 0;
        result[2] += 50818;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 30212001;
        result[1] += 104102;
        result[2] += 323461;
        result[3] += 12235749;
        result[4] += 11153;
        result[5] += 18589;
        result[6] += 44615;
      } else {
        result[0] += 0;
        result[1] += 47210;
        result[2] += 365880;
        result[3] += 34758666;
        result[4] += 7742507;
        result[5] += 35407;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 35175;
        result[1] += 527637;
        result[2] += 0;
        result[3] += 13542689;
        result[4] += 28844170;
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42703895;
        result[1] += 0;
        result[2] += 184333;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 61444;
      } else {
        result[0] += 42940752;
        result[1] += 0;
        result[2] += 8920;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 967632;
        result[1] += 131949;
        result[2] += 681740;
        result[3] += 30755308;
        result[4] += 10380054;
        result[5] += 32987;
        result[6] += 0;
      } else {
        result[0] += 31799949;
        result[1] += 0;
        result[2] += 156285;
        result[3] += 10956423;
        result[4] += 0;
        result[5] += 4112;
        result[6] += 32902;
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
        result[0] += 8079641;
        result[1] += 510293;
        result[2] += 368545;
        result[3] += 33991193;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 500345;
        result[2] += 300207;
        result[3] += 36905497;
        result[4] += 5243622;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 21375415;
        result[1] += 0;
        result[2] += 1988410;
        result[3] += 19585846;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1080852;
        result[4] += 41868820;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 42921887;
        result[1] += 0;
        result[2] += 22882;
        result[3] += 0;
        result[4] += 3268;
        result[5] += 0;
        result[6] += 1634;
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
        result[0] += 34968968;
        result[1] += 87473;
        result[2] += 200675;
        result[3] += 7409551;
        result[4] += 231548;
        result[5] += 20582;
        result[6] += 30873;
      } else {
        result[0] += 0;
        result[1] += 34186;
        result[2] += 193723;
        result[3] += 34995607;
        result[4] += 7680572;
        result[5] += 45582;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 20407602;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5492352;
        result[4] += 17023688;
        result[5] += 26030;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 326020;
        result[3] += 40979374;
        result[4] += 1573403;
        result[5] += 70874;
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
        result[1] += 4405094;
        result[2] += 0;
        result[3] += 38544578;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 666920;
        result[2] += 0;
        result[3] += 42282752;
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
        result[0] += 42767517;
        result[1] += 24910;
        result[2] += 102754;
        result[3] += 46706;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7784;
      } else {
        result[0] += 27723040;
        result[1] += 0;
        result[2] += 127214;
        result[3] += 15060274;
        result[4] += 0;
        result[5] += 4892;
        result[6] += 34250;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 34890;
        result[1] += 130837;
        result[2] += 104670;
        result[3] += 27100859;
        result[4] += 15569692;
        result[5] += 8722;
        result[6] += 0;
      } else {
        result[0] += 42772682;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 176990;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42745332;
        result[1] += 15249;
        result[2] += 102170;
        result[3] += 82346;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4574;
      } else {
        result[0] += 471974;
        result[1] += 1573248;
        result[2] += 0;
        result[3] += 40904450;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 19788148;
        result[1] += 0;
        result[2] += 382547;
        result[3] += 1147643;
        result[4] += 21631333;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 646790;
        result[1] += 0;
        result[2] += 178899;
        result[3] += 41903798;
        result[4] += 165138;
        result[5] += 55046;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 33188383;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9761289;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42787502;
        result[1] += 0;
        result[2] += 110959;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 51211;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
        result[0] += 1753047;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24542670;
        result[4] += 16653954;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2123534;
        result[1] += 0;
        result[2] += 0;
        result[3] += 39900086;
        result[4] += 926052;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 30893624;
        result[1] += 753503;
        result[2] += 9042036;
        result[3] += 753503;
        result[4] += 1507006;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 213502;
        result[2] += 231294;
        result[3] += 0;
        result[4] += 42469291;
        result[5] += 35583;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 13755673;
        result[1] += 210331;
        result[2] += 0;
        result[3] += 28983667;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42433023;
        result[1] += 21087;
        result[2] += 94894;
        result[3] += 394641;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6025;
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
        result[0] += 17451334;
        result[1] += 0;
        result[2] += 274696;
        result[3] += 25199403;
        result[4] += 0;
        result[5] += 8079;
        result[6] += 16158;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 41181157;
        result[1] += 0;
        result[2] += 1717986;
        result[3] += 50529;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1778454;
        result[1] += 88922;
        result[2] += 14820;
        result[3] += 29062908;
        result[4] += 12004566;
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
        result[0] += 760171;
        result[1] += 3040684;
        result[2] += 0;
        result[3] += 39148816;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4751070;
        result[1] += 47510;
        result[2] += 213798;
        result[3] += 34896609;
        result[4] += 2945663;
        result[5] += 95021;
        result[6] += 0;
      } else {
        result[0] += 42696881;
        result[1] += 29466;
        result[2] += 49627;
        result[3] += 164391;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9305;
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
        result[0] += 15599082;
        result[1] += 0;
        result[2] += 298261;
        result[3] += 22384534;
        result[4] += 4585772;
        result[5] += 14913;
        result[6] += 67108;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
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
        result[0] += 26163758;
        result[1] += 171284;
        result[2] += 111335;
        result[3] += 12435279;
        result[4] += 4050886;
        result[5] += 8564;
        result[6] += 8564;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 881186;
        result[3] += 36128638;
        result[4] += 5874575;
        result[5] += 65273;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 37325854;
        result[1] += 29897;
        result[2] += 110147;
        result[3] += 5178507;
        result[4] += 292677;
        result[5] += 0;
        result[6] += 12588;
      } else {
        result[0] += 331018;
        result[1] += 0;
        result[2] += 165509;
        result[3] += 0;
        result[4] += 42453144;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 5024752;
        result[1] += 418729;
        result[2] += 418729;
        result[3] += 37087461;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 39367;
        result[2] += 0;
        result[3] += 2165198;
        result[4] += 40745106;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 177845;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42593982;
        result[5] += 177845;
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
        result[1] += 152303;
        result[2] += 346145;
        result[3] += 42381995;
        result[4] += 0;
        result[5] += 69229;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 17943418;
        result[1] += 1049880;
        result[2] += 0;
        result[3] += 23956373;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42818318;
        result[1] += 27816;
        result[2] += 78812;
        result[3] += 12362;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12362;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19302966;
        result[1] += 0;
        result[2] += 53344;
        result[3] += 23593361;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42358150;
        result[1] += 0;
        result[2] += 411493;
        result[3] += 25718;
        result[4] += 0;
        result[5] += 38577;
        result[6] += 115732;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 42091904;
        result[1] += 34038;
        result[2] += 15317;
        result[3] += 787989;
        result[4] += 11913;
        result[5] += 1701;
        result[6] += 6807;
      } else {
        result[0] += 29732802;
        result[1] += 0;
        result[2] += 92786;
        result[3] += 13103464;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20619;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 9818708;
        result[1] += 200967;
        result[2] += 229677;
        result[3] += 18460320;
        result[4] += 14239998;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8096165;
        result[1] += 165509;
        result[2] += 579282;
        result[3] += 15819934;
        result[4] += 18288781;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 245745;
        result[3] += 35588467;
        result[4] += 7081948;
        result[5] += 33510;
        result[6] += 0;
      } else {
        result[0] += 42654688;
        result[1] += 0;
        result[2] += 235987;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 58996;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        result[0] += 740511;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42209161;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2569378;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40365090;
        result[4] += 0;
        result[5] += 15203;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 29255574;
        result[1] += 622459;
        result[2] += 8714426;
        result[3] += 3112295;
        result[4] += 622459;
        result[5] += 622459;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 307947;
        result[2] += 163031;
        result[3] += 0;
        result[4] += 42442464;
        result[5] += 36229;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 438261;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42511410;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15964707;
        result[1] += 335216;
        result[2] += 0;
        result[3] += 26649748;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42475426;
        result[1] += 24320;
        result[2] += 76000;
        result[3] += 370884;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3040;
      } else {
        result[0] += 28177484;
        result[1] += 0;
        result[2] += 170861;
        result[3] += 14562272;
        result[4] += 0;
        result[5] += 14645;
        result[6] += 24408;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        result[0] += 795364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42154308;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7260513;
        result[1] += 0;
        result[2] += 0;
        result[3] += 35655700;
        result[4] += 0;
        result[5] += 33458;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 38094492;
        result[1] += 0;
        result[2] += 3734754;
        result[3] += 0;
        result[4] += 1120426;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 239325;
        result[2] += 202505;
        result[3] += 0;
        result[4] += 42360564;
        result[5] += 147277;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 42900158;
        result[1] += 0;
        result[2] += 45388;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4126;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 40313772;
        result[1] += 211435;
        result[2] += 317153;
        result[3] += 2086167;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21143;
      } else {
        result[0] += 17889129;
        result[1] += 0;
        result[2] += 338868;
        result[3] += 24674390;
        result[4] += 0;
        result[5] += 7880;
        result[6] += 39403;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 41885903;
        result[1] += 0;
        result[2] += 1063768;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2635684;
        result[1] += 439280;
        result[2] += 19967;
        result[3] += 34463568;
        result[4] += 5391172;
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
        result[0] += 1425819;
        result[1] += 0;
        result[2] += 200114;
        result[3] += 5778319;
        result[4] += 35545419;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42898542;
        result[5] += 51130;
        result[6] += 0;
      } else {
        result[0] += 5365618;
        result[1] += 24726;
        result[2] += 618158;
        result[3] += 36792811;
        result[4] += 0;
        result[5] += 148358;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42633980;
        result[1] += 23327;
        result[2] += 59095;
        result[3] += 227049;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6220;
      } else {
        result[0] += 27764948;
        result[1] += 0;
        result[2] += 152338;
        result[3] += 14973415;
        result[4] += 0;
        result[5] += 14742;
        result[6] += 44227;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
        result[1] += 81965;
        result[2] += 286877;
        result[3] += 29548391;
        result[4] += 12970965;
        result[5] += 61473;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 36340929;
        result[1] += 0;
        result[2] += 104976;
        result[3] += 6484680;
        result[4] += 0;
        result[5] += 4771;
        result[6] += 14314;
      } else {
        result[0] += 42566193;
        result[1] += 0;
        result[2] += 119010;
        result[3] += 145457;
        result[4] += 0;
        result[5] += 0;
        result[6] += 119010;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 41939092;
        result[1] += 42859;
        result[2] += 47370;
        result[3] += 909071;
        result[4] += 4511;
        result[5] += 2255;
        result[6] += 4511;
      } else {
        result[0] += 4463143;
        result[1] += 219923;
        result[2] += 452782;
        result[3] += 21112610;
        result[4] += 16701213;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8189556;
        result[1] += 0;
        result[2] += 0;
        result[3] += 26964872;
        result[4] += 7780078;
        result[5] += 15165;
        result[6] += 0;
      } else {
        result[0] += 42712578;
        result[1] += 0;
        result[2] += 142256;
        result[3] += 94837;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 42949672;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 2519394;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40430278;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17724582;
        result[1] += 256671;
        result[2] += 541861;
        result[3] += 24426557;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 41025782;
        result[1] += 11731;
        result[2] += 42231;
        result[3] += 750786;
        result[4] += 1114448;
        result[5] += 4692;
        result[6] += 0;
      } else {
        result[0] += 40130868;
        result[1] += 0;
        result[2] += 0;
        result[3] += 370895;
        result[4] += 2435545;
        result[5] += 0;
        result[6] += 12363;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 18954370;
        result[1] += 98841;
        result[2] += 284896;
        result[3] += 23198753;
        result[4] += 372110;
        result[5] += 17442;
        result[6] += 23256;
      } else {
        result[0] += 42386932;
        result[1] += 0;
        result[2] += 102316;
        result[3] += 441821;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18602;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 49825;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40246633;
        result[4] += 2628300;
        result[5] += 24912;
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
        result[0] += 41373538;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1576134;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 349816;
        result[2] += 485856;
        result[3] += 0;
        result[4] += 42075132;
        result[5] += 38868;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 36262869;
        result[1] += 0;
        result[2] += 98680;
        result[3] += 6564627;
        result[4] += 0;
        result[5] += 9398;
        result[6] += 14097;
      } else {
        result[0] += 42599433;
        result[1] += 0;
        result[2] += 116746;
        result[3] += 181605;
        result[4] += 0;
        result[5] += 0;
        result[6] += 51887;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42710347;
        result[1] += 0;
        result[2] += 42955;
        result[3] += 190232;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6136;
      } else {
        result[0] += 35009804;
        result[1] += 84896;
        result[2] += 258732;
        result[3] += 7584110;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12128;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3501519;
        result[1] += 0;
        result[2] += 0;
        result[3] += 38568461;
        result[4] += 879692;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12066681;
        result[1] += 0;
        result[2] += 0;
        result[3] += 26447521;
        result[4] += 4407920;
        result[5] += 27549;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42930185;
        result[5] += 19487;
        result[6] += 0;
      } else {
        result[0] += 29242330;
        result[1] += 7005975;
        result[2] += 6092152;
        result[3] += 0;
        result[4] += 0;
        result[5] += 609215;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 17110032;
        result[1] += 1134849;
        result[2] += 0;
        result[3] += 24704791;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42754656;
        result[1] += 18426;
        result[2] += 89062;
        result[3] += 82920;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4606;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 18550994;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24398678;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42241495;
        result[1] += 0;
        result[2] += 577033;
        result[3] += 78686;
        result[4] += 0;
        result[5] += 13114;
        result[6] += 39343;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 25324;
        result[1] += 37986;
        result[2] += 0;
        result[3] += 40037401;
        result[4] += 2836299;
        result[5] += 12662;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 529516;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42420156;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4390175;
        result[1] += 0;
        result[2] += 1269448;
        result[3] += 0;
        result[4] += 37184261;
        result[5] += 105787;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42783764;
        result[1] += 0;
        result[2] += 165908;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42935071;
        result[1] += 0;
        result[2] += 14601;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 22738758;
        result[1] += 94720;
        result[2] += 325600;
        result[3] += 19778753;
        result[4] += 0;
        result[5] += 5920;
        result[6] += 5920;
      } else {
        result[0] += 41699578;
        result[1] += 0;
        result[2] += 297641;
        result[3] += 873081;
        result[4] += 0;
        result[5] += 0;
        result[6] += 79371;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
        result[0] += 42862561;
        result[1] += 1742;
        result[2] += 17422;
        result[3] += 59236;
        result[4] += 5226;
        result[5] += 0;
        result[6] += 3484;
      } else {
        result[0] += 37535189;
        result[1] += 274647;
        result[2] += 104627;
        result[3] += 4969815;
        result[4] += 0;
        result[5] += 26156;
        result[6] += 39235;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 7826072;
        result[1] += 0;
        result[2] += 328038;
        result[3] += 33553699;
        result[4] += 1241861;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42812645;
        result[1] += 0;
        result[2] += 94206;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42821;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 376751;
        result[2] += 188375;
        result[3] += 39343622;
        result[4] += 3000556;
        result[5] += 40366;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
        result[0] += 8097720;
        result[1] += 0;
        result[2] += 1230535;
        result[3] += 13059558;
        result[4] += 20522163;
        result[5] += 39694;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1312642;
        result[4] += 41637030;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42619290;
        result[1] += 0;
        result[2] += 330382;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42934746;
        result[1] += 0;
        result[2] += 11609;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3317;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 30219342;
        result[1] += 91147;
        result[2] += 334209;
        result[3] += 12255601;
        result[4] += 3797;
        result[5] += 15191;
        result[6] += 30382;
      } else {
        result[0] += 0;
        result[1] += 23412;
        result[2] += 339476;
        result[3] += 34720286;
        result[4] += 7854791;
        result[5] += 11706;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 52634;
        result[1] += 0;
        result[2] += 0;
        result[3] += 18948385;
        result[4] += 23948653;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30353;
        result[1] += 273178;
        result[2] += 0;
        result[3] += 1669421;
        result[4] += 40976719;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4467a000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 46798;
        result[2] += 327592;
        result[3] += 34081285;
        result[4] += 8423798;
        result[5] += 70198;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 401794;
        result[2] += 0;
        result[3] += 4250558;
        result[4] += 38297320;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 42888223;
        result[1] += 19404;
        result[2] += 35575;
        result[3] += 3234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3234;
      } else {
        result[0] += 42466875;
        result[1] += 0;
        result[2] += 0;
        result[3] += 482797;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 38354606;
        result[1] += 90230;
        result[2] += 257323;
        result[3] += 4210752;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36760;
      } else {
        result[0] += 22060146;
        result[1] += 0;
        result[2] += 131190;
        result[3] += 20758335;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 21059362;
        result[1] += 0;
        result[2] += 181770;
        result[3] += 21630639;
        result[4] += 77901;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6985142;
        result[1] += 394033;
        result[2] += 322391;
        result[3] += 35248105;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 1379117;
        result[2] += 0;
        result[3] += 19603176;
        result[4] += 21967378;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1090093;
        result[4] += 41859579;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 36129423;
        result[1] += 0;
        result[2] += 198841;
        result[3] += 6475591;
        result[4] += 102734;
        result[5] += 6628;
        result[6] += 36454;
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
        result[0] += 42909513;
        result[1] += 0;
        result[2] += 33072;
        result[3] += 0;
        result[4] += 4724;
        result[5] += 0;
        result[6] += 2362;
      } else {
        result[0] += 24261516;
        result[1] += 85568;
        result[2] += 148318;
        result[3] += 15196962;
        result[4] += 3228784;
        result[5] += 17113;
        result[6] += 11409;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
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
        result[0] += 135549;
        result[1] += 271098;
        result[2] += 464739;
        result[3] += 42078286;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42494252;
        result[1] += 0;
        result[2] += 455420;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5004901;
        result[1] += 27200;
        result[2] += 0;
        result[3] += 37754367;
        result[4] += 27200;
        result[5] += 136002;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1287319;
        result[3] += 0;
        result[4] += 41662353;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42730991;
        result[1] += 17305;
        result[2] += 47197;
        result[3] += 146312;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7866;
      } else {
        result[0] += 28273924;
        result[1] += 0;
        result[2] += 133460;
        result[3] += 14478028;
        result[4] += 0;
        result[5] += 19771;
        result[6] += 44486;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 16333175;
        result[1] += 128720;
        result[2] += 185929;
        result[3] += 26216034;
        result[4] += 85813;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2817556;
        result[1] += 0;
        result[2] += 830817;
        result[3] += 6791033;
        result[4] += 32510265;
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
        result[0] += 53155;
        result[1] += 850488;
        result[2] += 0;
        result[3] += 53155;
        result[4] += 41992873;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 61181;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42827309;
        result[5] += 61181;
        result[6] += 0;
      } else {
        result[0] += 4889008;
        result[1] += 26284;
        result[2] += 499414;
        result[3] += 37429825;
        result[4] += 0;
        result[5] += 105139;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42744042;
        result[1] += 0;
        result[2] += 12462;
        result[3] += 191090;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2077;
      } else {
        result[0] += 34484181;
        result[1] += 36272;
        result[2] += 147881;
        result[3] += 8231113;
        result[4] += 0;
        result[5] += 11160;
        result[6] += 39062;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5121893;
        result[1] += 14846;
        result[2] += 0;
        result[3] += 37738703;
        result[4] += 44538;
        result[5] += 29692;
        result[6] += 0;
      } else {
        result[0] += 114379;
        result[1] += 0;
        result[2] += 1601319;
        result[3] += 0;
        result[4] += 41233973;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31125471;
        result[4] += 11824201;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 261728;
        result[2] += 0;
        result[3] += 209382;
        result[4] += 42478561;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42919696;
        result[1] += 0;
        result[2] += 29976;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33202229;
        result[1] += 456911;
        result[2] += 0;
        result[3] += 9290532;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 37150029;
        result[1] += 67850;
        result[2] += 255248;
        result[3] += 5447464;
        result[4] += 0;
        result[5] += 6461;
        result[6] += 22616;
      } else {
        result[0] += 21712674;
        result[1] += 0;
        result[2] += 158559;
        result[3] += 21078438;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 62920;
        result[1] += 37752;
        result[2] += 0;
        result[3] += 40030152;
        result[4] += 2818847;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 41593367;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1356305;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 314175;
        result[2] += 406580;
        result[3] += 0;
        result[4] += 42154993;
        result[5] += 73923;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 27398929;
        result[1] += 201957;
        result[2] += 67319;
        result[3] += 15281466;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42755330;
        result[1] += 36340;
        result[2] += 85321;
        result[3] += 69520;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3160;
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
        result[0] += 17750245;
        result[1] += 0;
        result[2] += 272721;
        result[3] += 24879953;
        result[4] += 0;
        result[5] += 7792;
        result[6] += 38960;
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
        result[0] += 283763;
        result[1] += 466183;
        result[2] += 364839;
        result[3] += 41834886;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42727366;
        result[1] += 0;
        result[2] += 222306;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42911920;
        result[1] += 0;
        result[2] += 34470;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3282;
      } else {
        result[0] += 25318909;
        result[1] += 28673;
        result[2] += 293905;
        result[3] += 16637935;
        result[4] += 609316;
        result[5] += 10752;
        result[6] += 50179;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
        result[0] += 17179869;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 25769803;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 204847;
        result[3] += 0;
        result[4] += 42744825;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        result[0] += 42929956;
        result[1] += 0;
        result[2] += 16430;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3286;
      } else {
        result[0] += 28633115;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14316557;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 313397;
        result[2] += 427359;
        result[3] += 41055043;
        result[4] += 1139626;
        result[5] += 14245;
        result[6] += 0;
      } else {
        result[0] += 42822656;
        result[1] += 0;
        result[2] += 108871;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18145;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 18920830;
        result[1] += 0;
        result[2] += 434961;
        result[3] += 20052846;
        result[4] += 3513151;
        result[5] += 5576;
        result[6] += 22305;
      } else {
        result[0] += 0;
        result[1] += 405823;
        result[2] += 0;
        result[3] += 3426955;
        result[4] += 39116893;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
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
        result[0] += 42898561;
        result[1] += 0;
        result[2] += 51111;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 590849;
        result[1] += 240716;
        result[2] += 437666;
        result[3] += 28718217;
        result[4] += 12911161;
        result[5] += 51061;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 63535;
        result[3] += 0;
        result[4] += 42886137;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42202952;
        result[1] += 0;
        result[2] += 238315;
        result[3] += 450150;
        result[4] += 0;
        result[5] += 5295;
        result[6] += 52958;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 49010;
        result[3] += 42900662;
        result[4] += 0;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 240502;
        result[1] += 541129;
        result[2] += 420878;
        result[3] += 41747162;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42415915;
        result[1] += 0;
        result[2] += 533757;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 40545188;
        result[1] += 26601;
        result[2] += 56158;
        result[3] += 2250786;
        result[4] += 62070;
        result[5] += 5911;
        result[6] += 2955;
      } else {
        result[0] += 28070132;
        result[1] += 0;
        result[2] += 281491;
        result[3] += 14499280;
        result[4] += 49384;
        result[5] += 14815;
        result[6] += 34569;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0;
        result[1] += 3463683;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39485989;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5227336;
        result[1] += 13792;
        result[2] += 0;
        result[3] += 37680959;
        result[4] += 27584;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 71424;
        result[1] += 0;
        result[2] += 619008;
        result[3] += 0;
        result[4] += 42140200;
        result[5] += 119040;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        result[0] += 42805138;
        result[1] += 18257;
        result[2] += 71506;
        result[3] += 48685;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6085;
      } else {
        result[0] += 5698629;
        result[1] += 419899;
        result[2] += 0;
        result[3] += 36831144;
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
        result[0] += 17934939;
        result[1] += 0;
        result[2] += 276047;
        result[3] += 24714329;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24357;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 293005;
        result[1] += 268588;
        result[2] += 415090;
        result[3] += 41948571;
        result[4] += 24417;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42597265;
        result[1] += 0;
        result[2] += 352407;
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
        result[0] += 335544;
        result[1] += 2348810;
        result[2] += 0;
        result[3] += 40265318;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4511326;
        result[1] += 46033;
        result[2] += 437322;
        result[3] += 34617528;
        result[4] += 3268410;
        result[5] += 69050;
        result[6] += 0;
      } else {
        result[0] += 39117991;
        result[1] += 11851;
        result[2] += 74666;
        result[3] += 3725015;
        result[4] += 0;
        result[5] += 2370;
        result[6] += 17777;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
        result[0] += 28633115;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14316557;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 62976;
        result[3] += 0;
        result[4] += 42886696;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 129496;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42777010;
        result[5] += 43165;
        result[6] += 0;
      } else {
        result[0] += 6147503;
        result[1] += 0;
        result[2] += 463962;
        result[3] += 36271926;
        result[4] += 0;
        result[5] += 66280;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42914811;
        result[1] += 0;
        result[2] += 31541;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3320;
      } else {
        result[0] += 30587918;
        result[1] += 46884;
        result[2] += 332095;
        result[3] += 11916356;
        result[4] += 0;
        result[5] += 3907;
        result[6] += 62512;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8196060;
        result[1] += 376497;
        result[2] += 318574;
        result[3] += 34058540;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 466844;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42482828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 567844;
        result[2] += 0;
        result[3] += 154866;
        result[4] += 42226962;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x432e8000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42924969;
        result[1] += 0;
        result[2] += 23056;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1646;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 144287;
        result[2] += 144287;
        result[3] += 10340626;
        result[4] += 32272374;
        result[5] += 48095;
        result[6] += 0;
      } else {
        result[0] += 24994442;
        result[1] += 28575;
        result[2] += 266708;
        result[3] += 16634385;
        result[4] += 984283;
        result[5] += 12700;
        result[6] += 28575;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        result[0] += 33239312;
        result[1] += 0;
        result[2] += 2240852;
        result[3] += 7469508;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2754024;
        result[1] += 885222;
        result[2] += 0;
        result[3] += 39310425;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 68829;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42812013;
        result[5] += 68829;
        result[6] += 0;
      } else {
        result[0] += 5202963;
        result[1] += 28825;
        result[2] += 446791;
        result[3] += 37126965;
        result[4] += 0;
        result[5] += 144126;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 7767864;
        result[4] += 35181808;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 643255;
        result[2] += 0;
        result[3] += 49481;
        result[4] += 42256936;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42380000))) ) ) {
        result[0] += 0;
        result[1] += 200699;
        result[2] += 0;
        result[3] += 42748973;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 42759128;
        result[1] += 40943;
        result[2] += 85036;
        result[3] += 55116;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9448;
      } else {
        result[0] += 27910676;
        result[1] += 0;
        result[2] += 212481;
        result[3] += 14779295;
        result[4] += 0;
        result[5] += 9443;
        result[6] += 37774;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 42160426;
        result[1] += 0;
        result[2] += 12236;
        result[3] += 777009;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9857301;
        result[1] += 0;
        result[2] += 1609355;
        result[3] += 16596477;
        result[4] += 14886537;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 254768;
        result[1] += 212306;
        result[2] += 169845;
        result[3] += 32015870;
        result[4] += 10296881;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34788253;
        result[1] += 0;
        result[2] += 179911;
        result[3] += 7899730;
        result[4] += 0;
        result[5] += 8177;
        result[6] += 73599;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 8642821;
        result[1] += 153093;
        result[2] += 222681;
        result[3] += 16450587;
        result[4] += 17480489;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40994855;
        result[1] += 20268;
        result[2] += 58554;
        result[3] += 1779153;
        result[4] += 78823;
        result[5] += 4504;
        result[6] += 13512;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8699041;
        result[1] += 0;
        result[2] += 103208;
        result[3] += 26922795;
        result[4] += 7224627;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42718013;
        result[1] += 0;
        result[2] += 127412;
        result[3] += 81080;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23165;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 35200240;
        result[1] += 184910;
        result[2] += 201720;
        result[3] += 7329180;
        result[4] += 16810;
        result[5] += 16810;
        result[6] += 0;
      } else {
        result[0] += 42456347;
        result[1] += 5362;
        result[2] += 10724;
        result[3] += 459364;
        result[4] += 14299;
        result[5] += 1787;
        result[6] += 1787;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 41848885;
        result[1] += 0;
        result[2] += 56937;
        result[3] += 1043849;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5263359;
        result[1] += 214830;
        result[2] += 421399;
        result[3] += 23201747;
        result[4] += 13848336;
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
        result[0] += 10696160;
        result[1] += 0;
        result[2] += 0;
        result[3] += 32253512;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1955034;
        result[3] += 0;
        result[4] += 40994638;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42647949;
        result[1] += 0;
        result[2] += 236131;
        result[3] += 13118;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52473;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 165191;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42619290;
        result[5] += 165191;
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
        result[1] += 132519;
        result[2] += 318047;
        result[3] += 42419593;
        result[4] += 0;
        result[5] += 79511;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42736617;
        result[1] += 4485;
        result[2] += 29154;
        result[3] += 179414;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23193517;
        result[1] += 144670;
        result[2] += 352995;
        result[3] += 19217982;
        result[4] += 0;
        result[5] += 5786;
        result[6] += 34720;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 40501764;
        result[1] += 0;
        result[2] += 111268;
        result[3] += 2336640;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42728386;
        result[1] += 0;
        result[2] += 165964;
        result[3] += 30175;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25146;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 38566694;
        result[1] += 123216;
        result[2] += 44005;
        result[3] += 4198154;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17602;
      } else {
        result[0] += 42474334;
        result[1] += 7202;
        result[2] += 32409;
        result[3] += 423122;
        result[4] += 3601;
        result[5] += 5401;
        result[6] += 3601;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 164768;
        result[1] += 604151;
        result[2] += 0;
        result[3] += 3899522;
        result[4] += 38281230;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5998127;
        result[1] += 86650;
        result[2] += 442879;
        result[3] += 25658121;
        result[4] += 10754266;
        result[5] += 9627;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 366142;
        result[3] += 34972195;
        result[4] += 7589143;
        result[5] += 22190;
        result[6] += 0;
      } else {
        result[0] += 42734435;
        result[1] += 0;
        result[2] += 195670;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19567;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 42941093;
        result[1] += 0;
        result[2] += 8579;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42903573;
        result[1] += 0;
        result[2] += 34574;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11524;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 30471253;
        result[1] += 74721;
        result[2] += 287676;
        result[3] += 12074925;
        result[4] += 3736;
        result[5] += 11208;
        result[6] += 26152;
      } else {
        result[0] += 0;
        result[1] += 58562;
        result[2] += 281099;
        result[3] += 34165311;
        result[4] += 8432987;
        result[5] += 11712;
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
        result[0] += 219130;
        result[1] += 1643482;
        result[2] += 0;
        result[3] += 41087059;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 59077;
        result[1] += 78770;
        result[2] += 157541;
        result[3] += 41334875;
        result[4] += 1161866;
        result[5] += 157541;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 182441;
        result[2] += 0;
        result[3] += 16389291;
        result[4] += 26377940;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 42779687;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 169985;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 802220;
        result[3] += 0;
        result[4] += 42147452;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 517465;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42432207;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 22309969;
        result[1] += 1193046;
        result[2] += 0;
        result[3] += 19446657;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42723814;
        result[1] += 0;
        result[2] += 21510;
        result[3] += 195743;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8604;
      } else {
        result[0] += 34641248;
        result[1] += 36157;
        result[2] += 206612;
        result[3] += 8042410;
        result[4] += 0;
        result[5] += 2582;
        result[6] += 20661;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 49113;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42876002;
        result[5] += 24556;
        result[6] += 0;
      } else {
        result[0] += 8246512;
        result[1] += 207803;
        result[2] += 65622;
        result[3] += 34418798;
        result[4] += 0;
        result[5] += 10937;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42758465;
        result[1] += 21415;
        result[2] += 102486;
        result[3] += 64245;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3059;
      } else {
        result[0] += 154495;
        result[1] += 1699447;
        result[2] += 0;
        result[3] += 41095730;
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
        result[3] += 42728638;
        result[4] += 165775;
        result[5] += 55258;
        result[6] += 0;
      } else {
        result[0] += 20423840;
        result[1] += 0;
        result[2] += 690206;
        result[3] += 0;
        result[4] += 21835626;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 42836981;
        result[1] += 0;
        result[2] += 0;
        result[3] += 112691;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42374355;
        result[1] += 0;
        result[2] += 354041;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 221276;
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
        result[0] += 42660866;
        result[1] += 0;
        result[2] += 247548;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 41258;
      } else {
        result[0] += 42937168;
        result[1] += 0;
        result[2] += 12504;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 666378;
        result[1] += 237992;
        result[2] += 198326;
        result[3] += 27043855;
        result[4] += 14787253;
        result[5] += 15866;
        result[6] += 0;
      } else {
        result[0] += 42141381;
        result[1] += 0;
        result[2] += 209945;
        result[3] += 514367;
        result[4] += 0;
        result[5] += 5248;
        result[6] += 78729;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 574364;
        result[3] += 0;
        result[4] += 42120035;
        result[5] += 255272;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 13845;
        result[2] += 332299;
        result[3] += 42603527;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42904387;
        result[1] += 0;
        result[2] += 42902;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2383;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 31643304;
        result[1] += 40351;
        result[2] += 278422;
        result[3] += 9841624;
        result[4] += 1089478;
        result[5] += 24210;
        result[6] += 32280;
      } else {
        result[0] += 3981250;
        result[1] += 393904;
        result[2] += 182884;
        result[3] += 17585028;
        result[4] += 20806605;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 28035;
        result[2] += 280350;
        result[3] += 36137159;
        result[4] += 6448057;
        result[5] += 56070;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29399021;
        result[4] += 13550651;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 25014;
        result[1] += 25014;
        result[2] += 0;
        result[3] += 40098034;
        result[4] += 2789102;
        result[5] += 12507;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42911865;
        result[5] += 37807;
        result[6] += 0;
      } else {
        result[0] += 27358353;
        result[1] += 4118461;
        result[2] += 11178682;
        result[3] += 0;
        result[4] += 0;
        result[5] += 294175;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 41522773;
        result[1] += 1426899;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5870818;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37078854;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 38487743;
        result[1] += 0;
        result[2] += 143933;
        result[3] += 4292808;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25188;
      } else {
        result[0] += 39642452;
        result[1] += 22979;
        result[2] += 104289;
        result[3] += 3179951;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3277610;
        result[1] += 32451;
        result[2] += 0;
        result[3] += 39509804;
        result[4] += 16225;
        result[5] += 113580;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 839954;
        result[3] += 0;
        result[4] += 41941727;
        result[5] += 167990;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 3123612;
        result[2] += 0;
        result[3] += 39826060;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42884584;
        result[1] += 2169;
        result[2] += 39053;
        result[3] += 19526;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4339;
      } else {
        result[0] += 38642399;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4307273;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 36471607;
        result[1] += 83422;
        result[2] += 231015;
        result[3] += 6131542;
        result[4] += 0;
        result[5] += 3208;
        result[6] += 28876;
      } else {
        result[0] += 21686858;
        result[1] += 0;
        result[2] += 171637;
        result[3] += 21091176;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41840000))) ) ) {
        result[0] += 28633115;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14316557;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42913504;
        result[5] += 36168;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 40620;
        result[1] += 297885;
        result[2] += 176023;
        result[3] += 42340361;
        result[4] += 0;
        result[5] += 94781;
        result[6] += 0;
      } else {
        result[0] += 42127931;
        result[1] += 0;
        result[2] += 821741;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 42750441;
        result[1] += 16858;
        result[2] += 102680;
        result[3] += 75094;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4597;
      } else {
        result[0] += 0;
        result[1] += 1156337;
        result[2] += 0;
        result[3] += 41793335;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19034869;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23914803;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42404722;
        result[1] += 0;
        result[2] += 430890;
        result[3] += 38019;
        result[4] += 0;
        result[5] += 12673;
        result[6] += 63366;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42539652;
        result[1] += 0;
        result[2] += 410020;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42919813;
        result[1] += 0;
        result[2] += 28200;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1658;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 31816714;
        result[1] += 61964;
        result[2] += 313953;
        result[3] += 9530142;
        result[4] += 1173194;
        result[5] += 24785;
        result[6] += 28916;
      } else {
        result[0] += 0;
        result[1] += 35330;
        result[2] += 306194;
        result[3] += 34976838;
        result[4] += 7619533;
        result[5] += 11776;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 4769995;
        result[1] += 256239;
        result[2] += 177396;
        result[3] += 23849979;
        result[4] += 13896062;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44739;
        result[1] += 626349;
        result[2] += 0;
        result[3] += 3892314;
        result[4] += 38386270;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 19984877;
        result[1] += 0;
        result[2] += 777369;
        result[3] += 21831130;
        result[4] += 356294;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5590099;
        result[1] += 184491;
        result[2] += 184491;
        result[3] += 22231252;
        result[4] += 14759337;
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
        result[0] += 425244;
        result[1] += 5528175;
        result[2] += 0;
        result[3] += 36996252;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 42920437;
        result[1] += 0;
        result[2] += 25986;
        result[3] += 0;
        result[4] += 1624;
        result[5] += 0;
        result[6] += 1624;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 34415619;
        result[1] += 49018;
        result[2] += 254894;
        result[3] += 7553691;
        result[4] += 607824;
        result[5] += 14705;
        result[6] += 53919;
      } else {
        result[0] += 0;
        result[1] += 23140;
        result[2] += 231409;
        result[3] += 34861897;
        result[4] += 7786942;
        result[5] += 46281;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 42943984;
        result[1] += 0;
        result[2] += 5688;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42918876;
        result[1] += 0;
        result[2] += 26947;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3849;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 769879;
        result[1] += 173222;
        result[2] += 587033;
        result[3] += 35039157;
        result[4] += 6361132;
        result[5] += 19246;
        result[6] += 0;
      } else {
        result[0] += 31973104;
        result[1] += 0;
        result[2] += 202669;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36480;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 100742;
        result[1] += 503710;
        result[2] += 0;
        result[3] += 12894976;
        result[4] += 29450244;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x43540000))) ) ) {
        result[0] += 0;
        result[1] += 730022;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42219650;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 2104290;
        result[1] += 0;
        result[2] += 210429;
        result[3] += 28275016;
        result[4] += 12315635;
        result[5] += 44300;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        result[0] += 42661890;
        result[1] += 22839;
        result[2] += 74610;
        result[3] += 181196;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9135;
      } else {
        result[0] += 5658040;
        result[1] += 411493;
        result[2] += 51436;
        result[3] += 36828701;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8462564;
        result[1] += 0;
        result[2] += 140323;
        result[3] += 34335991;
        result[4] += 0;
        result[5] += 10794;
        result[6] += 0;
      } else {
        result[0] += 42686782;
        result[1] += 0;
        result[2] += 147875;
        result[3] += 57507;
        result[4] += 0;
        result[5] += 0;
        result[6] += 57507;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 42793421;
        result[1] += 0;
        result[2] += 156251;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42938940;
        result[1] += 0;
        result[2] += 10732;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 716758;
        result[1] += 223405;
        result[2] += 502661;
        result[3] += 34888464;
        result[4] += 6562531;
        result[5] += 55851;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 247310;
        result[2] += 0;
        result[3] += 6141555;
        result[4] += 36560806;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 42147123;
        result[1] += 0;
        result[2] += 260429;
        result[3] += 483655;
        result[4] += 0;
        result[5] += 10629;
        result[6] += 47834;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 68554;
        result[3] += 42881118;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 41295440;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1618008;
        result[4] += 0;
        result[5] += 24149;
        result[6] += 12074;
      } else {
        result[0] += 41847048;
        result[1] += 22086;
        result[2] += 44172;
        result[3] += 1031267;
        result[4] += 1698;
        result[5] += 0;
        result[6] += 3397;
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
        result[0] += 6918324;
        result[1] += 216595;
        result[2] += 738973;
        result[3] += 35075778;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 6276179;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36673493;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 42319572;
        result[1] += 0;
        result[2] += 540085;
        result[3] += 25718;
        result[4] += 0;
        result[5] += 0;
        result[6] += 64295;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 60663;
        result[3] += 0;
        result[4] += 42828346;
        result[5] += 60663;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 6710886;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29527900;
        result[4] += 6710886;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 27514634;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1342177;
        result[4] += 14092861;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 41716069;
        result[1] += 23837;
        result[2] += 34266;
        result[3] += 1163580;
        result[4] += 1489;
        result[5] += 1489;
        result[6] += 8939;
      } else {
        result[0] += 4739390;
        result[1] += 168661;
        result[2] += 421653;
        result[3] += 23165668;
        result[4] += 14445864;
        result[5] += 8433;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7368983;
        result[1] += 0;
        result[2] += 250568;
        result[3] += 35193447;
        result[4] += 113894;
        result[5] += 22778;
        result[6] += 0;
      } else {
        result[0] += 42668844;
        result[1] += 0;
        result[2] += 187218;
        result[3] += 85099;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8509;
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
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7326967;
        result[1] += 220029;
        result[2] += 110014;
        result[3] += 35281660;
        result[4] += 0;
        result[5] += 11001;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 26768633;
        result[1] += 133177;
        result[2] += 66588;
        result[3] += 15981273;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42680230;
        result[1] += 17033;
        result[2] += 94459;
        result[3] += 148657;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9291;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 19787778;
        result[1] += 0;
        result[2] += 281176;
        result[3] += 1300440;
        result[4] += 21580277;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 787180;
        result[1] += 0;
        result[2] += 207152;
        result[3] += 41775807;
        result[4] += 124291;
        result[5] += 55240;
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
        result[0] += 42674857;
        result[1] += 0;
        result[2] += 137407;
        result[3] += 78518;
        result[4] += 0;
        result[5] += 0;
        result[6] += 58888;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 42914591;
        result[1] += 0;
        result[2] += 35081;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x46219c00))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 31605088;
        result[1] += 60818;
        result[2] += 340580;
        result[3] += 9755207;
        result[4] += 1139323;
        result[5] += 12163;
        result[6] += 36490;
      } else {
        result[0] += 3942920;
        result[1] += 352046;
        result[2] += 112654;
        result[3] += 17588243;
        result[4] += 20953807;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 14132;
        result[2] += 423984;
        result[3] += 35784327;
        result[4] += 6698961;
        result[5] += 28265;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 29376832;
        result[4] += 13572840;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
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
        result[1] += 324148;
        result[2] += 277841;
        result[3] += 27876768;
        result[4] += 14424607;
        result[5] += 46306;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 7500507;
        result[1] += 14259;
        result[2] += 142595;
        result[3] += 26594004;
        result[4] += 8641268;
        result[5] += 57038;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 68995;
        result[2] += 0;
        result[3] += 1966370;
        result[4] += 40914306;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42910428;
        result[1] += 0;
        result[2] += 39244;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        result[0] += 30920192;
        result[1] += 42712;
        result[2] += 333936;
        result[3] += 11621767;
        result[4] += 0;
        result[5] += 3882;
        result[6] += 27180;
      } else {
        result[0] += 7433597;
        result[1] += 750868;
        result[2] += 0;
        result[3] += 34765207;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41840000))) ) ) {
        result[0] += 17179869;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 25769803;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42932019;
        result[5] += 17652;
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
        result[1] += 160409;
        result[2] += 334186;
        result[3] += 42401606;
        result[4] += 0;
        result[5] += 53469;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42738011;
        result[1] += 4409;
        result[2] += 26457;
        result[3] += 176384;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4409;
      } else {
        result[0] += 23590991;
        result[1] += 124132;
        result[2] += 407862;
        result[3] += 18797131;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29555;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 42651443;
        result[1] += 0;
        result[2] += 100939;
        result[3] += 174349;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22940;
      } else {
        result[0] += 40865975;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2083697;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42820694;
        result[1] += 0;
        result[2] += 128977;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42937281;
        result[1] += 0;
        result[2] += 12391;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 864758;
        result[1] += 298192;
        result[2] += 556626;
        result[3] += 34858713;
        result[4] += 6291863;
        result[5] += 79518;
        result[6] += 0;
      } else {
        result[0] += 31988807;
        result[1] += 7980;
        result[2] += 159604;
        result[3] += 10757368;
        result[4] += 0;
        result[5] += 0;
        result[6] += 35911;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 224475;
        result[1] += 972727;
        result[2] += 0;
        result[3] += 24168544;
        result[4] += 17583925;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1065545;
        result[4] += 41884127;
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
        result[0] += 42734239;
        result[1] += 0;
        result[2] += 215433;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42931821;
        result[1] += 0;
        result[2] += 17851;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 29623696;
        result[1] += 66161;
        result[2] += 159889;
        result[3] += 13055818;
        result[4] += 22053;
        result[5] += 11026;
        result[6] += 11026;
      } else {
        result[0] += 15849676;
        result[1] += 0;
        result[2] += 462617;
        result[3] += 20361872;
        result[4] += 6228574;
        result[5] += 20113;
        result[6] += 26818;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 54297;
        result[1] += 977362;
        result[2] += 0;
        result[3] += 3800856;
        result[4] += 38117156;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5114414;
        result[1] += 114076;
        result[2] += 114076;
        result[3] += 22492015;
        result[4] += 15115090;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 14850967;
        result[1] += 84380;
        result[2] += 1434468;
        result[3] += 25820432;
        result[4] += 675043;
        result[5] += 84380;
        result[6] += 0;
      } else {
        result[0] += 3449772;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24838365;
        result[4] += 14661534;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 41778814;
        result[1] += 24806;
        result[2] += 84341;
        result[3] += 1061710;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 37281141;
        result[1] += 0;
        result[2] += 46349;
        result[3] += 5603642;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18539;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        result[0] += 10490861;
        result[1] += 108376;
        result[2] += 216753;
        result[3] += 32079493;
        result[4] += 32512;
        result[5] += 21675;
        result[6] += 0;
      } else {
        result[0] += 330382;
        result[1] += 1982292;
        result[2] += 0;
        result[3] += 330382;
        result[4] += 40306616;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3660483;
        result[1] += 0;
        result[2] += 915120;
        result[3] += 6832902;
        result[4] += 31500494;
        result[5] += 40672;
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
        result[1] += 0;
        result[2] += 0;
        result[3] += 40009815;
        result[4] += 2864152;
        result[5] += 75704;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 37625333;
        result[1] += 0;
        result[2] += 3549559;
        result[3] += 0;
        result[4] += 1774779;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 256525;
        result[2] += 366464;
        result[3] += 0;
        result[4] += 42290036;
        result[5] += 36646;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42916761;
        result[1] += 0;
        result[2] += 32911;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29085217;
        result[1] += 0;
        result[2] += 0;
        result[3] += 13864455;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 23277024;
        result[1] += 118760;
        result[2] += 332528;
        result[3] += 19197607;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23752;
      } else {
        result[0] += 42310709;
        result[1] += 0;
        result[2] += 139094;
        result[3] += 469442;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30426;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42640000))) ) ) {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42932256;
        result[5] += 17416;
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
        result[1] += 218921;
        result[2] += 314699;
        result[3] += 42388686;
        result[4] += 0;
        result[5] += 27365;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 42727745;
        result[1] += 2219;
        result[2] += 31069;
        result[3] += 184200;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4438;
      } else {
        result[0] += 23599352;
        result[1] += 126322;
        result[2] += 373225;
        result[3] += 18822062;
        result[4] += 0;
        result[5] += 5741;
        result[6] += 22967;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 42850867;
        result[1] += 0;
        result[2] += 92630;
        result[3] += 6175;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41491149;
        result[1] += 0;
        result[2] += 255881;
        result[3] += 1125877;
        result[4] += 0;
        result[5] += 0;
        result[6] += 76764;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 266166;
        result[2] += 0;
        result[3] += 31044749;
        result[4] += 11614559;
        result[5] += 24196;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 39903;
        result[2] += 93108;
        result[3] += 25298940;
        result[4] += 17477816;
        result[5] += 39903;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 42773408;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 176264;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 735897;
        result[3] += 0;
        result[4] += 42213775;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42912185;
        result[1] += 0;
        result[2] += 30872;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6615;
      } else {
        result[0] += 22365908;
        result[1] += 148512;
        result[2] += 279202;
        result[3] += 20144168;
        result[4] += 0;
        result[5] += 11880;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 42825952;
        result[1] += 0;
        result[2] += 111348;
        result[3] += 12372;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41329630;
        result[1] += 0;
        result[2] += 222601;
        result[3] += 1310873;
        result[4] += 0;
        result[5] += 0;
        result[6] += 86567;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        result[0] += 32212254;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10737418;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42921809;
        result[1] += 0;
        result[2] += 27863;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 39154314;
        result[1] += 83529;
        result[2] += 99190;
        result[3] += 3565652;
        result[4] += 0;
        result[5] += 5220;
        result[6] += 41764;
      } else {
        result[0] += 4548625;
        result[1] += 195723;
        result[2] += 305329;
        result[3] += 23580826;
        result[4] += 14311338;
        result[5] += 7828;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 43990;
        result[2] += 146635;
        result[3] += 42759046;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 727960;
        result[3] += 0;
        result[4] += 41758464;
        result[5] += 463247;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 6498837;
        result[1] += 248484;
        result[2] += 344056;
        result[3] += 24944069;
        result[4] += 10875996;
        result[5] += 38228;
        result[6] += 0;
      } else {
        result[0] += 2812180;
        result[1] += 0;
        result[2] += 0;
        result[3] += 19685266;
        result[4] += 20452225;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 42774349;
        result[1] += 0;
        result[2] += 50751;
        result[3] += 119958;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4613;
      } else {
        result[0] += 24245543;
        result[1] += 0;
        result[2] += 356552;
        result[3] += 18213870;
        result[4] += 0;
        result[5] += 29712;
        result[6] += 103994;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 6253722;
        result[1] += 33502;
        result[2] += 122840;
        result[3] += 21653514;
        result[4] += 14863758;
        result[5] += 22334;
        result[6] += 0;
      } else {
        result[0] += 42452998;
        result[1] += 50822;
        result[2] += 120126;
        result[3] += 311865;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13860;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19780737;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23168935;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 35632212;
        result[1] += 0;
        result[2] += 132243;
        result[3] += 58774;
        result[4] += 7111748;
        result[5] += 14693;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 42354982;
        result[1] += 23290;
        result[2] += 40370;
        result[3] += 524817;
        result[4] += 1552;
        result[5] += 0;
        result[6] += 4658;
      } else {
        result[0] += 28976962;
        result[1] += 0;
        result[2] += 0;
        result[3] += 13972710;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7373704;
        result[1] += 369300;
        result[2] += 221580;
        result[3] += 31722931;
        result[4] += 3249846;
        result[5] += 12310;
        result[6] += 0;
      } else {
        result[0] += 867920;
        result[1] += 0;
        result[2] += 719134;
        result[3] += 2504570;
        result[4] += 38858047;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7279001;
        result[1] += 0;
        result[2] += 284985;
        result[3] += 35207569;
        result[4] += 166241;
        result[5] += 11874;
        result[6] += 0;
      } else {
        result[0] += 42690888;
        result[1] += 0;
        result[2] += 138018;
        result[3] += 43130;
        result[4] += 0;
        result[5] += 0;
        result[6] += 77635;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
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
        result[2] += 224867;
        result[3] += 0;
        result[4] += 42724805;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 22062428;
        result[1] += 0;
        result[2] += 620852;
        result[3] += 20266391;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6092152;
        result[1] += 761519;
        result[2] += 365529;
        result[3] += 35730472;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 171913;
        result[1] += 28652;
        result[2] += 171913;
        result[3] += 41574366;
        result[4] += 945523;
        result[5] += 57304;
        result[6] += 0;
      } else {
        result[0] += 9717804;
        result[1] += 0;
        result[2] += 402810;
        result[3] += 0;
        result[4] += 32829058;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 40218630;
        result[1] += 35856;
        result[2] += 85656;
        result[3] += 2583633;
        result[4] += 0;
        result[5] += 3984;
        result[6] += 21912;
      } else {
        result[0] += 37503639;
        result[1] += 0;
        result[2] += 44397;
        result[3] += 5401636;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 21474836;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42884065;
        result[1] += 0;
        result[2] += 65607;
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
        result[1] += 426117;
        result[2] += 308567;
        result[3] += 40980717;
        result[4] += 1219576;
        result[5] += 14693;
        result[6] += 0;
      } else {
        result[0] += 42754868;
        result[1] += 9276;
        result[2] += 157698;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27829;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 15388650;
        result[1] += 136073;
        result[2] += 606144;
        result[3] += 19062628;
        result[4] += 7657214;
        result[5] += 37110;
        result[6] += 61851;
      } else {
        result[0] += 15129758;
        result[1] += 49213;
        result[2] += 217947;
        result[3] += 15516439;
        result[4] += 12022252;
        result[5] += 7030;
        result[6] += 7030;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 23956949;
        result[1] += 0;
        result[2] += 480099;
        result[3] += 15824069;
        result[4] += 2688555;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38154923;
        result[1] += 13376;
        result[2] += 72960;
        result[3] += 4667068;
        result[4] += 14592;
        result[5] += 7296;
        result[6] += 19456;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 541032;
        result[2] += 83235;
        result[3] += 42325404;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41491004;
        result[1] += 0;
        result[2] += 1458668;
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
        result[0] += 218018;
        result[1] += 3270279;
        result[2] += 0;
        result[3] += 39461374;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 67637;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42814398;
        result[5] += 67637;
        result[6] += 0;
      } else {
        result[0] += 7890153;
        result[1] += 399204;
        result[2] += 422686;
        result[3] += 34237628;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 36465324;
        result[1] += 0;
        result[2] += 97435;
        result[3] += 6377168;
        result[4] += 0;
        result[5] += 9743;
        result[6] += 0;
      } else {
        result[0] += 42601359;
        result[1] += 0;
        result[2] += 107173;
        result[3] += 200949;
        result[4] += 0;
        result[5] += 0;
        result[6] += 40189;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 39423242;
        result[1] += 17328;
        result[2] += 69315;
        result[3] += 3429388;
        result[4] += 0;
        result[5] += 3465;
        result[6] += 6931;
      } else {
        result[0] += 1248537;
        result[1] += 0;
        result[2] += 249707;
        result[3] += 0;
        result[4] += 41451428;
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
        result[0] += 10086794;
        result[1] += 238136;
        result[2] += 765439;
        result[3] += 31791262;
        result[4] += 0;
        result[5] += 68039;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 15077732;
        result[1] += 129561;
        result[2] += 291513;
        result[3] += 27386084;
        result[4] += 64780;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 81808;
        result[1] += 0;
        result[2] += 409044;
        result[3] += 8099081;
        result[4] += 34359738;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 151231;
        result[1] += 1966006;
        result[2] += 0;
        result[3] += 8468949;
        result[4] += 32363485;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 131545;
        result[2] += 0;
        result[3] += 2433595;
        result[4] += 40384531;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5088602;
        result[1] += 0;
        result[2] += 210079;
        result[3] += 34336396;
        result[4] += 3221225;
        result[5] += 93368;
        result[6] += 0;
      } else {
        result[0] += 42659640;
        result[1] += 21713;
        result[2] += 63590;
        result[3] += 198525;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6203;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 19125459;
        result[1] += 0;
        result[2] += 0;
        result[3] += 23824213;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34885871;
        result[1] += 0;
        result[2] += 504658;
        result[3] += 53687;
        result[4] += 7387343;
        result[5] += 64424;
        result[6] += 53687;
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
        result[0] += 41657564;
        result[1] += 0;
        result[2] += 1188739;
        result[3] += 103368;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2744903;
        result[1] += 484394;
        result[2] += 20183;
        result[3] += 39700191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 42928316;
        result[1] += 0;
        result[2] += 21356;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 141904;
        result[2] += 0;
        result[3] += 9507581;
        result[4] += 33158282;
        result[5] += 141904;
        result[6] += 0;
      } else {
        result[0] += 26028785;
        result[1] += 54407;
        result[2] += 311939;
        result[3] += 15992323;
        result[4] += 504180;
        result[5] += 25390;
        result[6] += 32644;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 14140678;
        result[1] += 105527;
        result[2] += 0;
        result[3] += 26417038;
        result[4] += 2286428;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6945656;
        result[1] += 0;
        result[2] += 212622;
        result[3] += 6024294;
        result[4] += 29767100;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 11513426;
        result[1] += 205879;
        result[2] += 443433;
        result[3] += 20714665;
        result[4] += 10072268;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 123064;
        result[2] += 0;
        result[3] += 2338234;
        result[4] += 40488373;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 114532;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42777874;
        result[5] += 57266;
        result[6] += 0;
      } else {
        result[0] += 5598702;
        result[1] += 0;
        result[2] += 525699;
        result[3] += 36720130;
        result[4] += 0;
        result[5] += 105139;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42936514;
        result[1] += 0;
        result[2] += 11513;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1644;
      } else {
        result[0] += 29484750;
        result[1] += 43974;
        result[2] += 202281;
        result[3] += 13179089;
        result[4] += 0;
        result[5] += 4397;
        result[6] += 35179;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 41442048;
        result[1] += 0;
        result[2] += 8816;
        result[3] += 1485583;
        result[4] += 0;
        result[5] += 4408;
        result[6] += 8816;
      } else {
        result[0] += 41974259;
        result[1] += 35959;
        result[2] += 42702;
        result[3] += 887761;
        result[4] += 2247;
        result[5] += 0;
        result[6] += 6742;
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
        result[0] += 7203506;
        result[1] += 246695;
        result[2] += 592069;
        result[3] += 34870397;
        result[4] += 0;
        result[5] += 37004;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42681854;
        result[4] += 225531;
        result[5] += 42287;
        result[6] += 0;
      } else {
        result[0] += 19450698;
        result[1] += 0;
        result[2] += 759051;
        result[3] += 0;
        result[4] += 22739922;
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
        result[0] += 42255069;
        result[1] += 0;
        result[2] += 385891;
        result[3] += 154356;
        result[4] += 0;
        result[5] += 0;
        result[6] += 154356;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 106839;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42629153;
        result[5] += 213679;
        result[6] += 0;
      } else {
        result[0] += 8362282;
        result[1] += 11269;
        result[2] += 383177;
        result[3] += 34159133;
        result[4] += 0;
        result[5] += 33809;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31305539;
        result[4] += 11644133;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 378078;
        result[2] += 0;
        result[3] += 378078;
        result[4] += 42193516;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42923440;
        result[1] += 0;
        result[2] += 24046;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2186;
      } else {
        result[0] += 30379036;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12570635;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 42912318;
        result[1] += 0;
        result[2] += 37354;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29572905;
        result[1] += 80009;
        result[2] += 312416;
        result[3] += 12934812;
        result[4] += 0;
        result[5] += 3809;
        result[6] += 45719;
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
