
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 41397275;
        result[1] += 0;
        result[2] += 0;
        result[3] += 243709764;
        result[4] += 890263;
        result[5] += 333848;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6630826;
        result[3] += 0;
        result[4] += 278193320;
        result[5] += 1507006;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 286164900;
        result[1] += 0;
        result[2] += 144085;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22167;
      } else {
        result[0] += 201694007;
        result[1] += 258118;
        result[2] += 1858455;
        result[3] += 82262452;
        result[4] += 0;
        result[5] += 0;
        result[6] += 258118;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 49935759;
        result[1] += 2459889;
        result[2] += 0;
        result[3] += 233935503;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16898231;
        result[1] += 0;
        result[2] += 3755162;
        result[3] += 66341207;
        result[4] += 199336551;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 987348;
        result[1] += 4936744;
        result[2] += 0;
        result[3] += 64177672;
        result[4] += 216229387;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1261370;
        result[2] += 0;
        result[3] += 18500103;
        result[4] += 266569678;
        result[5] += 0;
        result[6] += 0;
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
        result[4] += 285800910;
        result[5] += 530242;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 20127128;
        result[1] += 1112554;
        result[2] += 1921685;
        result[3] += 262461795;
        result[4] += 0;
        result[5] += 707989;
        result[6] += 0;
      } else {
        result[0] += 137738069;
        result[1] += 0;
        result[2] += 482445;
        result[3] += 147628193;
        result[4] += 0;
        result[5] += 482445;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 285784424;
        result[1] += 103156;
        result[2] += 371362;
        result[3] += 41262;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30946;
      } else {
        result[0] += 2872887;
        result[1] += 13406809;
        result[2] += 0;
        result[3] += 270051455;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 52842830;
        result[1] += 0;
        result[2] += 909876;
        result[3] += 232578445;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 284314736;
        result[1] += 0;
        result[2] += 1440297;
        result[3] += 345671;
        result[4] += 0;
        result[5] += 0;
        result[6] += 230447;
      }
    }
  }
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 285478554;
        result[1] += 0;
        result[2] += 710499;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 142099;
      } else {
        result[0] += 286260226;
        result[1] += 0;
        result[2] += 70926;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 3987752;
        result[1] += 1311760;
        result[2] += 1206819;
        result[3] += 188473795;
        result[4] += 91141142;
        result[5] += 209881;
        result[6] += 0;
      } else {
        result[0] += 280812539;
        result[1] += 35375;
        result[2] += 1556532;
        result[3] += 3714451;
        result[4] += 0;
        result[5] += 0;
        result[6] += 212254;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 383308;
        result[2] += 3353945;
        result[3] += 239471737;
        result[4] += 42738853;
        result[5] += 383308;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 196976770;
        result[4] += 89354382;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 283763160;
        result[5] += 2567992;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        result[0] += 11453246;
        result[1] += 103079215;
        result[2] += 148892199;
        result[3] += 0;
        result[4] += 0;
        result[5] += 22906492;
        result[6] += 0;
      } else {
        result[0] += 21994711;
        result[1] += 0;
        result[2] += 1199711;
        result[3] += 262836802;
        result[4] += 0;
        result[5] += 299927;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 286077450;
        result[1] += 0;
        result[2] += 211418;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42283;
      } else {
        result[0] += 180358057;
        result[1] += 3056916;
        result[2] += 0;
        result[3] += 102916179;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 232245403;
        result[1] += 140573;
        result[2] += 1124589;
        result[3] += 52627296;
        result[4] += 0;
        result[5] += 0;
        result[6] += 193288;
      } else {
        result[0] += 45153055;
        result[1] += 1953737;
        result[2] += 1302491;
        result[3] += 237487703;
        result[4] += 0;
        result[5] += 434163;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 634880;
        result[1] += 1428481;
        result[2] += 0;
        result[3] += 205701316;
        result[4] += 77931594;
        result[5] += 634880;
        result[6] += 0;
      } else {
        result[0] += 161485342;
        result[1] += 0;
        result[2] += 10177647;
        result[3] += 0;
        result[4] += 114668163;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 51897521;
        result[1] += 0;
        result[2] += 941878;
        result[3] += 173682449;
        result[4] += 59432551;
        result[5] += 376751;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 500141;
        result[2] += 0;
        result[3] += 8502409;
        result[4] += 277328601;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 180104480;
        result[1] += 1748587;
        result[2] += 0;
        result[3] += 104478084;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 285149176;
        result[1] += 188279;
        result[2] += 481158;
        result[3] += 491618;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20919;
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
        result[0] += 119454604;
        result[1] += 0;
        result[2] += 2011198;
        result[3] += 164653644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 211705;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 286331153;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 142777593;
        result[1] += 0;
        result[2] += 2521886;
        result[3] += 141031672;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41171799;
        result[1] += 4678613;
        result[2] += 1122867;
        result[3] += 239357872;
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
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286168081;
        result[1] += 0;
        result[2] += 152199;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10871;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 101695538;
        result[1] += 402621;
        result[2] += 2315074;
        result[3] += 151989702;
        result[4] += 29559145;
        result[5] += 268414;
        result[6] += 100655;
      } else {
        result[0] += 278199177;
        result[1] += 0;
        result[2] += 1426662;
        result[3] += 6277314;
        result[4] += 0;
        result[5] += 0;
        result[6] += 427998;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
      result[0] += 286331153;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 286183901;
        result[1] += 0;
        result[2] += 147251;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 285703061;
        result[1] += 0;
        result[2] += 549579;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 78511;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 232034;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 285983100;
        result[5] += 116017;
        result[6] += 0;
      } else {
        result[0] += 5824365;
        result[1] += 1740614;
        result[2] += 3815963;
        result[3] += 274146848;
        result[4] += 0;
        result[5] += 803360;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 175684985;
        result[1] += 0;
        result[2] += 990438;
        result[3] += 109372746;
        result[4] += 0;
        result[5] += 0;
        result[6] += 282982;
      } else {
        result[0] += 264434861;
        result[1] += 64590;
        result[2] += 1485589;
        result[3] += 20216930;
        result[4] += 0;
        result[5] += 0;
        result[6] += 129181;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 151878770;
        result[1] += 0;
        result[2] += 3541948;
        result[3] += 127368484;
        result[4] += 3541948;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44753887;
        result[1] += 2343135;
        result[2] += 2108821;
        result[3] += 237125308;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 112725055;
        result[4] += 173606097;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 407879;
        result[1] += 2651214;
        result[2] += 0;
        result[3] += 15703346;
        result[4] += 267568712;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 33117820;
        result[1] += 0;
        result[2] += 3104795;
        result[3] += 240104195;
        result[4] += 8796920;
        result[5] += 1207420;
        result[6] += 0;
      } else {
        result[0] += 260144563;
        result[1] += 151413;
        result[2] += 525963;
        result[3] += 25405614;
        result[4] += 0;
        result[5] += 0;
        result[6] += 103598;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x458d2000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 245426702;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40904450;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 286331153;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 284567027;
        result[1] += 0;
        result[2] += 1221317;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 542807;
      } else {
        result[0] += 286271873;
        result[1] += 0;
        result[2] += 59279;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 150079928;
        result[1] += 496542;
        result[2] += 1241355;
        result[3] += 92605150;
        result[4] += 41635077;
        result[5] += 124135;
        result[6] += 148962;
      } else {
        result[0] += 276535613;
        result[1] += 0;
        result[2] += 2561910;
        result[3] += 4822419;
        result[4] += 452101;
        result[5] += 452101;
        result[6] += 1507006;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 459748;
        result[2] += 0;
        result[3] += 285687505;
        result[4] += 91949;
        result[5] += 91949;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14524043;
        result[3] += 0;
        result[4] += 271807109;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
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
        result[4] += 286210490;
        result[5] += 120662;
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
        result[0] += 111196;
        result[1] += 1667948;
        result[2] += 2891110;
        result[3] += 280993717;
        result[4] += 0;
        result[5] += 667179;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 285918311;
        result[1] += 0;
        result[2] += 335433;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 77407;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 245022751;
        result[1] += 583972;
        result[2] += 1905595;
        result[3] += 38450007;
        result[4] += 0;
        result[5] += 92206;
        result[6] += 276618;
      } else {
        result[0] += 0;
        result[1] += 207787;
        result[2] += 2285662;
        result[3] += 283837703;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x437c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 285551490;
        result[1] += 0;
        result[2] += 584747;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 194915;
      } else {
        result[0] += 286291821;
        result[1] += 0;
        result[2] += 39331;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 201205675;
        result[1] += 380590;
        result[2] += 1496990;
        result[3] += 82740442;
        result[4] += 101490;
        result[5] += 101490;
        result[6] += 304472;
      } else {
        result[0] += 0;
        result[1] += 682282;
        result[2] += 2046847;
        result[3] += 232734085;
        result[4] += 50640511;
        result[5] += 227427;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 350038;
        result[1] += 0;
        result[2] += 0;
        result[3] += 124263519;
        result[4] += 161717594;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 836003;
        result[1] += 2090008;
        result[2] += 0;
        result[3] += 17347069;
        result[4] += 266058071;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 285370770;
        result[1] += 0;
        result[2] += 685987;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 274394;
      } else {
        result[0] += 286235597;
        result[1] += 0;
        result[2] += 95555;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 174738381;
        result[1] += 355249;
        result[2] += 1598623;
        result[3] += 94451979;
        result[4] += 14831669;
        result[5] += 199827;
        result[6] += 155421;
      } else {
        result[0] += 20556484;
        result[1] += 1337996;
        result[2] += 2432720;
        result[3] += 261152500;
        result[4] += 608180;
        result[5] += 243272;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 577280;
        result[1] += 1154561;
        result[2] += 0;
        result[3] += 82358691;
        result[4] += 202240619;
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
      result[4] += 286331153;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 285668195;
        result[1] += 0;
        result[2] += 662957;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286265672;
        result[1] += 0;
        result[2] += 65480;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 383950;
        result[1] += 2591666;
        result[2] += 959876;
        result[3] += 274044734;
        result[4] += 7870987;
        result[5] += 479938;
        result[6] += 0;
      } else {
        result[0] += 285461977;
        result[1] += 0;
        result[2] += 745007;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 124167;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 37880110;
        result[1] += 0;
        result[2] += 2478138;
        result[3] += 198109437;
        result[4] += 47792662;
        result[5] += 70803;
        result[6] += 0;
      } else {
        result[0] += 145233860;
        result[1] += 302675;
        result[2] += 2370959;
        result[3] += 56045438;
        result[4] += 82025097;
        result[5] += 252229;
        result[6] += 100891;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 286125553;
        result[1] += 0;
        result[2] += 205599;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286283067;
        result[1] += 0;
        result[2] += 48085;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 60469762;
        result[1] += 2235022;
        result[2] += 1117511;
        result[3] += 122243287;
        result[4] += 100265570;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 228122373;
        result[1] += 350271;
        result[2] += 1878729;
        result[3] += 51362561;
        result[4] += 4107731;
        result[5] += 254743;
        result[6] += 254743;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 196926;
        result[2] += 0;
        result[3] += 283968034;
        result[4] += 2067728;
        result[5] += 98463;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10827648;
        result[3] += 0;
        result[4] += 275503504;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286212491;
        result[5] += 118661;
        result[6] += 0;
      }
    } else {
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
        result[1] += 730436;
        result[2] += 2191309;
        result[3] += 282861579;
        result[4] += 0;
        result[5] += 547827;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 285890756;
        result[1] += 0;
        result[2] += 440396;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 286314951;
        result[1] += 0;
        result[2] += 16201;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 259376298;
        result[1] += 770138;
        result[2] += 2085792;
        result[3] += 23745943;
        result[4] += 0;
        result[5] += 0;
        result[6] += 352980;
      } else {
        result[0] += 0;
        result[1] += 511305;
        result[2] += 1942961;
        result[3] += 283876885;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
