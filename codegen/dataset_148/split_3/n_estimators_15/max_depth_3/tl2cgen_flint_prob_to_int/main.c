
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 168529;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286162623;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 106652410;
        result[1] += 1528458;
        result[2] += 3481487;
        result[3] += 174668796;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 37339955;
        result[1] += 348971;
        result[2] += 1046914;
        result[3] += 240615880;
        result[4] += 6455973;
        result[5] += 523457;
        result[6] += 0;
      } else {
        result[0] += 284618859;
        result[1] += 84038;
        result[2] += 514738;
        result[3] += 1082001;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31514;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 658421;
        result[1] += 0;
        result[2] += 2715989;
        result[3] += 231188332;
        result[4] += 51768409;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 244407277;
        result[1] += 0;
        result[2] += 891997;
        result[3] += 39136384;
        result[4] += 668998;
        result[5] += 891997;
        result[6] += 334499;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 267622139;
        result[1] += 394335;
        result[2] += 503872;
        result[3] += 17613637;
        result[4] += 0;
        result[5] += 65722;
        result[6] += 131445;
      } else {
        result[0] += 286184165;
        result[1] += 0;
        result[2] += 110240;
        result[3] += 0;
        result[4] += 18373;
        result[5] += 18373;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 43388297;
        result[1] += 1817724;
        result[2] += 1659661;
        result[3] += 216625363;
        result[4] += 22603011;
        result[5] += 237094;
        result[6] += 0;
      } else {
        result[0] += 9370182;
        result[1] += 0;
        result[2] += 4865287;
        result[3] += 16037427;
        result[4] += 256058255;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 246010820;
        result[1] += 0;
        result[2] += 1476519;
        result[3] += 37480872;
        result[4] += 454313;
        result[5] += 340735;
        result[6] += 567892;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3185882;
        result[3] += 228029510;
        result[4] += 55036113;
        result[5] += 79647;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 3911627;
        result[2] += 0;
        result[3] += 0;
        result[4] += 282419525;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 268288;
        result[1] += 268288;
        result[2] += 737794;
        result[3] += 213021256;
        result[4] += 71498948;
        result[5] += 536577;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 285157664;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1173488;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4700959;
        result[3] += 0;
        result[4] += 281630193;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 283434739;
        result[1] += 0;
        result[2] += 2206791;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 689622;
      } else {
        result[0] += 286245790;
        result[1] += 0;
        result[2] += 85362;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 260190167;
        result[1] += 725222;
        result[2] += 2340491;
        result[3] += 22679695;
        result[4] += 0;
        result[5] += 98894;
        result[6] += 296682;
      } else {
        result[0] += 0;
        result[1] += 702037;
        result[2] += 1303784;
        result[3] += 284325330;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 53762920;
        result[1] += 75829;
        result[2] += 2426535;
        result[3] += 194274474;
        result[4] += 35336418;
        result[5] += 454975;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 2017708;
        result[2] += 0;
        result[3] += 29531912;
        result[4] += 254781532;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1137363;
        result[3] += 119138781;
        result[4] += 166055008;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 285958074;
        result[1] += 0;
        result[2] += 345443;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27635;
      } else {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 269078890;
        result[1] += 1034195;
        result[2] += 2726515;
        result[3] += 13397533;
        result[4] += 0;
        result[5] += 0;
        result[6] += 94017;
      } else {
        result[0] += 117977535;
        result[1] += 0;
        result[2] += 1300027;
        result[3] += 166999422;
        result[4] += 0;
        result[5] += 0;
        result[6] += 54167;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 277274449;
        result[1] += 0;
        result[2] += 8708368;
        result[3] += 348334;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20398657;
        result[1] += 1049930;
        result[2] += 749950;
        result[3] += 263982624;
        result[4] += 149990;
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
        result[0] += 2002315;
        result[1] += 12013894;
        result[2] += 0;
        result[3] += 272314942;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 285806306;
        result[1] += 0;
        result[2] += 434356;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 90490;
      } else {
        result[0] += 286303504;
        result[1] += 0;
        result[2] += 27648;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 183743444;
        result[1] += 363694;
        result[2] += 1662601;
        result[3] += 92456230;
        result[4] += 8001269;
        result[5] += 51956;
        result[6] += 51956;
      } else {
        result[0] += 5832989;
        result[1] += 0;
        result[2] += 3431170;
        result[3] += 191287738;
        result[4] += 84921462;
        result[5] += 857792;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 70696747;
        result[1] += 1678814;
        result[2] += 0;
        result[3] += 213955591;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 146626321;
        result[1] += 0;
        result[2] += 7467924;
        result[3] += 127501149;
        result[4] += 4735756;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1599615;
        result[1] += 4798846;
        result[2] += 0;
        result[3] += 138633332;
        result[4] += 141299358;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8935156;
        result[4] += 277395996;
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
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286146107;
        result[1] += 0;
        result[2] += 163275;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21770;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 103717047;
        result[1] += 693295;
        result[2] += 1802569;
        result[3] += 154396967;
        result[4] += 25443954;
        result[5] += 242653;
        result[6] += 34664;
      } else {
        result[0] += 277696940;
        result[1] += 0;
        result[2] += 1254543;
        result[3] += 7084482;
        result[4] += 0;
        result[5] += 0;
        result[6] += 295186;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 285971440;
        result[1] += 0;
        result[2] += 269784;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 89928;
      } else {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 1314953;
        result[1] += 1643692;
        result[2] += 328738;
        result[3] += 66076419;
        result[4] += 216309872;
        result[5] += 657476;
        result[6] += 0;
      } else {
        result[0] += 166995912;
        result[1] += 323928;
        result[2] += 2569832;
        result[3] += 109876529;
        result[4] += 6262616;
        result[5] += 194357;
        result[6] += 107976;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 4723451;
        result[2] += 0;
        result[3] += 281607701;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 274644167;
        result[1] += 0;
        result[2] += 11686985;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 1915258;
        result[1] += 1915258;
        result[2] += 3670912;
        result[3] += 278829723;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 282388033;
        result[1] += 0;
        result[2] += 3943119;
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
        result[3] += 109447043;
        result[4] += 176884109;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 999061;
        result[1] += 1398686;
        result[2] += 0;
        result[3] += 13387430;
        result[4] += 270545974;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        result[0] += 286089838;
        result[1] += 0;
        result[2] += 230346;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10968;
      } else {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 229219452;
        result[1] += 547293;
        result[2] += 1577493;
        result[3] += 50415402;
        result[4] += 4056411;
        result[5] += 160968;
        result[6] += 354131;
      } else {
        result[0] += 0;
        result[1] += 526205;
        result[2] += 2555856;
        result[3] += 231004366;
        result[4] += 52094378;
        result[5] += 150344;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 281271431;
        result[1] += 40914;
        result[2] += 259123;
        result[3] += 4636941;
        result[4] += 109104;
        result[5] += 0;
        result[6] += 13638;
      } else {
        result[0] += 10090965;
        result[1] += 0;
        result[2] += 5465939;
        result[3] += 0;
        result[4] += 270774247;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 205484909;
        result[1] += 305528;
        result[2] += 814742;
        result[3] += 79233731;
        result[4] += 237633;
        result[5] += 67895;
        result[6] += 186711;
      } else {
        result[0] += 170638869;
        result[1] += 0;
        result[2] += 3914400;
        result[3] += 75098499;
        result[4] += 36679383;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 5063734;
        result[2] += 0;
        result[3] += 281267418;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 276926115;
        result[1] += 0;
        result[2] += 9405037;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42400000))) ) ) {
        result[0] += 286331153;
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
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 281208949;
        result[1] += 0;
        result[2] += 5122203;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23677160;
        result[1] += 2553419;
        result[2] += 2089161;
        result[3] += 258011411;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 285231057;
        result[1] += 0;
        result[2] += 222804;
        result[3] += 835515;
        result[4] += 27850;
        result[5] += 0;
        result[6] += 13925;
      } else {
        result[0] += 6224590;
        result[1] += 282935;
        result[2] += 5092846;
        result[3] += 81202609;
        result[4] += 193245234;
        result[5] += 282935;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 123868351;
        result[1] += 572052;
        result[2] += 1487335;
        result[3] += 158115205;
        result[4] += 1678019;
        result[5] += 495778;
        result[6] += 114410;
      } else {
        result[0] += 282246943;
        result[1] += 0;
        result[2] += 561189;
        result[3] += 3398311;
        result[4] += 0;
        result[5] += 0;
        result[6] += 124708;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 53964173;
        result[1] += 152873;
        result[2] += 0;
        result[3] += 231602614;
        result[4] += 305746;
        result[5] += 305746;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14297237;
        result[3] += 0;
        result[4] += 271647504;
        result[5] += 386411;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 2492244;
        result[2] += 0;
        result[3] += 54275537;
        result[4] += 229563371;
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 283932124;
        result[1] += 0;
        result[2] += 2257909;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 141119;
      } else {
        result[0] += 286195771;
        result[1] += 0;
        result[2] += 135381;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 205349126;
        result[1] += 516796;
        result[2] += 1524549;
        result[3] += 78604761;
        result[4] += 0;
        result[5] += 51679;
        result[6] += 284238;
      } else {
        result[0] += 71290613;
        result[1] += 3116529;
        result[2] += 5064360;
        result[3] += 206859649;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        result[0] += 276378465;
        result[1] += 0;
        result[2] += 8421504;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1531182;
      } else {
        result[0] += 286159078;
        result[1] += 0;
        result[2] += 172074;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 285965934;
        result[1] += 0;
        result[2] += 365218;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286276520;
        result[1] += 0;
        result[2] += 54632;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 59394534;
        result[1] += 1175516;
        result[2] += 2041687;
        result[3] += 128440681;
        result[4] += 95278732;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 226749645;
        result[1] += 160337;
        result[2] += 1763715;
        result[3] += 53456605;
        result[4] += 3912241;
        result[5] += 160337;
        result[6] += 128270;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 989623;
        result[2] += 329874;
        result[3] += 72572412;
        result[4] += 212439242;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3899641;
        result[3] += 281651583;
        result[4] += 779928;
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
        result[0] += 285766599;
        result[1] += 0;
        result[2] += 487568;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 76984;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 262132665;
        result[1] += 211340;
        result[2] += 915808;
        result[3] += 22683880;
        result[4] += 0;
        result[5] += 105670;
        result[6] += 281787;
      } else {
        result[0] += 31889962;
        result[1] += 1252633;
        result[2] += 2661846;
        result[3] += 156370421;
        result[4] += 93895323;
        result[5] += 260965;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 553832;
        result[2] += 0;
        result[3] += 284300435;
        result[4] += 1476885;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12608332;
        result[3] += 0;
        result[4] += 273722820;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 34450637;
        result[1] += 0;
        result[2] += 0;
        result[3] += 246153892;
        result[4] += 5726623;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 82512633;
        result[1] += 0;
        result[2] += 0;
        result[3] += 152709948;
        result[4] += 51108571;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 106351571;
        result[1] += 36814005;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8251263;
        result[1] += 0;
        result[2] += 4802974;
        result[3] += 0;
        result[4] += 272907455;
        result[5] += 369459;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 285585903;
        result[1] += 217364;
        result[2] += 403676;
        result[3] += 124208;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 283637563;
        result[1] += 0;
        result[2] += 261513;
        result[3] += 2432075;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 153988282;
        result[1] += 1215593;
        result[2] += 2470400;
        result[3] += 128539238;
        result[4] += 0;
        result[5] += 39212;
        result[6] += 78425;
      } else {
        result[0] += 282194892;
        result[1] += 0;
        result[2] += 719349;
        result[3] += 3326992;
        result[4] += 0;
        result[5] += 0;
        result[6] += 89918;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1023655;
        result[2] += 3070967;
        result[3] += 187621485;
        result[4] += 94468807;
        result[5] += 146236;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 285201641;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1129511;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 153159;
        result[2] += 918955;
        result[3] += 147339165;
        result[4] += 137690134;
        result[5] += 229738;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 285923184;
        result[1] += 62764;
        result[2] += 219675;
        result[3] += 125528;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 283753488;
        result[1] += 0;
        result[2] += 184118;
        result[3] += 2340939;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52605;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 253549370;
        result[1] += 620195;
        result[2] += 1616939;
        result[3] += 30168100;
        result[4] += 0;
        result[5] += 22149;
        result[6] += 354397;
      } else {
        result[0] += 143131070;
        result[1] += 0;
        result[2] += 552096;
        result[3] += 142647985;
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
