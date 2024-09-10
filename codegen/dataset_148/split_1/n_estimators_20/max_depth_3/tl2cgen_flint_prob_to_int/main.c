
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
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 128399;
        result[2] += 0;
        result[3] += 200303407;
        result[4] += 14316557;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 151299984;
        result[1] += 14641933;
        result[2] += 45552683;
        result[3] += 0;
        result[4] += 0;
        result[5] += 3253763;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 214550814;
        result[1] += 0;
        result[2] += 164625;
        result[3] += 32925;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 187589012;
        result[1] += 0;
        result[2] += 0;
        result[3] += 27159352;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 175141733;
        result[1] += 118267;
        result[2] += 893580;
        result[3] += 38476515;
        result[4] += 0;
        result[5] += 0;
        result[6] += 118267;
      } else {
        result[0] += 48292694;
        result[1] += 1712506;
        result[2] += 0;
        result[3] += 164743163;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 214617639;
        result[1] += 0;
        result[2] += 122554;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8170;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 205065620;
        result[1] += 446895;
        result[2] += 655447;
        result[3] += 8371849;
        result[4] += 0;
        result[5] += 0;
        result[6] += 208551;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1738008;
        result[3] += 205988800;
        result[4] += 7021555;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 85917189;
        result[1] += 0;
        result[2] += 1873583;
        result[3] += 76816926;
        result[4] += 49783792;
        result[5] += 356873;
        result[6] += 0;
      } else {
        result[0] += 13270527;
        result[1] += 468371;
        result[2] += 2341857;
        result[3] += 180244992;
        result[4] += 17876181;
        result[5] += 546433;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5368709;
        result[1] += 9395240;
        result[2] += 0;
        result[3] += 199984414;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 98945960;
        result[1] += 0;
        result[2] += 0;
        result[3] += 26175454;
        result[4] += 89352861;
        result[5] += 274088;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 148975;
        result[2] += 1191805;
        result[3] += 207299583;
        result[4] += 5437610;
        result[5] += 670390;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46133a00))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 214748364;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1232254;
        result[2] += 0;
        result[3] += 18483818;
        result[4] += 195032291;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 183272245;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31476119;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1491308;
        result[1] += 5219578;
        result[2] += 0;
        result[3] += 208037478;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 213856631;
        result[1] += 10615;
        result[2] += 169853;
        result[3] += 700647;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10615;
      } else {
        result[0] += 173947501;
        result[1] += 132642;
        result[2] += 1127462;
        result[3] += 39434644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 106114;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43750000))) ) ) {
        result[0] += 214748364;
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
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 213853165;
        result[1] += 0;
        result[2] += 696266;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 198933;
      } else {
        result[0] += 214703445;
        result[1] += 0;
        result[2] += 44918;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 151071117;
        result[1] += 263518;
        result[2] += 1882271;
        result[3] += 61136180;
        result[4] += 112936;
        result[5] += 94113;
        result[6] += 188227;
      } else {
        result[0] += 0;
        result[1] += 287250;
        result[2] += 1263901;
        result[3] += 173671564;
        result[4] += 39468198;
        result[5] += 57450;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 546433;
        result[1] += 6010768;
        result[2] += 0;
        result[3] += 208191162;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 195072329;
        result[1] += 0;
        result[2] += 580258;
        result[3] += 16563740;
        result[4] += 2268282;
        result[5] += 105501;
        result[6] += 158252;
      } else {
        result[0] += 173551485;
        result[1] += 397797;
        result[2] += 273485;
        result[3] += 37753446;
        result[4] += 2685131;
        result[5] += 49724;
        result[6] += 37293;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 214688362;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 60002;
        result[6] += 0;
      } else {
        result[0] += 20205812;
        result[1] += 0;
        result[2] += 2587329;
        result[3] += 5297865;
        result[4] += 186657356;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 53775288;
        result[1] += 0;
        result[2] += 604783;
        result[3] += 160368293;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 129619730;
        result[1] += 0;
        result[2] += 5721952;
        result[3] += 116774;
        result[4] += 77538289;
        result[5] += 583872;
        result[6] += 1167745;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 211292974;
        result[1] += 41135;
        result[2] += 113122;
        result[3] += 3198292;
        result[4] += 92555;
        result[5] += 0;
        result[6] += 10283;
      } else {
        result[0] += 6626176;
        result[1] += 0;
        result[2] += 1807139;
        result[3] += 0;
        result[4] += 206315048;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 168360618;
        result[1] += 223081;
        result[2] += 734855;
        result[3] += 45298585;
        result[4] += 0;
        result[5] += 26244;
        result[6] += 104979;
      } else {
        result[0] += 34767959;
        result[1] += 0;
        result[2] += 3459498;
        result[3] += 151785493;
        result[4] += 24130001;
        result[5] += 605412;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 29179329;
        result[1] += 2299848;
        result[2] += 1724886;
        result[3] += 181544300;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214748364;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214560704;
        result[1] += 0;
        result[2] += 171341;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16318;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 757935;
        result[2] += 0;
        result[3] += 45476124;
        result[4] += 168261659;
        result[5] += 252645;
        result[6] += 0;
      } else {
        result[0] += 126514903;
        result[1] += 226613;
        result[2] += 1537732;
        result[3] += 82001599;
        result[4] += 4289463;
        result[5] += 97119;
        result[6] += 80933;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 44595457;
        result[1] += 0;
        result[2] += 0;
        result[3] += 125557449;
        result[4] += 44595457;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20444179;
        result[1] += 506880;
        result[2] += 1351681;
        result[3] += 113372268;
        result[4] += 79073355;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 1677721;
        result[1] += 8388607;
        result[2] += 0;
        result[3] += 52009369;
        result[4] += 152672665;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 887389;
        result[2] += 0;
        result[3] += 12423459;
        result[4] += 201437515;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214555505;
        result[1] += 0;
        result[2] += 192858;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214748364;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214482257;
        result[5] += 266107;
        result[6] += 0;
      } else {
        result[0] += 4290880;
        result[1] += 1225965;
        result[2] += 2451931;
        result[3] += 206422012;
        result[4] += 0;
        result[5] += 357573;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 127494010;
        result[1] += 0;
        result[2] += 787000;
        result[3] += 86364702;
        result[4] += 0;
        result[5] += 0;
        result[6] += 102652;
      } else {
        result[0] += 208035924;
        result[1] += 0;
        result[2] += 1939149;
        result[3] += 4624125;
        result[4] += 0;
        result[5] += 0;
        result[6] += 149165;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 211966650;
        result[1] += 0;
        result[2] += 2781714;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214698898;
        result[1] += 0;
        result[2] += 49465;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 130308723;
        result[1] += 257594;
        result[2] += 1064725;
        result[3] += 71319468;
        result[4] += 11608947;
        result[5] += 85864;
        result[6] += 103037;
      } else {
        result[0] += 703631;
        result[1] += 0;
        result[2] += 4643968;
        result[3] += 170841752;
        result[4] += 38418285;
        result[5] += 140726;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 43353685;
        result[1] += 310779;
        result[2] += 2020064;
        result[3] += 169063835;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 259985;
        result[1] += 1559915;
        result[2] += 0;
        result[3] += 20278901;
        result[4] += 192649562;
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
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214475023;
        result[1] += 0;
        result[2] += 234292;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39048;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1350618;
        result[1] += 540247;
        result[2] += 1890866;
        result[3] += 147487556;
        result[4] += 63028870;
        result[5] += 450206;
        result[6] += 0;
      } else {
        result[0] += 2678668;
        result[1] += 1212982;
        result[2] += 1566768;
        result[3] += 118366832;
        result[4] += 90822031;
        result[5] += 101081;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 126616202;
        result[1] += 0;
        result[2] += 843208;
        result[3] += 87221496;
        result[4] += 0;
        result[5] += 0;
        result[6] += 67456;
      } else {
        result[0] += 208015978;
        result[1] += 0;
        result[2] += 1670811;
        result[3] += 4766725;
        result[4] += 0;
        result[5] += 0;
        result[6] += 294849;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 22868201;
        result[1] += 319091;
        result[2] += 0;
        result[3] += 138485572;
        result[4] += 53075499;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 31605150;
        result[1] += 59520;
        result[2] += 535680;
        result[3] += 110171625;
        result[4] += 72257348;
        result[5] += 119040;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 214023098;
        result[1] += 123449;
        result[2] += 501514;
        result[3] += 92587;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7715;
      } else {
        result[0] += 70976154;
        result[1] += 3184827;
        result[2] += 0;
        result[3] += 140587382;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 34807011;
        result[1] += 0;
        result[2] += 1834966;
        result[3] += 177704988;
        result[4] += 286713;
        result[5] += 114685;
        result[6] += 0;
      } else {
        result[0] += 213374707;
        result[1] += 0;
        result[2] += 790893;
        result[3] += 249755;
        result[4] += 0;
        result[5] += 0;
        result[6] += 333007;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 418286;
        result[1] += 0;
        result[2] += 1171202;
        result[3] += 192077228;
        result[4] += 20663360;
        result[5] += 418286;
        result[6] += 0;
      } else {
        result[0] += 76318889;
        result[1] += 0;
        result[2] += 3044636;
        result[3] += 0;
        result[4] += 135384838;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 189062935;
        result[1] += 121693;
        result[2] += 527338;
        result[3] += 24987720;
        result[4] += 0;
        result[5] += 0;
        result[6] += 48677;
      } else {
        result[0] += 211874024;
        result[1] += 0;
        result[2] += 641039;
        result[3] += 2005834;
        result[4] += 0;
        result[5] += 0;
        result[6] += 227465;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 129109846;
        result[1] += 0;
        result[2] += 3042993;
        result[3] += 82595524;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 402527;
        result[1] += 3018955;
        result[2] += 0;
        result[3] += 211326881;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 122713351;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 92035013;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 2587329;
        result[2] += 0;
        result[3] += 0;
        result[4] += 212161035;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 86627;
        result[2] += 1256091;
        result[3] += 137520382;
        result[4] += 75582068;
        result[5] += 303194;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 213970162;
        result[1] += 0;
        result[2] += 70745;
        result[3] += 707456;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 165931250;
        result[1] += 0;
        result[2] += 1173488;
        result[3] += 47475985;
        result[4] += 0;
        result[5] += 0;
        result[6] += 167641;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 214541992;
        result[1] += 0;
        result[2] += 194232;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12139;
      } else {
        result[0] += 147798867;
        result[1] += 808493;
        result[2] += 1554795;
        result[3] += 64461824;
        result[4] += 0;
        result[5] += 0;
        result[6] += 124383;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
        result[0] += 214748364;
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
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 63648;
        result[2] += 0;
        result[3] += 199854731;
        result[4] += 14639040;
        result[5] += 190944;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1464609;
        result[2] += 2746142;
        result[3] += 0;
        result[4] += 210446074;
        result[5] += 91538;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 214618220;
        result[1] += 0;
        result[2] += 130143;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 150622116;
        result[1] += 1491308;
        result[2] += 0;
        result[3] += 62634939;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 118541097;
        result[1] += 495013;
        result[2] += 1688868;
        result[3] += 93994267;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29118;
      } else {
        result[0] += 211891052;
        result[1] += 0;
        result[2] += 809946;
        result[3] += 1844878;
        result[4] += 0;
        result[5] += 0;
        result[6] += 202486;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 1057352;
        result[1] += 1691764;
        result[2] += 1691764;
        result[3] += 210307482;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 212086194;
        result[1] += 0;
        result[2] += 2662169;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 25102018;
        result[1] += 0;
        result[2] += 1080948;
        result[3] += 170909912;
        result[4] += 17535381;
        result[5] += 120105;
        result[6] += 0;
      } else {
        result[0] += 213236871;
        result[1] += 108517;
        result[2] += 333303;
        result[3] += 1023164;
        result[4] += 0;
        result[5] += 0;
        result[6] += 46507;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 31151304;
        result[1] += 0;
        result[2] += 802610;
        result[3] += 151442493;
        result[4] += 31101141;
        result[5] += 250815;
        result[6] += 0;
      } else {
        result[0] += 213018564;
        result[1] += 0;
        result[2] += 1054756;
        result[3] += 253141;
        result[4] += 0;
        result[5] += 0;
        result[6] += 421902;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 209867720;
        result[1] += 0;
        result[2] += 4880644;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214673937;
        result[1] += 0;
        result[2] += 66157;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8269;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 214748364;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214571252;
        result[5] += 177112;
        result[6] += 0;
      } else {
        result[0] += 4486967;
        result[1] += 1669569;
        result[2] += 2504354;
        result[3] += 205930951;
        result[4] += 0;
        result[5] += 156522;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 213987488;
        result[1] += 0;
        result[2] += 615947;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 144928;
      } else {
        result[0] += 90456706;
        result[1] += 0;
        result[2] += 1104814;
        result[3] += 123002707;
        result[4] += 0;
        result[5] += 0;
        result[6] += 184135;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 49219076;
        result[1] += 992892;
        result[2] += 0;
        result[3] += 164536395;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 118280960;
        result[1] += 0;
        result[2] += 3929149;
        result[3] += 89422032;
        result[4] += 3116222;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 648786;
        result[1] += 7785439;
        result[2] += 0;
        result[3] += 206314138;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 154000442;
        result[1] += 0;
        result[2] += 1387391;
        result[3] += 56883046;
        result[4] += 2229736;
        result[5] += 148649;
        result[6] += 99099;
      } else {
        result[0] += 211618809;
        result[1] += 139091;
        result[2] += 165170;
        result[3] += 2729667;
        result[4] += 43466;
        result[5] += 43466;
        result[6] += 8693;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 77800474;
        result[1] += 0;
        result[2] += 1759030;
        result[3] += 109976082;
        result[4] += 25139484;
        result[5] += 36646;
        result[6] += 36646;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 211648006;
        result[1] += 93243;
        result[2] += 271961;
        result[3] += 2711842;
        result[4] += 7770;
        result[5] += 7770;
        result[6] += 7770;
      } else {
        result[0] += 71007496;
        result[1] += 0;
        result[2] += 1787515;
        result[3] += 125310971;
        result[4] += 16210912;
        result[5] += 431469;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 138922460;
        result[1] += 0;
        result[2] += 1075367;
        result[3] += 74325391;
        result[4] += 175059;
        result[5] += 75025;
        result[6] += 175059;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 34097450;
        result[1] += 1147510;
        result[2] += 2295020;
        result[3] += 177208383;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1182101;
        result[1] += 3546303;
        result[2] += 0;
        result[3] += 46890009;
        result[4] += 163129950;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9720378;
        result[4] += 205027986;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44c4d000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 214582480;
        result[1] += 0;
        result[2] += 165883;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214748364;
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
        result[0] += 4505210;
        result[1] += 985514;
        result[2] += 3331978;
        result[3] += 173450602;
        result[4] += 32334270;
        result[5] += 140787;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 939132;
        result[2] += 0;
        result[3] += 29947901;
        result[4] += 183861330;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 210013796;
        result[1] += 0;
        result[2] += 1428305;
        result[3] += 3041761;
        result[4] += 0;
        result[5] += 0;
        result[6] += 264501;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 214748364;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214506258;
        result[5] += 242106;
        result[6] += 0;
      } else {
        result[0] += 399903;
        result[1] += 1066410;
        result[2] += 533205;
        result[3] += 212215640;
        result[4] += 0;
        result[5] += 533205;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 213817374;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 930990;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3892719;
        result[3] += 0;
        result[4] += 210855645;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41980000))) ) ) {
        result[0] += 48676296;
        result[1] += 0;
        result[2] += 0;
        result[3] += 166072068;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 191275260;
        result[1] += 0;
        result[2] += 715537;
        result[3] += 22652854;
        result[4] += 0;
        result[5] += 0;
        result[6] += 104712;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 212095426;
        result[1] += 337435;
        result[2] += 488699;
        result[3] += 1780261;
        result[4] += 0;
        result[5] += 0;
        result[6] += 46542;
      } else {
        result[0] += 147938527;
        result[1] += 0;
        result[2] += 378623;
        result[3] += 66431213;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
